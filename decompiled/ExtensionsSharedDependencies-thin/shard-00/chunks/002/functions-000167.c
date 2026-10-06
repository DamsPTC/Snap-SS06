/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0040dcec; end: 0040dd03;  */

uint FUN_0040dcec(uint param_1)

{
  return (uint)(param_1 < 0xf) & 0x7c07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 0040dd04; end: 0040dd7f;  */

undefined * FUN_0040dd04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f5f0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a20fe0,&UNK_007fc288,&UNK_007fc2ac,5,
                    FUN_0040dd80,0);
    do {
      if (puRam0000000000b5f5f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f5f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f5f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f5f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f5f0;
}



/* Entry: 0040dd80; end: 0040dd8b;  */

bool FUN_0040dd80(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0040dd8c; end: 0040de07;  */

undefined * FUN_0040dd8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f5f8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21000,&UNK_007fc2c0,&UNK_007fc2ec,5,
                    FUN_0040de08,0);
    do {
      if (puRam0000000000b5f5f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f5f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f5f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f5f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f5f8;
}



/* Entry: 0040de08; end: 0040de13;  */

bool FUN_0040de08(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0040de14; end: 0040de7b; +[SCVSMotionData descriptor] */

void FUN_0040de14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f600 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf6f8,
                    &PTR____CFConstantStringClassReference_00a21020,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_motionType_00afb348,5,0x20,0x1c);
    puRam0000000000b5f600 = puVar1;
  }
  return;
}



/* Entry: 0040de7c; end: 0040dee3; +[SCVSDeviceData descriptor] */

void FUN_0040de7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f608 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf748,
                    &PTR____CFConstantStringClassReference_00a21040,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_isBackgrounded_00afb488,7,0x18,0x1c);
    puRam0000000000b5f608 = puVar1;
  }
  return;
}



/* Entry: 0040dee4; end: 0040df4b; +[SCVSLocationPermission descriptor] */

void FUN_0040dee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f610 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf798,
                    &PTR____CFConstantStringClassReference_00a21060,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_type_00afb228,2,8,0x1c);
    puRam0000000000b5f610 = puVar1;
  }
  return;
}



/* Entry: 0040df4c; end: 0040dfb3; +[SCVSUserAction descriptor] */

void FUN_0040df4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f618 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf7e8,
                    &PTR____CFConstantStringClassReference_00a21080,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_type_00afb1c8,1,8,0x1c);
    puRam0000000000b5f618 = puVar1;
  }
  return;
}



/* Entry: 0040dfb4; end: 0040e01b; +[SCVSLocationUpdate descriptor] */

void FUN_0040dfb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f620 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf838,
                    &PTR____CFConstantStringClassReference_00a210a0,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_lat_00afb568,0xe,0x40,0x1c);
    puRam0000000000b5f620 = puVar1;
  }
  return;
}



/* Entry: 0040e01c; end: 0040e083; +[SCVSLiveLocationPushPayload descriptor] */

void FUN_0040e01c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f628 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf888,
                    &PTR____CFConstantStringClassReference_00a210c0,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_sendTimestamp_00afb3e8,5,0x20,0x1c);
    puRam0000000000b5f628 = puVar1;
  }
  return;
}



/* Entry: 0040e084; end: 0040e0eb; +[SCVSNotificationAckUpdate descriptor] */

void FUN_0040e084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f630 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf8d8,
                    &PTR____CFConstantStringClassReference_00a210e0,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_serverRequestTimestamp_00afb1e8,1,
                    0x10,0x1c);
    puRam0000000000b5f630 = puVar1;
  }
  return;
}



/* Entry: 0040e0ec; end: 0040e177; +[SCVSClientUpdate descriptor] */

undefined * FUN_0040e0ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f638 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf928,
                    &PTR____CFConstantStringClassReference_00a21100,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_locationUpdate_00afb2c8,4,0x20,0x1c);
    func_0x00791460();
    puRam0000000000b5f638 = puVar1;
  }
  return puRam0000000000b5f638;
}



/* Entry: 0040e178; end: 0040e1df; +[SCVSClientUpdateRequest descriptor] */

void FUN_0040e178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f640 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf978,
                    &PTR____CFConstantStringClassReference_00a21120,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_updatesArray_00afb268,3,0x18,0x1c);
    puRam0000000000b5f640 = puVar1;
  }
  return;
}



/* Entry: 0040e1e0; end: 0040e247; +[SCVSClientUpdateResponse descriptor] */

void FUN_0040e1e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f648 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acf9c8,
                    &PTR____CFConstantStringClassReference_00a21140,
                    &PTR_s_snapchat_lpse_valis_00afb1b0,&PTR_s_requestAgainAfterMs_00afb208,1,0x10,
                    0x1c);
    puRam0000000000b5f648 = puVar1;
  }
  return;
}



/* Entry: 0040e248; end: 0040e2f3; -[SCNotifExtModifierCallback initWithSuccessCallback:suppressCallback:] */

undefined1 *
FUN_0040e248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR__OBJC_CLASS___SCNotifExtModifierCallback_00ac3980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0040e2f4; end: 0040e303; -[SCNotifExtModifierCallback onSuppressNotification:] */

void FUN_0040e2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040e300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 0040e304; end: 0040e313; -[SCNotifExtModifierCallback onSuccess:] */

void FUN_0040e304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 0040e314; end: 0040e343; -[SCNotifExtModifierCallback .cxx_destruct] */

void FUN_0040e314(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0040e344; end: 0040e3db; +[SCNotifExtBadgeCountProviderType featureTypeWithMetadataTypes:types:] */

void FUN_0040e344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_00ac2978;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0040e3dc; end: 0040e43f; +[SCNotifExtBadgeCountProviderType pushTypeWithTypes:] */

void FUN_0040e3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_00ac2978;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0040e440; end: 0040e48b; +[SCNotifExtBadgeCountProviderType sdn] */

void FUN_0040e440(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_00ac2978;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0040e48c; end: 0040e4af; -[SCNotifExtBadgeCountProviderType copyWithZone:] */

undefined8 FUN_0040e48c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0040e4b0; end: 0040e533; -[SCNotifExtBadgeCountProviderType hash] */

void FUN_0040e4b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x007843a0();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_00ac3988;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0040e534; end: 0040e577; -[SCNotifExtBadgeCountProviderType internalInit] */

void FUN_0040e534(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_00ac3988;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0040e578; end: 0040e647; -[SCNotifExtBadgeCountProviderType isEqual:] */

long FUN_0040e578(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0040e620:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0040e62c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x007877e0();
            goto LAB_0040e62c;
          }
          goto LAB_0040e620;
        }
      }
    }
    lVar3 = 0;
  }
LAB_0040e62c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0040e648; end: 0040e6fb; -[SCNotifExtBadgeCountProviderType matchPushType:sdn:featureType:] */

void FUN_0040e648(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040e6fc; end: 0040e737; -[SCNotifExtBadgeCountProviderType .cxx_destruct] */

void FUN_0040e6fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0040e738; end: 0040e9bb;  */

undefined ** _SCNotifExtCheckUser(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar7;
  long lVar6;
  
  if (param_1 == 0) {
    return &PTR____CFConstantStringClassReference_00a211a0;
  }
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar2 = param_2;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = param_1;
  func_0x00793520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x007933e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_00a211c0;
      goto LAB_0040e840;
    }
    lVar6 = lVar2;
    if (lVar4 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_00a21200;
      goto LAB_0040e840;
    }
  }
  else {
    lVar6 = lVar3;
    if (lVar5 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_00a211e0;
      goto LAB_0040e840;
    }
  }
  iVar1 = (int)lVar6;
  func_0x007878e0();
  ppuVar7 = (undefined **)0x0;
  if (iVar1 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_00a21220;
  }
LAB_0040e840:
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return ppuVar7;
}



/* Entry: 0040e9bc; end: 0040eab7; +[SCNotifExtLocalizer stringWithDirectionMarkup:] */

void FUN_0040e9bc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x007882e0();
  puVar3 = param_3;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_3);
    goto LAB_0040ea98;
  }
  puVar1 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0078a840(PTR__OBJC_CLASS___NSLocale_00ac2990);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x00780160(PTR__OBJC_CLASS___NSLocale_00ac2990,param_2,puVar2);
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    ppuVar4 = &PTR____CFConstantStringClassReference_00a21300;
LAB_0040ea70:
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      ppuVar4 = &PTR____CFConstantStringClassReference_00a212e0;
      goto LAB_0040ea70;
    }
    _objc_retain(param_3);
  }
  _objc_release(puVar2);
LAB_0040ea98:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0040eab8; end: 0040eb93; -[SCMultiSenderTemplateModifier tagUserInfo:] */

void FUN_0040eab8(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00787760(param_1,param_2,param_3);
  if ((param_1 & 1) == 0) {
    puVar3 = param_3;
    func_0x00789f00(param_3,param_2,&PTR____CFConstantStringClassReference_00a21240);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___SCNotificationSenderInfo_00ac2998;
    _objc_alloc(PTR__OBJC_CLASS___SCNotificationSenderInfo_00ac2998);
    func_0x00786700();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    puVar1 = puVar3;
    func_0x00783f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f1c0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_00a236a0);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040eb94; end: 0040ef17; -[SCMultiSenderTemplateModifier applyGroupTemplatesIfNeeded:withNotification:] */

/* WARNING: Removing unreachable block (ram,0x0040ed60) */

void FUN_0040eb94(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar12 = param_1;
  func_0x00787760();
  if ((int)lVar12 != 0) {
    lVar12 = param_3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 == 0) {
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    puVar1 = PTR__OBJC_CLASS___SCNotificationSenderInfo_00ac2998;
    _objc_alloc();
    func_0x00786700();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    puVar3 = puVar1;
    func_0x00783f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    ppuVar10 = param_4;
    func_0x0078b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00780c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar13;
    func_0x00793400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar13);
    _objc_release(ppuVar10);
    _objc_retain(ppuVar6);
    ppuVar10 = ppuVar6;
    func_0x00780ea0();
    while (ppuVar10 != (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
      do {
        puVar3 = PTR__OBJC_CLASS___SCNotificationSenderInfo_00ac2998;
        _objc_alloc();
        func_0x00786700();
        puVar7 = puVar3;
        func_0x007933e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x007933e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x007878e0();
        _objc_release(puVar8);
        _objc_release(puVar7);
        if (((ulong)puVar9 & 1) == 0) {
          func_0x0077e720(ppuVar2);
          func_0x0077e720(puVar4);
        }
        _objc_release(puVar3);
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar10 != ppuVar13);
      ppuVar10 = ppuVar6;
      func_0x00780ea0();
    }
    _objc_release(ppuVar6);
    ppuVar10 = &PTR____CFConstantStringClassReference_00a236a0;
    func_0x0078f4e0(param_3);
    ppuVar13 = ppuVar2;
    func_0x00780e80();
    if (ppuVar13 != (undefined **)((long)&MACH_HEADER.magic + 1)) {
      lVar12 = param_3;
      func_0x00789f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar2;
      func_0x00792e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      if (param_1 != 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_00a21320;
        func_0x0078f4e0(param_3);
      }
      _objc_release(param_1);
    }
    _objc_release(ppuVar6);
    _objc_release(puVar4);
    _objc_release(ppuVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  func_0x00788ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  if (param_3 == 0) {
    lVar12 = 0;
    goto LAB_0040eff4;
  }
  func_0x00780e80();
  func_0x0078c100(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    lVar11 = param_3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) goto LAB_0040efc4;
    func_0x00780e80(ppuVar10);
    lVar12 = 0;
  }
  else {
LAB_0040efc4:
    lVar12 = lVar11;
    FUN_0041cc88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
  }
  _objc_release(puVar4);
LAB_0040eff4:
  _objc_release(param_3);
  _objc_release(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar12);
  return;
}



/* Entry: 0040ef18; end: 0040f02f; -[SCMultiSenderTemplateModifier tryParseAndFormat:withSenders:] */

void FUN_0040ef18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00788ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  if (param_1 == 0) {
    lVar3 = 0;
    goto LAB_0040eff4;
  }
  func_0x00780e80();
  func_0x0078c100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) goto LAB_0040efc4;
    func_0x00780e80(param_4);
    lVar3 = 0;
  }
  else {
LAB_0040efc4:
    lVar3 = lVar2;
    FUN_0041cc88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
LAB_0040eff4:
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 0040f030; end: 0040f09b; -[SCMultiSenderTemplateModifier makeDictionary:] */

void FUN_0040f030(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x007815a0(param_3,param_2,10);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
    func_0x0077ba20(PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0040f09c; end: 0040f0db; -[SCMultiSenderTemplateModifier isEligible:] */

bool FUN_0040f09c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00789f00(param_3,param_2,&PTR____CFConstantStringClassReference_00a21260);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 0040f0dc; end: 0040f143; -[SCNSEExecutionBlizzardEventHolder init] */

undefined1 * FUN_0040f0dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac29b0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0040f144; end: 0040f1ab; -[SCNSEExecutionBlizzardEventHolder setAcknowledgeAttempted:] */

void FUN_0040f144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ca20(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f1ac; end: 0040f213; -[SCNSEExecutionBlizzardEventHolder setConversationPrefetchAttempted:] */

void FUN_0040f1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078d740(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f214; end: 0040f27b; -[SCNSEExecutionBlizzardEventHolder setConversationPrefetchResponseSize:] */

void FUN_0040f214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078d7a0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f27c; end: 0040f2e3; -[SCNSEExecutionBlizzardEventHolder setConversationPrefetchLatencyMs:] */

void FUN_0040f27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078d780(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f2e4; end: 0040f35b; -[SCNSEExecutionBlizzardEventHolder setMessageId:] */

void FUN_0040f2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ef20(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f35c; end: 0040f3d3; -[SCNSEExecutionBlizzardEventHolder setMediaId:] */

void FUN_0040f35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ee60(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f3d4; end: 0040f43b; -[SCNSEExecutionBlizzardEventHolder setMediaPrefetchAttempted:] */

void FUN_0040f3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ee80(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f43c; end: 0040f4a3; -[SCNSEExecutionBlizzardEventHolder setMediaPrefetchResponseSize:] */

void FUN_0040f43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078eee0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f4a4; end: 0040f50b; -[SCNSEExecutionBlizzardEventHolder setMediaPrefetchLatencyMs:] */

void FUN_0040f4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078eec0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f50c; end: 0040f573; -[SCNSEExecutionBlizzardEventHolder setBadgeUpdaterAttempted:] */

void FUN_0040f50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ce40(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f574; end: 0040f5db; -[SCNSEExecutionBlizzardEventHolder setBadgeCountUpdated:] */

void FUN_0040f574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ce20(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f5dc; end: 0040f643; -[SCNSEExecutionBlizzardEventHolder setExtensionTimedOut:] */

void FUN_0040f5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078de60(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f644; end: 0040f6ab; -[SCNSEExecutionBlizzardEventHolder setExtensionLatencyMs:] */

void FUN_0040f644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078de40(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f6ac; end: 0040f723; -[SCNSEExecutionBlizzardEventHolder setNotificationId:] */

void FUN_0040f6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078f380(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f724; end: 0040f79b; -[SCNSEExecutionBlizzardEventHolder setNotificationType:] */

void FUN_0040f724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078f3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f79c; end: 0040f803; -[SCNSEExecutionBlizzardEventHolder setNotificationAvatarType:] */

void FUN_0040f79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078f360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040f804; end: 0040f87b; -[SCNSEExecutionBlizzardEventHolder setCampaignType:] */

void FUN_0040f804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078d2a0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f87c; end: 0040f8f3; -[SCNSEExecutionBlizzardEventHolder setPreprocessingError:] */

void FUN_0040f87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078f7c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f8f4; end: 0040f96b; -[SCNSEExecutionBlizzardEventHolder setAppState:] */

void FUN_0040f8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078cbe0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f96c; end: 0040f9e3; -[SCNSEExecutionBlizzardEventHolder setAcknowledgeError:] */

void FUN_0040f96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ca40(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040f9e4; end: 0040fa5b; -[SCNSEExecutionBlizzardEventHolder setConversationPrefetchError:] */

void FUN_0040f9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078d760(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040fa5c; end: 0040fad3; -[SCNSEExecutionBlizzardEventHolder setMediaPrefetchError:] */

void FUN_0040fa5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078eea0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0040fad4; end: 0040fb3b; -[SCNSEExecutionBlizzardEventHolder setMessagingStack:] */

void FUN_0040fad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078ef60(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040fb3c; end: 0040fba3; -[SCNSEExecutionBlizzardEventHolder setConversationArroyoAvailable:] */

void FUN_0040fb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x0078d720(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0040fba4; end: 0040fc57; -[SCNSEExecutionBlizzardEventHolder setNotificationSuppressionReason:] */

void FUN_0040fba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___SCNotificationSuppressionReasonHelper_00ac29b8;
  func_0x007920c0(PTR__OBJC_CLASS___SCNotificationSuppressionReasonHelper_00ac29b8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f3c0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x0077dce0(param_1,param_2,param_3);
  func_0x0078d360(uVar3,param_2,param_1);
  _objc_sync_exit(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0040fc58; end: 0040fc7f; -[SCNSEExecutionBlizzardEventHolder setDecryptionResult:] */

void FUN_0040fc58(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  
  if (param_3 < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_009e2d48)[param_3];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
  }
                    /* WARNING: Could not recover jumptable at 0x0078d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDecryptionResult__00abe368,ppuVar1);
  return;
}



/* Entry: 0040fc80; end: 0040fc87; -[SCNSEExecutionBlizzardEventHolder setDecryptionTimeInMs:] */

void FUN_0040fc80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDecryptionTimeInMs__00abe370);
  return;
}



/* Entry: 0040fc88; end: 0040fcd7; -[SCNSEExecutionBlizzardEventHolder event] */

void FUN_0040fc88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0040fcd8; end: 0040fcfb; -[SCNSEExecutionBlizzardEventHolder _suppressionCategoryFromReason:] */

undefined8 FUN_0040fcd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x15) {
    return *(undefined8 *)(&UNK_007fc300 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 0040fcfc; end: 0040fd03; -[SCNSEExecutionBlizzardEventHolder reportToBlizzardOverride] */

undefined1 FUN_0040fcfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 0040fd04; end: 0040fd0b; -[SCNSEExecutionBlizzardEventHolder setReportToBlizzardOverride:] */

void FUN_0040fd04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 0040fd0c; end: 0040fd17; -[SCNSEExecutionBlizzardEventHolder .cxx_destruct] */

void FUN_0040fd0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0040fd18; end: 0040fd67; -[SCNSEUserProcessingScope init] */

undefined8 FUN_0040fd18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_00ac29c0;
  func_0x007915a0(PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_00ac29c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00786a00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 0040fd68; end: 004104c3; -[SCNSEUserProcessingScope initWithSystemScopedExtensionStorageServices:] */

undefined8 * FUN_0040fd68(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puStack_80 = PTR__OBJC_CLASS___SCNSEUserProcessingScope_00ac3998;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar15 = puVar2[0xf];
    puVar2[0xf] = puVar3;
    _objc_release(uVar15);
    lVar4 = param_3;
    func_0x0077ed60();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = puVar2[3];
    puVar2[3] = lVar4;
    _objc_release(uVar15);
    lVar4 = param_3;
    func_0x0077ed40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = puVar2[0x10];
    puVar2[0x10] = lVar4;
    _objc_release(uVar15);
    uVar16 = puVar2[3];
    _objc_retain(uVar16);
    puVar3 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
    _objc_retain(uVar16);
    func_0x0077f660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = puVar2[0x11];
    puVar2[0x11] = puVar3;
    _objc_release(uVar15);
    lVar4 = param_3;
    func_0x0077ed40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00792720();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00792060();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    FUN_00410538();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_opt_class(puVar2);
    lVar4 = lVar6;
    func_0x007882e0();
    *(bool *)(puVar2 + 0xe) = lVar4 == 0;
    if (lVar4 == 0) {
      _objc_opt_class(puVar2);
      uVar15 = puVar2[2];
      puVar2[2] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[0x12];
      puVar2[0x12] = 0;
      _objc_release(uVar15);
      puVar3 = PTR__OBJC_CLASS___SCNSEUserProcessingScope_00ac29e0;
      func_0x00788ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = puVar2[8];
      puVar2[8] = puVar3;
      _objc_release(uVar15);
      ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_00a4ea30;
      ppuStack_70 = &PTR____CFConstantStringClassReference_00a21460;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = puVar2[9];
      puVar2[9] = puVar3;
      _objc_release(uVar15);
      uVar15 = puVar2[10];
      puVar2[10] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[0xb];
      puVar2[0xb] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[0xc];
      puVar2[0xc] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[0xd];
      puVar2[0xd] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[6];
      puVar2[6] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[1];
      puVar2[1] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[7];
      puVar2[7] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[4];
      puVar2[4] = 0;
      _objc_release(uVar15);
      _objc_retain(puVar2);
    }
    else {
      lVar5 = param_3;
      func_0x0077ed40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00792720();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00792060();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      FUN_00410538();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar9);
      _objc_release(lVar5);
      _objc_opt_class(puVar2);
      lVar9 = puVar2[3];
      func_0x00792720();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar9;
      func_0x00792060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      puVar3 = PTR__OBJC_CLASS___SCUserExtensionStorageServiceImpl_00ac29f0;
      func_0x007915c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x0077ed60();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = puVar2[2];
      puVar2[2] = puVar10;
      _objc_release(uVar15);
      puVar10 = puVar3;
      func_0x0077ed40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = puVar2[0x12];
      puVar2[0x12] = puVar10;
      _objc_release(uVar15);
      puVar10 = PTR__OBJC_CLASS___SCNotificationServiceExtensionUserDefaults_00ac29f8;
      _objc_alloc();
      func_0x00786ea0();
      puVar11 = puVar10;
      func_0x00783d80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = puVar2[8];
      puVar2[8] = puVar11;
      _objc_release(uVar15);
      puVar11 = puVar10;
      func_0x00789b00();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = puVar2[9];
      puVar2[9] = puVar11;
      _objc_release(uVar15);
      puVar11 = PTR_PTR_00ac2a00;
      _objc_alloc();
      func_0x00786ea0();
      uVar15 = puVar2[10];
      puVar2[10] = puVar11;
      _objc_release(uVar15);
      puVar11 = PTR_PTR_00ac2a08;
      _objc_alloc();
      func_0x00786ea0();
      uVar15 = puVar2[0xb];
      puVar2[0xb] = puVar11;
      _objc_release(uVar15);
      puVar11 = PTR__OBJC_CLASS___SCMapNotificationExtensionUserDefaults_00ac2a10;
      _objc_alloc();
      func_0x00786ea0();
      uVar15 = puVar2[0xc];
      puVar2[0xc] = puVar11;
      _objc_release(uVar15);
      puVar11 = PTR_PTR_00ac2a18;
      _objc_alloc();
      func_0x00786ea0();
      uVar15 = puVar2[0xd];
      puVar2[0xd] = puVar11;
      _objc_release(uVar15);
      puVar11 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
      func_0x0078aa40(PTR__OBJC_CLASS___NSProcessInfo_00ac2a20);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078aa20();
      _objc_release(puVar11);
      _objc_opt_class(puVar2);
      func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar15 = puVar2[6];
      puVar2[6] = 0;
      _objc_release(uVar15);
      uVar15 = puVar2[5];
      puVar2[5] = 0;
      _objc_release(uVar15);
      if (lVar8 != 0 && (lVar6 != 0 && lVar5 != 0)) {
        puVar11 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_00ac2a28;
        func_0x007914e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x0077fa80();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = puVar2[6];
        puVar2[6] = puVar12;
        _objc_release(uVar15);
        _objc_release(puVar11);
        func_0x0078cfc0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30);
        iVar1 = (int)puVar2[8];
        func_0x007825c0();
        if (iVar1 != 0) {
          func_0x00782600(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30);
        }
        puVar11 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_00ac2a28;
        func_0x007914e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x007897c0(puVar2[8]);
        puVar12 = puVar11;
        func_0x007897e0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = puVar2[5];
        puVar2[5] = puVar12;
        _objc_release(uVar15);
        _objc_release(puVar11);
      }
      puVar11 = PTR_PTR_00ac2a38;
      _objc_alloc(PTR_PTR_00ac2a38);
      func_0x007898a0();
      func_0x00785d40(puVar11);
      func_0x00782640(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30);
      uVar15 = puVar2[1];
      puVar2[1] = 0;
      _objc_release(uVar15);
      if (lVar8 != 0 && (lVar6 != 0 && lVar5 != 0)) {
        puVar12 = PTR__OBJC_CLASS___SCNotifExtUserSession_00ac2a40;
        _objc_alloc();
        func_0x00786e60();
        uVar15 = puVar2[1];
        puVar2[1] = puVar12;
        _objc_release(uVar15);
      }
      uVar15 = puVar2[7];
      puVar2[7] = 0;
      _objc_release(uVar15);
      iVar1 = (int)puVar2[8];
      func_0x007825e0();
      if (iVar1 != 0) {
        puVar12 = PTR__OBJC_CLASS___SCGrapheneExtensionLogger_00ac2a48;
        _objc_alloc();
        puVar13 = puVar10;
        func_0x00783fc0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x007857a0();
        uVar15 = puVar2[7];
        puVar2[7] = puVar12;
        _objc_release(uVar15);
        _objc_release(puVar13);
      }
      puVar12 = PTR_PTR_00ac2a50;
      _objc_alloc_init();
      uVar15 = puVar2[4];
      puVar2[4] = puVar12;
      _objc_release(uVar15);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(lVar8);
    }
    _objc_release(lVar6);
    _objc_release(uVar16);
    _objc_release(uVar16);
    if (lVar4 == 0) goto LAB_00410474;
  }
  _objc_retain(puVar2);
LAB_00410474:
  _objc_release(param_3);
  puVar14 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar15 = puVar14[4];
  func_0x00792720(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fba0();
  func_0x00789be0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return puVar2;
}



/* Entry: 004104c4; end: 00410527;  */

void FUN_004104c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fba0();
  func_0x00789be0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00410528; end: 00410537;  */

void FUN_00410528(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 00410538; end: 0041058f;  */

void FUN_00410538(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410590; end: 0041059b; -[SCNSEUserProcessingScope notificationCenter] */

void FUN_00410590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00781370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___UNUserNotificationCenter_00ac2a58,
             PTR_s_currentNotificationCenter_00abb1d0);
  return;
}



/* Entry: 0041059c; end: 004105c3; -[SCNSEUserProcessingScope userSession] */

void FUN_0041059c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004105c4; end: 004105eb; -[SCNSEUserProcessingScope systemScopedAppGroupUserDefaults] */

void FUN_004105c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004105ec; end: 00410613; -[SCNSEUserProcessingScope userScopedAppGroupUserDefaults] */

void FUN_004105ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410614; end: 0041063b; -[SCNSEUserProcessingScope nseHandlerConfigDict] */

void FUN_00410614(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0041063c; end: 0041067f; -[SCNSEUserProcessingScope configs] */

void FUN_0041063c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 8) == 0) && (*(char *)(param_1 + 0x70) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410680; end: 004106af; -[SCNSEUserProcessingScope arroyoConfig] */

void FUN_00410680(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0077f220(*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004106b0; end: 004106d7; -[SCNSEUserProcessingScope friendingUserDefaults] */

void FUN_004106b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004106d8; end: 004106ff; -[SCNSEUserProcessingScope messagingUserDefaults] */

void FUN_004106d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410700; end: 00410727; -[SCNSEUserProcessingScope processingEvent] */

void FUN_00410700(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410728; end: 0041074f; -[SCNSEUserProcessingScope nativeAckDelegate] */

void FUN_00410728(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410750; end: 00410777; -[SCNSEUserProcessingScope blizzardExtensionLogger] */

void FUN_00410750(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00410778; end: 0041079f; -[SCNSEUserProcessingScope grapheneExtensionLogger] */

void FUN_00410778(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004107a0; end: 004107a7; -[SCNSEUserProcessingScope mapConfig] */

void FUN_004107a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00788e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_mapNotificationServiceExtensionC_00abd0a8);
  return;
}



/* Entry: 004107a8; end: 004107af; -[SCNSEUserProcessingScope bitmojiConfig] */

void FUN_004107a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007809b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x68),PTR_s_configs_00abaf60);
  return;
}



/* Entry: 004107b0; end: 004107d7; -[SCNSEUserProcessingScope decryptedPayload] */

void FUN_004107b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004107d8; end: 004108db; +[SCNSEUserProcessingScope loggedOutConfigs] */

void FUN_004107d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_00ac2a60;
  _objc_alloc(PTR_PTR_00ac2a60);
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_opt_new();
  func_0x007858e0(puVar1,param_2,0,0,0,0x1e,&PTR____CFConstantStringClassReference_00a212a0,0,0,0,
                  PTR____NSArray0__struct_00999d10,PTR____NSArray0__struct_00999d10,0x18,3,2000,0,0)
  ;
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004108dc; end: 004108e3; -[SCNSEUserProcessingScope systemScopedPlistStorage] */

undefined8 FUN_004108dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 004108e4; end: 004108eb; -[SCNSEUserProcessingScope appIsInForeground] */

undefined8 FUN_004108e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 004108ec; end: 004108f3; -[SCNSEUserProcessingScope userScopedPlistStorage] */

undefined8 FUN_004108ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 004108f4; end: 004108fb; -[SCNSEUserProcessingScope useLogoutFlow] */

undefined1 FUN_004108f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 004108fc; end: 00410903; -[SCNSEUserProcessingScope clientPayload] */

undefined8 FUN_004108fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 00410904; end: 00410933; -[SCNSEUserProcessingScope setClientPayload:] */

void FUN_00410904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00410934; end: 00410a23; -[SCNSEUserProcessingScope .cxx_destruct] */

void FUN_00410934(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00410a24; end: 00410a9b; -[SCNotifExtAttachmentCache initWithUserId:] */

undefined8 FUN_00410a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784ac0();
  _objc_release(param_3);
  func_0x007867e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 00410a9c; end: 00410b0f; -[SCNotifExtAttachmentCache initWithSharedDirectory:] */

undefined1 * FUN_00410a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCNotifExtAttachmentCache_00ac39a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00410b10; end: 00410b87; -[SCNotifExtAttachmentCache setObjectData:forKey:] */

void FUN_00410b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00791560(lVar1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00793d20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}


