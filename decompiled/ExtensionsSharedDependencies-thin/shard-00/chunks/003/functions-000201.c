/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0047e470; end: 0047e49b;  */

long FUN_0047e470(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0047e49c; end: 0047e4db;  */

void FUN_0047e49c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)();
  return;
}



/* Entry: 0047e4dc; end: 0047e5f7;  */

void FUN_0047e4dc(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x0077ee20();
  uVar2 = param_2;
  func_0x00782260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0047e5f8();
  func_0x00782280(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(&uStack_70);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(ulong *)(param_1 + 4) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cStack_58 == '\x01') {
    *(undefined8 *)(param_1 + 8) = uStack_68;
    *(undefined8 *)(param_1 + 6) = uStack_70;
    *(undefined8 *)(param_1 + 10) = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  FUN_00457530(&uStack_70);
  _objc_release(param_2);
  _objc_release(uVar2);
  FUN_0047e6b4();
  return;
}



/* Entry: 0047e5f8; end: 0047e64f;  */

void FUN_0047e5f8(long param_1)

{
  if (param_1 != 0) {
    FUN_0047e650();
    return;
  }
  return;
}



/* Entry: 0047e650; end: 0047e687;  */

undefined8 FUN_0047e650(undefined8 param_1)

{
  _objc_retain();
  func_0x00788b40(param_1);
  FUN_0047e6b4();
  return param_1;
}



/* Entry: 0047e688; end: 0047e6b3;  */

void FUN_0047e688(undefined8 param_1,undefined8 param_2)

{
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0047e6b4; end: 0047e6bb;  */

void FUN_0047e6b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047e6bc; end: 0047e79f; -[SCNNotificationsNotificationDisplayContext initWithAppState:displayDelayMs:displayDelayReason:] */

undefined1 *
FUN_0047e6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac3d18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0047e7a0; end: 0047e7ab; -[SCNNotificationsNotificationDisplayContext initWithAppState:] */

void FUN_0047e7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00784bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithAppState_displayDelayMs__00abc000,param_3,0,0);
  return;
}



/* Entry: 0047e7ac; end: 0047e7b3; -[SCNNotificationsNotificationDisplayContext appState] */

undefined8 FUN_0047e7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0047e7b4; end: 0047e7bb; -[SCNNotificationsNotificationDisplayContext setAppState:] */

void FUN_0047e7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0047e7bc; end: 0047e7c3; -[SCNNotificationsNotificationDisplayContext displayDelayMs] */

undefined8 FUN_0047e7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0047e7c4; end: 0047e7f3; -[SCNNotificationsNotificationDisplayContext setDisplayDelayMs:] */

void FUN_0047e7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047e7f4; end: 0047e7fb; -[SCNNotificationsNotificationDisplayContext displayDelayReason] */

undefined8 FUN_0047e7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0047e7fc; end: 0047e803; -[SCNNotificationsNotificationDisplayContext setDisplayDelayReason:] */

void FUN_0047e7fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047e804; end: 0047e833; -[SCNNotificationsNotificationDisplayContext .cxx_destruct] */

void FUN_0047e804(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0047e834; end: 0047e8ab; -[SCNNotificationsNotificationHandlerLite initWithCpp:] */

undefined1 * FUN_0047e834(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3d20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0047f170();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0045a09c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0047e8ac; end: 0047eadb; +[SCNNotificationsNotificationHandlerLite create:announcer:queue:grapheneLogger:ackDelegate:] */

void FUN_0047e8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined **appuStack_158 [2];
  long lStack_148;
  long lStack_140;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x0047f1a8();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  FUN_0047f9d4(&lStack_148,param_3);
  FUN_0047df94(appuStack_158,param_4);
  FUN_006395d0(auStack_168,param_5);
  FUN_00515f50(auStack_178,param_6);
  FUN_0047dbc0(auStack_188,param_7);
  FUN_0045ede0(&lStack_60,&lStack_148,appuStack_158,auStack_168,auStack_178,auStack_188);
  func_0x0045f4d0(auStack_188);
  func_0x0045eb8c(auStack_178);
  FUN_0045e4e4(auStack_168);
  func_0x0045cc14(appuStack_158);
  func_0x0047efd0(&lStack_148);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_158[0] = &PTR_DAT_009e81e8;
    lStack_148 = lStack_60;
    lStack_140 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x0047f170();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_158;
    FUN_00718534(pppuVar1,&lStack_148,FUN_0047f028);
    _objc_retainAutoreleasedReturnValue();
    FUN_0047df30(&lStack_148);
  }
  func_0x0045a09c(&lStack_60);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x0047f1a0();
  func_0x0047f168();
  func_0x0047f160();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pppuVar1);
  return;
}



/* Entry: 0047eadc; end: 0047eb3b; -[SCNNotificationsNotificationHandlerLite dispose] */

void FUN_0047eadc(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 0047eb3c; end: 0047ebeb; -[SCNNotificationsNotificationHandlerLite notificationReceived:appState:] */

void FUN_0047eb3c(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_a0 [112];
  
  func_0x0047f180();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_0047d038(auStack_a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_a0);
  FUN_00459e64(auStack_a0);
  func_0x0047f160();
  return;
}



/* Entry: 0047ebec; end: 0047ecd3; -[SCNNotificationsNotificationHandlerLite notificationDisplayed:displayContext:] */

void FUN_0047ebec(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  func_0x0047f180();
  func_0x0047f1a8();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_0047c764(auStack_48);
  FUN_0047ecd4(auStack_88);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48,auStack_88);
  func_0x00459f20(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0047f168();
  func_0x0047f160();
  return;
}



/* Entry: 0047ecd4; end: 0047ed7f;  */

void FUN_0047ecd4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  func_0x0047f1b8();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 7) = 0;
  }
  else {
    FUN_0047e4dc(&uStack_58);
    unaff_x20[1] = uStack_50;
    *unaff_x20 = uStack_58;
    *(undefined1 *)(unaff_x20 + 2) = uStack_48;
    *(undefined1 *)(unaff_x20 + 3) = 0;
    *(undefined1 *)(unaff_x20 + 6) = 0;
    if (cStack_28 == '\x01') {
      unaff_x20[4] = uStack_38;
      unaff_x20[3] = uStack_40;
      unaff_x20[5] = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      *(undefined1 *)(unaff_x20 + 6) = 1;
    }
    *(undefined1 *)(unaff_x20 + 7) = 1;
    FUN_00457530(&uStack_40);
  }
  func_0x0047f160();
  return;
}



/* Entry: 0047ed80; end: 0047eea7; -[SCNNotificationsNotificationHandlerLite notificationSuppressed:suppressionReason:suppressedContext:] */

void FUN_0047ed80(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  func_0x0047f1a8();
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_0047c764(auStack_58,param_3);
  FUN_0047eea8(param_4);
  FUN_0047eec8(auStack_88,param_5);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_58,param_4 & 0xffffffffff,auStack_88);
  func_0x00459fd8(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0047f1a0();
  func_0x0047f168();
  func_0x0047f160();
  return;
}



/* Entry: 0047eea8; end: 0047eec7;  */

ulong FUN_0047eea8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_0047f09c();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 0047eec8; end: 0047ef37;  */

void FUN_0047eec8(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  func_0x0047f1b8();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_004802dc(auStack_58);
    FUN_0047f0d4();
    FUN_00457530(auStack_50);
  }
  func_0x0047f160();
  return;
}



/* Entry: 0047ef38; end: 0047ef8b; -[SCNNotificationsNotificationHandlerLite .cxx_destruct] */

void FUN_0047ef38(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_009e81e8;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x0045a09c((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0047ef8c; end: 0047f007; -[SCNNotificationsNotificationHandlerLite .cxx_construct] */

undefined8 * FUN_0047ef8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0047f170();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0047f008; end: 0047f027;  */

void FUN_0047f008(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_0046eff8();
  }
  return;
}



/* Entry: 0047f028; end: 0047f09b;  */

void FUN_0047f028(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac2ed0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0047f170();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0045a09c(&uStack_30);
  return;
}



/* Entry: 0047f09c; end: 0047f0d3;  */

undefined8 FUN_0047f09c(undefined8 param_1)

{
  _objc_retain();
  func_0x00787200(param_1);
  FUN_0047f160();
  return param_1;
}



/* Entry: 0047f0d4; end: 0047f0ef;  */

void FUN_0047f0d4(long param_1)

{
  FUN_0047f0f0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 0047f0f0; end: 0047f133;  */

void FUN_0047f0f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 0047f134; end: 0047f15f;  */

long FUN_0047f134(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0047f160; end: 0047f1cf;  */

void FUN_0047f160(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047f1d0; end: 0047f247; -[SCNNotificationsNotificationHandlerLoggedOut initWithCpp:] */

undefined1 * FUN_0047f1d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3d28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0047f968();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0045b824(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0047f248; end: 0047f443; +[SCNNotificationsNotificationHandlerLoggedOut create:announcer:queue:grapheneLogger:] */

void FUN_0047f248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined **appuStack_140 [2];
  long lStack_130;
  long lStack_128;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x0047f9ac();
  func_0x0047f9a4();
  _objc_retain(param_6);
  FUN_0047ff80(&lStack_130,param_3);
  FUN_0047df94(appuStack_140,param_4);
  FUN_006395d0(auStack_150,param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
  }
  else {
    FUN_00515f50(&uStack_160,param_6);
  }
  func_0x0047f99c();
  FUN_0045f254(&lStack_60,&lStack_130,appuStack_140,auStack_150,&uStack_160);
  func_0x0045eb8c(&uStack_160);
  FUN_0045e4e4(auStack_150);
  func_0x0045cc14(appuStack_140);
  func_0x0047f8b0(&lStack_130);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_140[0] = &PTR_DAT_009e81f8;
    lStack_130 = lStack_60;
    lStack_128 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x0047f968();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_140;
    FUN_00718534(pppuVar1,&lStack_130,FUN_0047f8e0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0047df30(&lStack_130);
  }
  func_0x0045b824(&lStack_60);
  func_0x0047f99c();
  func_0x0047f960();
  func_0x0047f950();
  func_0x0047f958();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pppuVar1);
  return;
}



/* Entry: 0047f444; end: 0047f49f; -[SCNNotificationsNotificationHandlerLoggedOut dispose] */

void FUN_0047f444(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 0047f4a0; end: 0047f5bb; -[SCNNotificationsNotificationHandlerLoggedOut notificationReceived:platformData:appState:] */

void FUN_0047f4a0(void)

{
  ulong uVar1;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar2;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [112];
  
  func_0x0047f978();
  func_0x0047f9ac();
  func_0x0047f9a4();
  plVar2 = *(long **)(unaff_x22 + 0x18);
  FUN_0047d038(auStack_b0);
  FUN_00480490(auStack_c0);
  if (unaff_x21 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0047f9a4();
    func_0x00787200();
    func_0x0047f960();
    uVar1 = unaff_x21 & 0xffffffff | 0x100000000;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,auStack_b0,auStack_c0,uVar1);
  func_0x0045b7b4(auStack_c0);
  FUN_00459e64(auStack_b0);
  func_0x0047f960();
  func_0x0047f950();
  func_0x0047f958();
  return;
}



/* Entry: 0047f5bc; end: 0047f61b; -[SCNNotificationsNotificationHandlerLoggedOut appStateChanged:] */

void FUN_0047f5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 0047f61c; end: 0047f713; -[SCNNotificationsNotificationHandlerLoggedOut notificationDisplayed:displayContext:] */

void FUN_0047f61c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  func_0x0047f9ac();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_0047c764(auStack_48,param_3);
  FUN_0047ecd4(auStack_88,param_4);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48,auStack_88);
  func_0x00459f20(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0047f950();
  func_0x0047f958();
  return;
}



/* Entry: 0047f714; end: 0047f817; -[SCNNotificationsNotificationHandlerLoggedOut notificationSuppressed:suppressionReason:suppressedContext:] */

void FUN_0047f714(void)

{
  ulong unaff_x20;
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  func_0x0047f978();
  func_0x0047f9ac();
  func_0x0047f9a4();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_0047c764(auStack_58);
  FUN_0047eea8();
  FUN_0047eec8(auStack_88);
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_58,unaff_x20 & 0xffffffffff,auStack_88);
  func_0x00459fd8(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0047f960();
  func_0x0047f950();
  func_0x0047f958();
  return;
}



/* Entry: 0047f818; end: 0047f86b; -[SCNNotificationsNotificationHandlerLoggedOut .cxx_destruct] */

void FUN_0047f818(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_009e81f8;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x0045b824((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0047f86c; end: 0047f8df; -[SCNNotificationsNotificationHandlerLoggedOut .cxx_construct] */

undefined8 * FUN_0047f86c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0047f968();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0047f8e0; end: 0047f94f;  */

void FUN_0047f8e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac2ed8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0047f968();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0045b824(&uStack_30);
  return;
}



/* Entry: 0047f950; end: 0047f9d3;  */

void FUN_0047f950(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047f9d4; end: 0047fb63;  */

void FUN_0047f9d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x007933e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0063d710(auStack_68);
  uVar2 = param_2;
  func_0x00781780(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(auStack_80);
  uVar3 = param_2;
  func_0x00792f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047fb64(auStack_b0);
  func_0x0077e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047fbcc(auStack_138);
  FUN_0047fc34(param_1,auStack_68,auStack_80,auStack_b0,auStack_138);
  FUN_0047f008(auStack_138);
  _objc_release(param_2);
  FUN_0046ef3c(auStack_b0);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(uVar2);
  FUN_0040d974(auStack_68);
  _objc_release(uVar1);
  FUN_0047fd40();
  return;
}



/* Entry: 0047fb64; end: 0047fbcb;  */

void FUN_0047fb64(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x0047fd48();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_004808c0(auStack_48);
    func_0x0047fd08();
    FUN_0046ef5c(auStack_48);
  }
  func_0x0047fd40();
  return;
}



/* Entry: 0047fbcc; end: 0047fc33;  */

void FUN_0047fbcc(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_a0 [128];
  
  func_0x0047fd48();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x80] = 0;
  }
  else {
    FUN_0047c5c0(auStack_a0);
    func_0x0047fd24();
    FUN_0046eff8(auStack_a0);
  }
  func_0x0047fd40();
  return;
}



/* Entry: 0047fc34; end: 0047fca7;  */

undefined8 *
FUN_0047fc34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_0046ee70(param_1 + 6,param_4);
  FUN_0047fca8(param_1 + 0xc,param_5);
  return param_1;
}



/* Entry: 0047fca8; end: 0047fcd7;  */

undefined1 * FUN_0047fca8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x80] = 0;
  FUN_0047fcd8();
  return param_1;
}



/* Entry: 0047fcd8; end: 0047fceb;  */

void FUN_0047fcd8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_0046eda4();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}



/* Entry: 0047fcec; end: 0047fd3f;  */

void FUN_0047fcec(long param_1)

{
  FUN_0046eda4();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 0047fd40; end: 0047fd53;  */

void FUN_0047fd40(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0047fd54; end: 0047fe8f; -[SCNNotificationsNotificationHandlerParametersLite initWithUserId:databasePath:tweaks:ackConfig:] */

undefined1 *
FUN_0047fd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac3d30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0047fe90; end: 0047fe9b; -[SCNNotificationsNotificationHandlerParametersLite initWithUserId:databasePath:] */

void FUN_0047fe90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00786d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithUserId_databasePath_twea_00abc860,param_3,param_4,0,0);
  return;
}



/* Entry: 0047fe9c; end: 0047fea3; -[SCNNotificationsNotificationHandlerParametersLite userId] */

undefined8 FUN_0047fe9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0047fea4; end: 0047fec3; -[SCNNotificationsNotificationHandlerParametersLite setUserId:] */

void FUN_0047fea4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0047ff60();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047fec4; end: 0047fecb; -[SCNNotificationsNotificationHandlerParametersLite databasePath] */

undefined8 FUN_0047fec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0047fecc; end: 0047fed3; -[SCNNotificationsNotificationHandlerParametersLite setDatabasePath:] */

void FUN_0047fecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0047fed4; end: 0047fedb; -[SCNNotificationsNotificationHandlerParametersLite tweaks] */

undefined8 FUN_0047fed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0047fedc; end: 0047fefb; -[SCNNotificationsNotificationHandlerParametersLite setTweaks:] */

void FUN_0047fedc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0047ff60();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047fefc; end: 0047ff03; -[SCNNotificationsNotificationHandlerParametersLite ackConfig] */

undefined8 FUN_0047fefc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0047ff04; end: 0047ff23; -[SCNNotificationsNotificationHandlerParametersLite setAckConfig:] */

void FUN_0047ff04(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0047ff60();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0047ff24; end: 0047ff5f; -[SCNNotificationsNotificationHandlerParametersLite .cxx_destruct] */

void FUN_0047ff24(long param_1)

{
  func_0x0047ff78(param_1 + 0x20);
  func_0x0047ff78(param_1 + 0x18);
  func_0x0047ff78(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0047ff60; end: 0047ff7f;  */

void FUN_0047ff60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 0047ff80; end: 004800bf;  */

void FUN_0047ff80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_110 [136];
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00781780(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(auStack_58);
  uVar2 = param_2;
  func_0x00792f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047fb64(auStack_88);
  uVar3 = param_2;
  func_0x0077e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047fbcc(auStack_110);
  FUN_004800c0(param_1,auStack_58,auStack_88,auStack_110);
  FUN_0047f008(auStack_110);
  _objc_release(uVar3);
  FUN_0046ef3c(auStack_88);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 004800c0; end: 0048010f;  */

undefined8 *
FUN_004800c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_0046ee70(param_1 + 3,param_3);
  FUN_0047fca8(param_1 + 9,param_4);
  return param_1;
}



/* Entry: 00480110; end: 0048021b; -[SCNNotificationsNotificationHandlerParametersLoggedOut initWithDatabasePath:tweaks:ackConfig:] */

undefined1 *
FUN_00480110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

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
  puStack_48 = PTR_PTR_00ac3d38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 0048021c; end: 00480227; -[SCNNotificationsNotificationHandlerParametersLoggedOut initWithDatabasePath:] */

void FUN_0048021c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007852b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithDatabasePath_tweaks_ackC_00abc1b0,param_3,0,0);
  return;
}



/* Entry: 00480228; end: 0048022f; -[SCNNotificationsNotificationHandlerParametersLoggedOut databasePath] */

undefined8 FUN_00480228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00480230; end: 00480237; -[SCNNotificationsNotificationHandlerParametersLoggedOut setDatabasePath:] */

void FUN_00480230(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00480238; end: 0048023f; -[SCNNotificationsNotificationHandlerParametersLoggedOut tweaks] */

undefined8 FUN_00480238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00480240; end: 00480263; -[SCNNotificationsNotificationHandlerParametersLoggedOut setTweaks:] */

void FUN_00480240(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004802cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00480264; end: 0048026b; -[SCNNotificationsNotificationHandlerParametersLoggedOut ackConfig] */

undefined8 FUN_00480264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0048026c; end: 0048028f; -[SCNNotificationsNotificationHandlerParametersLoggedOut setAckConfig:] */

void FUN_0048026c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004802cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00480290; end: 004802cb; -[SCNNotificationsNotificationHandlerParametersLoggedOut .cxx_destruct] */

void FUN_00480290(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004802cc; end: 004802db;  */

void FUN_004802cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 004802dc; end: 004803af;  */

void FUN_004802dc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x0077ee20();
  uVar2 = param_2;
  func_0x0078a6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(&uStack_50);
  *param_1 = (int)uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (cStack_38 == '\x01') {
    *(undefined8 *)(param_1 + 4) = uStack_48;
    *(undefined8 *)(param_1 + 2) = uStack_50;
    *(undefined8 *)(param_1 + 6) = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  FUN_00457530(&uStack_50);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 004803b0; end: 0048045b; -[SCNNotificationsNotificationSuppressedContext initWithAppState:platformSuppressionDetail:] */

undefined1 *
FUN_004803b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3d40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0048045c; end: 00480463; -[SCNNotificationsNotificationSuppressedContext initWithAppState:] */

void FUN_0048045c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00784c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithAppState_platformSuppres_00abc008,param_3,0);
  return;
}



/* Entry: 00480464; end: 0048046b; -[SCNNotificationsNotificationSuppressedContext appState] */

undefined8 FUN_00480464(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0048046c; end: 00480473; -[SCNNotificationsNotificationSuppressedContext setAppState:] */

void FUN_0048046c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 00480474; end: 0048047b; -[SCNNotificationsNotificationSuppressedContext platformSuppressionDetail] */

undefined8 FUN_00480474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0048047c; end: 00480483; -[SCNNotificationsNotificationSuppressedContext setPlatformSuppressionDetail:] */

void FUN_0048047c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00480484; end: 0048048f; -[SCNNotificationsNotificationSuppressedContext .cxx_destruct] */

void FUN_00480484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00480490; end: 00480547;  */

void FUN_00480490(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_009e8260;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_004805a0);
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
    FUN_004807b0(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 00480548; end: 0048059f;  */

void FUN_00480548(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    ___dynamic_cast(param_1,&PTR_DAT_009e8208,&PTR_DAT_009e8218,0);
    if (param_1 == (long *)0x0) {
      ___cxa_bad_cast();
      puVar8 = (undefined8 *)*param_1;
      pqVar4 = &segment_command_00000020.vmaddr;
      __Znwm();
      pqVar4[1] = 0;
      pqVar4[2] = 0;
      *pqVar4 = (qword)&PTR_FUN_009e82a0;
      pqVar4[3] = (qword)&PTR_FUN_009e8310;
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
      pqVar4[3] = (qword)&PTR_FUN_009e82f0;
      *extraout_x8 = pqVar4 + 3;
      extraout_x8[1] = pqVar4;
      uStack_70 = 0;
      uStack_68 = 0;
      extraout_x8[2] = *param_1;
      FUN_004807b0(&uStack_70);
      return;
    }
    lVar7 = param_1[3];
    _objc_retain(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar7);
  return;
}



/* Entry: 004805a0; end: 0048069f;  */

void FUN_004805a0(undefined8 *param_1,long *param_2)

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
  *pqVar4 = (qword)&PTR_FUN_009e82a0;
  pqVar4[3] = (qword)&PTR_FUN_009e8310;
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
  pqVar4[3] = (qword)&PTR_FUN_009e82f0;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_004807b0(&uStack_50);
  return;
}



/* Entry: 004806a0; end: 004806a3;  */

void FUN_004806a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e82a0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004806a4; end: 004806b7;  */

void FUN_004806a4(void)

{
  FUN_004807a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004806b8; end: 004806c3;  */

long FUN_004806b8(long param_1)

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
    ppuStack_38 = &PTR_DAT_009e8260;
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



/* Entry: 004806c4; end: 00480703;  */

void FUN_004806c4(void)

{
  FUN_004807dc();
  return;
}



/* Entry: 00480704; end: 0048070b;  */

void FUN_00480704(void)

{
  return;
}



/* Entry: 0048070c; end: 0048079f;  */

long FUN_0048070c(long param_1)

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
    ppuStack_38 = &PTR_DAT_009e8260;
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



/* Entry: 004807a0; end: 004807af;  */

void FUN_004807a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e82a0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004807b0; end: 004807db;  */

long FUN_004807b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 004807dc; end: 004807e7;  */

long FUN_004807dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009e8260;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 004807e8; end: 00480817;  */

void FUN_004807e8(void)

{
  _objc_alloc(PTR_PTR_00ac2ef8);
  func_0x00786560();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00480818; end: 0048085f; -[SCNNotificationsRedriveMetadata initWithRedriveAttemptCount:] */

void FUN_00480818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3d48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 00480860; end: 00480867; -[SCNNotificationsRedriveMetadata redriveAttemptCount] */

undefined8 FUN_00480860(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


