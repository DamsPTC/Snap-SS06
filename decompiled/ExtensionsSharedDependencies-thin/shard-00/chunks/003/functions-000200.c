/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0047c31c; end: 0047c39b;  */

void FUN_0047c31c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = param_1;
  FUN_0047c0a4();
  if ((int)lVar3 == 0) {
    uVar1 = *param_2;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
    FUN_0040d514(&lStack_30);
    return;
  }
  FUN_0047c1a0(2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x47c38c);
  (*pcVar2)();
}



/* Entry: 0047c39c; end: 0047c3b7;  */

void FUN_0047c39c(void)

{
  return;
}



/* Entry: 0047c3b8; end: 0047c463;  */

undefined4 FUN_0047c3b8(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    FUN_0040d514(&lStack_40);
    return uVar1;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x47c444);
  (*pcVar2)();
}



/* Entry: 0047c464; end: 0047c487;  */

undefined8 FUN_0047c464(undefined8 param_1)

{
  FUN_0047c488(param_1,0);
  return param_1;
}



/* Entry: 0047c488; end: 0047c4f7;  */

void FUN_0047c488(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0047c4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 0047c4f8; end: 0047c54b;  */

void FUN_0047c4f8(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x0047bc10(&uStack_40,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  FUN_0040d974(&uStack_40);
  return;
}



/* Entry: 0047c54c; end: 0047c5bf;  */

void FUN_0047c54c(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_0047c4f8(auStack_48);
  pcStack_28 = FUN_00479f34;
  puStack_30 = auStack_48;
  func_0x00461914("{}");
  FUN_00721c60(param_1);
  FUN_0040d974(auStack_48);
  return;
}



/* Entry: 0047c5c0; end: 0047c763;  */

void FUN_0047c5c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  func_0x007933a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(auStack_68);
  func_0x0078c8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_88);
  uVar1 = param_2;
  func_0x00781f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_a8);
  func_0x00781fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_c8);
  uVar2 = param_2;
  func_0x0077e2e0(param_2);
  func_0x0077e300(param_2);
  FUN_0047c8bc(param_1,auStack_68,auStack_88,auStack_a8,auStack_c8,uVar2,param_2);
  FUN_00457530(auStack_c8);
  func_0x0047c9a0();
  FUN_00457530(auStack_a8);
  _objc_release(uVar1);
  FUN_00457530(auStack_88);
  func_0x0047c998();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x0047c990();
  func_0x0047c988();
  return;
}



/* Entry: 0047c764; end: 0047c7c7;  */

void FUN_0047c764(void)

{
  func_0x0047c9a8();
  _objc_retainAutorelease();
  func_0x0077bcc0();
  func_0x00788320();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047c7c8; end: 0047c843;  */

void FUN_0047c7c8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0047c9a8();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 0;
  }
  else {
    FUN_0047c764(&uStack_38);
    unaff_x20[1] = uStack_30;
    *unaff_x20 = uStack_38;
    unaff_x20[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  }
  func_0x0047c988();
  return;
}



/* Entry: 0047c844; end: 0047c88b;  */

void FUN_0047c844(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
  func_0x00784e20();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0047c88c; end: 0047c8bb;  */

void FUN_0047c88c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0047c844();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0047c8bc; end: 0047c9b3;  */

void FUN_0047c8bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[9] = param_4[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xd] = param_5[2];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = param_6;
  *(undefined1 *)((long)param_1 + 0x79) = param_7;
  return;
}



/* Entry: 0047c9b4; end: 0047cb0f; -[SCNNotificationsAckConfig initWithUserAgentPrefix:sessionId:deviceId:deviceToken:ackDisplayedNotifications:ackSuppressedNotifications:] */

undefined1 *
FUN_0047c9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_00ac3cf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_0047cbc4(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0047cbc4(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_0047cbc4(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_0047cbc4(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0047cb10; end: 0047cb27; -[SCNNotificationsAckConfig initWithUserAgentPrefix:ackDisplayedNotifications:ackSuppressedNotifications:] */

void FUN_0047cb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00786d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithUserAgentPrefix_sessionI_00abc848,param_3,0,0,0,param_4,param_5);
  return;
}



/* Entry: 0047cb28; end: 0047cb2f; -[SCNNotificationsAckConfig userAgentPrefix] */

undefined8 FUN_0047cb28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0047cb30; end: 0047cb37; -[SCNNotificationsAckConfig setUserAgentPrefix:] */

void FUN_0047cb30(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047cb38; end: 0047cb3f; -[SCNNotificationsAckConfig sessionId] */

undefined8 FUN_0047cb38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0047cb40; end: 0047cb47; -[SCNNotificationsAckConfig setSessionId:] */

void FUN_0047cb40(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047cb48; end: 0047cb4f; -[SCNNotificationsAckConfig deviceId] */

undefined8 FUN_0047cb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0047cb50; end: 0047cb57; -[SCNNotificationsAckConfig setDeviceId:] */

void FUN_0047cb50(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047cb58; end: 0047cb5f; -[SCNNotificationsAckConfig deviceToken] */

undefined8 FUN_0047cb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0047cb60; end: 0047cb67; -[SCNNotificationsAckConfig setDeviceToken:] */

void FUN_0047cb60(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047cb68; end: 0047cb6f; -[SCNNotificationsAckConfig ackDisplayedNotifications] */

undefined1 FUN_0047cb68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0047cb70; end: 0047cb77; -[SCNNotificationsAckConfig setAckDisplayedNotifications:] */

void FUN_0047cb70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0047cb78; end: 0047cb7f; -[SCNNotificationsAckConfig ackSuppressedNotifications] */

undefined1 FUN_0047cb78(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 0047cb80; end: 0047cb87; -[SCNNotificationsAckConfig setAckSuppressedNotifications:] */

void FUN_0047cb80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 0047cb88; end: 0047cbc3; -[SCNNotificationsAckConfig .cxx_destruct] */

void FUN_0047cb88(long param_1)

{
  func_0x0047cbcc(param_1 + 0x28);
  func_0x0047cbcc(param_1 + 0x20);
  func_0x0047cbcc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0047cbc4; end: 0047cbd3;  */

void FUN_0047cbc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0047cbd4; end: 0047cbef;  */

void FUN_0047cbd4(void)

{
  _objc_alloc_init(PTR_PTR_00ac2ea8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0047cbf0; end: 0047cc23; -[SCNNotificationsConversationMuteOptionsData init] */

void FUN_0047cbf0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac3cf8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0047cc24; end: 0047cceb;  */

void FUN_0047cc24(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_00ac2eb0;
  _objc_alloc(PTR_PTR_00ac2eb0);
  iVar1 = *param_1;
  if (*(char *)((long)param_1 + 5) == '\x01') {
    piVar3 = param_1 + 1;
    FUN_0047cbd4(piVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (*(char *)((long)param_1 + 7) == '\x01') {
    lVar4 = (long)param_1 + 6;
    FUN_00480870(lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = 0;
  }
  func_0x00786b20(puVar2,param_2,(long)iVar1,piVar3,lVar4);
  FUN_0047ccec();
  func_0x0047ccf4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0047ccec; end: 0047ccfb;  */

void FUN_0047ccec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047ccfc; end: 0047cdc3; -[SCNNotificationsGroupingAction initWithType:showConversationMuteOptionsData:suppressData:] */

undefined1 *
FUN_0047ccfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac3d00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 0047cdc4; end: 0047cdcf; -[SCNNotificationsGroupingAction initWithType:] */

void FUN_0047cdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithType_showConversationMut_00abc7d0,param_3,0,0);
  return;
}



/* Entry: 0047cdd0; end: 0047cdd7; -[SCNNotificationsGroupingAction type] */

undefined8 FUN_0047cdd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0047cdd8; end: 0047cddf; -[SCNNotificationsGroupingAction setType:] */

void FUN_0047cdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0047cde0; end: 0047cde7; -[SCNNotificationsGroupingAction showConversationMuteOptionsData] */

undefined8 FUN_0047cde0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0047cde8; end: 0047ce0b; -[SCNNotificationsGroupingAction setShowConversationMuteOptionsData:] */

void FUN_0047cde8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0047ce68();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047ce0c; end: 0047ce13; -[SCNNotificationsGroupingAction suppressData] */

undefined8 FUN_0047ce0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0047ce14; end: 0047ce37; -[SCNNotificationsGroupingAction setSuppressData:] */

void FUN_0047ce14(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0047ce68();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047ce38; end: 0047ce67; -[SCNNotificationsGroupingAction .cxx_destruct] */

void FUN_0047ce38(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0047ce68; end: 0047ce77;  */

void FUN_0047ce68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 0047ce78; end: 0047cf77;  */

void FUN_0047ce78(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_00ac2eb8;
  _objc_alloc(PTR_PTR_00ac2eb8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,param_1[1] - *param_1 >> 3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 8) {
    lVar4 = lVar6;
    FUN_0047cc24(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  puVar5 = puVar3;
  func_0x00780e20(puVar3);
  _objc_release(puVar3);
  func_0x00784b60(puVar2,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0047cf78; end: 0047d01b; -[SCNNotificationsGroupingResult initWithActions:] */

undefined1 * FUN_0047cf78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3d08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0047d01c; end: 0047d023; -[SCNNotificationsGroupingResult actions] */

undefined8 FUN_0047d01c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0047d024; end: 0047d02b; -[SCNNotificationsGroupingResult setActions:] */

void FUN_0047d024(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047d02c; end: 0047d037; -[SCNNotificationsGroupingResult .cxx_destruct] */

void FUN_0047d02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0047d038; end: 0047d183;  */

void FUN_0047d038(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  
  _objc_retain();
  func_0x0078aac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047d184(auStack_80);
  func_0x00788020(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_a0);
  uVar1 = param_2;
  func_0x00791ac0(param_2);
  uVar2 = param_2;
  func_0x0078afe0(param_2);
  func_0x0078b0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_0047d1e8();
  FUN_0047d364(param_1,auStack_80,auStack_a0,uVar1,uVar2,uVar3,param_3 & 0xff);
  _objc_release(param_2);
  FUN_00457530(auStack_a0);
  func_0x0047d9ac();
  FUN_00459de4(auStack_80);
  func_0x0047d990();
  func_0x0047d988();
  return;
}



/* Entry: 0047d184; end: 0047d1e7;  */

void FUN_0047d184(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x0047d9b4();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_0047d3e8(auStack_48);
    FUN_00465ac8();
    func_0x00459d84(auStack_48);
  }
  func_0x0047d988();
  return;
}



/* Entry: 0047d1e8; end: 0047d24f;  */

undefined1  [16] FUN_0047d1e8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    func_0x0078b0c0(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  FUN_0047d988();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 0047d250; end: 0047d333;  */

void FUN_0047d250(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_00ac2ec0;
  _objc_alloc(PTR_PTR_00ac2ec0);
  lVar3 = param_1;
  FUN_0047d334(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  FUN_0047c88c(lVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    param_1 = param_1 + 0x60;
    FUN_004807e8(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00786500(puVar2,param_2,lVar3,lVar4,(long)iVar1,uVar5,param_1);
  func_0x0047d9a0();
  func_0x0047d990();
  func_0x0047d988();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0047d334; end: 0047d363;  */

void FUN_0047d334(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_0047d8b0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0047d364; end: 0047d3e7;  */

void FUN_0047d364(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00463b54();
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x40) = param_3[2];
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(undefined8 *)(param_1 + 0x60) = param_6;
  *(undefined8 *)(param_1 + 0x68) = param_7;
  return;
}



/* Entry: 0047d3e8; end: 0047d4e7;  */

void FUN_0047d3e8(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x0047d9b4();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_0047d4e8;
  uStack_68 = 0x47d4f4;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  func_0x00780e80();
  FUN_0047d5c0(&uStack_58,unaff_x19);
  func_0x00782b60();
  FUN_00459254();
  func_0x0047d9c0();
  func_0x00459d84(&uStack_58);
  func_0x0047d988();
  return;
}



/* Entry: 0047d4e8; end: 0047d4fb;  */

void FUN_0047d4e8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 0047d4fc; end: 0047d5a7;  */

void FUN_0047d4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  FUN_0047c764(auStack_48,param_2);
  FUN_0047c764(auStack_60,param_3);
  FUN_0047d5a8(lVar1 + 0x30,auStack_48,auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  FUN_0047d988();
  return;
}



/* Entry: 0047d5a8; end: 0047d5bf;  */

void FUN_0047d5a8(void)

{
  FUN_0047d5d4();
  return;
}



/* Entry: 0047d5c0; end: 0047d5d3;  */

void FUN_0047d5c0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (ulong)((float)param_2 / *(float *)(param_1 + 4));
  if (uVar1 - 1 == 0) {
    uVar1 = 2;
  }
  else if ((uVar1 & uVar1 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar8 = param_1[1];
  if (uVar1 <= uVar8) {
    if (uVar1 < uVar8) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      if (uVar1 < uVar8) goto LAB_00459368;
    }
    return;
  }
LAB_00459368:
  if (uVar1 == 0) {
    FUN_004594e4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_004594fc(plVar3);
    FUN_004594e4(param_1,plVar3);
    param_1[1] = uVar1;
    lVar2 = *param_1;
    for (uVar8 = 0; uVar1 != uVar8; uVar8 = uVar8 + 1) {
      *(undefined8 *)(lVar2 + uVar8 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = uVar1 - 1;
      uVar8 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar6 / uVar1;
      }
      uVar7 = uVar6;
      if (uVar1 <= uVar6) {
        uVar7 = uVar6 - uVar8 * uVar1;
      }
      if ((uVar1 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar2 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar8 = plVar3[1];
        if ((uVar1 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar1 <= uVar8) {
          uVar6 = 0;
          if (uVar1 != 0) {
            uVar6 = uVar8 / uVar1;
          }
          uVar8 = uVar8 - uVar6 * uVar1;
        }
        if (uVar8 != uVar7) {
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar4;
            uVar7 = uVar8;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 0047d5d4; end: 0047d5f3;  */

void FUN_0047d5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0047d5f4(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 0047d5f4; end: 0047d82b;  */

undefined1  [16]
FUN_0047d5f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1 + 3;
  FUN_004597c4();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined1 *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      unaff_x26 = (long *)((ulong)puVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0047d6c0;
          plVar2 = (long *)plVar7[1];
          if (plVar2 != plVar6) break;
          plVar2 = plVar7 + 2;
          FUN_00459c38(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_0047d7f4;
          }
        }
        if (((ulong)plVar8 & (ulong)puVar9) == 0) {
          plVar2 = (long *)((ulong)plVar2 & (ulong)puVar9);
        }
        else if (plVar8 <= plVar2) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar2 / (ulong)plVar8;
          }
          plVar2 = (long *)((long)plVar2 - uVar3 * (long)plVar8);
        }
      } while (plVar2 == unaff_x26);
    }
  }
LAB_0047d6c0:
  FUN_0047d82c(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar3 = 1;
    if ((long *)((long)&MACH_HEADER.magic + 2) < plVar8) {
      uVar3 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar3 = uVar3 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_00459320(param_1,uVar3);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x26 = (long *)((ulong)((long)plVar8 + -1) & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
  }
  plVar7 = aplStack_78[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_00459cdc(aplStack_78);
  uVar1 = 1;
LAB_0047d7f4:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 0047d82c; end: 0047d8af;  */

void FUN_0047d82c(undefined8 *param_1,long param_2,qword param_3,qword *param_4,undefined8 *param_5)

{
  qword *pqVar1;
  qword qVar2;
  undefined8 uVar3;
  
  pqVar1 = &segment_command_00000020.vmsize;
  __Znwm();
  *param_1 = pqVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *pqVar1 = 0;
  pqVar1[1] = param_3;
  qVar2 = *param_4;
  pqVar1[3] = param_4[1];
  pqVar1[2] = qVar2;
  pqVar1[4] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar3 = *param_5;
  pqVar1[6] = param_5[1];
  pqVar1[5] = uVar3;
  pqVar1[7] = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  return;
}



/* Entry: 0047d8b0; end: 0047d987;  */

void FUN_0047d8b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00782000(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8,param_2,
                  *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  plVar4 = (long *)(param_1 + 0x10);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    lVar2 = (long)(plVar4 + 5);
    FUN_0047c844(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)(plVar4 + 2);
    FUN_0047c844(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar1,param_2,lVar2,lVar3);
    func_0x0047d9ac();
    func_0x0047d990();
  }
  func_0x00780e20(puVar1);
  func_0x0047d988();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0047d988; end: 0047d9cb;  */

void FUN_0047d988(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047d9cc; end: 0047daf3; -[SCNNotificationsNotification initWithProperties:json:source:receiveTimestampMs:redriveMetadata:] */

undefined1 *
FUN_0047d9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_00ac3d10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0047daf4; end: 0047db0b; -[SCNNotificationsNotification initWithSource:receiveTimestampMs:] */

void FUN_0047daf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00786510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithProperties_json_source_r_00abc648,0,0,param_3,param_4,0);
  return;
}



/* Entry: 0047db0c; end: 0047db13; -[SCNNotificationsNotification properties] */

undefined8 FUN_0047db0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0047db14; end: 0047db1b; -[SCNNotificationsNotification setProperties:] */

void FUN_0047db14(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047db1c; end: 0047db23; -[SCNNotificationsNotification json] */

undefined8 FUN_0047db1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0047db24; end: 0047db2b; -[SCNNotificationsNotification setJson:] */

void FUN_0047db24(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047db2c; end: 0047db33; -[SCNNotificationsNotification source] */

undefined8 FUN_0047db2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0047db34; end: 0047db3b; -[SCNNotificationsNotification setSource:] */

void FUN_0047db34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 0047db3c; end: 0047db43; -[SCNNotificationsNotification receiveTimestampMs] */

undefined8 FUN_0047db3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0047db44; end: 0047db4b; -[SCNNotificationsNotification setReceiveTimestampMs:] */

void FUN_0047db44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0047db4c; end: 0047db53; -[SCNNotificationsNotification redriveMetadata] */

undefined8 FUN_0047db4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0047db54; end: 0047db83; -[SCNNotificationsNotification setRedriveMetadata:] */

void FUN_0047db54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047db84; end: 0047dbbf; -[SCNNotificationsNotification .cxx_destruct] */

void FUN_0047db84(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0047dbc0; end: 0047dc77;  */

void FUN_0047dbc0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_009e7fe0;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_0047dc78);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x0047df58(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 0047dc78; end: 0047dd77;  */

void FUN_0047dc78(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_009e8020;
  pqVar4[3] = (qword)&PTR_DAT_009e8098;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_009e8070;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x0047df58(&uStack_50);
  return;
}



/* Entry: 0047dd78; end: 0047dd7b;  */

void FUN_0047dd78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8020;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0047dd7c; end: 0047dd8f;  */

void FUN_0047dd7c(void)

{
  FUN_0047df20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0047dd90; end: 0047dd9b;  */

long FUN_0047dd90(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009e7fe0;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 0047dd9c; end: 0047ddd7;  */

void FUN_0047dd9c(void)

{
  func_0x0047df88();
  return;
}



/* Entry: 0047ddd8; end: 0047de63;  */

void FUN_0047ddd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789fc0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 0047de64; end: 0047def7;  */

long FUN_0047de64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009e7fe0;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 0047def8; end: 0047df1f;  */

long FUN_0047def8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0047df20; end: 0047df2f;  */

void FUN_0047df20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8020;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0047df30; end: 0047df7f;  */

long FUN_0047df30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0047df80; end: 0047df93;  */

void FUN_0047df80(void)

{
  return;
}



/* Entry: 0047df94; end: 0047e03f;  */

void FUN_0047df94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_009e80f8;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_0047e040);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_0047e470(&uStack_50);
  }
  func_0x0047e4ac();
  return;
}



/* Entry: 0047e040; end: 0047e13f;  */

void FUN_0047e040(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_009e8138;
  pqVar4[3] = (qword)&PTR_DAT_009e81c0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_009e8188;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_0047e470(&uStack_50);
  return;
}



/* Entry: 0047e140; end: 0047e143;  */

void FUN_0047e140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8138;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0047e144; end: 0047e157;  */

void FUN_0047e144(void)

{
  FUN_0047e460();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0047e158; end: 0047e163;  */

long FUN_0047e158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009e80f8;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    func_0x0047e4b4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 0047e164; end: 0047e1a3;  */

void FUN_0047e164(void)

{
  func_0x0047e4d0();
  return;
}



/* Entry: 0047e1a4; end: 0047e27b;  */

void FUN_0047e1a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047d250(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_00480548(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_4 + 0x18) == '\x01') {
    FUN_0047ce78(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_4 = 0;
  }
  func_0x0078a0e0(uVar2);
  _objc_release(param_4);
  func_0x0047e4b4();
  func_0x0047e4ac();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 0047e27c; end: 0047e33f;  */

void FUN_0047e27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  undefined8 unaff_x19;
  long unaff_x23;
  undefined8 uVar1;
  
  func_0x0047e4c4();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  FUN_0047d250(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_00480548(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a0a0(uVar1,param_2,unaff_x19,param_3,(long)param_4,param_5);
  _objc_release(param_5);
  func_0x0047e4b4();
  func_0x0047e4ac();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(param_1);
  return;
}



/* Entry: 0047e340; end: 0047e3cf;  */

void FUN_0047e340(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 unaff_x19;
  long unaff_x23;
  undefined8 uVar1;
  
  func_0x0047e4c4();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  FUN_0047d250();
  _objc_retainAutoreleasedReturnValue();
  FUN_00480548(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a0c0(uVar1,param_2,unaff_x19,(long)param_3,param_4);
  func_0x0047e4b4();
  func_0x0047e4ac();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(param_1);
  return;
}



/* Entry: 0047e3d0; end: 0047e45f;  */

long FUN_0047e3d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009e80f8;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    func_0x0047e4b4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 0047e460; end: 0047e46f;  */

void FUN_0047e460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8138;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}


