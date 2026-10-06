/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10614f438; end: 10614f463;  */

void FUN_10614f438(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614f464; end: 10614f467;  */

void FUN_10614f464(void)

{
  return;
}



/* Entry: 10614f468; end: 10614f59b;  */

void FUN_10614f468(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10614f5a4;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10614f5d0;
  puStack_88 = &UNK_110849200;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10614f59c; end: 10614f5a3;  */

void FUN_10614f59c(void)

{
  return;
}



/* Entry: 10614f5a4; end: 10614f653;  */

void FUN_10614f5a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee94c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614f654; end: 10614f663; -[SCFeatureContextShortcutImpl _setIsRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614f654(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274067c) = param_3;
  return;
}



/* Entry: 10614f664; end: 10614f7db; -[SCFeatureContextShortcutImpl _logCreateTapWithContextAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614f664(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11274063c);
  func_0x00010c243400();
  if (lVar2 == 0x47) {
    param_1 = param_1 + _DAT_112740630;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf2aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010c22d640(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar5);
    uVar6 = 0x47;
    func_0x0001008cc2b4(0x47);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 2;
    func_0x00010b9f8818(2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    FUN_10614f7dc(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a23a0(lVar3,param_2,ppuVar4,ppuVar1,uVar6,uVar7,ppuVar5);
    _objc_release(ppuVar1);
    _objc_release(ppuVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(ppuVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10614f7dc; end: 10614f937;  */

void FUN_10614f7dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_10614de24();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c277e80();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  if (lVar2 == 0) {
    func_0x00010c1d0560(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110e42958);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db1798);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110e42958);
    _objc_release(puVar4);
  }
  lStack_38 = 0;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_38 == 0) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10614f938; end: 10614fa93; -[SCFeatureContextShortcutImpl _logCameraShortcutEnableWithContextAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614f938(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11274063c);
  func_0x00010c243400();
  if (lVar2 == 0x47) {
    param_1 = param_1 + _DAT_112740630;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf2aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010c22d640(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar5);
    uVar6 = 2;
    func_0x00010b9f8818(2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    FUN_10614f7dc(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a23c0(lVar3,param_2,ppuVar4,0,ppuVar1,uVar6,PTR____NSArray0__struct_11034ab48,
                        ppuVar5);
    _objc_release(ppuVar1);
    _objc_release(ppuVar5);
    _objc_release(uVar6);
    _objc_release(ppuVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10614fa94; end: 10614fbef; -[SCFeatureContextShortcutImpl _logCameraShortcutTapWithContextAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614fa94(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11274063c);
  func_0x00010c243400();
  if (lVar2 == 0x47) {
    param_1 = param_1 + _DAT_112740630;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf2aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010c22d640(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar5);
    uVar6 = 2;
    func_0x00010b9f8818(2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    FUN_10614f7dc(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2420(lVar3,param_2,ppuVar4,0,ppuVar1,uVar6,PTR____NSArray0__struct_11034ab48,
                        ppuVar5);
    _objc_release(ppuVar1);
    _objc_release(ppuVar5);
    _objc_release(uVar6);
    _objc_release(ppuVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10614fbf0; end: 10614fbff; -[SCFeatureContextShortcutImpl activated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10614fbf0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740638);
}



/* Entry: 10614fc00; end: 10614fc1f; -[SCFeatureContextShortcutImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614fc00(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10614fc20; end: 10614fc2f; -[SCFeatureContextShortcutImpl sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10614fc20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740634);
}



/* Entry: 10614fc30; end: 10614fc3f; -[SCFeatureContextShortcutImpl setSourcePageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614fc30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112740634) = param_3;
  return;
}



/* Entry: 10614fc40; end: 10614fdbf; -[SCFeatureContextShortcutImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614fc40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112740640);
  _objc_storeStrong(param_1 + _DAT_112740680,0);
  _objc_storeStrong(param_1 + _DAT_11274064c,0);
  _objc_storeStrong(param_1 + _DAT_112740648,0);
  _objc_storeStrong(param_1 + _DAT_11274066c,0);
  _objc_storeStrong(param_1 + _DAT_112740650,0);
  _objc_destroyWeak(param_1 + _DAT_112740630);
  _objc_destroyWeak(param_1 + _DAT_11274062c);
  _objc_storeStrong(param_1 + _DAT_112740628,0);
  _objc_storeStrong(param_1 + _DAT_112740624,0);
  _objc_storeStrong(param_1 + _DAT_112740620,0);
  _objc_storeStrong(param_1 + _DAT_112740678,0);
  _objc_storeStrong(param_1 + _DAT_112740674,0);
  _objc_storeStrong(param_1 + _DAT_112740668,0);
  _objc_storeStrong(param_1 + _DAT_11274061c,0);
  _objc_storeStrong(param_1 + _DAT_112740618,0);
  _objc_storeStrong(param_1 + _DAT_112740614,0);
  _objc_storeStrong(param_1 + _DAT_112740610,0);
  _objc_storeStrong(param_1 + _DAT_112740608,0);
  _objc_storeStrong(param_1 + _DAT_112740660,0);
  _objc_storeStrong(param_1 + _DAT_112740684,0);
  _objc_destroyWeak(param_1 + _DAT_112740654);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274063c,0);
  return;
}



/* Entry: 10614fdc0; end: 10614ffa3; -[SCFeatureContextShortcutToastLayoutController initWithToastView:hostView:liveTopAnchor:constant:] */

undefined8 *
FUN_10614fdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_90 = PTR_PTR_1126efe18;
  puVar8 = &uStack_98;
  uStack_98 = param_2;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar1 = puVar8[1];
    puVar8[1] = param_4;
    _objc_release(uVar1);
    puVar2 = param_4;
    func_0x00010c27ad80();
    *(char *)(puVar8 + 3) = (char)puVar2;
    func_0x00010c219b60(param_4);
    puVar2 = param_4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010bf34860(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    puStack_88 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar8[2];
    puVar8[2] = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(puVar2);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar8;
  }
  ___stack_chk_fail();
  if ((*(byte *)((long)param_4 + 0x19) & 1) != 0) {
    return param_4;
  }
  *(undefined1 *)((long)param_4 + 0x19) = 1;
  puVar8 = (undefined8 *)param_4[1];
  _objc_retain(puVar8);
  uVar7 = param_4[2];
  param_4[2] = 0;
  _objc_retain(uVar7);
  _objc_release(uVar7);
  uVar1 = param_4[1];
  param_4[1] = 0;
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_retain(puVar8);
  func_0x00010bf65be0(puVar6);
  func_0x00010c219b60(puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 10614ffa4; end: 10615004b; -[SCFeatureContextShortcutToastLayoutController invalidate] */

void FUN_10614ffa4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_retain(uVar5);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  func_0x00010bf65be0(puVar2,param_2,uVar5);
  func_0x00010c219b60(uVar4,param_2,uVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10615004c; end: 106150147; -[SCFeatureContextShortcutToastLayoutController dealloc] */

void FUN_10615004c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = uVar4;
    _objc_retain(uVar4);
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106150148;
    puStack_60 = &UNK_11084d5f8;
    uStack_58 = uVar3;
    uStack_50 = uVar4;
    uStack_48 = uVar1;
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    func_0x00010c0f88c0(uVar2);
    _objc_release(uVar2);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  puStack_80 = PTR_PTR_1126efe18;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106150148; end: 10615019b;  */

void FUN_106150148(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010bf65be0(puVar4,param_2,uVar2);
  func_0x00010c219b60(uVar1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10615019c; end: 1061501cb; -[SCFeatureContextShortcutToastLayoutController .cxx_destruct] */

void FUN_10615019c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061501cc; end: 106150417; -[SCFeatureContextualSurveyPromptImpl initWithAfterCaptureActionTracker:cameraUIScopeViewContainer:deepLinkHandlingServices:featureSettingsService:cameraConfig:cameraUserBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061501cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126efe20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740698) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274069c) = 0;
    uVar2 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127406a0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127406a4,param_4);
    lVar6 = (long)_DAT_1127406a8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127406ac;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127406b0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127406b4,param_8);
    _objc_initWeak(auStack_78,puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010befe720();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127406b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127406b8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106150418; end: 106150467;  */

void FUN_106150418(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be67aa0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106150468; end: 1061504d7; -[SCFeatureContextualSurveyPromptImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106150468(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406bc);
  *(undefined8 *)(param_1 + _DAT_1127406bc) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406c0);
  *(undefined8 *)(param_1 + _DAT_1127406c0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406c4);
  *(undefined8 *)(param_1 + _DAT_1127406c4) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1061504d8; end: 106150527; -[SCFeatureContextualSurveyPromptImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061504d8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_1127406b8));
  puStack_28 = PTR_PTR_1126efe20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106150528; end: 106150587; -[SCFeatureContextualSurveyPromptImpl _didDiscardSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106150528(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + (long)_DAT_112740698);
  if (*(char *)(param_1 + (long)_DAT_11274069c) == '\x01') {
    uVar1 = param_1;
    func_0x00010be01fa0();
    if (uVar1 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010be7a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAlertDialogIfNeeded_11257c1a0);
      return;
    }
  }
  else {
    *(ulong *)(param_1 + (long)_DAT_112740698) = uVar2 + 1;
  }
  return;
}



/* Entry: 106150588; end: 1061505cb; -[SCFeatureContextualSurveyPromptImpl _didPostSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106150588(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + (long)_DAT_112740698);
  uVar1 = param_1;
  func_0x00010be01fa0();
  if (uVar2 < uVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAlertDialogIfNeeded_11257c1a0);
  return;
}



/* Entry: 1061505cc; end: 1061505df; -[SCFeatureContextualSurveyPromptImpl _didSaveSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061505cc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274069c) = 1;
  return;
}



/* Entry: 1061505e0; end: 1061505fb; -[SCFeatureContextualSurveyPromptImpl _resetSnapsDiscarded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061505e0(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112740698) = 0;
  *(undefined1 *)(param_1 + _DAT_11274069c) = 0;
  return;
}



/* Entry: 1061505fc; end: 1061506c3; -[SCFeatureContextualSurveyPromptImpl _presentAlertDialogIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061505fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010beb4d80();
  if ((int)lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bdc9b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_1127406a4;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cfca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be65380(param_1);
    func_0x00010bea5240(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1061506c4; end: 106150993; -[SCFeatureContextualSurveyPromptImpl _alertDialog] */

void FUN_1061506c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  ppuVar6 = &puStack_e0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be459e0();
  if ((int)lVar1 == 0) {
    func_0x00010619f814();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010619f82c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010619f844();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010619f85c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010619f7b4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010619f7cc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010619f7e4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010619f7fc();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_90,param_1);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106150994;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  ppuVar5 = &puStack_b8;
  _objc_retainBlock(ppuVar5);
  puStack_e0 = puVar7;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106150a34;
  puStack_c8 = &UNK_1108482a8;
  puVar11 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar11);
  _objc_retainBlock(&puStack_e0);
  puVar7 = PTR_PTR_1126aed70;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126aed70;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar7;
  puStack_80 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9);
  _objc_release(puVar10);
  func_0x00010c211b40(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar11);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf84b00(puVar11);
    func_0x00010be674c0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(puVar11);
  return;
}



/* Entry: 106150994; end: 106150a2b;  */

void FUN_106150994(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
    func_0x00010be674c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106150a2c; end: 106150a33;  */

void FUN_106150a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentInclusionPanel_11257c938);
  return;
}



/* Entry: 106150a34; end: 106150a7b;  */

void FUN_106150a34(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be68a00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106150a7c; end: 106150b7f; -[SCFeatureContextualSurveyPromptImpl _presentInclusionPanel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106150a7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e429b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127406a8);
  func_0x00010bf67f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0(uVar3,param_2,puVar4,PTR____NSDictionary0__struct_11034ab58,1,0);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106150b80; end: 106150c07; -[SCFeatureContextualSurveyPromptImpl _onAfterCaptureAction:] */

void FUN_106150b80(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c2827c0();
  if (param_3 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be000d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSaveSnap_11255d9d0);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be93c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSnapsDiscarded_1125828a8);
      return;
    }
  }
  else {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPostSnap_11255d4d8);
      return;
    }
    if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDiscardSnap_11255ce88);
      return;
    }
  }
  return;
}



/* Entry: 106150c08; end: 106150c37; -[SCFeatureContextualSurveyPromptImpl _onAccept] */

void FUN_106150c08(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be59740(param_1,param_2,1);
  func_0x00010be929a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be93c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSnapsDiscarded_1125828a8);
  return;
}



/* Entry: 106150c38; end: 106150c73; -[SCFeatureContextualSurveyPromptImpl _onDecline] */

void FUN_106150c38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be59740(param_1,param_2,0);
  func_0x00010bde6440(param_1);
  func_0x00010bea2dc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be93c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSnapsDiscarded_1125828a8);
  return;
}



/* Entry: 106150c74; end: 106150ca7; -[SCFeatureContextualSurveyPromptImpl _setDenyTimeOneMonth] */

void FUN_106150c74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be65380();
  lVar2 = param_1;
  func_0x00010bde98e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea5250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setLastTriggeredTimeMs__112586e38,lVar1 - lVar2);
  return;
}



/* Entry: 106150ca8; end: 106150cdb; -[SCFeatureContextualSurveyPromptImpl _setDenyTimeSixMonths] */

void FUN_106150ca8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be65380();
  lVar2 = param_1;
  func_0x00010bde98c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea5250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setLastTriggeredTimeMs__112586e38,lVar1 - lVar2);
  return;
}



/* Entry: 106150cdc; end: 106150ce3; -[SCFeatureContextualSurveyPromptImpl _resetDenyCount] */

void FUN_106150cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setConsecutiveDenyCount__112586518,0);
  return;
}



/* Entry: 106150ce4; end: 106150d2b; -[SCFeatureContextualSurveyPromptImpl _lastTriggeredTimeMsSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106150ce4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406ac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf97640();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106150d2c; end: 106150d6f; -[SCFeatureContextualSurveyPromptImpl _setLastTriggeredTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106150d2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406ac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106150d70; end: 106150db7; -[SCFeatureContextualSurveyPromptImpl _consecutiveDenyCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106150d70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406ac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf97540();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106150db8; end: 106150dfb; -[SCFeatureContextualSurveyPromptImpl _setConsecutiveDenyCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106150db8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406ac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1969e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106150dfc; end: 106150e17; -[SCFeatureContextualSurveyPromptImpl _isWithinConsecutiveDenyCooldownThreshold] */

bool FUN_106150dfc(ulong param_1)

{
  func_0x00010bde6440();
  return param_1 < 2;
}



/* Entry: 106150e18; end: 106150e7b; -[SCFeatureContextualSurveyPromptImpl _shouldPresentAlertDialog] */

bool FUN_106150e18(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be459e0();
  lVar2 = param_1;
  if ((int)lVar1 == 0) {
    func_0x00010bde98c0(param_1);
  }
  else {
    func_0x00010bde98e0(param_1);
  }
  lVar1 = param_1;
  func_0x00010be65380(param_1);
  func_0x00010be47180(param_1);
  return lVar2 < lVar1 - param_1;
}



/* Entry: 106150e7c; end: 106150ed3; -[SCFeatureContextualSurveyPromptImpl _nowSince1970InMs] */

long FUN_106150e7c(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 106150ed4; end: 106150f3b; -[SCFeatureContextualSurveyPromptImpl _discardThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106150ed4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127406b0);
  func_0x00010bf4f9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dec80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106150f3c; end: 106150faf; -[SCFeatureContextualSurveyPromptImpl _cooldownShortThreashold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106150f3c(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127406b0);
  func_0x00010bf4f9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51b00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (long)(param_1 * 86400000.0);
}



/* Entry: 106150fb0; end: 106151023; -[SCFeatureContextualSurveyPromptImpl _cooldownLongThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106150fb0(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127406b0);
  func_0x00010bf4f9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (long)(param_1 * 86400000.0);
}



/* Entry: 106151024; end: 1061510b7; -[SCFeatureContextualSurveyPromptImpl _logSurveyEventWithDidAccept:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151024(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c8560;
  _objc_alloc_init(PTR_PTR_1126c8560);
  func_0x00010c1cebe0();
  func_0x00010c210460(puVar1,param_2,param_3 ^ 1);
  param_1 = param_1 + _DAT_1127406b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061510b8; end: 10615116f; -[SCFeatureContextualSurveyPromptImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061510b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127406c4,0);
  _objc_storeStrong(param_1 + _DAT_1127406c0,0);
  _objc_storeStrong(param_1 + _DAT_1127406bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127406b4);
  _objc_storeStrong(param_1 + _DAT_1127406b0,0);
  _objc_storeStrong(param_1 + _DAT_1127406ac,0);
  _objc_storeStrong(param_1 + _DAT_1127406a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127406a4);
  _objc_storeStrong(param_1 + _DAT_1127406a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127406b8,0);
  return;
}



/* Entry: 106151170; end: 10615117b; -[SCFeatureSettingsService hasEntryPointLastTriggeredTimeMs] */

void FUN_106151170(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e429d8);
  return;
}



/* Entry: 10615117c; end: 106151187; -[SCFeatureSettingsService entryPointLastTriggeredTimeMsServerParam] */

undefined ** FUN_10615117c(void)

{
  return &PTR____CFConstantStringClassReference_110e429d8;
}



/* Entry: 106151188; end: 106151197; -[SCFeatureSettingsService setEntryPointLastTriggeredTimeMs:] */

void FUN_106151188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e429d8,param_3);
  return;
}



/* Entry: 106151198; end: 10615119f; -[SCFeatureSettingsService MQS_ENTRY_POINT_LAST_TRIGGERED_TIME_MS_client_value:] */

void FUN_106151198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1061511a0; end: 1061511a7; -[SCFeatureSettingsService MQS_ENTRY_POINT_LAST_TRIGGERED_TIME_MS_server_value:] */

void FUN_1061511a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1061511a8; end: 1061511b7; -[SCFeatureSettingsService entryPointLastTriggeredTimeMs] */

void FUN_1061511a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e429d8,0);
  return;
}



/* Entry: 1061511b8; end: 1061511c3; -[SCFeatureSettingsService isEntryPointConsecutiveSurveyDenyCountAvailable] */

void FUN_1061511b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e429f8);
  return;
}



/* Entry: 1061511c4; end: 1061511cf; -[SCFeatureSettingsService entryPointConsecutiveSurveyDenyCountServerParam] */

undefined ** FUN_1061511c4(void)

{
  return &PTR____CFConstantStringClassReference_110e429f8;
}



/* Entry: 1061511d0; end: 1061511df; -[SCFeatureSettingsService setEntryPointConsecutiveSurveyDenyCount:] */

void FUN_1061511d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e429f8,param_3);
  return;
}



/* Entry: 1061511e0; end: 1061511e7; -[SCFeatureSettingsService MQS_ENTRY_POINT_CONSECUTIVE_SURVEY_DENY_COUNT_client_value:] */

void FUN_1061511e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1061511e8; end: 1061511ef; -[SCFeatureSettingsService MQS_ENTRY_POINT_CONSECUTIVE_SURVEY_DENY_COUNT_server_value:] */

void FUN_1061511e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1061511f0; end: 1061511ff; -[SCFeatureSettingsService entryPointConsecutiveSurveyDenyCount] */

void FUN_1061511f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e429f8,0);
  return;
}



/* Entry: 106151200; end: 10615120b; +[SCContinuousCaptureClipThumbnailsView preferredHeight] */

undefined8 FUN_106151200(void)

{
  return 0x4042000000000000;
}



/* Entry: 10615120c; end: 106151233; -[SCContinuousCaptureClipThumbnailsView hasClips] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10615120c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127406c8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106151234; end: 1061512ab; -[SCContinuousCaptureClipThumbnailsView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106151234(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efe28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127406c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127406c8) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010beab960(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061512ac; end: 10615162f; -[SCContinuousCaptureClipThumbnailsView _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061512ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new();
  func_0x00010c1f7ac0();
  func_0x00010c1b6260(0x4042000000000000,0x4042000000000000,puVar1);
  func_0x00010c1c8300(0x4010000000000000,puVar1);
  func_0x00010c1c82c0(0x4010000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar15 = (long)_DAT_1127406cc;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar15),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15),param_2,param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1fbe00(*(undefined8 *)(param_1 + lVar15),param_2,3);
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110f2c398);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  puVar2 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  func_0x00010c126000(uVar14,param_2,puVar2,&PTR____CFConstantStringClassReference_110e42a18);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar13 = 4;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar17);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(lVar16);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar11 != (undefined *)0x0) {
    puVar2 = puVar11;
  }
  lVar17 = (long)_DAT_1127406c8;
  _objc_retain(puVar2);
  uVar14 = *(undefined8 *)(puVar1 + lVar17);
  *(undefined **)(puVar1 + lVar17) = puVar2;
  _objc_release(uVar14);
  _objc_release(puVar11);
  lVar16 = (long)_DAT_1127406cc;
  func_0x00010c128b60(*(undefined8 *)(puVar1 + lVar16));
  if (iVar13 != 0) {
    lVar12 = *(long *)(puVar1 + lVar17);
    func_0x00010bf529e0();
    if (lVar12 != 0) {
      func_0x00010c08cdc0(*(undefined8 *)(puVar1 + lVar16));
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      uVar14 = *(undefined8 *)(puVar1 + lVar16);
      lVar16 = *(long *)(puVar1 + lVar17);
      func_0x00010bf529e0(lVar16);
      func_0x00010bfed020(puVar2,param_2,lVar16 + -1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1525a0(uVar14,param_2,puVar2,0x20,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 106151630; end: 106151723; -[SCContinuousCaptureClipThumbnailsView updateWithSegments:scrollToLastClip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151630(long param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf51e00();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar3 = param_3;
  }
  lVar5 = (long)_DAT_1127406c8;
  _objc_retain(puVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar1);
  _objc_release(param_3);
  lVar4 = (long)_DAT_1127406cc;
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar4));
  if (param_4 != 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar4));
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010bf529e0(lVar4);
      func_0x00010bfed020(puVar3,param_2,lVar4 + -1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1525a0(uVar1,param_2,puVar3,0x20,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 106151724; end: 106151733; -[SCContinuousCaptureClipThumbnailsView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127406c8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106151734; end: 106151a8b; -[SCContinuousCaptureClipThumbnailsView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151734(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf6e0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + _DAT_1127406c8);
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x00010c182980(param_3);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_90,lVar5);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c182980(param_3);
    func_0x00010c27c900(&uStack_f0,lVar5);
  }
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  func_0x00010c21a5e0(param_3);
  func_0x00010c28b700(param_3);
  func_0x00010c192e20(param_3);
  func_0x00010c173380(param_3);
  func_0x00010c17e480(param_3);
  func_0x00010c1b5280(param_3);
  func_0x00010c218dc0(param_3);
  func_0x00010c2140a0(param_3);
  func_0x00010c194ce0(param_3);
  lVar1 = lVar5;
  func_0x00010bfb13c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c214080(param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(param_3);
    _objc_release(puVar2);
  }
  func_0x00010c17d4a0(param_3);
  func_0x00010bfe25e0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c280560();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3);
  _objc_release(puVar2);
  func_0x00010c1af000(param_3);
  func_0x00010c161080(param_3);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_c0,lVar5);
  }
  uStack_108 = uStack_a0;
  uStack_110 = uStack_a8;
  uStack_100 = uStack_98;
  _CMTimeGetSeconds(&uStack_110);
  uVar3 = param_3;
  func_0x00010bfb5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  func_0x00010619f9c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0();
  func_0x00010c09e8a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_3);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + _DAT_1127406c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + _DAT_1127406cc,0);
  return;
}



/* Entry: 106151a8c; end: 106151acb; -[SCContinuousCaptureClipThumbnailsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151a8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127406c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127406cc,0);
  return;
}



/* Entry: 106151acc; end: 106151ba7; -[SCContinuousCaptureDurationView initWithDurationObservable:isCapturingObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106151acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126efe30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127406d0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127406d0) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127406d4) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127406d8) = 0;
    func_0x00010beb0d80(puVar1);
    func_0x00010beaaea0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106151ba8; end: 106151bf7; -[SCContinuousCaptureDurationView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151ba8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127406d0));
  puStack_28 = PTR_PTR_1126efe30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106151bf8; end: 106151c33; -[SCContinuousCaptureDurationView reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151bf8(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127406d4) = 0;
  *(undefined1 *)(param_1 + _DAT_1127406d8) = 0;
  func_0x00010be8e000();
                    /* WARNING: Could not recover jumptable at 0x00010be8e090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__renderCaptureState_1125811c0);
  return;
}



/* Entry: 106151c34; end: 1061521fb; -[SCContinuousCaptureDurationView _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106151c34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  func_0x00010c1af000(param_1);
  func_0x00010c160fc0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar16 = (long)_DAT_1127406dc;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar14);
  func_0x00010c1af000(*(undefined8 *)(param_1 + lVar16));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar15 = (long)_DAT_1127406e0;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1af000(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c161020(param_1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16));
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_d8 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar16);
  uStack_e8 = uVar14;
  uStack_d0 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_f0 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uStack_100 = uVar19;
  uStack_c8 = uVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_108 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar16);
  uStack_118 = uVar14;
  uStack_c0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_128 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar15);
  uStack_138 = uVar19;
  uStack_b8 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uStack_140 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uVar14;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_150 = uVar20;
  uStack_b0 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar4;
  func_0x00010bf493c0(0xc010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_a8 = uVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar6;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_a0 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0xc010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar20);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(lStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_118);
  _objc_release(lStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(lStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  uVar14 = uStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1061521fc;
  uStack_1c0 = uVar18;
  uStack_1b8 = uVar17;
  uStack_1b0 = uVar19;
  uStack_1a8 = uVar5;
  uStack_1a0 = uVar4;
  puStack_198 = puVar1;
  uStack_190 = uVar10;
  uStack_188 = uVar8;
  uStack_180 = uVar20;
  uStack_178 = uVar7;
  uStack_170 = uVar6;
  uStack_168 = uVar9;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(uVar13);
  puVar11 = auStack_1c8;
  _objc_initWeak(puVar11,uVar14);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c0e0ec0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_1061523fc;
  puStack_1d8 = &UNK_110842a38;
  _objc_copyWeak(auStack_1d0,auStack_1c8);
  puVar12 = puVar1;
  func_0x00010c25ff60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(puVar11);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0e0ec0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1f8,auStack_1c8);
  uVar19 = uVar14;
  func_0x00010c25ff60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar19);
  _objc_release(uVar14);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_1f8);
  _objc_destroyWeak(auStack_1d0);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(uVar13);
  _objc_release(puVar2);
  return;
}



/* Entry: 1061521fc; end: 1061523fb; -[SCContinuousCaptureDurationView _setupBindingsWithDurationObservable:isCapturingObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061521fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_78;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061523fc;
  puStack_88 = &UNK_110842a38;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e0ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061523fc; end: 1061524bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061523fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010bf885a0(param_3);
    *(undefined8 *)(param_2 + _DAT_1127406d4) = param_1;
    func_0x00010be8e000(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061524bc; end: 106152577; -[SCContinuousCaptureDurationView _render] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061524bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc44b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127406e0;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106152578; end: 1061525e7; -[SCContinuousCaptureDurationView _renderCaptureState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106152578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x34;
  if (*(char *)(param_1 + _DAT_1127406d8) == '\0') {
    uVar1 = 0xd5;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_1127406e0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061525e8; end: 106152637; -[SCContinuousCaptureDurationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061525e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127406d0,0);
  _objc_storeStrong(param_1 + _DAT_1127406e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127406dc,0);
  return;
}



/* Entry: 106152638; end: 1061526e7; -[SCContinuousCaptureInterstitialFooterView initWithDelegate:clipThumbnailsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106152638(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efe38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127406e4),param_3);
    func_0x00010c219b60(puVar1);
    func_0x00010beb14e0(puVar1);
    if (param_4 != 0) {
      func_0x00010beab840(puVar1);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061526e8; end: 106152a33; -[SCContinuousCaptureInterstitialFooterView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061526e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = param_1;
  func_0x00010bdf5300();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010bded3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_1127406e8);
  *(long *)(param_1 + _DAT_1127406e8) = lVar30;
  _objc_retain(lVar30);
  _objc_release(uVar31);
  uVar31 = *(undefined8 *)(param_1 + _DAT_1127406ec);
  *(long *)(param_1 + _DAT_1127406ec) = lVar32;
  _objc_retain(lVar32);
  _objc_release(uVar31);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar30;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar30;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar30;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar32;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar32;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(lVar32);
  _objc_release(lVar30);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR_PTR_1126c8568;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar31 = *(undefined8 *)(lVar2 + _DAT_1127406f0);
  *(undefined **)(lVar2 + _DAT_1127406f0) = puVar17;
  _objc_retain();
  _objc_release(uVar31);
  func_0x00010befbb60(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar18 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_1127406e8;
  uVar31 = *(undefined8 *)(lVar2 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar2 + _DAT_1127406ec);
  func_0x00010c08de00(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar17;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar2 + lVar32);
  func_0x00010bf348e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106b60(PTR_PTR_1126c8568);
  puVar27 = puVar26;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar17);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar31);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c28ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar18 + _DAT_1127406f0),
             PTR_s_updateWithSegments_scrollToLastC_112680d58);
  return;
}



/* Entry: 106152a34; end: 106152ca7; -[SCContinuousCaptureInterstitialFooterView _setupClipThumbnailsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106152a34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c8568;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar15 = *(undefined8 *)(param_1 + _DAT_1127406f0);
  *(undefined **)(param_1 + _DAT_1127406f0) = puVar2;
  _objc_retain();
  _objc_release(uVar15);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127406e8;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127406ec);
  func_0x00010c08de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf348e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106b60(PTR_PTR_1126c8568);
  puVar12 = puVar11;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c28ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + _DAT_1127406f0),
             PTR_s_updateWithSegments_scrollToLastC_112680d58);
  return;
}



/* Entry: 106152ca8; end: 106152cb7; -[SCContinuousCaptureInterstitialFooterView updateWithClipSegments:scrollToLastClip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106152ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127406f0),
             PTR_s_updateWithSegments_scrollToLastC_112680d58);
  return;
}



/* Entry: 106152cb8; end: 10615301f; -[SCContinuousCaptureInterstitialFooterView _createUndoButton] */

void FUN_106152cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6138;
  uStack_88 = param_1;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c198080(puVar1,param_2,1);
  func_0x00010bdceac0(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(puVar2);
  func_0x00010c1d4b80(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010c219b60();
  func_0x00010619f904();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c21ad00(puVar2,param_2,7);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1af000(puVar2,param_2,0);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  puStack_a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_90 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar4;
  func_0x00010bf493c0(0x4030000000000000,puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_80 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493c0(0xc030000000000000,puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_78 = puVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a0,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_98);
  _objc_release(puStack_90);
  func_0x00010c1af000(puVar1,param_2,1);
  puVar7 = puVar1;
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2c358);
  func_0x00010619f904();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010befbd40(puVar1,param_2,uStack_88,PTR_s__undoTapped__11252f680);
  puVar11 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_106153020;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = PTR_PTR_1126b6138;
    puStack_100 = puVar6;
    puStack_f8 = puVar5;
    puStack_f0 = puVar8;
    puStack_e8 = puVar4;
    puStack_e0 = puVar3;
    puStack_d8 = puVar10;
    puStack_d0 = puVar9;
    puStack_c8 = puVar2;
    puStack_c0 = puVar1;
    puStack_b8 = puVar7;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c198080(puVar12,param_2,1);
    func_0x00010bdceac0(puVar11,param_2,puVar12);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar12,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar12;
    func_0x00010c08c0e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4032000000000000);
    _objc_release(puVar1);
    func_0x00010c1d4b80(puVar12,param_2,0);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    puVar1 = puVar2;
    func_0x00010c219b60();
    func_0x00010619f8ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c21ad00(puVar2,param_2,7);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3d);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1af000(puVar2,param_2,0);
    func_0x00010befbb60(puVar12,param_2,puVar2);
    puVar1 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4034000000000000,0x4034000000000000,PTR_PTR_1126b0c40,param_2,0x88,0x3d);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c219b60();
    func_0x00010c182220(puVar4,param_2,4);
    func_0x00010c1af000(puVar4,param_2,0);
    func_0x00010befbb60(puVar12,param_2,puVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493c0(0x4030000000000000,puVar5,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_130 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    puStack_128 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493c0(0x4010000000000000,puVar13,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    puStack_120 = puVar15;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar12;
    func_0x00010bf348e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493a0(puVar16,param_2,puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar4;
    puStack_118 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar12;
    func_0x00010c2793a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493c0(0xc030000000000000,puVar19,param_2,puVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_130,5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar22);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c1af000(puVar12,param_2,1);
    puVar1 = puVar12;
    func_0x00010c160fc0(puVar12,param_2,&PTR____CFConstantStringClassReference_110f2c338);
    func_0x00010619f8ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar12,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbd40(puVar12,param_2,puVar11,PTR_s__doneTapped__11252c828);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = puVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_retain(puVar11);
      func_0x00010c1c3c80(0x3fee666660000000,puVar11);
      func_0x00010c1c8380(0x3ff0000000000000,puVar11);
      func_0x00010c1e1640(0x3ff0000000000000,puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar11);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106153020; end: 1061534e3; -[SCContinuousCaptureInterstitialFooterView _createDoneButton] */

void FUN_106153020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c198080(puVar1,param_2,1);
  func_0x00010bdceac0(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(puVar2);
  func_0x00010c1d4b80(puVar1,param_2,0);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  puVar2 = puVar3;
  func_0x00010c219b60();
  func_0x00010619f8ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar3,param_2,7);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1af000(puVar3,param_2,0);
  func_0x00010befbb60(puVar1,param_2,puVar3);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4034000000000000,0x4034000000000000,PTR_PTR_1126b0c40,param_2,0x88,0x3d);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  func_0x00010c182220(puVar5,param_2,4);
  func_0x00010c1af000(puVar5,param_2,0);
  func_0x00010befbb60(puVar1,param_2,puVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4030000000000000,puVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_90 = puVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  puStack_88 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493c0(0x4010000000000000,puVar12,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  puStack_80 = puVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar5;
  puStack_78 = puVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493c0(0xc030000000000000,puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c1af000(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2c338);
  func_0x00010619f8ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbd40(puVar1,param_2,param_1,PTR_s__doneTapped__11252c828);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_1);
  func_0x00010c1c3c80(0x3fee666660000000,param_1);
  func_0x00010c1c8380(0x3ff0000000000000,param_1);
  func_0x00010c1e1640(0x3ff0000000000000,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061534e4; end: 106153533; -[SCContinuousCaptureInterstitialFooterView _applyShrinkOnPressToButton:] */

void FUN_1061534e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1c3c80(0x3fee666660000000,param_3);
  func_0x00010c1c8380(0x3ff0000000000000,param_3);
  func_0x00010c1e1640(0x3ff0000000000000,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106153534; end: 106153567; -[SCContinuousCaptureInterstitialFooterView _undoTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106153534(long param_1)

{
  param_1 = param_1 + _DAT_1127406e4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106153568; end: 10615359b; -[SCContinuousCaptureInterstitialFooterView _doneTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106153568(long param_1)

{
  param_1 = param_1 + _DAT_1127406e4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ca40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615359c; end: 1061536a7; -[SCContinuousCaptureInterstitialFooterView containsPointInButtonBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615359c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127406e8;
  if (*(long *)(param_3 + lVar4) == 0) {
    return 0;
  }
  lVar3 = (long)_DAT_1127406ec;
  if (*(long *)(param_3 + lVar3) != 0) {
    func_0x00010bf512a0(param_3);
    uVar2 = *(ulong *)(param_3 + lVar4);
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar3));
      uVar2 = *(ulong *)(param_3 + lVar3);
      func_0x00010bf20c00();
      _CGRectContainsPoint();
      if ((uVar2 & 1) == 0) {
        lVar4 = (long)_DAT_1127406f0;
        iVar1 = (int)*(undefined8 *)(param_3 + lVar4);
        func_0x00010bfd5640();
        if (iVar1 != 0) {
          func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar4));
          uVar2 = *(ulong *)(param_3 + lVar4);
          func_0x00010bf20c00();
          _CGRectContainsPoint();
          if ((uVar2 & 1) != 0) {
            return 1;
          }
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



/* Entry: 1061536a8; end: 106153703; -[SCContinuousCaptureInterstitialFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061536a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127406f0,0);
  _objc_storeStrong(param_1 + _DAT_1127406ec,0);
  _objc_storeStrong(param_1 + _DAT_1127406e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127406e4);
  return;
}



/* Entry: 106153704; end: 106153727; +[SCFeatureContinuousCaptureHelper stateToString:] */

undefined ** FUN_106153704(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return (undefined **)(&PTR_PTR_110910f18)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 106153728; end: 10615373b; +[SCFeatureContinuousCaptureHelper isSpotlightLensUnlockHandsFreeLaunchEligibleForSourceType:navigationType:] */

bool FUN_106153728(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 == 0xda && param_4 != 0x2a;
}



/* Entry: 10615373c; end: 10615374b; +[SCFeatureContinuousCaptureHelper isSoundAutoAppliedByCameraForSourcePageType:] */

bool FUN_10615373c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 199U < 3;
}



/* Entry: 10615374c; end: 106153e3f; -[SCFeatureContinuousCaptureImpl initWithUserSession:cameraUserActionLogger:blizzardLogger:featureSettingsService:cameraHardwareServicesAPI:captureComponent:cameraSnapModelServices:handsFreeRecording:cameraHardwareResource:musicFeature:cameraSourceType:cameraNavigationType:cameraModeActivationController:userPreferenceTimeProviderServices:cameraConfiguration:snapEditorTweakServices:appStartExperimentReader:circumstanceEngine:batchCapture:scopedCameraType:lensCarouselManager:cameraUIScopeViewContainer:selfieSettings:applicationLifecycleEvents:mainCameraViewControllerLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10615374c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126efe40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127406f8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127406fc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740700;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740704;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740708;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274070c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740710;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740714;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740718;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274071c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740720) = param_13;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740724) = param_14;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740728,param_15);
    lVar4 = (long)_DAT_11274072c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740730;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740734;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740738;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274073c;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740740;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_21;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740744) = param_22;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740748,param_23);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274074c,param_24);
    lVar4 = (long)_DAT_112740750;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_25;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740754,param_26);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740758,param_27);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274075c) = 0;
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740760);
    *(undefined **)((long)puVar1 + (long)_DAT_112740760) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740764) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740768) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274076c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740770) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740774) = 0;
    puVar3 = PTR_PTR_1126c8570;
    _objc_alloc();
    func_0x00010bff8b60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740778);
    *(undefined **)((long)puVar1 + (long)_DAT_112740778) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274077c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274077c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b9b20;
    func_0x00010bfd34e0();
    *(char *)((long)puVar1 + (long)_DAT_112740780) = (char)puVar3;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740784);
    *(undefined **)((long)puVar1 + (long)_DAT_112740784) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740788);
    *(undefined **)((long)puVar1 + (long)_DAT_112740788) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274078c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274078c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740790);
    *(undefined **)((long)puVar1 + (long)_DAT_112740790) = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106153e40; end: 106153e7f;  */

void FUN_106153e40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106153e80; end: 106153f17; -[SCFeatureContinuousCaptureImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106153e80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11274077c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112740794;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112740798;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126efe40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106153f18; end: 10615400b; -[SCFeatureContinuousCaptureImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106153f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740798);
  *(undefined8 *)(param_1 + _DAT_112740798) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10615400c; end: 1061540cf;  */

void FUN_10615400c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}


