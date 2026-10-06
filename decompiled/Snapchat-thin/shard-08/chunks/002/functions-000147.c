/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e8bb28; end: 105e8bb2f; -[SCPromotedStoryShareSession swiftPathEnabled] */

undefined1 FUN_105e8bb28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 105e8bb30; end: 105e8bb37; -[SCPromotedStoryShareSession setSwiftPathEnabled:] */

void FUN_105e8bb30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 105e8bb38; end: 105e8bbbb; -[SCPromotedStoryShareSession .cxx_destruct] */

void FUN_105e8bb38(long param_1)

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



/* Entry: 105e8bbbc; end: 105e8bc8b; -[SCAuthenticationWatchdogFactoryImpl initWithGraphene:timeProvider:timerFactory:] */

undefined1 *
FUN_105e8bbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed8f0;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e8bc8c; end: 105e8bceb; -[SCAuthenticationWatchdogFactoryImpl watchdogWithContext:] */

void FUN_105e8bc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5578;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c004240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e8bcec; end: 105e8bd67; -[SCAuthenticationWatchdogFactoryImpl .cxx_destruct] */

void FUN_105e8bcec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8bd68; end: 105e8be83; -[SCAuthenticationWatchdogFactoryServiceProvider _getWatchdogFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e8bd68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  double dStack_48;
  
  param_1 = param_1 + _DAT_112738964;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067f00();
  _objc_release(lVar1);
  _objc_release(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_105e8be84;
  puStack_50 = &UNK_1108f0800;
  ppuVar3 = &puStack_68;
  dStack_48 = (double)(int)lVar2;
  _objc_retainBlock(ppuVar3);
  puVar4 = PTR_PTR_1126c5588;
  _objc_alloc(PTR_PTR_1126c5588);
  puVar5 = PTR_PTR_1126c5590;
  _objc_opt_new(PTR_PTR_1126c5590);
  puVar6 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c0182a0(puVar4,param_2,puVar5,puVar6,ppuVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e8be84; end: 105e8bef7;  */

void FUN_105e8be84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae888;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0522e0(*(double *)(param_1 + 0x20) / 1000.0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e8bef8; end: 105e8bf2f; -[SCAuthenticationWatchdogFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e8bef8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738964);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738968);
  return;
}



/* Entry: 105e8bf30; end: 105e8c02f; -[SCAuthenticationWatchdogImpl initWithContext:graphene:timeProvider:timerFactory:] */

undefined1 *
FUN_105e8bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed8f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e8c030; end: 105e8c107; -[SCAuthenticationWatchdogImpl start] */

void FUN_105e8c030(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x28) = param_1;
  _objc_initWeak(auStack_38,param_2);
  lVar2 = *(long *)(param_2 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e8c108;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = lVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e8c108; end: 105e8c133;  */

void FUN_105e8c108(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e8c134; end: 105e8c1db; -[SCAuthenticationWatchdogImpl end] */

void FUN_105e8c134(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  dVar4 = *(double *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar1 = param_2;
  func_0x00010be1e160(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be21ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105e8c5ec(uVar3,lVar1,lVar2,(long)((param_1 - dVar4) * 1000.0));
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x30));
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105e8c1dc; end: 105e8c247; -[SCAuthenticationWatchdogImpl _blockDetected] */

void FUN_105e8c1dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be1e160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be21ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105e8c81c(uVar2,lVar1,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e8c248; end: 105e8c347; -[SCAuthenticationWatchdogImpl _getContextString] */

void FUN_105e8c248(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_a8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e8c348;
  uStack_30 = 0x105e8c358;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x105e8c360;
  puStack_60 = &UNK_110847658;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105e8c37c;
  puStack_88 = &UNK_110842b58;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105e8c398;
  puStack_b0 = &UNK_110847658;
  puStack_80 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  func_0x00010c0beb60(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78,&puStack_a0,&puStack_c8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e8c348; end: 105e8c3b3;  */

void FUN_105e8c348(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e8c3b4; end: 105e8c4b3; -[SCAuthenticationWatchdogImpl _getReason] */

void FUN_105e8c3b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_a8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e8c348;
  uStack_30 = 0x105e8c358;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e8c4b4;
  puStack_60 = &UNK_110847658;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105e8c4d0;
  puStack_88 = &UNK_110842b58;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105e8c508;
  puStack_b0 = &UNK_110847658;
  puStack_80 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  func_0x00010c0beb60(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78,&puStack_a0,&puStack_c8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e8c4b4; end: 105e8c4cf;  */

void FUN_105e8c4b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110daafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e8c4d0; end: 105e8c507;  */

void FUN_105e8c4d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e8c508; end: 105e8c523;  */

void FUN_105e8c508(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110daafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e8c524; end: 105e8c577; -[SCAuthenticationWatchdogImpl .cxx_destruct] */

void FUN_105e8c524(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8c578; end: 105e8c5eb; -[SCGrapheneAuthenticationWatchdogMetric2 init] */

undefined1 * FUN_105e8c578(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed900;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e8c5ec; end: 105e8c81b;  */

void FUN_105e8c5ec(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f0820,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_105e8c81c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f0870,&uStack_138,uVar5);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar6 = 0;
    do {
      if ((&cStack_e9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(pcVar2 + 8,0);
  return;
}



/* Entry: 105e8c81c; end: 105e8ca4b;  */

void FUN_105e8c81c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108f0870,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(pcVar1 + 8,0);
  return;
}



/* Entry: 105e8ca4c; end: 105e8ca57; -[SCAuthenticationWatchdogFactoryServices .cxx_destruct] */

void FUN_105e8ca4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8ca58; end: 105e8cabf; +[SCAuthenticationWatchdogContext bootstrapDataProcessWithProcessorName:] */

void FUN_105e8ca58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd510;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e8cac0; end: 105e8cb0b; +[SCAuthenticationWatchdogContext featureSettingDeltaSync] */

void FUN_105e8cac0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bd510;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e8cb0c; end: 105e8cb53; +[SCAuthenticationWatchdogContext logoutCleanUp] */

void FUN_105e8cb0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bd510;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e8cb54; end: 105e8cb77; -[SCAuthenticationWatchdogContext copyWithZone:] */

undefined8 FUN_105e8cb54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e8cb78; end: 105e8cbd7; -[SCAuthenticationWatchdogContext hash] */

void FUN_105e8cb78(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126ed910;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e8cbd8; end: 105e8cc1b; -[SCAuthenticationWatchdogContext internalInit] */

void FUN_105e8cbd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ed910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e8cc1c; end: 105e8ccbb; -[SCAuthenticationWatchdogContext isEqual:] */

long FUN_105e8cc1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e8cca0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_105e8cca0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105e8cca0;
    }
  }
  lVar3 = 1;
LAB_105e8cca0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e8ccbc; end: 105e8cd67; -[SCAuthenticationWatchdogContext matchLogoutCleanUp:bootstrapDataProcess:featureSettingDeltaSync:] */

void FUN_105e8ccbc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_105e8cd44;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_105e8cd44;
    }
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_105e8cd44;
    pcVar2 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar2)(lVar1);
LAB_105e8cd44:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e8cd68; end: 105e8cd73; -[SCAuthenticationWatchdogContext .cxx_destruct] */

void FUN_105e8cd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e8cd74; end: 105e8cd7b; -[SCManagerApplicationDataChecker .cxx_destruct] */

void FUN_105e8cd74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e8cd7c; end: 105e8cef3; -[SCLegacyUserSessionRepository userSession] */

void FUN_105e8cd7c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x0001000882bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076f40();
  uVar3 = uVar1;
  func_0x00010c2926a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfde300();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a94a0();
  _objc_release(uVar4);
  if (((uVar2 & 1) != 0) || ((int)uVar6 != 0)) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar3);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar5 == 0) {
      uVar2 = uVar1;
      func_0x00010c294560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar7,param_2,uVar2);
      _objc_release(uVar2);
      if ((int)puVar7 == 0) {
        func_0x00010bdf3300(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105e8ceb0;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0aa580();
    _objc_release(uVar6);
  }
  param_1 = 0;
LAB_105e8ceb0:
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e8cef4; end: 105e8cef7; -[SCLegacyUserSessionRepository synchronize] */

void FUN_105e8cef4(void)

{
  return;
}



/* Entry: 105e8cef8; end: 105e8d0cf; -[SCLegacyUserSessionRepository _createSessionWithUser:] */

void FUN_105e8cef8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c076f40();
  uVar2 = param_3;
  func_0x00010c2926a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfde300();
  _objc_release(uVar3);
  if (((uVar1 & 1) == 0) && ((int)uVar4 == 0)) {
    puVar10 = (undefined *)0x0;
    goto LAB_105e8d0a0;
  }
  puVar5 = PTR_PTR_1126c5598;
  func_0x00010c22b6a0(PTR_PTR_1126c5598);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf10a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puRam00000001136c2350;
  _objc_retain(puRam00000001136c2350);
  if (puVar5 == (undefined *)0x0) {
LAB_105e8cffc:
    puVar10 = PTR_PTR_1126af970;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c2926a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c294560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c087b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05bf80(puVar10,param_2,uVar1,uVar8,puVar6,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_retain(puVar10);
    puVar7 = puRam00000001136c2350;
    puRam00000001136c2350 = puVar10;
    _objc_release(puVar7);
  }
  else {
    puVar7 = puVar5;
    func_0x00010bf10a60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)puVar10 == 0) goto LAB_105e8cffc;
    _objc_retain(puVar5);
    puVar10 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_105e8d0a0:
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105e8d0d0; end: 105e8d10b; -[SCLegacyUserSessionRepository .cxx_destruct] */

void FUN_105e8d0d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8d10c; end: 105e8d173; +[SCDataUnavailableScope scopeWithApplicationDataChecker:workflowDelegate:] */

void FUN_105e8d10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010bff3980();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e8d174; end: 105e8d20f; -[SCDataUnavailableScope initWithApplicationDataChecker:workflowDelegate:] */

undefined1 *
FUN_105e8d174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed928;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e8d210; end: 105e8d217; -[SCDataUnavailableScope applicationDataChecker] */

undefined8 FUN_105e8d210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e8d218; end: 105e8d22f; -[SCDataUnavailableScope dataUnavailableWorkflowDelegate] */

void FUN_105e8d218(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e8d230; end: 105e8d25b; -[SCDataUnavailableScope .cxx_destruct] */

void FUN_105e8d230(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8d25c; end: 105e8d2df; -[SCForcedLogoutAuthenticationStateTracker setDidLogout] */

void FUN_105e8d25c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a63c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c04e0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e8d2e0; end: 105e8d3b7; -[SCForcedLogoutAuthenticationStateTracker setUnauthenticatedSessionDidBegin] */

void FUN_105e8d2e0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126c55a0;
  func_0x00010c27f320(PTR_PTR_1126c55a0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd8b20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  }
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e2e7f8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105e8d3b8; end: 105e8d3e7; -[SCForcedLogoutAuthenticationStateTracker .cxx_destruct] */

void FUN_105e8d3b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8d3e8; end: 105e8d48b; -[SCForcedLogoutLegacyUserStateLogger initWithGraphene:preferences:] */

undefined1 *
FUN_105e8d3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed938;
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



/* Entry: 105e8d48c; end: 105e8d603; -[SCForcedLogoutLegacyUserStateLogger logLegacyUserAccessIsNil:isAuthenticated:] */

void FUN_105e8d48c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar4 = PTR_PTR_1126c55a0;
  func_0x00010c08f800(PTR_PTR_1126c55a0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110df86d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar2);
  puVar6 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e2e818,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfd8b20();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar8 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar9 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e2e838,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105e8d604; end: 105e8d6bb; -[SCForcedLogoutLegacyUserStateLogger logMissingIdentityField:] */

void FUN_105e8d604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c55a0;
  _objc_retain(param_3);
  func_0x00010c08f820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e8d6bc; end: 105e8d6eb; -[SCForcedLogoutLegacyUserStateLogger .cxx_destruct] */

void FUN_105e8d6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8d6ec; end: 105e8d74f; -[SCPreferences loggedInSessionTimestamp] */

void FUN_105e8d6ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2e898);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e8d750; end: 105e8d7b3; -[SCPreferences loggedOutTimestamp] */

void FUN_105e8d750(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2e8b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e8d7b4; end: 105e8d7bf; -[SCPreferences setLoggedOutTimestamp:] */

void FUN_105e8d7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e2e8b8);
  return;
}



/* Entry: 105e8d7c0; end: 105e8d843; -[SCPreferences hasLoggedInSession] */

ulong FUN_105e8d7c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2e878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf1f3c0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105e8d844; end: 105e8d86f; +[SCGrapheneForcedLogoutMetric unauthenticatedReached] */

void FUN_105e8d844(void)

{
  _objc_alloc(PTR_PTR_1126c55a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e8d870; end: 105e8d89b; +[SCGrapheneForcedLogoutMetric legacyUserAccess] */

void FUN_105e8d870(void)

{
  _objc_alloc(PTR_PTR_1126c55a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e8d89c; end: 105e8d8c7; +[SCGrapheneForcedLogoutMetric legacyUserMissingIdentity] */

void FUN_105e8d89c(void)

{
  _objc_alloc(PTR_PTR_1126c55a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e8d8c8; end: 105e8d967; -[SCGrapheneForcedLogoutMetric description] */

void FUN_105e8d8c8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dadb98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dadb98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ed940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105e8d968; end: 105e8dabf; -[SCGrapheneRegistry forcedLogoutGraphene] */

void FUN_105e8d968(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105e8d9f0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2360 != -1) {
    func_0x00010002a2fc(0x1136c2360,&puStack_48);
  }
  uVar1 = uRam00000001136c2358;
  _objc_retain(uRam00000001136c2358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e8dac0; end: 105e8dcab;  */

void FUN_105e8dac0(long param_1,undefined *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_1108f0900;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108f0900,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_105e8dcac;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = pcVar1;
    pcStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1108f0950,&uStack_e0,puVar3);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105e8dcac; end: 105e8dd23;  */

void FUN_105e8dcac(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f0950,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105e8dd24; end: 105e8dd2f; +[SCCBusinessPromoteUpsellGetPromoteUpsellPlugin modulePath] */

undefined ** FUN_105e8dd24(void)

{
  return &PTR____CFConstantStringClassReference_110e2e938;
}



/* Entry: 105e8dd30; end: 105e8dd37; +[SCCBusinessPromoteUpsellGetPromoteUpsellPlugin asyncStrictMode] */

undefined8 FUN_105e8dd30(void)

{
  return 0;
}



/* Entry: 105e8dd38; end: 105e8dda7; -[SCCBusinessPromoteUpsellGetPromoteUpsellPlugin getPromoteUpsellPluginWithProps:] */

void FUN_105e8dd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e8dda8; end: 105e8df17; +[SCCBusinessPromoteUpsellGetPromoteUpsellPlugin invokeWithJSRuntimeProvider:props:completionHandler:] */

void FUN_105e8dda8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105e8de8c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e8df18; end: 105e8df3b; +[SCCBusinessPromoteUpsellGetPromoteUpsellPlugin valdiMarshallableObjectDescriptor] */

void FUN_105e8df18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f09c0;
  param_1[1] = &PTR_DAT_1108f09f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e8df3c; end: 105e8e027; -[SCCBusinessPromoteUpsellPromoteUpsellPluginProps initWithGetDeckHierarchy:pageLauncher:networkingClient:notificationPresenter:getEncodedProfileData:] */

undefined8 *
FUN_105e8df3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1126ed950;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105e8e028; end: 105e8e047; +[SCCBusinessPromoteUpsellPromoteUpsellPluginProps valdiMarshallableObjectDescriptor] */

void FUN_105e8e028(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f0a08;
  param_1[1] = &PTR_s_SCCDeckHierarchyInterface_1108f0a98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e8e048; end: 105e8e0bb; -[SCGrapheneContentPostSendUpsellMetric2 init] */

undefined1 * FUN_105e8e048(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed958;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e8e0bc; end: 105e8e2eb;  */

void FUN_105e8e0bc(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar8 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "\x01";
    unaff_x23 = acStack_98;
    pcVar8 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f0ac0,pcVar8,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_105e8e2ec;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar9 = pcVar8;
  uVar6 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar8);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar9 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f0b10,pcVar9,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    puVar13 = auStack_118;
    uVar6 = uVar10;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_105e8e51c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar9;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar8;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f0b60,pcVar4,uVar6);
    pcStack_1c0 = acStack_1d8;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar11 = 0;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  __Unwind_Resume();
  _objc_retain(pcVar4);
  iVar1 = (int)*(undefined8 *)(pcVar2 + 0x10);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(pcVar2 + 0x10));
    uVar10 = *(undefined8 *)(pcVar2 + 8);
    uVar6 = *(undefined8 *)(pcVar2 + 0x10);
    func_0x00010bf09f00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar10);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 105e8e2ec; end: 105e8e51b;  */

void FUN_105e8e2ec(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar6 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f0b10,pcVar6,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_105e8e51c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar10 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f0b60,pcVar7,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain(pcVar7);
  iVar1 = (int)*(undefined8 *)(pcVar3 + 0x10);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(pcVar3 + 0x10));
    uVar8 = *(undefined8 *)(pcVar3 + 8);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010bf09f00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar8);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
  return;
}



/* Entry: 105e8e51c; end: 105e8e74b;  */

void FUN_105e8e51c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar3);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar3);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar3 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f0b60,pcVar3,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(pcVar3);
  iVar2 = (int)*(undefined8 *)(pcVar4 + 0x10);
  func_0x00010bf4b900();
  if (iVar2 != 0) {
    func_0x00010c12d360(*(undefined8 *)(pcVar4 + 0x10));
    uVar1 = *(undefined8 *)(pcVar4 + 8);
    uVar5 = *(undefined8 *)(pcVar4 + 0x10);
    func_0x00010bf09f00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 105e8e74c; end: 105e8e7c3; -[SCCameraNavigationServicesImpl didDismissCamera:] */

void FUN_105e8e74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf09f00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e8e7c4; end: 105e8e7cb; -[SCCameraNavigationServicesImpl cameraLaunchObservable] */

undefined8 FUN_105e8e7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e8e7cc; end: 105e8e7fb; -[SCCameraNavigationServicesImpl .cxx_destruct] */

void FUN_105e8e7cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e8e7fc; end: 105e8e923; -[SCLens lensByUpdatingSearchPageSessionId:] */

undefined **
FUN_105e8e7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar6 = PTR_PTR_1126c55b0;
  puStack_48 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c042a00();
  _objc_release(param_3);
  ppuVar2 = (undefined **)PTR_PTR_1126b0820;
  func_0x00010c094120();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e2e958;
  pppuVar8 = &ppuStack_58;
  puVar9 = (undefined *)0x1;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  puVar7 = puVar3;
  func_0x00010c2b2840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(undefined **)PTR____stack_chk_guard_11034bdc0 == puStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
    return ppuVar5;
  }
  ___stack_chk_fail();
  puVar1 = puStack_48;
  puVar3 = puStack_50;
  ppuVar4 = ppuStack_58;
  _objc_retain(puVar7);
  _objc_retain(pppuVar8);
  _objc_retain(puVar9);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(ppuVar4);
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  _objc_retain(unaff_x24);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x22);
  _objc_retain(unaff_x21);
  _objc_retain(unaff_x20);
  puStack_d0 = PTR_PTR_1126ed968;
  ppuVar2 = &puStack_d8;
  puStack_d8 = puVar6;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_storeWeak(ppuVar2 + 3,puVar7);
    _objc_retain(pppuVar8);
    puVar6 = ppuVar2[5];
    ppuVar2[5] = (undefined *)pppuVar8;
    _objc_release(puVar6);
    _objc_retain(puVar9);
    puVar6 = ppuVar2[7];
    ppuVar2[7] = puVar9;
    _objc_release(puVar6);
    _objc_retain(param_6);
    puVar6 = ppuVar2[9];
    ppuVar2[9] = param_6;
    _objc_release(puVar6);
    _objc_retain(param_8);
    puVar6 = ppuVar2[10];
    ppuVar2[10] = param_8;
    _objc_release(puVar6);
    _objc_retain(param_7);
    puVar6 = ppuVar2[0xb];
    ppuVar2[0xb] = param_7;
    _objc_release(puVar6);
    _objc_retain(puVar3);
    puVar6 = ppuVar2[0xc];
    ppuVar2[0xc] = puVar3;
    _objc_release(puVar6);
    _objc_retain(puVar1);
    puVar6 = ppuVar2[0xd];
    ppuVar2[0xd] = puVar1;
    _objc_release(puVar6);
    _objc_retain(unaff_x24);
    puVar6 = ppuVar2[0xe];
    ppuVar2[0xe] = unaff_x24;
    _objc_release(puVar6);
    _objc_retain(unaff_x23);
    puVar6 = ppuVar2[0xf];
    ppuVar2[0xf] = unaff_x23;
    _objc_release(puVar6);
    _objc_retain(unaff_x22);
    puVar6 = ppuVar2[0x10];
    ppuVar2[0x10] = unaff_x22;
    _objc_release(puVar6);
    _objc_retain(unaff_x21);
    puVar6 = ppuVar2[0x11];
    ppuVar2[0x11] = unaff_x21;
    _objc_release(puVar6);
    _objc_retain(unaff_x20);
    puVar6 = ppuVar2[0x12];
    ppuVar2[0x12] = unaff_x20;
    _objc_release(puVar6);
    ppuVar2[4] = puStack_60;
    _objc_storeWeak(ppuVar2 + 2);
  }
  _objc_release(unaff_x20);
  _objc_release(unaff_x21);
  _objc_release(unaff_x22);
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar9);
  _objc_release(pppuVar8);
  _objc_release(puVar7);
  return ppuVar2;
}



/* Entry: 105e8e924; end: 105e8ec3b; -[SCComposerLensActionHandler initWithLensExplorerNavigator:lensInfoCardsScopeExposer:lensInfoCardActionHandlingServices:lensCallToActionLauncher:lensCreatorProfilePresenter:modularCameraPresenter:snapSource:pickerDelegate:playGamesPresenter:playGamesStudySettings:lensInfoCardsScopeServices:infoCardReportServices:lensCreatorSubscriptionProviderServices:lensTopicsServices:spectaclesLensServices:] */

undefined8 *
FUN_105e8e924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126ed968;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 3,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    puVar1[4] = param_9;
    _objc_storeWeak(puVar1 + 2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e8ec3c; end: 105e8ecb3; -[SCComposerLensActionHandler openLensExplorer] */

void FUN_105e8ec3c(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105e8ecb4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 105e8ecb4; end: 105e8ed2f;  */

void FUN_105e8ecb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c10cb40(lVar2,param_2,lVar3,1,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e8ed30; end: 105e8ee6b; -[SCComposerLensActionHandler openLensExplorerFeedWithFeedId:] */

void FUN_105e8ed30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1b50;
    func_0x00010bf33380();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105e8edec;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    puStack_38 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e8ee6c; end: 105e8eed3; -[SCComposerLensActionHandler presentLensWithLens:] */

void FUN_105e8ee6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c55b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04aae0();
  func_0x00010c10cda0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e8eed4; end: 105e8eee3; -[SCComposerLensActionHandler presentLensWithContextWithLens:analyticsContext:] */

void FUN_105e8eed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentReplyLensWithContextWith_11257d218,param_3,0,param_4,0);
  return;
}



/* Entry: 105e8eee4; end: 105e8eef3; -[SCComposerLensActionHandler presentLensesWithContextWithLenses:selectedLens:analyticsContext:onCarouselEnd:] */

void FUN_105e8eee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentModularLensesWithContext_11257cbe8,param_3,param_4,0,param_5,0);
  return;
}



/* Entry: 105e8eef4; end: 105e8eefb; -[SCComposerLensActionHandler presentReplyLensWithContextWithLens:user:analyticsContext:] */

void FUN_105e8eef4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentReplyLensWithContextWith_11257d218);
  return;
}



/* Entry: 105e8eefc; end: 105e8ef0b; -[SCComposerLensActionHandler presentPostToStoryLensWithContextWithLens:analyticsContext:] */

void FUN_105e8eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentReplyLensWithContextWith_11257d218,param_3,0,param_4,1);
  return;
}



/* Entry: 105e8ef0c; end: 105e8efab; -[SCComposerLensActionHandler _presentReplyLensWithContextWithLens:user:analyticsContext:postToStory:] */

void FUN_105e8ef0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be7f6a0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    func_0x00010be7c340();
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e8efac; end: 105e8f097; -[SCComposerLensActionHandler _presentWithContextWithLens:user:analyticsContext:postToStory:] */

void FUN_105e8efac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e8f098;
  puStack_70 = &UNK_110878f70;
  uStack_68 = param_3;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e8f098; end: 105e8f147;  */

void FUN_105e8f098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0a840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be8f140(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010beb4f20(uVar4,param_2,uVar1);
  if ((int)uVar4 == 0) {
    func_0x00010be7c900(*(undefined8 *)(param_1 + 0x28),param_2,uVar1,uVar2);
  }
  else {
    func_0x00010be7d540(*(undefined8 *)(param_1 + 0x28),param_2,uVar3,uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e8f148; end: 105e8f303; -[SCComposerLensActionHandler _presentPlayGamesWithLensId:replyParams:] */

void FUN_105e8f148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar7 = PTR_PTR_1126b1bb0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar8 = param_4;
  func_0x00010bf16600(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0967e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfbe400(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfea1c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf4efc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c275580(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0967c0(puVar7,param_2,uVar8,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c420(uVar8,param_2,param_1,param_3,puVar7,0,0);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105e8f304; end: 105e8f467; -[SCComposerLensActionHandler _presentModularCameraWithLensMetadata:replyParams:] */

undefined * FUN_105e8f304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = PTR_PTR_1126ae6b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025e20(puVar6,param_2,puVar4,param_3);
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d0900(param_1);
  lVar5 = lVar2;
  func_0x00010c10b580(uVar1,param_2,lVar2,puVar4,param_4,param_1,0);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  if ((*(long *)(puVar6 + 0x60) != 0) && (*(long *)(puVar6 + 0x68) != 0)) {
    lVar2 = lVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar4 = *(undefined **)(puVar6 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c263920();
      if ((int)puVar6 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        lVar2 = lVar5;
        func_0x00010c094540(lVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf92800(puVar4,param_2,lVar2);
        if ((int)puVar6 == 0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = puVar4;
          func_0x00010c074320(puVar4,param_2,lVar5);
        }
        _objc_release(lVar2);
      }
      _objc_release(puVar4);
      goto LAB_105e8f538;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105e8f538:
  _objc_release(lVar5);
  return puVar6;
}



/* Entry: 105e8f468; end: 105e8f553; -[SCComposerLensActionHandler _shouldPresentPlayGamesWithLens:] */

undefined8 FUN_105e8f468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c263920();
      if ((int)uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        lVar1 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf92800(uVar3,param_2,lVar1);
        if ((int)uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar3;
          func_0x00010c074320(uVar3,param_2,param_3);
        }
        _objc_release(lVar1);
      }
      _objc_release(uVar3);
      goto LAB_105e8f538;
    }
  }
  uVar4 = 0;
LAB_105e8f538:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105e8f554; end: 105e8f667; -[SCComposerLensActionHandler _presentModularLensesWithContextWithLenses:selectedLens:user:analyticsContext:postToStory:] */

void FUN_105e8f554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e8f668;
  puStack_78 = &UNK_110867cb8;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_1;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e8f668; end: 105e8f7e3;  */

void FUN_105e8f668(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c272160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be8f140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x30) + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0d0900(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c10b580(uVar3);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 105e8f7e4; end: 105e8f8f3;  */

void FUN_105e8f7e4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_1108f0c30);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e8f8fc;
    puStack_40 = &UNK_110857a38;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    ppuVar1 = &puStack_58;
    uStack_38 = uVar3;
    _objc_retainBlock(ppuVar1);
    uVar3 = param_2;
    func_0x00010bfb2040(param_2);
    _objc_retainAutoreleasedReturnValue();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
    _objc_release(ppuVar1);
    _objc_release(uStack_38);
  }
  else {
    uVar3 = 0;
  }
  puVar2 = PTR_PTR_1126ae6b0;
  _objc_alloc(PTR_PTR_1126ae6b0);
  func_0x00010c025e20();
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e8f8f4; end: 105e8f8fb;  */

void FUN_105e8f8f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asLensMetadata_1125a03b8);
  return;
}



/* Entry: 105e8f8fc; end: 105e8f96b;  */

undefined8 FUN_105e8f8fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105e8f96c; end: 105e8f98b; -[SCComposerLensActionHandler modularCameraActivationSource] */

undefined8 FUN_105e8f96c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xc;
  if (*(long *)(param_1 + 0x20) != 0x13) {
    uVar1 = 0;
  }
  uVar2 = 4;
  if (*(long *)(param_1 + 0x20) != 0x52) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 105e8f98c; end: 105e8fadb; -[SCComposerLensActionHandler _presentLensPickerLensWithContextWithLens:analyticsContext:] */

void FUN_105e8f98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105e8fa44;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e8fadc; end: 105e8fadf; -[SCComposerLensActionHandler sendLensWithLens:] */

void FUN_105e8fadc(void)

{
  return;
}


