/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af6db10; end: 10af6db3f; -[SCRTUSEvent setProtoPayload:] */

void FUN_10af6db10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6db40; end: 10af6db47; -[SCRTUSEvent payloadId] */

undefined8 FUN_10af6db40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af6db48; end: 10af6db4f; -[SCRTUSEvent setPayloadId:] */

void FUN_10af6db48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10af6db50; end: 10af6db57; -[SCRTUSEvent clientTs] */

undefined8 FUN_10af6db50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af6db58; end: 10af6db87; -[SCRTUSEvent setClientTs:] */

void FUN_10af6db58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af6db88; end: 10af6dbcf; -[SCRTUSEvent .cxx_destruct] */

void FUN_10af6db88(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6dbd0; end: 10af6dbe7; -[SCRTUSServices .cxx_destruct] */

void FUN_10af6dbd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6dbe8; end: 10af6dc4f; +[RTUSFilteringParenExp descriptor] */

void FUN_10af6dbe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a6e0,
                        &PTR____CFConstantStringClassReference_110f3dbd8,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e388,1,0x10,0x1c);
    puRam00000001137f0de8 = puVar1;
  }
  return;
}



/* Entry: 10af6dc50; end: 10af6dcb7; +[RTUSFilteringNotExpression descriptor] */

void FUN_10af6dc50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a7d0,
                        &PTR____CFConstantStringClassReference_110f3dc38,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e3a8,1,0x10,0x1c);
    puRam00000001137f0e00 = puVar1;
  }
  return;
}



/* Entry: 10af6dcb8; end: 10af6dd43; +[RTUSFilteringNumberEqualityComparison descriptor] */

undefined * FUN_10af6dcb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a820,
                        &PTR____CFConstantStringClassReference_110f3dc58,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e5c8,4,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f0e08 = puVar1;
  }
  return puRam00000001137f0e08;
}



/* Entry: 10af6dd44; end: 10af6ddab; +[RTUSFilteringBooleanComparison descriptor] */

void FUN_10af6dd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a910,
                        &PTR____CFConstantStringClassReference_110f3dcb8,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e468,2,0x10,0x1c);
    puRam00000001137f0e20 = puVar1;
  }
  return;
}



/* Entry: 10af6ddac; end: 10af6ddef; -[SCLazyCircumstanceEngineProxy appStartExperimentReader] */

void FUN_10af6ddac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6ddf0; end: 10af6df0b; -[SCLazyCircumstanceEngineProxy intValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6ddf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10af6df0c;
    puStack_58 = &UNK_110890350;
    _objc_retain(param_7);
    uStack_48 = (undefined4)param_4;
    uStack_50 = param_7;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
    _objc_release(param_6);
    param_6 = uStack_50;
  }
  else {
    func_0x00010c067ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6df0c; end: 10af6df1f;  */

void FUN_10af6df0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 10af6df20; end: 10af6e037; -[SCLazyCircumstanceEngineProxy longValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6df20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10af6e038;
    puStack_58 = &UNK_110860cf8;
    _objc_retain(param_7);
    uStack_50 = param_7;
    uStack_48 = param_4;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
    _objc_release(param_6);
    param_6 = uStack_50;
  }
  else {
    func_0x00010c0b5000(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6e038; end: 10af6e047;  */

void FUN_10af6e038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10af6e048; end: 10af6e16b; -[SCLazyCircumstanceEngineProxy floatValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6e048(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10af6e16c;
    puStack_68 = &UNK_110890350;
    _objc_retain(param_7);
    uStack_58 = (undefined4)param_1;
    uStack_60 = param_7;
    func_0x00010c0f7fc0(param_6,param_3,&puStack_80);
    _objc_release(param_6);
    param_6 = uStack_60;
  }
  else {
    func_0x00010bfb2ca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10af6e16c; end: 10af6e17f;  */

void FUN_10af6e16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(undefined4 *)(param_1 + 0x28),*(long *)(param_1 + 0x20));
  return;
}



/* Entry: 10af6e180; end: 10af6e29b; -[SCLazyCircumstanceEngineProxy boolValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6e180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10af6e29c;
    puStack_58 = &UNK_11084a9b8;
    _objc_retain(param_7);
    uStack_48 = (undefined1)param_4;
    uStack_50 = param_7;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
    _objc_release(param_6);
    param_6 = uStack_50;
  }
  else {
    func_0x00010bf1f400(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6e29c; end: 10af6e2af;  */

void FUN_10af6e29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10af6e2b0; end: 10af6e3eb; -[SCLazyCircumstanceEngineProxy stringValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6e2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10af6e3ec;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_7);
    uStack_48 = param_7;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
    _objc_release(param_6);
    _objc_release(uStack_50);
    param_6 = uStack_48;
  }
  else {
    func_0x00010c25d760(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6e3ec; end: 10af6e3fb;  */

void FUN_10af6e3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10af6e3fc; end: 10af6e537; -[SCLazyCircumstanceEngineProxy protoValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6e3fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10af6e538;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_7);
    uStack_48 = param_7;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
    _objc_release(param_6);
    _objc_release(uStack_50);
    param_6 = uStack_48;
  }
  else {
    func_0x00010c1195c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6e538; end: 10af6e547;  */

void FUN_10af6e538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10af6e548; end: 10af6e683; -[SCLazyCircumstanceEngineProxy protoMessageForConfigKey:defaultMessage:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6e548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10af6e684;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_7);
    uStack_48 = param_7;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
    _objc_release(param_6);
    _objc_release(uStack_50);
    param_6 = uStack_48;
  }
  else {
    func_0x00010c1193c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6e684; end: 10af6e693;  */

void FUN_10af6e684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10af6e694; end: 10af6e7a3; -[SCLazyCircumstanceEngineProxy manualExposureValueForConfigKey:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_10af6e694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10af6e7a4;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_48 = param_6;
    func_0x00010c0f7fc0(param_5,param_2,&puStack_68);
    _objc_release(param_5);
    param_5 = uStack_48;
  }
  else {
    func_0x00010c0b8480(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af6e7a4; end: 10af6e7b3;  */

void FUN_10af6e7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af6e7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10af6e7b4; end: 10af6e7ff; -[SCLazyCircumstanceEngineProxy getSequenceIdArrayInNamespace:] */

void FUN_10af6e7b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfca0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6e800; end: 10af6e873; -[SCLazyCircumstanceEngineProxy configsTokenWithCompletion:] */

void FUN_10af6e800(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110daafd8);
    }
  }
  else {
    func_0x00010bf46540(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af6e874; end: 10af6e8af; -[SCLazyCircumstanceEngineProxy userInSafeMode] */

undefined8 FUN_10af6e874(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c292800();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10af6e8b0; end: 10af6e933; -[SCLazyCircumstanceEngineProxy longValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10af6e8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be0a080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6e934; end: 10af6e9b7; -[SCLazyCircumstanceEngineProxy manualExposureValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10af6e934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be0a080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6e9b8; end: 10af6ea13; -[SCLazyCircumstanceEngineProxy bulkLoadNamespaceSync:exposeAll:] */

void FUN_10af6e9b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf248e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6ea14; end: 10af6ea5f; -[SCLazyCircumstanceEngineProxy createConfigProviderForNamespace:] */

void FUN_10af6ea14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf55440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6ea60; end: 10af6eaa3; -[SCLazyCircumstanceEngineProxy observeUpdates] */

void FUN_10af6ea60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e1180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6eaa4; end: 10af6eae7; -[SCLazyCircumstanceEngineProxy observeSessionSyncStatus] */

void FUN_10af6eaa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e1060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6eae8; end: 10af6eb2b; -[SCLazyCircumstanceEngineProxy getGrapheneContextBytes] */

void FUN_10af6eae8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6eb2c; end: 10af6ebb7; -[SCLazyCircumstanceEngineProxy intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_10af6eb2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c067f00(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10af6ebb8; end: 10af6ec43; -[SCLazyCircumstanceEngineProxy longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_10af6ebb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0b5020(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10af6ec44; end: 10af6ecd7; -[SCLazyCircumstanceEngineProxy floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_10af6ec44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010bfb2cc0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10af6ecd8; end: 10af6ed63; -[SCLazyCircumstanceEngineProxy boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_10af6ecd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10af6ed64; end: 10af6ee1f; -[SCLazyCircumstanceEngineProxy stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10af6ed64(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25d780(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10af6ee20; end: 10af6eedb; -[SCLazyCircumstanceEngineProxy stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10af6ee20(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25cd80(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10af6eedc; end: 10af6ef27; -[SCLazyCircumstanceEngineProxy createConfigProviderMarshallerForNamespace:] */

void FUN_10af6eedc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0a080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf55460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6ef28; end: 10af6ef33; -[SCLazyCircumstanceEngineProxy .cxx_destruct] */

void FUN_10af6ef28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6ef34; end: 10af6ef3b; -[SCCircumstanceEngineConfiguration systemType] */

undefined8 FUN_10af6ef34(void)

{
  return 0xc;
}



/* Entry: 10af6ef3c; end: 10af6ef5f; -[SCCircumstanceEngineConfiguration getConfigurationState] */

void FUN_10af6ef3c(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af6ef60; end: 10af6ef67; -[SCCircumstanceEngineConfiguration getGrapheneContextBytes] */

void FUN_10af6ef60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getGrapheneContextBytes_1125cf1e8);
  return;
}



/* Entry: 10af6ef68; end: 10af6efa3; -[SCCircumstanceEngineConfiguration .cxx_destruct] */

void FUN_10af6ef68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6efa4; end: 10af6f02b; +[SCTweakConfiguration sharedInstance] */

void FUN_10af6efa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10af6f02c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f0e50 != -1) {
    func_0x000107c27d9c(0x1137f0e50,&puStack_48);
  }
  uVar1 = uRam00000001137f0e58;
  _objc_retain(uRam00000001137f0e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6f02c; end: 10af6f053;  */

void FUN_10af6f02c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137f0e58;
  uRam00000001137f0e58 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6f054; end: 10af6f05b; -[SCTweakConfiguration systemType] */

undefined8 FUN_10af6f054(void)

{
  return 7;
}



/* Entry: 10af6f05c; end: 10af6f07f; -[SCTweakConfiguration getConfigurationState] */

void FUN_10af6f05c(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af6f080; end: 10af6f083; -[SCTweakConfiguration boolValueForKey:] */

void FUN_10af6f080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tweakValueForKey__11267d040);
  return;
}



/* Entry: 10af6f084; end: 10af6f087; -[SCTweakConfiguration intValueForKey:] */

void FUN_10af6f084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tweakValueForKey__11267d040);
  return;
}



/* Entry: 10af6f088; end: 10af6f08b; -[SCTweakConfiguration floatValueForKey:] */

void FUN_10af6f088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tweakValueForKey__11267d040);
  return;
}



/* Entry: 10af6f08c; end: 10af6f08f; -[SCTweakConfiguration stringValueForKey:] */

void FUN_10af6f08c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tweakValueForKey__11267d040);
  return;
}



/* Entry: 10af6f090; end: 10af6f093; -[SCTweakConfiguration protoValueForKey:] */

void FUN_10af6f090(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tweakValueForKey__11267d040);
  return;
}



/* Entry: 10af6f094; end: 10af6f0cf; -[SCTweakConfiguration tweakValueForKey:] */

undefined8 FUN_10af6f094(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c267420(param_3);
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 10af6f0d0; end: 10af6f0d7; -[SCTweakConfiguration getGrapheneContextBytes] */

undefined8 FUN_10af6f0d0(void)

{
  return 0;
}



/* Entry: 10af6f0d8; end: 10af6f16b; +[SCCircumstanceEngineConfigurationKey ConfigurationKeyWithKey:id:featureProvidedSignals:systemType:] */

void FUN_10af6f0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dec58;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c020b00();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af6f16c; end: 10af6f1ab; -[SCCircumstanceEngineConfigurationKey setFeatureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6f16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127875bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6f1ac; end: 10af6f253; -[SCCompositeConfigurationKey initWithKey:id:configurationKeys:featureProvidedSignalsProto:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10af6f1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112702ec8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithKey_id_systemType_featur_1125e5cb8,param_3,param_4,4,
                      param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127875c0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10af6f254; end: 10af6f32b; -[SCCompositeConfigurationKey hash] */

undefined8 * FUN_10af6f254(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uVar3 = param_1;
  uStack_58 = uVar2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfde980();
  uVar4 = param_1;
  uStack_50 = uVar2;
  func_0x00010bf46860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfde980();
  uStack_48 = uVar2;
  func_0x00010c267420();
  uStack_40 = param_1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar5 = &uStack_58;
  func_0x000107c3191c(puVar5,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
    puVar12 = (undefined8 *)0x1;
  }
  else {
    puVar12 = (undefined8 *)0x0;
    if ((puVar5 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar12 = puVar5;
      _objc_opt_class(puVar5);
      puVar6 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar12);
      if (((ulong)puVar6 & 1) == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar6 = puVar5;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_3;
        func_0x00010c086560(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010c0720c0();
        if ((int)puVar12 == 0) {
          puVar12 = (undefined8 *)0x0;
        }
        else {
          puVar8 = puVar5;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = param_3;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 == puVar9) {
            puVar10 = puVar5;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = param_3;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 == puVar11) {
              func_0x00010c267420(puVar5);
              puVar12 = param_3;
              func_0x00010c267420(param_3);
              puVar12 = (undefined8 *)(ulong)(puVar5 == puVar12);
            }
            else {
              puVar12 = (undefined8 *)0x0;
            }
            _objc_release(puVar11);
            _objc_release(puVar10);
          }
          else {
            puVar12 = (undefined8 *)0x0;
          }
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
    }
  }
  _objc_release(param_3);
  return puVar12;
}



/* Entry: 10af6f32c; end: 10af6f4b7; -[SCCompositeConfigurationKey isEqual:] */

bool FUN_10af6f32c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        uVar2 = param_1;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c086560(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          bVar1 = false;
        }
        else {
          uVar4 = param_1;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 == uVar5) {
            uVar6 = param_1;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_3;
            func_0x00010bf46860();
            _objc_retainAutoreleasedReturnValue();
            if (uVar6 == uVar7) {
              func_0x00010c267420(param_1);
              uVar8 = param_3;
              func_0x00010c267420(param_3);
              bVar1 = param_1 == uVar8;
            }
            else {
              bVar1 = false;
            }
            _objc_release(uVar7);
            _objc_release(uVar6);
          }
          else {
            bVar1 = false;
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af6f4b8; end: 10af6f55b; +[SCCompositeConfigurationKey ConfigurationKeyWithKey:id:configurationKeys:featureProvidedSignalsProto:] */

void FUN_10af6f4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dec60;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c020ae0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af6f55c; end: 10af6f56b; -[SCCompositeConfigurationKey configurationKeys] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10af6f55c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127875c0);
}



/* Entry: 10af6f56c; end: 10af6f5ab; -[SCCompositeConfigurationKey setConfigurationKeys:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6f56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127875c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6f5ac; end: 10af6f5bf; -[SCCompositeConfigurationKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6f5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127875c0,0);
  return;
}



/* Entry: 10af6f5c0; end: 10af6f71b; -[SCTweakConfigurationKey initWithCategory:collection:name:id:featureProvidedSignalsProto:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10af6f5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_112702ed0;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithKey_id_systemType_featur_1125e5cb8,puVar1,param_6,7,
                      param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127875c4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127875c8;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127875cc;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10af6f71c; end: 10af6f86f; -[SCTweakConfigurationKey initWithKey:id:featureProvidedSignalsProto:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10af6f71c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112702ed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithKey_id_systemType_featur_1125e5cb8,param_3,param_4,7,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 3) {
      _objc_release(lVar2);
      puVar5 = (undefined1 *)0x0;
      goto LAB_10af6f848;
    }
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127875c4);
    *(long *)((long)puVar1 + (long)_DAT_1127875c4) = lVar3;
    _objc_release(uVar4);
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127875c8);
    *(long *)((long)puVar1 + (long)_DAT_1127875c8) = lVar3;
    _objc_release(uVar4);
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127875cc);
    *(long *)((long)puVar1 + (long)_DAT_1127875cc) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_10af6f848:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 10af6f870; end: 10af6f92b; +[SCTweakConfigurationKey ConfigurationKeyWithCategory:collection:name:id:featureProvidedSignalsProto:] */

void FUN_10af6f870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dec68;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffcf60();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af6f92c; end: 10af6f9ff; +[SCTweakConfigurationKey ConfigurationKeyFromKey:] */

void FUN_10af6f92c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c267420();
  if (lVar1 == 7) {
    puVar4 = PTR_PTR_1126dec68;
    _objc_alloc(PTR_PTR_1126dec68);
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfe5d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfa2a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b20(puVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10af6fa00; end: 10af6fab3; -[SCTweakConfigurationKey hash] */

undefined8 * FUN_10af6fa00(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = &uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uVar3 = param_1;
  uStack_50 = uVar2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfde980();
  uStack_48 = uVar2;
  func_0x00010c267420();
  uStack_40 = param_1;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x000107c3191c(&uStack_50,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar4 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar9 = (undefined1 *)puVar4;
      _objc_opt_class(puVar4);
      puVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar9);
      if (((ulong)puVar5 & 1) == 0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)puVar4;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_3;
        func_0x00010c086560(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c0720c0();
        if ((int)puVar9 == 0) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar7 = (undefined1 *)puVar4;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = param_3;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == puVar8) {
            func_0x00010c267420(puVar4);
            puVar9 = param_3;
            func_0x00010c267420(param_3);
            puVar9 = (undefined1 *)(ulong)(puVar4 == (undefined8 *)puVar9);
          }
          else {
            puVar9 = (undefined1 *)0x0;
          }
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10af6fab4; end: 10af6fbef; -[SCTweakConfigurationKey isEqual:] */

bool FUN_10af6fab4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        uVar2 = param_1;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c086560(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          bVar1 = false;
        }
        else {
          uVar4 = param_1;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 == uVar5) {
            func_0x00010c267420(param_1);
            uVar6 = param_3;
            func_0x00010c267420(param_3);
            bVar1 = param_1 == uVar6;
          }
          else {
            bVar1 = false;
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af6fbf0; end: 10af6fbff; -[SCTweakConfigurationKey category] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10af6fbf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127875c4);
}



/* Entry: 10af6fc00; end: 10af6fc3f; -[SCTweakConfigurationKey setCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6fc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127875c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6fc40; end: 10af6fc4f; -[SCTweakConfigurationKey collection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10af6fc40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127875c8);
}



/* Entry: 10af6fc50; end: 10af6fc8f; -[SCTweakConfigurationKey setCollection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6fc50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127875c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6fc90; end: 10af6fc9f; -[SCTweakConfigurationKey name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10af6fc90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127875cc);
}



/* Entry: 10af6fca0; end: 10af6fcdf; -[SCTweakConfigurationKey setName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6fca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127875cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6fce0; end: 10af6fd2f; -[SCTweakConfigurationKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6fce0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127875cc,0);
  _objc_storeStrong(param_1 + _DAT_1127875c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127875c4,0);
  return;
}



/* Entry: 10af6fd30; end: 10af6fd37; -[SCCircumstanceEngineConfigurationMashaller getSystemType] */

undefined8 FUN_10af6fd30(void)

{
  return 0xc;
}



/* Entry: 10af6fd38; end: 10af6fd93; -[SCCircumstanceEngineConfigurationMashaller getConfigurationState] */

void FUN_10af6fd38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba000;
  _objc_alloc(PTR_PTR_1126ba000);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc6100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff5c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af6fd94; end: 10af6fd9f; -[SCCircumstanceEngineConfigurationMashaller .cxx_destruct] */

void FUN_10af6fd94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6fda0; end: 10af6fda7; -[SCCompositeConfigurationMarshaller getSystemType] */

undefined8 FUN_10af6fda0(void)

{
  return 4;
}



/* Entry: 10af6fda8; end: 10af6fdcb; -[SCCompositeConfigurationMarshaller getConfigurationState] */

void FUN_10af6fda8(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af6fdcc; end: 10af6fe27; -[SCCompositeConfigurationMarshaller getRealValue:] */

void FUN_10af6fdcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf46840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb2d00(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af6fe28; end: 10af6fe83; -[SCCompositeConfigurationMarshaller getStringValue:] */

void FUN_10af6fe28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf46840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25d7e0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af6fe84; end: 10af6fedf; -[SCCompositeConfigurationMarshaller getBinaryValue:] */

void FUN_10af6fe84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf46840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c119600(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af6fee0; end: 10af6ff3b; -[SCCompositeConfigurationMarshaller getBooleanValue:] */

void FUN_10af6fee0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf46840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f480(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af6ff3c; end: 10af6ff97; -[SCCompositeConfigurationMarshaller getIntegerValue:] */

void FUN_10af6ff3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf46840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c067f40(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af6ff98; end: 10af700bb; -[SCCompositeConfigurationMarshaller configurationKeyFromKey:] */

void FUN_10af6ff98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c267420();
  if (lVar1 == 4) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3fc0(uVar2,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126dec60;
    _objc_alloc(PTR_PTR_1126dec60);
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfe5d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = param_3;
    func_0x00010bfa2a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020ae0(puVar5,param_2,lVar1,lVar3,uVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10af700bc; end: 10af700f7; -[SCCompositeConfigurationMarshaller .cxx_destruct] */

void FUN_10af700bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af700f8; end: 10af7016b; -[SCTweakConfigurationMarshaller initWithConfiguration:] */

undefined1 * FUN_10af700f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702ee8;
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



/* Entry: 10af7016c; end: 10af70173; -[SCTweakConfigurationMarshaller getSystemType] */

undefined8 FUN_10af7016c(void)

{
  return 7;
}



/* Entry: 10af70174; end: 10af70197; -[SCTweakConfigurationMarshaller getConfigurationState] */

void FUN_10af70174(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af70198; end: 10af701fb; -[SCTweakConfigurationMarshaller getRealValue:] */

void FUN_10af70198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dec68;
  func_0x00010bdc1360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb2d00(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af701fc; end: 10af7025f; -[SCTweakConfigurationMarshaller getStringValue:] */

void FUN_10af701fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dec68;
  func_0x00010bdc1360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25d7e0(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


