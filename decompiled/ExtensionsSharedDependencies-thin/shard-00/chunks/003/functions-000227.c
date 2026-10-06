/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004cdccc; end: 004cdcd3; -[SCNMessagingConversationSyncStats setEelDecryptionLatencyUs:] */

void FUN_004cdccc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 004cdcd4; end: 004cddab;  */

void FUN_004cdcd4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  func_0x0078abe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004cddac(auStack_48);
  func_0x0078a9e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004cddac(auStack_60);
  FUN_004cde70(param_1,auStack_48,auStack_60);
  FUN_0040d974(auStack_60);
  _objc_release(param_2);
  FUN_0040d974(auStack_48);
  func_0x004cdebc();
  func_0x004cdeb4();
  return;
}



/* Entry: 004cddac; end: 004cde2b;  */

void FUN_004cddac(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_2;
  _objc_retainAutorelease(param_2);
  func_0x0077fde0();
  lVar2 = param_2;
  func_0x007882e0();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar2 = param_2;
    func_0x007882e0(param_2);
    FUN_0040d7ec(param_1,lVar1,lVar1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004cde2c; end: 004cde6f;  */

void FUN_004cde2c(long *param_1)

{
  if (*param_1 == param_1[1]) {
    func_0x007814c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x007815e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004cde70; end: 004cdec3;  */

void FUN_004cde70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 004cdec4; end: 004cdf9f; -[SCNMessagingDeviceEncryptionKeyLite initWithPublicKey:privateKey:] */

undefined1 *
FUN_004cdec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR__OBJC_CLASS___SCNMessagingDeviceEncryptionKeyLite_00ac3e40;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004cdfa0; end: 004cdfa7; -[SCNMessagingDeviceEncryptionKeyLite publicKey] */

undefined8 FUN_004cdfa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004cdfa8; end: 004cdfaf; -[SCNMessagingDeviceEncryptionKeyLite setPublicKey:] */

void FUN_004cdfa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cdfb0; end: 004cdfb7; -[SCNMessagingDeviceEncryptionKeyLite privateKey] */

undefined8 FUN_004cdfb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004cdfb8; end: 004cdfbf; -[SCNMessagingDeviceEncryptionKeyLite setPrivateKey:] */

void FUN_004cdfb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cdfc0; end: 004cdfef; -[SCNMessagingDeviceEncryptionKeyLite .cxx_destruct] */

void FUN_004cdfc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004cdff0; end: 004ce0bb;  */

void FUN_004cdff0(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac3000;
  _objc_alloc(PTR_PTR_00ac3000);
  if ((char)param_1[1] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,(long)*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  if ((char)param_1[8] == '\x01') {
    param_1 = param_1 + 2;
    FUN_004cde2c(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = (int *)0x0;
  }
  func_0x007854c0(puVar1,param_2,puVar2,param_1);
  FUN_004ce0bc();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004ce0bc; end: 004ce0c7;  */

void FUN_004ce0bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004ce0c8; end: 004ce19b; -[SCNMessagingExtractMessageResultLite initWithError:contents:] */

undefined1 *
FUN_004ce0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004ce19c; end: 004ce1a7; -[SCNMessagingExtractMessageResultLite init] */

void FUN_004ce19c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007854d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithError_contents__00abc238,0,0);
  return;
}



/* Entry: 004ce1a8; end: 004ce1af; -[SCNMessagingExtractMessageResultLite error] */

undefined8 FUN_004ce1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004ce1b0; end: 004ce1df; -[SCNMessagingExtractMessageResultLite setError:] */

void FUN_004ce1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004ce1e0; end: 004ce1e7; -[SCNMessagingExtractMessageResultLite contents] */

undefined8 FUN_004ce1e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004ce1e8; end: 004ce1ef; -[SCNMessagingExtractMessageResultLite setContents:] */

void FUN_004ce1e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004ce1f0; end: 004ce21f; -[SCNMessagingExtractMessageResultLite .cxx_destruct] */

void FUN_004ce1f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004ce220; end: 004ce37f;  */

void FUN_004ce220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00780c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004cddac(auStack_68);
  uVar2 = param_2;
  func_0x00780d00(param_2);
  uVar3 = param_2;
  func_0x0078bee0(param_2);
  uVar4 = param_2;
  func_0x007847e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004ce380(auStack_80);
  func_0x0078b240(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004ce4e0(auStack_a0);
  FUN_004ce564(param_1,auStack_68,uVar2,uVar3,auStack_80,auStack_a0);
  FUN_004ce60c(auStack_a0);
  _objc_release(param_2);
  func_0x004ce774(auStack_80);
  _objc_release(uVar4);
  FUN_0040d974(auStack_68);
  _objc_release(uVar1);
  FUN_004ceecc();
  return;
}



/* Entry: 004ce380; end: 004ce4df;  */

void FUN_004ce380(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_138 [32];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_58;
  
  func_0x004cef90();
  uStack_58 = extraout_x8;
  _objc_retain();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00780e80();
  FUN_004ce804();
  func_0x004cef2c();
  func_0x004ceed4();
  if (unaff_x20 != (undefined8 *)0x0) {
    lVar2 = *plStack_110;
    do {
      puVar3 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar2) {
          _objc_enumerationMutation();
        }
        puVar1 = *(undefined8 **)(lStack_118 + (long)puVar3 * 8);
        _objc_retain(puVar1);
        FUN_004cddac(auStack_138,puVar1);
        func_0x004ce9ec();
        FUN_0040d974(auStack_138);
        _objc_release();
        puVar3 = (undefined8 *)((long)puVar3 + 1);
        in_ZR = puVar3 == unaff_x20;
      } while (puVar3 < unaff_x20);
      func_0x004ceed4();
      unaff_x20 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  lVar2 = 0;
  func_0x004ceecc();
  func_0x004ceecc();
  func_0x004cf010(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004ceecc();
  func_0x004ce774();
  func_0x004ceecc();
  __Unwind_Resume();
  _objc_retain();
  if (lVar2 == 0) {
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 3) = 0;
  }
  else {
    FUN_004ceb30(&uStack_180,lVar2);
    extraout_x8_00[1] = uStack_178;
    *extraout_x8_00 = uStack_180;
    extraout_x8_00[2] = uStack_170;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    *(undefined1 *)(extraout_x8_00 + 3) = 1;
    FUN_004ce62c(&uStack_180);
  }
  func_0x004ceecc();
  return;
}



/* Entry: 004ce4e0; end: 004ce563;  */

void FUN_004ce4e0(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_004ceb30(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_004ce62c(&uStack_40);
  }
  FUN_004ceecc();
  return;
}



/* Entry: 004ce564; end: 004ce5b3;  */

long FUN_004ce564(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x004cefa8();
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  *(undefined4 *)(lVar1 + 0x1c) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  uVar2 = *param_5;
  *(undefined8 *)(lVar1 + 0x28) = param_5[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  FUN_004ce5b4(lVar1 + 0x38,param_6);
  return param_1;
}



/* Entry: 004ce5b4; end: 004ce5df;  */

undefined1 * FUN_004ce5b4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_004ce5e0();
  return param_1;
}



/* Entry: 004ce5e0; end: 004ce60b;  */

void FUN_004ce5e0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x004cefa8();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 004ce60c; end: 004ce62b;  */

void FUN_004ce60c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_004ce62c();
  }
  return;
}



/* Entry: 004ce62c; end: 004ce67f;  */

void FUN_004ce62c(void)

{
  func_0x004cef80();
  func_0x004ce650();
  return;
}



/* Entry: 004ce680; end: 004ce687;  */

void FUN_004ce680(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x004ce6bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 004ce688; end: 004ce70f;  */

void FUN_004ce688(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x004ce6bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 004ce710; end: 004ce717;  */

void FUN_004ce710(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x004ce74c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 004ce718; end: 004ce7c7;  */

void FUN_004ce718(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x004ce74c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 004ce7c8; end: 004ce7cf;  */

void FUN_004ce7c8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_0040d974();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 004ce7d0; end: 004ce803;  */

void FUN_004ce7d0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_0040d974();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 004ce804; end: 004ce883;  */

void FUN_004ce804(long *param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [40];
  
  func_0x004cf024(*param_1);
  if ((bool)in_CY && !(bool)in_ZR) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_004ce884();
      func_0x004cef5c();
      plVar1 = param_1;
      __Unwind_Resume();
      func_0x004cefe4();
      func_0x004cef64();
      lVar2 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
      _memcpy(lVar2);
      param_1[1] = lVar2;
      unaff_x20[1] = *unaff_x20;
      *unaff_x20 = param_1[1];
      func_0x004ceee0();
      return;
    }
    FUN_004ce8e8(auStack_48);
    func_0x004ceffc();
    func_0x004cef5c();
  }
  return;
}



/* Entry: 004ce884; end: 004ce88f;  */

void FUN_004ce884(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x004cefe4();
  func_0x004cef64();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x004ceee0();
  return;
}



/* Entry: 004ce890; end: 004ce8e7;  */

void FUN_004ce890(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x004cef64();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x004ceee0();
  return;
}



/* Entry: 004ce8e8; end: 004ce957;  */

long * FUN_004ce8e8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004ce934();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 004ce958; end: 004ce983;  */

long * FUN_004ce958(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_004ce9b0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004ce984; end: 004ce9af;  */

long * FUN_004ce984(long *param_1)

{
  FUN_004ce9b0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004ce9b0; end: 004ce9b7;  */

void FUN_004ce9b0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    FUN_0040d974();
  }
  return;
}



/* Entry: 004ce9b8; end: 004cea27;  */

void FUN_004ce9b8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004cef64();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    FUN_0040d974();
  }
  return;
}



/* Entry: 004cea28; end: 004cea57;  */

void FUN_004cea28(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 004cea58; end: 004ceb2f;  */

long FUN_004cea58(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auStack_1d0 [40];
  long lStack_1a8;
  long *plStack_1a0;
  long alStack_168 [2];
  undefined8 *puStack_158;
  undefined8 uStack_c0;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  uVar1 = (param_1[1] - *param_1) / 0x18 + 1;
  uVar5 = 0xaaaaaaaaaaaaaa9 < uVar1;
  uVar6 = uVar1 == 0xaaaaaaaaaaaaaaa;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - *param_1) / 0x18;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x555555555555554 < uVar3) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_004ce8e8(auStack_48,uVar8);
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar13 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar13;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
    func_0x004ceffc();
    lVar9 = param_1[1];
    func_0x004cef5c();
    return lVar9;
  }
  FUN_004ce884();
  func_0x004cef5c();
  __Unwind_Resume(param_1);
  func_0x004cef90();
  uStack_c0 = extraout_x8;
  _objc_retain();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  plVar7 = param_1;
  func_0x00780e80();
  plVar12 = plVar7;
  func_0x004cf024(*unaff_x20);
  if ((bool)uVar5 && !(bool)uVar6) {
    uVar6 = plVar12 == (long *)0xaaaaaaaaaaaaaaa;
    if ((long *)0xaaaaaaaaaaaaaaa < plVar12) goto LAB_004ced0c;
    func_0x004ceff0();
    func_0x004cefd8();
    plVar7 = alStack_168;
    FUN_004cee84();
  }
  func_0x004cef2c();
  func_0x004ceed4();
  if (plVar7 != (long *)0x0) {
    lVar9 = *plStack_1a0;
    do {
      plVar12 = (long *)0x0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        plVar10 = *(long **)(lStack_1a8 + (long)plVar12 * 8);
        _objc_retain(plVar10);
        FUN_004cf708(auStack_1d0,plVar10);
        puVar2 = (undefined8 *)unaff_x20[1];
        if (puVar2 < (undefined8 *)unaff_x20[2]) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          func_0x004cef40();
          lVar11 = extraout_x8_00 + 0x18;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < ((long)puVar2 - *unaff_x20) / 0x18 + 1U) {
            FUN_004ced6c();
            goto LAB_004ced10;
          }
          func_0x004ceff0();
          puStack_158[1] = 0;
          puStack_158[2] = 0;
          *puStack_158 = 0;
          func_0x004cef40();
          puStack_158 = (undefined8 *)(extraout_x8_01 + 0x18);
          func_0x004cefd8();
          lVar11 = unaff_x20[1];
          FUN_004cee84(alStack_168);
        }
        unaff_x20[1] = lVar11;
        func_0x004ce6bc(auStack_1d0);
        _objc_release();
        plVar12 = (long *)((long)plVar12 + 1);
        uVar6 = plVar12 == plVar7;
      } while (plVar12 < plVar7);
      func_0x004ceed4();
      plVar7 = plVar10;
    } while (plVar10 != (long *)0x0);
  }
  lVar9 = 0;
  func_0x004ceecc();
  func_0x004ceecc();
  func_0x004cf010(uStack_c0);
  if ((bool)uVar6) {
    return lVar9;
  }
  ___stack_chk_fail();
LAB_004ced0c:
  FUN_004ced6c();
LAB_004ced10:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x4ced14);
  (*pcVar4)();
}



/* Entry: 004ceb30; end: 004ced6b;  */

void FUN_004ceb30(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_180 [40];
  long lStack_158;
  long *plStack_150;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  undefined8 uStack_70;
  
  func_0x004cef90();
  uStack_70 = extraout_x8;
  _objc_retain();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00780e80();
  puVar6 = unaff_x19;
  func_0x004cf024(*unaff_x20);
  if ((bool)in_CY && !(bool)in_ZR) {
    in_ZR = puVar6 == (undefined1 *)0xaaaaaaaaaaaaaaa;
    if ((undefined1 *)0xaaaaaaaaaaaaaaa < puVar6) goto LAB_004ced0c;
    func_0x004ceff0();
    func_0x004cefd8();
    unaff_x19 = auStack_118;
    FUN_004cee84();
  }
  func_0x004cef2c();
  func_0x004ceed4();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar4 = *plStack_150;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar4) {
          _objc_enumerationMutation();
        }
        puVar3 = *(undefined1 **)(lStack_158 + (long)puVar6 * 8);
        _objc_retain(puVar3);
        FUN_004cf708(auStack_180,puVar3);
        puVar1 = (undefined8 *)unaff_x20[1];
        if (puVar1 < (undefined8 *)unaff_x20[2]) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          func_0x004cef40();
          lVar5 = extraout_x8_00 + 0x18;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < ((long)puVar1 - *unaff_x20) / 0x18 + 1U) {
            FUN_004ced6c();
            goto LAB_004ced10;
          }
          func_0x004ceff0();
          puStack_108[1] = 0;
          puStack_108[2] = 0;
          *puStack_108 = 0;
          func_0x004cef40();
          puStack_108 = (undefined8 *)(extraout_x8_01 + 0x18);
          func_0x004cefd8();
          lVar5 = unaff_x20[1];
          FUN_004cee84(auStack_118);
        }
        unaff_x20[1] = lVar5;
        func_0x004ce6bc(auStack_180);
        _objc_release();
        puVar6 = puVar6 + 1;
        in_ZR = puVar6 == unaff_x19;
      } while (puVar6 < unaff_x19);
      func_0x004ceed4();
      unaff_x19 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  func_0x004ceecc();
  func_0x004ceecc();
  func_0x004cf010(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_004ced0c:
  FUN_004ced6c();
LAB_004ced10:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x4ced14);
  (*pcVar2)();
}



/* Entry: 004ced6c; end: 004ced77;  */

void FUN_004ced6c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  
  func_0x004cefe4();
  func_0x004cef64();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x18) * 0x18);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar4;
    puVar3[2] = puVar5[2];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar3 = puVar3 + 3;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    func_0x004ce6bc();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  func_0x004ceee0();
  return;
}



/* Entry: 004ced78; end: 004cee83;  */

void FUN_004ced78(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  
  func_0x004cef64();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x18) * 0x18);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar4;
    puVar3[2] = puVar5[2];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar3 = puVar3 + 3;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    func_0x004ce6bc();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  func_0x004ceee0();
  return;
}



/* Entry: 004cee84; end: 004ceecb;  */

long * FUN_004cee84(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x004ce6bc();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004ceecc; end: 004cf037;  */

void FUN_004ceecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004cf038; end: 004cf15b; -[SCNMessagingLocalMessageContentLite initWithContent:contentType:savePolicy:incidentalAttachments:remoteMediaReferences:] */

undefined1 *
FUN_004cf038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_00ac3e50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_004cf1f0(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_004cf1f0(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_004cf1f0(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004cf15c; end: 004cf163; -[SCNMessagingLocalMessageContentLite initWithContent:contentType:savePolicy:incidentalAttachments:] */

void FUN_004cf15c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithContent_contentType_save_00abc118);
  return;
}



/* Entry: 004cf164; end: 004cf16b; -[SCNMessagingLocalMessageContentLite content] */

undefined8 FUN_004cf164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004cf16c; end: 004cf173; -[SCNMessagingLocalMessageContentLite setContent:] */

void FUN_004cf16c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cf174; end: 004cf17b; -[SCNMessagingLocalMessageContentLite contentType] */

undefined8 FUN_004cf174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004cf17c; end: 004cf183; -[SCNMessagingLocalMessageContentLite setContentType:] */

void FUN_004cf17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 004cf184; end: 004cf18b; -[SCNMessagingLocalMessageContentLite savePolicy] */

undefined8 FUN_004cf184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004cf18c; end: 004cf193; -[SCNMessagingLocalMessageContentLite setSavePolicy:] */

void FUN_004cf18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 004cf194; end: 004cf19b; -[SCNMessagingLocalMessageContentLite incidentalAttachments] */

undefined8 FUN_004cf194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004cf19c; end: 004cf1a3; -[SCNMessagingLocalMessageContentLite setIncidentalAttachments:] */

void FUN_004cf19c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cf1a4; end: 004cf1ab; -[SCNMessagingLocalMessageContentLite remoteMediaReferences] */

undefined8 FUN_004cf1a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004cf1ac; end: 004cf1b3; -[SCNMessagingLocalMessageContentLite setRemoteMediaReferences:] */

void FUN_004cf1ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cf1b4; end: 004cf1ef; -[SCNMessagingLocalMessageContentLite .cxx_destruct] */

void FUN_004cf1b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004cf1f0; end: 004cf1f7;  */

void FUN_004cf1f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 004cf1f8; end: 004cf38b;  */

void FUN_004cf1f8(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_retain();
  func_0x00780ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004cddac(auStack_78);
  uVar1 = param_2;
  func_0x007890a0(param_2);
  uVar2 = param_2;
  func_0x00789120(param_2);
  uVar3 = param_2;
  func_0x007890e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(auStack_90);
  uVar4 = param_2;
  func_0x00793820(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_004cf38c();
  func_0x00789360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_004cf3f8();
  FUN_004cf418(param_1,auStack_78,uVar1,uVar2,auStack_90,uVar5,param_3 & 0xff,uVar6 & 0xffffffffff);
  _objc_release(param_2);
  _objc_release(uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  _objc_release(uVar3);
  FUN_0040d974(auStack_78);
  func_0x004cf4b0();
  func_0x004cf4a8();
  return;
}



/* Entry: 004cf38c; end: 004cf3f7;  */

undefined1  [16] FUN_004cf38c(ulong param_1)

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
    FUN_004d2a94(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  FUN_004cf4a8();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 004cf3f8; end: 004cf417;  */

ulong FUN_004cf3f8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_004cf470();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 004cf418; end: 004cf46f;  */

void FUN_004cf418(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

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
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[7] = param_5[2];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  param_1[8] = param_6;
  *(undefined4 *)(param_1 + 9) = param_7;
  *(undefined8 *)((long)param_1 + 0x4c) = param_8;
  return;
}



/* Entry: 004cf470; end: 004cf4a7;  */

undefined8 FUN_004cf470(undefined8 param_1)

{
  _objc_retain();
  func_0x00787200(param_1);
  FUN_004cf4a8();
  return param_1;
}



/* Entry: 004cf4a8; end: 004cf4b7;  */

void FUN_004cf4a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004cf4b8; end: 004cf60f; -[SCNMessagingMediaReference initWithContentObject:mediaListId:mediaType:mediaReferenceKey:videoDescription:metadataType:] */

undefined1 *
FUN_004cf4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_00ac3e58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004cf610; end: 004cf61b; -[SCNMessagingMediaReference initWithContentObject:mediaListId:mediaType:mediaReferenceKey:] */

void FUN_004cf610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithContentObject_mediaListI_00abc120);
  return;
}



/* Entry: 004cf61c; end: 004cf623; -[SCNMessagingMediaReference contentObject] */

undefined8 FUN_004cf61c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004cf624; end: 004cf62b; -[SCNMessagingMediaReference setContentObject:] */

void FUN_004cf624(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cf62c; end: 004cf633; -[SCNMessagingMediaReference mediaListId] */

undefined8 FUN_004cf62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004cf634; end: 004cf63b; -[SCNMessagingMediaReference setMediaListId:] */

void FUN_004cf634(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 004cf63c; end: 004cf643; -[SCNMessagingMediaReference mediaType] */

undefined8 FUN_004cf63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004cf644; end: 004cf64b; -[SCNMessagingMediaReference setMediaType:] */

void FUN_004cf644(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 004cf64c; end: 004cf653; -[SCNMessagingMediaReference mediaReferenceKey] */

undefined8 FUN_004cf64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004cf654; end: 004cf65b; -[SCNMessagingMediaReference setMediaReferenceKey:] */

void FUN_004cf654(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cf65c; end: 004cf663; -[SCNMessagingMediaReference videoDescription] */

undefined8 FUN_004cf65c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004cf664; end: 004cf687; -[SCNMessagingMediaReference setVideoDescription:] */

void FUN_004cf664(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004cf6f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004cf688; end: 004cf68f; -[SCNMessagingMediaReference metadataType] */

undefined8 FUN_004cf688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 004cf690; end: 004cf6b3; -[SCNMessagingMediaReference setMetadataType:] */

void FUN_004cf690(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004cf6f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004cf6b4; end: 004cf6ef; -[SCNMessagingMediaReference .cxx_destruct] */

void FUN_004cf6b4(long param_1)

{
  func_0x004cf700(param_1 + 0x30);
  func_0x004cf700(param_1 + 0x28);
  func_0x004cf700(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004cf6f0; end: 004cf707;  */

void FUN_004cf6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 004cf708; end: 004cf777;  */

void FUN_004cf708(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00789100();
  _objc_retainAutoreleasedReturnValue();
  FUN_004cf778(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x004ce6bc(&uStack_40);
  FUN_004cfdc8();
  return;
}



/* Entry: 004cf778; end: 004cf8eb;  */

void FUN_004cf778(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_1c8 [40];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 auStack_178 [11];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00780e80();
  FUN_004cf8ec(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x004cfdd0();
  if (puVar2 != (undefined8 *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(undefined8 *)(lStack_118 + (long)puVar8 * 8);
        _objc_retain(uVar6);
        FUN_004cf1f8(auStack_178,uVar6);
        puVar1 = auStack_178;
        func_0x004cfc64(param_1);
        puVar3 = auStack_178;
        func_0x004ce74c();
        func_0x004cfdf4();
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar8 < puVar2);
      func_0x004cfdd0();
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  plVar4 = (long *)0x0;
  func_0x004cfdc8();
  func_0x004cfdc8();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    func_0x004cfdc8();
    func_0x004ce6bc(param_1);
    func_0x004cfdc8();
    __Unwind_Resume();
    pcStack_188 = FUN_004cf8ec;
    if ((undefined8 *)((plVar4[2] - *plVar4) / 0x58) < puVar1) {
      puStack_1a0 = param_1;
      puStack_198 = param_2;
      puStack_190 = &stack0xfffffffffffffff0;
      if ((undefined8 *)0x2e8ba2e8ba2e8ba < puVar1) {
        FUN_004cf97c();
        func_0x004cfde4();
        __Unwind_Resume(plVar4);
        pcVar5 = "vector";
        FUN_0040d774();
        lVar7 = puVar1[1] + ((*(long *)((long)pcVar5 + 8) - *(long *)pcVar5) / -0x58) * 0x58;
        FUN_004cfabc((long *)((long)pcVar5 + 0x10),*(long *)pcVar5,*(long *)((long)pcVar5 + 8),lVar7
                    );
        puVar1[1] = lVar7;
        lVar7 = *(long *)pcVar5;
        *(long *)((long)pcVar5 + 8) = lVar7;
        *(undefined8 *)pcVar5 = puVar1[1];
        puVar1[1] = lVar7;
        lVar7 = *(long *)((long)pcVar5 + 8);
        *(undefined8 *)((long)pcVar5 + 8) = puVar1[2];
        puVar1[2] = lVar7;
        lVar7 = *(long *)((long)pcVar5 + 0x10);
        *(undefined8 *)((long)pcVar5 + 0x10) = puVar1[3];
        puVar1[3] = lVar7;
        *puVar1 = puVar1[1];
        return;
      }
      FUN_004cfa1c(auStack_1c8);
      func_0x004cfdfc();
      func_0x004cfde4();
    }
    return;
  }
  return;
}



/* Entry: 004cf8ec; end: 004cf97b;  */

void FUN_004cf8ec(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x58) < param_2) {
    if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
      FUN_004cf97c();
      func_0x004cfde4();
      __Unwind_Resume(param_1);
      pcVar1 = "vector";
      FUN_0040d774();
      lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x58) * 0x58;
      FUN_004cfabc((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_004cfa1c(auStack_48,param_2,(param_1[1] - *param_1) / 0x58);
    func_0x004cfdfc();
    func_0x004cfde4();
  }
  return;
}



/* Entry: 004cf97c; end: 004cf98f;  */

void FUN_004cf97c(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  FUN_0040d774();
  lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x58) * 0x58;
  FUN_004cfabc((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004cf990; end: 004cfa1b;  */

void FUN_004cf990(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_004cfabc(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004cfa1c; end: 004cfa8b;  */

long * FUN_004cfa1c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004cfa68();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 004cfa8c; end: 004cfabb;  */

void FUN_004cfa8c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x58);
    return;
  }
  FUN_0040cee8();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x58) {
    FUN_004cfb54(param_4,uVar1);
    param_4 = lStack_48 + 0x58;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x004ce74c(param_2);
  }
  FUN_004cfbb0(&uStack_70);
  return;
}



/* Entry: 004cfabc; end: 004cfb53;  */

void FUN_004cfabc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    FUN_004cfb54(param_4,lVar1);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x004ce74c(param_2);
  }
  FUN_004cfbb0(&uStack_60);
  return;
}



/* Entry: 004cfb54; end: 004cfbaf;  */

void FUN_004cfb54(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 004cfbb0; end: 004cfc1f;  */

long FUN_004cfbb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x58;
      func_0x004ce74c();
    }
  }
  return param_1;
}



/* Entry: 004cfc20; end: 004cfc27;  */

void FUN_004cfc20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x004ce74c();
  }
  return;
}



/* Entry: 004cfc28; end: 004cfccb;  */

void FUN_004cfc28(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x004ce74c();
  }
  return;
}



/* Entry: 004cfccc; end: 004cfd67;  */

long FUN_004cfccc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_004cfd68(param_1,(param_1[1] - *param_1) / 0x58 + 1);
  FUN_004cfa1c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x58,param_1 + 2);
  FUN_004cfb54(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x58;
  func_0x004cfdfc();
  lVar2 = param_1[1];
  func_0x004cfde4();
  return lVar2;
}



/* Entry: 004cfd68; end: 004cfdc7;  */

ulong FUN_004cfd68(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
    FUN_004cf97c();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    uVar2 = 0x2e8ba2e8ba2e8ba;
  }
  return uVar2;
}



/* Entry: 004cfdc8; end: 004cfe07;  */

void FUN_004cfdc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}


