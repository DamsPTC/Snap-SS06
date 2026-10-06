/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b85784; end: 106b85843;  */

void FUN_106b85784(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e767b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e767b8,
                      &PTR____CFConstantStringClassReference_110e76798,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b85844; end: 106b8588f; +[SCPhoneCodeAction autoFillCode] */

void FUN_106b85844(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0d00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b85890; end: 106b858db; +[SCPhoneCodeAction confirmAlternatePhoneCodeDeliveryMechanism] */

void FUN_106b85890(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0d00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b858dc; end: 106b85927; +[SCPhoneCodeAction exitPhoneCodeEntry] */

void FUN_106b858dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0d00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b85928; end: 106b8596f; +[SCPhoneCodeAction requestAlternatePhoneCodeDeliveryMechanism] */

void FUN_106b85928(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0d00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b85970; end: 106b859bb; +[SCPhoneCodeAction switchToEmail] */

void FUN_106b85970(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0d00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b859bc; end: 106b859df; -[SCPhoneCodeAction copyWithZone:] */

undefined8 FUN_106b859bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b859e0; end: 106b859e7; -[SCPhoneCodeAction hash] */

undefined8 FUN_106b859e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b859e8; end: 106b85a2b; -[SCPhoneCodeAction internalInit] */

void FUN_106b859e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b85a2c; end: 106b85ab3; -[SCPhoneCodeAction isEqual:] */

bool FUN_106b85a2c(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 106b85ab4; end: 106b85baf; -[SCPhoneCodeAction matchRequestAlternatePhoneCodeDeliveryMechanism:confirmAlternatePhoneCodeDeliveryMechanism:exitPhoneCodeEntry:autoFillCode:switchToEmail:] */

void FUN_106b85ab4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_106b85b60;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && ((lVar1 = param_6, lVar2 != 3 && (lVar1 = param_7, lVar2 != 4))))
    goto LAB_106b85b60;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_106b85b60:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b85bb0; end: 106b85cdb; -[SCPhoneCodeViewModel initWithPhoneNumber:alternatePhoneCodeDeliveryMechanism:shouldShowSwitchToVoiceOption:showAlternateDeliveryMechanismConfirmation:isVerifyingPhoneCode:isResendingPhoneCode:unexpectedFailure:codeVerificationErrorMessage:codeResendErrorMessage:showSwitchButton:] */

undefined8 *
FUN_106b85bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f5478;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    *(undefined1 *)(puVar1 + 1) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b85cdc; end: 106b85cff; -[SCPhoneCodeViewModel copyWithZone:] */

undefined8 FUN_106b85cdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b85d00; end: 106b85dbb; -[SCPhoneCodeViewModel hash] */

undefined8 * FUN_106b85d00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_68 = (ulong)uVar1 & 0xff;
  uStack_60 = uVar10 >> 0x10 & 0xff;
  uStack_58 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar8;
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  puVar4 = &uStack_78;
  uStack_38 = uVar2;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_106b85ec4:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106b85ed0;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[3] == param_3[3] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
           (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
       (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[4];
        if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          puVar7 = (undefined8 *)puVar4[5];
          if (puVar7 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_106b85ed0;
          }
          goto LAB_106b85ec4;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_106b85ed0:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 106b85dbc; end: 106b85eeb; -[SCPhoneCodeViewModel isEqual:] */

long FUN_106b85dbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b85ec4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b85ed0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_106b85ed0;
          }
          goto LAB_106b85ec4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b85ed0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b85eec; end: 106b85ef3; -[SCPhoneCodeViewModel phoneNumber] */

undefined8 FUN_106b85eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b85ef4; end: 106b85efb; -[SCPhoneCodeViewModel alternatePhoneCodeDeliveryMechanism] */

undefined8 FUN_106b85ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b85efc; end: 106b85f03; -[SCPhoneCodeViewModel shouldShowSwitchToVoiceOption] */

undefined1 FUN_106b85efc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b85f04; end: 106b85f0b; -[SCPhoneCodeViewModel showAlternateDeliveryMechanismConfirmation] */

undefined1 FUN_106b85f04(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b85f0c; end: 106b85f13; -[SCPhoneCodeViewModel isVerifyingPhoneCode] */

undefined1 FUN_106b85f0c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106b85f14; end: 106b85f1b; -[SCPhoneCodeViewModel isResendingPhoneCode] */

undefined1 FUN_106b85f14(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106b85f1c; end: 106b85f23; -[SCPhoneCodeViewModel unexpectedFailure] */

undefined1 FUN_106b85f1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106b85f24; end: 106b85f2b; -[SCPhoneCodeViewModel codeVerificationErrorMessage] */

undefined8 FUN_106b85f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b85f2c; end: 106b85f33; -[SCPhoneCodeViewModel codeResendErrorMessage] */

undefined8 FUN_106b85f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b85f34; end: 106b85f3b; -[SCPhoneCodeViewModel showSwitchButton] */

undefined1 FUN_106b85f34(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106b85f3c; end: 106b85f77; -[SCPhoneCodeViewModel .cxx_destruct] */

void FUN_106b85f3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b85f78; end: 106b85f97; -[SCNGORegistrationAccessoryView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b85f78(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_112759340)) {
    return;
  }
  *(long *)(param_1 + _DAT_112759340) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithNewState_112596c50);
  return;
}



/* Entry: 106b85f98; end: 106b86333; -[SCNGORegistrationAccessoryView setAccessoryButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b85f98(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar42 = param_3;
  func_0x00010c08fa60();
  lVar51 = (long)_DAT_112759344;
  if (puVar42 == (undefined8 *)0x0) {
    puVar42 = (undefined8 *)0x1;
    func_0x00010c1a7f60();
  }
  else if (*(long *)(param_1 + lVar51) == 0) {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = *(undefined8 *)(param_1 + lVar51);
    *(undefined **)(param_1 + lVar51) = puVar1;
    _objc_release(uVar45);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar51));
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar51));
    func_0x00010c198860(*(undefined8 *)(param_1 + lVar51));
    func_0x00010c216260(*(undefined8 *)(param_1 + lVar51));
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar51));
    uVar45 = *(undefined8 *)(param_1 + lVar51);
    lVar44 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60(uVar45);
    _objc_release(lVar44);
    func_0x00010befbb60(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar40 = *(undefined8 *)(param_1 + lVar51);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar40;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar45;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar45);
    _objc_release(lVar44);
    _objc_release(uVar40);
    uVar46 = *(undefined8 *)(param_1 + lVar51);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar46;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar51);
    uStack_88 = uVar45;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar51);
    uStack_80 = uVar40;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar42 = &uStack_88;
    param_4 = 3;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar41;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = (long)_DAT_112759348;
    uVar43 = *(undefined8 *)(param_1 + lVar47);
    *(undefined **)(param_1 + lVar47) = puVar1;
    _objc_release(uVar43);
    _objc_release(uVar41);
    _objc_release(lVar51);
    _objc_release(uVar4);
    _objc_release(uVar40);
    _objc_release(lVar49);
    _objc_release(uVar3);
    _objc_release(uVar45);
    _objc_release(lVar44);
    _objc_release(uVar46);
    lVar51 = *(long *)(param_1 + _DAT_11275934c);
    if ((lVar51 == 0) || (func_0x00010c074c20(), (int)lVar51 != 0)) {
      puVar42 = *(undefined8 **)(param_1 + lVar47);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    else {
      func_0x00010be8a320(param_1);
    }
  }
  else {
    func_0x00010c1a7f60();
    param_4 = 0;
    puVar42 = param_3;
    func_0x00010c216260(*(undefined8 *)(param_1 + lVar51));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar44 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar42);
  puVar5 = puVar42;
  func_0x00010c08fa60();
  lVar49 = (long)_DAT_11275934c;
  lVar51 = *(long *)((long)param_3 + lVar49);
  if (puVar5 != (undefined8 *)0x0) {
    if (lVar51 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      uVar45 = *(undefined8 *)((long)param_3 + lVar49);
      *(undefined **)((long)param_3 + lVar49) = puVar1;
      _objc_release(uVar45);
      func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar49));
      func_0x00010befbb60(param_3);
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar51 = (long)_DAT_112759350;
      uVar45 = *(undefined8 *)((long)param_3 + lVar51);
      *(undefined **)((long)param_3 + lVar51) = puVar1;
      _objc_release(uVar45);
      _objc_release(puVar6);
      _objc_release(puVar2);
      func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar51));
      func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar51));
      func_0x00010befbb60(*(undefined8 *)((long)param_3 + lVar49));
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar47 = (long)_DAT_112759354;
      uVar45 = *(undefined8 *)((long)param_3 + lVar47);
      *(undefined **)((long)param_3 + lVar47) = puVar1;
      _objc_release(uVar45);
      _objc_release(puVar6);
      _objc_release(puVar2);
      func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar47));
      func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar47));
      func_0x00010befbb60(*(undefined8 *)((long)param_3 + lVar49));
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar50 = (long)_DAT_112759358;
      uVar45 = *(undefined8 *)((long)param_3 + lVar50);
      *(undefined **)((long)param_3 + lVar50) = puVar1;
      _objc_release(uVar45);
      _objc_release(puVar6);
      _objc_release(puVar2);
      func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar50));
      func_0x00010c1a7f60(*(undefined8 *)((long)param_3 + lVar50));
      func_0x00010befbb60(*(undefined8 *)((long)param_3 + lVar49));
      puVar1 = PTR_PTR_1126af058;
      _objc_opt_new();
      lVar48 = (long)_DAT_11275935c;
      uVar45 = *(undefined8 *)((long)param_3 + lVar48);
      *(undefined **)((long)param_3 + lVar48) = puVar1;
      _objc_release(uVar45);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)((long)param_3 + lVar48));
      _objc_release(puVar1);
      func_0x00010052bbec();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)((long)param_3 + lVar48));
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar48));
      func_0x00010c160fc0(*(undefined8 *)((long)param_3 + lVar48));
      func_0x00010c18b5e0(*(undefined8 *)((long)param_3 + lVar48));
      func_0x00010c099980(*(undefined8 *)((long)param_3 + lVar48));
      func_0x00010befbb60(*(undefined8 *)((long)param_3 + lVar49));
      if (*(long *)((long)param_3 + (long)_DAT_112759340) == 0) {
        *(undefined8 *)((long)param_3 + (long)_DAT_112759340) = 1;
      }
      func_0x00010bee4aa0(param_3);
      puVar5 = param_3;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010bfe0660(uVar45);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar45);
      _objc_release(puVar5);
      func_0x00010c1e3380(0x437a0000,puVar7);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar8 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar40 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)((long)param_3 + lVar48);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar46 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar17;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar19;
      func_0x00010bf49420(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bf49420(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)((long)param_3 + lVar47);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar22;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)((long)param_3 + lVar47);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)((long)param_3 + lVar50);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = uVar28;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = *(undefined8 *)((long)param_3 + lVar50);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar31;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = *(undefined8 *)((long)param_3 + lVar48);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c2793a0(uVar35);
      _objc_retainAutoreleasedReturnValue();
      uVar36 = uVar34;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = *(undefined8 *)((long)param_3 + lVar48);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar38 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c274200(uVar38);
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar37;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar2);
      _objc_release(uVar39);
      _objc_release(uVar38);
      _objc_release(uVar37);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar34);
      _objc_release(uVar33);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(uVar26);
      _objc_release(uVar25);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar43);
      _objc_release(uVar19);
      _objc_release(uVar4);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar3);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar46);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(uVar41);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar40);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar45);
      _objc_release(puVar5);
      _objc_release(uVar8);
      uVar40 = *(undefined8 *)((long)param_3 + lVar48);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = *(undefined8 *)((long)param_3 + lVar49);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar40;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar46 = *(undefined8 *)((long)param_3 + (long)_DAT_112759360);
      *(undefined **)((long)param_3 + (long)_DAT_112759360) = puVar1;
      _objc_release(uVar46);
      _objc_release(uVar45);
      _objc_release(uVar41);
      _objc_release(uVar40);
      uVar40 = *(undefined8 *)((long)param_3 + lVar48);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = *(undefined8 *)((long)param_3 + lVar51);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar40;
      func_0x00010bf493c0(0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      param_4 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar46 = *(undefined8 *)((long)param_3 + (long)_DAT_112759364);
      *(undefined **)((long)param_3 + (long)_DAT_112759364) = puVar1;
      _objc_release(uVar46);
      _objc_release(uVar45);
      _objc_release(uVar41);
      _objc_release(uVar40);
      func_0x00010be8a340(param_3);
      func_0x00010be8a320(param_3);
      _objc_release(puVar7);
      goto LAB_106b86da0;
    }
    func_0x00010c099980(*(undefined8 *)((long)param_3 + (long)_DAT_11275935c));
    lVar51 = *(long *)((long)param_3 + lVar49);
  }
  func_0x00010c1a7f60(lVar51);
  func_0x00010be8a340(param_3);
  func_0x00010be8a320(param_3);
LAB_106b86da0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar44) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    puVar5 = puVar42;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    _objc_opt_respondsToSelector();
    _objc_release(puVar5);
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010bf6b020(puVar42);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed320();
      _objc_release(puVar42);
    }
    _objc_release(param_4);
    return (undefined8 *)0x0;
  }
  return puVar42;
}



/* Entry: 106b86334; end: 106b86de3; -[SCNGORegistrationAccessoryView setAccessoryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106b86334(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong uVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  
  lVar46 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  lVar51 = (long)_DAT_11275934c;
  lVar2 = *(long *)(param_1 + lVar51);
  if (uVar1 != 0) {
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      uVar47 = *(undefined8 *)(param_1 + lVar51);
      *(undefined **)(param_1 + lVar51) = puVar3;
      _objc_release(uVar47);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar51));
      func_0x00010befbb60(param_1);
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar2 = (long)_DAT_112759350;
      uVar47 = *(undefined8 *)(param_1 + lVar2);
      *(undefined **)(param_1 + lVar2) = puVar3;
      _objc_release(uVar47);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar2));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar51));
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar49 = (long)_DAT_112759354;
      uVar47 = *(undefined8 *)(param_1 + lVar49);
      *(undefined **)(param_1 + lVar49) = puVar3;
      _objc_release(uVar47);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar49));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar49));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar51));
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar52 = (long)_DAT_112759358;
      uVar47 = *(undefined8 *)(param_1 + lVar52);
      *(undefined **)(param_1 + lVar52) = puVar3;
      _objc_release(uVar47);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar52));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar52));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar51));
      puVar3 = PTR_PTR_1126af058;
      _objc_opt_new();
      lVar50 = (long)_DAT_11275935c;
      uVar47 = *(undefined8 *)(param_1 + lVar50);
      *(undefined **)(param_1 + lVar50) = puVar3;
      _objc_release(uVar47);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar50));
      _objc_release(puVar3);
      func_0x00010052bbec();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar50));
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar50));
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar50));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar50));
      func_0x00010c099980(*(undefined8 *)(param_1 + lVar50));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar51));
      if (*(long *)(param_1 + _DAT_112759340) == 0) {
        *(undefined8 *)(param_1 + _DAT_112759340) = 1;
      }
      func_0x00010bee4aa0(param_1);
      lVar6 = param_1;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar47 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bfe0660(uVar47);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar47);
      _objc_release(lVar6);
      func_0x00010c1e3380(0x437a0000,lVar7);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar8 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar47 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar48 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar18;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bf49420(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar23;
      func_0x00010bf49420(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(param_1 + lVar49);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = uVar28;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = *(undefined8 *)(param_1 + lVar52);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar31;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = *(undefined8 *)(param_1 + lVar52);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar36 = uVar34;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar38 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c2793a0(uVar38);
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar37;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar40 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c274200(uVar41);
      _objc_retainAutoreleasedReturnValue();
      uVar42 = uVar40;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar42);
      _objc_release(uVar41);
      _objc_release(uVar40);
      _objc_release(uVar39);
      _objc_release(uVar38);
      _objc_release(uVar37);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar34);
      _objc_release(uVar33);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(uVar26);
      _objc_release(uVar25);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar48);
      _objc_release(lVar14);
      _objc_release(uVar13);
      _objc_release(uVar44);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar43);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(uVar47);
      _objc_release(lVar6);
      _objc_release(uVar8);
      uVar43 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = *(undefined8 *)(param_1 + lVar51);
      func_0x00010c08de00(uVar44);
      _objc_retainAutoreleasedReturnValue();
      uVar47 = uVar43;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar48 = *(undefined8 *)(param_1 + _DAT_112759360);
      *(undefined **)(param_1 + _DAT_112759360) = puVar3;
      _objc_release(uVar48);
      _objc_release(uVar47);
      _objc_release(uVar44);
      _objc_release(uVar43);
      uVar43 = *(undefined8 *)(param_1 + lVar50);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar47 = uVar43;
      func_0x00010bf493c0(0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      param_4 = 1;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar48 = *(undefined8 *)(param_1 + _DAT_112759364);
      *(undefined **)(param_1 + _DAT_112759364) = puVar3;
      _objc_release(uVar48);
      _objc_release(uVar47);
      _objc_release(uVar44);
      _objc_release(uVar43);
      func_0x00010be8a340(param_1);
      func_0x00010be8a320(param_1);
      _objc_release(lVar7);
      goto LAB_106b86da0;
    }
    func_0x00010c099980(*(undefined8 *)(param_1 + _DAT_11275935c));
    lVar2 = *(long *)(param_1 + lVar51);
  }
  func_0x00010c1a7f60(lVar2);
  func_0x00010be8a340(param_1);
  func_0x00010be8a320(param_1);
LAB_106b86da0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar46) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    uVar1 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar45 & 1) != 0) {
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed320();
      _objc_release(param_3);
    }
    _objc_release(param_4);
    return 0;
  }
  return param_3;
}



/* Entry: 106b86de4; end: 106b86e73; -[SCNGORegistrationAccessoryView textView:shouldInteractWithURL:inRange:interaction:] */

undefined8 FUN_106b86de4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed320();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  return 0;
}



/* Entry: 106b86e74; end: 106b87043; -[SCNGORegistrationAccessoryView _updateWithNewState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b86e74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  lVar3 = *(long *)(param_1 + _DAT_112759340);
  if (lVar3 < 2) {
    if (lVar3 != 0) {
      if (lVar3 != 1) goto LAB_106b8702c;
      uVar2 = 0xce;
      goto LAB_106b86f38;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112759350),param_2,1);
    piVar5 = (int *)&DAT_112759354;
LAB_106b86ff0:
    piVar4 = (int *)&DAT_112759358;
  }
  else {
    if (lVar3 == 2) {
      uVar2 = 0xd1;
LAB_106b86f38:
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_112759350;
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar3));
      _objc_release(puVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
      piVar5 = (int *)&DAT_112759354;
      goto LAB_106b86ff0;
    }
    if (lVar3 == 3) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
      _objc_retainAutoreleasedReturnValue();
      piVar5 = (int *)&DAT_112759350;
      lVar3 = (long)_DAT_112759354;
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar3));
      _objc_release(puVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
      goto LAB_106b86ff0;
    }
    if (lVar3 != 4) goto LAB_106b8702c;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd0);
    _objc_retainAutoreleasedReturnValue();
    piVar5 = (int *)&DAT_112759350;
    lVar3 = (long)_DAT_112759358;
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar3));
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
    piVar4 = (int *)&DAT_112759354;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + *piVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + *piVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_11275935c));
LAB_106b8702c:
                    /* WARNING: Could not recover jumptable at 0x00010be8a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__relayoutCaptionIfNecessary_112580270);
  return;
}



/* Entry: 106b87044; end: 106b872cf; -[SCNGORegistrationAccessoryView _relayoutAccessoryButtonIfNecessary] */

/* WARNING: Possible PIC construction at 0x000106b87290: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87044(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112759344;
  puVar1 = *(undefined **)(param_1 + lVar14);
  if ((puVar1 == (undefined *)0x0) || (func_0x00010c074c20(), ((ulong)puVar1 & 1) != 0)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return;
    }
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_11275934c);
    if ((uVar2 != 0) && (func_0x00010c074c20(), (uVar2 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_11275935c;
      uVar4 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bf1ff80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010bf493c0(0x4018000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c08de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493c0(0xc028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)_DAT_112759368;
      uVar12 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar1;
      _objc_release(uVar12);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar11);
      _objc_release(uVar5);
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      uVar10 = *(undefined8 *)(param_1 + lVar14);
      goto code_r0x00010beef8c0;
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112759348);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto code_r0x00010beef8c0;
  }
  ___stack_chk_fail();
  uVar2 = *(ulong *)(puVar1 + _DAT_11275935c);
  if (((uVar2 == 0) || (func_0x00010c074c20(), (uVar2 & 1) != 0)) ||
     (4 < *(ulong *)(puVar1 + _DAT_112759340))) {
    return;
  }
  piVar13 = (int *)(&PTR_DAT_110964548)[*(ulong *)(puVar1 + _DAT_112759340)];
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar10 = *(undefined8 *)(puVar1 + *piVar13);
code_r0x00010beef8c0:
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             uVar10);
  return;
}



/* Entry: 106b872d0; end: 106b87367; -[SCNGORegistrationAccessoryView _relayoutCaptionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b872d0(long param_1)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11275935c);
  if (((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) &&
     (*(ulong *)(param_1 + _DAT_112759340) < 5)) {
    piVar2 = (int *)(&PTR_DAT_110964548)[*(ulong *)(param_1 + _DAT_112759340)];
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + *piVar2));
    return;
  }
  return;
}



/* Entry: 106b87368; end: 106b87377; -[SCNGORegistrationAccessoryView accessoryButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b87368(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275936c);
}



/* Entry: 106b87378; end: 106b87387; -[SCNGORegistrationAccessoryView accessoryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b87378(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759370);
}



/* Entry: 106b87388; end: 106b87397; -[SCNGORegistrationAccessoryView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b87388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759340);
}



/* Entry: 106b87398; end: 106b873b7; -[SCNGORegistrationAccessoryView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87398(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759374);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b873b8; end: 106b873cb; -[SCNGORegistrationAccessoryView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b873b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759374,param_3);
  return;
}



/* Entry: 106b873cc; end: 106b874b7; -[SCNGORegistrationAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b873cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759374);
  _objc_storeStrong(param_1 + _DAT_112759370,0);
  _objc_storeStrong(param_1 + _DAT_11275936c,0);
  _objc_storeStrong(param_1 + _DAT_112759364,0);
  _objc_storeStrong(param_1 + _DAT_112759360,0);
  _objc_storeStrong(param_1 + _DAT_112759368,0);
  _objc_storeStrong(param_1 + _DAT_112759348,0);
  _objc_storeStrong(param_1 + _DAT_11275935c,0);
  _objc_storeStrong(param_1 + _DAT_112759358,0);
  _objc_storeStrong(param_1 + _DAT_112759354,0);
  _objc_storeStrong(param_1 + _DAT_112759350,0);
  _objc_storeStrong(param_1 + _DAT_11275934c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759344,0);
  return;
}



/* Entry: 106b874b8; end: 106b8754f; -[SCNGORegistrationBaseViewController initWithContinueButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b874b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112759378;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c20eaa0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b87550; end: 106b876bb; -[SCNGORegistrationBaseViewController initWithStepIndex:totalSteps:continueButtonText:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b87550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f5480;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112759378;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275937c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    FUN_106b8bbfc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar3);
    _objc_release(uVar2);
    FUN_106b8a178(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0();
    _objc_release(puVar3);
    _objc_release(param_3);
    func_0x00010c20eaa0(puVar1);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106b876bc; end: 106b876c3; -[SCNGORegistrationBaseViewController pageViewName] */

undefined8 FUN_106b876bc(void)

{
  return 0x90;
}



/* Entry: 106b876c4; end: 106b87723; -[SCNGORegistrationBaseViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b876c4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5480;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275937c);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 106b87724; end: 106b87efb; -[SCNGORegistrationBaseViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87724(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined8 uVar55;
  long lVar56;
  double dVar57;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126f5480;
  lStack_d8 = param_2;
  _objc_msgSendSuper2(&lStack_d8,PTR_s_loadView_112604be0);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_112759380;
  uVar55 = *(undefined8 *)(param_2 + lVar56);
  *(undefined **)(param_2 + lVar56) = puVar1;
  _objc_release(uVar55);
  func_0x00010c20eaa0(*(undefined8 *)(param_2 + lVar56));
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar56));
  func_0x00010c216260(*(undefined8 *)(param_2 + lVar56));
  func_0x00010befbd60(*(undefined8 *)(param_2 + lVar56));
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar56));
  lVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  lStack_c8 = lVar6;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  lStack_c0 = lVar11;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20060(param_2);
  lVar16 = lVar13;
  func_0x00010bf493c0(-param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  lStack_b8 = lVar16;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar19;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  lStack_b0 = lVar22;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar25;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_2;
  lStack_a8 = lVar28;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_2;
  lStack_a0 = lVar34;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar57 = 80.0;
  lVar40 = lVar37;
  func_0x00010bf493c0(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_2 + lVar56);
  lStack_98 = lVar40;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar41;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_2 + lVar56);
  uStack_90 = uVar44;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20060(param_2);
  uVar55 = uVar45;
  func_0x00010bf493c0(-dVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_2 + lVar56);
  uStack_88 = uVar55;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar48;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_2 + lVar56);
  uStack_80 = uVar51;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar52;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar54 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar53;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar54);
  _objc_release(uVar53);
  _objc_release(lVar56);
  _objc_release(param_2);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(uVar48);
  _objc_release(uVar55);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(uVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112759380),PTR_s_setLoading__11264d500);
  return;
}



/* Entry: 106b87efc; end: 106b87f0b; -[SCNGORegistrationBaseViewController setIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_setLoading__11264d500);
  return;
}



/* Entry: 106b87f0c; end: 106b87f1b; -[SCNGORegistrationBaseViewController isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_isLoading_1125fb508);
  return;
}



/* Entry: 106b87f1c; end: 106b87f2b; -[SCNGORegistrationBaseViewController setCanContinue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 106b87f2c; end: 106b87f3b; -[SCNGORegistrationBaseViewController canContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b87f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 106b87f3c; end: 106b87f7b; -[SCNGORegistrationBaseViewController setCanExit:] */

void FUN_106b87f3c(undefined8 param_1)

{
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b87f7c; end: 106b87fbb; -[SCNGORegistrationBaseViewController canExit] */

bool FUN_106b87f7c(long param_1)

{
  long lVar1;
  
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf84de0();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 106b87fbc; end: 106b8809f; -[SCNGORegistrationBaseViewController setCanSkip:] */

void FUN_106b87fbc(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
  }
  else {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    puVar2 = puVar1;
    func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db8818);
    func_0x000106b8bc2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar1,param_2,puVar2,0);
    _objc_release(puVar2);
    func_0x00010befbd60(puVar1,param_2,param_1,PTR_s_skipButtonTapped_11266d210,0x40);
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(param_1);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b880a0; end: 106b880eb; -[SCNGORegistrationBaseViewController canSkip] */

bool FUN_106b880a0(long param_1)

{
  long lVar1;
  
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106b880ec; end: 106b880fb; -[SCNGORegistrationBaseViewController setIsContinueButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b880ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 106b880fc; end: 106b8810b; -[SCNGORegistrationBaseViewController isContinueButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b880fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 106b8810c; end: 106b8815f; -[SCNGORegistrationBaseViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8810c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010c274210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_112759380),PTR_s_topAnchor_11267aaa8);
  return;
}



/* Entry: 106b88160; end: 106b881b3; -[SCNGORegistrationBaseViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010c274210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_112759380),PTR_s_topAnchor_11267aaa8);
  return;
}



/* Entry: 106b881b4; end: 106b88207; -[SCNGORegistrationBaseViewController skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b881b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010c274210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_112759380),PTR_s_topAnchor_11267aaa8);
  return;
}



/* Entry: 106b88208; end: 106b88217; -[SCNGORegistrationBaseViewController buttonTopAnchor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759380),PTR_s_topAnchor_11267aaa8);
  return;
}



/* Entry: 106b88218; end: 106b8821f; -[SCNGORegistrationBaseViewController bottomConstant] */

undefined8 FUN_106b88218(void)

{
  return 0x4030000000000000;
}



/* Entry: 106b88220; end: 106b88223; -[SCNGORegistrationBaseViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_106b88220(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_backButtonTapped_1125a27f0);
  return;
}



/* Entry: 106b88224; end: 106b88273; -[SCNGORegistrationBaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88224(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275937c,0);
  _objc_storeStrong(param_1 + _DAT_112759380,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759378,0);
  return;
}



/* Entry: 106b88274; end: 106b889a3; -[SCNGORegistrationButtonCompositeView initWithTitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b88274(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_c0 = PTR_PTR_1126f5488;
  puVar29 = &uStack_c8;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar29,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar29 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar32 = (long)_DAT_112759384;
    uVar30 = *(undefined8 *)((long)puVar29 + lVar32);
    *(undefined **)((long)puVar29 + lVar32) = puVar1;
    _objc_release(uVar30);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c212f20(*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c219b60(*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010befbb60(puVar29);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_new();
    lVar31 = (long)_DAT_112759388;
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    *(undefined **)((long)puVar29 + lVar31) = puVar1;
    _objc_release(uVar30);
    func_0x00010c219b60(*(undefined8 *)((long)puVar29 + lVar31));
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c271420(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar30);
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c271420(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(uVar30);
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c08c0e0(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(uVar30);
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c08c0e0(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar30);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c08c0e0(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar30);
    _objc_release(puVar1);
    func_0x00010be43140();
    func_0x00010c181ee0(*(undefined8 *)((long)puVar29 + lVar31));
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar30);
    _objc_release(puVar1);
    func_0x00010c181e40(0x402c000000000000,0x4032000000000000,0x402c000000000000,0x4032000000000000,
                        *(undefined8 *)((long)puVar29 + lVar31));
    func_0x00010c2163a0(0,0,0,0x402c000000000000,*(undefined8 *)((long)puVar29 + lVar31));
    uVar30 = *(undefined8 *)((long)puVar29 + lVar31);
    puVar2 = puVar29;
    func_0x00010bf6b020(puVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60(uVar30);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar29);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar1 = puVar3;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf833a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    func_0x00010c219b60(puVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar3);
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar29 + lVar31));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)((long)puVar29 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar29;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar30;
    uVar7 = *(undefined8 *)((long)puVar29 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar29;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar29 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar29;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar29;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar18;
    uVar19 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar20;
    uVar21 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar29;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    uStack_88 = uVar23;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010bf348e0(uVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar3;
    puStack_80 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar29 + lVar31);
    func_0x00010c2793a0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar25;
    func_0x00010bf493c0(0xc02c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar27;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(puVar25);
    _objc_release(puVar5);
    _objc_release(uVar24);
    _objc_release(puVar4);
    _objc_release(uVar23);
    _objc_release(puVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar30);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar29;
  }
  ___stack_chk_fail();
  puVar29 = *(undefined8 **)(param_3 + _DAT_112759388);
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar29,PTR_s_setTitle_forState__1126632c0);
  return puVar29;
}



/* Entry: 106b889a4; end: 106b889b7; -[SCNGORegistrationButtonCompositeView setButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b889a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759388),PTR_s_setTitle_forState__1126632c0,param_3,0)
  ;
  return;
}



/* Entry: 106b889b8; end: 106b88a07; -[SCNGORegistrationButtonCompositeView buttonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b889b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759388);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b88a08; end: 106b88a17; -[SCNGORegistrationButtonCompositeView accessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759388),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b88a18; end: 106b88a27; -[SCNGORegistrationButtonCompositeView setAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759388),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b88a28; end: 106b88a5f; -[SCNGORegistrationButtonCompositeView _isRTL] */

bool FUN_106b88a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0();
  func_0x00010c292b00(puVar1,param_2,param_1);
  return puVar1 == (undefined *)0x1;
}



/* Entry: 106b88a60; end: 106b88a7f; -[SCNGORegistrationButtonCompositeView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88a60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275938c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b88a80; end: 106b88a93; -[SCNGORegistrationButtonCompositeView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88a80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275938c,param_3);
  return;
}



/* Entry: 106b88a94; end: 106b88adf; -[SCNGORegistrationButtonCompositeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88a94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275938c);
  _objc_storeStrong(param_1 + _DAT_112759388,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759384,0);
  return;
}



/* Entry: 106b88ae0; end: 106b88c13; -[SCNGORegistrationCustomTextField textRectForBounds:] */

double FUN_106b88ae0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f5490;
  dVar3 = param_1;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_textRectForBounds__112678bb8);
  uVar1 = param_5;
  func_0x00010c294a80();
  if ((int)uVar1 == 0) {
    func_0x00010c140e80(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = param_5;
    func_0x00010c140de0();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c074c20(), (uVar2 & 1) == 0)) &&
       (uVar2 = param_5, func_0x00010c140e40(), uVar2 != 0)) {
      func_0x00010c140e80(param_1,param_2,param_3,param_4,param_5);
    }
    _objc_release(uVar1);
    dVar3 = param_1;
  }
  return dVar3 + 18.0;
}



/* Entry: 106b88c14; end: 106b88c17; -[SCNGORegistrationCustomTextField editingRectForBounds:] */

void FUN_106b88c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textRectForBounds__112678bb8);
  return;
}



/* Entry: 106b88c18; end: 106b88c53; -[SCNGORegistrationCustomTextField rightViewRectForBounds:] */

double FUN_106b88c18(double param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5490;
  uStack_20 = param_2;
  _objc_msgSendSuper2(&uStack_20,PTR_s_rightViewRectForBounds__11262ddc0);
  return param_1 + -18.0;
}



/* Entry: 106b88c54; end: 106b88c63; -[SCNGORegistrationCustomTextField usesFullEditingWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b88c54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112759390);
}



/* Entry: 106b88c64; end: 106b88c73; -[SCNGORegistrationCustomTextField setUsesFullEditingWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b88c64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112759390) = param_3;
  return;
}



/* Entry: 106b88c74; end: 106b89573; -[SCNGORegistrationDefaultCompositeView initWithTextContentType:titleText:textFieldPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b88c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126f5498;
  puVar1 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar36 = (long)_DAT_112759394;
    uVar33 = *(undefined8 *)((long)puVar1 + lVar36);
    *(undefined **)((long)puVar1 + lVar36) = puVar2;
    _objc_release(uVar33);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar36));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar36));
    _objc_release(puVar2);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar36));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar36));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126d0d10;
    _objc_opt_new();
    lVar35 = (long)_DAT_112759398;
    uVar33 = *(undefined8 *)((long)puVar1 + lVar35);
    *(undefined **)((long)puVar1 + lVar35) = puVar2;
    _objc_release(uVar33);
    func_0x00010c213240(*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010c16d0a0(*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010c16d0c0(*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010c195580(*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar35));
    uVar33 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c08c0e0(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(uVar33);
    uVar33 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c08c0e0(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar33);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar33 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c08c0e0(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar33);
    _objc_release(puVar2);
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar35));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar35));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar35));
    _objc_release(puVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      uStack_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar3);
      _objc_release(puVar4);
      func_0x00010c16b680(*(undefined8 *)((long)puVar1 + lVar35));
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126d0d08;
    _objc_opt_new();
    lVar34 = (long)_DAT_11275939c;
    uVar33 = *(undefined8 *)((long)puVar1 + lVar34);
    *(undefined **)((long)puVar1 + lVar34) = puVar2;
    _objc_release(uVar33);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_new();
    uVar33 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127593a0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127593a0) = puVar2;
    _objc_release(uVar33);
    puVar5 = puVar1;
    func_0x00010c140e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(0,0,0x4036000000000000,0x4036000000000000);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c140e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c140e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c140e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee2a0(*(undefined8 *)((long)puVar1 + lVar35));
    _objc_release(puVar5);
    func_0x00010c1ee2c0(*(undefined8 *)((long)puVar1 + lVar35));
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127593a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127593a4) = puVar2;
    _objc_release(uVar33);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar36);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar33;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar36);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar36);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar18;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar20;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar21;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar23;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar24;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar26;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar27;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar29;
    uVar30 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar32;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(puVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(puVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(puVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar33);
    _objc_release(puVar5);
    _objc_release(uVar6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127593a8) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR_PTR_1126aeff0;
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 106b89574; end: 106b8959b;  */

void FUN_106b89574(void)

{
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8959c; end: 106b895ab; -[SCNGORegistrationDefaultCompositeView setTextFieldText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8959c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b895ac; end: 106b895bb; -[SCNGORegistrationDefaultCompositeView textFieldText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b895ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b895bc; end: 106b895cb; -[SCNGORegistrationDefaultCompositeView setTextFieldDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b895bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 106b895cc; end: 106b895db; -[SCNGORegistrationDefaultCompositeView textFieldDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b895cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 106b895dc; end: 106b895fb; -[SCNGORegistrationDefaultCompositeView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b895dc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_1127593a8)) {
    return;
  }
  *(long *)(param_1 + _DAT_1127593a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithNewState_112596c50);
  return;
}



/* Entry: 106b895fc; end: 106b8960b; -[SCNGORegistrationDefaultCompositeView setAccessoryButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b895fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275939c),PTR_s_setAccessoryButtonText__112635e78);
  return;
}



/* Entry: 106b8960c; end: 106b8961b; -[SCNGORegistrationDefaultCompositeView setAccessoryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8960c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275939c),PTR_s_setAccessoryText__112635eb0);
  return;
}



/* Entry: 106b8961c; end: 106b8962b; -[SCNGORegistrationDefaultCompositeView setSecureTextEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8961c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setSecureTextEntry__11265c0a8);
  return;
}



/* Entry: 106b8962c; end: 106b8963b; -[SCNGORegistrationDefaultCompositeView isSecureTextEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8962c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_isSecureTextEntry_1125fcf90);
  return;
}



/* Entry: 106b8963c; end: 106b8964b; -[SCNGORegistrationDefaultCompositeView setAutocapitalizationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8963c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setAutocapitalizationType__112638e48);
  return;
}



/* Entry: 106b8964c; end: 106b8965b; -[SCNGORegistrationDefaultCompositeView autocapitalizationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8964c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_autocapitalizationType_1125a2150);
  return;
}



/* Entry: 106b8965c; end: 106b8966b; -[SCNGORegistrationDefaultCompositeView setKeyboardType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8965c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setKeyboardType__11264b5d8);
  return;
}



/* Entry: 106b8966c; end: 106b8967b; -[SCNGORegistrationDefaultCompositeView keyboardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8966c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_keyboardType_1125ff528);
  return;
}



/* Entry: 106b8967c; end: 106b8968b; -[SCNGORegistrationDefaultCompositeView setSpellCheckingType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8967c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c207db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setSpellCheckingType__11265f990);
  return;
}



/* Entry: 106b8968c; end: 106b8969b; -[SCNGORegistrationDefaultCompositeView spellCheckingType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8968c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_spellCheckingType_1126701b8);
  return;
}



/* Entry: 106b8969c; end: 106b896ab; -[SCNGORegistrationDefaultCompositeView setReturnKeyType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8969c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1edbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setReturnKeyType__112659120);
  return;
}



/* Entry: 106b896ac; end: 106b896bb; -[SCNGORegistrationDefaultCompositeView returnKeyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b896ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_returnKeyType_11262d908);
  return;
}



/* Entry: 106b896bc; end: 106b896cb; -[SCNGORegistrationDefaultCompositeView setEnablesReturnKeyAutomatically:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b896bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),
             PTR_s_setEnablesReturnKeyAutomatically_112642f80);
  return;
}



/* Entry: 106b896cc; end: 106b896db; -[SCNGORegistrationDefaultCompositeView enablesReturnKeyAutomatically] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b896cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_enablesReturnKeyAutomatically_1125c2490
            );
  return;
}



/* Entry: 106b896dc; end: 106b896eb; -[SCNGORegistrationDefaultCompositeView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b896dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b896ec; end: 106b896fb; -[SCNGORegistrationDefaultCompositeView isFocused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b896ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_isFocused_1125fa6d0);
  return;
}



/* Entry: 106b896fc; end: 106b8976f; -[SCNGORegistrationDefaultCompositeView moveCursorToFront] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b896fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112759398;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf193c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c26c600(uVar2,param_2,uVar1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b89770; end: 106b8977f; -[SCNGORegistrationDefaultCompositeView textFieldAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_accessibilityIdentifier_112598d58);
  return;
}


