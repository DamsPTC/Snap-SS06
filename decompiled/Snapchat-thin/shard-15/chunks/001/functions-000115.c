/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b89ac70; end: 10b89ac8b;  */

void FUN_10b89ac70(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b89ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1);
  return;
}



/* Entry: 10b89ac8c; end: 10b89acdb;  */

void FUN_10b89ac8c(void)

{
  func_0x00010b89afa4();
  func_0x00010b89af48();
  func_0x00010b89af00(0x10b89aed0);
  func_0x00010b89afac();
  func_0x00010b89af24();
  func_0x00010b89af9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89acdc; end: 10b89ad37;  */

undefined8 FUN_10b89acdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b00;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010b89af9c();
  return param_1;
}



/* Entry: 10b89ad38; end: 10b89ad43; +[SCComposerManualExposureFloat valdiMarshallableObjectDescriptor] */

void FUN_10b89ad38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d6ac98;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89ad44; end: 10b89ad5f; +[SCComposerManualExposureLong valdiMarshallableObjectDescriptor] */

void FUN_10b89ad44(undefined8 *param_1)

{
  *param_1 = &PTR_s_value_110d6ace0;
  param_1[1] = &PTR_DAT_110d6ad28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89ad60; end: 10b89ad6b; +[SCComposerManualExposureNumber valdiMarshallableObjectDescriptor] */

void FUN_10b89ad60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d6ad38;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89ad6c; end: 10b89ad77; +[SCComposerManualExposureProtoBytes valdiMarshallableObjectDescriptor] */

void FUN_10b89ad6c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d6ad80;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89ad78; end: 10b89ad83; +[SCComposerManualExposureString valdiMarshallableObjectDescriptor] */

void FUN_10b89ad78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d6adc8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89ad84; end: 10b89aeff;  */

void FUN_10b89ad84(void)

{
  func_0x00010b89af74();
  return;
}



/* Entry: 10b89af00; end: 10b89afdf;  */

void FUN_10b89af00(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b89afe0; end: 10b89b00b; +[SCCDuplexDuplexClient valdiMarshallableObjectDescriptor] */

void FUN_10b89afe0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6aed0;
  param_1[1] = &PTR_s_SCBridgeObservable_110d6af48;
  param_1[2] = &PTR_s_oob_v_110d6aea0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b00c; end: 10b89b037;  */

undefined8 FUN_10b89b00c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10b89b038; end: 10b89b0b7;  */

void FUN_10b89b038(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b89b118;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b89b0b8; end: 10b89b117;  */

undefined8 FUN_10b89b0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b08;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b89b118; end: 10b89b147;  */

void FUN_10b89b118(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89b148; end: 10b89b16b; +[SCCJobScheduler valdiMarshallableObjectDescriptor] */

void FUN_10b89b148(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6af68;
  param_1[1] = &PTR_DAT_110d6afb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b16c; end: 10b89b1cb;  */

undefined8 FUN_10b89b16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b10;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b89b1cc; end: 10b89b1d7; +[SCCMDPCreateSDOM modulePath] */

undefined ** FUN_10b89b1cc(void)

{
  return &PTR____CFConstantStringClassReference_110f9d898;
}



/* Entry: 10b89b1d8; end: 10b89b1df; +[SCCMDPCreateSDOM asyncStrictMode] */

undefined8 FUN_10b89b1d8(void)

{
  return 0;
}



/* Entry: 10b89b1e0; end: 10b89b24b; -[SCCMDPCreateSDOM createSDOMWithDependencies:] */

void FUN_10b89b1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b89b67c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b89b24c; end: 10b89b3af; +[SCCMDPCreateSDOM invokeWithJSRuntimeProvider:dependencies:completionHandler:] */

void FUN_10b89b24c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010b89b648();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b89b324;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  func_0x00010b89b67c();
  _objc_release(param_3);
  return;
}



/* Entry: 10b89b3b0; end: 10b89b3d3; +[SCCMDPCreateSDOM valdiMarshallableObjectDescriptor] */

void FUN_10b89b3b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6afc0;
  param_1[1] = &PTR_DAT_110d6aff0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b89b3d4; end: 10b89b3f7; +[SCCMDPMMSnapDocMediaManager valdiMarshallableObjectDescriptor] */

void FUN_10b89b3d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b050;
  param_1[1] = &PTR_DAT_110d6b0c8;
  param_1[2] = &PTR_DAT_110d6b008;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b3f8; end: 10b89b42b;  */

undefined8 FUN_10b89b3f8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[5],*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[6],param_2[7]);
  return 0;
}



/* Entry: 10b89b42c; end: 10b89b47b;  */

void FUN_10b89b42c(void)

{
  func_0x00010b89b69c();
  func_0x00010b89b648();
  func_0x00010b89b638(FUN_10b89b5b4);
  func_0x00010b89b694();
  func_0x00010b89b664();
  func_0x00010b89b67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89b47c; end: 10b89b4ab;  */

undefined8 FUN_10b89b47c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
  return 0;
}



/* Entry: 10b89b4ac; end: 10b89b4fb;  */

void FUN_10b89b4ac(void)

{
  func_0x00010b89b69c();
  func_0x00010b89b648();
  func_0x00010b89b638(0x10b89b5e0);
  func_0x00010b89b694();
  func_0x00010b89b664();
  func_0x00010b89b67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89b4fc; end: 10b89b51f; +[SCCMDPSDOMCapabilityManager valdiMarshallableObjectDescriptor] */

void FUN_10b89b4fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b120;
  param_1[1] = &PTR_DAT_110d6b168;
  param_1[2] = &PTR_s_ob_v_110d6b0f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b520; end: 10b89b547;  */

undefined8 FUN_10b89b520(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b89b548; end: 10b89b597;  */

void FUN_10b89b548(void)

{
  func_0x00010b89b69c();
  func_0x00010b89b648();
  func_0x00010b89b638(0x10b89b608);
  func_0x00010b89b694();
  func_0x00010b89b664();
  func_0x00010b89b67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b89b598; end: 10b89b5b3; +[SCCMDPSDOMMediaManager valdiMarshallableObjectDescriptor] */

void FUN_10b89b598(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b180;
  param_1[1] = &PTR_DAT_110d6b1f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b5b4; end: 10b89b637;  */

void FUN_10b89b5b4(long param_1)

{
  func_0x00010b89b684(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 10b89b638; end: 10b89b6a3;  */

void FUN_10b89b638(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b89b6a4; end: 10b89b6c7; +[SCCBlizzardLogging valdiMarshallableObjectDescriptor] */

void FUN_10b89b6a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b238;
  param_1[1] = &PTR_DAT_110d6b268;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b6c8; end: 10b89b727;  */

undefined8 FUN_10b89b6c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b18;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b89b728; end: 10b89b743; +[SCValdiFoundationCancelable valdiMarshallableObjectDescriptor] */

void FUN_10b89b728(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_cancel_110d6b278;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b89b744; end: 10b89b7a3;  */

undefined8 FUN_10b89b744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b20;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b89b7a4; end: 10b89b7a7; +[SCCValdiCoreCombineGlobalProviderSource modulePath] */

undefined ** FUN_10b89b7a4(void)

{
  return &PTR____CFConstantStringClassReference_110f9d8b8;
}



/* Entry: 10b89b7a8; end: 10b89b7af; +[SCCValdiCoreCombineGlobalProviderSource asyncStrictMode] */

undefined8 FUN_10b89b7a8(void)

{
  return 0;
}



/* Entry: 10b89b7b0; end: 10b89b80f; -[SCCValdiCoreCombineGlobalProviderSource combineGlobalProviderSourceWithGlobalProviderSourceIds:] */

undefined8 FUN_10b89b7b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))();
  FUN_10b89bb84();
  func_0x00010b89bbc4();
  return param_1;
}



/* Entry: 10b89b810; end: 10b89b937; +[SCCValdiCoreCombineGlobalProviderSource invokeWithJSRuntimeProvider:globalProviderSourceIds:completionHandler:] */

void FUN_10b89b810(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  
  _objc_retain(param_4);
  func_0x00010b89bbcc();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010b89bb8c();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b89b8d0;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x00010b89bbcc();
  func_0x00010b89bbb0();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x00010b89bbd4();
  func_0x00010b89bbc4();
  func_0x00010b89bb84();
  func_0x00010b89bba8();
  return;
}



/* Entry: 10b89b938; end: 10b89b94b; +[SCCValdiCoreCombineGlobalProviderSource valdiMarshallableObjectDescriptor] */

void FUN_10b89b938(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6b2a8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b89b94c; end: 10b89b94f; +[SCCValdiCoreUnregisterGlobalProviderSource modulePath] */

undefined ** FUN_10b89b94c(void)

{
  return &PTR____CFConstantStringClassReference_110f9d8b8;
}



/* Entry: 10b89b950; end: 10b89b957; +[SCCValdiCoreUnregisterGlobalProviderSource asyncStrictMode] */

undefined8 FUN_10b89b950(void)

{
  return 0;
}



/* Entry: 10b89b958; end: 10b89b99b; -[SCCValdiCoreUnregisterGlobalProviderSource unregisterGlobalProviderSourceWithGlobalProviderSourceId:] */

void FUN_10b89b958(undefined8 param_1,long param_2)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b89b99c; end: 10b89ba43; +[SCCValdiCoreUnregisterGlobalProviderSource invokeWithJSRuntimeProvider:globalProviderSourceId:completionHandler:] */

void FUN_10b89b99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  (**(code **)(param_4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010b89bb8c();
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b89ba44;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = lVar1;
  uStack_40 = param_5;
  uStack_38 = param_1;
  func_0x00010b89bbb0();
  func_0x00010b89bbcc();
  func_0x00010bf85140(param_4,param_3,auStack_68);
  _objc_release(uStack_40);
  func_0x00010b89bbd4();
  func_0x00010b89bb84();
  func_0x00010b89bbc4();
  return;
}



/* Entry: 10b89ba44; end: 10b89baab;  */

void FUN_10b89ba44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1b30;
  func_0x00010bfbc0e0(PTR_PTR_1126e1b30,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  func_0x00010b89bba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b89baac; end: 10b89bac7; +[SCCValdiCoreUnregisterGlobalProviderSource valdiMarshallableObjectDescriptor] */

void FUN_10b89baac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b308;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_110d6b2d8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b89bac8; end: 10b89baeb;  */

undefined8 FUN_10b89bac8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b89baec; end: 10b89bb57;  */

void FUN_10b89baec(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x00010b89bb8c();
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b89bb58;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  func_0x00010b89bbb0();
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x00010b89bbd4();
  func_0x00010b89bb84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b89bb58; end: 10b89bb83;  */

void FUN_10b89bb58(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89bb84; end: 10b89bbe7;  */

void FUN_10b89bb84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b89bbe8; end: 10b89bbeb; -[SCCAdWebBrowserFooterAccessoryType__Enum init] */

void FUN_10b89bbe8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89bbec; end: 10b89bbef; -[SCCAdWebBrowserHeaderFooterAnimationState__Enum init] */

void FUN_10b89bbec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89bbf0; end: 10b89bbf3; -[SCCAdWebBrowserPrivacyConsentUpdateLocation__Enum init] */

void FUN_10b89bbf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89bbf4; end: 10b89bbfb; -[SCCAsmLogEventType__Enum init] */

void FUN_10b89bbf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b89bbfc; end: 10b89bc03; -[SCCSpectrumAutofillLogEventType__Enum init] */

void FUN_10b89bbfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x13);
  return;
}



/* Entry: 10b89bc04; end: 10b89bc07; -[SCCSpectrumAutofillLogFormType__Enum init] */

void FUN_10b89bc04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89bc08; end: 10b89bc0f; -[SCCSpectrumAutofillLogSaveSourceType__Enum init] */

void FUN_10b89bc08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b89bc10; end: 10b89bc17; -[SCCWebBrowserActionType__Enum init] */

void FUN_10b89bc10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x17);
  return;
}



/* Entry: 10b89bc18; end: 10b89bc1f; -[SCCWebBrowserEventPage__Enum init] */

void FUN_10b89bc18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b89bc20; end: 10b89bc23; -[SCCWebBrowserUserAgentType__Enum init] */

void FUN_10b89bc20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b89bc24; end: 10b89bc2b; -[SCCWebviewSource__Enum init] */

void FUN_10b89bc24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x22);
  return;
}



/* Entry: 10b89bc2c; end: 10b89bc4b; -[SCCAdWebBrowserBookmarksContext init] */

void FUN_10b89bc2c(void)

{
  FUN_10b89c204(PTR_PTR_11270bb60);
  return;
}



/* Entry: 10b89bc4c; end: 10b89bc6f; +[SCCAdWebBrowserBookmarksContext valdiMarshallableObjectDescriptor] */

void FUN_10b89bc4c(undefined8 *param_1)

{
  *param_1 = &PTR_s_notificationPresenter_110d6b368;
  param_1[1] = &PTR_s_SCCNotificationPresenter_110d6b458;
  param_1[2] = &PTR_DAT_110d6b338;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bc70; end: 10b89bc9b;  */

undefined8 FUN_10b89bc70(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 10b89bc9c; end: 10b89bd1b;  */

void FUN_10b89bc9c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b89c1d0;
  puStack_30 = &UNK_110d6c680;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b89bd1c; end: 10b89bd3b; -[SCCAdWebBrowserBookmarksViewModel init] */

void FUN_10b89bd1c(void)

{
  FUN_10b89c204(PTR_PTR_11270bb68);
  return;
}



/* Entry: 10b89bd3c; end: 10b89bd4b; +[SCCAdWebBrowserBookmarksViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b89bd3c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6b480;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bd4c; end: 10b89bd6b; -[SCCAdWebBrowserContext init] */

void FUN_10b89bd4c(void)

{
  FUN_10b89c204(PTR_PTR_11270bb70);
  return;
}



/* Entry: 10b89bd6c; end: 10b89bd8f; +[SCCAdWebBrowserContext valdiMarshallableObjectDescriptor] */

void FUN_10b89bd6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b4e0;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_110d6b858;
  param_1[2] = &PTR_DAT_110d6b4b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bd90; end: 10b89bdaf; -[SCCAdWebBrowserContextV2 init] */

void FUN_10b89bd90(void)

{
  FUN_10b89c204(PTR_PTR_11270bb78);
  return;
}



/* Entry: 10b89bdb0; end: 10b89bdc3; +[SCCAdWebBrowserContextV2 valdiMarshallableObjectDescriptor] */

void FUN_10b89bdb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6b8d0;
  param_1[1] = &PTR_DAT_110d6bac8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bdc4; end: 10b89bdfb; -[SCCAdWebBrowserNavigationStatus initWithCanGoForward:canGoBack:] */

void FUN_10b89bdc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bb80;
  uStack_20 = param_1;
  func_0x00010b89c264(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b89bdfc; end: 10b89be0b; +[SCCAdWebBrowserNavigationStatus valdiMarshallableObjectDescriptor] */

void FUN_10b89bdfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6bb28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89be0c; end: 10b89be2b; -[SCCAdWebBrowserSettingsContext init] */

void FUN_10b89be0c(void)

{
  FUN_10b89c204(PTR_PTR_11270bb88);
  return;
}



/* Entry: 10b89be2c; end: 10b89be4f; +[SCCAdWebBrowserSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_10b89be2c(undefined8 *param_1)

{
  *param_1 = &PTR_s_alertPresenter_110d6bba0;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_110d6bcc0;
  param_1[2] = &PTR_DAT_110d6bb70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89be50; end: 10b89be6f; -[SCCAdWebBrowserSettingsViewModel init] */

void FUN_10b89be50(void)

{
  FUN_10b89c204(PTR_PTR_11270bb90);
  return;
}



/* Entry: 10b89be70; end: 10b89be7f; +[SCCAdWebBrowserSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b89be70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6bd00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89be80; end: 10b89beaf; -[SCCAdWebBrowserUrlInfo initWithUrl:] */

void FUN_10b89be80(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89c23c(PTR_PTR_11270bb98);
  func_0x00010b89c264(auStack_20);
  return;
}



/* Entry: 10b89beb0; end: 10b89bebf; +[SCCAdWebBrowserUrlInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89beb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_110d6bd30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bec0; end: 10b89bedf; -[SCCAdWebBrowserViewModel init] */

void FUN_10b89bec0(void)

{
  FUN_10b89c204(PTR_PTR_11270bba0);
  return;
}



/* Entry: 10b89bee0; end: 10b89bef3; +[SCCAdWebBrowserViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b89bee0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6bd90;
  param_1[1] = &PTR_DAT_110d6be68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bef4; end: 10b89bf13; -[SCCAdWebBrowserViewModelV2 init] */

void FUN_10b89bef4(void)

{
  FUN_10b89c204(PTR_PTR_11270bba8);
  return;
}



/* Entry: 10b89bf14; end: 10b89bf27; +[SCCAdWebBrowserViewModelV2 valdiMarshallableObjectDescriptor] */

void FUN_10b89bf14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6be78;
  param_1[1] = &PTR_DAT_110d6bf38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bf28; end: 10b89bf4f; -[SCCAsmLogEvent initWithEventType:payload:topicType:url:] */

void FUN_10b89bf28(void)

{
  func_0x00010b89c23c(PTR_PTR_11270bbb0);
  func_0x00010b89c254();
  return;
}



/* Entry: 10b89bf50; end: 10b89bf63; +[SCCAsmLogEvent valdiMarshallableObjectDescriptor] */

void FUN_10b89bf50(undefined8 *param_1)

{
  *param_1 = &PTR_s_eventType_110d6bf48;
  param_1[1] = &PTR_DAT_110d6bfc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bf64; end: 10b89bf83; -[SCCAutofillContactInfo init] */

void FUN_10b89bf64(void)

{
  FUN_10b89c204(PTR_PTR_11270bbb8);
  return;
}



/* Entry: 10b89bf84; end: 10b89bf93; +[SCCAutofillContactInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89bf84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_firstName_110d6bfd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bf94; end: 10b89bfc3; -[SCCAutofillCreditCardInfo initWithCardNumber:] */

void FUN_10b89bf94(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b89c23c(PTR_PTR_11270bbc0);
  func_0x00010b89c264(auStack_20);
  return;
}



/* Entry: 10b89bfc4; end: 10b89bfd3; +[SCCAutofillCreditCardInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89bfc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6c0c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89bfd4; end: 10b89bff3; -[SCCAutofillFormInfo init] */

void FUN_10b89bfd4(void)

{
  FUN_10b89c204(PTR_PTR_11270bbc8);
  return;
}



/* Entry: 10b89bff4; end: 10b89c007; +[SCCAutofillFormInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89bff4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6c138;
  param_1[1] = &PTR_DAT_110d6c198;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89c008; end: 10b89c02f; -[SCCAutofillInfo initWithFields:formId:focusedField:canClearForm:] */

void FUN_10b89c008(void)

{
  func_0x00010b89c23c(PTR_PTR_11270bbd0);
  func_0x00010b89c254();
  return;
}



/* Entry: 10b89c030; end: 10b89c03f; +[SCCAutofillInfo valdiMarshallableObjectDescriptor] */

void FUN_10b89c030(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6c1b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89c040; end: 10b89c05f; -[SCCAutofillKeyboardAccessoryContext init] */

void FUN_10b89c040(void)

{
  FUN_10b89c204(PTR_PTR_11270bbd8);
  return;
}



/* Entry: 10b89c060; end: 10b89c073; +[SCCAutofillKeyboardAccessoryContext valdiMarshallableObjectDescriptor] */

void FUN_10b89c060(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6c228;
  param_1[1] = &PTR_s_SCBridgeObservable_110d6c300;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89c074; end: 10b89c093; -[SCCAutofillKeyboardAccessoryViewModel init] */

void FUN_10b89c074(void)

{
  FUN_10b89c204(PTR_PTR_11270bbe0);
  return;
}



/* Entry: 10b89c094; end: 10b89c0a3; +[SCCAutofillKeyboardAccessoryViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b89c094(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5f49f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89c0a4; end: 10b89c0c3; -[SCCAutofillUserInfoMsg init] */

void FUN_10b89c0a4(void)

{
  FUN_10b89c204(PTR_PTR_11270bbe8);
  return;
}


