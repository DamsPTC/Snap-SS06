/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fa71f8; end: 106fa71ff;  */

void FUN_106fa71f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firmwareFlashUpdate_1125c9c08);
  return;
}



/* Entry: 106fa7200; end: 106fa7223; +[SCSpectaclesRequestMessage firmwareGetScheduledUpdateStatus] */

void FUN_106fa7200(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x13,&PTR___NSConcreteGlobalBlock_1109865d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7224; end: 106fa722b;  */

void FUN_106fa7224(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb09f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firmwareGetScheduledUpdateStatus_1125c9c20);
  return;
}



/* Entry: 106fa722c; end: 106fa7307; +[SCSpectaclesRequestMessage firmwareScheduleUpdate:windowLength:targetVersion:targetDigest:] */

void FUN_106fa722c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_alloc(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106fa7308;
  puStack_68 = &UNK_1109865f8;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c055f40(param_3,param_4,0x14,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106fa7308; end: 106fa7317;  */

void FUN_106fa7308(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,
             PTR_s_firmwareScheduleUpdate_windowLen_1125c9c40,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa7318; end: 106fa73c3; +[SCSpectaclesRequestMessage checkOTAUpdateAvailability:forceBoot:] */

void FUN_106fa7318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106fa73c4;
  puStack_48 = &UNK_110985e68;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x38,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa73c4; end: 106fa73d3;  */

void FUN_106fa73c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf382f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_checkOTAUpdateAvailability_force_1125aba60,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa73d4; end: 106fa746f; +[SCSpectaclesRequestMessage installOTAUpdate:] */

void FUN_106fa73d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106fa7470;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x39,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7470; end: 106fa747b;  */

void FUN_106fa7470(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0678f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_installOTAUpdate__1125f7848,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa747c; end: 106fa74df; +[SCSpectaclesRequestMessage setOTAAutoUpdateEnabled:] */

void FUN_106fa747c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa74e0;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x55,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa74e0; end: 106fa74eb;  */

void FUN_106fa74e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setOTAAutoUpdateEnabled__112651b28,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa74ec; end: 106fa750f; +[SCSpectaclesRequestMessage getOTAAutoUpdateEnabled] */

void FUN_106fa74ec(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x56,&PTR___NSConcreteGlobalBlock_110986628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7510; end: 106fa7517;  */

void FUN_106fa7510(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getOTAAutoUpdateEnabled_1125cfa68);
  return;
}



/* Entry: 106fa7518; end: 106fa753b; +[SCSpectaclesRequestMessage cancelOTAUpdate] */

void FUN_106fa7518(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x59,&PTR___NSConcreteGlobalBlock_110986648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa753c; end: 106fa7543;  */

void FUN_106fa753c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cancelOTAUpdate_1125a93a8);
  return;
}



/* Entry: 106fa7544; end: 106fa7567; +[SCSpectaclesRequestMessage requestCrashReport] */

void FUN_106fa7544(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x15,&PTR___NSConcreteGlobalBlock_110986668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7568; end: 106fa756f;  */

void FUN_106fa7568(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_requestCrashReport_11262ae70);
  return;
}



/* Entry: 106fa7570; end: 106fa7593; +[SCSpectaclesRequestMessage clearCrashReport] */

void FUN_106fa7570(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x16,&PTR___NSConcreteGlobalBlock_110986688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7594; end: 106fa759b;  */

void FUN_106fa7594(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_clearCrashReport_1125ac5d0);
  return;
}



/* Entry: 106fa759c; end: 106fa75bf; +[SCSpectaclesRequestMessage clearAllContent] */

void FUN_106fa759c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x17,&PTR___NSConcreteGlobalBlock_1109866a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa75c0; end: 106fa75c7;  */

void FUN_106fa75c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_clearAllContent_1125ac3a0);
  return;
}



/* Entry: 106fa75c8; end: 106fa75eb; +[SCSpectaclesRequestMessage prepShippingState] */

void FUN_106fa75c8(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x18,&PTR___NSConcreteGlobalBlock_1109866c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa75ec; end: 106fa75f3;  */

void FUN_106fa75ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_prepShippingState_11261fde0);
  return;
}



/* Entry: 106fa75f4; end: 106fa768f; +[SCSpectaclesRequestMessage userAssociationRequest:] */

void FUN_106fa75f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106fa7690;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x1a,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7690; end: 106fa769b;  */

void FUN_106fa7690(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2913b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_userAssociationRequest__112681f10,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa769c; end: 106fa76bf; +[SCSpectaclesRequestMessage pairingTimerKick] */

void FUN_106fa769c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x1b,&PTR___NSConcreteGlobalBlock_1109866e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa76c0; end: 106fa76c7;  */

void FUN_106fa76c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f3530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_pairingTimerKick_11261a760);
  return;
}



/* Entry: 106fa76c8; end: 106fa7763; +[SCSpectaclesRequestMessage validatePairingWithUserId:] */

void FUN_106fa76c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106fa7764;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x1c,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7764; end: 106fa776f;  */

void FUN_106fa7764(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_validatePairingWithUserId__1126834b0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa7770; end: 106fa7837; +[SCSpectaclesRequestMessage exchangeKey:nonce:] */

void FUN_106fa7770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106fa7838;
  puStack_48 = &UNK_110986388;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x1d,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7838; end: 106fa7843;  */

void FUN_106fa7838(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9aa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_exchangeKey_nonce__1125c4448,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa7844; end: 106fa790b; +[SCSpectaclesRequestMessage verifyPeer:tag:] */

void FUN_106fa7844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106fa790c;
  puStack_48 = &UNK_110986388;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x1e,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa790c; end: 106fa7917;  */

void FUN_106fa790c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2989f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_verifyPeer_tag__112683ca0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa7918; end: 106fa7adf; +[SCSpectaclesRequestMessage accessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:] */

void FUN_106fa7918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_alloc(param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106fa7ae0;
  puStack_b0 = &UNK_110986708;
  uStack_70 = param_11;
  uStack_80 = param_9;
  uStack_78 = param_10;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_6;
  uStack_90 = param_7;
  uStack_88 = param_8;
  uStack_68 = param_5;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x2a,&puStack_c8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7ae0; end: 106fa7b1b;  */

void FUN_106fa7ae0(long param_1,undefined8 param_2)

{
  func_0x00010beecd00(param_2,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 106fa7b1c; end: 106fa7bb7; +[SCSpectaclesRequestMessage setPairingSessionId:] */

void FUN_106fa7b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106fa7bb8;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x19,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7bb8; end: 106fa7bc3;  */

void FUN_106fa7bb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPairingSessionId__112653d88,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa7bc4; end: 106fa7be7; +[SCSpectaclesRequestMessage getClientId] */

void FUN_106fa7bc4(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x20,&PTR___NSConcreteGlobalBlock_110986738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7be8; end: 106fa7bef;  */

void FUN_106fa7be8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getClientId_1125ce868);
  return;
}



/* Entry: 106fa7bf0; end: 106fa7cdf; +[SCSpectaclesRequestMessage authzCode:codeVerifier:redirectUri:] */

void FUN_106fa7bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_alloc(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106fa7ce0;
  puStack_50 = &UNK_1109863d8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x1f,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7ce0; end: 106fa7cef;  */

void FUN_106fa7ce0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf111f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_authzCode_codeVerifier_redirectU_1125a1e20,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106fa7cf0; end: 106fa7d13; +[SCSpectaclesRequestMessage getWifiApList] */

void FUN_106fa7cf0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x21,&PTR___NSConcreteGlobalBlock_110986758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7d14; end: 106fa7d1b;  */

void FUN_106fa7d14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcc430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getWifiApList_1125d0ab0);
  return;
}



/* Entry: 106fa7d1c; end: 106fa7db7; +[SCSpectaclesRequestMessage setWifiApList:] */

void FUN_106fa7d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106fa7db8;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x22,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7db8; end: 106fa7dc3;  */

void FUN_106fa7db8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setWifiApList__112667028,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa7dc4; end: 106fa7e8b; +[SCSpectaclesRequestMessage shareWiFiCredentials:password:] */

void FUN_106fa7dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106fa7e8c;
  puStack_48 = &UNK_110986388;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x29,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa7e8c; end: 106fa7e97;  */

void FUN_106fa7e8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_shareWiFiCredentials_password__1126686c8,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa7e98; end: 106fa7ebb; +[SCSpectaclesRequestMessage getLastCloudUploadTime] */

void FUN_106fa7e98(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x23,&PTR___NSConcreteGlobalBlock_110986778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7ebc; end: 106fa7ec3;  */

void FUN_106fa7ebc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getLastCloudUploadTime_1125cf4c8);
  return;
}



/* Entry: 106fa7ec4; end: 106fa7f27; +[SCSpectaclesRequestMessage getWiFiStatusWithForceBoot:] */

void FUN_106fa7ec4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa7f28;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x36,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7f28; end: 106fa7f33;  */

void FUN_106fa7f28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcc3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_getWiFiStatusWithForceBoot__1125d0a90,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa7f34; end: 106fa7f97; +[SCSpectaclesRequestMessage getAvailableWiFiNetworksWithForceBoot:] */

void FUN_106fa7f34(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa7f98;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x37,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa7f98; end: 106fa7fa3;  */

void FUN_106fa7f98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_getAvailableWiFiNetworksWithForc_1125ce4b8,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa7fa4; end: 106fa804b; +[SCSpectaclesRequestMessage exchangeNonce:channelType:] */

void FUN_106fa7fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106fa804c;
  puStack_48 = &UNK_110985f08;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x24,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa804c; end: 106fa8057;  */

void FUN_106fa804c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_exchangeNonce_channelType__1125c4450,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa8058; end: 106fa80f3; +[SCSpectaclesRequestMessage encryptionSetupNonce:] */

void FUN_106fa8058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106fa80f4;
  puStack_30 = &UNK_110985d98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x25,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa80f4; end: 106fa80ff;  */

void FUN_106fa80f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_encryptionSetupNonce__1125c2990,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8100; end: 106fa8123; +[SCSpectaclesRequestMessage unpair] */

void FUN_106fa8100(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x26,&PTR___NSConcreteGlobalBlock_110986798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8124; end: 106fa812b;  */

void FUN_106fa8124(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_unpair_11267e140);
  return;
}



/* Entry: 106fa812c; end: 106fa814f; +[SCSpectaclesRequestMessage postPairingCompletionEvent] */

void FUN_106fa812c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x27,&PTR___NSConcreteGlobalBlock_1109867b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8150; end: 106fa8157;  */

void FUN_106fa8150(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c104a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_postPairingCompletionEvent_11261eca8);
  return;
}



/* Entry: 106fa8158; end: 106fa81bb; +[SCSpectaclesRequestMessage getLocationEnabledWithForceBoot:] */

void FUN_106fa8158(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa81bc;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x3d,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa81bc; end: 106fa81c7;  */

void FUN_106fa81bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_getLocationEnabledWithForceBoot__1125cf640,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa81c8; end: 106fa822b; +[SCSpectaclesRequestMessage setLocationEnabled:] */

void FUN_106fa81c8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa822c;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x28,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa822c; end: 106fa8237;  */

void FUN_106fa822c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bf9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLocationEnabled__11264d890,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8238; end: 106fa829b; +[SCSpectaclesRequestMessage setAudioLevel:] */

void FUN_106fa8238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa829c;
  puStack_30 = &UNK_110986368;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x2b,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa829c; end: 106fa82a7;  */

void FUN_106fa829c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAudioLevel__1126389a0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa82a8; end: 106fa830b; +[SCSpectaclesRequestMessage getAudioLevelWithForceBoot:] */

void FUN_106fa82a8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa830c;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x2d,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa830c; end: 106fa8317;  */

void FUN_106fa830c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_getAudioLevelWithForceBoot__1125ce418,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8318; end: 106fa837b; +[SCSpectaclesRequestMessage setBrightnessLevel:] */

void FUN_106fa8318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa837c;
  puStack_30 = &UNK_110986368;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x2c,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa837c; end: 106fa8387;  */

void FUN_106fa837c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c173c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setBrightnessLevel__11263a940,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8388; end: 106fa83eb; +[SCSpectaclesRequestMessage getBrightnessLevelWithForceBoot:] */

void FUN_106fa8388(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa83ec;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x2e,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa83ec; end: 106fa83f7;  */

void FUN_106fa83ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_getBrightnessLevelWithForceBoot__1125ce628,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa83f8; end: 106fa845b; +[SCSpectaclesRequestMessage setAutoBrightness:] */

void FUN_106fa83f8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa845c;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x48,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa845c; end: 106fa8467;  */

void FUN_106fa845c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAutoBrightness__112638d08,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8468; end: 106fa848b; +[SCSpectaclesRequestMessage getAutoBrightness] */

void FUN_106fa8468(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x49,&PTR___NSConcreteGlobalBlock_1109867d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa848c; end: 106fa8493;  */

void FUN_106fa848c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getAutoBrightness_1125ce448);
  return;
}



/* Entry: 106fa8494; end: 106fa84f7; +[SCSpectaclesRequestMessage muteSystemSound:] */

void FUN_106fa8494(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa84f8;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x5a,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa84f8; end: 106fa8503;  */

void FUN_106fa84f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_muteSystemSound__112612a68,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8504; end: 106fa8527; +[SCSpectaclesRequestMessage getSystemSoundMutedStatus] */

void FUN_106fa8504(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x5b,&PTR___NSConcreteGlobalBlock_1109867f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8528; end: 106fa852f;  */

void FUN_106fa8528(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getSystemSoundMutedStatus_1125d0590);
  return;
}



/* Entry: 106fa8530; end: 106fa8593; +[SCSpectaclesRequestMessage playSound:] */

void FUN_106fa8530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa8594;
  puStack_30 = &UNK_110986368;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x53,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8594; end: 106fa859f;  */

void FUN_106fa8594(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_playSound__11261d438,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa85a0; end: 106fa8603; +[SCSpectaclesRequestMessage setUSBImportState:] */

void FUN_106fa85a0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa8604;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x65,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8604; end: 106fa860f;  */

void FUN_106fa8604(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setUSBImportState__112664660,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa8610; end: 106fa8633; +[SCSpectaclesRequestMessage getUSBImportState] */

void FUN_106fa8610(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x66,&PTR___NSConcreteGlobalBlock_110986818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8634; end: 106fa863b;  */

void FUN_106fa8634(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcb950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getUSBImportState_1125d07f8);
  return;
}



/* Entry: 106fa863c; end: 106fa865f; +[SCSpectaclesRequestMessage getUSBConnectionStatus] */

void FUN_106fa863c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x67,&PTR___NSConcreteGlobalBlock_110986838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8660; end: 106fa8667;  */

void FUN_106fa8660(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcb930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getUSBConnectionStatus_1125d07f0);
  return;
}



/* Entry: 106fa8668; end: 106fa8743; +[SCSpectaclesRequestMessage proxyStarted:password:port:ipv4:] */

void FUN_106fa8668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_alloc(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106fa8744;
  puStack_60 = &UNK_110986858;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  uStack_44 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c055f40(param_1,param_2,0x33,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa8744; end: 106fa8753;  */

void FUN_106fa8744(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_proxyStarted_password_port_ipv4__112624220,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  return;
}



/* Entry: 106fa8754; end: 106fa87b7; +[SCSpectaclesRequestMessage proxyStatus:] */

void FUN_106fa8754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa87b8;
  puStack_30 = &UNK_110986368;
  uStack_28 = param_3;
  func_0x00010c055f40(param_1,param_2,0x52,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa87b8; end: 106fa87c3;  */

void FUN_106fa87b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_proxyStatus__112624228,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa87c4; end: 106fa87e7; +[SCSpectaclesRequestMessage proxyManualStart] */

void FUN_106fa87c4(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x57,&PTR___NSConcreteGlobalBlock_110986888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa87e8; end: 106fa87ef;  */

void FUN_106fa87e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c119eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_proxyManualStart_1126241c8);
  return;
}



/* Entry: 106fa87f0; end: 106fa8813; +[SCSpectaclesRequestMessage proxyManualStop] */

void FUN_106fa87f0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x58,&PTR___NSConcreteGlobalBlock_1109868a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8814; end: 106fa881b;  */

void FUN_106fa8814(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c119ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_proxyManualStop_1126241d0);
  return;
}



/* Entry: 106fa881c; end: 106fa883f; +[SCSpectaclesRequestMessage eventRegisterListenerRequest] */

void FUN_106fa881c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x30,&PTR___NSConcreteGlobalBlock_1109868c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa8840; end: 106fa8847;  */

void FUN_106fa8840(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_eventRegisterListenerRequest_1125c4218);
  return;
}



/* Entry: 106fa8848; end: 106fa886b; +[SCSpectaclesRequestMessage eventUnregisterListenerRequest] */

void FUN_106fa8848(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x30,&PTR___NSConcreteGlobalBlock_1109868e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


