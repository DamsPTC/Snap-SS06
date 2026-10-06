/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b064f50; end: 10b064f73; -[SCTCameraLifecycleEvent copyWithZone:] */

undefined8 FUN_10b064f50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b064f74; end: 10b064f7b; -[SCTCameraLifecycleEvent hash] */

undefined8 FUN_10b064f74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b064f7c; end: 10b064fbf; -[SCTCameraLifecycleEvent internalInit] */

void FUN_10b064f7c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112705090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b064fc0; end: 10b065047; -[SCTCameraLifecycleEvent isEqual:] */

bool FUN_10b064fc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b065048; end: 10b06511b; -[SCTCameraLifecycleEvent matchWillStart:didStart:willStop:didStop:] */

void FUN_10b065048(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10b0650d4;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_10b0650d4;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10b0650d4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06511c; end: 10b065167;  */

void FUN_10b06511c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b065168; end: 10b0655eb; -[SCPlatformAnalyticsDataModel initWithCoder:] */

undefined1 * FUN_10b065168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705098;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined8 *)((long)puVar1 + 0xe0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0655ec; end: 10b065b07; -[SCPlatformAnalyticsDataModel initWithSource:chatSource:chatEraseMode:isForwardMessage:destinationInfo:chatMentionsMetricInfo:cameraRollCameraMetricInfo:drawerMetricInfo:creativeKitInfo:memoriesMetricInfo:uuid:contextMetricInfo:sendToSessionId:rankingResultsId:sendUiType:mapDropsMetricInfo:placeShareMetricInfo:chatReplyMetricInfo:dWebUpsellMetricInfo:contentShareInfo:storyMetricInfo:initialActionTimestamp:sponsoredLensInfo:genAiInfo:containsExternalContent:isFromWatchApp:hasSaturnStatusVisible:sponsoredSnapInfo:lensInfo:sendTappedUserActionId:] */

undefined8 *
FUN_10b0655ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined4 param_27,undefined4 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  puStack_70 = PTR_PTR_112705098;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    *(undefined1 *)(puVar1 + 1) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_27;
    *(undefined1 *)((long)puVar1 + 10) = param_27._1_1_;
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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
  return puVar1;
}



/* Entry: 10b065b08; end: 10b065b2b; -[SCPlatformAnalyticsDataModel copyWithZone:] */

undefined8 FUN_10b065b08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b065b2c; end: 10b065dbb; -[SCPlatformAnalyticsDataModel encodeWithCoder:] */

void FUN_10b065b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dd8398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54738);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54758);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f54778);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f54798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f547b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f547d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f547f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f54818);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f54838);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110e7e6d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f54858);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f54878);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f54898);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f548b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f548d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f548f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f54918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f54938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f54958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f54978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f54998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f549b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110f549d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f549f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f54a18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 200),
                      &PTR____CFConstantStringClassReference_110f54a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110f54a58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd8),
                      &PTR____CFConstantStringClassReference_110f54a78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110f54a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b065dbc; end: 10b065f5f; -[SCPlatformAnalyticsDataModel hash] */

undefined8 * FUN_10b065dbc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_120;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_118 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  lVar5 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lStack_110 = -lVar5;
  if (-1 < lVar5) {
    lStack_110 = lVar5;
  }
  uStack_108 = (ulong)*(byte *)(param_1 + 8);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x78);
  uStack_a8 = *(undefined8 *)(param_1 + 0x80);
  lStack_b0 = -lVar5;
  if (-1 < lVar5) {
    lStack_b0 = lVar5;
  }
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uStack_58 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_120,0x1e);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b066248:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b066254;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(char *)((long)puVar3 + 8) == param_3[8] &&
           (*(long *)((long)puVar3 + 0x78) == *(long *)(param_3 + 0x78))))))) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])) &&
       (*(char *)((long)puVar3 + 10) == param_3[10])) {
      lVar5 = *(long *)((long)puVar3 + 0x28);
      if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x30);
        if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x38);
          if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x40);
            if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x48);
              if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x50);
                if ((lVar5 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x58);
                  if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x60);
                    if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x68);
                      if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x70);
                        if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x80);
                          if ((lVar5 == *(long *)(param_3 + 0x80)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x88);
                            if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x90);
                              if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x98);
                                if ((lVar5 == *(long *)(param_3 + 0x98)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + 0xa0);
                                  if ((lVar5 == *(long *)(param_3 + 0xa0)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + 0xa8);
                                    if ((lVar5 == *(long *)(param_3 + 0xa8)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + 0xb0);
                                      if ((lVar5 == *(long *)(param_3 + 0xb0)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = *(long *)((long)puVar3 + 0xb8);
                                        if ((lVar5 == *(long *)(param_3 + 0xb8)) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = *(long *)((long)puVar3 + 0xc0);
                                          if ((lVar5 == *(long *)(param_3 + 0xc0)) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = *(long *)((long)puVar3 + 200);
                                            if ((lVar5 == *(long *)(param_3 + 200)) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = *(long *)((long)puVar3 + 0xd0);
                                              if ((lVar5 == *(long *)(param_3 + 0xd0)) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = *(long *)((long)puVar3 + 0xd8);
                                                if ((lVar5 == *(long *)(param_3 + 0xd8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  puVar6 = *(undefined1 **)((long)puVar3 + 0xe0);
                                                  if (puVar6 != *(undefined1 **)(param_3 + 0xe0)) {
                                                    func_0x00010c071ae0();
                                                    goto LAB_10b066254;
                                                  }
                                                  goto LAB_10b066248;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b066254:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b065f60; end: 10b06626f; -[SCPlatformAnalyticsDataModel isEqual:] */

long FUN_10b065f60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b066248:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b066254;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
       (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x80);
                          if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x88);
                            if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x90);
                              if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x98);
                                if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xa0);
                                  if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xa8);
                                    if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0xb0);
                                      if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xb8);
                                        if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xc0);
                                          if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 200);
                                            if ((lVar3 == *(long *)(param_3 + 200)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xd0);
                                              if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xd8);
                                                if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xe0);
                                                  if (lVar3 != *(long *)(param_3 + 0xe0)) {
                                                    func_0x00010c071ae0();
                                                    goto LAB_10b066254;
                                                  }
                                                  goto LAB_10b066248;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b066254:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b066270; end: 10b066277; -[SCPlatformAnalyticsDataModel source] */

undefined8 FUN_10b066270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b066278; end: 10b06627f; -[SCPlatformAnalyticsDataModel chatSource] */

undefined8 FUN_10b066278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b066280; end: 10b066287; -[SCPlatformAnalyticsDataModel chatEraseMode] */

undefined8 FUN_10b066280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b066288; end: 10b06628f; -[SCPlatformAnalyticsDataModel isForwardMessage] */

undefined1 FUN_10b066288(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b066290; end: 10b066297; -[SCPlatformAnalyticsDataModel destinationInfo] */

undefined8 FUN_10b066290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b066298; end: 10b06629f; -[SCPlatformAnalyticsDataModel chatMentionsMetricInfo] */

undefined8 FUN_10b066298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0662a0; end: 10b0662a7; -[SCPlatformAnalyticsDataModel cameraRollCameraMetricInfo] */

undefined8 FUN_10b0662a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0662a8; end: 10b0662af; -[SCPlatformAnalyticsDataModel drawerMetricInfo] */

undefined8 FUN_10b0662a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0662b0; end: 10b0662b7; -[SCPlatformAnalyticsDataModel creativeKitInfo] */

undefined8 FUN_10b0662b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0662b8; end: 10b0662bf; -[SCPlatformAnalyticsDataModel memoriesMetricInfo] */

undefined8 FUN_10b0662b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0662c0; end: 10b0662c7; -[SCPlatformAnalyticsDataModel uuid] */

undefined8 FUN_10b0662c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b0662c8; end: 10b0662cf; -[SCPlatformAnalyticsDataModel contextMetricInfo] */

undefined8 FUN_10b0662c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b0662d0; end: 10b0662d7; -[SCPlatformAnalyticsDataModel sendToSessionId] */

undefined8 FUN_10b0662d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b0662d8; end: 10b0662df; -[SCPlatformAnalyticsDataModel rankingResultsId] */

undefined8 FUN_10b0662d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b0662e0; end: 10b0662e7; -[SCPlatformAnalyticsDataModel sendUiType] */

undefined8 FUN_10b0662e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b0662e8; end: 10b0662ef; -[SCPlatformAnalyticsDataModel mapDropsMetricInfo] */

undefined8 FUN_10b0662e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b0662f0; end: 10b0662f7; -[SCPlatformAnalyticsDataModel placeShareMetricInfo] */

undefined8 FUN_10b0662f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b0662f8; end: 10b0662ff; -[SCPlatformAnalyticsDataModel chatReplyMetricInfo] */

undefined8 FUN_10b0662f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b066300; end: 10b066307; -[SCPlatformAnalyticsDataModel dWebUpsellMetricInfo] */

undefined8 FUN_10b066300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b066308; end: 10b06630f; -[SCPlatformAnalyticsDataModel contentShareInfo] */

undefined8 FUN_10b066308(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b066310; end: 10b066317; -[SCPlatformAnalyticsDataModel storyMetricInfo] */

undefined8 FUN_10b066310(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b066318; end: 10b06631f; -[SCPlatformAnalyticsDataModel initialActionTimestamp] */

undefined8 FUN_10b066318(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b066320; end: 10b066327; -[SCPlatformAnalyticsDataModel sponsoredLensInfo] */

undefined8 FUN_10b066320(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b066328; end: 10b06632f; -[SCPlatformAnalyticsDataModel genAiInfo] */

undefined8 FUN_10b066328(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b066330; end: 10b066337; -[SCPlatformAnalyticsDataModel containsExternalContent] */

undefined1 FUN_10b066330(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b066338; end: 10b06633f; -[SCPlatformAnalyticsDataModel isFromWatchApp] */

undefined1 FUN_10b066338(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b066340; end: 10b066347; -[SCPlatformAnalyticsDataModel hasSaturnStatusVisible] */

undefined8 FUN_10b066340(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b066348; end: 10b06634f; -[SCPlatformAnalyticsDataModel sponsoredSnapInfo] */

undefined8 FUN_10b066348(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b066350; end: 10b066357; -[SCPlatformAnalyticsDataModel lensInfo] */

undefined8 FUN_10b066350(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b066358; end: 10b06635f; -[SCPlatformAnalyticsDataModel sendTappedUserActionId] */

undefined8 FUN_10b066358(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b066360; end: 10b06648b; -[SCPlatformAnalyticsDataModel .cxx_destruct] */

void FUN_10b066360(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b06648c; end: 10b0664a7; +[SCPlatformAnalyticsDataModelBuilder platformAnalyticsDataModel] */

void FUN_10b06648c(void)

{
  _objc_alloc_init(PTR_PTR_1126b1a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0664a8; end: 10b066bfb; +[SCPlatformAnalyticsDataModelBuilder platformAnalyticsDataModelFromExistingPlatformAnalyticsDataModel:] */

void FUN_10b0664a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined *puVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined8 uVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined *puVar54;
  
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_3);
  func_0x00010c0fe1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c247520(param_3);
  puVar3 = puVar1;
  func_0x00010c2b9b80(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf37780(param_3);
  puVar4 = puVar3;
  func_0x00010c2aa660(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf364a0(param_3);
  puVar5 = puVar4;
  func_0x00010c2aa540(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0735a0(param_3);
  puVar6 = puVar5;
  func_0x00010c2b0820(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac2e0(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf36ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2aa5a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf2a760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2a9e40(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf89e00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2aca20(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf5aca0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2ab400(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0c8ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b3c60(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2bc480(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bf4eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2ab020(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2b8260(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c11fc40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2b67c0(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c15d860(param_3);
  puVar27 = puVar25;
  func_0x00010c2b8280(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c0b8f40();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar27;
  func_0x00010c2b3560(puVar27,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c0fd4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010c2b5620(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf374a0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010c2aa640(puVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010bf63260();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar32;
  func_0x00010c2abc60(puVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_3;
  func_0x00010bf4d560();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar34;
  func_0x00010c2aaec0(puVar34,param_2,uVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_3;
  func_0x00010c25a540();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar36;
  func_0x00010c2ba520(puVar36,param_2,uVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = param_3;
  func_0x00010c063ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar38;
  func_0x00010c2afd40(puVar38,param_2,uVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = param_3;
  func_0x00010c24a480();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar40;
  func_0x00010c2b9c80(puVar40,param_2,uVar41);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_3;
  func_0x00010bfbea60();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar42;
  func_0x00010c2aed40(puVar42,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_3;
  func_0x00010bf4b700(param_3);
  puVar46 = puVar44;
  func_0x00010c2aad40(puVar44,param_2,uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_3;
  func_0x00010c073e80(param_3);
  puVar47 = puVar46;
  func_0x00010c2b0980(puVar46,param_2,uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_3;
  func_0x00010bfdb620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar47;
  func_0x00010c2af3e0(puVar47,param_2,uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = param_3;
  func_0x00010c24a9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar48;
  func_0x00010c2b9ce0(puVar48,param_2,uVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = param_3;
  func_0x00010c094820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar50;
  func_0x00010c2b2900(puVar50,param_2,uVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = param_3;
  func_0x00010c15cde0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar54 = puVar52;
  func_0x00010c2b8220(puVar52,param_2,uVar53);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar53);
  _objc_release(puVar52);
  _objc_release(uVar51);
  _objc_release(puVar50);
  _objc_release(uVar49);
  _objc_release(puVar48);
  _objc_release(uVar45);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar44);
  _objc_release(uVar43);
  _objc_release(puVar42);
  _objc_release(uVar41);
  _objc_release(puVar40);
  _objc_release(uVar39);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(puVar36);
  _objc_release(uVar35);
  _objc_release(puVar34);
  _objc_release(uVar33);
  _objc_release(puVar32);
  _objc_release(uVar31);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(uVar26);
  _objc_release(puVar27);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar54);
  return;
}



/* Entry: 10b066bfc; end: 10b066c8f; -[SCPlatformAnalyticsDataModelBuilder build] */

void FUN_10b066bfc(void)

{
  _objc_alloc(PTR_PTR_1126d4598);
  func_0x00010c04a5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b066c90; end: 10b066c97; -[SCPlatformAnalyticsDataModelBuilder withSource:] */

void FUN_10b066c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b066c98; end: 10b066c9f; -[SCPlatformAnalyticsDataModelBuilder withChatSource:] */

void FUN_10b066c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b066ca0; end: 10b066ca7; -[SCPlatformAnalyticsDataModelBuilder withChatEraseMode:] */

void FUN_10b066ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b066ca8; end: 10b066caf; -[SCPlatformAnalyticsDataModelBuilder withIsForwardMessage:] */

void FUN_10b066ca8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b066cb0; end: 10b066ce7; -[SCPlatformAnalyticsDataModelBuilder withDestinationInfo:] */

long FUN_10b066cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066ce8; end: 10b066d1f; -[SCPlatformAnalyticsDataModelBuilder withChatMentionsMetricInfo:] */

long FUN_10b066ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066d20; end: 10b066d57; -[SCPlatformAnalyticsDataModelBuilder withCameraRollCameraMetricInfo:] */

long FUN_10b066d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066d58; end: 10b066d8f; -[SCPlatformAnalyticsDataModelBuilder withDrawerMetricInfo:] */

long FUN_10b066d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066d90; end: 10b066dc7; -[SCPlatformAnalyticsDataModelBuilder withCreativeKitInfo:] */

long FUN_10b066d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066dc8; end: 10b066dff; -[SCPlatformAnalyticsDataModelBuilder withMemoriesMetricInfo:] */

long FUN_10b066dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066e00; end: 10b066e37; -[SCPlatformAnalyticsDataModelBuilder withUuid:] */

long FUN_10b066e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066e38; end: 10b066e6f; -[SCPlatformAnalyticsDataModelBuilder withContextMetricInfo:] */

long FUN_10b066e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066e70; end: 10b066ea7; -[SCPlatformAnalyticsDataModelBuilder withSendToSessionId:] */

long FUN_10b066e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066ea8; end: 10b066edf; -[SCPlatformAnalyticsDataModelBuilder withRankingResultsId:] */

long FUN_10b066ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066ee0; end: 10b066ee7; -[SCPlatformAnalyticsDataModelBuilder withSendUiType:] */

void FUN_10b066ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b066ee8; end: 10b066f1f; -[SCPlatformAnalyticsDataModelBuilder withMapDropsMetricInfo:] */

long FUN_10b066ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066f20; end: 10b066f57; -[SCPlatformAnalyticsDataModelBuilder withPlaceShareMetricInfo:] */

long FUN_10b066f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066f58; end: 10b066f8f; -[SCPlatformAnalyticsDataModelBuilder withChatReplyMetricInfo:] */

long FUN_10b066f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066f90; end: 10b066fc7; -[SCPlatformAnalyticsDataModelBuilder withDWebUpsellMetricInfo:] */

long FUN_10b066f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b066fc8; end: 10b066fff; -[SCPlatformAnalyticsDataModelBuilder withContentShareInfo:] */

long FUN_10b066fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b067000; end: 10b067037; -[SCPlatformAnalyticsDataModelBuilder withStoryMetricInfo:] */

long FUN_10b067000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b067038; end: 10b06706f; -[SCPlatformAnalyticsDataModelBuilder withInitialActionTimestamp:] */

long FUN_10b067038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b067070; end: 10b0670a7; -[SCPlatformAnalyticsDataModelBuilder withSponsoredLensInfo:] */

long FUN_10b067070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0670a8; end: 10b0670df; -[SCPlatformAnalyticsDataModelBuilder withGenAiInfo:] */

long FUN_10b0670a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0670e0; end: 10b0670e7; -[SCPlatformAnalyticsDataModelBuilder withContainsExternalContent:] */

void FUN_10b0670e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 10b0670e8; end: 10b0670ef; -[SCPlatformAnalyticsDataModelBuilder withIsFromWatchApp:] */

void FUN_10b0670e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc9) = param_3;
  return;
}



/* Entry: 10b0670f0; end: 10b067127; -[SCPlatformAnalyticsDataModelBuilder withHasSaturnStatusVisible:] */

long FUN_10b0670f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b067128; end: 10b06715f; -[SCPlatformAnalyticsDataModelBuilder withSponsoredSnapInfo:] */

long FUN_10b067128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b067160; end: 10b067197; -[SCPlatformAnalyticsDataModelBuilder withLensInfo:] */

long FUN_10b067160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b067198; end: 10b0671cf; -[SCPlatformAnalyticsDataModelBuilder withSendTappedUserActionId:] */

long FUN_10b067198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0671d0; end: 10b0672fb; -[SCPlatformAnalyticsDataModelBuilder .cxx_destruct] */

void FUN_10b0671d0(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b0672fc; end: 10b06744b; -[SCPlatformAnalyticsCTItemInfo initWithCoder:] */

undefined1 * FUN_10b0672fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06744c; end: 10b067583; -[SCPlatformAnalyticsCTItemInfo initWithCtItemId:section:stickerId:fullStickerId:entity:source:searchSource:isAnimated:] */

undefined1 *
FUN_10b06744c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1127050a0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b067584; end: 10b0675a7; -[SCPlatformAnalyticsCTItemInfo copyWithZone:] */

undefined8 FUN_10b067584(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0675a8; end: 10b06767f; -[SCPlatformAnalyticsCTItemInfo encodeWithCoder:] */

void FUN_10b0675a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f54ab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f2b058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54ad8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f54af8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f54b18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110dd8398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f54b38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f54b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b067680; end: 10b06772b; -[SCPlatformAnalyticsCTItemInfo hash] */

undefined8 * FUN_10b067680(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_68;
  uStack_50 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b06781c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b067828;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])) && (puVar3[8] == param_3[8])) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10b067828;
            }
            goto LAB_10b06781c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b067828:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b06772c; end: 10b067843; -[SCPlatformAnalyticsCTItemInfo isEqual:] */

long FUN_10b06772c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06781c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b067828;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b067828;
            }
            goto LAB_10b06781c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b067828:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b067844; end: 10b06784b; -[SCPlatformAnalyticsCTItemInfo ctItemId] */

undefined8 FUN_10b067844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06784c; end: 10b067853; -[SCPlatformAnalyticsCTItemInfo section] */

undefined8 FUN_10b06784c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b067854; end: 10b06785b; -[SCPlatformAnalyticsCTItemInfo stickerId] */

undefined8 FUN_10b067854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b06785c; end: 10b067863; -[SCPlatformAnalyticsCTItemInfo fullStickerId] */

undefined8 FUN_10b06785c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b067864; end: 10b06786b; -[SCPlatformAnalyticsCTItemInfo entity] */

undefined8 FUN_10b067864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b06786c; end: 10b067873; -[SCPlatformAnalyticsCTItemInfo source] */

undefined8 FUN_10b06786c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b067874; end: 10b06787b; -[SCPlatformAnalyticsCTItemInfo searchSource] */

undefined8 FUN_10b067874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b06787c; end: 10b067883; -[SCPlatformAnalyticsCTItemInfo isAnimated] */

undefined1 FUN_10b06787c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b067884; end: 10b0678cb; -[SCPlatformAnalyticsCTItemInfo .cxx_destruct] */

void FUN_10b067884(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0678cc; end: 10b0679a3; -[SCPlatformAnalyticsDrawerMetricInfo initWithCoder:] */

undefined1 * FUN_10b0678cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
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



/* Entry: 10b0679a4; end: 10b067a63; -[SCPlatformAnalyticsDrawerMetricInfo initWithViewMode:position:drawerSessionId:tabInfo:] */

undefined1 *
FUN_10b0679a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127050a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b067a64; end: 10b067a87; -[SCPlatformAnalyticsDrawerMetricInfo copyWithZone:] */

undefined8 FUN_10b067a64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b067a88; end: 10b067b0f; -[SCPlatformAnalyticsDrawerMetricInfo encodeWithCoder:] */

void FUN_10b067a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f54b78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f54b98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54bb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b067b10; end: 10b067b8f; -[SCPlatformAnalyticsDrawerMetricInfo hash] */

undefined8 * FUN_10b067b10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b067c30:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b067c3c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b067c3c;
        }
        goto LAB_10b067c30;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b067c3c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b067b90; end: 10b067c57; -[SCPlatformAnalyticsDrawerMetricInfo isEqual:] */

long FUN_10b067b90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b067c30:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b067c3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b067c3c;
        }
        goto LAB_10b067c30;
      }
    }
    lVar3 = 0;
  }
LAB_10b067c3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b067c58; end: 10b067c5f; -[SCPlatformAnalyticsDrawerMetricInfo viewMode] */

undefined8 FUN_10b067c58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b067c60; end: 10b067c67; -[SCPlatformAnalyticsDrawerMetricInfo position] */

undefined8 FUN_10b067c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


