/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ed5e74; end: 105ed5efb; -[SCMapFocusedDropEntryPoint end] */

void FUN_105ed5e74(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ed5efc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  puStack_50 = PTR_PTR_1126edd08;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed5efc; end: 105ed5f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed5efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112739a3c),
             PTR_s_endWorkflow_1125c30c0);
  return;
}



/* Entry: 105ed5f10; end: 105ed608f; -[SCMapFocusedDropEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed5f10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739a08,0);
  _objc_storeStrong(param_1 + _DAT_112739a04,0);
  _objc_storeStrong(param_1 + _DAT_112739a00,0);
  _objc_destroyWeak(param_1 + _DAT_1127399fc);
  _objc_destroyWeak(param_1 + _DAT_112739a38);
  _objc_destroyWeak(param_1 + _DAT_112739a1c);
  _objc_destroyWeak(param_1 + _DAT_112739a18);
  _objc_destroyWeak(param_1 + _DAT_112739a14);
  _objc_destroyWeak(param_1 + _DAT_112739a10);
  _objc_destroyWeak(param_1 + _DAT_1127399e4);
  _objc_destroyWeak(param_1 + _DAT_1127399e0);
  _objc_destroyWeak(param_1 + _DAT_1127399f4);
  _objc_destroyWeak(param_1 + _DAT_112739a28);
  _objc_destroyWeak(param_1 + _DAT_1127399d8);
  _objc_destroyWeak(param_1 + _DAT_112739a24);
  _objc_destroyWeak(param_1 + _DAT_112739a0c);
  _objc_destroyWeak(param_1 + _DAT_1127399dc);
  _objc_destroyWeak(param_1 + _DAT_1127399f8);
  _objc_destroyWeak(param_1 + _DAT_1127399d0);
  _objc_destroyWeak(param_1 + _DAT_1127399d4);
  _objc_destroyWeak(param_1 + _DAT_1127399e8);
  _objc_destroyWeak(param_1 + _DAT_1127399f0);
  _objc_destroyWeak(param_1 + _DAT_112739a34);
  _objc_destroyWeak(param_1 + _DAT_1127399ec);
  _objc_destroyWeak(param_1 + _DAT_112739a30);
  _objc_destroyWeak(param_1 + _DAT_112739a20);
  _objc_destroyWeak(param_1 + _DAT_112739a2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739a3c,0);
  return;
}



/* Entry: 105ed6090; end: 105ed614f;  */

void FUN_105ed6090(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e303b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e303b8,
                      &PTR____CFConstantStringClassReference_110e303d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105ed6150; end: 105ed616b; +[SCCMapDropsDropsAddressActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105ed6150(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f36b0;
  param_1[1] = &PTR_DAT_1108f36f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105ed616c; end: 105ed61c7;  */

undefined8 FUN_105ed616c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5a50;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x000105ed6590();
  return param_1;
}



/* Entry: 105ed61c8; end: 105ed61eb; +[SCCMapDropsTrayActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105ed61c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f3768;
  param_1[1] = &PTR_DAT_1108f3840;
  param_1[2] = &PTR_DAT_1108f3708;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105ed61ec; end: 105ed621b;  */

undefined8 FUN_105ed61ec(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],param_2[4],*param_2,param_2[1],param_2[2],param_2[5],param_2[6]);
  return 0;
}



/* Entry: 105ed621c; end: 105ed626b;  */

void FUN_105ed621c(void)

{
  func_0x000105ed65f0();
  func_0x000105ed65e0();
  func_0x000105ed6580(FUN_105ed64e0);
  func_0x000105ed65f8();
  func_0x000105ed65a4();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed626c; end: 105ed629f;  */

undefined8 FUN_105ed626c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],*param_2,param_2[1],*(undefined4 *)(param_2 + 4),param_2[5],
             param_2[6],param_2[7]);
  return 0;
}



/* Entry: 105ed62a0; end: 105ed62ef;  */

void FUN_105ed62a0(void)

{
  func_0x000105ed65f0();
  func_0x000105ed65e0();
  func_0x000105ed6580(0x105ed6514);
  func_0x000105ed65f8();
  func_0x000105ed65a4();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed62f0; end: 105ed631b;  */

undefined8 FUN_105ed62f0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 105ed631c; end: 105ed636b;  */

void FUN_105ed631c(void)

{
  func_0x000105ed65f0();
  func_0x000105ed65e0();
  func_0x000105ed6580(0x105ed6550);
  func_0x000105ed65f8();
  func_0x000105ed65a4();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed636c; end: 105ed638f; +[SCCNearbyPlaceActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105ed636c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f3880;
  param_1[1] = &PTR_DAT_1108f3940;
  param_1[2] = &PTR_s_oob_v_1108f3850;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105ed6390; end: 105ed639b; +[SCCMapDropsDropsAddressView componentPath] */

undefined ** FUN_105ed6390(void)

{
  return &PTR____CFConstantStringClassReference_110e304d8;
}



/* Entry: 105ed639c; end: 105ed63bf; -[SCCMapDropsDropsAddressView initWithViewModel:componentContext:runtime:] */

void FUN_105ed639c(void)

{
  func_0x000105ed65bc(PTR_PTR_1126edd10);
  return;
}



/* Entry: 105ed63c0; end: 105ed63f7; -[SCCMapDropsDropsAddressView setViewModel:] */

void FUN_105ed63c0(void)

{
  func_0x000105ed65d0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ed6600();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105ed63f8; end: 105ed6437; -[SCCMapDropsDropsAddressView viewModel] */

void FUN_105ed63f8(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ed6438; end: 105ed6443; +[SCCMapDropsMapDropsTrayView componentPath] */

undefined ** FUN_105ed6438(void)

{
  return &PTR____CFConstantStringClassReference_110e304f8;
}



/* Entry: 105ed6444; end: 105ed6467; -[SCCMapDropsMapDropsTrayView initWithViewModel:componentContext:runtime:] */

void FUN_105ed6444(void)

{
  func_0x000105ed65bc(PTR_PTR_1126edd18);
  return;
}



/* Entry: 105ed6468; end: 105ed649f; -[SCCMapDropsMapDropsTrayView setViewModel:] */

void FUN_105ed6468(void)

{
  func_0x000105ed65d0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ed6600();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105ed64a0; end: 105ed64df; -[SCCMapDropsMapDropsTrayView viewModel] */

void FUN_105ed64a0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105ed6590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ed64e0; end: 105ed657f;  */

void FUN_105ed64e0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105ed6580; end: 105ed660b;  */

void FUN_105ed6580(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 105ed660c; end: 105ed6637; -[SCCMapDropsDropsAddressEntry initWithAddressText:lat:lng:] */

void FUN_105ed660c(void)

{
  func_0x000105ed6794(PTR_PTR_1126edd20);
  func_0x000105ed67a4();
  return;
}



/* Entry: 105ed6638; end: 105ed6647; +[SCCMapDropsDropsAddressEntry valdiMarshallableObjectDescriptor] */

void FUN_105ed6638(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f39c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ed6648; end: 105ed667b; -[SCCMapDropsDropsAddressViewContext init] */

void FUN_105ed6648(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edd28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105ed667c; end: 105ed668f; +[SCCMapDropsDropsAddressViewContext valdiMarshallableObjectDescriptor] */

void FUN_105ed667c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f3a38;
  param_1[1] = &PTR_DAT_1108f3a80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ed6690; end: 105ed66c7; -[SCCMapDropsDropsAddressViewModel initWithIsLoading:rawAddressText:entries:] */

void FUN_105ed6690(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ed6794(PTR_PTR_1126edd30);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 105ed66c8; end: 105ed66db; +[SCCMapDropsDropsAddressViewModel valdiMarshallableObjectDescriptor] */

void FUN_105ed66c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f3a98;
  param_1[1] = &PTR_DAT_1108f3b10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ed66dc; end: 105ed6723; -[SCCMapDropsTrayViewContext initWithNativeVenueStoryPlayer:] */

void FUN_105ed66dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x000105ed6794(PTR_PTR_1126edd38);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 105ed6724; end: 105ed6737; +[SCCMapDropsTrayViewContext valdiMarshallableObjectDescriptor] */

void FUN_105ed6724(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f3b20;
  param_1[1] = &PTR_DAT_1108f3c88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ed6738; end: 105ed6773; -[SCCMapDropsTrayViewModel initWithInitialPinTitle:lat:lng:createdByMe:userId:isEditablePin:] */

void FUN_105ed6738(void)

{
  func_0x000105ed6794(PTR_PTR_1126edd40);
  func_0x000105ed67a4();
  return;
}



/* Entry: 105ed6774; end: 105ed67c3; +[SCCMapDropsTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_105ed6774(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f3ce0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105ed67c4; end: 105ed68a7; -[SCMapHomeProfileLogger initWithBlizzardLogger:mapLoggerSessionInfoProvider:plusSubscriptionInfoProvider:] */

undefined1 *
FUN_105ed67c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126edd48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ffa0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
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



/* Entry: 105ed68a8; end: 105ed6a03; -[SCMapHomeProfileLogger logHomeProfileOpenForGhostUserID:] */

void FUN_105ed68a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x18) != 0) {
    func_0x00010c0a7c80(param_2);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  *(long *)(param_2 + 0x18) = (long)(param_1 * 1000.0);
  puVar1 = PTR_PTR_1126c5a58;
  _objc_alloc_init(PTR_PTR_1126c5a58);
  func_0x00010c1a8e40();
  func_0x00010c1c25a0(puVar1,param_3,*(undefined8 *)(param_2 + 0x20));
  uVar2 = 0x22;
  func_0x000100c6f294(0x22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c212420(puVar1,param_3,param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c1b35c0(puVar1,param_3,uVar4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ed6a04; end: 105ed6ad3; -[SCMapHomeProfileLogger logHomeProfileClose] */

void FUN_105ed6a04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126c5a60;
    _objc_alloc_init(PTR_PTR_1126c5a60);
    func_0x00010c1a8e40();
    func_0x00010c1c25a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c080120();
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c1b35c0(puVar1,param_2,uVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105ed6ad4; end: 105ed6bd3; -[SCMapHomeProfileLogger logHomeProfileActionWithAction:] */

void FUN_105ed6ad4(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar3 = PTR_PTR_1126c5a68;
    _objc_alloc_init(PTR_PTR_1126c5a68);
    func_0x00010c1a8e40();
    func_0x00010c1c25a0(puVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    ppuVar1 = &PTR____CFConstantStringClassReference_110e30538;
    if (param_3 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e30518;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e30558;
    if (param_3 != 2) {
      ppuVar2 = ppuVar1;
    }
    func_0x00010c161620(puVar3,param_2,ppuVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c080120();
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010c1b35c0(puVar3,param_2,uVar5);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105ed6bd4; end: 105ed6c03; -[SCMapHomeProfileLogger .cxx_destruct] */

void FUN_105ed6bd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ed6c04; end: 105ed6f4f; -[SCMapHomeProfileRouter initWithMultiTrayManager:scope:valdiRuntimeProvider:currentUserID:mapPeopleFriendsProvider:deepLinkHandler:featureSettingsService:mapView:mapViewport:logger:plusSubscriptionInfoProvider:homeWorkDataProvider:plusSubscribeScopeExposer:plusSubscribeScopeServices:customizationTrayFactoryServices:] */

undefined8 *
FUN_105ed6c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126edd50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 105ed6f50; end: 105ed701b; -[SCMapHomeProfileRouter presentTrayWithHomeFeature:] */

void FUN_105ed6f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010bdf5080(param_1,param_2,param_3);
  }
  func_0x00010bddc660(param_1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010bfe3e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286500(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010bfe3e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ca0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed701c; end: 105ed709b; -[SCMapHomeProfileRouter openFriendTrayWithUserID:] */

void FUN_105ed701c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1e58;
  func_0x00010c0ba340(PTR_PTR_1126b1e58,param_2,param_3,0xc1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0();
  _objc_release(uVar2);
  func_0x00010c0a7c60(*(undefined8 *)(param_1 + 0x38),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed709c; end: 105ed717f; -[SCMapHomeProfileRouter openHomeWorkSettings] */

void FUN_105ed709c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c0a7c60(*(undefined8 *)(param_1 + 0x38),param_2,1);
  puVar2 = PTR_PTR_1126c5970;
  _objc_alloc(PTR_PTR_1126c5970);
  func_0x00010c058540();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + 0xa0));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed7180; end: 105ed71bf; -[SCMapHomeProfileRouter handleTapUpsellCardForSCPlusUser:] */

void FUN_105ed7180(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c0a7c60(*(undefined8 *)(param_1 + 0x38),param_2,2);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openHomeWorkSettings_112617ec8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openPlusSubscribeUpsellPage_112617f60);
  return;
}



/* Entry: 105ed71c0; end: 105ed7273; -[SCMapHomeProfileRouter openPlusSubscribeUpsellPage] */

void FUN_105ed71c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf23e60(uVar3,param_2,puVar1,puVar2,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x88),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed7274; end: 105ed72bf; -[SCMapHomeProfileRouter dismissTray] */

void FUN_105ed7274(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ed72c0; end: 105ed7307; -[SCMapHomeProfileRouter plusSubscribeDidDismiss] */

void FUN_105ed72c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ed7308; end: 105ed7553; -[SCMapHomeProfileRouter _createTrayLifecycleWithHomeFeature:] */

void FUN_105ed7308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5a70;
  _objc_alloc();
  func_0x00010c05fe80();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b1f08;
  uVar4 = *(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf469c0(0x4034000000000000,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1f18;
  _objc_alloc(PTR_PTR_1126b1f18);
  func_0x00010c09e300(PTR_PTR_1126b1f10);
  func_0x00010c01ed80(puVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf59b80(0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0ba2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105ed7554; end: 105ed755b;  */

undefined8 FUN_105ed7554(void)

{
  return 0;
}



/* Entry: 105ed755c; end: 105ed7607;  */

void FUN_105ed755c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ed7608; end: 105ed7633;  */

void FUN_105ed7608(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed7634; end: 105ed768f; -[SCMapHomeProfileRouter _onTrayRemoved] */

void FUN_105ed7634(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be92540();
  func_0x00010c0a7c80(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed7690; end: 105ed76eb; -[SCMapHomeProfileRouter _resetCameraOnTrayRemoved] */

void FUN_105ed7690(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar1 = PTR_PTR_1126b1e20;
    _objc_alloc(PTR_PTR_1126b1e20);
    func_0x00010c00eb00(0x3fd3333333333333);
    func_0x00010c176120(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x70),
                        puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105ed76ec; end: 105ed785b; -[SCMapHomeProfileRouter _centerMapOnHomeFeature:] */

void FUN_105ed76ec(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c2bf200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar5 = 0x4032000000000000;
  dVar7 = param_1;
  if (param_1 == 0.0) {
    dVar7 = 18.0;
  }
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b1e08;
  func_0x00010bfe3de0(param_4);
  uVar1 = param_4;
  dVar4 = param_1;
  func_0x00010bfe3d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar6 = 0.0;
  if (dVar4 != 0.0) {
    dVar6 = dVar4;
  }
  func_0x00010bf29880(param_1,uVar5,dVar7,0x404e000000000000,dVar6,puVar2,param_3,
                      *(undefined8 *)(param_2 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1e08;
  func_0x00010bfe3de0(param_4);
  _objc_release(param_4);
  func_0x00010bf8b7e0(param_1,uVar5,dVar7,puVar3,param_3,*(undefined8 *)(param_2 + 0x68),
                      *(undefined8 *)(param_2 + 0x60));
  puVar3 = PTR_PTR_1126b1e20;
  _objc_alloc(PTR_PTR_1126b1e20);
  func_0x00010c00eb00(param_1);
  func_0x00010c176120(*(undefined8 *)(param_2 + 0x68),param_3,puVar2,puVar3,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ed785c; end: 105ed786b; -[SCMapHomeProfileRouter trayScopeDidDismiss] */

void FUN_105ed785c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed786c; end: 105ed7973; -[SCMapHomeProfileRouter .cxx_destruct] */

void FUN_105ed786c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105ed7974; end: 105ed7b3f; -[SCMapHomeProfileTrayViewController initWithValdiRuntimeProvider:currentUserID:mapPeopleFriendsProvider:scope:delegate:plusSubscriptionInfoProvider:homeWorkDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105ed7974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126edd58;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    lVar4 = (long)_DAT_112739aa0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112739aa4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112739aa8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112739aac;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112739ab0),param_7);
    lVar4 = (long)_DAT_112739ab4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112739ab8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739abc);
    *(undefined **)((long)puVar1 + (long)_DAT_112739abc) = puVar3;
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



/* Entry: 105ed7b40; end: 105ed7c17; -[SCMapHomeProfileTrayViewController updateHomeProfileWithHomeOwnerID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed7b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112739aa4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112739aac);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73ac0();
    _objc_release(uVar2);
  }
  else if (*(long *)(param_1 + _DAT_112739ac0) == 0) {
    func_0x00010bdf50e0(param_1,param_2,lVar1);
  }
  else {
    func_0x00010bee3a00(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ed7c18; end: 105ed7c1f; -[SCMapHomeProfileTrayViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105ed7c18(void)

{
  return 0;
}



/* Entry: 105ed7c20; end: 105ed7c2f; -[SCMapHomeProfileTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed7c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112739abc));
  return;
}



/* Entry: 105ed7c30; end: 105ed7c7b; -[SCMapHomeProfileTrayViewController viewDidLoad] */

void FUN_105ed7c30(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126edd58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 105ed7c7c; end: 105ed7cab; -[SCMapHomeProfileTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed7c7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739abc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ed7cac; end: 105ed7cb3; -[SCMapHomeProfileTrayViewController autoSizingEnabled] */

undefined8 FUN_105ed7cac(void)

{
  return 1;
}



/* Entry: 105ed7cb4; end: 105ed7cbf; -[SCMapHomeProfileTrayViewController trayFeatureName] */

undefined ** FUN_105ed7cb4(void)

{
  return &PTR____CFConstantStringClassReference_110db9d18;
}



/* Entry: 105ed7cc0; end: 105ed7d93; -[SCMapHomeProfileTrayViewController _updateViewModelWithUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed7cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112739ac0;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bde6bc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed7d94; end: 105ed7e97; -[SCMapHomeProfileTrayViewController _createTrayViewWithUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed7d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c5a78;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bde6bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010bde6b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112739aa0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112739ac0);
  *(undefined **)(param_1 + _DAT_112739ac0) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea9c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpTrayView_1125880b8);
  return;
}



/* Entry: 105ed7e98; end: 105ed8017; -[SCMapHomeProfileTrayViewController _constructHomeProfileViewModelForUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed7e98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c5a80;
  _objc_alloc(PTR_PTR_1126c5a80);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar6 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f640(puVar3,param_2,lVar2,lVar1,lVar6);
    _objc_release(lVar6);
  }
  else {
    func_0x00010c01f640(puVar3,param_2,lVar2,lVar1,lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1c0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ed8018; end: 105ed821b; -[SCMapHomeProfileTrayViewController _constructHomeProfileContext] */

void FUN_105ed8018(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [8];
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
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar2 = PTR_PTR_1126c5a88;
  _objc_alloc_init(PTR_PTR_1126c5a88);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105ed821c;
  puStack_78 = &UNK_110843540;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c1a5260(puVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105ed8334;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c1a5280(puVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105ed8410;
  puStack_c8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c1a51c0(puVar2);
  func_0x00010be362c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8f80(puVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_copyWeak(auStack_e8,auStack_68);
  func_0x00010c1a5380(puVar2);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ed821c; end: 105ed82d7;  */

void FUN_105ed821c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ed82d8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ed82d8; end: 105ed8333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed82d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112739ab0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0e91e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed8334; end: 105ed83c3;  */

void FUN_105ed8334(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ed83c4;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ed83c4; end: 105ed840f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed83c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112739ab0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0e92c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed8410; end: 105ed849f;  */

void FUN_105ed8410(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ed84a0;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ed84a0; end: 105ed84eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed84a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112739ab0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf84900();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed84ec; end: 105ed8547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed84ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112739ab0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfd2e00();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed8548; end: 105ed8643; -[SCMapHomeProfileTrayViewController _constructHomeProfileUpsellCardDataWithCurrentUserHomeAsset:isUserHomeModelSet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed8548(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739ab4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c5a90;
  _objc_alloc(PTR_PTR_1126c5a90);
  func_0x00010c01f600();
  if (param_3 != 0) {
    lVar4 = param_3;
    func_0x00010c1121a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8da0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf63560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8d80(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ed8644; end: 105ed86fb; -[SCMapHomeProfileTrayViewController _homeProfileUpsellCardDataObservable] */

void FUN_105ed8644(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ed86fc; end: 105ed8753;  */

void FUN_105ed86fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10be0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105ed8754; end: 105ed8853; -[SCMapHomeProfileTrayViewController _fetchCurrentUserHomeAssetWithObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed8754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739ab8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfa6100(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ed8854; end: 105ed88f3;  */

void FUN_105ed8854(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfe3da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010bde6ba0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105ed88f4; end: 105ed89cb; -[SCMapHomeProfileTrayViewController _setUpTrayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed88f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_112739ac0;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c219b60(*(long *)(param_1 + lVar4),param_2,0);
    lVar5 = (long)_DAT_112739abc;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c14c960(0,0,0x4024000000000000,0,*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c2a5060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c2a5060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf493a0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c162480(uVar3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105ed89cc; end: 105ed8a77; -[SCMapHomeProfileTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed89cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739ab8,0);
  _objc_storeStrong(param_1 + _DAT_112739ab4,0);
  _objc_storeStrong(param_1 + _DAT_112739ac0,0);
  _objc_storeStrong(param_1 + _DAT_112739abc,0);
  _objc_destroyWeak(param_1 + _DAT_112739ab0);
  _objc_storeStrong(param_1 + _DAT_112739aac,0);
  _objc_storeStrong(param_1 + _DAT_112739aa8,0);
  _objc_storeStrong(param_1 + _DAT_112739aa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739aa0,0);
  return;
}



/* Entry: 105ed8a78; end: 105ed8b73; -[SCMapHomeProfileWorkflow initWithScope:homeProfileRouter:mapBrowsingContextManager:currentUserID:] */

undefined1 *
FUN_105ed8a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126edd60;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ed8b74; end: 105ed8c67; -[SCMapHomeProfileWorkflow startWorkflow] */

void FUN_105ed8b74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe3f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c1a8e00(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ed8c68; end: 105ed8caf;  */

void FUN_105ed8c68(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed8cb0; end: 105ed8cd7; -[SCMapHomeProfileWorkflow endWorkflow] */

void FUN_105ed8cb0(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bf84910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_dismissTray_1125bebe8);
  return;
}



/* Entry: 105ed8cd8; end: 105ed8ddf; -[SCMapHomeProfileWorkflow _handleHomeOwnerUpdateWithHomeFeature:] */

void FUN_105ed8cd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfe3e60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      lVar1 = param_3;
      func_0x00010bfe3e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar3,param_2,lVar1);
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = param_3;
      func_0x00010bfe3e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar4,param_2,lVar1);
      _objc_release(lVar1);
      if ((int)uVar4 == 0) {
        func_0x00010c10eae0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
        lVar1 = param_3;
        func_0x00010bfe3e60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        *(long *)(param_1 + 0x30) = lVar1;
        _objc_release(uVar3);
      }
      else if ((int)uVar3 != 0) {
        func_0x00010c0e92c0(*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed8de0; end: 105ed8e4b; -[SCMapHomeProfileWorkflow .cxx_destruct] */

void FUN_105ed8de0(long param_1)

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



/* Entry: 105ed8e4c; end: 105ed935b; -[SCMapHomeProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed8e4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  
  puVar1 = PTR_PTR_1126c5a98;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112739ae0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112739ae4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_112739ae8;
  lVar6 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar6);
  lVar33 = lVar6;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff88a0(puVar1,param_2,lVar3,lVar5,lVar33);
  _objc_release(lVar33);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c5aa0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112739aec;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_112739af0;
  lVar4 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112739af4;
  _objc_loadWeakRetained();
  lVar9 = lVar6;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_112739af8;
  lVar3 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112739afc;
  _objc_loadWeakRetained();
  lVar12 = lVar5;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112739b00;
  _objc_loadWeakRetained();
  lVar13 = lVar33;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112739b04;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_112739b08;
  lVar16 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar23 = lVar34;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112739b0c;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bfe3fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + _DAT_112739b10);
  lVar26 = param_1 + _DAT_112739b14;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_112739b18;
  _objc_loadWeakRetained();
  func_0x00010c02cbe0(puVar7,param_2,lVar8,lVar4,lVar9,lVar11,lVar12,lVar13,lVar15,lVar18,lVar22,
                      puVar1,lVar23,lVar25,uVar32,lVar26,lVar27);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar34);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar33);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar28 = PTR_PTR_1126c5aa8;
  _objc_alloc();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar5 = lVar31;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf218e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained(lVar30);
  lVar6 = lVar30;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041da0(puVar28,param_2,lVar29,puVar7,lVar2,lVar3);
  lVar33 = (long)_DAT_112739b1c;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar28;
  _objc_release(uVar32);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar30);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar31);
  _objc_release(lVar29);
  func_0x00010c251d00(*(undefined8 *)(param_1 + lVar33));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed935c; end: 105ed93b3; -[SCMapHomeProfileEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed935c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf95c60(*(undefined8 *)(param_1 + _DAT_112739b1c));
  puStack_28 = PTR_PTR_1126edd68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed93b4; end: 105ed949b; -[SCMapHomeProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed93b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739b10,0);
  _objc_destroyWeak(param_1 + _DAT_112739b14);
  _objc_destroyWeak(param_1 + _DAT_112739b18);
  _objc_destroyWeak(param_1 + _DAT_112739b0c);
  _objc_destroyWeak(param_1 + _DAT_112739ae8);
  _objc_destroyWeak(param_1 + _DAT_112739ae4);
  _objc_destroyWeak(param_1 + _DAT_112739ae0);
  _objc_destroyWeak(param_1 + _DAT_112739b08);
  _objc_destroyWeak(param_1 + _DAT_112739b04);
  _objc_destroyWeak(param_1 + _DAT_112739b00);
  _objc_destroyWeak(param_1 + _DAT_112739aec);
  _objc_destroyWeak(param_1 + _DAT_112739af4);
  _objc_destroyWeak(param_1 + _DAT_112739af8);
  _objc_destroyWeak(param_1 + _DAT_112739afc);
  _objc_destroyWeak(param_1 + _DAT_112739af0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739b1c,0);
  return;
}



/* Entry: 105ed949c; end: 105ed950f; -[SCGrapheneMapAdsMetric2 init] */

undefined1 * FUN_105ed949c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edd70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105ed9510; end: 105ed9683;  */

char * FUN_105ed9510(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_3f0;
  undefined *puStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f3ec8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105ed9684;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar6 = pcVar4;
  pcVar5 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  puVar14 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
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
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar9 = "";
    unaff_x23 = acStack_118;
    pcVar6 = acStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f3f18,pcVar6,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar13 = 0;
    puVar14 = auStack_f8;
    pcVar5 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_105ed98b4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar9;
  pcVar10 = pcVar6;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar14;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  pcVar1 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    pcVar7 = "";
    unaff_x23 = acStack_1b8;
    pcVar10 = acStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f3f68,pcVar10,pcVar5);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar13 = 0;
    pcVar1 = (char *)auStack_198;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_240;
  pcStack_1c8 = FUN_105ed9ae4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar10;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar1;
  pcStack_1e8 = pcVar4;
  pcStack_1e0 = pcVar6;
  pcStack_1d8 = pcVar9;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(pcVar7);
  plVar12 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_220;
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
    pcVar2 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f3fb8,acStack_240,pcVar10);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    pcVar3 = pcVar11;
    pcVar1 = acStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      pcVar3 = pcVar11;
      pcVar1 = acStack_240;
    }
  }
  pcVar4 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar6 = pcVar4;
  __Unwind_Resume();
  pcVar10 = acStack_2c0;
  pcStack_248 = FUN_105ed9c58;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar5 = pcVar3;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar1;
  plStack_268 = plVar12;
  pcStack_260 = pcVar4;
  pcStack_258 = pcVar7;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(pcVar2);
  plVar12 = (long *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar12 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_2a0;
    func_0x00010002b838(auStack_2a0,pcVar1);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
    pcVar9 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f4008,acStack_2c0,pcVar3);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    pcVar5 = pcVar10;
    pcVar1 = acStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      pcVar5 = pcVar10;
      pcVar1 = acStack_2c0;
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar7 = pcVar4;
  __Unwind_Resume();
  pcVar3 = acStack_340;
  pcStack_2c8 = FUN_105ed9dcc;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar9;
  pcVar10 = pcVar5;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar1;
  plStack_2e8 = plVar12;
  pcStack_2e0 = pcVar4;
  pcStack_2d8 = pcVar2;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pcVar9);
  plVar12 = (long *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar12 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x23 = (char *)auStack_320;
    func_0x00010002b838(auStack_320,pcVar1);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,auStack_320,&lStack_308,1);
    pcVar6 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f4058,acStack_340,pcVar5);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    pcVar10 = pcVar3;
    pcVar1 = acStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      pcVar10 = pcVar3;
      pcVar1 = acStack_340;
    }
  }
  pcVar4 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  pcStack_348 = FUN_105ed9f40;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  pcStack_378 = unaff_x23;
  puStack_370 = (undefined8 *)pcVar1;
  plStack_368 = plVar12;
  pcStack_360 = pcVar4;
  pcStack_358 = pcVar9;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_3a0,pcVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f40a8,&uStack_3c0,pcVar10);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar8 = &pcStack_3f0;
  pcStack_3c8 = FUN_105eda0b4;
  puStack_3e8 = PTR_PTR_1126edd78;
  pcStack_3f0 = pcVar4;
  pcStack_3e0 = pcVar1;
  pcStack_3d8 = pcVar6;
  pppuStack_3d0 = &pppuStack_350;
  _objc_msgSendSuper2(&pcStack_3f0,PTR_s_init_1125d9248);
  if (ppcVar8 != (char **)0x0) {
    pcVar1 = (char *)ppcVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar8 + 8) = pcVar1;
  }
  return (char *)ppcVar8;
}



/* Entry: 105ed9684; end: 105ed98b3;  */

char * FUN_105ed9684(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_370;
  undefined *puStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
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
  pcVar1 = param_2;
  pcVar6 = param_3;
  uVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar15 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f3f18,pcVar6,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    puVar15 = auStack_78;
    uVar12 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
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
  pcStack_a8 = FUN_105ed98b4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar6;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar15;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  pcVar2 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar8 = "";
    unaff_x23 = acStack_138;
    pcVar5 = acStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f3f68,pcVar5,uVar12);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar13 = 0;
    pcVar2 = (char *)auStack_118;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar11 = acStack_1c0;
  pcStack_148 = FUN_105ed9ae4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar8;
  pcVar10 = pcVar5;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = (undefined8 *)pcVar2;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  plVar14 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x23 = (char *)auStack_1a0;
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    pcVar9 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f3fb8,acStack_1c0,pcVar5);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar10 = pcVar11;
    pcVar2 = acStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar10 = pcVar11;
      pcVar2 = acStack_1c0;
    }
  }
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcVar4 = acStack_240;
  pcStack_1c8 = FUN_105ed9c58;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar9;
  pcVar3 = pcVar10;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar2;
  plStack_1e8 = plVar14;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar8;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar9);
  plVar14 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x23 = (char *)auStack_220;
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
    pcVar6 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f4008,acStack_240,pcVar10);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    pcVar3 = pcVar4;
    pcVar2 = acStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      pcVar3 = pcVar4;
      pcVar2 = acStack_240;
    }
  }
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcVar10 = acStack_2c0;
  pcStack_248 = FUN_105ed9dcc;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar6;
  pcVar4 = pcVar3;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar2;
  plStack_268 = plVar14;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar9;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(pcVar6);
  plVar14 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_2a0;
    func_0x00010002b838(auStack_2a0,pcVar1);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
    pcVar8 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f4058,acStack_2c0,pcVar3);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    pcVar4 = pcVar10;
    pcVar2 = acStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      pcVar4 = pcVar10;
      pcVar2 = acStack_2c0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_105ed9f40;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar2;
  plStack_2e8 = plVar14;
  pcStack_2e0 = pcVar1;
  pcStack_2d8 = pcVar6;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pcVar8);
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_320,pcVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f40a8,&uStack_340,pcVar4);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
    }
  }
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  ppcVar7 = &pcStack_370;
  pcStack_348 = FUN_105eda0b4;
  puStack_368 = PTR_PTR_1126edd78;
  pcStack_370 = pcVar6;
  pcStack_360 = pcVar1;
  pcStack_358 = pcVar8;
  pppuStack_350 = &pppuStack_2d0;
  _objc_msgSendSuper2(&pcStack_370,PTR_s_init_1125d9248);
  if (ppcVar7 != (char **)0x0) {
    pcVar1 = (char *)ppcVar7;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar7 + 8) = pcVar1;
  }
  return (char *)ppcVar7;
}



/* Entry: 105ed98b4; end: 105ed9ae3;  */

char * FUN_105ed98b4(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_2d0;
  undefined *puStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
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
  pcVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f3f68,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    pcVar4 = (char *)auStack_78;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
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
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_105ed9ae4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar6 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f3fb8,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar5;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_105ed9c58;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar9 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar12;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar6);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar2 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f4008,acStack_1a0,pcVar8);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar4 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar4 = acStack_1a0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcVar10 = acStack_220;
  pcStack_1a8 = FUN_105ed9dcc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar8 = pcVar9;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar4;
  plStack_1c8 = plVar12;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar2);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar5 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f4058,acStack_220,pcVar9);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar8 = pcVar10;
    pcVar4 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar8 = pcVar10;
      pcVar4 = acStack_220;
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_105ed9f40;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar4;
  plStack_248 = plVar12;
  pcStack_240 = pcVar1;
  pcStack_238 = pcVar2;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar5);
  if (pcVar6 != (char *)0x0) {
    plVar12 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_280,pcVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108f40a8,&uStack_2a0,pcVar8);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar7 = &pcStack_2d0;
  pcStack_2a8 = FUN_105eda0b4;
  puStack_2c8 = PTR_PTR_1126edd78;
  pcStack_2d0 = pcVar4;
  pcStack_2c0 = pcVar1;
  pcStack_2b8 = pcVar5;
  pppuStack_2b0 = &pppuStack_230;
  _objc_msgSendSuper2(&pcStack_2d0,PTR_s_init_1125d9248);
  if (ppcVar7 != (char **)0x0) {
    pcVar1 = (char *)ppcVar7;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar7 + 8) = pcVar1;
  }
  return (char *)ppcVar7;
}



/* Entry: 105ed9ae4; end: 105ed9c57;  */

char * FUN_105ed9ae4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_230;
  undefined *puStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f3fb8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_105ed9c58;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar3 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f4008,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_105ed9dcc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f4058,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcStack_188 = FUN_105ed9f40;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f40a8,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_230;
  pcStack_208 = FUN_105eda0b4;
  puStack_228 = PTR_PTR_1126edd78;
  pcStack_230 = pcVar3;
  pcStack_220 = pcVar2;
  pcStack_218 = pcVar1;
  ppuStack_210 = &ppuStack_190;
  _objc_msgSendSuper2(&pcStack_230,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 105ed9c58; end: 105ed9dcb;  */

char * FUN_105ed9c58(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_1b0;
  undefined *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f4008,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_105ed9dcc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f4058,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_105ed9f40;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f40a8,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_1b0;
  pcStack_188 = FUN_105eda0b4;
  puStack_1a8 = PTR_PTR_1126edd78;
  pcStack_1b0 = pcVar2;
  pcStack_1a0 = pcVar1;
  pcStack_198 = pcVar4;
  ppuStack_190 = &ppuStack_110;
  _objc_msgSendSuper2(&pcStack_1b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105ed9dcc; end: 105ed9f3f;  */

char * FUN_105ed9dcc(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f4058,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105ed9f40;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f40a8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_105eda0b4;
  puStack_128 = PTR_PTR_1126edd78;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 105ed9f40; end: 105eda0b3;  */

char * FUN_105ed9f40(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f40a8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_105eda0b4;
  puStack_a8 = PTR_PTR_1126edd78;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105eda0b4; end: 105eda127; -[SCGrapheneMapAdLifecyclePublishingMetric2 init] */

undefined1 * FUN_105eda0b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edd78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}


