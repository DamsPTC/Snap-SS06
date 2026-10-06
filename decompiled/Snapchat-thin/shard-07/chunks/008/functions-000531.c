/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059ddb28; end: 1059dde0f; -[SCSendToRankingRecentsModelDocObjectPersistenceService persist:for:type:completionHandler:] */

void FUN_1059ddb28(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar5);
  }
  else {
    puVar5 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar6);
    }
    else {
      puVar6 = PTR_PTR_1126c0c50;
      _objc_alloc();
      ppuVar1 = &PTR____CFConstantStringClassReference_110e15498;
      if (param_5 != 1) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e15478;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e154b8;
      if (param_5 != 2) {
        ppuVar2 = ppuVar1;
      }
      _objc_retain(ppuVar2);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c020e00();
      _objc_release(puVar4);
      _objc_release(ppuVar2);
      _objc_retain(param_6);
      _objc_retain(puVar6);
      func_0x00010c0f8500(lVar3);
      _objc_release(param_6);
      _objc_release(puVar6);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dde10; end: 1059dde9b;  */

void FUN_1059dde10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1059df84c(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059dde9c; end: 1059ddf27;  */

void FUN_1059dde9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059ddec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e153f8,0xffffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059ddf28; end: 1059ddfd7; -[SCSendToRankingRecentsModelDocObjectPersistenceService retrieveURLFor:completionHandler:] */

void FUN_1059ddf28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059ddfd8;
  puStack_40 = &UNK_1108cc418;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e7a0(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1059ddfd8; end: 1059de09b;  */

void FUN_1059ddfd8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);
  }
  else {
    lVar1 = param_2;
    func_0x00010c268120(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1,0);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059de09c; end: 1059de14b; -[SCSendToRankingRecentsModelDocObjectPersistenceService retrieveModelFor:completionHandler:] */

void FUN_1059de09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059de14c;
  puStack_40 = &UNK_1108cc418;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e7a0(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1059de14c; end: 1059de29b;  */

void FUN_1059de14c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0c58;
      _objc_alloc(PTR_PTR_1126c0c58);
      lVar1 = param_2;
      func_0x00010c296d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar2);
      _objc_retain(param_3);
      _objc_release(param_3);
      _objc_release(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,param_3);
      _objc_release(puVar2);
      goto LAB_1059de230;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
LAB_1059de230:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059de29c; end: 1059de34b; -[SCSendToRankingRecentsModelDocObjectPersistenceService retrieveModelAndURLFor:completionHandler:] */

void FUN_1059de29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059de34c;
  puStack_40 = &UNK_1108cc418;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e7a0(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1059de34c; end: 1059de503;  */

void FUN_1059de34c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0c58;
      _objc_alloc(PTR_PTR_1126c0c58);
      lVar1 = param_2;
      func_0x00010c296d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar2);
      _objc_retain(param_3);
      _objc_release(param_3);
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar1 = param_2;
      func_0x00010c268120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),puVar2,puVar3,param_3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1059de47c;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3);
LAB_1059de47c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059de504; end: 1059de867; -[SCSendToRankingRecentsModelDocObjectPersistenceService retrieveEntryFor:completionHandler:] */

void FUN_1059de504(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,puVar8);
  }
  else {
    puVar5 = PTR_PTR_1126c0c50;
    _objc_opt_self(PTR_PTR_1126c0c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6be0(auStack_a0,lVar4);
    puVar6 = &uStack_111;
    FUN_1059def84();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e15498;
    if (param_3 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e15478;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e154b8;
    if (param_3 != 2) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    uStack_180 = 0xf;
    uStack_170 = 0x100;
    _objc_retain(ppuVar2);
    ppuStack_188 = &PTR_SUB_110862760;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    plStack_128 = (long *)0x0;
    uStack_130 = 0;
    plStack_120 = (long *)0x0;
    uStack_f6 = *(undefined2 *)(puVar6 + 0x1a);
    uStack_108 = 10;
    uStack_f8 = 0x100;
    ppuStack_110 = &PTR_FUN_110862700;
    uStack_c0 = 0;
    uStack_c8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    puStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a4 = 0;
    puVar7 = auStack_a0;
    ppuStack_158 = ppuVar2;
    puStack_d8 = puVar6;
    pppuStack_d0 = &ppuStack_188;
    func_0x0001000e77a0(puVar7,&ppuStack_110,&puStack_1a0,&uStack_1a4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puStack_1a0 != (undefined8 *)0x0) {
      puStack_198 = puStack_1a0;
      __ZdlPv();
    }
    plVar3 = plStack_a8;
    ppuStack_110 = &PTR_FUN_110862700;
    plStack_a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    puStack_1a0 = &uStack_c8;
    func_0x000100105004(&puStack_1a0);
    plVar3 = plStack_120;
    ppuStack_188 = &PTR_SUB_110862760;
    plStack_120 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_128;
    plStack_128 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    puStack_1a0 = &uStack_140;
    func_0x000100105004(&puStack_1a0);
    _objc_release(ppuStack_158);
    _objc_release(ppuVar2);
    func_0x0001000e76e0(auStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(puVar5);
    (**(code **)(param_4 + 0x10))(param_4,puVar8,0);
  }
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 1059de868; end: 1059de9bb; -[SCSendToRankingRecentsModelDocObjectPersistenceService removeModelFor:completionHandler:] */

void FUN_1059de868(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
  }
  else {
    _objc_retain(param_4);
    _objc_retain(lVar1);
    func_0x00010c13e7a0(param_1);
    _objc_release(lVar1);
    puVar2 = param_4;
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1059de9bc; end: 1059deb13;  */

void FUN_1059de9bc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      func_0x00010c0f8500(uVar3);
      _objc_release(uVar2);
      _objc_release(param_2);
      goto LAB_1059deab4;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
LAB_1059deab4:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059deb14; end: 1059deba3;  */

void FUN_1059deb14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c0c60;
  FUN_1059df7d8(PTR_PTR_1126c0c60,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059deba4; end: 1059dec2f;  */

void FUN_1059deba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059debcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e153f8,0xffffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059dec30; end: 1059dec3b; -[SCSendToRankingRecentsModelDocObjectPersistenceService .cxx_destruct] */

void FUN_1059dec30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059dec3c; end: 1059ded3b; -[SCSendToRankingRecentsPersistenceEntry initWithKey:value:tag:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1059dec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126eb3a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272d12c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272d12c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272d130);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272d130) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272d134);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272d134) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272d138) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059ded3c; end: 1059ded5f; -[SCSendToRankingRecentsPersistenceEntry copyWithZone:] */

undefined8 FUN_1059ded3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059ded60; end: 1059dee03; -[SCSendToRankingRecentsPersistenceEntry hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1059ded60(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272d12c);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272d130);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272d134);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11272d138);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1059deecc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1059deed8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11272d138) ==
        *(long *)((long)param_3 + (long)_DAT_11272d138))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272d12c);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11272d12c)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272d130);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11272d130)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11272d134);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11272d134)) {
            func_0x00010c071ae0();
            goto LAB_1059deed8;
          }
          goto LAB_1059deecc;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1059deed8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1059dee04; end: 1059deef3; -[SCSendToRankingRecentsPersistenceEntry isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1059dee04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059deecc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059deed8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11272d138) == *(long *)(param_3 + (long)_DAT_11272d138))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11272d12c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272d12c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11272d130);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272d130)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11272d134);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11272d134)) {
            func_0x00010c071ae0();
            goto LAB_1059deed8;
          }
          goto LAB_1059deecc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1059deed8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059deef4; end: 1059def03; -[SCSendToRankingRecentsPersistenceEntry key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1059deef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272d12c);
}



/* Entry: 1059def04; end: 1059def13; -[SCSendToRankingRecentsPersistenceEntry value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1059def04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272d130);
}



/* Entry: 1059def14; end: 1059def23; -[SCSendToRankingRecentsPersistenceEntry tag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1059def14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272d134);
}



/* Entry: 1059def24; end: 1059def33; -[SCSendToRankingRecentsPersistenceEntry timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1059def24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272d138);
}



/* Entry: 1059def34; end: 1059def83; -[SCSendToRankingRecentsPersistenceEntry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059def34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272d134,0);
  _objc_storeStrong(param_1 + _DAT_11272d130,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272d12c,0);
  return;
}



/* Entry: 1059def84; end: 1059defe7;  */

undefined ** FUN_1059def84(void)

{
  int iVar1;
  
  if ((bRam000000011381a620 & 1) == 0) {
    iVar1 = 0x1381a620;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113115138,0x100000000);
      ___cxa_guard_release(0x11381a620);
    }
  }
  return &PTR_PTR_113115138;
}



/* Entry: 1059defe8; end: 1059df06f;  */

void FUN_1059defe8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059df070; end: 1059df0fb;  */

void FUN_1059df070(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059df0fc; end: 1059df107; +[SCSendToRankingRecentsPersistenceEntry table] */

undefined * FUN_1059df0fc(void)

{
  return &UNK_10f31b718;
}



/* Entry: 1059df108; end: 1059df2eb; +[SCSendToRankingRecentsPersistenceEntry immutableObjectParse:bufferSize:] */

void FUN_1059df108(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c0c50;
  _objc_alloc(PTR_PTR_1126c0c50);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_1059df1f0:
    puVar9 = (undefined *)0x0;
LAB_1059df1f4:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_1059df1f0;
    if (*(short *)((long)piVar1 + lVar6 + 6) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_1059df1f4;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
    if (uVar7 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((10 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 10), uVar7 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar7);
      goto LAB_1059df1fc;
    }
  }
  uVar4 = 0;
LAB_1059df1fc:
  func_0x00010c020e00(puVar3,param_2,puVar8,puVar9,puVar10,uVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059df2ec; end: 1059df30f; +[SCSendToRankingRecentsPersistenceEntry objectClassFunctionPointer] */

undefined1  [16] FUN_1059df2ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1059df308;
  auVar1._0_8_ = 0x1059df300;
  return auVar1;
}



/* Entry: 1059df310; end: 1059df41b;  */

undefined1 *
FUN_1059df310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126eb3b0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1059df41c; end: 1059df7d7;  */

void FUN_1059df41c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,&UNK_10f31b73f);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c086560(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c0c50);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_1059df714;
            puVar7 = PTR_PTR_1126c0c60;
            _objc_alloc(PTR_PTR_1126c0c60);
            puVar2 = puVar3;
            func_0x00010c086560(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c296d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c268120(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c2709c0(puVar3);
            FUN_1059df310(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_1059df528;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c0c50);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126c0c60;
        _objc_alloc(PTR_PTR_1126c0c60);
        puVar2 = puVar3;
        func_0x00010c086560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c296d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c268120(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c2709c0(puVar3);
        FUN_1059df310(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_1059df528:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1059df71c;
      }
LAB_1059df714:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1059df71c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059df7d8; end: 1059df84b;  */

void FUN_1059df7d8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1059df41c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059df84c; end: 1059dfad7;  */

void FUN_1059df84c(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c0c60;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1059df41c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126c0c60;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126c0c60;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c296d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c268120(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c2709c0(param_1);
      FUN_1059df310(puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c268120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c2709c0();
    *(undefined **)(puVar1 + 0x30) = puVar6;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1059dfad8; end: 1059dfb3b;  */

void FUN_1059dfad8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0c50;
    _objc_alloc(PTR_PTR_1126c0c50);
    func_0x00010c020e00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059dfb3c; end: 1059dfb77; -[SCSendToRankingRecentsPersistenceEntryChangeRequest .cxx_destruct] */

void FUN_1059dfb3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1059dfb78; end: 1059dfb83; -[SCSendToRankingRecentsPersistenceEntryChangeRequest table] */

undefined * FUN_1059dfb78(void)

{
  return &UNK_10f31b718;
}



/* Entry: 1059dfb84; end: 1059dfbcb; -[SCSendToRankingRecentsPersistenceEntryChangeRequest createTableWithSQLite:] */

void FUN_1059dfb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddc8545,0x8e,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1059dfbcc; end: 1059dff53; -[SCSendToRankingRecentsPersistenceEntryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1059dfbcc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1059dfad8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1059dff54(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f31b7d2);
    if (lVar6 == 0) goto LAB_1059dfef0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1059dfef0;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0c50);
    func_0x00010c21c9a0(puVar7);
LAB_1059dfed8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f31b790);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c0c50);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1059dfefc;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1059dfefc;
    }
    FUN_1059dfad8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1059dff54(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f31b81e);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c0c50);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1059dfed8;
      }
    }
LAB_1059dfef0:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1059dfefc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059dff54; end: 1059e012f;  */

ulong FUN_1059dff54(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1059e0130(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar6 == 0) {
    uVar10 = 0;
  }
  else {
    lVar7 = lVar6;
    _objc_retainAutorelease(lVar6);
    func_0x00010bf25f00();
    lVar8 = lVar6;
    func_0x00010c08fa60(lVar6);
    uVar10 = param_1;
    func_0x0001001d1030(param_1,lVar7,lVar8);
  }
  _objc_release(lVar6);
  lVar7 = param_2;
  func_0x00010c268120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1059e0130(param_1,lVar7);
  lVar8 = param_2;
  func_0x00010c2709c0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,10,lVar8,0);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce220(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1059e0130; end: 1059e025f;  */

undefined8 FUN_1059e0130(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1059e0210;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1059e0210;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1059e01d0;
    param_1 = 0;
  }
  else {
LAB_1059e01d0:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1059e0210:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1059e0260; end: 1059e03bf; -[SCSpectaclesDeviceJSON initWithSerialNumber:displayName:color:pairStatus:firstPairedTimestamp:lastNameUpdatedTimestamp:lastPairedStatusUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:] */

undefined8 *
FUN_1059e0260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126eb3b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    if (0xe < param_5) {
      param_5 = 0;
    }
    puVar1[2] = param_5;
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = param_7;
    puVar1[6] = param_9;
    puVar1[7] = param_8;
    puVar1[8] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059e03c0; end: 1059e0657; -[SCSpectaclesDeviceJSON initWithDictionary:] */

undefined1 * FUN_1059e03c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb3b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(ulong *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    if (uVar3 < 0xf) {
      uVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067fc0();
      *(ulong *)((long)puVar1 + 0x10) = uVar3;
      _objc_release(uVar2);
    }
    else {
      *(undefined8 *)((long)puVar1 + 0x10) = 0;
    }
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(ulong *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(ulong *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    *(ulong *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    *(ulong *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    *(ulong *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    *(ulong *)((long)puVar1 + 0x40) = uVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c0c68;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c0c70;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059e0658; end: 1059e0837; -[SCSpectaclesDeviceJSON toDictionary] */

void FUN_1059e0658(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dbf658);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dd9678);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e154f8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e15558);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e15518);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e15538);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e15578);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6e340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110e15598);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf6e340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110e155b8);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e0838; end: 1059e096f; -[SCSpectaclesDeviceJSON toServerLagunaDevice] */

void FUN_1059e0838(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar7 = PTR_PTR_1126c0c78;
  func_0x00010bf8e400(PTR_PTR_1126c0c78,param_2,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar11 = *(undefined **)(param_1 + 0x18);
    _objc_retain(puVar11);
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR_PTR_1126c0c80;
  _objc_alloc(PTR_PTR_1126c0c80);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0448e0(puVar8,param_2,uVar1,puVar11,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar11);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1059e0970; end: 1059e0977; -[SCSpectaclesDeviceJSON serialNumber] */

undefined8 FUN_1059e0970(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059e0978; end: 1059e097f; -[SCSpectaclesDeviceJSON color] */

undefined8 FUN_1059e0978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059e0980; end: 1059e0987; -[SCSpectaclesDeviceJSON displayName] */

undefined8 FUN_1059e0980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059e0988; end: 1059e098f; -[SCSpectaclesDeviceJSON pairStatus] */

undefined8 FUN_1059e0988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1059e0990; end: 1059e0997; -[SCSpectaclesDeviceJSON firstPairedTimestamp] */

undefined8 FUN_1059e0990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1059e0998; end: 1059e099f; -[SCSpectaclesDeviceJSON lastPairedStatusUpdatedTimestamp] */

undefined8 FUN_1059e0998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1059e09a0; end: 1059e09a7; -[SCSpectaclesDeviceJSON lastNameUpdatedTimestamp] */

undefined8 FUN_1059e09a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1059e09a8; end: 1059e09af; -[SCSpectaclesDeviceJSON deviceNumber] */

undefined8 FUN_1059e09a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1059e09b0; end: 1059e09b7; -[SCSpectaclesDeviceJSON firmwareVersion] */

undefined8 FUN_1059e09b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1059e09b8; end: 1059e09bf; -[SCSpectaclesDeviceJSON hardwareVersion] */

undefined8 FUN_1059e09b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1059e09c0; end: 1059e0a13; -[SCSpectaclesDeviceJSON .cxx_destruct] */

void FUN_1059e09c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059e0a14; end: 1059e0bc3; -[SCSpectaclesDeviceResponse initWithDictionary:] */

undefined8 * FUN_1059e0a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1126eb3c0;
  puVar2 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        puVar6 = PTR_PTR_1126c0c88;
        _objc_alloc(PTR_PTR_1126c0c88);
        func_0x00010c00c560();
        puVar7 = puVar6;
        func_0x00010c272240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    uVar8 = puVar2[1];
    puVar2[1] = puVar3;
    _objc_release(uVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(param_3 + 8);
}



/* Entry: 1059e0bc4; end: 1059e0bcb; -[SCSpectaclesDeviceResponse deviceList] */

undefined8 FUN_1059e0bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059e0bcc; end: 1059e0bd7; -[SCSpectaclesDeviceResponse .cxx_destruct] */

void FUN_1059e0bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059e0bd8; end: 1059e0d77; +[SCSpectaclesDeviceUpdateDeviceRequest updateDisplayNameRequest:device:timestsamp:] */

void FUN_1059e0bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126c0c90;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf40c40();
  uVar4 = param_4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb19a0();
  uVar6 = param_4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c089780();
  uVar8 = param_4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c089980();
  uVar10 = param_4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf70cc0();
  uVar12 = param_4;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_4;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c044920(puVar1,param_2,uVar2,param_3,uVar3,
                      &PTR____CFConstantStringClassReference_110e15618,0,uVar5,uVar7,uVar9,uVar11,
                      uVar12,uVar13);
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e0d78; end: 1059e0f67; +[SCSpectaclesDeviceUpdateDeviceRequest updateDeviceInfoRequest:timestamp:] */

void FUN_1059e0d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c082060();
  puVar3 = PTR_PTR_1126c0c90;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e15638;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e15618;
  }
  _objc_retain(ppuVar1);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf86080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf40c40();
  uVar7 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb19a0();
  uVar9 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c089780();
  uVar11 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c089980();
  uVar13 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf70cc0();
  uVar15 = param_3;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c044920(puVar3,param_2,uVar2,uVar5,uVar6,ppuVar1,1,uVar8,uVar10,uVar12,uVar14,uVar15,
                      uVar16);
  _objc_release(ppuVar1);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059e0f68; end: 1059e112b; +[SCSpectaclesDeviceUpdateDeviceRequest updateFirmwareVersionRequest:] */

void FUN_1059e0f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126c0c90;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf40c40();
  uVar6 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb19a0();
  uVar8 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c089780();
  uVar10 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c089980();
  uVar12 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf70cc0();
  uVar14 = param_3;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c044920(puVar1,param_2,uVar2,uVar4,uVar5,
                      &PTR____CFConstantStringClassReference_110e15618,2,uVar7,uVar9,uVar11,uVar13,
                      uVar14,uVar15);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e112c; end: 1059e12ef; +[SCSpectaclesDeviceUpdateDeviceRequest forgetDeviceRequest:] */

void FUN_1059e112c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126c0c90;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf40c40();
  uVar6 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb19a0();
  uVar8 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c089780();
  uVar10 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c089980();
  uVar12 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf70cc0();
  uVar14 = param_3;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c044920(puVar1,param_2,uVar2,uVar4,uVar5,
                      &PTR____CFConstantStringClassReference_110e15638,3,uVar7,uVar9,uVar11,uVar13,
                      uVar14,uVar15);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e12f0; end: 1059e141f; -[SCSpectaclesDeviceUpdateDeviceRequest initWithSerialNumber:displayName:color:pairStatus:action:firstPairedTimestamp:lastNameUpdatedTimestamp:lastPairedStatusUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:] */

undefined8 *
FUN_1059e12f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  puStack_68 = PTR_PTR_1126eb3c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c0c88;
    _objc_alloc();
    func_0x00010c044940();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar1[2] = param_7;
  }
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059e1420; end: 1059e1537; -[SCSpectaclesDeviceUpdateDeviceRequest toDictionary] */

void FUN_1059e1420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c271c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar4,param_2,uVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar2,param_2,puVar4,4);
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e155f8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010bdc4740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110daf5b8);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059e1538; end: 1059e155b; -[SCSpectaclesDeviceUpdateDeviceRequest _actionString] */

undefined * FUN_1059e1538(long param_1)

{
  if (*(ulong *)(param_1 + 0x10) < 4) {
    return (&PTR_PTR_1108cc478)[*(ulong *)(param_1 + 0x10)];
  }
  return (undefined *)0x0;
}



/* Entry: 1059e155c; end: 1059e1567; -[SCSpectaclesDeviceUpdateDeviceRequest .cxx_destruct] */

void FUN_1059e155c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059e1568; end: 1059e1633; -[SCSpectaclesServerMetadataFetcher initWithHttpMetadataService:httpRequestModifier:grpcService:] */

undefined1 *
FUN_1059e1568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eb3d0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059e1634; end: 1059e1877; -[SCSpectaclesServerMetadataFetcher requestAllDeviceList:] */

void FUN_1059e1634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf225e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar7 = auStack_58;
  _objc_initWeak(puVar7,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfab760(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e1878; end: 1059e1883;  */

void FUN_1059e1878(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,6)
  ;
  return;
}



/* Entry: 1059e1884; end: 1059e195f;  */

void FUN_1059e1884(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126c0c98;
    _objc_alloc(PTR_PTR_1126c0c98);
    func_0x00010c00c560();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      puVar2 = puVar1;
      func_0x00010bf709a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,1,puVar2);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059e1960; end: 1059e1a97; -[SCSpectaclesServerMetadataFetcher updateDeviceDisplayName:device:timestamp:completion:] */

void FUN_1059e1960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0c90;
  func_0x00010c2853a0(PTR_PTR_1126c0c90);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  func_0x00010bed6d60(param_1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e1a98; end: 1059e1aab;  */

void FUN_1059e1a98(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e1aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059e1aac; end: 1059e1bcb; -[SCSpectaclesServerMetadataFetcher updateDeviceInfo:timestamp:completion:] */

void FUN_1059e1aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0c90;
  func_0x00010c285180(PTR_PTR_1126c0c90);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010bed6d60(param_1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e1bcc; end: 1059e1bdf;  */

void FUN_1059e1bcc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e1bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059e1be0; end: 1059e1cf7; -[SCSpectaclesServerMetadataFetcher updateFirmwareVersion:completion:] */

void FUN_1059e1be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0c90;
  func_0x00010c285d20(PTR_PTR_1126c0c90);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bed6d60(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e1cf8; end: 1059e1d0b;  */

void FUN_1059e1cf8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e1d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059e1d0c; end: 1059e1e23; -[SCSpectaclesServerMetadataFetcher forgetDevice:completion:] */

void FUN_1059e1d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0c90;
  func_0x00010bfb5580(PTR_PTR_1126c0c90);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bed6d60(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e1e24; end: 1059e1e37;  */

void FUN_1059e1e24(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e1e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059e1e38; end: 1059e2053; -[SCSpectaclesServerMetadataFetcher _updateDevice:completion:] */

void FUN_1059e1e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e156d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e15758,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059e2054;
  puStack_70 = &UNK_110884ec8;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar2;
  func_0x00010bf225e0(uVar2,param_2,1,puVar4,0,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1059e20b4;
  puStack_98 = &UNK_1108cc518;
  uStack_90 = param_4;
  _objc_retain(param_4);
  func_0x00010bfab760(param_1,param_2,uVar5,puVar6,1,puVar3,&puStack_b0);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uStack_90);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e2054; end: 1059e20b3;  */

void FUN_1059e2054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290d20(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059e20b4; end: 1059e218f;  */

void FUN_1059e20b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126c0c88;
    _objc_alloc(PTR_PTR_1126c0c88);
    func_0x00010c00c560();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      puVar2 = puVar1;
      func_0x00010c272240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,1,puVar2);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059e2190; end: 1059e2353; +[SCSpectaclesServerMetadataFetcher _deviceListInfo:] */

void FUN_1059e2190(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
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
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar5 = uVar7;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4098);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar5);
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c0ca0;
  func_0x00010c0cb140(PTR_PTR_1126c0ca0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160d40();
  puVar3 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar4 = PTR_PTR_1126c0ca8;
  _objc_opt_class(PTR_PTR_1126c0ca8);
  func_0x00010c0199c0(puVar3,param_2,&PTR___NSConcreteGlobalBlock_1108cc568,puVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e15778,puVar4,puVar6,
                      puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059e2354; end: 1059e245b; -[SCSpectaclesServerMetadataFetcher acceptTermsOfUse:accessTokenHeader:queue:completionHandler:] */

void FUN_1059e2354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c0ca0;
  func_0x00010c0cb140(PTR_PTR_1126c0ca0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160d40();
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar3 = PTR_PTR_1126c0ca8;
  _objc_opt_class(PTR_PTR_1126c0ca8);
  func_0x00010c0199c0(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1108cc568,puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e15778,puVar3,puVar5,
                      puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059e245c; end: 1059e245f;  */

void FUN_1059e245c(void)

{
  return;
}



/* Entry: 1059e2460; end: 1059e26b7; -[SCSpectaclesServerMetadataFetcher fetchNewTokensWithParameters:queue:completionHandler:] */

void FUN_1059e2460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar5 = uVar7;
  func_0x00010bf225e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bfab760(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e26b8; end: 1059e26fb;  */

void FUN_1059e26b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e26fc; end: 1059e2953; -[SCSpectaclesServerMetadataFetcher fetchRefreshTokenWithParameters:queue:completionHandler:] */

void FUN_1059e26fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar5 = uVar7;
  func_0x00010bf225e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bfab760(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c290d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useURLEncodedFormBody__112681d70,*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 1059e2954; end: 1059e295f;  */

void FUN_1059e2954(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useURLEncodedFormBody__112681d70,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1059e2960; end: 1059e2b27; -[SCSpectaclesServerMetadataFetcher fetchAuthorizationCodeWithParameters:queue:completionHandler:] */

void FUN_1059e2960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e156d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e157d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059e2b28;
  puStack_60 = &UNK_110884ec8;
  uStack_58 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar5;
  func_0x00010bf225e0(uVar5,param_2,1,puVar2,0,0,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bfab760(param_1,param_2,uVar3,puVar4,1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059e2b28; end: 1059e2b6b;  */

void FUN_1059e2b28(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e2b6c; end: 1059e2cef; -[SCSpectaclesServerMetadataFetcher fetchPushMessagePatternWithCompletionHandler:] */

void FUN_1059e2b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e156d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e157f8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf225e0(uVar5,param_2,1,puVar2,0,0,&PTR___NSConcreteGlobalBlock_1108cc588);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab760(param_1,param_2,uVar3,puVar4,1,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1059e2cf0; end: 1059e2d33;  */

void FUN_1059e2cf0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290d20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e2d34; end: 1059e2d43; -[SCSpectaclesServerMetadataFetcher fetchURL:parameters:queue:completionHandler:] */

void FUN_1059e2d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaafd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchURL_parameters_shouldParseR_1125c8598,param_3,param_4,1,param_5,
             param_6);
  return;
}



/* Entry: 1059e2d44; end: 1059e2f23; -[SCSpectaclesServerMetadataFetcher fetchURL:parameters:shouldParseResponse:queue:completionHandler:] */

void FUN_1059e2d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  puVar1 = puVar2;
  func_0x00010bdc3460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e156d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar2,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059e2f24;
  puStack_70 = &UNK_110884ec8;
  uStack_68 = param_4;
  _objc_retain(param_4);
  uVar4 = uVar3;
  func_0x00010bf225e0(uVar3,param_2,1,puVar2,0,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  func_0x00010bfab760(param_1,param_2,uVar4,puVar6,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059e2f24; end: 1059e2f67;  */

void FUN_1059e2f24(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290d20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e2f68; end: 1059e30c7; -[SCSpectaclesServerMetadataFetcher fetchWithRequest:context:shouldParseResponse:queue:completionHandler:] */

void FUN_1059e2f68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_7);
  func_0x00010c25f600(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e30c8; end: 1059e3243;  */

void FUN_1059e30c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = param_6;
  if ((*(char *)(param_1 + 0x30) == '\x01') &&
     (puVar1 = param_5, func_0x00010c08fa60(), puVar1 != (undefined *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(param_5);
    if (puVar2 == (undefined *)0x0) {
      _objc_retain(0);
      _objc_release(param_6);
      param_3 = 2;
      uVar4 = 0;
    }
    _objc_release(0);
  }
  else {
    puVar1 = param_5;
    func_0x00010c08fa60();
    puVar2 = param_5;
    if (puVar1 == (undefined *)0x0) {
      _objc_release(param_5);
      puVar2 = (undefined *)0x0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_3,param_4,puVar2,uVar4);
  }
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1059e3244; end: 1059e32bf; -[SCSpectaclesServerMetadataFetcher .cxx_destruct] */

void FUN_1059e3244(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059e32c0; end: 1059e3427; -[SCSpectaclesServerNetworkingServiceProvider _createServerMetadataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e32c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0cb8;
  _objc_alloc(PTR_PTR_1126c0cb8);
  lVar5 = (long)_DAT_11272d194;
  lVar3 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01aca0(puVar2);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


