/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afa3e6c; end: 10afa3ef3;  */

void FUN_10afa3e6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df250;
  func_0x00010bfbc0e0(PTR_PTR_1126df250,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar2);
  func_0x00010afa3f3c();
  func_0x00010afa3f4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10afa3ef4; end: 10afa3f17; +[SCComposerVenueFavoritesManagerFactory valdiMarshallableObjectDescriptor] */

void FUN_10afa3ef4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6c18;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110ca6c48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa3f18; end: 10afa3f5b; +[SCVenueFavoritesActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10afa3f18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6c60;
  param_1[1] = &PTR_DAT_110ca6ca8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa3f5c; end: 10afa3f67; +[SCComposerDpaEntryPointView componentPath] */

undefined ** FUN_10afa3f5c(void)

{
  return &PTR____CFConstantStringClassReference_110f40b58;
}



/* Entry: 10afa3f68; end: 10afa3f8b; -[SCComposerDpaEntryPointView initWithViewModel:componentContext:runtime:] */

void FUN_10afa3f68(void)

{
  FUN_10afa40ac(PTR_PTR_1127036a0);
  return;
}



/* Entry: 10afa3f8c; end: 10afa3fc3; -[SCComposerDpaEntryPointView setViewModel:] */

void FUN_10afa3f8c(void)

{
  func_0x00010afa40c8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa40d8();
  func_0x00010afa40c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa3fc4; end: 10afa4003; -[SCComposerDpaEntryPointView viewModel] */

void FUN_10afa3fc4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa40c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa4004; end: 10afa400f; +[SCComposerDpaGridBottomSheetView componentPath] */

undefined ** FUN_10afa4004(void)

{
  return &PTR____CFConstantStringClassReference_110f40b78;
}



/* Entry: 10afa4010; end: 10afa4033; -[SCComposerDpaGridBottomSheetView initWithViewModel:componentContext:runtime:] */

void FUN_10afa4010(void)

{
  FUN_10afa40ac(PTR_PTR_1127036a8);
  return;
}



/* Entry: 10afa4034; end: 10afa406b; -[SCComposerDpaGridBottomSheetView setViewModel:] */

void FUN_10afa4034(void)

{
  func_0x00010afa40c8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa40d8();
  func_0x00010afa40c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa406c; end: 10afa40ab; -[SCComposerDpaGridBottomSheetView viewModel] */

void FUN_10afa406c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa40c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa40ac; end: 10afa40e3;  */

void FUN_10afa40ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afa40e4; end: 10afa410f; +[SCCSnapDocSaveServiceNativeSnapDocSaveService valdiMarshallableObjectDescriptor] */

void FUN_10afa40e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6d38;
  param_1[1] = &PTR_DAT_110ca6e28;
  param_1[2] = &PTR_DAT_110ca6cc0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa4110; end: 10afa412f;  */

undefined8 FUN_10afa4110(void)

{
  code *extraout_x8;
  
  func_0x00010afa43fc();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10afa4130; end: 10afa417f;  */

void FUN_10afa4130(void)

{
  func_0x00010afa43ec();
  func_0x00010afa43d4();
  func_0x00010afa43ac(FUN_10afa42e8);
  func_0x00010afa43f4();
  func_0x00010afa43c8();
  func_0x00010afa43e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4180; end: 10afa41a3;  */

undefined8 FUN_10afa4180(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10afa41a4; end: 10afa41f3;  */

void FUN_10afa41a4(void)

{
  func_0x00010afa43ec();
  func_0x00010afa43d4();
  func_0x00010afa43ac(0x10afa431c);
  func_0x00010afa43f4();
  func_0x00010afa43c8();
  func_0x00010afa43e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa41f4; end: 10afa4217;  */

undefined8 FUN_10afa41f4(void)

{
  code *extraout_x8;
  
  func_0x00010afa43fc();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10afa4218; end: 10afa4267;  */

void FUN_10afa4218(void)

{
  func_0x00010afa43ec();
  func_0x00010afa43d4();
  func_0x00010afa43ac(0x10afa4348);
  func_0x00010afa43f4();
  func_0x00010afa43c8();
  func_0x00010afa43e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4268; end: 10afa4297;  */

undefined8 FUN_10afa4268(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
  return 0;
}



/* Entry: 10afa4298; end: 10afa42e7;  */

void FUN_10afa4298(void)

{
  func_0x00010afa43ec();
  func_0x00010afa43d4();
  func_0x00010afa43ac(0x10afa437c);
  func_0x00010afa43f4();
  func_0x00010afa43c8();
  func_0x00010afa43e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa42e8; end: 10afa43ab;  */

void FUN_10afa42e8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afa43ac; end: 10afa441b;  */

void FUN_10afa43ac(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10afa441c; end: 10afa441f; +[SCCSnapdocUtilHardTrimMediasInSnapDoc modulePath] */

undefined ** FUN_10afa441c(void)

{
  return &PTR____CFConstantStringClassReference_110e98658;
}



/* Entry: 10afa4420; end: 10afa4427; +[SCCSnapdocUtilHardTrimMediasInSnapDoc asyncStrictMode] */

undefined8 FUN_10afa4420(void)

{
  return 0;
}



/* Entry: 10afa4428; end: 10afa449b; -[SCCSnapdocUtilHardTrimMediasInSnapDoc hardTrimMediasInSnapDocWithNativeSnapDoc:hardTrim:] */

void FUN_10afa4428(long param_1)

{
  func_0x00010afa48c0();
  func_0x00010afa487c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa486c();
  func_0x00010afa4884();
  func_0x00010afa4874();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa449c; end: 10afa45ef; +[SCCSnapdocUtilHardTrimMediasInSnapDoc invokeWithJSRuntimeProvider:nativeSnapDoc:hardTrim:completionHandler:] */

void FUN_10afa449c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  
  func_0x00010afa48c0();
  func_0x00010afa487c();
  func_0x00010afa48b8();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10afa4570;
  puStack_58 = &UNK_1108451b8;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  func_0x00010afa48b8();
  func_0x00010afa487c();
  func_0x00010afa48a4();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x00010afa489c();
  _objc_release(lStack_50);
  func_0x00010afa4874();
  func_0x00010afa4884();
  func_0x00010afa486c();
  _objc_release(param_3);
  return;
}



/* Entry: 10afa45f0; end: 10afa4623; +[SCCSnapdocUtilHardTrimMediasInSnapDoc valdiMarshallableObjectDescriptor] */

void FUN_10afa45f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6eb8;
  param_1[1] = &PTR_DAT_110ca6ee8;
  param_1[2] = &PTR_DAT_110ca6e88;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa4624; end: 10afa4697;  */

void FUN_10afa4624(undefined8 param_1)

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
  pcStack_38 = FUN_10afa4840;
  puStack_30 = &UNK_110c9e9f0;
  uStack_28 = param_1;
  func_0x00010afa48a4();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  func_0x00010afa489c();
  func_0x00010afa486c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10afa4698; end: 10afa469b; +[SCCSnapdocUtilHasSoftTrim modulePath] */

undefined ** FUN_10afa4698(void)

{
  return &PTR____CFConstantStringClassReference_110e98658;
}



/* Entry: 10afa469c; end: 10afa46a3; +[SCCSnapdocUtilHasSoftTrim asyncStrictMode] */

undefined8 FUN_10afa469c(void)

{
  return 0;
}



/* Entry: 10afa46a4; end: 10afa4703; -[SCCSnapdocUtilHasSoftTrim hasSoftTrimWithNativeSnapDoc:] */

long FUN_10afa46a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  FUN_10afa486c();
  func_0x00010afa4884();
  return param_1;
}



/* Entry: 10afa4704; end: 10afa4823; +[SCCSnapdocUtilHasSoftTrim invokeWithJSRuntimeProvider:nativeSnapDoc:completionHandler:] */

void FUN_10afa4704(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010afa48c0();
  func_0x00010afa487c();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10afa47b8;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x00010afa487c();
  func_0x00010afa48a4();
  func_0x00010afa48b8();
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x00010afa489c();
  func_0x00010afa4884();
  func_0x00010afa486c();
  func_0x00010afa4874();
  return;
}



/* Entry: 10afa4824; end: 10afa483f; +[SCCSnapdocUtilHasSoftTrim valdiMarshallableObjectDescriptor] */

void FUN_10afa4824(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6f00;
  param_1[1] = &PTR_DAT_110ca6f30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa4840; end: 10afa486b;  */

void FUN_10afa4840(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afa486c; end: 10afa48df;  */

void FUN_10afa486c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa48e0; end: 10afa492b; +[SCCSnapEditorApiISnapDocNativeUtils valdiMarshallableObjectDescriptor] */

void FUN_10afa48e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6fa0;
  param_1[1] = &PTR_DAT_110ca7000;
  param_1[2] = &PTR_DAT_110ca6f40;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa492c; end: 10afa497b;  */

void FUN_10afa492c(void)

{
  func_0x00010afa4d94();
  func_0x00010afa4d70();
  func_0x00010afa4d48(FUN_10afa4c1c);
  func_0x00010afa4d9c();
  func_0x00010afa4d64();
  func_0x00010afa4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa497c; end: 10afa499f;  */

void FUN_10afa497c(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010afa499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_2[4],param_2[5],param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],*param_2,
             param_2[1],param_2[2],param_2[3]);
  return;
}



/* Entry: 10afa49a0; end: 10afa49ef;  */

void FUN_10afa49a0(void)

{
  func_0x00010afa4d94();
  func_0x00010afa4d70();
  func_0x00010afa4d48(0x10afa4c58);
  func_0x00010afa4d9c();
  func_0x00010afa4d64();
  func_0x00010afa4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa49f0; end: 10afa4a1b;  */

undefined8 FUN_10afa49f0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3]);
  return 0;
}



/* Entry: 10afa4a1c; end: 10afa4a6b;  */

void FUN_10afa4a1c(void)

{
  func_0x00010afa4d94();
  func_0x00010afa4d70();
  func_0x00010afa4d48(0x10afa4c94);
  func_0x00010afa4d9c();
  func_0x00010afa4d64();
  func_0x00010afa4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4a6c; end: 10afa4aa7; +[SCCSnapEditorApiISnapEditorSnapDocMediaManager valdiMarshallableObjectDescriptor] */

void FUN_10afa4a6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7068;
  param_1[1] = &PTR_DAT_110ca70c8;
  param_1[2] = &PTR_DAT_110ca7038;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa4aa8; end: 10afa4af7;  */

void FUN_10afa4aa8(void)

{
  func_0x00010afa4d94();
  func_0x00010afa4d70();
  func_0x00010afa4d48(0x10afa4cc4);
  func_0x00010afa4d9c();
  func_0x00010afa4d64();
  func_0x00010afa4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4af8; end: 10afa4b13; +[SCCSnapEditorApiISnapEditorSnapRecoveryService valdiMarshallableObjectDescriptor] */

void FUN_10afa4af8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7120;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110ca70d8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa4b14; end: 10afa4b3b;  */

undefined8 FUN_10afa4b14(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1]);
  return 0;
}



/* Entry: 10afa4b3c; end: 10afa4b8b;  */

void FUN_10afa4b3c(void)

{
  func_0x00010afa4d94();
  func_0x00010afa4d70();
  func_0x00010afa4d48(0x10afa4cf0);
  func_0x00010afa4d9c();
  func_0x00010afa4d64();
  func_0x00010afa4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4b8c; end: 10afa4bb7;  */

undefined8 FUN_10afa4b8c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10afa4bb8; end: 10afa4c07;  */

void FUN_10afa4bb8(void)

{
  func_0x00010afa4d94();
  func_0x00010afa4d70();
  func_0x00010afa4d48(0x10afa4d1c);
  func_0x00010afa4d9c();
  func_0x00010afa4d64();
  func_0x00010afa4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4c08; end: 10afa4c1b; +[SCCSnapEditorApiThumbnailResult valdiMarshallableObjectDescriptor] */

void FUN_10afa4c08(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca7198;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa4c1c; end: 10afa4d47;  */

void FUN_10afa4c1c(void)

{
  func_0x00010afa4dac();
  return;
}



/* Entry: 10afa4d48; end: 10afa4db3;  */

void FUN_10afa4d48(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10afa4db4; end: 10afa4dbf; +[SCCPreviewToolbarPreviewToolbar componentPath] */

undefined ** FUN_10afa4db4(void)

{
  return &PTR____CFConstantStringClassReference_110f40b98;
}



/* Entry: 10afa4dc0; end: 10afa4ddf; -[SCCPreviewToolbarPreviewToolbar initWithViewModel:componentContext:runtime:] */

void FUN_10afa4dc0(void)

{
  FUN_10afa4f7c(PTR_PTR_1127036b0);
  return;
}



/* Entry: 10afa4de0; end: 10afa4e13; -[SCCPreviewToolbarPreviewToolbar setViewModel:] */

void FUN_10afa4de0(void)

{
  func_0x00010afa4f90();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa4fa0();
  func_0x00010afa4fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa4e14; end: 10afa4e4b; -[SCCPreviewToolbarPreviewToolbar viewModel] */

void FUN_10afa4e14(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa4fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4e4c; end: 10afa4e57; +[SCCPreviewToolbarSoundTool componentPath] */

undefined ** FUN_10afa4e4c(void)

{
  return &PTR____CFConstantStringClassReference_110f40bb8;
}



/* Entry: 10afa4e58; end: 10afa4e77; -[SCCPreviewToolbarSoundTool initWithViewModel:componentContext:runtime:] */

void FUN_10afa4e58(void)

{
  FUN_10afa4f7c(PTR_PTR_1127036b8);
  return;
}



/* Entry: 10afa4e78; end: 10afa4eab; -[SCCPreviewToolbarSoundTool setViewModel:] */

void FUN_10afa4e78(void)

{
  func_0x00010afa4f90();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa4fa0();
  func_0x00010afa4fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa4eac; end: 10afa4ee3; -[SCCPreviewToolbarSoundTool viewModel] */

void FUN_10afa4eac(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa4fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4ee4; end: 10afa4eef; +[SCCPreviewToolbarVerticalToolbarV2 componentPath] */

undefined ** FUN_10afa4ee4(void)

{
  return &PTR____CFConstantStringClassReference_110f40bd8;
}



/* Entry: 10afa4ef0; end: 10afa4f0f; -[SCCPreviewToolbarVerticalToolbarV2 initWithViewModel:componentContext:runtime:] */

void FUN_10afa4ef0(void)

{
  FUN_10afa4f7c(PTR_PTR_1127036c0);
  return;
}



/* Entry: 10afa4f10; end: 10afa4f43; -[SCCPreviewToolbarVerticalToolbarV2 setViewModel:] */

void FUN_10afa4f10(void)

{
  func_0x00010afa4f90();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa4fa0();
  func_0x00010afa4fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa4f44; end: 10afa4f7b; -[SCCPreviewToolbarVerticalToolbarV2 viewModel] */

void FUN_10afa4f44(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa4fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa4f7c; end: 10afa4fd7;  */

void FUN_10afa4f7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afa4fd8; end: 10afa4fe3; +[SCCPlusCommonOpenSystemSubscriptionManagement modulePath] */

undefined ** FUN_10afa4fd8(void)

{
  return &PTR____CFConstantStringClassReference_110f40bf8;
}



/* Entry: 10afa4fe4; end: 10afa4feb; +[SCCPlusCommonOpenSystemSubscriptionManagement asyncStrictMode] */

undefined8 FUN_10afa4fe4(void)

{
  return 0;
}



/* Entry: 10afa4fec; end: 10afa504b; -[SCCPlusCommonOpenSystemSubscriptionManagement openSystemSubscriptionManagementWithContext:] */

void FUN_10afa4fec(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x00010afa56e4();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa56cc();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10afa504c; end: 10afa51af; +[SCCPlusCommonOpenSystemSubscriptionManagement invokeWithJSRuntimeProvider:context:completionHandler:] */

void FUN_10afa504c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  func_0x00010afa56bc();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10afa5124;
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
  func_0x00010afa56cc();
  _objc_release(param_3);
  return;
}



/* Entry: 10afa51b0; end: 10afa51d3; +[SCCPlusCommonOpenSystemSubscriptionManagement valdiMarshallableObjectDescriptor] */

void FUN_10afa51b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7258;
  param_1[1] = &PTR_DAT_110ca7288;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa51d4; end: 10afa51e7; +[SCCPlusCommonBillboardStringsService valdiMarshallableObjectDescriptor] */

void FUN_10afa51d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7298;
  param_1[1] = &PTR_DAT_110ca72e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa51e8; end: 10afa51fb; +[SCCPlusCommonCustomChatColorHandler valdiMarshallableObjectDescriptor] */

void FUN_10afa51e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca72f0;
  param_1[1] = &PTR_DAT_110ca7338;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa51fc; end: 10afa520f; +[SCCPlusCommonCustomNotificationSound valdiMarshallableObjectDescriptor] */

void FUN_10afa51fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_id_110ca7348;
  param_1[1] = &PTR_DAT_110ca73c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa5210; end: 10afa5223; +[SCCPlusCommonCustomNotificationSoundProvider valdiMarshallableObjectDescriptor] */

void FUN_10afa5210(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca73d8;
  param_1[1] = &PTR_DAT_110ca7438;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa5224; end: 10afa5247; +[SCCPlusCommonCustomNotificationSoundsService valdiMarshallableObjectDescriptor] */

void FUN_10afa5224(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca74b0;
  param_1[1] = &PTR_DAT_110ca7558;
  param_1[2] = &PTR_DAT_110ca7450;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa5248; end: 10afa5273;  */

undefined8 FUN_10afa5248(void)

{
  code *extraout_x8;
  
  func_0x00010afa56fc();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10afa5274; end: 10afa52c3;  */

void FUN_10afa5274(void)

{
  func_0x00010afa56dc();
  func_0x00010afa56bc();
  func_0x00010afa5694(FUN_10afa55ac);
  func_0x00010afa56d4();
  func_0x00010afa56b0();
  func_0x00010afa56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa52c4; end: 10afa52e7;  */

undefined8 FUN_10afa52c4(void)

{
  code *extraout_x8;
  
  func_0x00010afa56fc();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10afa52e8; end: 10afa5337;  */

void FUN_10afa52e8(void)

{
  func_0x00010afa56dc();
  func_0x00010afa56bc();
  func_0x00010afa5694(0x10afa55e8);
  func_0x00010afa56d4();
  func_0x00010afa56b0();
  func_0x00010afa56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa5338; end: 10afa5363;  */

undefined8 FUN_10afa5338(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3]);
  return 0;
}



/* Entry: 10afa5364; end: 10afa53b3;  */

void FUN_10afa5364(void)

{
  func_0x00010afa56dc();
  func_0x00010afa56bc();
  func_0x00010afa5694(0x10afa5618);
  func_0x00010afa56d4();
  func_0x00010afa56b0();
  func_0x00010afa56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa53b4; end: 10afa53c7; +[SCCPlusCommonInAppBrowserPresenter valdiMarshallableObjectDescriptor] */

void FUN_10afa53b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca7580;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa53c8; end: 10afa53db; +[SCCPlusCommonSystemShareSheetPresenter valdiMarshallableObjectDescriptor] */

void FUN_10afa53c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca75c8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa53dc; end: 10afa5437;  */

undefined8 FUN_10afa53dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df270;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010afa56cc();
  return param_1;
}



/* Entry: 10afa5438; end: 10afa545b; +[SCCPlusLocalSubscriptionStore valdiMarshallableObjectDescriptor] */

void FUN_10afa5438(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7658;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca76e8;
  param_1[2] = &PTR_DAT_110ca7610;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa545c; end: 10afa5487;  */

undefined8 FUN_10afa545c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,param_2[2]);
  return 0;
}



/* Entry: 10afa5488; end: 10afa54d7;  */

void FUN_10afa5488(void)

{
  func_0x00010afa56dc();
  func_0x00010afa56bc();
  func_0x00010afa5694(0x10afa5648);
  func_0x00010afa56d4();
  func_0x00010afa56b0();
  func_0x00010afa56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa54d8; end: 10afa54eb; +[SCCPlusStorefrontProvider valdiMarshallableObjectDescriptor] */

void FUN_10afa54d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7710;
  param_1[1] = &PTR_DAT_110ca7740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa54ec; end: 10afa54f7; +[SCCPlusCommonStoryExpirationPicker componentPath] */

undefined ** FUN_10afa54ec(void)

{
  return &PTR____CFConstantStringClassReference_110f40c18;
}



/* Entry: 10afa54f8; end: 10afa552b; -[SCCPlusCommonStoryExpirationPicker initWithViewModel:componentContext:runtime:] */

void FUN_10afa54f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127036c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afa552c; end: 10afa556b; -[SCCPlusCommonStoryExpirationPicker setViewModel:] */

void FUN_10afa552c(void)

{
  undefined8 unaff_x20;
  
  func_0x00010afa56e4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x00010afa56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10afa556c; end: 10afa55ab; -[SCCPlusCommonStoryExpirationPicker viewModel] */

void FUN_10afa556c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa55ac; end: 10afa5673;  */

void FUN_10afa55ac(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afa5674; end: 10afa570f;  */

void FUN_10afa5674(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa5710; end: 10afa5747; +[SCVComplianceEngineService valdiMarshallableObjectDescriptor] */

void FUN_10afa5710(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca77c8;
  param_1[1] = &PTR_DAT_110ca7828;
  param_1[2] = &PTR_DAT_110ca7780;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa5748; end: 10afa57a7;  */

void FUN_10afa5748(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010afa5904(FUN_10afa58ac);
  _objc_retainBlock(&puStack_48);
  func_0x00010afa5924();
  func_0x00010afa593c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa57a8; end: 10afa57bf;  */

void FUN_10afa57a8(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010afa57bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[2],param_2[3],*param_2,param_2[1],param_2[4]);
  return;
}



/* Entry: 10afa57c0; end: 10afa581f;  */

void FUN_10afa57c0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010afa5904(0x10afa58d0);
  _objc_retainBlock(&puStack_48);
  func_0x00010afa5924();
  func_0x00010afa593c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa5820; end: 10afa587b;  */

undefined8 FUN_10afa5820(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df278;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010afa593c();
  return param_1;
}



/* Entry: 10afa587c; end: 10afa5897; +[SCVComplianceFlagListener valdiMarshallableObjectDescriptor] */

void FUN_10afa587c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca7848;
  param_1[1] = &PTR_DAT_110ca7878;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


