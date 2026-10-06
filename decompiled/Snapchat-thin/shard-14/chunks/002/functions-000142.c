/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b02f588; end: 10b02f58f; -[SCSelectionSpotlightStoryInstructionText text] */

undefined8 FUN_10b02f588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02f590; end: 10b02f597; -[SCSelectionSpotlightStoryInstructionText icon] */

undefined8 FUN_10b02f590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02f598; end: 10b02f59f; -[SCSelectionSpotlightStoryInstructionText attributedText] */

undefined8 FUN_10b02f598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02f5a0; end: 10b02f5a7; -[SCSelectionSpotlightStoryInstructionText isErrorState] */

undefined1 FUN_10b02f5a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02f5a8; end: 10b02f5e3; -[SCSelectionSpotlightStoryInstructionText .cxx_destruct] */

void FUN_10b02f5a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b02f5e4; end: 10b02f5eb; -[SCSnapProServices preferencesManager] */

undefined8 FUN_10b02f5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02f5ec; end: 10b02f5f3; -[SCSnapProServices highlightsReporter] */

undefined8 FUN_10b02f5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02f5f4; end: 10b02f5fb; -[SCSnapProServices publicProfileManager] */

undefined8 FUN_10b02f5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b02f5fc; end: 10b02f603; -[SCSnapProServices subscriptionWorkflowStarter] */

undefined8 FUN_10b02f5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b02f604; end: 10b02f60b; -[SCSnapProServices highlightsProvider] */

undefined8 FUN_10b02f604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b02f60c; end: 10b02f613; -[SCSnapProServices massSnapPostSignalService] */

undefined8 FUN_10b02f60c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b02f614; end: 10b02f697; -[SCSnapProServices .cxx_destruct] */

void FUN_10b02f614(long param_1)

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



/* Entry: 10b02f698; end: 10b02f957; -[SCSnapProProfile initWithProfileId:hostAccountUserId:hostAccountUsername:publisherId:organizationId:title:logoURL:discoverFeedLogoURL:isOfficial:officialBadgeType:tier:showContentId:category:bitmojiAvatarId:bitmojiSelfieId:isDefaultLogo:categoryEnum:subcategoryEnum:] */

undefined8 *
FUN_10b02f698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_112704b10;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    *(undefined1 *)(puVar1 + 1) = param_11;
    puVar1[10] = param_13;
    puVar1[0xb] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_19;
    puVar1[0x10] = param_21;
    puVar1[0x11] = param_22;
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
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



/* Entry: 10b02f958; end: 10b02f97b; -[SCSnapProProfile copyWithZone:] */

undefined8 FUN_10b02f958(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02f97c; end: 10b02fa87; -[SCSnapProProfile hash] */

undefined8 * FUN_10b02f97c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x68);
  uStack_50 = *(undefined8 *)(param_1 + 0x70);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  puVar3 = &uStack_b8;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b02fc50:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b02fc5c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[10] == param_3[10])) &&
           (puVar3[0xb] == param_3[0xb])) &&
          ((puVar3[0xd] == param_3[0xd] &&
           (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))))) &&
        (puVar3[0x10] == param_3[0x10])) && (puVar3[0x11] == param_3[0x11])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xc];
                      if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xe];
                        if ((lVar5 == param_3[0xe]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = (undefined8 *)puVar3[0xf];
                          if (puVar6 != (undefined8 *)param_3[0xf]) {
                            func_0x00010c071ae0();
                            goto LAB_10b02fc5c;
                          }
                          goto LAB_10b02fc50;
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
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b02fc5c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b02fa88; end: 10b02fc77; -[SCSnapProProfile isEqual:] */

long FUN_10b02fa88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02fc50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02fc5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
           (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
          ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))) &&
       (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) {
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
                      lVar3 = *(long *)(param_1 + 0x60);
                      if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x78);
                          if (lVar3 != *(long *)(param_3 + 0x78)) {
                            func_0x00010c071ae0();
                            goto LAB_10b02fc5c;
                          }
                          goto LAB_10b02fc50;
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
LAB_10b02fc5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02fc78; end: 10b02fc7f; -[SCSnapProProfile profileId] */

undefined8 FUN_10b02fc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02fc80; end: 10b02fc87; -[SCSnapProProfile hostAccountUserId] */

undefined8 FUN_10b02fc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02fc88; end: 10b02fc8f; -[SCSnapProProfile hostAccountUsername] */

undefined8 FUN_10b02fc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02fc90; end: 10b02fc97; -[SCSnapProProfile publisherId] */

undefined8 FUN_10b02fc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02fc98; end: 10b02fc9f; -[SCSnapProProfile organizationId] */

undefined8 FUN_10b02fc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b02fca0; end: 10b02fca7; -[SCSnapProProfile title] */

undefined8 FUN_10b02fca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b02fca8; end: 10b02fcaf; -[SCSnapProProfile logoURL] */

undefined8 FUN_10b02fca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b02fcb0; end: 10b02fcb7; -[SCSnapProProfile discoverFeedLogoURL] */

undefined8 FUN_10b02fcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b02fcb8; end: 10b02fcbf; -[SCSnapProProfile isOfficial] */

undefined1 FUN_10b02fcb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02fcc0; end: 10b02fcc7; -[SCSnapProProfile officialBadgeType] */

undefined8 FUN_10b02fcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b02fcc8; end: 10b02fccf; -[SCSnapProProfile tier] */

undefined8 FUN_10b02fcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b02fcd0; end: 10b02fcd7; -[SCSnapProProfile showContentId] */

undefined8 FUN_10b02fcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b02fcd8; end: 10b02fcdf; -[SCSnapProProfile category] */

undefined8 FUN_10b02fcd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b02fce0; end: 10b02fce7; -[SCSnapProProfile bitmojiAvatarId] */

undefined8 FUN_10b02fce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b02fce8; end: 10b02fcef; -[SCSnapProProfile bitmojiSelfieId] */

undefined8 FUN_10b02fce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b02fcf0; end: 10b02fcf7; -[SCSnapProProfile isDefaultLogo] */

undefined1 FUN_10b02fcf0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b02fcf8; end: 10b02fcff; -[SCSnapProProfile categoryEnum] */

undefined8 FUN_10b02fcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b02fd00; end: 10b02fd07; -[SCSnapProProfile subcategoryEnum] */

undefined8 FUN_10b02fd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b02fd08; end: 10b02fda3; -[SCSnapProProfile .cxx_destruct] */

void FUN_10b02fd08(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10b02fda4; end: 10b02fdf3; -[SCShareAnonymouslyMetadata initWithSpotlight:snapMap:] */

void FUN_10b02fda4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704b18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10b02fdf4; end: 10b02fe17; -[SCShareAnonymouslyMetadata copyWithZone:] */

undefined8 FUN_10b02fdf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02fe18; end: 10b02fe73; -[SCShareAnonymouslyMetadata hash] */

ulong * FUN_10b02fe18(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b02fe74; end: 10b02ff0b; -[SCShareAnonymouslyMetadata isEqual:] */

bool FUN_10b02fe74(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b02ff0c; end: 10b02ff13; -[SCShareAnonymouslyMetadata spotlight] */

undefined1 FUN_10b02ff0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02ff14; end: 10b02ff1b; -[SCShareAnonymouslyMetadata snapMap] */

undefined1 FUN_10b02ff14(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b02ff1c; end: 10b03007f; -[SCSnapProManagedProfile initWithProfile:features:settings:canPostToStory:canPostToSpotlight:canUpdateProfile:canSaveHighlights:isHost:localizedRoleNames:userAgeEnum:hasUnreadNotifications:] */

undefined8 *
FUN_10b02ff1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112704b20;
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
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_12;
    *(undefined1 *)((long)puVar1 + 0xd) = param_13;
  }
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b030080; end: 10b0300a3; -[SCSnapProManagedProfile copyWithZone:] */

undefined8 FUN_10b030080(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0300a4; end: 10b030177; -[SCSnapProManagedProfile hash] */

undefined8 * FUN_10b0300a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar3;
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
  uStack_68 = (ulong)uVar1 & 0xff;
  uStack_60 = uVar10 >> 0x10 & 0xff;
  uStack_58 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar8;
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x30);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_40 = uVar3;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b030298:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0302a4;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)((long)puVar4 + 8) == param_3[8] &&
            (*(char *)((long)puVar4 + 9) == param_3[9])) &&
           (*(char *)((long)puVar4 + 10) == param_3[10])) &&
          ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           (*(char *)((long)puVar4 + 0xc) == param_3[0xc])))))) &&
        (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))) &&
       (*(char *)((long)puVar4 + 0xd) == param_3[0xd])) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = *(undefined1 **)((long)puVar4 + 0x28);
            if (puVar7 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0302a4;
            }
            goto LAB_10b030298;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b0302a4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b030178; end: 10b0302bf; -[SCSnapProManagedProfile isEqual:] */

long FUN_10b030178(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b030298:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0302a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0302a4;
            }
            goto LAB_10b030298;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0302a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0302c0; end: 10b0302c7; -[SCSnapProManagedProfile profile] */

undefined8 FUN_10b0302c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0302c8; end: 10b0302cf; -[SCSnapProManagedProfile features] */

undefined8 FUN_10b0302c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0302d0; end: 10b0302d7; -[SCSnapProManagedProfile settings] */

undefined8 FUN_10b0302d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0302d8; end: 10b0302df; -[SCSnapProManagedProfile canPostToStory] */

undefined1 FUN_10b0302d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0302e0; end: 10b0302e7; -[SCSnapProManagedProfile canPostToSpotlight] */

undefined1 FUN_10b0302e0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0302e8; end: 10b0302ef; -[SCSnapProManagedProfile canUpdateProfile] */

undefined1 FUN_10b0302e8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b0302f0; end: 10b0302f7; -[SCSnapProManagedProfile canSaveHighlights] */

undefined1 FUN_10b0302f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b0302f8; end: 10b0302ff; -[SCSnapProManagedProfile isHost] */

undefined1 FUN_10b0302f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b030300; end: 10b030307; -[SCSnapProManagedProfile localizedRoleNames] */

undefined8 FUN_10b030300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b030308; end: 10b03030f; -[SCSnapProManagedProfile userAgeEnum] */

undefined8 FUN_10b030308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b030310; end: 10b030317; -[SCSnapProManagedProfile hasUnreadNotifications] */

undefined1 FUN_10b030310(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b030318; end: 10b03035f; -[SCSnapProManagedProfile .cxx_destruct] */

void FUN_10b030318(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b030360; end: 10b0303af; -[SCSnapProManagedProfileFeatures initWithStoryReplies:storyReplyQuoting:] */

void FUN_10b030360(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704b28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10b0303b0; end: 10b0303d3; -[SCSnapProManagedProfileFeatures copyWithZone:] */

undefined8 FUN_10b0303b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0303d4; end: 10b03042f; -[SCSnapProManagedProfileFeatures hash] */

ulong * FUN_10b0303d4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b030430; end: 10b0304c7; -[SCSnapProManagedProfileFeatures isEqual:] */

bool FUN_10b030430(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0304c8; end: 10b0304cf; -[SCSnapProManagedProfileFeatures storyReplies] */

undefined1 FUN_10b0304c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0304d0; end: 10b0304d7; -[SCSnapProManagedProfileFeatures storyReplyQuoting] */

undefined1 FUN_10b0304d0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0304d8; end: 10b030527; -[SCSnapProManagedProfileSettings initWithShowStoryReplies:showFavoriteCounts:] */

void FUN_10b0304d8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704b30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10b030528; end: 10b03054b; -[SCSnapProManagedProfileSettings copyWithZone:] */

undefined8 FUN_10b030528(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b03054c; end: 10b0305a7; -[SCSnapProManagedProfileSettings hash] */

ulong * FUN_10b03054c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b0305a8; end: 10b03063f; -[SCSnapProManagedProfileSettings isEqual:] */

bool FUN_10b0305a8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b030640; end: 10b030647; -[SCSnapProManagedProfileSettings showStoryReplies] */

undefined1 FUN_10b030640(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b030648; end: 10b03064f; -[SCSnapProManagedProfileSettings showFavoriteCounts] */

undefined1 FUN_10b030648(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b030650; end: 10b0307bb; -[SCSnapProReportInfo initWithProfileId:highlightId:highlightVersion:reasonId:context:reporterUsername:] */

undefined1 *
FUN_10b030650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112704b38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0307bc; end: 10b0307df; -[SCSnapProReportInfo copyWithZone:] */

undefined8 FUN_10b0307bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0307e0; end: 10b030883; -[SCSnapProReportInfo hash] */

undefined8 * FUN_10b0307e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b030964:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b030970;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b030970;
                }
                goto LAB_10b030964;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b030970:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b030884; end: 10b03098b; -[SCSnapProReportInfo isEqual:] */

long FUN_10b030884(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b030964:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b030970;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b030970;
                }
                goto LAB_10b030964;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b030970:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b03098c; end: 10b030993; -[SCSnapProReportInfo profileId] */

undefined8 FUN_10b03098c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b030994; end: 10b03099b; -[SCSnapProReportInfo highlightId] */

undefined8 FUN_10b030994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b03099c; end: 10b0309a3; -[SCSnapProReportInfo highlightVersion] */

undefined8 FUN_10b03099c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0309a4; end: 10b0309ab; -[SCSnapProReportInfo reasonId] */

undefined8 FUN_10b0309a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0309ac; end: 10b0309b3; -[SCSnapProReportInfo context] */

undefined8 FUN_10b0309ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0309b4; end: 10b0309bb; -[SCSnapProReportInfo reporterUsername] */

undefined8 FUN_10b0309b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0309bc; end: 10b030a1b; -[SCSnapProReportInfo .cxx_destruct] */

void FUN_10b0309bc(long param_1)

{
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



/* Entry: 10b030a1c; end: 10b030acf; -[SCSnapProSubscriptionEvent initWithProfileId:hostAccountId:isSubscribed:] */

undefined1 *
FUN_10b030a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704b40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b030ad0; end: 10b030af3; -[SCSnapProSubscriptionEvent copyWithZone:] */

undefined8 FUN_10b030ad0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b030af4; end: 10b030b6b; -[SCSnapProSubscriptionEvent hash] */

undefined8 * FUN_10b030af4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b030bfc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b030c08;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b030c08;
        }
        goto LAB_10b030bfc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b030c08:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b030b6c; end: 10b030c23; -[SCSnapProSubscriptionEvent isEqual:] */

long FUN_10b030b6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b030bfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b030c08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b030c08;
        }
        goto LAB_10b030bfc;
      }
    }
    lVar3 = 0;
  }
LAB_10b030c08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b030c24; end: 10b030c2b; -[SCSnapProSubscriptionEvent profileId] */

undefined8 FUN_10b030c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b030c2c; end: 10b030c33; -[SCSnapProSubscriptionEvent hostAccountId] */

undefined8 FUN_10b030c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b030c34; end: 10b030c3b; -[SCSnapProSubscriptionEvent isSubscribed] */

undefined1 FUN_10b030c34(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b030c3c; end: 10b030c6b; -[SCSnapProSubscriptionEvent .cxx_destruct] */

void FUN_10b030c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b030c6c; end: 10b030d77; -[SCSnapProHighlightInfo initWithStoryDoc:thumbnailURLDict:firstThumbnailURL:version:] */

undefined1 *
FUN_10b030c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704b48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b030d78; end: 10b030d9b; -[SCSnapProHighlightInfo copyWithZone:] */

undefined8 FUN_10b030d78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b030d9c; end: 10b030e27; -[SCSnapProHighlightInfo hash] */

undefined8 * FUN_10b030d9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b030ed8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b030ee4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b030ee4;
            }
            goto LAB_10b030ed8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b030ee4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b030e28; end: 10b030eff; -[SCSnapProHighlightInfo isEqual:] */

long FUN_10b030e28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b030ed8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b030ee4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b030ee4;
            }
            goto LAB_10b030ed8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b030ee4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b030f00; end: 10b030f07; -[SCSnapProHighlightInfo storyDoc] */

undefined8 FUN_10b030f00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b030f08; end: 10b030f0f; -[SCSnapProHighlightInfo thumbnailURLDict] */

undefined8 FUN_10b030f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b030f10; end: 10b030f17; -[SCSnapProHighlightInfo firstThumbnailURL] */

undefined8 FUN_10b030f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b030f18; end: 10b030f1f; -[SCSnapProHighlightInfo version] */

undefined8 FUN_10b030f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b030f20; end: 10b030f67; -[SCSnapProHighlightInfo .cxx_destruct] */

void FUN_10b030f20(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b030f68; end: 10b031013; -[SCSnapProProfileAllowedActions initWithBusinessId:allowedActionsArray:] */

undefined1 *
FUN_10b030f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704b50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b031014; end: 10b031037; -[SCSnapProProfileAllowedActions copyWithZone:] */

undefined8 FUN_10b031014(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b031038; end: 10b0310ab; -[SCSnapProProfileAllowedActions hash] */

undefined8 * FUN_10b031038(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b03112c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b031138;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b031138;
        }
        goto LAB_10b03112c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b031138:
  _objc_release(param_3);
  return puVar6;
}


