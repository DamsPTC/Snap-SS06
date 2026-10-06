/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00420dc4; end: 00420dcb; -[SCNotificationServiceExtensionConfigs nativeAckWaitCapSecs] */

undefined8 FUN_00420dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 00420dcc; end: 00420dd3; -[SCNotificationServiceExtensionConfigs nativeSuppressAckingEnabled] */

undefined1 FUN_00420dcc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 00420dd4; end: 00420ddb; -[SCNotificationServiceExtensionConfigs nseMediaDbEnabled] */

undefined1 FUN_00420dd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 00420ddc; end: 00420de3; -[SCNotificationServiceExtensionConfigs widgetSuggestionEnabled] */

undefined1 FUN_00420ddc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 00420de4; end: 00420deb; -[SCNotificationServiceExtensionConfigs widgetSuggestionKind] */

undefined8 FUN_00420de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 00420dec; end: 00420df3; -[SCNotificationServiceExtensionConfigs widgetSuggestionRelevanceDurationSec] */

undefined8 FUN_00420dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 00420df4; end: 00420dfb; -[SCNotificationServiceExtensionConfigs widgetSuggestionFireAndForgetEnabled] */

undefined1 FUN_00420df4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 00420dfc; end: 00420e03; -[SCNotificationServiceExtensionConfigs widgetSuggestionCooldownSec] */

undefined8 FUN_00420dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 00420e04; end: 00420e63; -[SCNotificationServiceExtensionConfigs .cxx_destruct] */

void FUN_00420e04(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x28,0);
  return;
}



/* Entry: 00420e64; end: 00420f8b; -[SCNotificationExtensionExecution initWithCoder:] */

undefined1 *
FUN_00420e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR__OBJC_CLASS___SCNotificationExtensionExecution_00ac3a40;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    func_0x00781a80(param_4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    uVar2 = param_4;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00420f8c; end: 004210af; -[SCNotificationExtensionExecution initWithNotificationType:notificationId:appIsInForeground:processingStartDate:memoryUsedMB:campaignType:] */

undefined1 *
FUN_00420f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR__OBJC_CLASS___SCNotificationExtensionExecution_00ac3a40;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    uVar2 = param_8;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 004210b0; end: 004210d3; -[SCNotificationExtensionExecution copyWithZone:] */

undefined8 FUN_004210b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004210d4; end: 00421183; -[SCNotificationExtensionExecution encodeWithCoder:] */

void FUN_004210d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x0078bfa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a23e40);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a23e60);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                  &PTR____CFConstantStringClassReference_00a23e80);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a23ea0);
  func_0x00782700(*(undefined8 *)(param_1 + 0x28),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a23ec0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                  &PTR____CFConstantStringClassReference_00a23ee0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00421184; end: 00421237; -[SCNotificationExtensionExecution hash] */

undefined8 * FUN_00421184(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x007843a0();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar4;
  func_0x007843a0();
  puVar5 = &uStack_58;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar5,6);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_0042132c:
    puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_00421338;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(char *)(puVar5 + 1) == *(char *)(param_3 + 1))) {
      dVar11 = ABS((double)puVar5[5] - (double)param_3[5]);
      dVar10 = ABS((double)puVar5[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((bVar1) &&
           ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x007877e0(), (int)lVar7 != 0)))) &&
          ((lVar7 = puVar5[3], lVar7 == param_3[3] || (func_0x007877e0(), (int)lVar7 != 0)))) &&
         ((lVar7 = puVar5[4], lVar7 == param_3[4] || (func_0x007877e0(), (int)lVar7 != 0)))) {
        puVar9 = (undefined8 *)puVar5[6];
        if (puVar9 != (undefined8 *)param_3[6]) {
          func_0x007877e0();
          goto LAB_00421338;
        }
        goto LAB_0042132c;
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_00421338:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 00421238; end: 00421353; -[SCNotificationExtensionExecution isEqual:] */

long FUN_00421238(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0042132c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00421338;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x007877e0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x007877e0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x007877e0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x007877e0();
          goto LAB_00421338;
        }
        goto LAB_0042132c;
      }
    }
    lVar4 = 0;
  }
LAB_00421338:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 00421354; end: 0042135b; -[SCNotificationExtensionExecution notificationType] */

undefined8 FUN_00421354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0042135c; end: 00421363; -[SCNotificationExtensionExecution notificationId] */

undefined8 FUN_0042135c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00421364; end: 0042136b; -[SCNotificationExtensionExecution appIsInForeground] */

undefined1 FUN_00421364(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0042136c; end: 00421373; -[SCNotificationExtensionExecution processingStartDate] */

undefined8 FUN_0042136c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00421374; end: 0042137b; -[SCNotificationExtensionExecution memoryUsedMB] */

undefined8 FUN_00421374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0042137c; end: 00421383; -[SCNotificationExtensionExecution campaignType] */

undefined8 FUN_0042137c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00421384; end: 004213cb; -[SCNotificationExtensionExecution .cxx_destruct] */

void FUN_00421384(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 004213cc; end: 0042143f; -[SCNativeGrapheneExtensionLoggerDelegate initWithGrapeneExtensionLogger:] */

undefined1 * FUN_004213cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCNativeGrapheneExtensionLoggerDelegate_00ac3a48;
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



/* Entry: 00421440; end: 0042148f; -[SCNativeGrapheneExtensionLoggerDelegate increment:count:] */

void FUN_00421440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_00421490(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784860(uVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00421490; end: 0042154b;  */

void FUN_00421490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x0078a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x007893a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x007821a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00786420(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0042154c; end: 0042159b; -[SCNativeGrapheneExtensionLoggerDelegate addTimer:durationMs:] */

void FUN_0042154c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_00421490(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e920((double)param_4,uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042159c; end: 004215eb; -[SCNativeGrapheneExtensionLoggerDelegate addHistogram:value:] */

void FUN_0042159c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_00421490(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e640(uVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004215ec; end: 004215f7; -[SCNativeGrapheneExtensionLoggerDelegate .cxx_destruct] */

void FUN_004215ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004215f8; end: 00421717; -[SCGrapheneExtensionLogger initWithGrapheneExtensionConfiguration:userId:] */

undefined1 *
FUN_004215f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR__OBJC_CLASS___SCGrapheneExtensionLogger_00ac3a50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2ba8;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00782ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00786da0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_00ac2bb0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_00ac2bb8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00421718; end: 00421787; -[SCGrapheneExtensionLogger increment:value:] */

void FUN_00421718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x007829a0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00421788; end: 004217f7; -[SCGrapheneExtensionLogger addTimer:durationMs:] */

void FUN_00421788(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_2 + 0x28);
  func_0x007829a0(*(undefined8 *)(param_2 + 8),param_3,param_4,(long)param_1,2);
  _os_unfair_lock_unlock(param_2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 004217f8; end: 00421867; -[SCGrapheneExtensionLogger addHistogram:value:] */

void FUN_004217f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x007829a0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,3);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00421868; end: 00421913; -[SCGrapheneExtensionLogger flushMetricsWithCompletionHandler:forceLogging:] */

void FUN_00421868(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00783860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_004218d0:
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    if ((param_4 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00791700(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
      if ((int)uVar2 == 0) goto LAB_004218d0;
    }
    func_0x00793220(*(undefined8 *)(param_1 + 0x10),param_2,lVar1,param_3);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00421914; end: 0042195b; -[SCGrapheneExtensionLogger .cxx_destruct] */

void FUN_00421914(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0042195c; end: 00421a87; -[SCGrapheneExtensionProcessor initWithUserId:etag:] */

undefined1 *
FUN_0042195c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3a58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x0077c1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___SCTimeProvider_00ac2a80;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00421a88; end: 00421ceb; -[SCGrapheneExtensionProcessor enqueueMetric:value:type:] */

/* WARNING: Removing unreachable block (ram,0x00421b38) */

void FUN_00421a88(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = param_3;
    func_0x007821a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar3 = uVar2;
    func_0x00780ea0();
    while (uVar3 != 0) {
      uVar10 = 0;
      do {
        uVar11 = *(ulong *)(uVar10 * 8);
        puVar9 = PTR__OBJC_CLASS___NSString_00ac2988;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
        _objc_opt_isKindOfClass(uVar11,puVar9);
        if ((uVar11 & 1) == 0) {
LAB_00421c38:
          _objc_release(uVar2);
          goto LAB_00421ca4;
        }
        uVar11 = uVar2;
        func_0x00789f00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSString_00ac2988;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
        uVar4 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar9);
        _objc_release(uVar11);
        if ((uVar4 & 1) == 0) goto LAB_00421c38;
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
      uVar3 = uVar2;
      func_0x00780ea0();
    }
    _objc_release(uVar2);
    _objc_release(uVar2);
    dVar12 = *(double *)(param_1 + 0x28);
    if (dVar12 <= 0.0) {
      func_0x0077e1a0(*(undefined8 *)(param_1 + 0x30));
      *(double *)(param_1 + 0x28) = dVar12 * 1000.0;
    }
    uVar2 = param_1;
    if (param_5 == 3) {
      func_0x0077bf80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    else if (param_5 == 2) {
      func_0x0077bf80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      if (param_5 != 1) goto LAB_00421ca8;
      func_0x0077bf60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
    }
    func_0x0078f4e0(uVar5);
LAB_00421ca4:
    _objc_release(uVar2);
  }
LAB_00421ca8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_3 + 8);
  func_0x00780e80();
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_3 + 0x10);
    func_0x00780e80();
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_3 + 0x18);
      func_0x00780e80();
      if (lVar8 == 0) {
        puVar9 = (undefined *)0x0;
        goto LAB_00421f3c;
      }
    }
  }
  puVar9 = PTR_PTR_00ac2bc0;
  _objc_opt_new(PTR_PTR_00ac2bc0);
  lVar8 = *(long *)(param_3 + 8);
  func_0x00780e80();
  if (lVar8 != 0) {
    uVar3 = param_3;
    func_0x0077c1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d800(puVar9);
    _objc_release(uVar3);
    func_0x0078b280(*(undefined8 *)(param_3 + 8));
  }
  lVar8 = *(long *)(param_3 + 0x10);
  func_0x00780e80();
  if (lVar8 != 0) {
    uVar3 = param_3;
    func_0x0077c1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790b20(puVar9);
    _objc_release(uVar3);
    func_0x0078b280(*(undefined8 *)(param_3 + 0x10));
  }
  lVar8 = *(long *)(param_3 + 0x18);
  func_0x00780e80();
  if (lVar8 != 0) {
    uVar3 = param_3;
    func_0x0077c1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078eba0(puVar9);
    _objc_release(uVar3);
    func_0x0078b280(*(undefined8 *)(param_3 + 0x18));
  }
  func_0x0078d460(puVar9);
  func_0x0078d0e0(puVar9);
  func_0x0077e1a0(*(undefined8 *)(param_3 + 0x30));
  func_0x0078d0c0(puVar9);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
  func_0x0078c3a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a23f20;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar1;
  func_0x00788bc0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar7 = puVar9;
  func_0x0077ee60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e1a0();
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  puVar7 = puVar9;
  func_0x0077ee60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791240();
  _objc_release(puVar7);
  puVar7 = puVar9;
  func_0x0077ee60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x007911e0();
  _objc_release(puVar7);
  func_0x007910a0(puVar9);
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  func_0x007815a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c980(puVar9);
  _objc_release(uVar5);
  *(undefined8 *)(param_3 + 0x28) = 0;
LAB_00421f3c:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar9);
  return;
}



/* Entry: 00421cec; end: 00421f57; -[SCGrapheneExtensionProcessor flush] */

void FUN_00421cec(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00780e80();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00780e80();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00780e80();
      if (lVar2 == 0) {
        puVar6 = (undefined *)0x0;
        goto LAB_00421f3c;
      }
    }
  }
  puVar6 = PTR_PTR_00ac2bc0;
  _objc_opt_new(PTR_PTR_00ac2bc0);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00780e80();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x0077c1c0(param_1,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d800(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    func_0x0078b280(*(undefined8 *)(param_1 + 8));
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00780e80();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x0077c1c0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00790b20(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    func_0x0078b280(*(undefined8 *)(param_1 + 0x10));
  }
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00780e80();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x0077c1c0(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x0078eba0(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    func_0x0078b280(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x0078d460(puVar6,param_2,1);
  dVar7 = *(double *)(param_1 + 0x28);
  func_0x0078d0e0(puVar6,param_2,(long)dVar7);
  func_0x0077e1a0(*(undefined8 *)(param_1 + 0x30));
  func_0x0078d0c0(puVar6,param_2,(long)(dVar7 * 1000.0));
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
  func_0x0078c3a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a23f20;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar1;
  func_0x00788bc0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = puVar6;
  func_0x0077ee60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e1a0();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  puVar4 = puVar6;
  func_0x0077ee60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791240();
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x0077ee60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x007911e0();
  _objc_release(puVar4);
  func_0x007910a0(puVar6,param_2,*(undefined8 *)(param_1 + 0x38));
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x007815a0(uVar5,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c980(puVar6,param_2,uVar5);
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_00421f3c:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
  return;
}



/* Entry: 00421f58; end: 00421feb; -[SCGrapheneExtensionProcessor _buildGrapheneMetricFromDictionary:] */

void FUN_00421f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00421fec;
  puStack_30 = &UNK_009e32e8;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00782b60(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00421fec; end: 0042227b;  */

/* WARNING: Removing unreachable block (ram,0x004220fc) */

void FUN_00421fec(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2bd0;
  _objc_opt_new();
  lVar2 = param_2;
  func_0x0078a3c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f660(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x007893c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ef80(puVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_00ac2bd8;
  func_0x0077f120(PTR_PTR_00ac2bd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00780ea0();
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      func_0x00788b40(*(undefined8 *)(lVar9 * 8));
      func_0x0077e9c0(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00780ea0();
  }
  _objc_release(param_3);
  func_0x007911c0(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  lVar2 = param_2;
  func_0x007821a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00780e80();
  func_0x00782000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x007821a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  func_0x00782b60(lVar2);
  _objc_release(lVar2);
  func_0x0078d8c0(puVar1);
  puVar5 = puVar1;
  func_0x0077e720(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(lVar6);
    func_0x00788bc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    lVar2 = lVar6;
    func_0x00788bc0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x0078f4e0(uVar8);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar5);
    return;
  }
  return;
}



/* Entry: 0042227c; end: 004222ff;  */

void FUN_0042227c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00788bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00788bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x0078f4e0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00422300; end: 00422483; -[SCGrapheneExtensionProcessor _buildAppVersion] */

void FUN_00422300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  
  puVar5 = *(undefined **)(param_1 + 0x20);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR_PTR_00ac2be0;
    _objc_alloc_init(PTR_PTR_00ac2be0);
    puVar1 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
    func_0x0077ee60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00780860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = puVar2;
    func_0x00780e80();
    if (puVar3 != (undefined1 *)0x0) {
      puVar3 = puVar2;
      func_0x00789e20(puVar2,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x007871a0();
      func_0x0078eda0(puVar5,param_2,puVar4);
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00780e80();
    if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3) {
      puVar3 = puVar2;
      func_0x00789e20(puVar2,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x007871a0();
      func_0x0078efc0(puVar5,param_2,puVar4);
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00780e80();
    if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar3) {
      puVar3 = puVar2;
      func_0x00789e20(puVar2,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x007871a0();
      func_0x0078f6a0(puVar5,param_2,puVar4);
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00780e80();
    if ((undefined1 *)((long)&MACH_HEADER.magic + 3) < puVar3) {
      puVar3 = puVar2;
      func_0x00789e20(puVar2,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x007871a0();
      func_0x0078d100(puVar5,param_2,puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00422484; end: 0042252b; -[SCGrapheneExtensionProcessor _aggregateCountMetric:value:] */

void FUN_00422484(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00789f00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar1 = lVar2;
  func_0x00788b40(lVar2);
  func_0x00789cc0(puVar3,param_2,lVar1 + param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1c0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 0042252c; end: 0042261b; -[SCGrapheneExtensionProcessor _aggregateSamplingMetric:metricType:value:] */

void FUN_0042252c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_4 == 2) {
    lVar4 = 0x10;
  }
  else {
    if (param_4 != 3) {
      puVar5 = (undefined *)0x0;
      goto LAB_00422574;
    }
    lVar4 = 0x18;
  }
  puVar5 = *(undefined **)(param_1 + lVar4);
  _objc_retain(puVar5);
LAB_00422574:
  puVar1 = puVar5;
  func_0x00789f00(puVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  if (puVar1 == (undefined *)0x0) {
    func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f1c0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720(puVar1,param_2,puVar2);
    puVar3 = puVar1;
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0042261c; end: 00422687; -[SCGrapheneExtensionProcessor .cxx_destruct] */

void FUN_0042261c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00422688; end: 00422693; -[SCGrapheneExtensionSampler init] */

void FUN_00422688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithRandomNumberGenerator__00abc658,
             &PTR___NSConcreteGlobalBlock_009e3338);
  return;
}



/* Entry: 00422694; end: 004226c3;  */

double FUN_00422694(uint param_1)

{
  _arc4random();
  return ((double)param_1 / 4294967295.0) * 100.0;
}



/* Entry: 004226c4; end: 0042273b; -[SCGrapheneExtensionSampler initWithRandomNumberGenerator:] */

undefined1 * FUN_004226c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0042273c; end: 004227b7; -[SCGrapheneExtensionSampler shouldUploadMetricWithConfig:] */

bool FUN_0042273c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  _objc_retain(param_4);
  func_0x0078be80(param_4);
  fVar5 = 10.0;
  if (fVar3 <= 10.0) {
    func_0x0078be80(param_4);
    fVar5 = fVar3;
  }
  (**(code **)(*(long *)(param_2 + 8) + 0x10))();
  bVar1 = false;
  bVar2 = false;
  if ((double)CONCAT44(uVar4,fVar3) < (double)fVar5) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar5)) {
      bVar1 = fVar5 == 0.0;
      bVar2 = 0.0 <= fVar5;
    }
  }
  _objc_release(param_4);
  return bVar2 && !bVar1;
}



/* Entry: 004227b8; end: 004227c3; -[SCGrapheneExtensionSampler .cxx_destruct] */

void FUN_004227b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004227c4; end: 0042282f; -[SCGrapheneExtensionUploader init] */

undefined1 * FUN_004227c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
    func_0x00791580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00422830; end: 00422977; -[SCGrapheneExtensionUploader uploadMetricFrame:completionHandler:] */

void FUN_00422830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_retain(param_3);
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x007814c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(param_4);
  func_0x00788d40(uVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00422980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))();
  return;
}



/* Entry: 00422978; end: 00422983;  */

void FUN_00422978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00422980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 00422984; end: 0042298f; -[SCGrapheneExtensionUploader .cxx_destruct] */

void FUN_00422984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00422990; end: 00422a67; -[SCExtensionGrapheneMetric initWithPartitionName:metricName:dimensions:] */

undefined1 *
FUN_00422990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac3a70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00422a68; end: 00422a8b; -[SCExtensionGrapheneMetric copyWithZone:] */

undefined8 FUN_00422a68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00422a8c; end: 00422b0b; -[SCExtensionGrapheneMetric hash] */

undefined8 * FUN_00422a8c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x007843a0();
  uStack_30 = uVar1;
  func_0x0076fd30(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_00422ba4:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_00422bb0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x007877e0();
            goto LAB_00422bb0;
          }
          goto LAB_00422ba4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_00422bb0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 00422b0c; end: 00422bcb; -[SCExtensionGrapheneMetric isEqual:] */

long FUN_00422b0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_00422ba4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00422bb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x007877e0();
            goto LAB_00422bb0;
          }
          goto LAB_00422ba4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_00422bb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 00422bcc; end: 00422bd3; -[SCExtensionGrapheneMetric partitionName] */

undefined8 FUN_00422bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00422bd4; end: 00422bdb; -[SCExtensionGrapheneMetric metricName] */

undefined8 FUN_00422bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00422bdc; end: 00422be3; -[SCExtensionGrapheneMetric dimensions] */

undefined8 FUN_00422bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00422be4; end: 00422c1f; -[SCExtensionGrapheneMetric .cxx_destruct] */

void FUN_00422be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00422c20; end: 00422cbb; -[SCGrapheneExtensionsConfigurations initWithCoder:] */

undefined1 *
FUN_00422c20(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR__OBJC_CLASS___SCGrapheneExtensionsConfigurations_00ac3a78;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00781aa0(param_4);
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00422cbc; end: 00422d43; -[SCGrapheneExtensionsConfigurations initWithSamplingRate:etag:] */

undefined1 *
FUN_00422cbc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR__OBJC_CLASS___SCGrapheneExtensionsConfigurations_00ac3a78;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00422d44; end: 00422d67; -[SCGrapheneExtensionsConfigurations copyWithZone:] */

undefined8 FUN_00422d44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00422d68; end: 00422dc7; -[SCGrapheneExtensionsConfigurations encodeWithCoder:] */

void FUN_00422d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00782720(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_00a23fe0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a233c0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00422dc8; end: 00422e53; -[SCGrapheneExtensionsConfigurations hash] */

long * FUN_00422dc8(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar5 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_28 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x0076fd30(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_00422eec:
    plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_00422ef8;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if (((ulong)plVar4 & 1) != 0) {
      fVar8 = ABS(*(float *)(plVar3 + 1) - *(float *)(param_3 + 1));
      fVar7 = ABS(*(float *)(plVar3 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar8) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar1 = fVar8 < fVar7;
      }
      if (bVar1) {
        plVar6 = (long *)plVar3[2];
        if (plVar6 != (long *)param_3[2]) {
          func_0x007877e0();
          goto LAB_00422ef8;
        }
        goto LAB_00422eec;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_00422ef8:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 00422e54; end: 00422f13; -[SCGrapheneExtensionsConfigurations isEqual:] */

long FUN_00422e54(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_00422eec:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00422ef8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_00422ef8;
        }
        goto LAB_00422eec;
      }
    }
    lVar4 = 0;
  }
LAB_00422ef8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 00422f14; end: 00422f1b; -[SCGrapheneExtensionsConfigurations samplingRate] */

undefined4 FUN_00422f14(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 00422f1c; end: 00422f23; -[SCGrapheneExtensionsConfigurations etag] */

undefined8 FUN_00422f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00422f24; end: 00422f2f; -[SCGrapheneExtensionsConfigurations .cxx_destruct] */

void FUN_00422f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00422f30; end: 00422fab;  */

undefined * FUN_00422f30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fd48 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a24000,&UNK_007ffd30,&UNK_007ffd74,7,
                    FUN_00422fac,0);
    do {
      if (puRam0000000000b5fd48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fd48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fd48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fd48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fd48;
}



/* Entry: 00422fac; end: 00422fb7;  */

bool FUN_00422fac(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 00422fb8; end: 0042301f; +[SCPbGrapheneAppVersion descriptor] */

void FUN_00422fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd50 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad4158,
                    &PTR____CFConstantStringClassReference_00a24020,0xb00790,
                    &PTR_s_versionNumber_00b007a8,3,0x20,0x1c);
    puRam0000000000b5fd50 = puVar1;
  }
  return;
}



/* Entry: 00423020; end: 0042309b; +[SCPbGrapheneAppVersion_VersionNumber descriptor] */

undefined * FUN_00423020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd58 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad41a8,
                    &PTR____CFConstantStringClassReference_00a24040,0xb00790,&PTR_s_major_00b00808,4
                    ,0x14,0x1c);
    func_0x00791420();
    puRam0000000000b5fd58 = puVar1;
  }
  return puRam0000000000b5fd58;
}



/* Entry: 0042309c; end: 00423103; +[SCPbGrapheneMetric descriptor] */

void FUN_0042309c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd60 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad41f8,
                    &PTR____CFConstantStringClassReference_00a24060,0xb00790,
                    &PTR_s_partitionName_00b00888,4,0x28,0x1c);
    puRam0000000000b5fd60 = puVar1;
  }
  return;
}



/* Entry: 00423104; end: 0042316b; +[SCPbGrapheneMetricFrame descriptor] */

void FUN_00423104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd68 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad4248,
                    &PTR____CFConstantStringClassReference_00a24080,0xb00790,
                    &PTR_s_timersArray_00b00908,0xd,0x60,0x1c);
    puRam0000000000b5fd68 = puVar1;
  }
  return;
}



/* Entry: 0042316c; end: 004231ef; +[SCProcessedNotificationDb schema] */

void FUN_0042316c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2be8;
  _objc_alloc(PTR_PTR_00ac2be8);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  "\nCREATE TABLE IF NOT EXISTS ProcessedNotifications (\n    -- SQLite\'s rowid for this notification record\n    _id INTEGER PRIMARY KEY AUTOINCREMENT,\n\n    -- The unique ID for this notification record in UUID format\n    notificationId TEXT NOT NULL,\n    \n    -- The notification type for this notification record\n    type TEXT NOT NULL,\n    \n    -- The timestamp that the notification was processed\n    timestamp INTEGER NOT NULL,\n\n    -- The notification category for this notification record.\n    -- See SCNotificationCategory for more info on what this represents.\n    category INTEGER NOT NULL\n);\n"
                 );
  _objc_retainAutoreleasedReturnValue();
  func_0x00787000(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_00999d10);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004231f0; end: 00423217; -[SCProcessedNotificationDb getConn] */

void FUN_004231f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00423218; end: 0042329f; -[SCProcessedNotificationDb initWithSqliteConnection:] */

undefined1 * FUN_00423218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3a80;
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



/* Entry: 004232a0; end: 0042330b; -[SCProcessedNotificationDb .cxx_destruct] */

void FUN_004232a0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0042330c; end: 00423317; -[SCProcessedNotificationDb .cxx_construct] */

void FUN_0042330c(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 00423318; end: 00423453;  */

void FUN_00423318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0077e780(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      FUN_0042766c(lVar1,*(undefined8 *)(param_1 + 8),&UNK_007ffd90,0x7c);
      FUN_00648ef4();
      FUN_00648ef4(lVar1,2,param_3);
      FUN_00427314(lVar1,FUN_00423454);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00423454; end: 004234c7;  */

void FUN_00423454(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2bf0;
  _objc_alloc(PTR_PTR_00ac2bf0);
  FUN_004275f0(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00423920(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004234c8; end: 0042365f;  */

void FUN_004234c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x18;
      FUN_0042766c(lVar2,*(undefined8 *)(param_1 + 8),&UNK_007ffe0d,0x78);
      iStack_54 = 1;
      FUN_0042712c();
      FUN_0042712c(lVar2,&iStack_54,param_3);
      iVar1 = iStack_54;
      FUN_00648ef4(lVar2,iStack_54,param_4);
      FUN_00648ef4(lVar2,iVar1 + 1,param_5);
      FUN_004271d0(lVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00423660; end: 00423767;  */

void FUN_00423660(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      FUN_0042766c(lVar1,*(undefined8 *)(param_1 + 8),&UNK_007ffe86,0x4c);
      FUN_00648ef4();
      FUN_004271d0(lVar1);
    }
  }
  return;
}



/* Entry: 00423768; end: 0042378b; -[SCProcessedNotifications copyWithZone:] */

undefined8 FUN_00423768(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0042378c; end: 00423817; -[SCProcessedNotifications hash] */

long * FUN_0042378c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x007843a0();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_40 = uVar2;
  func_0x0076fd30(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_004238c8:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_004238d4;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)plVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)plVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_004238d4;
        }
        goto LAB_004238c8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_004238d4:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 00423818; end: 004238ef; -[SCProcessedNotifications isEqual:] */

long FUN_00423818(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004238c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004238d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_004238d4;
        }
        goto LAB_004238c8;
      }
    }
    lVar3 = 0;
  }
LAB_004238d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004238f0; end: 0042399b; -[SCProcessedNotifications .cxx_destruct] */

void FUN_004238f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0042399c; end: 004239bf; -[SCGetNotificationIdsByCategory copyWithZone:] */

undefined8 FUN_0042399c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004239c0; end: 004239c7; -[SCGetNotificationIdsByCategory hash] */

void FUN_004239c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007843b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_hash_00abbdf0);
  return;
}



/* Entry: 004239c8; end: 00423a57; -[SCGetNotificationIdsByCategory isEqual:] */

long FUN_004239c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00423a3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_00423a3c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x007877e0();
      goto LAB_00423a3c;
    }
  }
  lVar3 = 1;
LAB_00423a3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 00423a58; end: 00423a63;  */

undefined8 FUN_00423a58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 00423a64; end: 00423a6f; -[SCGetNotificationIdsByCategory .cxx_destruct] */

void FUN_00423a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00423a70; end: 00423ae3; -[SCProcessedNotificationServices initWithProcessedNotificationStorage:] */

undefined1 * FUN_00423a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3a98;
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



/* Entry: 00423ae4; end: 00423aeb; -[SCProcessedNotificationServices processedNotificationStorage] */

undefined8 FUN_00423ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00423aec; end: 00423af7; -[SCProcessedNotificationServices .cxx_destruct] */

void FUN_00423aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00423af8; end: 00423bab; -[SCProcessedNotification initWithNotificationId:notificationType:timestampMs:] */

undefined1 *
FUN_00423af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR__OBJC_CLASS___SCProcessedNotification_00ac3aa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00423bac; end: 00423bcf; -[SCProcessedNotification copyWithZone:] */

undefined8 FUN_00423bac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00423bd0; end: 00423c4f; -[SCProcessedNotification hash] */

undefined8 * FUN_00423bd0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x007843a0();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x0076fd30(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_00423ce0:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_00423cec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_00423cec;
        }
        goto LAB_00423ce0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_00423cec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


