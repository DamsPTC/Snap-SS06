/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b049d30; end: 10b049db7;  */

void FUN_10b049d30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2cb8;
  func_0x00010bfbc0e0(PTR_PTR_1126d2cb8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar2);
  func_0x00010b049ddc();
  func_0x00010b049dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b049db8; end: 10b049dfb; +[SCCSearchApiClientCreateRemoteSearchserviceClient valdiMarshallableObjectDescriptor] */

void FUN_10b049db8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2688;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110cb26b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b049dfc; end: 10b049e07; +[SCCSearchApiIndexFactory modulePath] */

undefined ** FUN_10b049dfc(void)

{
  return &PTR____CFConstantStringClassReference_110f52b98;
}



/* Entry: 10b049e08; end: 10b049e0f; +[SCCSearchApiIndexFactory asyncStrictMode] */

undefined8 FUN_10b049e08(void)

{
  return 0;
}



/* Entry: 10b049e10; end: 10b049e8f; -[SCCSearchApiIndexFactory createWithConfig:ctx:] */

void FUN_10b049e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010b04a074();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010b04a07c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b049e90; end: 10b04a013; +[SCCSearchApiIndexFactory invokeWithJSRuntimeProvider:config:ctx:completionHandler:] */

void FUN_10b049e90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010b04a074();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b049f8c;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x00010b04a074();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  func_0x00010b04a07c();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b04a014; end: 10b04a037; +[SCCSearchApiIndexFactory valdiMarshallableObjectDescriptor] */

void FUN_10b04a014(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb26e0;
  param_1[1] = &PTR_DAT_110cb2710;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b04a038; end: 10b04a04b; +[SCCFeedDataFetching valdiMarshallableObjectDescriptor] */

void FUN_10b04a038(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2730;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb2760;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04a04c; end: 10b04a083; +[SCCSearchApiSendToInteractionStoring valdiMarshallableObjectDescriptor] */

void FUN_10b04a04c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2778;
  param_1[1] = &PTR_DAT_110cb27c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04a084; end: 10b04a08f; +[SCCPublicProfileManagerGenerator modulePath] */

undefined ** FUN_10b04a084(void)

{
  return &PTR____CFConstantStringClassReference_110f52bb8;
}



/* Entry: 10b04a090; end: 10b04a093; +[SCCPublicProfileManagerGenerator asyncStrictMode] */

undefined8 FUN_10b04a090(void)

{
  return 0;
}



/* Entry: 10b04a094; end: 10b04a17f; -[SCCPublicProfileManagerGenerator generateManagerWithClient:url:userId:managedPublicProfiles:hasPendingInvites:token:snapProHeaderFn:] */

void FUN_10b04a094(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  func_0x00010b04a994();
  func_0x00010b04a98c();
  func_0x00010b04a984();
  func_0x00010b04a92c();
  func_0x00010b04a90c();
  func_0x00010b04a8b8();
  func_0x00010b04a8fc();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  func_0x00010b04a914();
  func_0x00010b04a8c0();
  func_0x00010b04a904();
  func_0x00010b04a8b0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b04a180; end: 10b04a2ff; +[SCCPublicProfileManagerGenerator invokeWithJSRuntimeProvider:client:url:userId:managedPublicProfiles:hasPendingInvites:token:snapProHeaderFn:completionHandler:] */

void FUN_10b04a180(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b04a924();
  func_0x00010b04a8b8();
  func_0x00010b04a90c();
  func_0x00010b04a92c();
  func_0x00010b04a984();
  func_0x00010b04a98c();
  _objc_retain(param_10);
  func_0x00010b04a994();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010b04a8d4();
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b04a300;
  puStack_b0 = &UNK_1108a01a0;
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_68 = param_11;
  lStack_a8 = lVar1;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  func_0x00010b04a994();
  _objc_retain(param_10);
  func_0x00010b04a98c();
  func_0x00010b04a984();
  func_0x00010b04a92c();
  func_0x00010b04a90c();
  func_0x00010b04a8b8();
  func_0x00010b04a8fc();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_c8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  func_0x00010b04a970();
  func_0x00010b04a95c();
  func_0x00010b04a91c();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  func_0x00010b04a914();
  func_0x00010b04a8c0();
  func_0x00010b04a904();
  func_0x00010b04a8b0();
  _objc_release(param_3);
  return;
}



/* Entry: 10b04a300; end: 10b04a37f;  */

void FUN_10b04a300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dc8d8;
  func_0x00010bfbc0e0(PTR_PTR_1126dc8d8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b04a8e4(*(undefined8 *)(param_1 + 0x60));
  func_0x00010b04a914();
  func_0x00010b04a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b04a380; end: 10b04a3bf; +[SCCPublicProfileManagerGenerator valdiMarshallableObjectDescriptor] */

void FUN_10b04a380(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2810;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110cb2840;
  param_1[2] = &PTR_DAT_110cb27e0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b04a3c0; end: 10b04a423;  */

void FUN_10b04a3c0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x00010b04a8d4();
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b04a83c;
  puStack_30 = &UNK_110963890;
  uStack_28 = param_1;
  func_0x00010b04a8fc();
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x00010b04a91c();
  func_0x00010b04a8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b04a424; end: 10b04a427; +[SCCSnapProMapGetPublicProfile modulePath] */

undefined ** FUN_10b04a424(void)

{
  return &PTR____CFConstantStringClassReference_110f52bd8;
}



/* Entry: 10b04a428; end: 10b04a42b; +[SCCSnapProMapGetPublicProfile asyncStrictMode] */

undefined8 FUN_10b04a428(void)

{
  return 0;
}



/* Entry: 10b04a42c; end: 10b04a48b; -[SCCSnapProMapGetPublicProfile toLegacyProfileAndUserDataWithPublicProfileAndUserDataResponse:] */

void FUN_10b04a42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b04a8b0();
  func_0x00010b04a904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b04a48c; end: 10b04a5a3; +[SCCSnapProMapGetPublicProfile invokeWithJSRuntimeProvider:publicProfileAndUserDataResponse:completionHandler:] */

void FUN_10b04a48c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b04a924();
  func_0x00010b04a8b8();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010b04a8d4();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b04a530;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x00010b04a8b8();
  func_0x00010b04a8fc();
  func_0x00010b04a90c();
  func_0x00010bf85140(param_3,param_2,auStack_68);
  func_0x00010b04a970();
  func_0x00010b04a95c();
  func_0x00010b04a91c();
  func_0x00010b04a904();
  func_0x00010b04a8b0();
  func_0x00010b04a8c0();
  return;
}



/* Entry: 10b04a5a4; end: 10b04a5b7; +[SCCSnapProMapGetPublicProfile valdiMarshallableObjectDescriptor] */

void FUN_10b04a5a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb2868;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b04a5b8; end: 10b04a5bb; +[SCCSnapProMapListPublicProfile modulePath] */

undefined ** FUN_10b04a5b8(void)

{
  return &PTR____CFConstantStringClassReference_110f52bd8;
}



/* Entry: 10b04a5bc; end: 10b04a5bf; +[SCCSnapProMapListPublicProfile asyncStrictMode] */

undefined8 FUN_10b04a5bc(void)

{
  return 0;
}



/* Entry: 10b04a5c0; end: 10b04a62b; -[SCCSnapProMapListPublicProfile toListManagedBusinessProfileWithListManagedPublicProfileResponse:userId:] */

void FUN_10b04a5c0(long param_1)

{
  func_0x00010b04a924();
  func_0x00010b04a8b8();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b04a8b0();
  func_0x00010b04a904();
  func_0x00010b04a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b04a62c; end: 10b04a763; +[SCCSnapProMapListPublicProfile invokeWithJSRuntimeProvider:listManagedPublicProfileResponse:userId:completionHandler:] */

void FUN_10b04a62c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b04a924();
  func_0x00010b04a8b8();
  func_0x00010b04a90c();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b04a6f0;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  func_0x00010b04a90c();
  func_0x00010b04a8b8();
  func_0x00010b04a8fc();
  func_0x00010b04a92c();
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  func_0x00010b04a970();
  func_0x00010b04a95c();
  func_0x00010b04a91c();
  _objc_release(lStack_50);
  func_0x00010b04a8c0();
  func_0x00010b04a904();
  func_0x00010b04a8b0();
  func_0x00010b04a914();
  return;
}



/* Entry: 10b04a764; end: 10b04a777; +[SCCSnapProMapListPublicProfile valdiMarshallableObjectDescriptor] */

void FUN_10b04a764(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb2898;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b04a778; end: 10b04a7bb; +[SCCProfileContentFetcher valdiMarshallableObjectDescriptor] */

void FUN_10b04a778(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb28f8;
  param_1[1] = &PTR_DAT_110cb2928;
  param_1[2] = &PTR_DAT_110cb28c8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04a7bc; end: 10b04a81f;  */

void FUN_10b04a7bc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x00010b04a8d4();
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b04a874;
  puStack_30 = &UNK_110cb29b8;
  uStack_28 = param_1;
  func_0x00010b04a8fc();
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x00010b04a91c();
  func_0x00010b04a8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b04a820; end: 10b04a83b; +[SCProfileAndUserDataSource valdiMarshallableObjectDescriptor] */

void FUN_10b04a820(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2948;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb29a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04a83c; end: 10b04a8af;  */

void FUN_10b04a83c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b04a8b0; end: 10b04a9a3;  */

void FUN_10b04a8b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b04a9a4; end: 10b04a9bf; +[SCCCrashUtils valdiMarshallableObjectDescriptor] */

void FUN_10b04a9a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb29e8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04a9c0; end: 10b04a9d3; +[SCCStoryPlayerNativeItem valdiMarshallableObjectDescriptor] */

void FUN_10b04a9c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e553708;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04a9d4; end: 10b04aa0b;  */

void FUN_10b04a9d4(void)

{
  func_0x00010b04af98();
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10b04aa0c; end: 10b04aa1f; +[SCCStoryPlayerNativeSnapProStoryFetching valdiMarshallableObjectDescriptor] */

void FUN_10b04aa0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2a48;
  param_1[1] = &PTR_DAT_110cb2a78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04aa20; end: 10b04aa33; +[SCCStoryPlayerNativeStoryCardFetching valdiMarshallableObjectDescriptor] */

void FUN_10b04aa20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2a90;
  param_1[1] = &PTR_DAT_110cb2ac0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04aa34; end: 10b04aa6b;  */

void FUN_10b04aa34(void)

{
  func_0x00010b04af98();
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10b04aa6c; end: 10b04aa7f; +[SCCStoryPlayerNativeUserStoryFetching valdiMarshallableObjectDescriptor] */

void FUN_10b04aa6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2ad8;
  param_1[1] = &PTR_DAT_110cb2b08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04aa80; end: 10b04aab7;  */

void FUN_10b04aa80(void)

{
  func_0x00010b04af98();
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10b04aab8; end: 10b04aadb; +[SCCStoryPlayerPlaying valdiMarshallableObjectDescriptor] */

void FUN_10b04aab8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2b90;
  param_1[1] = &PTR_DAT_110cb2c08;
  param_1[2] = &PTR_DAT_110cb2b18;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04aadc; end: 10b04ab07;  */

undefined8 FUN_10b04aadc(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2,param_2[2],param_2[3]);
  return 0;
}



/* Entry: 10b04ab08; end: 10b04ab57;  */

void FUN_10b04ab08(void)

{
  func_0x00010b04af90();
  func_0x00010b04af60();
  func_0x00010b04af14(FUN_10b04adf8);
  func_0x00010b04af78();
  func_0x00010b04af3c();
  func_0x00010b04af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04ab58; end: 10b04ab97;  */

undefined8 FUN_10b04ab58(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],param_2[7],
             param_2[8]);
  return 0;
}



/* Entry: 10b04ab98; end: 10b04abe7;  */

void FUN_10b04ab98(void)

{
  func_0x00010b04af90();
  func_0x00010b04af60();
  func_0x00010b04af14(0x10b04ae24);
  func_0x00010b04af78();
  func_0x00010b04af3c();
  func_0x00010b04af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04abe8; end: 10b04ac1b;  */

undefined8 FUN_10b04abe8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],*param_2,param_2[1],param_2[2],param_2[4],param_2[5],param_2[6]);
  return 0;
}



/* Entry: 10b04ac1c; end: 10b04ac6b;  */

void FUN_10b04ac1c(void)

{
  func_0x00010b04af90();
  func_0x00010b04af60();
  func_0x00010b04af14(0x10b04ae60);
  func_0x00010b04af78();
  func_0x00010b04af3c();
  func_0x00010b04af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04ac6c; end: 10b04ac97;  */

undefined8 FUN_10b04ac6c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10b04ac98; end: 10b04ace7;  */

void FUN_10b04ac98(void)

{
  func_0x00010b04af90();
  func_0x00010b04af60();
  func_0x00010b04af14(0x10b04ae94);
  func_0x00010b04af78();
  func_0x00010b04af3c();
  func_0x00010b04af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04ace8; end: 10b04ad1f;  */

void FUN_10b04ace8(void)

{
  func_0x00010b04af98();
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10b04ad20; end: 10b04ad5b; +[SCCStoryPlayerStorySnapViewStateProviding valdiMarshallableObjectDescriptor] */

void FUN_10b04ad20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2c78;
  param_1[1] = &PTR_DAT_110cb2cf0;
  param_1[2] = &PTR_DAT_110cb2c48;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04ad5c; end: 10b04adab;  */

void FUN_10b04ad5c(void)

{
  func_0x00010b04af90();
  func_0x00010b04af60();
  func_0x00010b04af14(0x10b04aec4);
  func_0x00010b04af78();
  func_0x00010b04af3c();
  func_0x00010b04af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04adac; end: 10b04ade3;  */

void FUN_10b04adac(void)

{
  func_0x00010b04af98();
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10b04ade4; end: 10b04adf7; +[SCCStoryPlayerStorySnapViewStateProvidingObservable valdiMarshallableObjectDescriptor] */

void FUN_10b04ade4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2d20;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb2d50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04adf8; end: 10b04aeef;  */

void FUN_10b04adf8(long param_1)

{
  func_0x00010b04afa4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 10b04aef0; end: 10b04afab;  */

undefined8 FUN_10b04aef0(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  _objc_retain();
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbe00();
  func_0x00010b967914();
  _objc_release(unaff_x19);
  return param_1;
}



/* Entry: 10b04afac; end: 10b04afd7; +[SCCSubscriptionStore valdiMarshallableObjectDescriptor] */

void FUN_10b04afac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2e10;
  param_1[1] = &PTR_DAT_110cb2eb8;
  param_1[2] = &PTR_DAT_110cb2dc8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b04afd8; end: 10b04afff;  */

undefined8 FUN_10b04afd8(void)

{
  code *extraout_x8;
  
  func_0x00010b04b1e0();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b04b000; end: 10b04b05f;  */

void FUN_10b04b000(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_10b04b1b0(FUN_10b04b144);
  _objc_retainBlock(&puStack_48);
  func_0x00010b04b1c0();
  func_0x00010b04b1d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04b060; end: 10b04b087;  */

undefined8 FUN_10b04b060(void)

{
  code *extraout_x8;
  
  func_0x00010b04b1e0();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b04b088; end: 10b04b0e7;  */

void FUN_10b04b088(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_10b04b1b0(0x10b04b17c);
  _objc_retainBlock(&puStack_48);
  func_0x00010b04b1c0();
  func_0x00010b04b1d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04b0e8; end: 10b04b143;  */

undefined8 FUN_10b04b0e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df4b0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010b04b1d8();
  return param_1;
}



/* Entry: 10b04b144; end: 10b04b1af;  */

void FUN_10b04b144(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b04b1b0; end: 10b04b1f3;  */

void FUN_10b04b1b0(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b04b1f4; end: 10b04b1fb; -[SCSubscriptionWorkflowErrorCode__Enum init] */

void FUN_10b04b1f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b04b1fc; end: 10b04b2b3; -[SCSubscriptionWorkflowSourceType__Enum init] */

undefined8 FUN_10b04b1fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_113366eb0;
  puStack_48 = PTR_PTR_113366eb8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f52c38;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e57fd8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f52c58;
  uVar3 = 5;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0();
  func_0x00010b04b42c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  _objc_retainBlock();
  uVar2 = uVar3;
  _objc_retainBlock();
  _objc_release(uVar3);
  func_0x00010b04b410();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10b04b2b4; end: 10b04b343; -[SCCSubscriptionWorkflow initWithSubscribeTo:unsubscribeTo:] */

undefined8
FUN_10b04b2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  func_0x00010b04b410();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 10b04b344; end: 10b04b357; +[SCCSubscriptionWorkflow valdiMarshallableObjectDescriptor] */

void FUN_10b04b344(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2ee8;
  param_1[1] = &PTR_DAT_110cb2f30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04b358; end: 10b04b3ab; -[SCCSubscriptionWorkflowGenerator initWithCreate:] */

undefined8 FUN_10b04b358(undefined8 param_1)

{
  _objc_retainBlock();
  func_0x00010b04b410();
  func_0x00010b04b42c();
  return param_1;
}



/* Entry: 10b04b3ac; end: 10b04b3bf; +[SCCSubscriptionWorkflowGenerator valdiMarshallableObjectDescriptor] */

void FUN_10b04b3ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2f48;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_110cb2f78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04b3c0; end: 10b04b3f7; -[SCSubscriptionWorkflowError initWithCode:message:] */

void FUN_10b04b3c0(undefined8 param_1)

{
  func_0x00010b04b410(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b04b3f8; end: 10b04b437; +[SCSubscriptionWorkflowError valdiMarshallableObjectDescriptor] */

void FUN_10b04b3f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_code_110cb2f90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04b438; end: 10b04b4e7; -[SCSelectionItem initWithCoder:] */

undefined1 * FUN_10b04b438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704c00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04b4e8; end: 10b04b593; -[SCSelectionItem initWithRecipient:participants:] */

undefined1 *
FUN_10b04b4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704c00;
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



/* Entry: 10b04b594; end: 10b04b5b7; -[SCSelectionItem copyWithZone:] */

undefined8 FUN_10b04b594(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04b5b8; end: 10b04b617; -[SCSelectionItem encodeWithCoder:] */

void FUN_10b04b5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f52f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f52f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b04b618; end: 10b04b68b; -[SCSelectionItem hash] */

undefined8 * FUN_10b04b618(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b04b70c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b04b718;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b04b718;
        }
        goto LAB_10b04b70c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b04b718:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b04b68c; end: 10b04b733; -[SCSelectionItem isEqual:] */

long FUN_10b04b68c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04b70c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04b718;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b04b718;
        }
        goto LAB_10b04b70c;
      }
    }
    lVar3 = 0;
  }
LAB_10b04b718:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04b734; end: 10b04b73b; -[SCSelectionItem recipient] */

undefined8 FUN_10b04b734(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b04b73c; end: 10b04b743; -[SCSelectionItem participants] */

undefined8 FUN_10b04b73c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04b744; end: 10b04b773; -[SCSelectionItem .cxx_destruct] */

void FUN_10b04b744(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b04b774; end: 10b04b82f; -[SCSelectionItemAttribution initWithItem:source:selectedTimestamp:] */

undefined1 *
FUN_10b04b774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112704c08;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04b830; end: 10b04b853; -[SCSelectionItemAttribution copyWithZone:] */

undefined8 FUN_10b04b830(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04b854; end: 10b04b8eb; -[SCSelectionItemAttribution hash] */

undefined8 * FUN_10b04b854(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b04b9a0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b04b9ac;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x10);
        if (puVar8 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b04b9ac;
        }
        goto LAB_10b04b9a0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b04b9ac:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b04b8ec; end: 10b04b9c7; -[SCSelectionItemAttribution isEqual:] */

long FUN_10b04b8ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04b9a0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04b9ac;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b04b9ac;
        }
        goto LAB_10b04b9a0;
      }
    }
    lVar4 = 0;
  }
LAB_10b04b9ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b04b9c8; end: 10b04b9cf; -[SCSelectionItemAttribution item] */

undefined8 FUN_10b04b9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b04b9d0; end: 10b04b9d7; -[SCSelectionItemAttribution source] */

undefined8 FUN_10b04b9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04b9d8; end: 10b04b9df; -[SCSelectionItemAttribution selectedTimestamp] */

undefined8 FUN_10b04b9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04b9e0; end: 10b04ba0f; -[SCSelectionItemAttribution .cxx_destruct] */

void FUN_10b04b9e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b04ba10; end: 10b04bad3; -[SCSelectionItemUpdate initWithSelectionItem:isSelected:isDisabled:source:] */

undefined1 *
FUN_10b04ba10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704c10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04bad4; end: 10b04baf7; -[SCSelectionItemUpdate copyWithZone:] */

undefined8 FUN_10b04bad4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04baf8; end: 10b04bb77; -[SCSelectionItemUpdate hash] */

undefined8 * FUN_10b04baf8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b04bc18:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b04bc24;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10b04bc24;
        }
        goto LAB_10b04bc18;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b04bc24:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b04bb78; end: 10b04bc3f; -[SCSelectionItemUpdate isEqual:] */

long FUN_10b04bb78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04bc18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04bc24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b04bc24;
        }
        goto LAB_10b04bc18;
      }
    }
    lVar3 = 0;
  }
LAB_10b04bc24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04bc40; end: 10b04bc47; -[SCSelectionItemUpdate selectionItem] */

undefined8 FUN_10b04bc40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04bc48; end: 10b04bc4f; -[SCSelectionItemUpdate isSelected] */

undefined1 FUN_10b04bc48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b04bc50; end: 10b04bc57; -[SCSelectionItemUpdate isDisabled] */

undefined1 FUN_10b04bc50(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b04bc58; end: 10b04bc5f; -[SCSelectionItemUpdate source] */

undefined8 FUN_10b04bc58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04bc60; end: 10b04bc8f; -[SCSelectionItemUpdate .cxx_destruct] */

void FUN_10b04bc60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b04bc90; end: 10b04bd8f; -[SCSelectionParticipant initWithCoder:] */

undefined1 * FUN_10b04bc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704c18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04bd90; end: 10b04be9b; -[SCSelectionParticipant initWithIdentifier:username:nameToDisplay:additionalData:] */

undefined1 *
FUN_10b04bd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704c18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04be9c; end: 10b04bebf; -[SCSelectionParticipant copyWithZone:] */

undefined8 FUN_10b04be9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


