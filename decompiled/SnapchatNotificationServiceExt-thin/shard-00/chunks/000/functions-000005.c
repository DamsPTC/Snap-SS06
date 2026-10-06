/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100027624; end: 10002763f;  */

void FUN_100027624(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  return;
}



/* Entry: 100027640; end: 1000276c7;  */

void FUN_100027640(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1000276c8;
  puStack_30 = &UNK_1000a2048;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  ppuVar1 = &puStack_48;
  uStack_28 = uVar3;
  _objc_retainBlock();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = ppuVar1;
  _objc_release(uVar3);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1000276c8; end: 1000277fb;  */

uint FUN_1000276c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar1 = lVar2;
    FUN_100068b44();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) ||
       (lVar3 = lVar1, func_0x00010006fae0(), puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0,
       (int)lVar3 == 0)) {
      uVar7 = 1;
    }
    else {
      lVar3 = lVar1;
      func_0x00010006f340(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006f360();
      func_0x000100071f40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010006e6e0(uVar6);
      _objc_release(puVar4);
      _objc_release(lVar3);
      uVar7 = (uint)uVar5 ^ 1;
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(uVar6);
  return uVar7;
}



/* Entry: 1000277fc; end: 10002785b;  */

void FUN_1000277fc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 10002785c; end: 10002791f;  */

void FUN_10002785c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100027920;
  puStack_48 = &UNK_1000a20d8;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retainBlock();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 100027920; end: 100027aeb;  */

undefined8 FUN_100027920(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  lVar3 = param_2;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 == 0) {
    lVar3 = param_2;
    func_0x00010006e720(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x000100072060(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010006e6e0(uVar2);
    _objc_release(lVar7);
  }
  else {
    lVar3 = lVar5;
    FUN_100068b44();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar4 = lVar3, func_0x00010006fae0(), puVar6 = PTR__OBJC_CLASS___NSNumber_1000d1bf0,
       (int)lVar4 == 0)) {
      uVar8 = 0;
      goto LAB_100027aa4;
    }
    lVar4 = lVar3;
    func_0x00010006f340(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f360();
    func_0x000100071f40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010006e6e0(uVar1);
  }
  _objc_release(puVar6);
  _objc_release(lVar4);
LAB_100027aa4:
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 100027aec; end: 100027b43;  */

long FUN_100027aec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x0001000726a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 100027b44; end: 100027bdb;  */

void FUN_100027b44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
  pcStack_58 = FUN_100027bdc;
  puStack_50 = &UNK_1000a2168;
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = 0xc2000000;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(*(undefined8 *)(param_1 + 0x40));
  uStack_48 = uVar4;
  uStack_40 = uVar5;
  func_0x0001000723a0(uVar1,param_2,uVar2,uVar3,&puStack_68);
  _objc_release(uStack_40);
  return;
}



/* Entry: 100027bdc; end: 100027c73;  */

void FUN_100027bdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar4 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x000100074480(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  func_0x000100071fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010006bbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_1000a0278)(lVar4 + 0x10);
  return;
}



/* Entry: 100027c74; end: 100027d83;  */

void FUN_100027c74(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 100027d84; end: 100027d9b;  */

void FUN_100027d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100027d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 100027d9c; end: 100027dd7;  */

void FUN_100027d9c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 100027dd8; end: 100027de3; -[SCNotificationExtensionBadgeOrchestrator .cxx_destruct] */

void FUN_100027dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100027de4; end: 1000283a3; -[SCNotificationServiceExtDelegate initWithProcessingScope:] */

long FUN_100027de4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x100);
  *(ulong *)(param_1 + 0x100) = uVar2;
  _objc_release(uVar14);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010006e640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073aa0();
  _objc_release(uVar1);
  func_0x00010006de60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1000d1dc0;
  _objc_alloc();
  uVar1 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070de0(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1000d1dc8;
  _objc_alloc();
  uVar1 = param_3;
  func_0x000100071d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070620(puVar4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x000100074140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    puVar6 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
    func_0x000100073980(PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072700();
    _objc_release(puVar6);
    uVar1 = param_3;
    func_0x000100074140(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072bc0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar7 = *(long *)(param_1 + 0x100);
  func_0x0001000713a0();
  if (lVar7 == 0) {
    puStack_78 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
    func_0x000100073980();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x100);
    uVar1 = param_3;
    func_0x00010006e640(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100072560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010006e640(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x000100072540();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar6;
    func_0x000100072360(puVar6,param_2,uVar14,uVar2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar6);
  }
  lVar7 = *(long *)(param_1 + 0x100);
  func_0x0001000713a0();
  if (lVar7 == 0) {
    puStack_80 = (undefined *)0x0;
    puStack_90 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
    func_0x000100073980();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar6;
    func_0x000100071c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
    func_0x000100073980();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x100);
    puVar9 = puStack_80;
    func_0x000100074180(puStack_80);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x000100071c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010006f900(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x000100071e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010006e640(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000100071c40();
    uVar12 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x000100071cc0();
    puStack_90 = puVar6;
    func_0x000100071ca0(puVar6,param_2,uVar14,puVar9,uVar2,uVar5,uVar8,uVar11,uVar13 & 0xff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar9);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1000d1dd8;
  _objc_alloc(PTR_PTR_1000d1dd8);
  uVar1 = param_3;
  func_0x000100072380();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070920(puVar6,param_2,param_3,uVar1);
  uVar2 = param_3;
  func_0x000100074120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000100074640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010006e320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010006eba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000705c0(param_1,param_2,puVar6,uVar2,uVar5,uVar8,uVar10,uVar11,uVar12,1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(puStack_90);
  _objc_release(puStack_80);
  _objc_release(puStack_78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000283a4; end: 10002874f; -[SCNotificationServiceExtDelegate initWithModifierProvider:systemScopedAppGroupUserDefaults:userScopedAppGroupUserDefaults:blizzardExtensionLogger:grapheneLogger:eventHolder:configs:supportsSuppression:tracker:decryptedPayloadInProcessingScope:processingScope:badgeOrchestrator:processedNotificationStorage:nativeAnnouncer:nativeHandler:] */

undefined8 *
FUN_1000283a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1000d2410;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSObject_1000d1de8;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar1[0x13] = 0;
    uVar2 = puVar1[0x11];
    puVar1[0x11] = 0;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    puVar1[0x16] = 0;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = 0;
    *(undefined1 *)(puVar1 + 0x19) = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[1];
    puVar1[1] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[4];
    puVar1[4] = param_15;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1c) = 0;
    puVar1[0x14] = 0;
    puVar3 = PTR__OBJC_CLASS___NSObject_1000d1de8;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 100028750; end: 100028a8f; -[SCNotificationServiceExtDelegate didReceiveNotificationRequest:withContentHandler:] */

void FUN_100028750(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x110);
  *(long *)(param_1 + 0x110) = lVar8;
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(lVar11);
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010006c1e0();
  *(char *)(param_1 + 0x120) = (char)lVar6;
  puVar2 = PTR_PTR_1000d1df0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070460();
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar10);
  _objc_release(puVar3);
  func_0x000100072660(*(undefined8 *)(param_1 + 0x60));
  uVar10 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  _objc_release(uVar4);
  _objc_retain(param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = param_3;
  _objc_release(uVar10);
  lVar6 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar6;
  _objc_release(uVar10);
  lVar6 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = lVar8;
  _objc_release(uVar10);
  _objc_release(lVar11);
  _objc_release(lVar6);
  lVar5 = *(long *)(param_1 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 4;
  lVar11 = lVar6;
  func_0x00010006ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar6 = lVar11;
  func_0x0001000713a0();
  if (lVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
    lVar8 = lVar11;
    func_0x00010006bec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_retain(puVar2);
    uVar10 = *(undefined8 *)(param_1 + 0x118);
    *(undefined **)(param_1 + 0x118) = puVar2;
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(0);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if ((lVar6 != 0) && (func_0x00010006ec20(), (int)lVar6 != 0)) {
    func_0x000100073b80(0x4024000000000000,PTR__OBJC_CLASS___NSThread_1000d1e00);
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    func_0x00010006c7e0(param_1);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    func_0x00010006d380(param_1);
  }
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  lVar6 = *(long *)(param_3 + 0xf8);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    func_0x00010006c600(param_3);
    goto LAB_100028d1c;
  }
  puVar2 = PTR__OBJC_CLASS___SCDisposableObserverLifecycle_1000d1d80;
  _objc_opt_new();
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puVar3 = puVar2;
  puStack_c8 = &uStack_d0;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar10 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_100028d60;
  puStack_108 = &UNK_1000a2258;
  lStack_100 = param_3;
  _objc_retain(lVar8);
  lStack_e0 = lVar8;
  puStack_d8 = &uStack_d0;
  _objc_retain(puVar3);
  puStack_f8 = puVar3;
  _objc_retain(puVar2);
  puStack_f0 = puVar2;
  _objc_retain(lVar6);
  lStack_e8 = lVar6;
  _dispatch_async(uVar10,&puStack_120);
  _objc_release(uVar10);
  uVar10 = 0;
  _dispatch_time(0,20000000000);
  puVar7 = puVar3;
  _dispatch_group_wait(puVar3,uVar10);
  func_0x00010006eea0(puVar2);
  if (puVar7 == (undefined *)0x0) {
    lVar11 = puStack_c8[3];
    if (lVar11 < 4) {
      if (1 < lVar11) {
        if (lVar11 == 2) {
          uVar10 = 1;
          lVar11 = 0xb0;
        }
        else {
          if (lVar11 != 3) goto LAB_100028ce0;
          lVar11 = param_3;
          func_0x00010006c960();
          uVar1 = (undefined1)lVar11;
          uVar10 = 0xd;
LAB_100028c5c:
          *(undefined1 *)(param_3 + 0xb8) = uVar1;
          lVar11 = 0xc0;
        }
        *(undefined8 *)(param_3 + lVar11) = uVar10;
        goto LAB_100028cc0;
      }
      if (lVar11 == 0) {
LAB_100028cd4:
        func_0x00010006c600(param_3);
      }
      else if (lVar11 == 1) goto LAB_100028cc0;
    }
    else if (lVar11 < 6) {
      if (lVar11 == 4) goto LAB_100028cc0;
      if (lVar11 == 5) {
        func_0x00010006c7e0(param_3);
        puVar7 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
        func_0x000100073980(PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100072700();
        _objc_release(puVar7);
      }
    }
    else if (lVar11 == 6) {
LAB_100028cc0:
      func_0x00010006c7e0(param_3);
    }
    else {
      if (lVar11 == 7) goto LAB_100028cd4;
      if (lVar11 == 8) {
        lVar11 = param_3;
        func_0x00010006c960();
        uVar1 = (undefined1)lVar11;
        uVar10 = 0xe;
        goto LAB_100028c5c;
      }
    }
  }
  else {
    func_0x0001000729c0(param_3);
  }
LAB_100028ce0:
  _objc_release(lStack_e8);
  _objc_release(puStack_f0);
  _objc_release(puStack_f8);
  _objc_release(lStack_e0);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(puVar2);
LAB_100028d1c:
  _objc_release(lVar6);
  _objc_release(lVar8);
  return;
}



/* Entry: 100028a90; end: 100028d5f; -[SCNotificationServiceExtDelegate _processUsingNativeWithContentHandler:] */

void FUN_100028a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0xf8);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010006c600(param_1);
    goto LAB_100028d1c;
  }
  puVar3 = PTR__OBJC_CLASS___SCDisposableObserverLifecycle_1000d1d80;
  _objc_opt_new();
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puVar4 = puVar3;
  puStack_68 = &uStack_70;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_100028d60;
  puStack_a8 = &UNK_1000a2258;
  lStack_a0 = param_1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  puStack_78 = &uStack_70;
  _objc_retain(puVar4);
  puStack_98 = puVar4;
  _objc_retain(puVar3);
  puStack_90 = puVar3;
  _objc_retain(lVar2);
  lStack_88 = lVar2;
  _dispatch_async(uVar5,&puStack_c0);
  _objc_release(uVar5);
  uVar5 = 0;
  _dispatch_time(0,20000000000);
  puVar6 = puVar4;
  _dispatch_group_wait(puVar4,uVar5);
  func_0x00010006eea0(puVar3);
  if (puVar6 == (undefined *)0x0) {
    lVar7 = puStack_68[3];
    if (lVar7 < 4) {
      if (1 < lVar7) {
        if (lVar7 == 2) {
          uVar5 = 1;
          lVar7 = 0xb0;
        }
        else {
          if (lVar7 != 3) goto LAB_100028ce0;
          lVar7 = param_1;
          func_0x00010006c960();
          uVar1 = (undefined1)lVar7;
          uVar5 = 0xd;
LAB_100028c5c:
          *(undefined1 *)(param_1 + 0xb8) = uVar1;
          lVar7 = 0xc0;
        }
        *(undefined8 *)(param_1 + lVar7) = uVar5;
        goto LAB_100028cc0;
      }
      if (lVar7 == 0) {
LAB_100028cd4:
        func_0x00010006c600(param_1);
      }
      else if (lVar7 == 1) goto LAB_100028cc0;
    }
    else if (lVar7 < 6) {
      if (lVar7 == 4) goto LAB_100028cc0;
      if (lVar7 == 5) {
        func_0x00010006c7e0(param_1);
        puVar6 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
        func_0x000100073980(PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100072700();
        _objc_release(puVar6);
      }
    }
    else if (lVar7 == 6) {
LAB_100028cc0:
      func_0x00010006c7e0(param_1);
    }
    else {
      if (lVar7 == 7) goto LAB_100028cd4;
      if (lVar7 == 8) {
        lVar7 = param_1;
        func_0x00010006c960();
        uVar1 = (undefined1)lVar7;
        uVar5 = 0xe;
        goto LAB_100028c5c;
      }
    }
  }
  else {
    func_0x0001000729c0(param_1);
  }
LAB_100028ce0:
  _objc_release(lStack_88);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar3);
LAB_100028d1c:
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 100028d60; end: 100028f27;  */

void FUN_100028d60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010006f7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar3 = uVar2;
  func_0x00010006f4c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010006f500();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar5 = uVar4;
  func_0x000100073f80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006e0e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100071da0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 100028f28; end: 100028ff7;  */

undefined8 FUN_100028f28(long param_1,undefined *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_alloc_init(PTR__OBJC_CLASS___UNNotificationContent_1000d1be8);
    (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
    uVar4 = 0;
  }
  else {
    puVar3 = param_2;
    func_0x000100071d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(lVar1 + 0x108);
    func_0x000100071100();
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 7;
    }
    else {
      uVar4 = 1;
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 100028ff8; end: 100029103;  */

void FUN_100028ff8(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 100029104; end: 100029c23; -[SCNotificationServiceExtDelegate _handleNotificationOnPlatform] */

void FUN_100029104(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  double dVar22;
  undefined8 uVar23;
  long lStack_4d0;
  undefined *puStack_470;
  undefined8 uStack_468;
  code *pcStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined1 uStack_308;
  undefined4 uStack_300;
  undefined1 auStack_2fc [144];
  long lStack_26c;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_1000a0110;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x000100071ea0();
  if (iVar1 != 0) {
    lVar13 = *(long *)(param_1 + 0x68);
    puVar3 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_alloc_init();
    (**(code **)(lVar13 + 0x10))(lVar13,puVar3);
    if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000a05d0)(puVar3);
      return;
    }
    goto LAB_100029c20;
  }
  func_0x000100072660(*(undefined8 *)(param_1 + 0x60));
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010006e920();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar15;
  _objc_release(uVar16);
  lVar13 = *(long *)(param_1 + 0x110);
  _objc_retain(lVar13);
  uVar15 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(uVar15);
  func_0x00010006cd80(param_1);
  func_0x0001000732e0(*(undefined8 *)(param_1 + 0x50));
  func_0x000100073320(*(undefined8 *)(param_1 + 0x50));
  func_0x000100072ac0(*(undefined8 *)(param_1 + 0x50));
  lVar2 = *(long *)(param_1 + 0x118);
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x0001000713a0();
  if (lVar4 != 0) {
    func_0x000100072be0(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    uStack_300 = 0x5d;
    iVar1 = *(int *)PTR__mach_task_self__1000a0240;
    _task_info(iVar1,0x17,auStack_2fc,&uStack_300);
    dVar22 = (double)lStack_26c * 9.5367431640625e-07;
    if (iVar1 != 0) {
      dVar22 = 0.0;
    }
    puVar3 = PTR__OBJC_CLASS___SCNotificationExtensionExecution_1000d1e08;
    _objc_alloc(PTR__OBJC_CLASS___SCNotificationExtensionExecution_1000d1e08);
    func_0x0001000706c0(dVar22);
    func_0x000100072f00(*(undefined8 *)(param_1 + 0xd0));
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1000d1e10;
  if (lVar4 == 0) {
LAB_100029aa0:
    func_0x00010006c600(param_1);
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x78);
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006eae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar16);
    if (lVar13 == 0) goto LAB_100029aa0;
    lVar5 = *(long *)(param_1 + 0x70);
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x000100071be0();
    _objc_release(lVar5);
    lVar5 = lVar4;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000100071be0();
    _objc_release(lVar5);
    func_0x00010006d7c0(param_1);
    func_0x00010006d7e0(param_1);
    lVar5 = param_1;
    func_0x00010006eb60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x0001000713a0();
    if (lVar7 != 0) {
      func_0x00010006dee0(param_1);
    }
    lVar7 = lVar6;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x00010006c2a0(param_1);
    }
    func_0x000100073800(lVar4);
    func_0x00010006d200(param_1);
    puVar3 = PTR__OBJC_CLASS___UNNotificationRequest_1000d1e18;
    uVar16 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010006fda0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x70);
    func_0x000100074340(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000726e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar3;
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar16;
    _objc_release(uVar17);
    lVar12 = param_1;
    func_0x00010006c960();
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010006f780();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar16;
    _objc_release(uVar17);
    lVar8 = *(long *)(param_1 + 0x10);
    func_0x00010006f8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 8);
    func_0x00010006e4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x000100072120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    if ((lVar10 == 0) || (lVar9 = lVar10, func_0x00010006fae0(), (int)lVar9 == 0)) {
      lStack_4d0 = 0;
    }
    else {
      lStack_4d0 = *(long *)(param_1 + 0x10);
      lVar9 = lVar10;
      func_0x00010006f340(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006f820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    lVar9 = *(long *)(param_1 + 0x10);
    func_0x00010006f680();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + 0x60);
    func_0x000100072660();
    _dispatch_group_create();
    puVar3 = PTR___NSConcreteStackBlock_1000a00f0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010006e920();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_group_enter(lVar11);
      uVar17 = 2;
      _dispatch_get_global_queue(2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_348 = puVar3;
      uStack_340 = 0xc2000000;
      pcStack_338 = FUN_100029c24;
      puStack_330 = &UNK_1000a22e8;
      lStack_328 = param_1;
      uStack_320 = uVar16;
      _objc_retain(lVar13);
      lStack_318 = lVar13;
      _objc_retain(lVar11);
      uStack_308 = (undefined1)lVar12;
      lStack_310 = lVar11;
      _objc_retain(uVar16);
      _dispatch_async(uVar17,&puStack_348);
      _objc_release(uVar17);
      _objc_release(lStack_310);
      _objc_release(lStack_318);
      _objc_release(uStack_320);
      _objc_release(uVar16);
    }
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    _objc_retain(lVar8);
    lVar12 = lVar8;
    func_0x00010006e860();
    if (lVar12 != 0) {
      lVar14 = *plStack_380;
      do {
        lVar21 = 0;
        do {
          if (*plStack_380 != lVar14) {
            _objc_enumerationMutation(lVar8);
          }
          uVar18 = *(undefined8 *)(lStack_388 + lVar21 * 8);
          _dispatch_group_enter(lVar11);
          uVar17 = 0;
          _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          puStack_3d0 = PTR___NSConcreteStackBlock_1000a00f0;
          uStack_3c8 = 0xc2000000;
          pcStack_3c0 = FUN_100029ecc;
          puStack_3b8 = &UNK_1000a2318;
          uStack_3b0 = uVar18;
          lStack_3a8 = param_1;
          _objc_retain(uVar16);
          uStack_3a0 = uVar16;
          _objc_retain(lVar11);
          lStack_398 = lVar11;
          _dispatch_async(uVar17,&puStack_3d0);
          _objc_release(uVar17);
          _objc_release(lStack_398);
          _objc_release(uStack_3a0);
          lVar21 = lVar21 + 1;
        } while (lVar12 != lVar21);
        lVar12 = lVar8;
        func_0x00010006e860();
      } while (lVar12 != 0);
    }
    _objc_release(lVar8);
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    lStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    plStack_400 = (long *)0x0;
    _objc_retain(lStack_4d0);
    lVar12 = lStack_4d0;
    func_0x00010006e860();
    if (lVar12 != 0) {
      lVar14 = *plStack_400;
      do {
        lVar21 = 0;
        do {
          if (*plStack_400 != lVar14) {
            _objc_enumerationMutation(lStack_4d0);
          }
          uVar20 = *(undefined8 *)(lStack_408 + lVar21 * 8);
          uVar18 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010006e920();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar20;
          func_0x00010006fda0();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_group_enter(lVar11);
          uVar19 = 0;
          _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          puStack_470 = PTR___NSConcreteStackBlock_1000a00f0;
          uStack_468 = 0xc2000000;
          pcStack_460 = FUN_100029fdc;
          puStack_458 = &UNK_1000a2378;
          uStack_450 = uVar20;
          _objc_retain(lVar10);
          lStack_448 = lVar10;
          _objc_retain(lVar13);
          lStack_440 = lVar13;
          _objc_retain(uVar15);
          uStack_438 = uVar15;
          lStack_430 = param_1;
          uStack_428 = uVar18;
          uStack_420 = uVar17;
          _objc_retain(lVar11);
          lStack_418 = lVar11;
          _objc_retain(uVar17);
          _objc_retain(uVar18);
          _dispatch_async(uVar19,&puStack_470);
          _objc_release(uVar19);
          _objc_release(lStack_418);
          _objc_release(uStack_420);
          _objc_release(uStack_428);
          _objc_release(uStack_438);
          _objc_release(lStack_440);
          _objc_release(lStack_448);
          _objc_release(uVar17);
          _objc_release(uVar18);
          lVar21 = lVar21 + 1;
        } while (lVar12 != lVar21);
        lVar12 = lStack_4d0;
        func_0x00010006e860();
      } while (lVar12 != 0);
    }
    _objc_release(lStack_4d0);
    if (lVar9 != 0) {
      func_0x00010006e840();
    }
    func_0x000100072b60(*(undefined8 *)(param_1 + 0x50));
    func_0x000100072b40(*(undefined8 *)(param_1 + 0x50));
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_group_enter(lVar11);
    uVar18 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar17);
    _objc_retain(lVar11);
    func_0x000100074500(uVar18);
    lVar12 = *(long *)(param_1 + 0x40);
    func_0x000100071ba0();
    if (lVar12 == 0) {
      lVar12 = 24000000000;
    }
    else {
      lVar12 = *(long *)(param_1 + 0x40);
      func_0x000100071ba0(lVar12);
      lVar12 = lVar12 * 1000000000;
    }
    uVar18 = 0;
    _dispatch_time(0,lVar12);
    lVar12 = lVar11;
    _dispatch_group_wait(lVar11,uVar18);
    func_0x000100072660(*(undefined8 *)(param_1 + 0x60));
    if (lVar12 == 0) {
      func_0x00010006ccc0(param_1);
      func_0x00010006cbc0(param_1);
      if (*(long *)(param_1 + 0x88) != 0) {
        uVar18 = *(undefined8 *)(param_1 + 0x78);
        func_0x000100071be0();
        func_0x000100072b20();
        func_0x000100072b40(*(undefined8 *)(param_1 + 0x50));
        uVar19 = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = uVar18;
        _objc_release(uVar19);
      }
      func_0x00010006c5a0(param_1);
    }
    else {
      func_0x0001000729c0(param_1);
    }
    _objc_release(lVar11);
    _objc_release(uVar17);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(lStack_4d0);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(uVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_88) {
    return;
  }
LAB_100029c20:
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x18);
  puVar3 = PTR__OBJC_CLASS___SCNotifExtModifierCallback_1000d1d70;
  _objc_alloc(PTR__OBJC_CLASS___SCNotifExtModifierCallback_1000d1d70);
  uVar20 = *(undefined8 *)(lVar13 + 0x28);
  _objc_retain(*(undefined8 *)(lVar13 + 0x28));
  uVar16 = *(undefined8 *)(lVar13 + 0x30);
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(lVar13 + 0x38);
  _objc_retain(uVar17);
  uVar23 = *(undefined8 *)(lVar13 + 0x28);
  _objc_retain(*(undefined8 *)(lVar13 + 0x28));
  uVar18 = *(undefined8 *)(lVar13 + 0x30);
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(lVar13 + 0x38);
  _objc_retain(uVar19);
  func_0x000100070c80(puVar3);
  func_0x00010006ed60(uVar15);
  _objc_release(puVar3);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar20);
  return;
}



/* Entry: 100029c24; end: 100029d9b;  */

void FUN_100029c24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  puVar2 = PTR__OBJC_CLASS___SCNotifExtModifierCallback_1000d1d70;
  _objc_alloc(PTR__OBJC_CLASS___SCNotifExtModifierCallback_1000d1d70);
  puVar1 = PTR___NSConcreteStackBlock_1000a00f0;
  puStack_90 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100029d9c;
  puStack_78 = &UNK_1000a2288;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar6;
  uStack_68 = uVar7;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar5;
  _objc_retain(uVar6);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x100029e58;
  puStack_c0 = &UNK_1000a22b8;
  uStack_98 = *(undefined1 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar6;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar7;
  uStack_b0 = uVar8;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar5;
  _objc_retain(uVar6);
  uStack_a0 = uVar6;
  func_0x000100070c80(puVar2,param_2,&puStack_90,&puStack_d8);
  func_0x00010006ed60(uVar3,param_2,uVar4,puVar2,*(undefined1 *)(param_1 + 0x40));
  _objc_release(puVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  return;
}



/* Entry: 100029d9c; end: 100029e1f;  */

void FUN_100029d9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xe0) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010006d840(uVar1);
  func_0x00010006cd20(uVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 100029e20; end: 100029ecb;  */

void FUN_100029e20(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010006bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000a05d8)(*(undefined8 *)(param_2 + 0x38));
  return;
}



/* Entry: 100029ecc; end: 100029f6f;  */

void FUN_100029ecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lStack_48 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lStack_48 + 0x70);
  puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100029f70;
  puStack_50 = &UNK_1000a1f88;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar4;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010006ed20(uVar1,param_2,uVar3,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 100029f70; end: 100029fdb;  */

void FUN_100029f70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010006d840(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0) = uVar1;
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_1000a0178)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100029fdc; end: 10002a0c3;  */

void FUN_100029fdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puStack_88 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10002a0c4;
  puStack_70 = &UNK_1000a2348;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(*(undefined8 *)(param_1 + 0x48));
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar6;
  _objc_retain(uVar5);
  uStack_48 = uVar5;
  func_0x00010006f9c0(uVar1,param_2,uVar3,uVar2,uVar4,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  return;
}



/* Entry: 10002a0c4; end: 10002a243;  */

void FUN_10002a0c4(long param_1,undefined8 param_2)

{
  func_0x00010006d840(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010006ce20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010006ce40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_1000a0178)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10002a244; end: 10002a2ab;  */

void FUN_10002a244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010006d840();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98) = uVar1;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 10002a2ac; end: 10002a3d7; -[SCNotificationServiceExtDelegate serviceExtensionTimeWillExpire] */

void FUN_10002a2ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar3);
    uVar2 = uVar3;
    if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      func_0x00010006e080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010006e080(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
    }
    func_0x000100072f40(*(undefined8 *)(param_1 + 0x50),param_2,1);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x00010006e800();
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
    uVar3 = uVar2;
    if (lVar1 != 0) {
      func_0x000100071be0(uVar2);
      func_0x000100072b20();
      func_0x000100072b40(*(undefined8 *)(param_1 + 0x50),param_2,1);
      _objc_release(uVar2);
    }
    func_0x00010006c5a0(param_1,param_2,uVar3,1,0);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10002a3d8; end: 10002a43f; -[SCNotificationServiceExtDelegate _mutateContentWithClientGeneratedCustomAction:] */

void FUN_10002a3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28;
  if (*(long *)(param_1 + 0xb0) == 1) {
    _objc_retain(param_3);
    func_0x0001000741c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072c00(param_3,param_2,puVar1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10002a440; end: 10002a4c7; -[SCNotificationServiceExtDelegate _tagRequestWithNotificationKey:] */

void FUN_10002a440(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  _SCParseNotificationKey();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a4368);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != lVar1) {
    func_0x000100073360(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_1000a4368);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10002a4c8; end: 10002a527; -[SCNotificationServiceExtDelegate _tagRequestWithProcessedByExtensionTime:] */

void FUN_10002a4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010006e920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073360(param_3,param_2,uVar1,
                      *(undefined8 *)PTR__SCPushNotificationTimeOfNseProcessingKey_1000a0498);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 10002a528; end: 10002a56f; -[SCNotificationServiceExtDelegate _appIsInForeground] */

undefined8 FUN_10002a528(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010006e360();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10002a570; end: 10002aa7f; -[SCNotificationServiceExtDelegate _finish:timedOut:reportToGrapheneOverride:] */

void FUN_10002a570(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  int param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x0001000725e0(*(undefined8 *)(param_2 + 0xd0));
  lVar2 = *(long *)(param_2 + 0xf8);
  if ((lVar2 != 0) && ((*(byte *)(param_2 + 0x120) & 1) == 0)) {
    cVar1 = *(char *)(param_2 + 0xb8);
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      func_0x000100071dc0(lVar2);
    }
    else {
      func_0x000100071d60(lVar2);
    }
    _objc_release(lVar2);
  }
  lVar3 = *(long *)(param_2 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar5 = *(long *)(param_2 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (((((*(byte *)(param_2 + 0xb8) & 1) == 0) && (*(long *)(param_2 + 0x108) != 0)) && (lVar2 != 0)
      ) && (lVar3 != 0)) {
    puVar4 = PTR__OBJC_CLASS___SCProcessedNotification_1000d1e30;
    _objc_alloc();
    func_0x000100071040(lVar3);
    func_0x0001000706a0();
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010006e920(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0xe8);
    func_0x000100074180(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073d80(uVar7);
    _objc_retain(0);
    _objc_release(puVar8);
    _objc_release(uVar7);
    func_0x00010006cdc0(param_2);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(0);
  }
  func_0x000100072f40(*(undefined8 *)(param_2 + 0x50));
  if ((param_5 & 1) == 0) {
    func_0x000100072660(*(undefined8 *)(param_2 + 0x60));
    if (param_6 == 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x78);
      func_0x000100074620(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006d680(param_2);
      func_0x00010006c620(param_2);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
    else {
      func_0x00010006c620(param_2);
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010006e920();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074260();
  func_0x000100072f20(*(undefined8 *)(param_2 + 0x50));
  func_0x00010006cd00(param_2);
  if (0 < (long)(param_1 * 1000.0)) {
    func_0x00010006d4a0(param_2);
  }
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    func_0x000100073300(*(undefined8 *)(param_2 + 0x50));
  }
  lVar5 = param_2;
  func_0x00010006d6a0();
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010006f2e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010006dec0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010006ec60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1000d1e10;
  lVar11 = param_4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010006eae0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  if ((int)lVar5 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    func_0x00010006f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5;
    func_0x000100071700(uVar7);
    _objc_release(lVar5);
    func_0x00010006f560(*(undefined8 *)(param_2 + 0x48));
  }
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    lVar12 = *(long *)(param_2 + 0xc0);
    if (lVar12 == 9) {
      func_0x000100073ea0(PTR__OBJC_CLASS___SCNotificationSuppressionReasonHelper_1000d1e20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR__OBJC_CLASS___UNMutableNotificationContent_1000d1e38;
      _objc_alloc_init();
      lVar12 = *(long *)(param_2 + 0x88);
      func_0x000100072b20();
      lVar5 = *(long *)(param_2 + 0x68);
      puVar8 = puVar4;
      func_0x00010006e800();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar8);
      _objc_release(puVar8);
    }
    else {
      func_0x000100073ea0(PTR__OBJC_CLASS___SCNotificationSuppressionReasonHelper_1000d1e20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar5 = *(long *)(param_2 + 0x68);
      puVar4 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
      _objc_alloc_init();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
    }
    _objc_release(puVar4);
  }
  else {
    (**(code **)(*(long *)(param_2 + 0x68) + 0x10))(*(long *)(param_2 + 0x68),param_4);
  }
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(param_4 + 200) == '\x01') {
    *(undefined1 *)(param_4 + 0xb8) = 1;
    *(undefined8 *)(param_4 + 0xc0) = 3;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x78);
  _objc_retain(lVar12);
  FUN_100021ee4();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + 0x78);
  *(undefined8 *)(param_4 + 0x78) = uVar6;
  _objc_release(uVar7);
  func_0x0001000734c0(*(undefined8 *)(param_4 + 0x50));
  func_0x000100073420(*(undefined8 *)(param_4 + 0x50));
  uVar7 = *(undefined8 *)(param_4 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006cae0(param_4);
  _objc_release(lVar12);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010006c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_4,PTR_s__finish_timedOut_reportToGraphen_1000cf960,
             *(undefined8 *)(param_4 + 0x78),0,1);
  return;
}



/* Entry: 10002aa80; end: 10002aba3; -[SCNotificationServiceExtDelegate _finishWithError:timedOut:] */

void FUN_10002aa80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(undefined8 *)(param_1 + 0xc0) = 3;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  FUN_100021ee4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  _objc_release(uVar2);
  func_0x0001000734c0(*(undefined8 *)(param_1 + 0x50));
  func_0x000100073420(*(undefined8 *)(param_1 + 0x50));
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006cae0(param_1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s__finish_timedOut_reportToGraphen_1000cf960,
             *(undefined8 *)(param_1 + 0x78),0,1);
  return;
}



/* Entry: 10002aba4; end: 10002ac7f; -[SCNotificationServiceExtDelegate _shouldReportToBlizzard] */

bool FUN_10002aba4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    bVar5 = false;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x50);
    func_0x000100072680();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x78);
      func_0x000100074620(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar4 = *(long *)(param_1 + 0x78);
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      bVar5 = *(long *)(param_1 + 0x118) != 0 && (lVar2 != 0 && lVar3 != 0);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    else {
      bVar5 = true;
    }
  }
  return bVar5;
}



/* Entry: 10002ac80; end: 10002adeb; -[SCNotificationServiceExtDelegate _isSuppressionEnabled] */

uint FUN_10002ac80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x78);
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010006e380();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  FUN_100022df0(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,*(undefined1 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,*(undefined1 *)(param_1 + 0x120))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar9 = 0;
  if ((*(char *)(param_1 + 200) == '\x01') && ((uVar10 & 1) == 0)) {
    uVar9 = *(byte *)(param_1 + 0x120) ^ 1 | (uint)uVar5;
  }
  return uVar9 & 1;
}



/* Entry: 10002adec; end: 10002aec7; -[SCNotificationServiceExtDelegate _saveNotifExtensionBGRunningTime:] */

void FUN_10002adec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071020();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073000();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071020();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073000();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 10002aec8; end: 10002b0f7; -[SCNotificationServiceExtDelegate attachDecryptedPayloadToProcessingScope:] */

/* WARNING: Removing unreachable block (ram,0x00010002b214) */

void FUN_10002aec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  func_0x00010006ea00(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
  func_0x00010006bec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010006eac0(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_retain(puVar1);
  puVar12 = puVar1;
  func_0x00010006e860();
  lVar5 = lRam0000000000000000;
  while (puVar12 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar1);
      }
      uVar11 = *(undefined8 *)((long)puVar10 * 8);
      puVar2 = puVar1;
      func_0x000100072040();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar3);
      puVar3 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x0001000713a0();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010006eac0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        func_0x0001000713a0(puVar3);
        func_0x000100071fa0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar11);
        func_0x000100073340(*(undefined8 *)(param_1 + 0xd8));
      }
      _objc_release(puVar3);
      puVar10 = puVar10 + 1;
    } while (puVar12 != puVar10);
    puVar12 = puVar1;
    func_0x00010006e860();
  }
  _objc_release(puVar1);
  lVar5 = 0;
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar9) {
    ___stack_chk_fail();
    uVar11 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010006e920(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(lVar5 + 0x70);
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar6);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x0001000713a0(lVar7);
    func_0x000100071fa0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar9 = lVar7;
    func_0x0001000713a0();
    if (lVar9 == 0) {
      func_0x000100072dc0(*(undefined8 *)(lVar5 + 0x50));
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar9 = lVar7;
      func_0x00010006ea00(lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
      func_0x00010006bec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      func_0x00010006eac0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar10 = puVar1;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      func_0x0001000713a0();
      func_0x000100071fa0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar12 = puVar10;
      func_0x0001000713a0();
      if (puVar12 == (undefined *)0x0) {
        func_0x000100072dc0(*(undefined8 *)(lVar5 + 0x50));
        uVar13 = *(undefined8 *)(lVar5 + 0x50);
        func_0x00010006d840(lVar5);
        func_0x000100072de0(uVar13);
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar1;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x000100071100();
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000100072dc0(*(undefined8 *)(lVar5 + 0x50));
          uVar13 = *(undefined8 *)(lVar5 + 0x50);
          func_0x00010006d840(lVar5);
          func_0x000100072de0(uVar13);
          puVar12 = (undefined *)0x0;
        }
        else {
          lVar6 = lVar5;
          func_0x000100072740();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
          func_0x0001000713a0();
          func_0x000100071fa0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lVar8 = lVar6;
          func_0x0001000713a0();
          if (lVar8 == 0) {
            func_0x000100072dc0(*(undefined8 *)(lVar5 + 0x50));
            uVar13 = *(undefined8 *)(lVar5 + 0x50);
            func_0x00010006d840(lVar5);
            func_0x000100072de0(uVar13);
            puVar12 = (undefined *)0x0;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSData_1000d1e40;
            func_0x00010006ea20();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar6;
            _SCAES128GCMDecrypt(lVar6,puVar2,0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
            _objc_alloc();
            func_0x000100070260();
            puVar12 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
            func_0x0001000713a0();
            func_0x000100071fa0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar12 = puVar4;
            func_0x0001000713a0();
            if (puVar12 == (undefined *)0x0) {
              func_0x000100072dc0(*(undefined8 *)(lVar5 + 0x50));
              uVar13 = *(undefined8 *)(lVar5 + 0x50);
              func_0x00010006d840(lVar5);
              func_0x000100072de0(uVar13);
              puVar12 = (undefined *)0x0;
            }
            else {
              func_0x000100072dc0(*(undefined8 *)(lVar5 + 0x50));
              uVar13 = *(undefined8 *)(lVar5 + 0x50);
              func_0x00010006d840(lVar5);
              func_0x000100072de0(uVar13);
              _objc_retain(puVar4);
              puVar12 = puVar4;
            }
            _objc_release(puVar4);
            _objc_release(lVar8);
            _objc_release(puVar2);
          }
          _objc_release(lVar6);
        }
        _objc_release(puVar3);
      }
      _objc_release(puVar10);
      _objc_release(puVar1);
      _objc_release(lVar9);
      _objc_release(0);
    }
    _objc_release(lVar7);
    _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar12);
    return;
  }
  return;
}



/* Entry: 10002b0f8; end: 10002b50f; -[SCNotificationServiceExtDelegate decryptPayload] */

/* WARNING: Removing unreachable block (ram,0x00010002b214) */

void FUN_10002b0f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010006e920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x0001000713a0(lVar4);
  func_0x000100071fa0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = lVar4;
  func_0x0001000713a0();
  if (lVar3 == 0) {
    func_0x000100072dc0(*(undefined8 *)(param_1 + 0x50));
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar4;
    func_0x00010006ea00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
    func_0x00010006bec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    func_0x00010006eac0(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = puVar5;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x0001000713a0();
    func_0x000100071fa0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar11 = puVar6;
    func_0x0001000713a0();
    if (puVar11 == (undefined *)0x0) {
      func_0x000100072dc0(*(undefined8 *)(param_1 + 0x50));
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010006d840(param_1);
      func_0x000100072de0(uVar12);
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar5;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x000100071100();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000100072dc0(*(undefined8 *)(param_1 + 0x50));
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010006d840(param_1);
        func_0x000100072de0(uVar12);
        puVar11 = (undefined *)0x0;
      }
      else {
        lVar2 = param_1;
        func_0x000100072740();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        func_0x0001000713a0();
        func_0x000100071fa0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar8 = lVar2;
        func_0x0001000713a0();
        if (lVar8 == 0) {
          func_0x000100072dc0(*(undefined8 *)(param_1 + 0x50));
          uVar12 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010006d840(param_1);
          func_0x000100072de0(uVar12);
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar9 = PTR__OBJC_CLASS___NSData_1000d1e40;
          func_0x00010006ea20();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar2;
          _SCAES128GCMDecrypt(lVar2,puVar9,0);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSString_1000d1d68;
          _objc_alloc();
          func_0x000100070260();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
          func_0x0001000713a0();
          func_0x000100071fa0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar11 = puVar10;
          func_0x0001000713a0();
          if (puVar11 == (undefined *)0x0) {
            func_0x000100072dc0(*(undefined8 *)(param_1 + 0x50));
            uVar12 = *(undefined8 *)(param_1 + 0x50);
            func_0x00010006d840(param_1);
            func_0x000100072de0(uVar12);
            puVar11 = (undefined *)0x0;
          }
          else {
            func_0x000100072dc0(*(undefined8 *)(param_1 + 0x50));
            uVar12 = *(undefined8 *)(param_1 + 0x50);
            func_0x00010006d840(param_1);
            func_0x000100072de0(uVar12);
            _objc_retain(puVar10);
            puVar11 = puVar10;
          }
          _objc_release(puVar10);
          _objc_release(lVar8);
          _objc_release(puVar9);
        }
        _objc_release(lVar2);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(0);
  }
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar11);
  return;
}



/* Entry: 10002b510; end: 10002b777; -[SCNotificationServiceExtDelegate _attachClientPayloadToProcessingScope:notificationType:mutableUserInfo:] */

void FUN_10002b510(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuVar7 = param_4;
  }
  _objc_retain(ppuVar7);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070720();
  _objc_release(puVar2);
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
  puVar2 = param_3;
  FUN_100068c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  FUN_100068e90();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_100068d7c();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar4 == (undefined *)0x0) || (puVar3 != (undefined *)0x0)) {
    puVar6 = PTR__OBJC_CLASS___SCOptional_1000d1e48;
    func_0x000100071ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072c60(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar6);
    puVar6 = puVar3;
    ppuVar11 = ppuVar7;
    func_0x00010006cde0(param_1);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___SCOptional_1000d1e48;
    func_0x000100073be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072c60(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar6);
    puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
    func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070720();
    _objc_release(puVar1);
    _objc_release(puVar6);
    ppuVar11 = (undefined **)0x1;
    puVar6 = puVar5;
    func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
    puVar1 = puVar5;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar6);
  _objc_retain(ppuVar11);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1000d1d68;
  ppuVar13 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (puVar6 != (undefined *)0x0) {
    func_0x00010006e500();
    func_0x000100072860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar8;
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    _objc_release(ppuVar13);
  }
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(ppuVar7[0xb]);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar6 + 0x58) != 0) {
    uVar9 = *(undefined8 *)(puVar6 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar14 = *(undefined8 *)(puVar6 + 0x58);
    _objc_retain(uVar10);
    func_0x00010006f580(uVar14);
    lVar12 = *(long *)(puVar6 + 0x40);
    func_0x00010006f920();
    if (lVar12 == 0) {
      lVar12 = 3000000000;
    }
    else {
      lVar12 = *(long *)(puVar6 + 0x40);
      func_0x00010006f920(lVar12);
      lVar12 = lVar12 * 1000000000;
    }
    uVar14 = 0;
    _dispatch_time(0,lVar12);
    _dispatch_group_wait(uVar10,uVar14);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006d840(puVar6);
    func_0x000100071f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar10);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  return;
}



/* Entry: 10002b778; end: 10002b8e3; -[SCNotificationServiceExtDelegate _logSDNParsingError:notificationType:] */

void FUN_10002b778(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1000d1d68;
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_3 != 0) {
    func_0x00010006e500();
    func_0x000100072860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    _objc_release(ppuVar7);
  }
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x58) != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _objc_retain(uVar5);
    func_0x00010006f580(uVar8);
    lVar6 = *(long *)(param_3 + 0x40);
    func_0x00010006f920();
    if (lVar6 == 0) {
      lVar6 = 3000000000;
    }
    else {
      lVar6 = *(long *)(param_3 + 0x40);
      func_0x00010006f920(lVar6);
      lVar6 = lVar6 * 1000000000;
    }
    uVar8 = 0;
    _dispatch_time(0,lVar6);
    _dispatch_group_wait(uVar5,uVar8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006d840(param_3);
    func_0x000100071f80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 10002b8e4; end: 10002ba13; -[SCNotificationServiceExtDelegate _flushGrapheneMetrics:] */

void FUN_10002b8e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar3);
    func_0x00010006f580(uVar5);
    lVar4 = *(long *)(param_1 + 0x40);
    func_0x00010006f920();
    if (lVar4 == 0) {
      lVar4 = 3000000000;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x40);
      func_0x00010006f920(lVar4);
      lVar4 = lVar4 * 1000000000;
    }
    uVar5 = 0;
    _dispatch_time(0,lVar4);
    _dispatch_group_wait(uVar3,uVar5);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006d840(param_1);
    func_0x000100071f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10002ba14; end: 10002ba1b;  */

void FUN_10002ba14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_1000a0178)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10002ba1c; end: 10002ba2f; -[SCNotificationServiceExtDelegate retrieveEncryptionKey] */

void FUN_10002ba1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___SCKeychainManager_1000d1e50,PTR_s_dataForKey__1000d0270,
             &PTR____CFConstantStringClassReference_1000a42e8);
  return;
}



/* Entry: 10002ba30; end: 10002baa3; -[SCNotificationServiceExtDelegate _timeInMsSinceDate:] */

long FUN_10002ba30(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_4);
  func_0x00010006e920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074260();
  _objc_release(param_4);
  _objc_release(uVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 10002baa4; end: 10002bbc3; -[SCNotificationServiceExtDelegate _logGrapheneIsTimedOut:notificationType:] */

undefined * FUN_10002baa4(long param_1,undefined8 param_2,int param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  long lStack_408;
  undefined *puStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 **ppuStack_3d0;
  code *pcStack_3c8;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined **ppuStack_308;
  undefined8 **ppuStack_300;
  code *pcStack_2f8;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_48 = param_4;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (param_3 == 0) {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar10 = (undefined **)0x1;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58),param_2,puVar7);
  _objc_release(param_4);
  _objc_release(puVar7);
  puVar1 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_68 = FUN_10002bbc4;
  lStack_98 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_a0 = ppuVar10;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_1000a41a8;
  puStack_90 = puVar7;
  puStack_88 = puVar17;
  lStack_80 = param_1;
  ppuStack_78 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_a0,&ppuStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar11 = (undefined **)0x1;
  puVar7 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_98) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_b8 = FUN_10002bcc0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_100 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_100 = ppuVar11;
  }
  ppuStack_108 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_c0 = &puStack_70;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_100,&ppuStack_108,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar10 = &PTR____CFConstantStringClassReference_1000a4728;
  puVar5 = puVar17;
  func_0x000100070720();
  iVar14 = (int)puVar5;
  puVar5 = puVar1;
  func_0x00010006db80((double)(long)puVar7,*(undefined8 *)(puVar2 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_f8) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_118 = FUN_10002bdc8;
  lStack_158 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_170 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_170 = ppuVar10;
  }
  ppuStack_188 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_168 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_168 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_178 = &PTR____CFConstantStringClassReference_1000a4748;
  ppuStack_160 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar14 == 0) {
    ppuStack_160 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  ppuStack_120 = &ppuStack_c0;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar7,param_2,&ppuStack_170,&ppuStack_188,3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a47a8;
  func_0x000100070720();
  puVar2 = puVar1;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_158) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_198 = FUN_10002bf20;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_1e8 = ppuVar11;
  }
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar7[0x120] == '\0') {
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_1a0 = &ppuStack_120;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_1e8,&ppuStack_1f8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar10 = &PTR____CFConstantStringClassReference_1000a47c8;
  puVar4 = puVar17;
  func_0x000100070720();
  puVar5 = puVar1;
  func_0x00010006db80((double)(long)puVar2,*(undefined8 *)(puVar7 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_1d8) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_208 = FUN_10002c050;
  lStack_248 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_268 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_260 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_258 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_258 = ppuVar10;
  }
  puStack_250 = puVar4;
  ppuStack_210 = &ppuStack_1a0;
  _objc_retain(puVar4);
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar7,param_2,&ppuStack_258,&ppuStack_268,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a4808;
  puVar15 = puVar7;
  func_0x000100070720();
  puVar2 = puVar1;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar17 + 0x58));
  iVar14 = (int)puVar2;
  _objc_release(puVar4);
  _objc_release(ppuVar10);
  _objc_release(puVar1);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_248) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_278 = FUN_10002c178;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_2d0 = ppuVar11;
  }
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar14 == 0) {
    ppuStack_2c0 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_2c8 = puVar15;
  puStack_2b0 = puVar1;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar17;
  puStack_298 = puVar5;
  puStack_290 = puVar4;
  ppuStack_288 = ppuVar10;
  ppuStack_280 = &ppuStack_210;
  _objc_retain(puVar15);
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar3,param_2,&ppuStack_2d0,&ppuStack_2e8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar10 = (undefined **)0x1;
  puVar5 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x58));
  _objc_release(puVar15);
  _objc_release(ppuVar11);
  _objc_release(puVar17);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_2b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_2f8 = FUN_10002c2c0;
  lStack_338 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_348 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_348 = ppuVar10;
  }
  ppuStack_358 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_350 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_340 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar7[0x120] == '\0') {
    ppuStack_340 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_330 = puVar1;
  puStack_328 = puVar17;
  puStack_320 = puVar3;
  puStack_318 = puVar2;
  puStack_310 = puVar15;
  ppuStack_308 = ppuVar11;
  ppuStack_300 = &ppuStack_280;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_348,&ppuStack_358,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar8 = ppuVar11;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar7 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(ppuVar11);
  puVar17 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_338) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_368 = FUN_10002c3f0;
  lStack_398 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_3a8 = ppuVar8;
  }
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_3a0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_390 = puVar4;
  puStack_388 = puVar7;
  puStack_380 = puVar5;
  ppuStack_378 = ppuVar10;
  ppuStack_370 = &ppuStack_300;
  _objc_retain(ppuVar8);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_3a8,&ppuStack_3b8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar7 = puVar2;
  func_0x000100070720();
  iVar14 = (int)puVar7;
  ppuVar12 = (undefined **)0x1;
  ppuVar9 = ppuVar10;
  func_0x00010006ff00(*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar8);
  _objc_release(ppuVar10);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_398) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_3c8 = FUN_10002c514;
  lStack_408 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_420 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_420 = ppuVar9;
  }
  ppuStack_438 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_430 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_418 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_418 = ppuVar12;
  }
  ppuStack_428 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_410 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar14 == 0) {
    ppuStack_410 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  puStack_400 = puVar1;
  ppuStack_3f8 = ppuVar11;
  ppuStack_3f0 = ppuVar10;
  puStack_3e8 = puVar2;
  puStack_3e0 = puVar17;
  ppuStack_3d8 = ppuVar8;
  ppuStack_3d0 = &ppuStack_370;
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar9);
  func_0x00010006ecc0(puVar5,param_2,&ppuStack_420,&ppuStack_438,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar13 = 1;
  puVar1 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar7 + 0x58),param_2,puVar17,1);
  _objc_release(ppuVar12);
  _objc_release(ppuVar9);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_408) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  uVar16 = *(ulong *)(puVar5 + 0x40);
  _objc_retain(uVar13);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010006e6e0();
  _objc_release(uVar13);
  if ((uVar6 & 1) == 0) {
    puVar7 = *(undefined **)(puVar5 + 0x40);
    func_0x000100071e20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    func_0x00010006e6e0();
    _objc_release(puVar7);
  }
  else {
    puVar17 = (undefined *)0x1;
  }
  _objc_release(uVar16);
  _objc_release(puVar1);
  return puVar17;
}



/* Entry: 10002bbc4; end: 10002bcbf; -[SCNotificationServiceExtDelegate _logGrapheneOutOfBoundLatency:notificationType:] */

undefined * FUN_10002bbc4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 **ppuStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined8 **ppuStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined8 **ppuStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_40 = param_4;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a41a8;
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar10 = (undefined **)0x1;
  puVar2 = puVar7;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_58 = FUN_10002bcc0;
  lStack_98 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_a0 = ppuVar10;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_1000a41a8;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar7,param_2,&ppuStack_a0,&ppuStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a4728;
  puVar5 = puVar7;
  func_0x000100070720();
  iVar14 = (int)puVar5;
  puVar5 = puVar1;
  func_0x00010006db80((double)(long)puVar2,*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_98) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_b8 = FUN_10002bdc8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_110 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_110 = ppuVar11;
  }
  ppuStack_128 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar7[0x120] == '\0') {
    ppuStack_108 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_1000a4748;
  ppuStack_100 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar14 == 0) {
    ppuStack_100 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  ppuStack_c0 = &puStack_60;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_110,&ppuStack_128,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar10 = &PTR____CFConstantStringClassReference_1000a47a8;
  func_0x000100070720();
  puVar1 = puVar2;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar7 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_f8) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_138 = FUN_10002bf20;
  lStack_178 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_188 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_188 = ppuVar10;
  }
  ppuStack_198 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_190 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_180 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_140 = &ppuStack_c0;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar7,param_2,&ppuStack_188,&ppuStack_198,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a47c8;
  puVar4 = puVar7;
  func_0x000100070720();
  puVar5 = puVar2;
  func_0x00010006db80((double)(long)puVar1,*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_178) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_1a8 = FUN_10002c050;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_208 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_200 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_1f8 = ppuVar11;
  }
  puStack_1f0 = puVar4;
  ppuStack_1b0 = &ppuStack_140;
  _objc_retain(puVar4);
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_1f8,&ppuStack_208,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar10 = &PTR____CFConstantStringClassReference_1000a4808;
  puVar15 = puVar17;
  func_0x000100070720();
  puVar1 = puVar2;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar7 + 0x58));
  iVar14 = (int)puVar1;
  _objc_release(puVar4);
  _objc_release(ppuVar11);
  _objc_release(puVar2);
  puVar1 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_1e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_218 = FUN_10002c178;
  lStack_258 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_270 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_270 = ppuVar10;
  }
  ppuStack_288 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_280 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_278 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_260 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar14 == 0) {
    ppuStack_260 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_268 = puVar15;
  puStack_250 = puVar2;
  puStack_248 = puVar17;
  puStack_240 = puVar7;
  puStack_238 = puVar5;
  puStack_230 = puVar4;
  ppuStack_228 = ppuVar11;
  ppuStack_220 = &ppuStack_1b0;
  _objc_retain(puVar15);
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar3,param_2,&ppuStack_270,&ppuStack_288,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar11 = (undefined **)0x1;
  puVar5 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x58));
  _objc_release(puVar15);
  _objc_release(ppuVar10);
  _objc_release(puVar17);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_258) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_298 = FUN_10002c2c0;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_2e8 = ppuVar11;
  }
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar7[0x120] == '\0') {
    ppuStack_2e0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_2d0 = puVar2;
  puStack_2c8 = puVar17;
  puStack_2c0 = puVar3;
  puStack_2b8 = puVar1;
  puStack_2b0 = puVar15;
  ppuStack_2a8 = ppuVar10;
  ppuStack_2a0 = &ppuStack_220;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_2e8,&ppuStack_2f8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar8 = ppuVar10;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar7 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  puVar17 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_2d8) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_308 = FUN_10002c3f0;
  lStack_338 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_348 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_348 = ppuVar8;
  }
  ppuStack_358 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_350 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_340 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_340 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_330 = puVar4;
  puStack_328 = puVar7;
  puStack_320 = puVar5;
  ppuStack_318 = ppuVar11;
  ppuStack_310 = &ppuStack_2a0;
  _objc_retain(ppuVar8);
  func_0x00010006ecc0(puVar1,param_2,&ppuStack_348,&ppuStack_358,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar7 = puVar1;
  func_0x000100070720();
  iVar14 = (int)puVar7;
  ppuVar12 = (undefined **)0x1;
  ppuVar9 = ppuVar11;
  func_0x00010006ff00(*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar8);
  _objc_release(ppuVar11);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_338) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_368 = FUN_10002c514;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_3c0 = ppuVar9;
  }
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_3b8 = ppuVar12;
  }
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar14 == 0) {
    ppuStack_3b0 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  puStack_3a0 = puVar2;
  ppuStack_398 = ppuVar10;
  ppuStack_390 = ppuVar11;
  puStack_388 = puVar1;
  puStack_380 = puVar17;
  ppuStack_378 = ppuVar8;
  ppuStack_370 = &ppuStack_310;
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar9);
  func_0x00010006ecc0(puVar5,param_2,&ppuStack_3c0,&ppuStack_3d8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar13 = 1;
  puVar2 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar7 + 0x58),param_2,puVar17,1);
  _objc_release(ppuVar12);
  _objc_release(ppuVar9);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_3a8) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar16 = *(ulong *)(puVar5 + 0x40);
  _objc_retain(uVar13);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010006e6e0();
  _objc_release(uVar13);
  if ((uVar6 & 1) == 0) {
    puVar7 = *(undefined **)(puVar5 + 0x40);
    func_0x000100071e20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    func_0x00010006e6e0();
    _objc_release(puVar7);
  }
  else {
    puVar17 = (undefined *)0x1;
  }
  _objc_release(uVar16);
  _objc_release(puVar2);
  return puVar17;
}



/* Entry: 10002bcc0; end: 10002bdc7; -[SCNotificationServiceExtDelegate _logGrapheneExtensionTotalDisplayLatencyMs:notificationType:] */

undefined * FUN_10002bcc0(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_50 = param_4;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41a8;
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a4728;
  puVar2 = puVar17;
  func_0x000100070720();
  iVar14 = (int)puVar2;
  puVar2 = puVar8;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_68 = FUN_10002bdc8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_c0 = ppuVar11;
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_1000a4748;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar14 == 0) {
    ppuStack_b0 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar8,param_2,&ppuStack_c0,&ppuStack_d8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a47a8;
  func_0x000100070720();
  puVar3 = puVar1;
  func_0x00010006db80((double)(long)puVar2,*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_a8) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_e8 = FUN_10002bf20;
  lStack_128 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_138 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_138 = ppuVar6;
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar8[0x120] == '\0') {
    ppuStack_130 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_f0 = &puStack_70;
  _objc_retain(ppuVar6);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_138,&ppuStack_148,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a47c8;
  puVar5 = puVar17;
  func_0x000100070720();
  puVar1 = puVar2;
  func_0x00010006db80((double)(long)puVar3,*(undefined8 *)(puVar8 + 0x58));
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_128) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_158 = FUN_10002c050;
  lStack_198 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_1a8 = ppuVar11;
  }
  puStack_1a0 = puVar5;
  ppuStack_160 = &ppuStack_f0;
  _objc_retain(puVar5);
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar8,param_2,&ppuStack_1a8,&ppuStack_1b8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a4808;
  puVar15 = puVar8;
  func_0x000100070720();
  puVar3 = puVar2;
  func_0x00010006db80((double)(long)puVar1,*(undefined8 *)(puVar17 + 0x58));
  iVar14 = (int)puVar3;
  _objc_release(puVar5);
  _objc_release(ppuVar11);
  _objc_release(puVar2);
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_198) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_1c8 = FUN_10002c178;
  lStack_208 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_220 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_220 = ppuVar6;
  }
  ppuStack_238 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_230 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_228 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_210 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar14 == 0) {
    ppuStack_210 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_218 = puVar15;
  puStack_200 = puVar2;
  puStack_1f8 = puVar8;
  puStack_1f0 = puVar17;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar5;
  ppuStack_1d8 = ppuVar11;
  ppuStack_1d0 = &ppuStack_160;
  _objc_retain(puVar15);
  _objc_retain(ppuVar6);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_220,&ppuStack_238,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar11 = (undefined **)0x1;
  puVar1 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 0x58));
  _objc_release(puVar15);
  _objc_release(ppuVar6);
  _objc_release(puVar17);
  puVar8 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_208) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_248 = FUN_10002c2c0;
  lStack_288 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_298 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_298 = ppuVar11;
  }
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_290 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar8[0x120] == '\0') {
    ppuStack_290 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_280 = puVar2;
  puStack_278 = puVar17;
  puStack_270 = puVar4;
  puStack_268 = puVar3;
  puStack_260 = puVar15;
  ppuStack_258 = ppuVar6;
  ppuStack_250 = &ppuStack_1d0;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar5,param_2,&ppuStack_298,&ppuStack_2a8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar9 = ppuVar6;
  func_0x00010006db80((double)(long)puVar1,*(undefined8 *)(puVar8 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  puVar17 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_288) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_2b8 = FUN_10002c3f0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_2f8 = ppuVar9;
  }
  ppuStack_308 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_300 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_2f0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_2e0 = puVar5;
  puStack_2d8 = puVar8;
  puStack_2d0 = puVar1;
  ppuStack_2c8 = ppuVar11;
  ppuStack_2c0 = &ppuStack_250;
  _objc_retain(ppuVar9);
  func_0x00010006ecc0(puVar3,param_2,&ppuStack_2f8,&ppuStack_308,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar8 = puVar3;
  func_0x000100070720();
  iVar14 = (int)puVar8;
  ppuVar12 = (undefined **)0x1;
  ppuVar10 = ppuVar11;
  func_0x00010006ff00(*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_2e8) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_318 = FUN_10002c514;
  lStack_358 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_370 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_370 = ppuVar10;
  }
  ppuStack_388 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_380 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_368 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_368 = ppuVar12;
  }
  ppuStack_378 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_360 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar14 == 0) {
    ppuStack_360 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  puStack_350 = puVar2;
  ppuStack_348 = ppuVar6;
  ppuStack_340 = ppuVar11;
  puStack_338 = puVar3;
  puStack_330 = puVar17;
  ppuStack_328 = ppuVar9;
  ppuStack_320 = &ppuStack_2c0;
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar1,param_2,&ppuStack_370,&ppuStack_388,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar13 = 1;
  puVar2 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 0x58),param_2,puVar17,1);
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_358) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar16 = *(ulong *)(puVar1 + 0x40);
  _objc_retain(uVar13);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar16;
  func_0x00010006e6e0();
  _objc_release(uVar13);
  if ((uVar7 & 1) == 0) {
    puVar8 = *(undefined **)(puVar1 + 0x40);
    func_0x000100071e20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010006e6e0();
    _objc_release(puVar8);
  }
  else {
    puVar17 = (undefined *)0x1;
  }
  _objc_release(uVar16);
  _objc_release(puVar2);
  return puVar17;
}



/* Entry: 10002bdc8; end: 10002bf1f; -[SCNotificationServiceExtDelegate _logGrapheneExtensionTotalModifierLatencyMs:notificationType:suppressed:] */

undefined *
FUN_10002bdc8(long param_1,undefined8 param_2,long param_3,undefined **param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_60 = param_4;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a4208;
  if (*(char *)(param_1 + 0x120) == '\0') {
    ppuStack_58 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a4748;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4768;
  if (param_5 == 0) {
    ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar5 = &PTR____CFConstantStringClassReference_1000a47a8;
  func_0x000100070720();
  puVar2 = puVar8;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_88 = FUN_10002bf20;
  lStack_c8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_d8 = ppuVar5;
  }
  ppuStack_e8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  func_0x00010006ecc0(puVar8,param_2,&ppuStack_d8,&ppuStack_e8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar12 = &PTR____CFConstantStringClassReference_1000a47c8;
  puVar4 = puVar8;
  func_0x000100070720();
  puVar6 = puVar1;
  func_0x00010006db80((double)(long)puVar2,*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_c8) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_f8 = FUN_10002c050;
  lStack_138 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_158 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_148 = ppuVar12;
  }
  puStack_140 = puVar4;
  ppuStack_100 = &puStack_90;
  _objc_retain(puVar4);
  _objc_retain(ppuVar12);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_148,&ppuStack_158,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar5 = &PTR____CFConstantStringClassReference_1000a4808;
  puVar15 = puVar17;
  func_0x000100070720();
  puVar1 = puVar2;
  func_0x00010006db80((double)(long)puVar6,*(undefined8 *)(puVar8 + 0x58));
  iVar9 = (int)puVar1;
  _objc_release(puVar4);
  _objc_release(ppuVar12);
  _objc_release(puVar2);
  puVar1 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_138) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_168 = FUN_10002c178;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_1c0 = ppuVar5;
  }
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar9 == 0) {
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_1b8 = puVar15;
  puStack_1a0 = puVar2;
  puStack_198 = puVar17;
  puStack_190 = puVar8;
  puStack_188 = puVar6;
  puStack_180 = puVar4;
  ppuStack_178 = ppuVar12;
  ppuStack_170 = &ppuStack_100;
  _objc_retain(puVar15);
  _objc_retain(ppuVar5);
  func_0x00010006ecc0(puVar3,param_2,&ppuStack_1c0,&ppuStack_1d8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar12 = (undefined **)0x1;
  puVar6 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x58));
  _objc_release(puVar15);
  _objc_release(ppuVar5);
  _objc_release(puVar17);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_1a8) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_1e8 = FUN_10002c2c0;
  lStack_228 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_238 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_238 = ppuVar12;
  }
  ppuStack_248 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_240 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_230 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar8[0x120] == '\0') {
    ppuStack_230 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_220 = puVar2;
  puStack_218 = puVar17;
  puStack_210 = puVar3;
  puStack_208 = puVar1;
  puStack_200 = puVar15;
  ppuStack_1f8 = ppuVar5;
  ppuStack_1f0 = &ppuStack_170;
  _objc_retain(ppuVar12);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_238,&ppuStack_248,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar10 = ppuVar5;
  func_0x00010006db80((double)(long)puVar6,*(undefined8 *)(puVar8 + 0x58));
  _objc_release(ppuVar12);
  _objc_release(ppuVar5);
  puVar17 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_228) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_258 = FUN_10002c3f0;
  lStack_288 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_298 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_298 = ppuVar10;
  }
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_290 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_290 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_280 = puVar4;
  puStack_278 = puVar8;
  puStack_270 = puVar6;
  ppuStack_268 = ppuVar12;
  ppuStack_260 = &ppuStack_1f0;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar1,param_2,&ppuStack_298,&ppuStack_2a8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar8 = puVar1;
  func_0x000100070720();
  iVar9 = (int)puVar8;
  ppuVar13 = (undefined **)0x1;
  ppuVar11 = ppuVar12;
  func_0x00010006ff00(*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(ppuVar12);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_288) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_2b8 = FUN_10002c514;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_310 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_310 = ppuVar11;
  }
  ppuStack_328 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_320 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_308 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuStack_308 = ppuVar13;
  }
  ppuStack_318 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_300 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar9 == 0) {
    ppuStack_300 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  puStack_2f0 = puVar2;
  ppuStack_2e8 = ppuVar5;
  ppuStack_2e0 = ppuVar12;
  puStack_2d8 = puVar1;
  puStack_2d0 = puVar17;
  ppuStack_2c8 = ppuVar10;
  ppuStack_2c0 = &ppuStack_260;
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar6,param_2,&ppuStack_310,&ppuStack_328,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar14 = 1;
  puVar2 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 0x58),param_2,puVar17,1);
  _objc_release(ppuVar13);
  _objc_release(ppuVar11);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_2f8) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar16 = *(ulong *)(puVar6 + 0x40);
  _objc_retain(uVar14);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar16;
  func_0x00010006e6e0();
  _objc_release(uVar14);
  if ((uVar7 & 1) == 0) {
    puVar8 = *(undefined **)(puVar6 + 0x40);
    func_0x000100071e20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010006e6e0();
    _objc_release(puVar8);
  }
  else {
    puVar17 = (undefined *)0x1;
  }
  _objc_release(uVar16);
  _objc_release(puVar2);
  return puVar17;
}



/* Entry: 10002bf20; end: 10002c04f; -[SCNotificationServiceExtDelegate _logGrapheneExtensionTaskHandlersLatencyMs:notificationType:] */

undefined * FUN_10002bf20(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined8 **ppuStack_240;
  code *pcStack_238;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4208;
  if (*(char *)(param_1 + 0x120) == '\0') {
    ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar12 = &PTR____CFConstantStringClassReference_1000a47c8;
  puVar4 = puVar17;
  func_0x000100070720();
  puVar6 = puVar8;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_78 = FUN_10002c050;
  lStack_b8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_c8 = ppuVar12;
  }
  puStack_c0 = puVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(ppuVar12);
  func_0x00010006ecc0(puVar8,param_2,&ppuStack_c8,&ppuStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar5 = &PTR____CFConstantStringClassReference_1000a4808;
  puVar15 = puVar8;
  func_0x000100070720();
  puVar2 = puVar1;
  func_0x00010006db80((double)(long)puVar6,*(undefined8 *)(puVar17 + 0x58));
  iVar9 = (int)puVar2;
  _objc_release(puVar4);
  _objc_release(ppuVar12);
  _objc_release(puVar1);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_e8 = FUN_10002c178;
  lStack_128 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_140 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_140 = ppuVar5;
  }
  ppuStack_158 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_130 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar9 == 0) {
    ppuStack_130 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_138 = puVar15;
  puStack_120 = puVar1;
  puStack_118 = puVar8;
  puStack_110 = puVar17;
  puStack_108 = puVar6;
  puStack_100 = puVar4;
  ppuStack_f8 = ppuVar12;
  ppuStack_f0 = &puStack_80;
  _objc_retain(puVar15);
  _objc_retain(ppuVar5);
  func_0x00010006ecc0(puVar3,param_2,&ppuStack_140,&ppuStack_158,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar12 = (undefined **)0x1;
  puVar6 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x58));
  _objc_release(puVar15);
  _objc_release(ppuVar5);
  _objc_release(puVar17);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_128) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_168 = FUN_10002c2c0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_1b8 = ppuVar12;
  }
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar8[0x120] == '\0') {
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_1a0 = puVar1;
  puStack_198 = puVar17;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  puStack_180 = puVar15;
  ppuStack_178 = ppuVar5;
  ppuStack_170 = &ppuStack_f0;
  _objc_retain(ppuVar12);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_1b8,&ppuStack_1c8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar10 = ppuVar5;
  func_0x00010006db80((double)(long)puVar6,*(undefined8 *)(puVar8 + 0x58));
  _objc_release(ppuVar12);
  _objc_release(ppuVar5);
  puVar17 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_1a8) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_1d8 = FUN_10002c3f0;
  lStack_208 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_218 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_218 = ppuVar10;
  }
  ppuStack_228 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_220 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_210 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_200 = puVar4;
  puStack_1f8 = puVar8;
  puStack_1f0 = puVar6;
  ppuStack_1e8 = ppuVar12;
  ppuStack_1e0 = &ppuStack_170;
  _objc_retain(ppuVar10);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_218,&ppuStack_228,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar8 = puVar2;
  func_0x000100070720();
  iVar9 = (int)puVar8;
  ppuVar13 = (undefined **)0x1;
  ppuVar11 = ppuVar12;
  func_0x00010006ff00(*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar10);
  _objc_release(ppuVar12);
  puVar8 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_208) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_238 = FUN_10002c514;
  lStack_278 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_290 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_290 = ppuVar11;
  }
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_288 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuStack_288 = ppuVar13;
  }
  ppuStack_298 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_280 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar9 == 0) {
    ppuStack_280 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  puStack_270 = puVar1;
  ppuStack_268 = ppuVar5;
  ppuStack_260 = ppuVar12;
  puStack_258 = puVar2;
  puStack_250 = puVar17;
  ppuStack_248 = ppuVar10;
  ppuStack_240 = &ppuStack_1e0;
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar6,param_2,&ppuStack_290,&ppuStack_2a8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar14 = 1;
  puVar4 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 0x58),param_2,puVar17,1);
  _objc_release(ppuVar13);
  _objc_release(ppuVar11);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_278) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar16 = *(ulong *)(puVar6 + 0x40);
  _objc_retain(uVar14);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar16;
  func_0x00010006e6e0();
  _objc_release(uVar14);
  if ((uVar7 & 1) == 0) {
    puVar8 = *(undefined **)(puVar6 + 0x40);
    func_0x000100071e20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010006e6e0();
    _objc_release(puVar8);
  }
  else {
    puVar17 = (undefined *)0x1;
  }
  _objc_release(uVar16);
  _objc_release(puVar4);
  return puVar17;
}



/* Entry: 10002c050; end: 10002c177; -[SCNotificationServiceExtDelegate _logSDNTaskHandlerLatency:notificationType:taskHandlerIdentifier:] */

undefined *
FUN_10002c050(long param_1,undefined8 param_2,long param_3,undefined **param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  uStack_50 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar17,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar5 = &PTR____CFConstantStringClassReference_1000a4808;
  puVar6 = puVar17;
  func_0x000100070720();
  puVar8 = puVar1;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x58));
  iVar9 = (int)puVar8;
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar8 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_78 = FUN_10002c178;
  lStack_b8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_d0 = ppuVar5;
  }
  ppuStack_e8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar9 == 0) {
    ppuStack_c0 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  puStack_c8 = puVar6;
  puStack_b0 = puVar1;
  puStack_a8 = puVar17;
  lStack_a0 = param_1;
  lStack_98 = param_3;
  uStack_90 = param_5;
  ppuStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(ppuVar5);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_d0,&ppuStack_e8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar13 = (undefined **)0x1;
  puVar10 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 0x58));
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar17);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_b8) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_f8 = FUN_10002c2c0;
  lStack_138 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_148 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuStack_148 = ppuVar13;
  }
  ppuStack_158 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar3[0x120] == '\0') {
    ppuStack_140 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_130 = puVar1;
  puStack_128 = puVar17;
  puStack_120 = puVar2;
  puStack_118 = puVar8;
  puStack_110 = puVar6;
  ppuStack_108 = ppuVar5;
  ppuStack_100 = &puStack_80;
  _objc_retain(ppuVar13);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_148,&ppuStack_158,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar11 = ppuVar5;
  func_0x00010006db80((double)(long)puVar10,*(undefined8 *)(puVar3 + 0x58));
  _objc_release(ppuVar13);
  _objc_release(ppuVar5);
  puVar17 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_138) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_168 = FUN_10002c3f0;
  lStack_198 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_1a8 = ppuVar11;
  }
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar17[0x120] == '\0') {
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_190 = puVar4;
  puStack_188 = puVar3;
  puStack_180 = puVar10;
  ppuStack_178 = ppuVar13;
  ppuStack_170 = &ppuStack_100;
  _objc_retain(ppuVar11);
  func_0x00010006ecc0(puVar8,param_2,&ppuStack_1a8,&ppuStack_1b8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar6 = puVar8;
  func_0x000100070720();
  iVar9 = (int)puVar6;
  ppuVar14 = (undefined **)0x1;
  ppuVar12 = ppuVar13;
  func_0x00010006ff00(*(undefined8 *)(puVar17 + 0x58));
  _objc_release(ppuVar11);
  _objc_release(ppuVar13);
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_198) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_1c8 = FUN_10002c514;
  lStack_208 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_220 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_220 = ppuVar12;
  }
  ppuStack_238 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_230 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_218 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar14 != (undefined **)0x0) {
    ppuStack_218 = ppuVar14;
  }
  ppuStack_228 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar9 == 0) {
    ppuStack_210 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  puStack_200 = puVar1;
  ppuStack_1f8 = ppuVar5;
  ppuStack_1f0 = ppuVar13;
  puStack_1e8 = puVar8;
  puStack_1e0 = puVar17;
  ppuStack_1d8 = ppuVar11;
  ppuStack_1d0 = &ppuStack_170;
  _objc_retain(ppuVar14);
  _objc_retain(ppuVar12);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_220,&ppuStack_238,3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar15 = 1;
  puVar1 = puVar17;
  func_0x00010006ff00(*(undefined8 *)(puVar6 + 0x58),param_2,puVar17,1);
  _objc_release(ppuVar14);
  _objc_release(ppuVar12);
  _objc_release(puVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_208) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  uVar16 = *(ulong *)(puVar2 + 0x40);
  _objc_retain(uVar15);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar16;
  func_0x00010006e6e0();
  _objc_release(uVar15);
  if ((uVar7 & 1) == 0) {
    puVar8 = *(undefined **)(puVar2 + 0x40);
    func_0x000100071e20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010006e6e0();
    _objc_release(puVar8);
  }
  else {
    puVar17 = (undefined *)0x1;
  }
  _objc_release(uVar16);
  _objc_release(puVar1);
  return puVar17;
}



/* Entry: 10002c178; end: 10002c2bf; -[SCNotificationServiceExtDelegate _logSDNTaskHandlerResult:notificationType:taskHandlerIdentifier:] */

undefined *
FUN_10002c178(long param_1,undefined8 param_2,int param_3,undefined **param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_60 = param_4;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_1000a47e8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a4828;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4768;
  if (param_3 == 0) {
    ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar13,param_2,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar8 = (undefined **)0x1;
  puVar6 = puVar5;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_88 = FUN_10002c2c0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_d8 = ppuVar8;
  }
  ppuStack_e8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar13[0x120] == '\0') {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  func_0x00010006ecc0(puVar5,param_2,&ppuStack_d8,&ppuStack_e8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar7 = ppuVar1;
  func_0x00010006db80((double)(long)puVar6,*(undefined8 *)(puVar13 + 0x58));
  _objc_release(ppuVar8);
  _objc_release(ppuVar1);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_f8 = FUN_10002c3f0;
  lStack_128 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_138 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_138 = ppuVar7;
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar2[0x120] == '\0') {
    ppuStack_130 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_120 = puVar5;
  puStack_118 = puVar13;
  puStack_110 = puVar6;
  ppuStack_108 = ppuVar8;
  ppuStack_100 = &puStack_90;
  _objc_retain(ppuVar7);
  func_0x00010006ecc0(puVar3,param_2,&ppuStack_138,&ppuStack_148,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar13 = puVar3;
  func_0x000100070720();
  iVar11 = (int)puVar13;
  ppuVar9 = (undefined **)0x1;
  ppuVar1 = ppuVar8;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x58));
  _objc_release(ppuVar7);
  _objc_release(ppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_128) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_198 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_1b0 = ppuVar1;
  }
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_1a8 = ppuVar9;
  }
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar11 == 0) {
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar1);
  func_0x00010006ecc0(puVar13,param_2,&ppuStack_1b0,&ppuStack_1c8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar10 = 1;
  puVar6 = puVar5;
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 0x58),param_2,puVar5,1);
  _objc_release(ppuVar9);
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_198) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  uVar12 = *(ulong *)(puVar13 + 0x40);
  _objc_retain(uVar10);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010006e6e0();
  _objc_release(uVar10);
  if ((uVar4 & 1) == 0) {
    puVar5 = *(undefined **)(puVar13 + 0x40);
    func_0x000100071e20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010006e6e0();
    _objc_release(puVar5);
  }
  else {
    puVar13 = (undefined *)0x1;
  }
  _objc_release(uVar12);
  _objc_release(puVar6);
  return puVar13;
}



/* Entry: 10002c2c0; end: 10002c3ef; -[SCNotificationServiceExtDelegate _logGrapheneExtensionBadgeUpdaterHandlersLatencyMs:notificationType:] */

undefined * FUN_10002c2c0(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4208;
  if (*(char *)(param_1 + 0x120) == '\0') {
    ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar12,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar5 = ppuVar1;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_4);
  _objc_release(ppuVar1);
  puVar4 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_78 = FUN_10002c3f0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_b8 = ppuVar5;
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_1000a4208;
  if (puVar4[0x120] == '\0') {
    ppuStack_b0 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  puStack_a0 = puVar12;
  lStack_98 = param_1;
  lStack_90 = param_3;
  ppuStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_b8,&ppuStack_c8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar12 = puVar2;
  func_0x000100070720();
  iVar10 = (int)puVar12;
  ppuVar8 = (undefined **)0x1;
  ppuVar6 = ppuVar1;
  func_0x00010006ff00(*(undefined8 *)(puVar4 + 0x58));
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_118 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_130 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_130 = ppuVar6;
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_128 = ppuVar8;
  }
  ppuStack_138 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar10 == 0) {
    ppuStack_120 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar6);
  func_0x00010006ecc0(puVar12,param_2,&ppuStack_130,&ppuStack_148,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar9 = 1;
  puVar7 = puVar4;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x58),param_2,puVar4,1);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_118) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar11 = *(ulong *)(puVar12 + 0x40);
  _objc_retain(uVar9);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010006e6e0();
  _objc_release(uVar9);
  if ((uVar3 & 1) == 0) {
    puVar4 = *(undefined **)(puVar12 + 0x40);
    func_0x000100071e20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010006e6e0();
    _objc_release(puVar4);
  }
  else {
    puVar12 = (undefined *)0x1;
  }
  _objc_release(uVar11);
  _objc_release(puVar7);
  return puVar12;
}



/* Entry: 10002c3f0; end: 10002c513; -[SCNotificationServiceExtDelegate _logNotificationReceived:] */

undefined * FUN_10002c3f0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_48 = param_3;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000a4208;
  if (*(char *)(param_1 + 0x120) == '\0') {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  _objc_retain(param_3);
  func_0x00010006ecc0(puVar11,param_2,&ppuStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar4 = puVar11;
  func_0x000100070720();
  iVar9 = (int)puVar4;
  ppuVar7 = (undefined **)0x1;
  ppuVar5 = ppuVar1;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_a8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_c0 = ppuVar5;
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_b8 = ppuVar7;
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (iVar9 == 0) {
    ppuStack_b0 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar5);
  func_0x00010006ecc0(puVar4,param_2,&ppuStack_c0,&ppuStack_d8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar8 = 1;
  puVar6 = puVar2;
  func_0x00010006ff00(*(undefined8 *)(puVar11 + 0x58),param_2,puVar2,1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_a8) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  uVar10 = *(ulong *)(puVar4 + 0x40);
  _objc_retain(uVar8);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010006e6e0();
  _objc_release(uVar8);
  if ((uVar3 & 1) == 0) {
    puVar4 = *(undefined **)(puVar4 + 0x40);
    func_0x000100071e20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010006e6e0();
    _objc_release(puVar4);
  }
  else {
    puVar11 = (undefined *)0x1;
  }
  _objc_release(uVar10);
  _objc_release(puVar6);
  return puVar11;
}



/* Entry: 10002c514; end: 10002c667; -[SCNotificationServiceExtDelegate _logFinishedWithErrorNotificationReceived:errorMessage:timedOut:] */

undefined *
FUN_10002c514(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,int param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_60 = param_3;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_1000a48a8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_58 = param_4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a46c8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a43e8;
  if (param_5 == 0) {
    ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4408;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006ecc0(puVar6,param_2,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar4 = 1;
  puVar3 = puVar2;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58),param_2,puVar2,1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar5 = *(ulong *)(puVar6 + 0x40);
  _objc_retain(uVar4);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010006e6e0();
  _objc_release(uVar4);
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)(puVar6 + 0x40);
    func_0x000100071e20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010006e6e0();
    _objc_release(puVar2);
  }
  else {
    puVar6 = (undefined *)0x1;
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
  return puVar6;
}



/* Entry: 10002c668; end: 10002c71f; -[SCNotificationServiceExtDelegate _shouldForceLogGraphene:notificationType:] */

undefined8 FUN_10002c668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x40);
  _objc_retain(param_4);
  func_0x000100071e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010006e6e0();
  _objc_release(param_4);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x000100071e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010006e6e0();
    _objc_release(uVar2);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10002c720; end: 10002c933; -[SCNotificationServiceExtDelegate _logProcessedNotificationDbResult:startDate:] */

void FUN_10002c720(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100071be0();
  _objc_release(puVar1);
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x00010006ef00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar2);
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006e500(param_3);
    func_0x000100071f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000100073ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x58));
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  lVar3 = param_1;
  func_0x00010006d840(param_1);
  _objc_release(param_4);
  func_0x00010006db80((double)lVar3,*(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x118,0);
  _objc_storeStrong(param_3 + 0x110,0);
  _objc_storeStrong(param_3 + 0x108,0);
  _objc_storeStrong(param_3 + 0x100,0);
  _objc_storeStrong(param_3 + 0xf8,0);
  _objc_storeStrong(param_3 + 0xf0,0);
  _objc_storeStrong(param_3 + 0xe8,0);
  _objc_storeStrong(param_3 + 0xd8,0);
  _objc_storeStrong(param_3 + 0xd0,0);
  _objc_storeStrong(param_3 + 0xa8,0);
  _objc_storeStrong(param_3 + 0x90,0);
  _objc_storeStrong(param_3 + 0x88,0);
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x78,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_3 + 8,0);
  return;
}



/* Entry: 10002c934; end: 10002ca9b; -[SCNotificationServiceExtDelegate .cxx_destruct] */

void FUN_10002c934(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002ca9c; end: 10002cb0f; -[SCMatchingNotificationRevoker initWithProcessingScope:] */

undefined1 * FUN_10002ca9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2418;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002cb10; end: 10002d21b; -[SCMatchingNotificationRevoker didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_10002cb10(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a3a08;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar1;
  func_0x0001000713a0();
  if (ppuVar2 == (undefined **)0x0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    ppuVar3 = param_3;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x000100072760(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x000100072060(ppuVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_1000a3a08;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x000100071d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x10002cd38;
    puStack_88 = &UNK_1000a1fe8;
    ppuStack_80 = ppuVar2;
    _objc_retain(ppuVar1);
    ppuStack_78 = ppuVar1;
    uStack_70 = uVar7;
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retain(uVar7);
    _objc_retain(ppuVar2);
    func_0x00010006f6e0(uVar7,param_2,&puStack_a0);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_release(ppuStack_78);
    _objc_release(ppuStack_80);
    _objc_release(uVar7);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10002d21c; end: 10002d227;  */

void FUN_10002d21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002d224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10002d228; end: 10002d233; -[SCMatchingNotificationRevoker .cxx_destruct] */

void FUN_10002d228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002d234; end: 10002d327; -[SCNotifExtProcessedNotificationTaskHandler initWithProcessingScope:] */

undefined8 FUN_10002d234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100074120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1000d1d00;
  _objc_alloc(PTR_PTR_1000d1d00);
  uVar4 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x0001000745e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070de0(puVar3,param_2,uVar5);
  func_0x000100070fa0(param_1,param_2,uVar1,uVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10002d328; end: 10002d3f3; -[SCNotifExtProcessedNotificationTaskHandler initWithUserSession:systemScopedAppGroupUserDefaults:processedNotificationPersister:] */

undefined1 *
FUN_10002d328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1000d2420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002d3f4; end: 10002d4fb; -[SCNotifExtProcessedNotificationTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_10002d3f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010006e4a0(uVar6);
  lVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010006e360();
  _objc_release(uVar4);
  lVar1 = lVar3;
  func_0x0001000713a0();
  if ((lVar1 != 0) && ((uVar5 & 1) == 0)) {
    func_0x0001000727a0(*(undefined8 *)(param_1 + 0x18),param_2,lVar3);
  }
  (**(code **)(param_4 + 0x10))(param_4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10002d4fc; end: 10002d537; -[SCNotifExtProcessedNotificationTaskHandler .cxx_destruct] */

void FUN_10002d4fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002d538; end: 10002d683; -[SCNotificationExtAcknowledger initWithProcessingScope:] */

undefined8 FUN_10002d538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000100074120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000739a0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010006f900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070d00(param_1,param_2,puVar1,uVar2,uVar3,puVar4,uVar5,10,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10002d684; end: 10002d873; -[SCNotificationExtAcknowledger initWithTimeProvider:userSession:systemScopedAppGroupUserDefaults:networkingApiClient:eventHolder:ackTimeout:configs:grapheneLogger:] */

undefined1 *
FUN_10002d684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1000d2428;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x78) = 0;
    *(undefined8 *)((long)puVar1 + 0x80) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = 0;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "com.snapchat.notification.service.extension.acknowledger";
    _dispatch_queue_create("com.snapchat.notification.service.extension.acknowledger",uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(char **)((long)puVar1 + 0x30) = pcVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002d874; end: 10002dbdb; -[SCNotificationExtAcknowledger didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_10002d874(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar1;
  _objc_release(uVar7);
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar7);
  func_0x00010006c6a0(param_1);
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + 0x88);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if ((lVar3 == 0) || (lVar2 == 0)) {
    func_0x000100072a40(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010006e720(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = 
      PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
      func_0x0001000743a0(
                         PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                         );
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x000100072060(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010006cb00(param_1);
      _objc_release(uVar8);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    _objc_release(uVar8);
    uVar7 = param_3;
    func_0x00010006e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010006f7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x000100072a40(*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x50) = 0;
    _objc_initWeak(auStack_78,param_1);
    puVar6 = PTR___NSConcreteStackBlock_1000a00f0;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puStack_a8 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10002dbdc;
    puStack_90 = &UNK_1000a2408;
    _objc_copyWeak(auStack_80,auStack_78);
    lStack_88 = lVar1;
    _objc_retain(lVar1);
    _dispatch_async(uVar7,&puStack_a8);
    uVar7 = 0;
    _dispatch_time(0,*(long *)(param_1 + 0x60) * 1000000000);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    puStack_d0 = puVar6;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10002dc68;
    puStack_b8 = &UNK_1000a2438;
    _objc_copyWeak(auStack_b0,auStack_78);
    _dispatch_after(uVar7,uVar8,&puStack_d0);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lStack_88);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10002dbdc; end: 10002dc93;  */

void FUN_10002dbdc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010006d0c0();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 10002dc94; end: 10002dca7;  */

void FUN_10002dc94(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 10002dca8; end: 10002de2f; -[SCNotificationExtAcknowledger cleanupOnTimeout] */

void FUN_10002dca8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
  func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68,param_3,
                      &PTR____CFConstantStringClassReference_1000a49c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072a60(*(undefined8 *)(param_2 + 0x20),param_3,puVar1);
  *(undefined1 *)(param_2 + 0x40) = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100074180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010006e920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074260();
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010006e720(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x000100072060(uVar2,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006cb60(param_2,param_3,(long)(param_1 * 1000.0),uVar7,uVar3);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  (**(code **)(*(long *)(param_2 + 0x58) + 0x10))();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 10002de30; end: 10002e023; -[SCNotificationExtAcknowledger _makeRequest:] */

void FUN_10002de30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x0001000721e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_78 = &uStack_80;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010006e360();
    _objc_release(uVar3);
    uStack_68 = (undefined1)uVar4;
    uVar4 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_1000a00f0;
    puStack_c0 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10002e024;
    puStack_a8 = &UNK_1000a24c8;
    uStack_a0 = uVar2;
    lStack_98 = param_1;
    _objc_retain(param_3);
    uStack_90 = param_3;
    puStack_88 = &uStack_80;
    _objc_retain(uVar2);
    _dispatch_async(uVar4,&puStack_c0);
    _objc_release(uVar4);
    _objc_initWeak(auStack_c8,param_1);
    uVar4 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x38) * 1000000000.0));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10002e460;
    puStack_e0 = &UNK_1000a2408;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(param_3);
    uStack_d8 = param_3;
    _dispatch_after(uVar4,uVar3,&puStack_f8);
    *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x38);
    _objc_release(uStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_90);
    _objc_release(uStack_a0);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10002e024; end: 10002e173;  */

void FUN_10002e024(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a49e8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4a08;
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a49a8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000a49a8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_2,&ppuStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100071be0();
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x0001000713a0();
  if (lVar3 != 0) {
    func_0x000100073840(puVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010006e9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10002e174;
  puStack_70 = &UNK_1000a2498;
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  ppuVar4 = &PTR____CFConstantStringClassReference_1000a4a28;
  func_0x0001000718c0(uVar6);
  _objc_release(uVar5);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10002e174;
  puStack_b0 = puVar2;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  lStack_c8 = *(long *)(puVar1 + 0x20);
  uStack_b8 = *(undefined8 *)(puVar1 + 0x28);
  uVar5 = *(undefined8 *)(lStack_c8 + 0x30);
  puStack_e8 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10002e204;
  puStack_d0 = &UNK_1000a2468;
  ppuStack_c0 = ppuVar4;
  _objc_retain(ppuVar4);
  _dispatch_async(uVar5,&puStack_e8);
  _objc_release(ppuStack_c0);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 10002e174; end: 10002e203;  */

void FUN_10002e174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  lStack_38 = *(long *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10002e204;
  puStack_40 = &UNK_1000a2468;
  uStack_30 = param_4;
  _objc_retain(param_4);
  _dispatch_async(uVar1,&puStack_58);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 10002e204; end: 10002e3df;  */

void FUN_10002e204(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x40) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x40) = 1;
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    func_0x00010006e920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    lVar1 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010006e720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x000100072060(uVar6,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb40(lVar1,param_3,(long)(param_1 * 1000.0),uVar5,
                        *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18));
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    (**(code **)(*(long *)(*(long *)(param_2 + 0x20) + 0x58) + 0x10))();
  }
  else {
    func_0x000100071580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
    *(long *)(*(long *)(param_2 + 0x20) + 0x48) = lVar1;
    _objc_release(uVar6);
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010006e720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x000100072060(uVar6,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb20(lVar1,param_3,uVar5,
                        *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18));
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 10002e3e0; end: 10002e493;  */

void FUN_10002e3e0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 10002e494; end: 10002e7a3; -[SCNotificationExtAcknowledger getPnsRequestParametersWithUserInfo:receivedTimestamp:] */

void FUN_10002e494(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a4388);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a3a28);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a4968);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a4308);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x000100072060(param_3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar7 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a4988);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100074180(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006e360();
  _objc_release(uVar8);
  puVar5 = PTR__OBJC_CLASS___SCPushNotificationAckNotificationRequest_1000d1e60;
  _objc_opt_new(PTR__OBJC_CLASS___SCPushNotificationAckNotificationRequest_1000d1e60);
  func_0x0001000732e0();
  func_0x0001000735e0(puVar5,param_2,lVar7);
  lVar9 = lVar1;
  func_0x000100071040(lVar1);
  func_0x000100073600(puVar5,param_2,lVar9);
  func_0x000100072a20(puVar5,param_2,param_4);
  puVar10 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x000100073820();
  func_0x000100072fe0(puVar5,param_2,puVar10);
  func_0x000100073460(puVar5,param_2,lVar6);
  func_0x000100073780(puVar5,param_2,lVar4);
  puVar11 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x000100073820();
  func_0x0001000736e0(puVar5,param_2,puVar11);
  puVar12 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x000100073820();
  func_0x000100072f80(puVar5,param_2,puVar12);
  func_0x000100072a00(puVar5,param_2,0);
  func_0x000100072e40(puVar5,param_2,0);
  func_0x000100072e60(puVar5,param_2,&PTR____CFConstantStringClassReference_1000a3a08);
  func_0x000100072c80(puVar5,param_2,1);
  lVar9 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a39a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  if ((lVar9 == 0) || (*(long *)(param_1 + 0x28) != 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  func_0x000100073820(puVar13,param_2,uVar8);
  func_0x000100073140(puVar5,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(lVar9);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 10002e7a4; end: 10002e7ef; -[SCNotificationExtAcknowledger _getReceiveTimeStamp] */

long FUN_10002e7a4(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010006e920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074240();
  _objc_release(uVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 10002e7f0; end: 10002e91b; -[SCNotificationExtAcknowledger _logGrapheneExtensionAcknowledgerSuccessLatencyMs:notificationType:appState:] */

void FUN_10002e7f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a4a68;
  func_0x000100070720();
  puVar4 = puVar2;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar6);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar5 = puVar3;
  func_0x00010006db80((double)(long)puVar4,*(undefined8 *)(puVar1 + 0x70));
  _objc_release(ppuVar6);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar5);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar3 = puVar4;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x70));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar3);
  func_0x00010006ecc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x70));
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x88,0);
  _objc_storeStrong(puVar2 + 0x80,0);
  _objc_storeStrong(puVar2 + 0x70,0);
  _objc_storeStrong(puVar2 + 0x68,0);
  _objc_storeStrong(puVar2 + 0x58,0);
  _objc_storeStrong(puVar2 + 0x48,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10002e91c; end: 10002ea47; -[SCNotificationExtAcknowledger _logGrapheneExtensionAcknowledgerTimeoutLatencyMs:notificationType:appState:] */

void FUN_10002e91c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar4 = puVar2;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar5 = puVar3;
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x70));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar5);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x70));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x88,0);
  _objc_storeStrong(puVar1 + 0x80,0);
  _objc_storeStrong(puVar1 + 0x70,0);
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10002ea48; end: 10002eb67; -[SCNotificationExtAcknowledger _logGrapheneExtensionAcknowledgerFailed:appState:] */

void FUN_10002ea48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar4 = puVar2;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar4);
  func_0x00010006ecc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x70));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x88,0);
  _objc_storeStrong(puVar2 + 0x80,0);
  _objc_storeStrong(puVar2 + 0x70,0);
  _objc_storeStrong(puVar2 + 0x68,0);
  _objc_storeStrong(puVar2 + 0x58,0);
  _objc_storeStrong(puVar2 + 0x48,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10002eb68; end: 10002ec63; -[SCNotificationExtAcknowledger _logGrapheneExtensionAckLoggedOutUser:] */

void FUN_10002eb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x88,0);
  _objc_storeStrong(puVar1 + 0x80,0);
  _objc_storeStrong(puVar1 + 0x70,0);
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10002ec64; end: 10002ed0b; -[SCNotificationExtAcknowledger .cxx_destruct] */

void FUN_10002ec64(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002ed0c; end: 10002ed13; -[SCExtensionMemoryMonitor initWithGrapheneLogger:] */

void FUN_10002ed0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100070470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s_initWithGrapheneLogger_dimension_1000d0910,param_3,0);
  return;
}



/* Entry: 10002ed14; end: 10002edb7; -[SCExtensionMemoryMonitor initWithGrapheneLogger:dimensions:] */

undefined1 *
FUN_10002ed14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2430;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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



/* Entry: 10002edb8; end: 10002eebb; -[SCExtensionMemoryMonitor reportMemoryUsage:] */

void FUN_10002edb8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uStack_1b8;
  undefined1 auStack_1b4 [372];
  
  _objc_retain(param_3);
  uStack_1b8 = 0x5d;
  _task_info(*(undefined4 *)PTR__mach_task_self__1000a0240,0x17,auStack_1b4,&uStack_1b8);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010006da40(puVar1);
  }
  lVar2 = param_3;
  func_0x0001000713a0();
  if (lVar2 != 0) {
    func_0x000100073360(puVar1);
  }
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006da60(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10002eebc; end: 10002eeeb; -[SCExtensionMemoryMonitor .cxx_destruct] */

void FUN_10002eebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002eeec; end: 10002ef73; -[SCCrashRecoveryNotificationModifier initWithProcessingScope:] */

undefined8 FUN_10002eeec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070f00(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10002ef74; end: 10002f017; -[SCCrashRecoveryNotificationModifier initWithUserSession:event:] */

undefined1 *
FUN_10002ef74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2438;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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



/* Entry: 10002f018; end: 10002f153; -[SCCrashRecoveryNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_10002f018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100071be0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x000100072300(param_1,param_2,uVar2);
  func_0x000100072320(param_1,param_2,uVar2);
  if (param_5 == 0) {
    uVar1 = param_3;
    func_0x00010006e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000720a0(param_4,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x0001000720c0(param_4,param_2,6);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10002f154; end: 10002f187; -[SCCrashRecoveryNotificationModifier bestAttemptContent] */

void FUN_10002f154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100073800(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10002f188; end: 10002f417; -[SCCrashRecoveryNotificationModifier processCofResponseFromUserInfo:] */

void FUN_10002f188(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10002f418(param_3,*(undefined8 *)PTR__SCPushNotificationCrashRecoveryCofResponseKey_1000a0458)
  ;
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1000d1e40;
    _objc_alloc();
    func_0x000100070140();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___SCCofConfigTargetingResponse_1000d1e70;
      _objc_alloc();
      func_0x000100070280();
      if (puVar3 != (undefined *)0x0) {
        uVar4 = param_3;
        FUN_10002f418(param_3,*(undefined8 *)
                               PTR__SCPushNotificationCrashRecoveryRestartBehaviorKey_1000a0468);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000100071100();
        if (((uVar5 & 1) == 0) && (uVar5 = uVar4, func_0x000100071100(), (uVar5 & 1) == 0)) {
          func_0x000100071100();
        }
        uVar6 = param_3;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar7);
        uVar5 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar6);
        func_0x000100071100(uVar5);
        _objc_release(uVar5);
        puVar7 = PTR__OBJC_CLASS___SCCOFPushRecoveryPayload_1000d1e78;
        _objc_alloc_init();
        func_0x000100072cc0();
        func_0x000100073580(puVar7);
        func_0x000100073440(puVar7);
        puVar9 = puVar7;
        func_0x00010006e9c0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined *)0x0) {
          puVar10 = PTR__OBJC_CLASS___NSUserDefaults_1000d1e80;
          _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_1000d1e80);
          puVar11 = PTR__OBJC_CLASS___NSBundle_1000d1e88;
          func_0x0001000717e0(PTR__OBJC_CLASS___NSBundle_1000d1e88);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x000100072800();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100070ca0(puVar10);
          _objc_release(puVar12);
          _objc_release(puVar11);
          func_0x000100073340(puVar10);
          _objc_release(puVar10);
        }
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(uVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10002f418; end: 10002f477;  */

void FUN_10002f418(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000100072060(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10002f478; end: 10002f563; -[SCCrashRecoveryNotificationModifier processParamedicResponseFromUserInfo:] */

void FUN_10002f478(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_10002f418(param_3,*(undefined8 *)PTR__SCPushNotificationParamedicResponseKey_1000a0478);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1000d1e40;
    _objc_alloc();
    func_0x000100070140();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1000d1e80;
      _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_1000d1e80);
      puVar3 = PTR__OBJC_CLASS___NSBundle_1000d1e88;
      func_0x0001000717e0(PTR__OBJC_CLASS___NSBundle_1000d1e88);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000100072800();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100070ca0(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x000100073340(puVar2);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10002f564; end: 10002f5ab; -[SCCrashRecoveryNotificationModifier .cxx_destruct] */

void FUN_10002f564(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002f5ac; end: 10002f61f; -[SCCrashRecoveryNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_10002f5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2440;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002f620; end: 10002f6b7; -[SCCrashRecoveryNotificationModifierProvider getModifier:] */

void FUN_10002f620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100074120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_alloc(PTR_PTR_1000d1e90);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}


