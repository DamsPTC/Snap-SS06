/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d0eee8; end: 104d0ef4f; +[SCNGOPhoneEntryAction updatePhoneNumberWithPhoneNumber:] */

void FUN_104d0eee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ef50; end: 104d0ef73; -[SCNGOPhoneEntryAction copyWithZone:] */

undefined8 FUN_104d0ef50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d0ef74; end: 104d0eff7; -[SCNGOPhoneEntryAction hash] */

void FUN_104d0ef74(long param_1)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e3d90;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d0eff8; end: 104d0f03b; -[SCNGOPhoneEntryAction internalInit] */

void FUN_104d0eff8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3d90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d0f03c; end: 104d0f10b; -[SCNGOPhoneEntryAction isEqual:] */

long FUN_104d0f03c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d0f0e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d0f0f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104d0f0f0;
          }
          goto LAB_104d0f0e4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104d0f0f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d0f10c; end: 104d0f2c7; -[SCNGOPhoneEntryAction matchSubmit:exit:updatePhoneNumber:updateCountryCode:selectLink:tapCountryCodeButton:dismissSuccessPrompt:switchButtonTapped:] */

void FUN_104d0f10c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (1 < lVar2) {
      if (lVar2 == 2) {
        if (param_5 == 0) goto LAB_104d0f270;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_5 + 0x10);
        lVar2 = param_5;
      }
      else {
        if ((lVar2 != 3) || (param_6 == 0)) goto LAB_104d0f270;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        pcVar3 = *(code **)(param_6 + 0x10);
        lVar2 = param_6;
      }
LAB_104d0f258:
      (*pcVar3)(lVar2,uVar1);
      goto LAB_104d0f270;
    }
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_104d0f270;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_104d0f270;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else if (lVar2 < 6) {
    if (lVar2 == 4) {
      if (param_7 == 0) goto LAB_104d0f270;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
      goto LAB_104d0f258;
    }
    if ((lVar2 != 5) || (param_8 == 0)) goto LAB_104d0f270;
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
  }
  else if (lVar2 == 6) {
    if (param_9 == 0) goto LAB_104d0f270;
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar2 = param_9;
  }
  else {
    if ((lVar2 != 7) || (param_10 == 0)) goto LAB_104d0f270;
    pcVar3 = *(code **)(param_10 + 0x10);
    lVar2 = param_10;
  }
  (*pcVar3)(lVar2);
LAB_104d0f270:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d0f2c8; end: 104d0f303; -[SCNGOPhoneEntryAction .cxx_destruct] */

void FUN_104d0f2c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d0f304; end: 104d0f55b; -[SCNGOPhoneEntryViewModel initWithFormattedPhoneNumber:formattedCountryCode:formattedCountryName:countryCodeString:headerTitle:headerSubtitle:accessoryText:errorMessage:successPrompt:canContinue:loading:shouldEnableBackButton:shouldShowSwitchButton:continueButtonTitle:] */

undefined8 *
FUN_104d0f304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e3d98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_12._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_12._3_1_;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d0f55c; end: 104d0f57f; -[SCNGOPhoneEntryViewModel copyWithZone:] */

undefined8 FUN_104d0f55c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d0f580; end: 104d0f67b; -[SCNGOPhoneEntryViewModel hash] */

undefined8 * FUN_104d0f580(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar10 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar8;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_98;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_104d0f7fc:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104d0f808;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
        (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[5];
            if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[6];
              if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[7];
                if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  lVar6 = puVar4[8];
                  if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    lVar6 = puVar4[9];
                    if ((lVar6 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                      lVar6 = puVar4[10];
                      if ((lVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                        puVar7 = (undefined8 *)puVar4[0xb];
                        if (puVar7 != (undefined8 *)param_3[0xb]) {
                          func_0x00010c071ae0();
                          goto LAB_104d0f808;
                        }
                        goto LAB_104d0f7fc;
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
    puVar7 = (undefined8 *)0x0;
  }
LAB_104d0f808:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 104d0f67c; end: 104d0f823; -[SCNGOPhoneEntryViewModel isEqual:] */

long FUN_104d0f67c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d0f7fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d0f808;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_104d0f808;
                        }
                        goto LAB_104d0f7fc;
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
LAB_104d0f808:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d0f824; end: 104d0f82b; -[SCNGOPhoneEntryViewModel formattedPhoneNumber] */

undefined8 FUN_104d0f824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d0f82c; end: 104d0f833; -[SCNGOPhoneEntryViewModel formattedCountryCode] */

undefined8 FUN_104d0f82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d0f834; end: 104d0f83b; -[SCNGOPhoneEntryViewModel formattedCountryName] */

undefined8 FUN_104d0f834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d0f83c; end: 104d0f843; -[SCNGOPhoneEntryViewModel countryCodeString] */

undefined8 FUN_104d0f83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d0f844; end: 104d0f84b; -[SCNGOPhoneEntryViewModel headerTitle] */

undefined8 FUN_104d0f844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104d0f84c; end: 104d0f853; -[SCNGOPhoneEntryViewModel headerSubtitle] */

undefined8 FUN_104d0f84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104d0f854; end: 104d0f85b; -[SCNGOPhoneEntryViewModel accessoryText] */

undefined8 FUN_104d0f854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104d0f85c; end: 104d0f863; -[SCNGOPhoneEntryViewModel errorMessage] */

undefined8 FUN_104d0f85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104d0f864; end: 104d0f86b; -[SCNGOPhoneEntryViewModel successPrompt] */

undefined8 FUN_104d0f864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104d0f86c; end: 104d0f873; -[SCNGOPhoneEntryViewModel canContinue] */

undefined1 FUN_104d0f86c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d0f874; end: 104d0f87b; -[SCNGOPhoneEntryViewModel loading] */

undefined1 FUN_104d0f874(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104d0f87c; end: 104d0f883; -[SCNGOPhoneEntryViewModel shouldEnableBackButton] */

undefined1 FUN_104d0f87c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104d0f884; end: 104d0f88b; -[SCNGOPhoneEntryViewModel shouldShowSwitchButton] */

undefined1 FUN_104d0f884(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104d0f88c; end: 104d0f893; -[SCNGOPhoneEntryViewModel continueButtonTitle] */

undefined8 FUN_104d0f88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104d0f894; end: 104d0f923; -[SCNGOPhoneEntryViewModel .cxx_destruct] */

void FUN_104d0f894(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d0f924; end: 104d0f997; -[SCGraphenePostRegAgeVerificationMetric2 init] */

undefined1 * FUN_104d0f924(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3da0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d0f998; end: 104d0fbc7;  */

void FUN_104d0f998(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar3);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar3 = (char *)&uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11084a6c8,pcVar3,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar4);
  uVar2 = uStack_90;
  uVar1 = uStack_98;
  _objc_retain(uStack_90);
  _objc_retain(uVar1);
  _objc_retain(uStack_a0);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(uVar5);
  _objc_retain(pcVar3);
  _objc_alloc(pcVar4);
  func_0x00010c056520();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
  return;
}



/* Entry: 104d0fbc8; end: 104d0fcef; +[SCPostRegistrationUIRouterActions defaultRouterActionsWithUIContainer:ageVerificationScopeExposer:contactPermissionRequestScopeExposer:addFriendsScopeExposer:addFriendsScopeServices:inviteContactsScopeExposer:bitmojiCameraPermissionRequestScopeExposer:bitmojiCameraPermissionRequestScopeServices:bitmojiAvatarBuilderScopeExposer:] */

void FUN_104d0fbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c056520();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d0fcf0; end: 104d0fda7; +[SCPostRegistrationUIRouterActions legacyRouterActionsWithUIContainer:bitmojiCameraPermissionRequestScopeExposer:bitmojiCameraPermissionRequestScopeServices:bitmojiAvatarBuilderScopeExposer:] */

void FUN_104d0fcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c056520();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d0fda8; end: 104d0ff77; -[SCPostRegistrationUIRouterActions initWithUIContainer:ageVerificationScopeExposer:contactPermissionRequestScopeExposer:addFriendsScopeExposer:addFriendsScopeServices:inviteContactsScopeExposer:bitmojiCameraPermissionRequestScopeExposer:bitmojiCameraPermissionRequestScopeServices:bitmojiAvatarBuilderScopeExposer:] */

undefined1 *
FUN_104d0fda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e3da8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0ff78; end: 104d0ffdf; -[SCPostRegistrationUIRouterActions startAgeVerificationWorkflow:] */

void FUN_104d0ff78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af660;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c002620();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0ffe0; end: 104d10017; -[SCPostRegistrationUIRouterActions endAgeVerificationWorkflow] */

void FUN_104d0ffe0(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d10018; end: 104d100b3; -[SCPostRegistrationUIRouterActions startContactPermissionRequestWorkflow:] */

void FUN_104d10018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeb30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01f0a0();
  puVar2 = PTR_PTR_1126aeb38;
  _objc_alloc(PTR_PTR_1126aeb38);
  func_0x00010c056700();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d100b4; end: 104d100d3; -[SCPostRegistrationUIRouterActions endContactPermissionRequestWorkflow] */

void FUN_104d100b4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d100d4; end: 104d10177; -[SCPostRegistrationUIRouterActions startPostRegAddFriendsWorkflow:] */

void FUN_104d100d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af668;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033380();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf22980(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 8),0,0xd,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d10178; end: 104d101af; -[SCPostRegistrationUIRouterActions endPostRegAddFriendsWorkflow] */

void FUN_104d10178(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d101b0; end: 104d1021f; -[SCPostRegistrationUIRouterActions showPostRegInviteContacts:hasContactsToInvite:] */

void FUN_104d101b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af670;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c058560();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d10220; end: 104d10257; -[SCPostRegistrationUIRouterActions dismissPostRegInviteContacts] */

void FUN_104d10220(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d10258; end: 104d1029f; -[SCPostRegistrationUIRouterActions startBitmojiCameraPermissionRequestWorkflow:] */

void FUN_104d10258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf23ce0(uVar1,param_2,*(undefined8 *)(param_1 + 8),param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d102a0; end: 104d102d7; -[SCPostRegistrationUIRouterActions endBitmojiCameraPermissionRequestWorkflow] */

void FUN_104d102a0(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d102d8; end: 104d10343; -[SCPostRegistrationUIRouterActions startBitmojiAvatarBuilderWorkflow:withLiveMirror:] */

void FUN_104d102d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af678;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04a940();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d10344; end: 104d1037b; -[SCPostRegistrationUIRouterActions endBitmojiAvatarBuilderWorkflow] */

void FUN_104d10344(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d1037c; end: 104d103ff; -[SCPostRegistrationUIRouterActions .cxx_destruct] */

void FUN_104d1037c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d10400; end: 104d107bb; -[SCPostRegistrationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d10400(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar12 = param_1 + _DAT_1127112f0;
  _objc_loadWeakRetained(lVar12);
  lVar1 = lVar12;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc40();
  _objc_release(lVar1);
  _objc_release(lVar12);
  puVar2 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11271133c;
    _objc_loadWeakRetained(lVar12);
  }
  lVar1 = lVar12;
  func_0x00010bfa2bc0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dafb58,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar12);
  _objc_release(puVar2);
  func_0x00010bedf180(param_1);
  puVar2 = PTR_PTR_1126af688;
  lVar9 = (long)_DAT_1127112f4;
  lVar12 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar3 = lVar12;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127112f8);
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127112fc);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112711300);
  lVar1 = param_1 + _DAT_112711304;
  _objc_loadWeakRetained(lVar1);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112711308);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271130c);
  lVar4 = param_1 + _DAT_112711310;
  _objc_loadWeakRetained();
  func_0x00010bf6a1c0(puVar2,param_2,lVar3,uVar13,uVar14,uVar15,lVar1,uVar16,uVar10,lVar4,
                      *(undefined8 *)(param_1 + _DAT_112711314));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar12);
  puVar5 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  lVar12 = param_1 + _DAT_112711318;
  _objc_loadWeakRetained(lVar12);
  lVar1 = lVar12;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_1 + _DAT_11271131c;
  _objc_loadWeakRetained();
  lVar4 = lVar12;
  func_0x00010bf4a320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar12);
  lVar12 = lVar3;
  func_0x00010c292c20();
  if ((int)lVar12 != 0) {
    lVar12 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28bb20();
    _objc_release(lVar12);
  }
  func_0x00010be51e00(param_1);
  puVar6 = PTR_PTR_1126af690;
  _objc_alloc(PTR_PTR_1126af690);
  lVar12 = param_1 + _DAT_112711320;
  _objc_loadWeakRetained(lVar12);
  lVar4 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002420(puVar6,param_2,lVar1,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar12);
  func_0x00010bf3bd40(lVar3);
  puVar7 = PTR_PTR_1126af698;
  _objc_alloc();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112711324;
  _objc_loadWeakRetained(lVar12);
  lVar8 = lVar12;
  func_0x00010c104ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040800(puVar7,param_2,puVar5,lVar4,puVar6,lVar8);
  lVar11 = (long)_DAT_112711328;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar7;
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar9);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d107bc; end: 104d108b7; -[SCPostRegistrationEntryPoint _updateSearchabilityIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d107bc(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112711330;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c293780(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0be060(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d108b8; end: 104d109fb;  */

void FUN_104d108b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2983c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d109fc;
  puStack_68 = &UNK_11084a738;
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  func_0x00010c0bf380(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d109fc; end: 104d10b13;  */

void FUN_104d109fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104d10b14(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c154a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  func_0x00010c2898c0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d10b14; end: 104d10b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d10b14(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112711334);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d10b38; end: 104d10b6b;  */

void FUN_104d10b38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d10b6c; end: 104d10b6f;  */

void FUN_104d10b6c(void)

{
  return;
}



/* Entry: 104d10b70; end: 104d10c9b;  */

void FUN_104d10b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104d10b14(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c154a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  func_0x00010c2898c0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d10c9c; end: 104d10ccf;  */

void FUN_104d10c9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d10cd0; end: 104d10cd3;  */

void FUN_104d10cd0(void)

{
  return;
}



/* Entry: 104d10cd4; end: 104d10e0f; -[SCPostRegistrationEntryPoint _updateSearchabilityDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d10cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  FUN_104d10e10();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c104ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2d60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_1;
  FUN_104d10e10(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c104ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112711338;
    _objc_loadWeakRetained(lVar1);
  }
  lVar5 = lVar1;
  func_0x00010bf46520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c154a80();
  func_0x00010c0ae6e0(lVar4,param_2,5,param_3,lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d10e10; end: 104d10e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d10e10(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112711324);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d10e34; end: 104d10fe7; -[SCPostRegistrationEntryPoint _logContactPermissionPrepromptInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d10e34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + _DAT_112711324;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c104ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112711318;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271131c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4a320();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010c292c20();
  if ((int)lVar1 == 0) {
    func_0x00010c0adb80(lVar3,param_2,1);
  }
  else {
    func_0x00010c0adba0(lVar3,param_2,1);
  }
  func_0x00010c0b2a40(lVar3,param_2,lVar1,1);
  lVar1 = lVar5;
  func_0x00010c2670a0();
  if ((int)lVar1 != 0) {
    lVar1 = lVar4;
    func_0x00010bf4a260();
    if (lVar1 - 2U < 2) {
      uVar6 = 1;
      func_0x00010c0adba0(lVar3,param_2,1);
    }
    else {
      if ((lVar1 != 1) && (lVar1 != 4)) goto LAB_104d10fc0;
      func_0x00010c0adb80(lVar3,param_2,1);
      uVar6 = 0;
    }
    func_0x00010c0b2a40(lVar3,param_2,uVar6,0);
    func_0x00010be599c0(param_1,param_2,uVar6);
  }
LAB_104d10fc0:
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104d10fe8; end: 104d110ff; -[SCPostRegistrationEntryPoint _logSystemLevelPermissionGrantStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d10fe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar2 = param_1 + _DAT_112711318;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf49c00();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126af6a0;
  _objc_opt_new(PTR_PTR_1126af6a0);
  func_0x00010c206c40();
  uVar1 = 3;
  if (lVar5 != 4) {
    uVar1 = 0;
  }
  if (lVar5 == 3) {
    uVar1 = 1;
  }
  func_0x00010c161fe0(puVar6,param_2,uVar1);
  func_0x00010c1e4f40(puVar6,param_2,6);
  param_1 = param_1 + _DAT_11271132c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104d11100; end: 104d1122b; -[SCPostRegistrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d11100(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127112f0);
  _objc_destroyWeak(param_1 + _DAT_112711320);
  _objc_storeStrong(param_1 + _DAT_1127112f8,0);
  _objc_destroyWeak(param_1 + _DAT_112711310);
  _objc_storeStrong(param_1 + _DAT_11271130c,0);
  _objc_storeStrong(param_1 + _DAT_112711314,0);
  _objc_storeStrong(param_1 + _DAT_112711308,0);
  _objc_destroyWeak(param_1 + _DAT_112711304);
  _objc_storeStrong(param_1 + _DAT_112711300,0);
  _objc_storeStrong(param_1 + _DAT_1127112fc,0);
  _objc_destroyWeak(param_1 + _DAT_11271132c);
  _objc_destroyWeak(param_1 + _DAT_11271133c);
  _objc_destroyWeak(param_1 + _DAT_112711338);
  _objc_destroyWeak(param_1 + _DAT_112711324);
  _objc_destroyWeak(param_1 + _DAT_112711334);
  _objc_destroyWeak(param_1 + _DAT_11271131c);
  _objc_destroyWeak(param_1 + _DAT_112711318);
  _objc_destroyWeak(param_1 + _DAT_1127112f4);
  _objc_destroyWeak(param_1 + _DAT_112711330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711328,0);
  return;
}



/* Entry: 104d1122c; end: 104d112cf; -[SCPostRegDefaultStateTransition initWithContactPermissionInfoProvider:circumstanceEngine:] */

undefined1 *
FUN_104d1122c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3db0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 104d112d0; end: 104d114b3; -[SCPostRegDefaultStateTransition getNextStateFromState:action:] */

void FUN_104d112d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104d114b4;
  uStack_40 = 0x104d114c4;
  uStack_38 = 0;
  func_0x00010c0bcb00(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d114b4; end: 104d114cb;  */

void FUN_104d114b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d114cc; end: 104d1151b;  */

void FUN_104d114cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126af6a8;
  func_0x00010befe860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d1151c; end: 104d11673;  */

void FUN_104d1151c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfcdc40();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4a260();
    _objc_release(uVar2);
    if (2 < uVar4) {
      if (uVar4 == 3) {
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
        func_0x000106bfdc98();
        if (1 < uVar4) goto LAB_104d11638;
        puVar7 = PTR_PTR_1126af6a8;
        func_0x00010bef8f40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (uVar4 != 4) {
          return;
        }
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
        func_0x000106bfdc98();
        if (uVar4 < 2) {
          puVar7 = PTR_PTR_1126af6a8;
          func_0x00010bef8f80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
LAB_104d11638:
          puVar7 = PTR_PTR_1126af6a8;
          func_0x00010bf880e0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      _objc_retain();
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar7;
      _objc_release(uVar5);
      goto LAB_104d115c8;
    }
  }
  puVar3 = PTR_PTR_1126af6a8;
  func_0x00010bf4a000();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  puVar7 = *(undefined **)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
LAB_104d115c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104d11674; end: 104d119e3;  */

void FUN_104d11674(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 3 || lVar4 == 1) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x000106bfdc98();
    if (uVar1 < 2) {
      puVar2 = PTR_PTR_1126af6a8;
      func_0x00010bef8f80();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d11710;
    }
  }
  else {
    if (lVar4 != 0) {
      return;
    }
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x000106bfdc98();
    if (uVar1 < 2) {
      puVar2 = PTR_PTR_1126af6a8;
      func_0x00010bef8f40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d11710;
    }
  }
  puVar2 = PTR_PTR_1126af6a8;
  func_0x00010bf880e0();
  _objc_retainAutoreleasedReturnValue();
LAB_104d11710:
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain();
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d119e4; end: 104d119e7;  */

void FUN_104d119e4(void)

{
  return;
}



/* Entry: 104d119e8; end: 104d119ff; -[SCPostRegDefaultStateTransition shouldUseBitmojiCameraNotNowToWebBuilder] */

void FUN_104d119e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dafb78,0,0);
  return;
}



/* Entry: 104d11a00; end: 104d11a2f; -[SCPostRegDefaultStateTransition .cxx_destruct] */

void FUN_104d11a00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d11a30; end: 104d11b23; -[SCPostRegistrationWorkflow initWithRouter:delegate:stateTransition:postRegistrationLogger:] */

undefined1 *
FUN_104d11a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3db8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d11b24; end: 104d11ba7; -[SCPostRegistrationWorkflow beginWorkflow] */

void FUN_104d11b24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126af6a8;
  func_0x00010bf17a60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d11ba8;
  puStack_30 = &UNK_11084a8a8;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 104d11ba8; end: 104d11bb7;  */

void FUN_104d11ba8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__enterNextStateWithAction_routeA_1125603b0,0,
             param_2);
  return;
}



/* Entry: 104d11bb8; end: 104d11c0f; -[SCPostRegistrationWorkflow postRegAgeVerificationCompleted] */

void FUN_104d11bb8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d11c10;
  puStack_20 = &UNK_11084a8a8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d11c10; end: 104d11c53;  */

void FUN_104d11c10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf94120(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d11c54; end: 104d11cab; -[SCPostRegistrationWorkflow contactPermissionWorkflowSkipped] */

void FUN_104d11c54(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d11cac;
  puStack_20 = &UNK_11084a8a8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d11cac; end: 104d11cef;  */

void FUN_104d11cac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf944e0(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d11cf0; end: 104d11d4b; -[SCPostRegistrationWorkflow contactPermissionWorkflowCompletedWithPermissionGranted:] */

void FUN_104d11cf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104d11d4c;
  puStack_28 = &UNK_11084a8d8;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 104d11d4c; end: 104d11d9b;  */

void FUN_104d11d4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf944e0(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d11d9c; end: 104d11d9f; -[SCPostRegistrationWorkflow contactPermissionWorkflowCompletedWithGoToSettings:] */

void FUN_104d11d9c(void)

{
  return;
}



/* Entry: 104d11da0; end: 104d11dfb; -[SCPostRegistrationWorkflow addFriendsWorkflowSkipped:] */

void FUN_104d11da0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + 0x30) = param_3;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d11dfc;
  puStack_20 = &UNK_11084a8a8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d11dfc; end: 104d11e3f;  */

void FUN_104d11dfc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf950e0(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d11e40; end: 104d11e9b; -[SCPostRegistrationWorkflow addFriendsWorkflowCompleted:] */

void FUN_104d11e40(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + 0x30) = param_3;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d11e9c;
  puStack_20 = &UNK_11084a8a8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d11e9c; end: 104d11edf;  */

void FUN_104d11e9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf950e0(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d11ee0; end: 104d11f37; -[SCPostRegistrationWorkflow inviteContactsCompleted] */

void FUN_104d11ee0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d11f38;
  puStack_20 = &UNK_11084a8a8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d11f38; end: 104d11f7b;  */

void FUN_104d11f38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf84100(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d11f7c; end: 104d11fd3; -[SCPostRegistrationWorkflow inviteContactsAutoSkip] */

void FUN_104d11f7c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d11fd4;
  puStack_20 = &UNK_11084a8a8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d11fd4; end: 104d12017;  */

void FUN_104d11fd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf84100(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d12018; end: 104d1201b; -[SCPostRegistrationWorkflow bitmojiCameraPrePromptPermissionAccepted] */

void FUN_104d12018(void)

{
  return;
}



/* Entry: 104d1201c; end: 104d12023; -[SCPostRegistrationWorkflow bitmojiCameraPrePromptPermissionDenied] */

void FUN_104d1201c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bitmojiCameraPermissionWorkflow_112552b30,3)
  ;
  return;
}



/* Entry: 104d12024; end: 104d1202b; -[SCPostRegistrationWorkflow bitmojiCameraPermissionGranted] */

void FUN_104d12024(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bitmojiCameraPermissionWorkflow_112552b30,0)
  ;
  return;
}



/* Entry: 104d1202c; end: 104d12033; -[SCPostRegistrationWorkflow bitmojiCameraPermissionDenied] */

void FUN_104d1202c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bitmojiCameraPermissionWorkflow_112552b30,3)
  ;
  return;
}



/* Entry: 104d12034; end: 104d1203b; -[SCPostRegistrationWorkflow bitmojiCameraPermissionSkipped] */

void FUN_104d12034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bitmojiCameraPermissionWorkflow_112552b30,1)
  ;
  return;
}



/* Entry: 104d1203c; end: 104d12043; -[SCPostRegistrationWorkflow bitmojiCameraPermissionLinkExisting] */

void FUN_104d1203c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bitmojiCameraPermissionWorkflow_112552b30,1)
  ;
  return;
}



/* Entry: 104d12044; end: 104d1209b; -[SCPostRegistrationWorkflow _bitmojiCameraPermissionWorkflowCompletedWithAction:] */

void FUN_104d12044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104d1209c;
  puStack_28 = &UNK_11084a908;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 104d1209c; end: 104d120db;  */

void FUN_104d1209c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf942e0(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d120dc; end: 104d120e7; -[SCPostRegistrationWorkflow bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_104d120dc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__bitmojiAvatarBuilderFlowComplet_112552af0,param_3 == 0);
  return;
}



/* Entry: 104d120e8; end: 104d1213f; -[SCPostRegistrationWorkflow _bitmojiAvatarBuilderFlowCompletedWithAction:] */

void FUN_104d120e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104d12140;
  puStack_28 = &UNK_11084a908;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 104d12140; end: 104d1217f;  */

void FUN_104d12140(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf942c0(param_2);
  func_0x00010be0a840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d12180; end: 104d123a7; -[SCPostRegistrationWorkflow _enterNextStateWithAction:routeActions:] */

void FUN_104d12180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfc80c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104d123ac;
  puStack_68 = &UNK_110841f80;
  _objc_retain(param_4);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104d123b8;
  puStack_98 = &UNK_110841f80;
  uStack_60 = param_4;
  lStack_58 = param_1;
  _objc_retain(param_4);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104d123c4;
  puStack_c8 = &UNK_110841f80;
  uStack_90 = param_4;
  lStack_88 = param_1;
  _objc_retain(param_4);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104d123d0;
  puStack_f8 = &UNK_110841f80;
  uStack_c0 = param_4;
  lStack_b8 = param_1;
  _objc_retain(param_4);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x104d123dc;
  puStack_128 = &UNK_110841f80;
  uStack_f0 = param_4;
  lStack_e8 = param_1;
  _objc_retain(param_4);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x104d123ec;
  puStack_158 = &UNK_110841f80;
  uStack_120 = param_4;
  lStack_118 = param_1;
  _objc_retain(param_4);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x104d123f8;
  puStack_188 = &UNK_110841f80;
  uStack_150 = param_4;
  lStack_148 = param_1;
  _objc_retain(param_4);
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x104d12408;
  puStack_1b8 = &UNK_110841f80;
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_104d12418;
  puStack_1e0 = &UNK_110842e18;
  lStack_1d8 = param_1;
  uStack_1b0 = param_4;
  lStack_1a8 = param_1;
  uStack_180 = param_4;
  lStack_178 = param_1;
  _objc_retain(param_4);
  func_0x00010c0bcb00(uVar3,param_2,&PTR___NSConcreteGlobalBlock_11084a938,&puStack_80,&puStack_b0,
                      &puStack_e0,&puStack_110,&puStack_140,&puStack_170,&puStack_1a0,&puStack_1d0,
                      &puStack_1f8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_180);
  _objc_release(uStack_150);
  _objc_release(uStack_120);
  _objc_release(uStack_f0);
  _objc_release(uStack_c0);
  _objc_release(uStack_90);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d123a8; end: 104d12417;  */

void FUN_104d123a8(void)

{
  return;
}



/* Entry: 104d12418; end: 104d12447;  */

void FUN_104d12418(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c104ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


