/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e6c734; end: 105e6c7e3; -[SCBillboardFSTUXConfig hash] */

undefined8 * FUN_105e6c734(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105e6c8dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105e6c8e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_105e6c8e8;
                  }
                  goto LAB_105e6c8dc;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105e6c8e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105e6c7e4; end: 105e6c903; -[SCBillboardFSTUXConfig isEqual:] */

long FUN_105e6c7e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e6c8dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e6c8e8;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_105e6c8e8;
                  }
                  goto LAB_105e6c8dc;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105e6c8e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e6c904; end: 105e6c90b; -[SCBillboardFSTUXConfig imageConfig] */

undefined8 FUN_105e6c904(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e6c90c; end: 105e6c913; -[SCBillboardFSTUXConfig title] */

undefined8 FUN_105e6c90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e6c914; end: 105e6c91b; -[SCBillboardFSTUXConfig subComponents] */

undefined8 FUN_105e6c914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e6c91c; end: 105e6c923; -[SCBillboardFSTUXConfig clickButtonText] */

undefined8 FUN_105e6c91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e6c924; end: 105e6c92b; -[SCBillboardFSTUXConfig dismissButtonText] */

undefined8 FUN_105e6c924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e6c92c; end: 105e6c933; -[SCBillboardFSTUXConfig dismissTypes] */

undefined8 FUN_105e6c92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e6c934; end: 105e6c93b; -[SCBillboardFSTUXConfig overrideContentHeightRatio] */

undefined8 FUN_105e6c934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e6c93c; end: 105e6c9a7; -[SCBillboardFSTUXConfig .cxx_destruct] */

void FUN_105e6c93c(long param_1)

{
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



/* Entry: 105e6c9a8; end: 105e6cb87; -[SCBillboardPACCampaignInfo initWithTitle:subtitle:iconUrl:shouldShowNewBadge:onTapAction:campaignId:supProperties:supStorageIds:cofName:isMiniCard:] */

undefined8 *
FUN_105e6c9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed790;
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
    *(undefined1 *)((long)puVar1 + 9) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e6cb88; end: 105e6cbab; -[SCBillboardPACCampaignInfo copyWithZone:] */

undefined8 FUN_105e6cb88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e6cbac; end: 105e6cc6f; -[SCBillboardPACCampaignInfo hash] */

undefined8 * FUN_105e6cbac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_78;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105e6cda0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105e6cdac;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
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
                    puVar6 = (undefined8 *)puVar3[9];
                    if (puVar6 != (undefined8 *)param_3[9]) {
                      func_0x00010c071ae0();
                      goto LAB_105e6cdac;
                    }
                    goto LAB_105e6cda0;
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
LAB_105e6cdac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105e6cc70; end: 105e6cdc7; -[SCBillboardPACCampaignInfo isEqual:] */

long FUN_105e6cc70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e6cda0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e6cdac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
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
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_105e6cdac;
                    }
                    goto LAB_105e6cda0;
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
LAB_105e6cdac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e6cdc8; end: 105e6cdcf; -[SCBillboardPACCampaignInfo title] */

undefined8 FUN_105e6cdc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e6cdd0; end: 105e6cdd7; -[SCBillboardPACCampaignInfo subtitle] */

undefined8 FUN_105e6cdd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e6cdd8; end: 105e6cddf; -[SCBillboardPACCampaignInfo iconUrl] */

undefined8 FUN_105e6cdd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e6cde0; end: 105e6cde7; -[SCBillboardPACCampaignInfo shouldShowNewBadge] */

undefined1 FUN_105e6cde0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105e6cde8; end: 105e6cdef; -[SCBillboardPACCampaignInfo onTapAction] */

undefined8 FUN_105e6cde8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e6cdf0; end: 105e6cdf7; -[SCBillboardPACCampaignInfo campaignId] */

undefined8 FUN_105e6cdf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e6cdf8; end: 105e6cdff; -[SCBillboardPACCampaignInfo supProperties] */

undefined8 FUN_105e6cdf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e6ce00; end: 105e6ce07; -[SCBillboardPACCampaignInfo supStorageIds] */

undefined8 FUN_105e6ce00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e6ce08; end: 105e6ce0f; -[SCBillboardPACCampaignInfo cofName] */

undefined8 FUN_105e6ce08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105e6ce10; end: 105e6ce17; -[SCBillboardPACCampaignInfo isMiniCard] */

undefined1 FUN_105e6ce10(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105e6ce18; end: 105e6ce8f; -[SCBillboardPACCampaignInfo .cxx_destruct] */

void FUN_105e6ce18(long param_1)

{
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



/* Entry: 105e6ce90; end: 105e6d0ef; -[SCBillboardCampaignSupProperties initWithImpressionCountIds:firstImpressionMillisIds:firstImpressionSecsIds:lastImpressionMillisIds:lastImpressionSecsIds:clickCountIds:lastClickMillisIds:lastClickSecsIds:dismissCountIds:lastDismissMillisIds:lastDismissSecsIds:] */

undefined8 *
FUN_105e6ce90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ed798;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 105e6d0f0; end: 105e6d113; -[SCBillboardCampaignSupProperties copyWithZone:] */

undefined8 FUN_105e6d0f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e6d114; end: 105e6d1f3; -[SCBillboardCampaignSupProperties hash] */

undefined8 * FUN_105e6d114(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105e6d34c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105e6d358;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x48);
                      if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x50);
                        if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                          if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                            func_0x00010c071ae0();
                            goto LAB_105e6d358;
                          }
                          goto LAB_105e6d34c;
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
LAB_105e6d358:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105e6d1f4; end: 105e6d373; -[SCBillboardCampaignSupProperties isEqual:] */

long FUN_105e6d1f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e6d34c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e6d358;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
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
                            goto LAB_105e6d358;
                          }
                          goto LAB_105e6d34c;
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
LAB_105e6d358:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e6d374; end: 105e6d37b; -[SCBillboardCampaignSupProperties impressionCountIds] */

undefined8 FUN_105e6d374(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e6d37c; end: 105e6d383; -[SCBillboardCampaignSupProperties firstImpressionMillisIds] */

undefined8 FUN_105e6d37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e6d384; end: 105e6d38b; -[SCBillboardCampaignSupProperties firstImpressionSecsIds] */

undefined8 FUN_105e6d384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e6d38c; end: 105e6d393; -[SCBillboardCampaignSupProperties lastImpressionMillisIds] */

undefined8 FUN_105e6d38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e6d394; end: 105e6d39b; -[SCBillboardCampaignSupProperties lastImpressionSecsIds] */

undefined8 FUN_105e6d394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e6d39c; end: 105e6d3a3; -[SCBillboardCampaignSupProperties clickCountIds] */

undefined8 FUN_105e6d39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e6d3a4; end: 105e6d3ab; -[SCBillboardCampaignSupProperties lastClickMillisIds] */

undefined8 FUN_105e6d3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e6d3ac; end: 105e6d3b3; -[SCBillboardCampaignSupProperties lastClickSecsIds] */

undefined8 FUN_105e6d3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e6d3b4; end: 105e6d3bb; -[SCBillboardCampaignSupProperties dismissCountIds] */

undefined8 FUN_105e6d3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105e6d3bc; end: 105e6d3c3; -[SCBillboardCampaignSupProperties lastDismissMillisIds] */

undefined8 FUN_105e6d3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105e6d3c4; end: 105e6d3cb; -[SCBillboardCampaignSupProperties lastDismissSecsIds] */

undefined8 FUN_105e6d3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105e6d3cc; end: 105e6d467; -[SCBillboardCampaignSupProperties .cxx_destruct] */

void FUN_105e6d3cc(long param_1)

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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e6d468; end: 105e6d92b; -[SCAdApplePromptEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6d468(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_90 = (long)_DAT_1127384a4;
  lVar2 = param_1 + lStack_90;
  _objc_loadWeakRetained();
  lVar13 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f480();
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  if ((int)lVar4 != 0) {
    lVar13 = (long)_DAT_1127384a8;
    lVar2 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105e6d92c;
    puStack_70 = &UNK_110841f20;
    ppuVar5 = &puStack_88;
    lStack_68 = lVar3;
    _objc_retainBlock(ppuVar5);
    lStack_90 = param_1 + lStack_90;
    _objc_loadWeakRetained();
    lVar2 = lStack_90;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf1f480();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lStack_90);
    ppuVar1 = &PTR_PTR_1126c5348;
    if ((int)lVar6 == 0) {
      ppuVar1 = &PTR_PTR_1126c5350;
    }
    puVar12 = *ppuVar1;
    lVar13 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar13);
    lVar4 = lVar13;
    func_0x00010bef4240();
    lVar2 = param_1 + _DAT_1127384ac;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_1127384b0;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010bef6020();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136ce0(puVar12,param_2,2,lVar4,lVar7,lVar9,ppuVar5);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar13);
    _objc_release(ppuVar5);
    _objc_release(lVar3);
    return;
  }
  lVar2 = param_1 + lStack_90;
  _objc_loadWeakRetained();
  lVar13 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f480();
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  if ((int)lVar4 == 0) {
    puVar12 = PTR_PTR_1126c5360;
    _objc_alloc(PTR_PTR_1126c5360);
    lVar2 = param_1 + _DAT_1127384ac;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lStack_90 = param_1 + lStack_90;
    _objc_loadWeakRetained();
    lVar7 = lStack_90;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_1127384b0;
    _objc_loadWeakRetained(lVar13);
    lVar8 = lVar13;
    func_0x00010bef6020();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_1127384a8;
    lVar3 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar4);
    lVar10 = lVar4;
    func_0x00010bef4240();
    func_0x00010bff1080(puVar12,param_2,lVar6,lVar7,lVar8,lVar9,lVar10);
    _objc_release(lVar4);
    _objc_release(lVar9);
  }
  else {
    puVar12 = PTR_PTR_1126c5358;
    _objc_alloc(PTR_PTR_1126c5358);
    lVar2 = param_1 + _DAT_1127384ac;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lStack_90 = param_1 + _DAT_1127384b0;
    _objc_loadWeakRetained();
    lVar7 = lStack_90;
    func_0x00010bef6020();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_1127384a8;
    lVar13 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar13);
    lVar8 = lVar13;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bef4240();
    func_0x00010bff11a0(puVar12,param_2,lVar6,lVar7,lVar8,lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lStack_90);
  _objc_release(lVar6);
  _objc_release(lVar2);
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105e6d92c; end: 105e6d987;  */

void FUN_105e6d92c(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e6d988;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105e6d988; end: 105e6d9b7;  */

void FUN_105e6d988(long param_1,undefined8 param_2)

{
  func_0x00010bef1d00(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bef1c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_adApplePromptDidDimiss__11259a0c0,0);
  return;
}



/* Entry: 105e6d9b8; end: 105e6da13; -[SCAdApplePromptEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6d9b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127384a8);
  _objc_destroyWeak(param_1 + _DAT_1127384a4);
  _objc_destroyWeak(param_1 + _DAT_1127384b0);
  _objc_destroyWeak(param_1 + _DAT_1127384ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127384b4);
  return;
}



/* Entry: 105e6da14; end: 105e6db3f; -[SCAdApplePromptAdSlotViewController initWithAdConfigProvider:adConfigProviderV2:adTrackingAuthorizationMetricsManager:scopeDelegate:adProductType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e6da14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ed7a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127384b8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127384bc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127384c0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127384c4),param_6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127384c8) = param_7;
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e6db40; end: 105e6dc2f; -[SCAdApplePromptAdSlotViewController viewDidLoad] */

void FUN_105e6db40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed7a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x00010c00ee20();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c5368;
  func_0x00010bf0c520(PTR_PTR_1126c5368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar2);
  _objc_release(puVar3);
  func_0x00010c222380(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e6dc30; end: 105e6de87; -[SCAdApplePromptAdSlotViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6dc30(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_80;
  puStack_48 = PTR_PTR_1126ed7a0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127384bc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c5350;
  puVar2 = PTR_PTR_1126c5348;
  lVar6 = (long)_DAT_1127384b8;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  if ((int)uVar5 == 0) {
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db820();
    _objc_release(uVar1);
    if ((int)puVar3 == 0) {
      return;
    }
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db820();
    _objc_release(uVar1);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
  }
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105e6de88;
  puStack_68 = &UNK_110849200;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  puVar3 = PTR_PTR_1126c5350;
  puVar2 = PTR_PTR_1126c5348;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  if ((int)uVar5 == 0) {
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127384c0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136ce0(puVar3);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127384c0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136ce0(puVar2);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105e6de88; end: 105e6deb3;  */

void FUN_105e6de88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6deb4; end: 105e6df0b; -[SCAdApplePromptAdSlotViewController _dismiss] */

void FUN_105e6deb4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e6df0c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105e6df0c; end: 105e6dfbf;  */

void FUN_105e6df0c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010beeafa0(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105e6dfc0; end: 105e6dfeb;  */

void FUN_105e6dfc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6dfec; end: 105e6e023; -[SCAdApplePromptAdSlotViewController _willDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6dfec(long param_1)

{
  param_1 = param_1 + _DAT_1127384c4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef1d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6e024; end: 105e6e05b; -[SCAdApplePromptAdSlotViewController _didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6e024(long param_1)

{
  param_1 = param_1 + _DAT_1127384c4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef1c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6e05c; end: 105e6e0b7; -[SCAdApplePromptAdSlotViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6e05c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127384c4);
  _objc_storeStrong(param_1 + _DAT_1127384c0,0);
  _objc_storeStrong(param_1 + _DAT_1127384bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127384b8,0);
  return;
}



/* Entry: 105e6e0b8; end: 105e6e277; -[SCAdInfoPreferencesInteractor initWithAdTargetingRulesService:adConfigProvider:adConfigProviderV2:grapheneRegistry:performer:settingsScopeLauncher:settingsScopeServices:brandName:serveItemId:adProductType:] */

undefined1 *
FUN_105e6e0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed7a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_12;
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106433d48();
    *(char *)((long)puVar1 + 0x48) = (char)uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e6e278; end: 105e6e2e3; -[SCAdInfoPreferencesInteractor didLoad] */

void FUN_105e6e278(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be4c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__loadAdWhyISeeThisAdWithAdProduc_112570bd0,
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126c5370;
  func_0x00010c252a20(PTR_PTR_1126c5370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47d60(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6e2e4; end: 105e6e407; -[SCAdInfoPreferencesInteractor _loadAdWhyISeeThisAdWithAdProductType:serveItemId:brandName:] */

void FUN_105e6e2e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b6f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010c297260(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105e6e408; end: 105e6e473;  */

void FUN_105e6e408(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe900();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6e474; end: 105e6e62f; -[SCAdInfoPreferencesInteractor _didLoadWhyISeeThisAd:error:brandName:] */

void FUN_105e6e474(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = param_3;
  func_0x00010bef5900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar5 = PTR_PTR_1126b8d98;
    func_0x00010bf8ad00(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126c5370;
    func_0x00010c252a20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126b8d98;
    func_0x00010bf8ace0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar5 = param_1;
    func_0x00010bea9220(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105e6e630;
  puStack_68 = &UNK_110841f80;
  puStack_60 = puVar1;
  puStack_58 = puVar5;
  _objc_retain();
  func_0x00010c0f7fc0(uVar6,param_2,&puStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e6e630; end: 105e6e63b;  */

void FUN_105e6e630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_configureWithViewModel__1125af900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e6e63c; end: 105e6e863; -[SCAdInfoPreferencesInteractor _setUpDynamicAboutAdsViewModelWithWhyISeeThisAd:brandName:] */

void FUN_105e6e63c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c5378;
  _objc_alloc(PTR_PTR_1126c5378);
  lVar2 = param_3;
  func_0x00010bef5900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9680(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010befe080();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010befe080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010befe080(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166160(puVar1);
      _objc_release(lVar2);
    }
  }
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126c5380;
  _objc_alloc(PTR_PTR_1126c5380);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e6e864;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c031860(puVar5);
  puVar6 = PTR_PTR_1126c5370;
  func_0x00010bf8bc60(PTR_PTR_1126c5370);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e6e864; end: 105e6e8bb;  */

void FUN_105e6e864(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6e8bc; end: 105e6e943; -[SCAdInfoPreferencesInteractor _onTapLearnMore] */

void FUN_105e6e8bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bf8aca0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentLearnMorePage_11257c9e8);
  return;
}



/* Entry: 105e6e944; end: 105e6ea13; -[SCAdInfoPreferencesInteractor _presentLearnMorePage] */

void FUN_105e6e944(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e2d298);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd5b0;
  _objc_alloc(PTR_PTR_1126bd5b0);
  func_0x00010c057840();
  puVar3 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0d66e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  func_0x00010bf0c980(puVar3,param_2,puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e6ea14; end: 105e6ea9b; -[SCAdInfoPreferencesInteractor _onTapSnapchatSettings] */

void FUN_105e6ea14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bf8ac80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentSettingsPage_11257d368);
  return;
}



/* Entry: 105e6ea9c; end: 105e6eb47; -[SCAdInfoPreferencesInteractor _presentSettingsPage] */

void FUN_105e6ea9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d66e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf22f40(uVar4,param_2,param_1,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar4,param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e6eb48; end: 105e6eb97; -[SCAdInfoPreferencesInteractor settingsScopeWantsDismiss] */

void FUN_105e6eb48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e6eb98; end: 105e6ebcf; -[SCAdInfoPreferencesInteractor settingsScopeDidDismiss] */

void FUN_105e6eb98(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 105e6ebd0; end: 105e6ebe7; -[SCAdInfoPreferencesInteractor userInterface] */

void FUN_105e6ebd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e6ebe8; end: 105e6ebf3; -[SCAdInfoPreferencesInteractor setUserInterface:] */

void FUN_105e6ebe8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105e6ebf4; end: 105e6ec67; -[SCAdInfoPreferencesInteractor .cxx_destruct] */

void FUN_105e6ebf4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105e6ec68; end: 105e6ec6f; -[SCAdInfoPreferencesViewController pageViewName] */

undefined8 FUN_105e6ec68(void)

{
  return 0xe;
}



/* Entry: 105e6ec70; end: 105e6ed5b; -[SCAdInfoPreferencesViewController initWithDelegate:runtime:interactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e6ec70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ed7b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127384f4),param_3);
    lVar3 = (long)_DAT_1127384f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127384fc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e6ed5c; end: 105e6edab; -[SCAdInfoPreferencesViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6ed5c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed7b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bf77880(*(undefined8 *)(param_1 + _DAT_1127384fc));
  return;
}



/* Entry: 105e6edac; end: 105e6ee17; -[SCAdInfoPreferencesViewController viewWillAppear:] */

void FUN_105e6edac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed7b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(param_1);
  return;
}



/* Entry: 105e6ee18; end: 105e6ee5f; -[SCAdInfoPreferencesViewController traitCollectionDidChange:] */

void FUN_105e6ee18(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed7b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 105e6ee60; end: 105e6eea3; -[SCAdInfoPreferencesViewController preferredStatusBarStyle] */

undefined8 FUN_105e6ee60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  uVar1 = 3;
  if (lVar2 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 105e6eea4; end: 105e6eeab; -[SCAdInfoPreferencesViewController prefersStatusBarHidden] */

undefined8 FUN_105e6eea4(void)

{
  return 0;
}



/* Entry: 105e6eeac; end: 105e6ef4b; -[SCAdInfoPreferencesViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_105e6eeac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed7b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 105e6ef4c; end: 105e6efab; -[SCAdInfoPreferencesViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6ef4c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_1127384f4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bef2d80();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126ed7b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105e6efac; end: 105e6efb7; -[SCAdInfoPreferencesViewController supportedInterfaceOrientations] */

undefined8 FUN_105e6efac(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105e6efb8; end: 105e6efbb; -[SCAdInfoPreferencesViewController getTitle] */

void FUN_105e6efb8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f39458;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f39458,
                      &PTR____CFConstantStringClassReference_110f391d8,0);
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



/* Entry: 105e6efbc; end: 105e6efef; -[SCAdInfoPreferencesViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6efbc(long param_1)

{
  param_1 = param_1 + _DAT_1127384f4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef2da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6eff0; end: 105e6eff7; -[SCAdInfoPreferencesViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105e6eff0(void)

{
  return 1;
}



/* Entry: 105e6eff8; end: 105e6f007; -[SCAdInfoPreferencesViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105e6eff8(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105e6f008; end: 105e6f00b; -[SCAdInfoPreferencesViewController tableView:cellForRowAtIndexPath:] */

void FUN_105e6f008(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befdff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adsInfoCell_11259d1a0);
  return;
}



/* Entry: 105e6f00c; end: 105e6f01b; -[SCAdInfoPreferencesViewController tableView:didSelectRowAtIndexPath:] */

void FUN_105e6f00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_deselectRowAtIndexPath_animated__1125b93c8,param_4,1);
  return;
}



/* Entry: 105e6f01c; end: 105e6f173; -[SCAdInfoPreferencesViewController adsInfoCell] */

void FUN_105e6f01c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c35e0;
    _objc_alloc(PTR_PTR_1126c35e0);
    func_0x00010c04ec80();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
  puVar1 = param_1;
  func_0x00010c0d8440(param_1);
  puVar3 = puVar2;
  func_0x00010bf4dce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bdecea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4dce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar4);
  func_0x00010c08c800(param_1,param_2,puVar2,puVar1,puVar3);
  func_0x00010c161260(puVar2,param_2,0);
  func_0x00010c1fbac0(puVar2,param_2,0);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e6f174; end: 105e6f283; -[SCAdInfoPreferencesViewController newAdsInfoHeaderTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e6f174(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112738500;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010af4701c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
  return lVar3;
}



/* Entry: 105e6f284; end: 105e6f39b; -[SCAdInfoPreferencesViewController buildInfoText] */

void FUN_105e6f284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010af47034();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010af4704c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010af47064();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010af4707c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010af47094();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeb30();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e2d2d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e6f39c; end: 105e6f5a3; -[SCAdInfoPreferencesViewController _createDescriptionTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_105e6f39c(long param_1,undefined8 param_2,long param_3,undefined *param_4,undefined **param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  double dVar33;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_112738504;
  puVar31 = *(undefined **)(param_1 + lVar32);
  if (puVar31 == (undefined *)0x0) {
    puVar31 = PTR_PTR_1126b0ac8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar30 = *(undefined8 *)(param_1 + lVar32);
    *(undefined **)(param_1 + lVar32) = puVar31;
    _objc_release(uVar30);
    dVar33 = 11.0;
    puVar31 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar32),param_2,puVar31);
    _objc_release(puVar31);
    lVar2 = param_1;
    func_0x00010bf22360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar30 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010af470ac();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    param_5 = &PTR__OBJC_CLASS___NSConstantArray_11117f648;
    param_4 = puVar31;
    func_0x00010c212fe0(uVar30,param_2,lVar3);
    _objc_release(puVar31);
    _objc_release();
    iVar1 = (int)lVar2;
    func_0x00010bcbeb30();
    uVar30 = 2;
    if (iVar1 == 0) {
      uVar30 = 0;
    }
    uVar4 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c213040(uVar4,param_2,uVar30);
    iVar1 = (int)uVar4;
    func_0x00010bcbeb30();
    uVar30 = 3;
    if (iVar1 != 0) {
      uVar30 = 4;
    }
    func_0x00010c1fbe00(*(undefined8 *)(param_1 + lVar32),param_2,uVar30);
    func_0x00010c193a00(*(undefined8 *)(param_1 + lVar32),param_2,0);
    uVar30 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c26ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099240();
    _objc_release(uVar30);
    func_0x00010c2131e0(0,-dVar33,0,-dVar33,*(undefined8 *)(param_1 + lVar32));
    param_3 = param_1;
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar32));
    _objc_release(lVar3);
    puVar31 = *(undefined **)(param_1 + lVar32);
  }
  _objc_retain(puVar31);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
    return puVar31;
  }
  ___stack_chk_fail();
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c219b60(param_4,param_2,0);
  func_0x00010c219b60(param_5,param_2,0);
  func_0x00010c1f7b20(param_5,param_2,0);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493c0(0x4030000000000000,puVar5,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  puStack_108 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493c0(0x402c000000000000,puVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_4;
  puStack_100 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_5;
  puStack_f8 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar14;
  func_0x00010bf493c0(0x4030000000000000,ppuVar14,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = param_5;
  ppuStack_f0 = ppuVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  ppuVar20 = ppuVar18;
  func_0x00010bf493c0(0x4024000000000000,ppuVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_5;
  ppuStack_e8 = ppuVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar21;
  func_0x00010bf493a0(ppuVar21,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = param_5;
  ppuStack_e0 = ppuVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar26 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar27 = lVar26;
  func_0x00010bf1ff80(lVar26);
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar25;
  func_0x00010bf493c0(0xc024000000000000,ppuVar25,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_d8 = ppuVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(ppuVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(puVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(ppuVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar32);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return puVar5;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 105e6f5a4; end: 105e6f9f3; -[SCAdInfoPreferencesViewController layoutAccessoryTableViewCell:textLabel:descriptionTextView:] */

undefined8
FUN_105e6f5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined *puVar29;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c219b60(param_4,param_2,0);
  func_0x00010c219b60(param_5,param_2,0);
  func_0x00010c1f7b20(param_5,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493c0(0x4030000000000000,uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  uStack_a8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493c0(0x402c000000000000,uVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  uStack_a0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  uStack_98 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493c0(0x4030000000000000,uVar14,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_5;
  uStack_90 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar20 = uVar18;
  func_0x00010bf493c0(0x4024000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_5;
  uStack_88 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_5;
  uStack_80 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar26 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar27 = uVar26;
  func_0x00010bf1ff80(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493c0(0xc024000000000000,uVar25,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar29);
  _objc_release(puVar29);
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
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar2;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 105e6f9f4; end: 105e6f9fb; -[SCAdInfoPreferencesViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105e6f9f4(void)

{
  return 0;
}



/* Entry: 105e6f9fc; end: 105e6fa83; -[SCAdInfoPreferencesViewController textView:shouldInteractWithURL:inRange:interaction:] */

undefined8
FUN_105e6f9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd5b0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 105e6fa84; end: 105e6fb8b; -[SCAdInfoPreferencesViewController configureWithViewModel:] */

void FUN_105e6fa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e6fb8c;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c03e0(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105e6fb8c; end: 105e6fbb7;  */

void FUN_105e6fb8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6fbb8; end: 105e6fc1f;  */

void FUN_105e6fbb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e120();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e6fc20; end: 105e700f7; -[SCAdInfoPreferencesViewController _renderStaticAboutAdsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6fc20(long param_1)

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
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar31;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 4;
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar19;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar30);
  _objc_release(lVar31);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c5388;
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar28);
  _objc_retain(puVar27);
  _objc_alloc();
  func_0x00010c061d40();
  _objc_release(uVar28);
  _objc_release(puVar27);
  lVar31 = (long)_DAT_112738508;
  uVar28 = *(undefined8 *)(lVar2 + lVar31);
  *(undefined **)(lVar2 + lVar31) = puVar1;
  _objc_release(uVar28);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar31));
  lVar3 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar20 = *(undefined8 *)(lVar2 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar20;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar2 + lVar31);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar2 + lVar31);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar19);
  _objc_release(uVar26);
  _objc_release(lVar31);
  _objc_release(lVar2);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar21);
  _objc_release(uVar28);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d66b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105e700f8; end: 105e7041b; -[SCAdInfoPreferencesViewController _renderDynamicAboutAdsViewWithViewModel:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e700f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126c5388;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c061d40();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar18 = (long)_DAT_112738508;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d66b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


