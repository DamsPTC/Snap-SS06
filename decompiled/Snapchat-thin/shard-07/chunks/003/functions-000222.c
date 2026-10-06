/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053f312c; end: 1053f31d3;  */

void FUN_1053f312c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126af2d8;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0cf3c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c420();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053f31d4; end: 1053f31d7;  */

void FUN_1053f31d4(void)

{
  return;
}



/* Entry: 1053f31d8; end: 1053f32fb;  */

void FUN_1053f31d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126af2d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf608;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf608);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001004e5030();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf620;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf620);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar7 = uVar6;
  func_0x0001004e5030(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c420(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(ppuVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f32fc; end: 1053f33d7; -[SCUserInfoServicesEntryPoint _tentativePhoneNumberProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f32fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112722eb8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722edc);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c119c60(uVar4,param_2,7,&PTR____CFConstantStringClassReference_110dd9598,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar3,7,uVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f33d8; end: 1053f3503; -[SCUserInfoServicesEntryPoint _quickAddPrivacyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f33d8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf638;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ee0);
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar5,param_2,8,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_110885678);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar4,8,uVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3504; end: 1053f3563;  */

void FUN_1053f3504(undefined8 param_1,int param_2)

{
  func_0x0001007f98b8();
  if (param_2 == 2) {
    func_0x00010c0da8c0(PTR_PTR_1126b15b0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 == 1) {
    func_0x00010bf9a640();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2808e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053f3564; end: 1053f368f; -[SCUserInfoServicesEntryPoint _saturnPrivacyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3564(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf650;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf650);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ef8);
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar5,param_2,0x14,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_110885698
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar4,0x14,uVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3690; end: 1053f3713;  */

void FUN_1053f3690(undefined8 param_1,int param_2)

{
  func_0x0001007f98b8();
  if (param_2 < 2) {
    if ((param_2 != 0) && (param_2 == 1)) {
      func_0x00010c149b00();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f370c;
    }
  }
  else {
    if (param_2 == 2) {
      func_0x00010c2440c0(PTR_PTR_1126b8900);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f370c;
    }
    if (param_2 == 3) {
      func_0x00010c0da8c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f370c;
    }
  }
  func_0x00010c2808e0();
  _objc_retainAutoreleasedReturnValue();
LAB_1053f370c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053f3714; end: 1053f383f; -[SCUserInfoServicesEntryPoint _storyPrivacyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3714(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf740;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf740);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722eec);
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar5,param_2,0xd,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_110885738)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar4,0xd,uVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3840; end: 1053f38c3;  */

void FUN_1053f3840(undefined8 param_1,int param_2)

{
  func_0x0001007f98b8();
  if (param_2 < 2) {
    if ((param_2 != 0) && (param_2 == 1)) {
      func_0x00010bfb9b80();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f38bc;
    }
  }
  else {
    if (param_2 == 2) {
      func_0x00010bf9a640(PTR_PTR_1126b8918);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f38bc;
    }
    if (param_2 == 3) {
      func_0x00010bf61120();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f38bc;
    }
  }
  func_0x00010c2808e0();
  _objc_retainAutoreleasedReturnValue();
LAB_1053f38bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053f38c4; end: 1053f394f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f38c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112722efc;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c293740(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1053f3950; end: 1053f3a7b; -[SCUserInfoServicesEntryPoint _snapshotSnapsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3950(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf788;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ef4);
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar5,param_2,0xf,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_1108857a8)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar4,0xf,uVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3a7c; end: 1053f3a83;  */

void FUN_1053f3a7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  uStack_38 = 0x1053f5648;
  uStack_30 = 0x1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_2);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053f3a84; end: 1053f3b8f; -[SCUserInfoServicesEntryPoint _latestAcceptedTOSVersionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3a84(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7b8;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar4,param_2,0x12,ppuVar1,puVar2,0,&PTR___NSConcreteGlobalBlock_1108857e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar3,0x12,uVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3b90; end: 1053f3bbf;  */

void FUN_1053f3b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001007f98b8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithLongLong__112615808,param_2);
  return;
}



/* Entry: 1053f3bc0; end: 1053f3ccb; -[SCUserInfoServicesEntryPoint _saturnUserIdProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3bc0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7d0;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar4,param_2,0x13,ppuVar1,puVar2,0,&PTR___NSConcreteGlobalBlock_110885808);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar3,0x13,uVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3ccc; end: 1053f3cd3;  */

void FUN_1053f3ccc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  uStack_38 = 0x1053f5648;
  uStack_30 = 0x1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_2);
  lVar1 = puStack_48[5];
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_48[5];
  }
  func_0x000107c61174(uVar2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053f3cd4; end: 1053f3ddf; -[SCUserInfoServicesEntryPoint _hasConcurrentMobileSessionsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3cd4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7e8;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf7e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52460(uVar4,param_2,0x11,ppuVar1,puVar2,0,&PTR___NSConcreteGlobalBlock_110885828);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  _objc_alloc(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018660(puVar2,param_2,lVar3,0x11,uVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3de0; end: 1053f3e0f;  */

void FUN_1053f3de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001008184bc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1053f3e10; end: 1053f3f4f; -[SCUserInfoServicesEntryPoint _birthdayMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3e10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8920;
  _objc_alloc(PTR_PTR_1126b8920);
  param_1 = param_1 + _DAT_112722f08;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059a40(puVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f3f50; end: 1053f3f8f;  */

void FUN_1053f3f50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bed4060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053f3f90; end: 1053f3ff3; -[SCUserInfoServicesEntryPoint _bitmojiFlatlandInfoMutatorWithBitmojiFlatlandInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8938;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0599a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f3ff4; end: 1053f40e7; -[SCUserInfoServicesEntryPoint _displayNameMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f3ff4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8940;
  _objc_alloc(PTR_PTR_1126b8940);
  func_0x00010c059a00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f40e8; end: 1053f4127;  */

void FUN_1053f40e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd0060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053f4128; end: 1053f4327; -[SCUserInfoServicesEntryPoint _emailMutatorWithEmailInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126afbd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112722f20;
    _objc_loadWeakRetained(lVar10);
  }
  lVar2 = lVar10;
  func_0x00010bf1cd40(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1053f4328(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001053f434c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112722f28;
    _objc_loadWeakRetained(lVar11);
  }
  lVar7 = lVar11;
  func_0x00010c0d7c20(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff100(puVar1,param_2,lVar2,lVar4,lVar6,0,lVar7,
                      &PTR___NSConcreteGlobalBlock_110885878);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  puVar8 = PTR_PTR_1126b8948;
  _objc_alloc(PTR_PTR_1126b8948);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112722ed4);
  param_1 = param_1 + _DAT_112722f0c;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f440(puVar8,param_2,uVar9,param_3,puVar1,lVar10);
  _objc_release(param_3);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053f4328; end: 1053f436f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4328(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112722f08);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053f4370; end: 1053f437b;  */

undefined ** FUN_1053f4370(void)

{
  return &PTR____CFConstantStringClassReference_110dadbd8;
}



/* Entry: 1053f437c; end: 1053f449b; -[SCUserInfoServicesEntryPoint _phoneMutatorWithPhoneNumberProvider:tentativePhoneNumberProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f437c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be217a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8950;
  _objc_alloc(PTR_PTR_1126b8950);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ed8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112722edc);
  lVar3 = param_1 + _DAT_112722f10;
  _objc_loadWeakRetained(lVar3);
  param_1 = param_1 + _DAT_112722f0c;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035b40(puVar2,param_2,uVar5,uVar6,lVar1,lVar3,param_3,param_4,lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053f449c; end: 1053f4617; -[SCUserInfoServicesEntryPoint _quickAddPrivacyMutatorWithQuickAddPrivacyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f449c(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b8958;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112722efc;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112722f08;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112722ee0);
  lVar7 = param_1 + _DAT_112722f14;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c248100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112722f0c;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b800(puVar1,param_2,lVar4,lVar6,uVar10,param_3,lVar8,lVar9);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f4618; end: 1053f4793; -[SCUserInfoServicesEntryPoint _snapContactsPrivacyMutatorWithSnapContactsPrivacyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4618(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b8960;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112722efc;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112722f14;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c248100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112722f08;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112722ee8);
  param_1 = param_1 + _DAT_112722f0c;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b020(puVar1,param_2,lVar4,lVar6,lVar8,uVar10,param_3,lVar9);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f4794; end: 1053f48d3; -[SCUserInfoServicesEntryPoint _saturnPrivacyMutatorWithSaturnPrivacyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b8968;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112722efc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112722f08;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112722ef8);
  param_1 = param_1 + _DAT_112722f14;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c248100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b820(puVar1,param_2,lVar4,lVar6,uVar8,param_3,lVar7);
  _objc_release(param_3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f48d4; end: 1053f4b3f; -[SCUserInfoServicesEntryPoint _usernameMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f48d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112722f18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_112722f1c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_initWeak(auStack_58,param_1);
  puVar7 = PTR_PTR_1126b8970;
  _objc_alloc(PTR_PTR_1126b8970);
  puVar8 = PTR_PTR_1126b8978;
  _objc_alloc(PTR_PTR_1126b8978);
  func_0x00010c058f80();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053f4b40;
  puStack_68 = &UNK_110847450;
  lStack_60 = lVar4;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0599e0(puVar7);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1053f4b40; end: 1053f4b5f;  */

void FUN_1053f4b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110dda1b8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 1053f4b60; end: 1053f4c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1053f4b60(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar6 = 1;
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dda1f8,1,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = lVar1 + _DAT_112722f34;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010bf70760();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfa2380();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 1053f4c28; end: 1053f4c8b; -[SCUserInfoServicesEntryPoint _snapshotSnapsMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8980;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c059a20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f4c8c; end: 1053f4de7; -[SCUserInfoServicesEntryPoint _updateBirthdayService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4c8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112722f18;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b8988;
  _objc_alloc(PTR_PTR_1126b8988);
  func_0x00010c058f80();
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1053f4de8; end: 1053f4dff; -[SCUserInfoServicesEntryPoint _userBitmojiFlatlandURLTypeFromBitmojiBackgroundURLType:] */

bool FUN_1053f4de8(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != -0x4524111 && param_3 != 0;
}



/* Entry: 1053f4e00; end: 1053f4fa3; -[SCUserInfoServicesEntryPoint _atlasGwGrpcService] */

void FUN_1053f4e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd9618);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001053f434c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053f4328(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf56360(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9638,puVar1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1053f4fa4; end: 1053f5233; -[SCUserInfoServicesEntryPoint _getPhoneService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f4fa4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1 + _DAT_112722f18;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_112722f08;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112722f1c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  FUN_105400e90(lVar1,lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126afbf0;
  _objc_alloc();
  _objc_retain(&PTR___NSConcreteGlobalBlock_1108864c8);
  lVar1 = param_1 + _DAT_112722f20;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112722f24;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112722f28;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c0d7c20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112722f10;
  _objc_loadWeakRetained();
  func_0x00010c019600(puVar6);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(&PTR___NSConcreteGlobalBlock_1108864c8);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1053f5234; end: 1053f5273;  */

void FUN_1053f5234(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be738e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053f5274; end: 1053f5347; -[SCUserInfoServicesEntryPoint _phoneServiceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f5274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afbf8;
  _objc_alloc(PTR_PTR_1126afbf8);
  lVar2 = param_1 + _DAT_112722f2c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112722efc;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04fe40(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f5348; end: 1053f5547; -[SCUserInfoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053f5348(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722f00,0);
  _objc_destroyWeak(param_1 + _DAT_112722f2c);
  _objc_destroyWeak(param_1 + _DAT_112722f28);
  _objc_destroyWeak(param_1 + _DAT_112722f38);
  _objc_destroyWeak(param_1 + _DAT_112722f0c);
  _objc_destroyWeak(param_1 + _DAT_112722f24);
  _objc_destroyWeak(param_1 + _DAT_112722f20);
  _objc_destroyWeak(param_1 + _DAT_112722f08);
  _objc_destroyWeak(param_1 + _DAT_112722f14);
  _objc_destroyWeak(param_1 + _DAT_112722f34);
  _objc_destroyWeak(param_1 + _DAT_112722f1c);
  _objc_destroyWeak(param_1 + _DAT_112722f04);
  _objc_destroyWeak(param_1 + _DAT_112722f18);
  _objc_destroyWeak(param_1 + _DAT_112722f30);
  _objc_destroyWeak(param_1 + _DAT_112722f10);
  _objc_destroyWeak(param_1 + _DAT_112722eb4);
  _objc_destroyWeak(param_1 + _DAT_112722efc);
  _objc_storeStrong(param_1 + _DAT_112722ef8,0);
  _objc_storeStrong(param_1 + _DAT_112722ef4,0);
  _objc_storeStrong(param_1 + _DAT_112722ef0,0);
  _objc_storeStrong(param_1 + _DAT_112722eec,0);
  _objc_storeStrong(param_1 + _DAT_112722ee8,0);
  _objc_storeStrong(param_1 + _DAT_112722ee4,0);
  _objc_storeStrong(param_1 + _DAT_112722ee0,0);
  _objc_storeStrong(param_1 + _DAT_112722edc,0);
  _objc_storeStrong(param_1 + _DAT_112722ed8,0);
  _objc_storeStrong(param_1 + _DAT_112722ed4,0);
  _objc_storeStrong(param_1 + _DAT_112722ed0,0);
  _objc_storeStrong(param_1 + _DAT_112722ecc,0);
  _objc_storeStrong(param_1 + _DAT_112722ec8,0);
  _objc_storeStrong(param_1 + _DAT_112722ec4,0);
  _objc_storeStrong(param_1 + _DAT_112722ec0,0);
  _objc_storeStrong(param_1 + _DAT_112722ebc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112722eb8,0);
  return;
}



/* Entry: 1053f5548; end: 1053f565f;  */

void FUN_1053f5548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf800,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1053f5660; end: 1053f5777;  */

void FUN_1053f5660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8990;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053f5554(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8998;
  puVar4 = PTR_PTR_1126b89a0;
  _objc_alloc(PTR_PTR_1126b89a0);
  func_0x00010c060400();
  _objc_release(param_2);
  func_0x00010c25d680(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b2e0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f5778; end: 1053f596f;  */

void FUN_1053f5778(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8990;
  _objc_alloc(PTR_PTR_1126b8990);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053f5554(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8998;
  puVar4 = PTR_PTR_1126b89a8;
  _objc_alloc(PTR_PTR_1126b89a8);
  func_0x00010c060400();
  func_0x00010c0b4fa0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b2e0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f5970; end: 1053f5a87;  */

void FUN_1053f5970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8990;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053f5554(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8998;
  puVar4 = PTR_PTR_1126b89c0;
  _objc_alloc(PTR_PTR_1126b89c0);
  func_0x00010c060400();
  _objc_release(param_2);
  func_0x00010bf64060(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b2e0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053f5a88; end: 1053f5ba7;  */

void FUN_1053f5a88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  uStack_38 = 0x1053f5648;
  uStack_30 = 0x1053f5658;
  uStack_28 = 0;
  func_0x00010c0c0ec0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053f5ba8; end: 1053f5c73;  */

void FUN_1053f5ba8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  FUN_1053f5778(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(ulong *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053f5c74; end: 1053f675f;  */

void FUN_1053f5c74(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b8910;
  puVar5 = PTR_PTR_1126b8900;
  puVar4 = PTR_PTR_1126b88f8;
  puVar1 = PTR_PTR_1126b15b0;
  puVar6 = PTR_PTR_1126af2d8;
  iVar7 = (int)param_1;
  puVar3 = param_2;
  switch((ulong)param_1 & 0xffffffff) {
  default:
    puVar6 = PTR_PTR_1126b8990;
    _objc_alloc(PTR_PTR_1126b8990);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001053f5554(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b2e0(puVar6);
    _objc_release(param_1);
    _objc_release(puVar1);
    param_1 = puVar6;
    break;
  case 1:
  case 2:
  case 0xc:
  case 0xd:
  case 0x14:
  case 0x22:
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar1 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    goto code_r0x0001053f5cf8;
  case 3:
code_r0x0001053f6450:
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c085d60(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_retain(param_2);
    _objc_opt_class(puVar6);
    puVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    puVar1 = param_2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_2);
    puVar6 = puVar3;
    func_0x00010c25d400(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    FUN_1053f5660(param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053f6704;
  case 4:
  case 5:
  case 6:
    _objc_retain(param_2);
    _objc_opt_class(puVar4);
    puVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar4);
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puVar6 = puVar3;
    if (iVar7 == 6) {
      func_0x00010c0f7580(puVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x6;
    }
    else {
      if (iVar7 == 5) {
        func_0x00010c071720();
        param_1 = (undefined *)0x5;
        goto code_r0x0001053f65c0;
      }
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x4;
    }
    goto code_r0x0001053f638c;
  case 7:
  case 8:
    _objc_retain(param_2);
    _objc_opt_class(puVar6);
    puVar1 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puVar6 = puVar3;
    if (iVar7 == 7) {
      func_0x00010c0cf3c0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x7;
    }
    else {
      func_0x00010c0fafc0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x8;
    }
    goto code_r0x0001053f638c;
  case 9:
    puVar6 = PTR_PTR_1126b29b8;
    _objc_opt_class(PTR_PTR_1126b29b8);
    puVar5 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    puVar6 = PTR_PTR_1126b29c0;
    _objc_opt_class(PTR_PTR_1126b29c0);
    puVar2 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    puVar4 = PTR_PTR_1126b29c0;
    puVar1 = PTR_PTR_1126b29b8;
    puVar6 = param_2;
    if (((ulong)puVar5 & 1) == 0) {
      if (((ulong)puVar2 & 1) == 0) goto code_r0x0001053f6550;
      _objc_retain(param_2);
      _objc_opt_class(puVar4);
      _objc_opt_isKindOfClass(param_2,puVar4);
      if (((ulong)puVar3 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(param_2);
      puVar3 = puVar6;
      func_0x00010c2939e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_2);
      _objc_opt_class(puVar1);
      puVar4 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
    }
    _objc_release(puVar6);
    param_1 = puVar3;
    FUN_1053f5a88(puVar3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
code_r0x0001053f65dc:
    puVar3 = PTR_PTR_1126b8918;
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    puVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    puVar3 = param_2;
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    uStack_88 = 0x1053f5648;
    uStack_80 = 0x1053f5658;
    puStack_78 = (undefined *)0x0;
    func_0x00010c0c0f00(puVar3);
    goto code_r0x0001053f66e4;
  case 0xb:
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    puVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    uStack_88 = 0x1053f5648;
    uStack_80 = 0x1053f5658;
    puStack_78 = (undefined *)0x0;
    func_0x00010c0c0ee0(puVar3);
    goto code_r0x0001053f66e4;
  case 0xe:
  case 0xf:
  case 0x10:
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    puVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puVar6 = puVar3;
    if (iVar7 == 0x10) {
      func_0x00010c276ac0(puVar3);
      param_1 = (undefined *)0x10;
    }
    else if (iVar7 == 0xf) {
      func_0x00010c122260();
      param_1 = (undefined *)0xf;
    }
    else {
      func_0x00010c15e2e0();
      param_1 = (undefined *)0xe;
    }
    func_0x0001053f5778(param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x11:
  case 0x12:
    puVar3 = PTR_PTR_1126b8908;
    _objc_opt_class(PTR_PTR_1126b8908);
    puVar1 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    puVar6 = param_2;
    if (((ulong)puVar1 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    puVar3 = puVar6;
    if (iVar7 == 0x11) {
      func_0x00010beed420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      param_1 = PTR_PTR_1126b8990;
      _objc_retain(puVar3);
      _objc_alloc(param_1);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(&PTR____CFConstantStringClassReference_110dd96f8);
      puVar4 = PTR_PTR_1126b8998;
      puVar5 = PTR_PTR_1126b89b8;
      _objc_alloc(PTR_PTR_1126b89b8);
      func_0x00010c26f320(puVar3);
      _objc_release(puVar3);
      func_0x00010c060400(puVar5);
      func_0x00010bf985a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b2e0(param_1);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(&PTR____CFConstantStringClassReference_110dd96f8);
code_r0x0001053f6438:
      _objc_release(puVar1);
      goto code_r0x0001053f6704;
    }
    func_0x00010c127a60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    param_1 = (undefined *)0x12;
code_r0x0001053f5cf8:
    FUN_1053f5660(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x13:
    param_1 = (undefined *)0x13;
    goto code_r0x0001053f635c;
  case 0x15:
  case 0x16:
  case 0x1a:
    puVar6 = PTR_PTR_1126b88f0;
    _objc_opt_class(PTR_PTR_1126b88f0);
    puVar1 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    if (iVar7 == 0x1a) {
      puVar6 = PTR_PTR_1126b88e8;
      func_0x00010c0cb140(PTR_PTR_1126b88e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28fa80();
      func_0x00010c21acc0(puVar6);
      puVar1 = puVar3;
      func_0x00010bf14660(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e980(puVar6);
      _objc_release(puVar1);
      puVar1 = puVar6;
      func_0x00010bf63640(puVar6);
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x1a;
      FUN_1053f5970(0x1a,puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x0001053f6438;
    }
    puVar6 = puVar3;
    if (iVar7 == 0x16) {
      func_0x00010bf14060(puVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x16;
    }
    else {
      if (iVar7 != 0x15) {
        _objc_release(puVar3);
        goto code_r0x0001053f6450;
      }
      func_0x00010c14fa80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined *)0x15;
    }
code_r0x0001053f638c:
    FUN_1053f5660(param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
code_r0x0001053f6704:
    _objc_release(puVar6);
    break;
  case 0x17:
  case 0x18:
code_r0x0001053f6550:
    puVar6 = PTR_PTR_1126b29c0;
    _objc_retain(param_2);
    _objc_opt_class(puVar6);
    puVar1 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar6);
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puVar6 = puVar3;
    if (iVar7 == 0x18) {
      func_0x00010bf01160(puVar3);
      param_1 = (undefined *)0x18;
    }
    else {
      if (iVar7 != 0x17) {
        _objc_release(puVar3);
        goto code_r0x0001053f65dc;
      }
      func_0x00010bf01180(puVar3);
      param_1 = (undefined *)0x17;
    }
code_r0x0001053f65c0:
    func_0x0001053f5874(param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x19:
    param_1 = (undefined *)0x19;
code_r0x0001053f635c:
    FUN_1053f5970(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053f6710;
  case 0x23:
    _objc_retain(param_2);
    _objc_opt_class(puVar5);
    puVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_2);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    uStack_88 = 0x1053f5648;
    uStack_80 = 0x1053f5658;
    puStack_78 = (undefined *)0x0;
    func_0x00010c0c0f20(puVar3);
code_r0x0001053f66e4:
    param_1 = (undefined *)puStack_98[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_a0,8);
    puVar6 = puStack_78;
    goto code_r0x0001053f6704;
  }
  _objc_release(puVar3);
code_r0x0001053f6710:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053f6760; end: 1053f6a4b;  */

void FUN_1053f6760(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  FUN_1053f5778(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(ulong *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053f6a4c; end: 1053f6e63;  */

void FUN_1053f6a4c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd5ff8);
  if ((int)param_1 == 0) {
    ppuVar19 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfa10;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfa28;
    ppuStack_130 = ppuVar19;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfa40;
    ppuStack_128 = ppuVar20;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = ppuVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_130,3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar19 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf818;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf830;
    ppuStack_118 = ppuVar19;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf848;
    ppuStack_110 = ppuVar20;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf860;
    ppuStack_108 = ppuVar21;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf878;
    ppuStack_100 = ppuVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf890;
    ppuStack_f8 = ppuVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf8a8;
    ppuStack_f0 = ppuVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf8c0;
    ppuStack_e8 = ppuVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf8d8;
    ppuStack_e0 = ppuVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf8f0;
    ppuStack_d8 = ppuVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf908;
    ppuStack_d0 = ppuVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf920;
    ppuStack_c8 = ppuVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf938;
    ppuStack_c0 = ppuVar9;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf950;
    ppuStack_b8 = ppuVar10;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf968;
    ppuStack_b0 = ppuVar11;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf980;
    ppuStack_a8 = ppuVar12;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf998;
    ppuStack_a0 = ppuVar13;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf9b0;
    ppuStack_98 = ppuVar14;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf9c8;
    ppuStack_90 = ppuVar15;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf9e0;
    ppuStack_88 = ppuVar16;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf9f8;
    ppuStack_80 = ppuVar17;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = ppuVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_118,0x15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
    _objc_release(ppuVar17);
    _objc_release(ppuVar16);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) &&
     (___stack_chk_fail(), ppuVar19 < (undefined **)0x15)) {
    _objc_opt_class(*(undefined8 *)(&PTR_PTR_1108859f8)[(long)ppuVar19]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053f6e64; end: 1053f6e9b;  */

void FUN_1053f6e64(ulong param_1)

{
  if (param_1 < 0x15) {
    _objc_opt_class(*(undefined8 *)(&PTR_PTR_1108859f8)[param_1]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053f6e9c; end: 1053f6eb3;  */

void FUN_1053f6e9c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053f6eb4; end: 1053f6f83;  */

undefined8 FUN_1053f6eb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0ee0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1053f6f84; end: 1053f6fab;  */

void FUN_1053f6f84(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1053f6fac; end: 1053f70a3;  */

void FUN_1053f6fac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1053f6e9c;
  uStack_30 = 0x1053f6eac;
  uStack_28 = 0;
  func_0x00010c0c0ec0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053f70a4; end: 1053f70df;  */

void FUN_1053f70a4(void)

{
  return;
}



/* Entry: 1053f70e0; end: 1053f71c3;  */

undefined8 FUN_1053f70e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0ec0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1053f71c4; end: 1053f71fb;  */

void FUN_1053f71c4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1053f71fc; end: 1053f7307; -[SCGrpcUserBirthdayMutatorImpl initWithUpdatesPublisher:updateBirthdayService:performerProvider:] */

undefined1 *
FUN_1053f71fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8280;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053f7308; end: 1053f7417; -[SCGrpcUserBirthdayMutatorImpl updateBirthday:passwordVerified:onComplete:] */

void FUN_1053f7308(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f7418; end: 1053f744f;  */

void FUN_1053f7418(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053f7450; end: 1053f76df; -[SCGrpcUserBirthdayMutatorImpl _updateBirthday:passwordVerified:onComplete:] */

void FUN_1053f7450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b89c8;
  func_0x00010c0cb140(PTR_PTR_1126b89c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1552e0();
  _objc_release(puVar2);
  func_0x00010c1c8540(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010bffabc0();
  puVar3 = puVar2;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b7be8;
  func_0x00010c0cb140(PTR_PTR_1126b7be8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65700(puVar3);
  func_0x00010c189d40(puVar4);
  func_0x00010c0d0e40(puVar3);
  func_0x00010c1c8fc0(puVar4);
  func_0x00010c2bedc0(puVar3);
  func_0x00010c2278a0(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c170360(puVar1);
  _objc_release(puVar4);
  func_0x00010c1a5be0(puVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_1053f856c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c283cc0(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f76e0; end: 1053f7793;  */

void FUN_1053f76e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b89d0;
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x0001053fe468();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbed60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be919c0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053f7794; end: 1053f7acb; -[SCGrpcUserBirthdayMutatorImpl _requestSuccessWithResponse:newBirthday:onComplete:] */

void FUN_1053f7794(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010c252d60();
  puVar4 = PTR_PTR_1126b89d0;
  iVar1 = (int)puVar2;
  puVar3 = param_3;
  if (iVar1 < 4) {
    if (iVar1 < 1) {
      if ((iVar1 != -0x4524111) && (iVar1 != 0)) goto LAB_1053f7aa4;
      func_0x0001053fe468();
      _objc_retainAutoreleasedReturnValue();
LAB_1053f7938:
      func_0x00010bfbed60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,puVar4);
      puVar3 = puVar4;
      goto LAB_1053f7a98;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        puVar2 = param_3;
        func_0x00010c09e540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09e520(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c36a0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053f7a78;
      }
      if (iVar1 != 3) goto LAB_1053f7aa4;
      puVar2 = param_3;
      func_0x00010c09e520(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f7938;
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
    puVar2 = PTR_PTR_1126b89d0;
    func_0x00010c261740(PTR_PTR_1126b89d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 == 4) {
        puVar2 = param_3;
        func_0x00010c09e520(param_3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053f7938;
      }
      if (iVar1 != 5) goto LAB_1053f7aa4;
      puVar2 = param_3;
      func_0x00010c09e540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08a420(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 6) {
      puVar2 = param_3;
      func_0x00010c09e540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6b40(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 7) {
        if (iVar1 != 10) goto LAB_1053f7aa4;
        puVar2 = param_3;
        func_0x00010c09e520(param_3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053f7938;
      }
      puVar2 = param_3;
      func_0x00010c09e540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2911e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1053f7a78:
    (**(code **)(param_5 + 0x10))(param_5,puVar4);
    _objc_release(puVar4);
LAB_1053f7a98:
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_1053f7aa4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053f7acc; end: 1053f7bab; -[SCGrpcUserBirthdayMutatorImpl getAgeVerificationOptions:onComplete:] */

void FUN_1053f7acc(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1053f7bac; end: 1053f7be3;  */

void FUN_1053f7bac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1cda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053f7be4; end: 1053f7d43; -[SCGrpcUserBirthdayMutatorImpl _getAgeVerificationOptions:onComplete:] */

void FUN_1053f7be4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if ((param_3 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    puVar1 = PTR_PTR_1126b89d8;
    func_0x00010c0cb140(PTR_PTR_1126b89d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_1053f856c();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfc2180(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1053f7d44; end: 1053f7df3;  */

void FUN_1053f7d44(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b89e0;
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x000108b9aaec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbed00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be1cdc0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053f7df4; end: 1053f7fa3; -[SCGrpcUserBirthdayMutatorImpl _getAgeVerificationOptionsSucceedWithResponse:onComplete:] */

void FUN_1053f7df4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  func_0x00010c252d60();
  puVar3 = PTR_PTR_1126b89e0;
  iVar1 = (int)uVar4;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar4 = param_3;
      func_0x00010bf34c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 == 2) {
        func_0x00010bf01d40();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053f7f54;
      }
LAB_1053f7eb0:
      func_0x000108b9aaec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbed00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (iVar1 == 3) {
      uVar4 = param_3;
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbed00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 4) goto LAB_1053f7eb0;
      uVar4 = param_3;
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfed5e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
LAB_1053f7f54:
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar4);
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053f7fa4; end: 1053f80a3; -[SCGrpcUserBirthdayMutatorImpl verifyAgeAnswerChallenge:onComplete:] */

void FUN_1053f7fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f80a4; end: 1053f80d7;  */

void FUN_1053f80a4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053f80d8; end: 1053f8233; -[SCGrpcUserBirthdayMutatorImpl _verifyAgeAnswerChallenge:onComplete:] */

void FUN_1053f80d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b89e8;
  func_0x00010c0cb140(PTR_PTR_1126b89e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a8e0();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1053f856c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2984e0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f8234; end: 1053f82e3;  */

void FUN_1053f8234(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b89f0;
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x000108b9aaec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbed00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bee83a0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053f82e4; end: 1053f8523; -[SCGrpcUserBirthdayMutatorImpl _verifyAgeAnswerChallengeSucceedWithResponse:onComplete:] */

void FUN_1053f82e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c252d60();
  puVar3 = PTR_PTR_1126b89f0;
  iVar1 = (int)uVar2;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      func_0x00010bf01540(PTR_PTR_1126b89f0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f84ec;
    }
    if (iVar1 == 2) {
      func_0x00010c27f680(PTR_PTR_1126b89f0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053f84ec;
    }
    if (iVar1 != 3) goto LAB_1053f8420;
    uVar2 = param_3;
    func_0x00010bf34c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34d20(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 == 4) {
        uVar2 = param_3;
        func_0x00010bf98a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bfe4e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298320(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (iVar1 != 5) {
LAB_1053f8420:
          func_0x000108b9aaec();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbed00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1053f84cc;
        }
        uVar2 = param_3;
        func_0x00010bf98a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bfe4e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cca20(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 == 6) {
      uVar2 = param_3;
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069b60(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 7) goto LAB_1053f8420;
      uVar2 = param_3;
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbed00(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
  }
LAB_1053f84cc:
  _objc_release(uVar2);
LAB_1053f84ec:
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053f8524; end: 1053f856b; -[SCGrpcUserBirthdayMutatorImpl .cxx_destruct] */

void FUN_1053f8524(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053f856c; end: 1053f861b;  */

void FUN_1053f856c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dadcb8);
  }
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053f861c; end: 1053f875b; -[SCUserBitmojiAvatarIdMutatorImpl updateLocalAvatarId:] */

void FUN_1053f861c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1053f873c;
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1053f875c;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
LAB_1053f873c:
  _objc_release(param_3);
  return;
}



/* Entry: 1053f875c; end: 1053f8767;  */

void FUN_1053f875c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053f8768; end: 1053f8797; -[SCUserBitmojiAvatarIdMutatorImpl .cxx_destruct] */

void FUN_1053f8768(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053f8798; end: 1053f883b; -[SCUserBitmojiFlatlandInfoMutatorImpl initWithUpdatesPublisher:bitmojiFlatlandInfoProvider:] */

undefined1 *
FUN_1053f8798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8290;
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



/* Entry: 1053f883c; end: 1053f8c03; -[SCUserBitmojiFlatlandInfoMutatorImpl updateSceneId:backgroundId:backgroundURL:] */

void FUN_1053f883c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c14fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puVar1);
  if (param_3 == puVar1) {
    _objc_release(puVar1);
    _objc_release(param_3);
LAB_1053f891c:
    puVar3 = puVar2;
    func_0x00010bf14060();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(puVar3);
    if (param_4 != puVar3) {
      puVar4 = param_4;
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c071ae0(param_4,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(param_4);
        if ((int)puVar4 == 0) goto LAB_1053f8a38;
        goto LAB_1053f8988;
      }
LAB_1053f8a30:
      _objc_release(puVar4);
LAB_1053f8a38:
      _objc_release(puVar3);
      goto LAB_1053f8a40;
    }
    _objc_release(puVar3);
    _objc_release(param_4);
LAB_1053f8988:
    puVar4 = param_5;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    if (puVar4 != puVar5) {
      if (puVar5 == (undefined *)0x0) {
        _objc_release();
        goto LAB_1053f8a30;
      }
      puVar6 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (((ulong)puVar6 & 1) != 0) goto LAB_1053f8bc0;
      goto joined_r0x0001053f8a10;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar3 = param_3;
    if (puVar1 == (undefined *)0x0) goto LAB_1053f8a38;
    func_0x00010c071ae0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(param_3);
    if ((int)puVar3 != 0) goto LAB_1053f891c;
LAB_1053f8a40:
    _objc_release(puVar1);
joined_r0x0001053f8a10:
    if (((param_3 == (undefined *)0x0) && (param_4 == (undefined *)0x0)) &&
       (param_5 == (undefined *)0x0)) goto LAB_1053f8bc0;
    if (param_3 == (undefined *)0x0) {
      puVar1 = puVar2;
      func_0x00010c14fa80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (param_4 != (undefined *)0x0) goto LAB_1053f8a68;
LAB_1053f8a90:
      puVar3 = puVar2;
      func_0x00010bf14060(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      puVar1 = param_3;
      if (param_4 == (undefined *)0x0) goto LAB_1053f8a90;
LAB_1053f8a68:
      _objc_retain(param_4);
      puVar3 = param_4;
    }
    puVar5 = param_5;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010bf14660(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar5);
      puVar4 = puVar5;
    }
    _objc_release(puVar5);
    func_0x00010c08fa60(puVar4);
    puVar5 = param_5;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x0) {
      puVar5 = param_4;
      func_0x00010c08fa60();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
        puVar5 = puVar4;
        goto LAB_1053f8b6c;
      }
    }
    else {
      puVar5 = param_5;
      func_0x00010c27dd80(param_5);
      func_0x00010be17f60(param_1,param_2,puVar5);
      puVar5 = puVar3;
      puVar3 = (undefined *)0x0;
      puVar6 = puVar4;
LAB_1053f8b6c:
      _objc_release(puVar5);
      puVar4 = puVar6;
    }
    puVar5 = PTR_PTR_1126b88f0;
    _objc_alloc(PTR_PTR_1126b88f0);
    func_0x00010c041ac0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_1053f8bc0:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053f8c04; end: 1053f8c1b; -[SCUserBitmojiFlatlandInfoMutatorImpl _flatlandBackgroundURLTypeForBitmojiBackgroundType:] */

bool FUN_1053f8c04(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != -0x4524111 && param_3 != 0;
}



/* Entry: 1053f8c1c; end: 1053f8c4b; -[SCUserBitmojiFlatlandInfoMutatorImpl .cxx_destruct] */

void FUN_1053f8c1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053f8c4c; end: 1053f8d8b; -[SCUserBitmojiSelfieIdMutatorImpl updateLocalSelfieId:] */

void FUN_1053f8c4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1053f8d6c;
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1053f8d8c;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
LAB_1053f8d6c:
  _objc_release(param_3);
  return;
}



/* Entry: 1053f8d8c; end: 1053f8d97;  */

void FUN_1053f8d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053f8d98; end: 1053f8dc7; -[SCUserBitmojiSelfieIdMutatorImpl .cxx_destruct] */

void FUN_1053f8d98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053f8dc8; end: 1053f8e6b; -[SCGrpcUserDisplayNameMutator initWithUpdatesPublisher:grpcService:] */

undefined1 *
FUN_1053f8dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e82a0;
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



/* Entry: 1053f8e6c; end: 1053f9073; -[SCGrpcUserDisplayNameMutator updateDisplayName:onComplete:] */

void FUN_1053f8e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b89f8;
  func_0x00010c0cb140(PTR_PTR_1126b89f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(PTR_PTR_1126b8a00);
  func_0x00010c0199c0(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f9074; end: 1053f90df;  */

void FUN_1053f9074(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68640();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053f90e0; end: 1053f91e7; -[SCGrpcUserDisplayNameMutator _onComplete:response:error:callback:] */

void FUN_1053f90e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  }
  if (param_6 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1053f91e8;
    puStack_60 = &UNK_1108523f8;
    _objc_retain(param_6);
    lStack_50 = param_6;
    uStack_48 = param_5 == 0;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(lStack_58);
    _objc_release(lStack_50);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f91e8; end: 1053f9237;  */

void FUN_1053f91e8(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c09e4e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1053f9238; end: 1053f9267; -[SCGrpcUserDisplayNameMutator .cxx_destruct] */

void FUN_1053f9238(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053f9268; end: 1053f9363; -[SCUserEmailMutatorImpl initWithEmailInfoUpdatesPublisher:emailInfoProvider:emailService:settingsEventLogger:] */

undefined1 *
FUN_1053f9268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e82a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053f9364; end: 1053f9557; -[SCUserEmailMutatorImpl updateEmail:emailMutatorType:onComplete:] */

void FUN_1053f9364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c285680(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf8d6c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c08fa60(param_3);
  func_0x00010c0b2bc0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053f9558; end: 1053f95f3;  */

void FUN_1053f9558(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed75a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053f95f4; end: 1053f96d3; -[SCUserEmailMutatorImpl receivedEmailVerificationPush] */

void FUN_1053f95f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  lVar4 = lVar2;
  if (lVar3 == 0) {
    func_0x00010bf8d6c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f7580(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar5 = PTR_PTR_1126b88f8;
  _objc_alloc(PTR_PTR_1126b88f8);
  func_0x00010c00f380();
  func_0x00010c0d9840(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1053f96d4; end: 1053f96db; -[SCUserEmailMutatorImpl requestEmailVerificationWithType:onComplete:] */

void FUN_1053f96d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1352f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_requestEmailVerificationWithType_11262aed8);
  return;
}



/* Entry: 1053f96dc; end: 1053f984f; -[SCUserEmailMutatorImpl _updateEmailSuccess:onComplete:] */

void FUN_1053f96dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000108dcd194(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    _objc_release(uVar1);
  }
  else {
    func_0x00010c071720();
    _objc_release(uVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR_PTR_1126b88f8;
  _objc_alloc(PTR_PTR_1126b88f8);
  uVar1 = uVar2;
  func_0x00010bf8d6c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071720(uVar2);
  func_0x00010c00f380(puVar3);
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b8a08;
  func_0x00010c261740(PTR_PTR_1126b8a08);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053f9850; end: 1053f997b; -[SCUserEmailMutatorImpl _requestEmailVerificationSuccess:] */

void FUN_1053f9850(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar4 = PTR_PTR_1126b88f8;
    _objc_alloc(PTR_PTR_1126b88f8);
    lVar1 = lVar2;
    func_0x00010bf8d6c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf8d6c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071720(lVar2);
    func_0x00010c00f380(puVar4);
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,1,0);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


