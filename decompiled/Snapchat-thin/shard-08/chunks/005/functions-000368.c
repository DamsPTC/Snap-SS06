/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106262aa4; end: 106262aab; -[SCSpotlightReplyCellViewModel enableDeeplinkToReplyPosterProfile] */

undefined1 FUN_106262aa4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106262aac; end: 106262ab3; -[SCSpotlightReplyCellViewModel enableShareReply] */

undefined1 FUN_106262aac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106262ab4; end: 106262abb; -[SCSpotlightReplyCellViewModel enableThreading] */

undefined1 FUN_106262ab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106262abc; end: 106262ac3; -[SCSpotlightReplyCellViewModel isHighlighted] */

undefined1 FUN_106262abc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 106262ac4; end: 106262acb; -[SCSpotlightReplyCellViewModel showPendingApprovalUI] */

undefined1 FUN_106262ac4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 106262acc; end: 106262ad3; -[SCSpotlightReplyCellViewModel threadedRepliesFetchStatus] */

undefined8 FUN_106262acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106262ad4; end: 106262adb; -[SCSpotlightReplyCellViewModel enableStickersInComments] */

undefined1 FUN_106262ad4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106262adc; end: 106262bb3; -[SCSpotlightReplyCellViewModel .cxx_destruct] */

void FUN_106262adc(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106262bb4; end: 106262cc7; -[SCSpotlightSnapReplyCellViewModel initWithIsAddPostCell:compositeStoryId:thumbnailInfo:tapActionModel:longPressActionModel:] */

undefined1 *
FUN_106262bb4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f09a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106262cc8; end: 106262ceb; -[SCSpotlightSnapReplyCellViewModel copyWithZone:] */

undefined8 FUN_106262cc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106262cec; end: 106262d7f; -[SCSpotlightSnapReplyCellViewModel hash] */

ulong * FUN_106262cec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_106262e40:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106262e4c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106262e4c;
            }
            goto LAB_106262e40;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106262e4c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 106262d80; end: 106262e67; -[SCSpotlightSnapReplyCellViewModel isEqual:] */

long FUN_106262d80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106262e40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106262e4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106262e4c;
            }
            goto LAB_106262e40;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106262e4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106262e68; end: 106262e6f; -[SCSpotlightSnapReplyCellViewModel isAddPostCell] */

undefined1 FUN_106262e68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106262e70; end: 106262e77; -[SCSpotlightSnapReplyCellViewModel compositeStoryId] */

undefined8 FUN_106262e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106262e78; end: 106262e7f; -[SCSpotlightSnapReplyCellViewModel thumbnailInfo] */

undefined8 FUN_106262e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106262e80; end: 106262e87; -[SCSpotlightSnapReplyCellViewModel tapActionModel] */

undefined8 FUN_106262e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106262e88; end: 106262e8f; -[SCSpotlightSnapReplyCellViewModel longPressActionModel] */

undefined8 FUN_106262e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106262e90; end: 106262ed7; -[SCSpotlightSnapReplyCellViewModel .cxx_destruct] */

void FUN_106262e90(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106262ed8; end: 106262faf; -[SCSpotlightSnapRepliesCarouselCellViewModel initWithSnapReplies:fetchMoreSnapRepliesActionModel:scrollInCarouselActionModel:] */

undefined1 *
FUN_106262ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f09a8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106262fb0; end: 106262fd3; -[SCSpotlightSnapRepliesCarouselCellViewModel copyWithZone:] */

undefined8 FUN_106262fb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106262fd4; end: 106263053; -[SCSpotlightSnapRepliesCarouselCellViewModel hash] */

undefined8 * FUN_106262fd4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1062630ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1062630f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1062630f8;
          }
          goto LAB_1062630ec;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1062630f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106263054; end: 106263113; -[SCSpotlightSnapRepliesCarouselCellViewModel isEqual:] */

long FUN_106263054(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062630ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062630f8;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1062630f8;
          }
          goto LAB_1062630ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1062630f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106263114; end: 10626311b; -[SCSpotlightSnapRepliesCarouselCellViewModel snapReplies] */

undefined8 FUN_106263114(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10626311c; end: 106263123; -[SCSpotlightSnapRepliesCarouselCellViewModel fetchMoreSnapRepliesActionModel] */

undefined8 FUN_10626311c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106263124; end: 10626312b; -[SCSpotlightSnapRepliesCarouselCellViewModel scrollInCarouselActionModel] */

undefined8 FUN_106263124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10626312c; end: 106263167; -[SCSpotlightSnapRepliesCarouselCellViewModel .cxx_destruct] */

void FUN_10626312c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106263168; end: 1062631ef; -[SCSpotlightReplyCellSectionContentViewModel initWithCellViewModel:precomputedHeightForCell:] */

undefined1 *
FUN_106263168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f09b0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1062631f0; end: 106263213; -[SCSpotlightReplyCellSectionContentViewModel copyWithZone:] */

undefined8 FUN_1062631f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106263214; end: 10626329f; -[SCSpotlightReplyCellSectionContentViewModel hash] */

undefined8 * FUN_106263214(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10626333c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106263348;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_106263348;
        }
        goto LAB_10626333c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106263348:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1062632a0; end: 106263363; -[SCSpotlightReplyCellSectionContentViewModel isEqual:] */

long FUN_1062632a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10626333c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106263348;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_106263348;
        }
        goto LAB_10626333c;
      }
    }
    lVar4 = 0;
  }
LAB_106263348:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106263364; end: 10626336b; -[SCSpotlightReplyCellSectionContentViewModel cellViewModel] */

undefined8 FUN_106263364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10626336c; end: 106263373; -[SCSpotlightReplyCellSectionContentViewModel precomputedHeightForCell] */

undefined8 FUN_10626336c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106263374; end: 10626337f; -[SCSpotlightReplyCellSectionContentViewModel .cxx_destruct] */

void FUN_106263374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106263380; end: 10626346b; -[SCRepliesInputTextEvent initWithOldText:updatedText:addedText:changedRange:] */

undefined1 *
FUN_106263380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f09b8;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10626346c; end: 10626348f; -[SCRepliesInputTextEvent copyWithZone:] */

undefined8 FUN_10626346c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106263490; end: 106263517; -[SCRepliesInputTextEvent hash] */

undefined8 * FUN_106263490(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1062635d4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1062635e0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      puVar6 = (undefined1 *)0x0;
      if ((*(long *)((long)puVar3 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)((long)puVar3 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_1062635e0;
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1062635e0;
          }
          goto LAB_1062635d4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1062635e0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106263518; end: 1062635fb; -[SCRepliesInputTextEvent isEqual:] */

long FUN_106263518(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062635d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062635e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = 0;
      if ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_1062635e0;
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1062635e0;
          }
          goto LAB_1062635d4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1062635e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062635fc; end: 106263603; -[SCRepliesInputTextEvent oldText] */

undefined8 FUN_1062635fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106263604; end: 10626360b; -[SCRepliesInputTextEvent updatedText] */

undefined8 FUN_106263604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10626360c; end: 106263613; -[SCRepliesInputTextEvent addedText] */

undefined8 FUN_10626360c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106263614; end: 10626361f; -[SCRepliesInputTextEvent changedRange] */

undefined1  [16] FUN_106263614(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106263620; end: 10626365b; -[SCRepliesInputTextEvent .cxx_destruct] */

void FUN_106263620(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10626365c; end: 1062636b7; -[SCSpotlightRepliesEmptyCellViewModel initWithApprovalState:emptyStateType:isConsumer:] */

void FUN_10626365c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f09c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 1062636b8; end: 1062636db; -[SCSpotlightRepliesEmptyCellViewModel copyWithZone:] */

undefined8 FUN_1062636b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062636dc; end: 10626373b; -[SCSpotlightRepliesEmptyCellViewModel hash] */

undefined8 * FUN_1062636dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 8) == param_3[8]);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10626373c; end: 1062637e3; -[SCSpotlightRepliesEmptyCellViewModel isEqual:] */

bool FUN_10626373c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1062637e4; end: 1062637eb; -[SCSpotlightRepliesEmptyCellViewModel approvalState] */

undefined8 FUN_1062637e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062637ec; end: 1062637f3; -[SCSpotlightRepliesEmptyCellViewModel emptyStateType] */

undefined8 FUN_1062637ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062637f4; end: 1062637fb; -[SCSpotlightRepliesEmptyCellViewModel isConsumer] */

undefined1 FUN_1062637f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062637fc; end: 10626389b; -[SCSpotlightRepliesReactionViewModel initWithReactionCount:hasAlreadyReacted:isDisabled:reactReplyActionModel:] */

undefined1 *
FUN_1062637fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f09c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10626389c; end: 1062638bf; -[SCSpotlightRepliesReactionViewModel copyWithZone:] */

undefined8 FUN_10626389c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062638c0; end: 106263937; -[SCSpotlightRepliesReactionViewModel hash] */

long * FUN_1062638c0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  func_0x00010bfde980();
  plVar3 = &lStack_38;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1062639dc;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) ||
       (((plVar3[2] != param_3[2] || ((char)plVar3[1] != (char)param_3[1])) ||
        (*(char *)((long)plVar3 + 9) != *(char *)((long)param_3 + 9))))) {
      plVar5 = (long *)0x0;
      goto LAB_1062639dc;
    }
    plVar5 = (long *)plVar3[3];
    if (plVar5 != (long *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_1062639dc;
    }
  }
  plVar5 = (long *)0x1;
LAB_1062639dc:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 106263938; end: 1062639f7; -[SCSpotlightRepliesReactionViewModel isEqual:] */

long FUN_106263938(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062639dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_1062639dc;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1062639dc;
    }
  }
  lVar3 = 1;
LAB_1062639dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062639f8; end: 1062639ff; -[SCSpotlightRepliesReactionViewModel reactionCount] */

undefined8 FUN_1062639f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106263a00; end: 106263a07; -[SCSpotlightRepliesReactionViewModel hasAlreadyReacted] */

undefined1 FUN_106263a00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106263a08; end: 106263a0f; -[SCSpotlightRepliesReactionViewModel isDisabled] */

undefined1 FUN_106263a08(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106263a10; end: 106263a17; -[SCSpotlightRepliesReactionViewModel reactReplyActionModel] */

undefined8 FUN_106263a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106263a18; end: 106263a23; -[SCSpotlightRepliesReactionViewModel .cxx_destruct] */

void FUN_106263a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106263a24; end: 106263b2f; -[SCSpotlightRepliesInputViewModel initWithPlaceholderText:parentCommentId:defaultTextInTextView:parentCommentRequestId:] */

undefined1 *
FUN_106263a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f09d0;
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



/* Entry: 106263b30; end: 106263b53; -[SCSpotlightRepliesInputViewModel copyWithZone:] */

undefined8 FUN_106263b30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106263b54; end: 106263bdf; -[SCSpotlightRepliesInputViewModel hash] */

undefined8 * FUN_106263b54(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106263c90:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106263c9c;
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
              goto LAB_106263c9c;
            }
            goto LAB_106263c90;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106263c9c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106263be0; end: 106263cb7; -[SCSpotlightRepliesInputViewModel isEqual:] */

long FUN_106263be0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106263c90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106263c9c;
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
              goto LAB_106263c9c;
            }
            goto LAB_106263c90;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106263c9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106263cb8; end: 106263cbf; -[SCSpotlightRepliesInputViewModel placeholderText] */

undefined8 FUN_106263cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106263cc0; end: 106263cc7; -[SCSpotlightRepliesInputViewModel parentCommentId] */

undefined8 FUN_106263cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106263cc8; end: 106263ccf; -[SCSpotlightRepliesInputViewModel defaultTextInTextView] */

undefined8 FUN_106263cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106263cd0; end: 106263cd7; -[SCSpotlightRepliesInputViewModel parentCommentRequestId] */

undefined8 FUN_106263cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106263cd8; end: 106263d1f; -[SCSpotlightRepliesInputViewModel .cxx_destruct] */

void FUN_106263cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106263d20; end: 106263da7; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel initWithLastThreadedReply:threadedRepliesFetchStatus:] */

undefined1 *
FUN_106263d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f09d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106263da8; end: 106263dcb; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel copyWithZone:] */

undefined8 FUN_106263da8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106263dcc; end: 106263e37; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel hash] */

undefined8 * FUN_106263dcc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106263ebc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_106263ebc;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_106263ebc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_106263ebc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106263e38; end: 106263ed7; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel isEqual:] */

long FUN_106263e38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106263ebc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_106263ebc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106263ebc;
    }
  }
  lVar3 = 1;
LAB_106263ebc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106263ed8; end: 106263edf; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel lastThreadedReply] */

undefined8 FUN_106263ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106263ee0; end: 106263ee7; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel threadedRepliesFetchStatus] */

undefined8 FUN_106263ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106263ee8; end: 106263ef3; -[SCSpotlightRepliesThreadedRepliesShowMoreCellViewModel .cxx_destruct] */

void FUN_106263ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106263ef4; end: 106263f67; -[SCGrapheneSpotlightRepliesMetric2 init] */

undefined1 * FUN_106263ef4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f09e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106263f68; end: 106264197;  */

/* WARNING: Removing unreachable block (ram,0x0001062643e0) */

void FUN_106263f68(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar2 = param_3;
  puVar3 = param_4;
  puVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_1109181c0;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar10 = param_5;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_160;
  pcStack_a8 = FUN_106264198;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f371ee3;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_140,puVar4);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar3 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar6 = &UNK_110918210;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110918210,&uStack_160,param_6);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar12 = 0;
    puVar8 = puVar9;
    puVar11 = param_6;
    do {
      if ((&cStack_f9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar10);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    puStack_190 = auStack_140;
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != puStack_190);
    _objc_release(puVar10);
    _objc_release(puVar2);
    puVar5 = puVar4;
    __Unwind_Resume();
    pcStack_168 = FUN_106264410;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puVar9 = puVar8;
    puStack_1a0 = puVar3;
    puStack_198 = unaff_x23;
    puStack_188 = puVar4;
    puStack_180 = puVar10;
    puStack_178 = puVar2;
    ppuStack_170 = &puStack_b0;
    _objc_retain(puVar6);
    _objc_retain(puVar8);
    if (puVar5 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar5 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_1d8,puVar2);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar3 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1c0,puVar3);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar7 = &UNK_110918260;
      puVar9 = &uStack_1f8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110918260,puVar9,puVar11);
      puStack_1e0 = &uStack_1f8;
      func_0x00010007e5dc(&puStack_1e0);
      lVar12 = 0;
      do {
        if ((&cStack_1a9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(puVar8);
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar6);
      __Unwind_Resume();
      _objc_retain(puVar7);
      _objc_retain(puVar9);
      if (puVar2 != (undefined *)0x0) {
        FUN_106264410(puVar2,puVar7,puVar9,(long)(param_1 * 1000.0));
      }
      _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106264198; end: 10626440f;  */

/* WARNING: Removing unreachable block (ram,0x0001062643e0) */

void FUN_106264198(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar7 = param_4;
  puVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      param_4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_5);
      param_4 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,param_4);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_110918210;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918210,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    puVar7 = puVar5;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_5);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (undefined8 *)puStack_f0);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_106264410;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar5 = puVar7;
  puStack_100 = param_4;
  puStack_f8 = (undefined1 *)unaff_x23;
  puStack_e8 = puVar3;
  puStack_e0 = param_5;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f371ee3;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar5 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar6 = &UNK_110918260;
    puVar5 = &uStack_158;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918260,puVar5,puVar8);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_109)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar7);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    __Unwind_Resume();
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    if (puVar3 != (undefined *)0x0) {
      FUN_106264410(puVar3,puVar6,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 106264410; end: 10626463f;  */

void FUN_106264410(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
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
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110918260;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110918260,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106264410(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106264640; end: 1062646d3;  */

void FUN_106264640(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106264410(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062646d4; end: 10626494b;  */

/* WARNING: Removing unreachable block (ram,0x00010626491c) */
/* WARNING: Removing unreachable block (ram,0x000106264b94) */

void FUN_1062646d4(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar8 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  puVar11 = param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar3 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_1109182b0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    puVar3 = puVar8;
    puVar11 = param_6;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_5);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_10626494c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar8 = puVar3;
  puVar12 = puVar11;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar11);
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f371ee3;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_160,puVar4);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar3 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar6 = &UNK_110918300;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918300,&uStack_180,puVar10);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    puVar8 = puVar9;
    puVar12 = puVar10;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x23 = &uStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar11);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    puStack_1b0 = auStack_160;
    do {
      unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
    } while (unaff_x23 != (undefined8 *)puStack_1b0);
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar5 = puVar4;
    __Unwind_Resume();
    pcStack_188 = FUN_106264bc4;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puVar10 = puVar8;
    puStack_1c0 = puVar3;
    puStack_1b8 = (undefined1 *)unaff_x23;
    puStack_1a8 = puVar4;
    puStack_1a0 = puVar11;
    puStack_198 = puVar2;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar6);
    _objc_retain(puVar8);
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_1f8,puVar2);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar3 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1e0,puVar3);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
      puVar7 = &UNK_110918350;
      puVar10 = &uStack_218;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918350,puVar10,puVar12);
      puStack_200 = &uStack_218;
      func_0x00010007e5dc(&puStack_200);
      lVar13 = 0;
      do {
        if ((&cStack_1c9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar8);
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_1e1 < '\0') {
        __ZdlPv(auStack_1f8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar6);
      __Unwind_Resume();
      _objc_retain(puVar7);
      _objc_retain(puVar10);
      if (puVar2 != (undefined *)0x0) {
        FUN_106264bc4(puVar2,puVar7,puVar10,(long)(param_1 * 1000.0));
      }
      _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10626494c; end: 106264bc3;  */

/* WARNING: Removing unreachable block (ram,0x000106264b94) */

void FUN_10626494c(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar7 = param_4;
  puVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      param_4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_5);
      param_4 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,param_4);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_110918300;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918300,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    puVar7 = puVar5;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_5);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (undefined8 *)puStack_f0);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_106264bc4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar5 = puVar7;
  puStack_100 = param_4;
  puStack_f8 = (undefined1 *)unaff_x23;
  puStack_e8 = puVar3;
  puStack_e0 = param_5;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f371ee3;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar5 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar6 = &UNK_110918350;
    puVar5 = &uStack_158;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918350,puVar5,puVar8);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_109)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar7);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    __Unwind_Resume();
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    if (puVar3 != (undefined *)0x0) {
      FUN_106264bc4(puVar3,puVar6,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 106264bc4; end: 106264df3;  */

void FUN_106264bc4(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
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
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110918350;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110918350,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106264bc4(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106264df4; end: 106264e87;  */

void FUN_106264df4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106264bc4(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106264e88; end: 1062650b7;  */

void FUN_106264e88(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar1 = param_3;
  puVar2 = param_4;
  uVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109183a0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109183a0,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_5;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1062650b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f371ee3;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_1109183f0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109183f0,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1062652e8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_110918440;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110918440,puVar9,uVar11);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106265518;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_110918490;
    puVar5 = &uStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110918490,puVar5,uVar10);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar12 = 0;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  if (puVar1 != (undefined *)0x0) {
    FUN_106265518(puVar1,puVar3,puVar5,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1062650b8; end: 1062652e7;  */

void FUN_1062650b8(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar1 = param_3;
  puVar2 = param_4;
  uVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109183f0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109183f0,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_5;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1062652e8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f371ee3;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110918440;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110918440,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106265518;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_110918490;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110918490,puVar9,uVar11);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar1 != (undefined *)0x0) {
    FUN_106265518(puVar1,puVar4,puVar9,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1062652e8; end: 106265517;  */

void FUN_1062652e8(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar1 = param_3;
  puVar2 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110918440;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918440,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar5 = auStack_78;
    uVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106265518;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f371ee3;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110918490;
    puVar7 = &uStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918490,puVar7,uVar8);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    FUN_106265518(puVar3,puVar6,puVar7,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106265518; end: 106265747;  */

void FUN_106265518(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
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
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110918490;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110918490,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106265518(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106265748; end: 1062657db;  */

void FUN_106265748(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106265518(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062657dc; end: 106265a53;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062665ec) */
/* WARNING: Removing unreachable block (ram,0x000106265ecc) */
/* WARNING: Removing unreachable block (ram,0x000106265a24) */
/* WARNING: Removing unreachable block (ram,0x000106266144) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_1062657dc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined1 *puStack_e88;
  undefined8 auStack_e80 [2];
  char cStack_e69;
  long lStack_e68;
  undefined8 *puStack_e60;
  undefined8 *puStack_e58;
  undefined8 *puStack_e50;
  long *plStack_e48;
  undefined *puStack_e40;
  undefined *puStack_e38;
  undefined8 ***pppuStack_e30;
  code *pcStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined1 *puStack_e08;
  undefined8 auStack_e00 [2];
  char cStack_de9;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 *puStack_dd8;
  undefined8 *puStack_dd0;
  long *plStack_dc8;
  undefined *puStack_dc0;
  undefined *puStack_db8;
  undefined8 ***pppuStack_db0;
  code *pcStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 *puStack_d88;
  undefined8 auStack_d80 [2];
  char cStack_d69;
  long lStack_d68;
  undefined8 *puStack_d60;
  undefined8 *puStack_d58;
  undefined8 *puStack_d50;
  undefined *puStack_d48;
  undefined8 *puStack_d40;
  undefined *puStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 *puStack_d00;
  undefined8 auStack_cf8 [2];
  char cStack_ce1;
  undefined8 auStack_ce0 [2];
  char cStack_cc9;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 *puStack_cb8;
  undefined8 *puStack_cb0;
  long *plStack_ca8;
  undefined *puStack_ca0;
  undefined *puStack_c98;
  undefined8 ***pppuStack_c90;
  code *pcStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined1 *puStack_c68;
  undefined8 auStack_c60 [2];
  char cStack_c49;
  long lStack_c48;
  undefined8 *puStack_c40;
  undefined8 *puStack_c38;
  undefined8 *puStack_c30;
  long *plStack_c28;
  undefined *puStack_c20;
  undefined *puStack_c18;
  undefined8 ***pppuStack_c10;
  code *pcStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 *puStack_be8;
  undefined8 auStack_be0 [2];
  char cStack_bc9;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  undefined *puStack_ba8;
  undefined8 *puStack_ba0;
  undefined *puStack_b98;
  undefined8 ***pppuStack_b90;
  code *pcStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined1 *puStack_b68;
  undefined8 auStack_b60 [3];
  undefined1 auStack_b48 [24];
  undefined8 auStack_b30 [2];
  char cStack_b19;
  long lStack_b18;
  undefined8 *puStack_b10;
  undefined8 *puStack_b08;
  undefined8 *puStack_b00;
  undefined8 *puStack_af8;
  undefined *puStack_af0;
  undefined8 *puStack_ae8;
  undefined8 *puStack_ae0;
  undefined *puStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 auStack_a98 [3];
  undefined1 auStack_a80 [24];
  undefined1 auStack_a68 [24];
  undefined8 auStack_a50 [2];
  char cStack_a39;
  long lStack_a38;
  undefined8 ***pppuStack_9f0;
  code *pcStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined1 *puStack_9c8;
  undefined8 auStack_9c0 [2];
  char cStack_9a9;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 *puStack_990;
  long *plStack_988;
  undefined *puStack_980;
  undefined *puStack_978;
  undefined8 ***pppuStack_970;
  code *pcStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined1 *puStack_948;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  long *plStack_908;
  undefined *puStack_900;
  undefined *puStack_8f8;
  undefined8 ***pppuStack_8f0;
  code *pcStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 *puStack_8c8;
  undefined8 auStack_8c0 [2];
  char cStack_8a9;
  long lStack_8a8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined *puStack_888;
  undefined8 *puStack_880;
  undefined *puStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 *puStack_848;
  undefined8 auStack_840 [3];
  undefined1 auStack_828 [24];
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 ***pppuStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 *puStack_780;
  undefined8 auStack_778 [2];
  char cStack_761;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  undefined *puStack_728;
  undefined8 *puStack_720;
  undefined *puStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 auStack_6d8 [2];
  char cStack_6c1;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  undefined *puStack_688;
  undefined8 *puStack_680;
  undefined *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [3];
  undefined1 auStack_628 [24];
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined *puStack_528;
  undefined8 *puStack_520;
  undefined *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [3];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [3];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  puVar9 = param_4;
  puVar7 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_1109184e0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar5 = puVar4;
    puVar9 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar15;
  __Unwind_Resume();
  pcStack_c8 = FUN_106265a54;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar4 = puVar5;
  puVar8 = puVar9;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_e8 = puVar15;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar15);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar4 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_120,puVar4);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar10 = &UNK_110918530;
    unaff_x23 = &uStack_158;
    puVar4 = &uStack_158;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_140 = unaff_x23;
    func_0x00010007e5dc(&puStack_140);
    lVar16 = 0;
    puVar8 = puVar9;
    do {
      if ((&cStack_109)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar5);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar11 = &uStack_220;
  pcStack_168 = FUN_106265c84;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar5 = puVar4;
  puVar9 = puVar8;
  puVar12 = puVar7;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x25 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    pcVar1 = "true";
    if ((int)puVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1d0,puVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar2 = &UNK_110918580;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar16 = 0;
    puVar5 = puVar11;
    puVar9 = puVar7;
    do {
      if ((&cStack_1b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_220;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar8);
  puVar15 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_200);
  _objc_release(puVar8);
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar11 = &uStack_2e0;
  pcStack_228 = FUN_106265efc;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar7 = puVar5;
  puVar4 = puVar9;
  puVar8 = puVar12;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_2c0;
    func_0x00010002b838(auStack_2c0,puVar15);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2a8,pcVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_290,puVar5);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
    puVar10 = &UNK_1109185d0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar16 = 0;
    puVar7 = puVar11;
    puVar4 = puVar12;
    do {
      if ((&cStack_279)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_2e0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar9);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puStack_310 = auStack_2c0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_310);
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar6 = puVar15;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106266174;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar12 = puVar7;
  puVar11 = puVar4;
  puStack_320 = puVar5;
  puStack_318 = unaff_x23;
  puStack_308 = puVar15;
  puStack_300 = puVar9;
  puStack_2f8 = puVar2;
  pppuStack_2f0 = &pppuStack_230;
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_358,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar5 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_340,puVar5);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar3 = &UNK_110918620;
    unaff_x23 = &uStack_378;
    puVar12 = &uStack_378;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_360 = unaff_x23;
    func_0x00010007e5dc(&puStack_360);
    lVar16 = 0;
    puVar11 = puVar4;
    do {
      if ((&cStack_329)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar4 = &uStack_440;
  pcStack_388 = FUN_1062663a4;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar5 = puVar12;
  puVar9 = puVar11;
  puVar7 = puVar8;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(puVar3);
  _objc_retain(puVar11);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x25 = auStack_420;
    func_0x00010002b838(auStack_420,puVar2);
    pcVar1 = "true";
    if ((int)puVar12 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_408,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar5 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_3f0,puVar5);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_3d8,3);
    puVar15 = &UNK_110918670;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    lVar16 = 0;
    puVar5 = puVar4;
    puVar9 = puVar8;
    do {
      if ((&cStack_3d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_440;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_420);
  _objc_release(puVar11);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar11 = &uStack_500;
  pcStack_448 = FUN_10626661c;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar15;
  puVar4 = puVar5;
  puVar8 = puVar9;
  puVar12 = puVar7;
  pppuStack_450 = &pppuStack_390;
  _objc_retain(puVar15);
  _objc_retain(puVar9);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x25 = auStack_4e0;
    func_0x00010002b838(auStack_4e0,puVar2);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_4c8,pcVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_4b0,puVar5);
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_498,3);
    puVar10 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_4e8 = (undefined1 *)&uStack_500;
    func_0x00010007e5dc(&puStack_4e8);
    lVar16 = 0;
    puVar4 = puVar11;
    puVar8 = puVar7;
    do {
      if ((&cStack_499)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_500;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar9);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puStack_530 = auStack_4e0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_530);
  _objc_release(puVar9);
  _objc_release(puVar15);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_508 = FUN_106266894;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar7 = puVar4;
  puVar11 = puVar8;
  puStack_540 = puVar5;
  puStack_538 = unaff_x23;
  puStack_528 = puVar2;
  puStack_520 = puVar9;
  puStack_518 = puVar15;
  pppuStack_510 = &pppuStack_450;
  _objc_retain(puVar10);
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_578,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar5 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_560,puVar5);
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    func_0x00010007e1e8(&uStack_598,auStack_578,&lStack_548,2);
    puVar3 = &UNK_110918710;
    unaff_x23 = &uStack_598;
    puVar7 = &uStack_598;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_580 = unaff_x23;
    func_0x00010007e5dc(&puStack_580);
    lVar16 = 0;
    puVar11 = puVar8;
    do {
      if ((&cStack_549)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_561 < '\0') {
    __ZdlPv(auStack_578[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar8 = &uStack_660;
  pcStack_5a8 = FUN_106266ac4;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar5 = puVar7;
  puVar9 = puVar11;
  puVar4 = puVar12;
  pppuStack_5b0 = &pppuStack_510;
  _objc_retain(puVar3);
  _objc_retain(puVar11);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x25 = auStack_640;
    func_0x00010002b838(auStack_640,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_628,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar7 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_610,puVar7);
    uStack_660 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    func_0x00010007e1e8(&uStack_660,auStack_640,&lStack_5f8,3);
    puVar15 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_648 = (undefined1 *)&uStack_660;
    func_0x00010007e5dc(&puStack_648);
    lVar16 = 0;
    puVar5 = puVar8;
    puVar9 = puVar12;
    do {
      if ((&cStack_5f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_610 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_660;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_690 = auStack_640;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_690);
  _objc_release(puVar11);
  _objc_release(puVar3);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_668 = FUN_106266d3c;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar15;
  puVar8 = puVar5;
  puVar13 = puVar9;
  puStack_6a0 = puVar7;
  puStack_698 = unaff_x23;
  puStack_688 = puVar2;
  puStack_680 = puVar11;
  puStack_678 = puVar3;
  pppuStack_670 = &pppuStack_5b0;
  _objc_retain(puVar15);
  _objc_retain(puVar5);
  puVar12 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar7 = auStack_6d8;
    func_0x00010002b838(auStack_6d8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar8 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_6c0,puVar8);
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    uStack_6e8 = 0;
    func_0x00010007e1e8(&uStack_6f8,auStack_6d8,&lStack_6a8,2);
    puVar10 = &UNK_1109187b0;
    unaff_x23 = &uStack_6f8;
    puVar8 = &uStack_6f8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_6e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_6e0);
    lVar16 = 0;
    puVar12 = auStack_6d8;
    puVar13 = puVar9;
    do {
      if ((&cStack_6a9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6c0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_6c1 < '\0') {
    __ZdlPv(auStack_6d8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar15);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_708 = FUN_106266f6c;
  lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar9 = puVar8;
  puVar11 = puVar13;
  puStack_740 = puVar7;
  puStack_738 = unaff_x23;
  puStack_730 = puVar12;
  puStack_728 = puVar2;
  puStack_720 = puVar5;
  puStack_718 = puVar15;
  pppuStack_710 = &pppuStack_670;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_778,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_760,puVar5);
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_788 = 0;
    func_0x00010007e1e8(&uStack_798,auStack_778,&lStack_748,2);
    puVar3 = &UNK_110918800;
    unaff_x23 = &uStack_798;
    puVar9 = &uStack_798;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_780 = unaff_x23;
    func_0x00010007e5dc(&puStack_780);
    lVar16 = 0;
    puVar11 = puVar13;
    do {
      if ((&cStack_749)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_760 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_761 < '\0') {
    __ZdlPv(auStack_778[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar12 = &uStack_860;
  pcStack_7a8 = FUN_10626719c;
  lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar7 = puVar9;
  puVar8 = puVar11;
  puVar5 = puVar4;
  pppuStack_7b0 = &pppuStack_710;
  _objc_retain(puVar3);
  _objc_retain(puVar11);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x25 = auStack_840;
    func_0x00010002b838(auStack_840,puVar2);
    pcVar1 = "true";
    if ((int)puVar9 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_828,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar9 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_810,puVar9);
    uStack_860 = 0;
    uStack_858 = 0;
    uStack_850 = 0;
    func_0x00010007e1e8(&uStack_860,auStack_840,&lStack_7f8,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_848 = (undefined1 *)&uStack_860;
    func_0x00010007e5dc(&puStack_848);
    lVar16 = 0;
    puVar7 = puVar12;
    puVar8 = puVar4;
    do {
      if ((&cStack_7f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_810 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_860;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_840);
  _objc_release(puVar11);
  _objc_release(puVar3);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_8e0;
  pcStack_868 = FUN_106267414;
  lStack_8a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar15;
  puVar4 = puVar7;
  puStack_8a0 = puVar9;
  puStack_898 = unaff_x23;
  puStack_890 = auStack_840;
  puStack_888 = puVar2;
  puStack_880 = puVar11;
  puStack_878 = puVar3;
  pppuStack_870 = &pppuStack_7b0;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar12 = auStack_840;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_8c0;
    func_0x00010002b838(auStack_8c0,puVar2);
    uStack_8e0 = 0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    func_0x00010007e1e8(&uStack_8e0,auStack_8c0,&lStack_8a8,1);
    puVar10 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_8c8 = (undefined1 *)&uStack_8e0;
    func_0x00010007e5dc(&puStack_8c8);
    puVar4 = puVar13;
    puVar8 = puVar7;
    puVar12 = &uStack_8e0;
    if (cStack_8a9 < '\0') {
      __ZdlPv(auStack_8c0[0]);
      puVar4 = puVar13;
      puVar8 = puVar7;
      puVar12 = &uStack_8e0;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_960;
  pcStack_8e8 = FUN_106267588;
  lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar7 = puVar4;
  puStack_920 = puVar9;
  puStack_918 = unaff_x23;
  puStack_910 = puVar12;
  plStack_908 = plVar17;
  puStack_900 = puVar2;
  puStack_8f8 = puVar15;
  pppuStack_8f0 = &pppuStack_870;
  _objc_retain(puVar10);
  plVar17 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x23 = auStack_940;
    func_0x00010002b838(auStack_940,puVar2);
    uStack_960 = 0;
    uStack_958 = 0;
    uStack_950 = 0;
    func_0x00010007e1e8(&uStack_960,auStack_940,&lStack_928,1);
    puVar3 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_948 = (undefined1 *)&uStack_960;
    func_0x00010007e5dc(&puStack_948);
    puVar7 = puVar11;
    puVar8 = puVar4;
    puVar12 = &uStack_960;
    if (cStack_929 < '\0') {
      __ZdlPv(auStack_940[0]);
      puVar7 = puVar11;
      puVar8 = puVar4;
      puVar12 = &uStack_960;
    }
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_928) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar10);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar11 = &uStack_9e0;
    pcStack_968 = FUN_1062676fc;
    lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar3;
    puVar4 = puVar7;
    puStack_9a0 = puVar9;
    puStack_998 = unaff_x23;
    puStack_990 = puVar12;
    plStack_988 = plVar17;
    puStack_980 = puVar2;
    puStack_978 = puVar10;
    pppuStack_970 = &pppuStack_8f0;
    _objc_retain(puVar3);
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_9c0,puVar2);
      uStack_9e0 = 0;
      uStack_9d8 = 0;
      uStack_9d0 = 0;
      func_0x00010007e1e8(&uStack_9e0,auStack_9c0,&lStack_9a8,1);
      puVar15 = &UNK_110918940;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_9c8 = (undefined1 *)&uStack_9e0;
      func_0x00010007e5dc(&puStack_9c8);
      puVar4 = puVar11;
      puVar8 = puVar7;
      if (cStack_9a9 < '\0') {
        __ZdlPv(auStack_9c0[0]);
        puVar4 = puVar11;
        puVar8 = puVar7;
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    __Unwind_Resume();
    pcStack_9e8 = FUN_106267870;
    lStack_a38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar15;
    puVar9 = puVar4;
    puVar7 = puVar8;
    puVar12 = puVar5;
    pppuStack_9f0 = &pppuStack_970;
    _objc_retain(puVar15);
    _objc_retain(puVar4);
    _objc_retain(puVar8);
    if (puVar2 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_a98,puVar2);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar9 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_a80,puVar9);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar9 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_a68,puVar9);
      unaff_x26 = auStack_a98;
      unaff_x25 = auStack_a50;
      pcVar1 = "true";
      if ((int)puVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x25,pcVar1);
      uStack_ab8 = 0;
      uStack_ab0 = 0;
      uStack_aa8 = 0;
      func_0x00010007e1e8(&uStack_ab8,auStack_a98,&lStack_a38,4);
      puVar10 = &UNK_110918990;
      puVar5 = &uStack_ab8;
      puVar9 = &uStack_ab8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_aa0 = puVar5;
      func_0x00010007e5dc(&puStack_aa0);
      lVar16 = 0;
      puVar7 = param_6;
      do {
        if ((&cStack_a39)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a50 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x60);
    }
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a38) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_a98);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar15);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar14 = &uStack_b80;
    pcStack_ac8 = FUN_106267b58;
    lStack_b18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar10;
    puVar11 = puVar9;
    puVar13 = puVar7;
    puStack_b10 = unaff_x26;
    puStack_b08 = unaff_x25;
    puStack_b00 = puVar5;
    puStack_af8 = auStack_a98;
    puStack_af0 = puVar2;
    puStack_ae8 = puVar8;
    puStack_ae0 = puVar4;
    puStack_ad8 = puVar15;
    pppuStack_ad0 = &pppuStack_9f0;
    _objc_retain(puVar10);
    _objc_retain(puVar7);
    puVar5 = auStack_a98;
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_b60,puVar2);
      pcVar1 = "true";
      if ((int)puVar9 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_b48,pcVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar9 = puVar7;
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_b30,puVar9);
      uStack_b80 = 0;
      uStack_b78 = 0;
      uStack_b70 = 0;
      func_0x00010007e1e8(&uStack_b80,auStack_b60,&lStack_b18,3);
      puVar3 = &UNK_1109189e0;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_b80,puVar12);
      puStack_b68 = (undefined1 *)&uStack_b80;
      func_0x00010007e5dc(&puStack_b68);
      lVar16 = 0;
      puVar11 = puVar14;
      puVar13 = puVar12;
      do {
        if ((&cStack_b19)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b30 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        puVar5 = &uStack_b80;
      } while (lVar16 != -0x48);
    }
    _objc_release(puVar7);
    puVar2 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b18) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    do {
      puVar5 = puVar5 + -3;
    } while (puVar5 != auStack_b60);
    _objc_release(puVar7);
    _objc_release(puVar10);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar8 = &uStack_c00;
    pcStack_b88 = FUN_106267dd0;
    lStack_bc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar3;
    puVar4 = puVar11;
    puStack_bc0 = puVar9;
    puStack_bb8 = puVar5;
    puStack_bb0 = auStack_b60;
    puStack_ba8 = puVar2;
    puStack_ba0 = puVar7;
    puStack_b98 = puVar10;
    pppuStack_b90 = &pppuStack_ad0;
    _objc_retain(puVar3);
    plVar17 = (long *)0x0;
    puVar7 = auStack_b60;
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      puVar5 = auStack_be0;
      func_0x00010002b838(auStack_be0,puVar2);
      uStack_c00 = 0;
      uStack_bf8 = 0;
      uStack_bf0 = 0;
      func_0x00010007e1e8(&uStack_c00,auStack_be0,&lStack_bc8,1);
      puVar15 = &UNK_110918a30;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_c00,puVar11);
      puStack_be8 = (undefined1 *)&uStack_c00;
      func_0x00010007e5dc(&puStack_be8);
      puVar4 = puVar8;
      puVar13 = puVar11;
      puVar7 = &uStack_c00;
      if (cStack_bc9 < '\0') {
        __ZdlPv(auStack_be0[0]);
        puVar4 = puVar8;
        puVar13 = puVar11;
        puVar7 = &uStack_c00;
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bc8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_c80;
    pcStack_c08 = FUN_106267f44;
    lStack_c48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar15;
    puVar8 = puVar4;
    puStack_c40 = puVar9;
    puStack_c38 = puVar5;
    puStack_c30 = puVar7;
    plStack_c28 = plVar17;
    puStack_c20 = puVar2;
    puStack_c18 = puVar3;
    pppuStack_c10 = &pppuStack_b90;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar5 = auStack_c60;
      func_0x00010002b838(auStack_c60,puVar2);
      uStack_c80 = 0;
      uStack_c78 = 0;
      uStack_c70 = 0;
      func_0x00010007e1e8(&uStack_c80,auStack_c60,&lStack_c48,1);
      puVar10 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_c80,puVar4);
      puStack_c68 = (undefined1 *)&uStack_c80;
      func_0x00010007e5dc(&puStack_c68);
      puVar8 = puVar12;
      puVar13 = puVar4;
      puVar7 = &uStack_c80;
      if (cStack_c49 < '\0') {
        __ZdlPv(auStack_c60[0]);
        puVar8 = puVar12;
        puVar13 = puVar4;
        puVar7 = &uStack_c80;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c48) {
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar6 = puVar2;
      __Unwind_Resume();
      pcStack_c88 = FUN_1062680b8;
      lStack_cc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = puVar10;
      puVar4 = puVar8;
      puStack_cc0 = puVar9;
      puStack_cb8 = puVar5;
      puStack_cb0 = puVar7;
      plStack_ca8 = plVar17;
      puStack_ca0 = puVar2;
      puStack_c98 = puVar15;
      pppuStack_c90 = &pppuStack_c10;
      _objc_retain(puVar10);
      _objc_retain(puVar8);
      puVar7 = (undefined8 *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar6 + 8);
        _objc_retain(puVar10);
        if (puVar10 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar10;
          _objc_retainAutorelease(puVar10);
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        puVar9 = auStack_cf8;
        func_0x00010002b838(auStack_cf8,puVar2);
        _objc_retain(puVar8);
        if (puVar8 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f371ee3;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar5 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_ce0,puVar5);
        uStack_d18 = 0;
        uStack_d10 = 0;
        uStack_d08 = 0;
        func_0x00010007e1e8(&uStack_d18,auStack_cf8,&lStack_cc8,2);
        puVar3 = &UNK_110918ad0;
        puVar5 = &uStack_d18;
        puVar4 = &uStack_d18;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar4,puVar13);
        puStack_d00 = puVar5;
        func_0x00010007e5dc(&puStack_d00);
        lVar16 = 0;
        puVar7 = auStack_cf8;
        do {
          if ((&cStack_cc9)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_ce0 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != -0x30);
      }
      _objc_release(puVar8);
      puVar2 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cc8) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_ce1 < '\0') {
        __ZdlPv(auStack_cf8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar10);
      puVar6 = puVar2;
      __Unwind_Resume();
      puVar11 = &uStack_da0;
      pcStack_d28 = FUN_1062682e8;
      lStack_d68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar3;
      puVar12 = puVar4;
      puStack_d60 = puVar9;
      puStack_d58 = puVar5;
      puStack_d50 = puVar7;
      puStack_d48 = puVar2;
      puStack_d40 = puVar8;
      puStack_d38 = puVar10;
      pppuStack_d30 = &pppuStack_c90;
      _objc_retain(puVar3);
      plVar17 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar6 + 8);
        _objc_retain(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        puVar5 = auStack_d80;
        func_0x00010002b838(auStack_d80,puVar2);
        uStack_da0 = 0;
        uStack_d98 = 0;
        uStack_d90 = 0;
        func_0x00010007e1e8(&uStack_da0,auStack_d80,&lStack_d68,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_da0,puVar4);
        puStack_d88 = (undefined1 *)&uStack_da0;
        func_0x00010007e5dc(&puStack_d88);
        puVar12 = puVar11;
        puVar7 = &uStack_da0;
        if (cStack_d69 < '\0') {
          __ZdlPv(auStack_d80[0]);
          puVar12 = puVar11;
          puVar7 = &uStack_da0;
        }
      }
      puVar2 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d68) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      puVar6 = puVar2;
      __Unwind_Resume();
      puVar8 = &uStack_e20;
      pcStack_da8 = FUN_10626845c;
      lStack_de8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar15;
      puVar4 = puVar12;
      puStack_de0 = puVar9;
      puStack_dd8 = puVar5;
      puStack_dd0 = puVar7;
      plStack_dc8 = plVar17;
      puStack_dc0 = puVar2;
      puStack_db8 = puVar3;
      pppuStack_db0 = &pppuStack_d30;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar6 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar5 = auStack_e00;
        func_0x00010002b838(auStack_e00,puVar2);
        uStack_e20 = 0;
        uStack_e18 = 0;
        uStack_e10 = 0;
        func_0x00010007e1e8(&uStack_e20,auStack_e00,&lStack_de8,1);
        puVar10 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_e20,puVar12);
        puStack_e08 = (undefined1 *)&uStack_e20;
        func_0x00010007e5dc(&puStack_e08);
        puVar4 = puVar8;
        puVar7 = &uStack_e20;
        if (cStack_de9 < '\0') {
          __ZdlPv(auStack_e00[0]);
          puVar4 = puVar8;
          puVar7 = &uStack_e20;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_de8) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar3 = puVar2;
      __Unwind_Resume();
      pcStack_e28 = FUN_1062685d0;
      lStack_e68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_e60 = puVar9;
      puStack_e58 = puVar5;
      puStack_e50 = puVar7;
      plStack_e48 = plVar17;
      puStack_e40 = puVar2;
      puStack_e38 = puVar15;
      pppuStack_e30 = &pppuStack_db0;
      _objc_retain(puVar10);
      if (puVar3 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar3 + 8);
        _objc_retain(puVar10);
        if (puVar10 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar10;
          _objc_retainAutorelease(puVar10);
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_e80,puVar2);
        uStack_ea0 = 0;
        uStack_e98 = 0;
        uStack_e90 = 0;
        func_0x00010007e1e8(&uStack_ea0,auStack_e80,&lStack_e68,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_ea0,puVar4);
        puStack_e88 = (undefined1 *)&uStack_ea0;
        func_0x00010007e5dc(&puStack_e88);
        if (cStack_e69 < '\0') {
          __ZdlPv(auStack_e80[0]);
        }
      }
      puVar2 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e68) {
        ___stack_chk_fail();
        _objc_release(puVar10);
        _objc_release(puVar10);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106265a54; end: 106265c83;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062665ec) */
/* WARNING: Removing unreachable block (ram,0x000106265ecc) */
/* WARNING: Removing unreachable block (ram,0x000106266144) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106265a54(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined1 *puStack_dc8;
  undefined8 auStack_dc0 [2];
  char cStack_da9;
  long lStack_da8;
  undefined8 *puStack_da0;
  undefined8 *puStack_d98;
  undefined8 *puStack_d90;
  long *plStack_d88;
  undefined *puStack_d80;
  undefined *puStack_d78;
  undefined8 ***pppuStack_d70;
  code *pcStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 *puStack_d48;
  undefined8 auStack_d40 [2];
  char cStack_d29;
  long lStack_d28;
  undefined8 *puStack_d20;
  undefined8 *puStack_d18;
  undefined8 *puStack_d10;
  long *plStack_d08;
  undefined *puStack_d00;
  undefined *puStack_cf8;
  undefined8 ***pppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined1 *puStack_cc8;
  undefined8 auStack_cc0 [2];
  char cStack_ca9;
  long lStack_ca8;
  undefined8 *puStack_ca0;
  undefined8 *puStack_c98;
  undefined8 *puStack_c90;
  undefined *puStack_c88;
  undefined8 *puStack_c80;
  undefined *puStack_c78;
  undefined8 ***pppuStack_c70;
  code *pcStack_c68;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 *puStack_c40;
  undefined8 auStack_c38 [2];
  char cStack_c21;
  undefined8 auStack_c20 [2];
  char cStack_c09;
  long lStack_c08;
  undefined8 *puStack_c00;
  undefined8 *puStack_bf8;
  undefined8 *puStack_bf0;
  long *plStack_be8;
  undefined *puStack_be0;
  undefined *puStack_bd8;
  undefined8 ***pppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined1 *puStack_ba8;
  undefined8 auStack_ba0 [2];
  char cStack_b89;
  long lStack_b88;
  undefined8 *puStack_b80;
  undefined8 *puStack_b78;
  undefined8 *puStack_b70;
  long *plStack_b68;
  undefined *puStack_b60;
  undefined *puStack_b58;
  undefined8 ***pppuStack_b50;
  code *pcStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined1 *puStack_b28;
  undefined8 auStack_b20 [2];
  char cStack_b09;
  long lStack_b08;
  undefined8 *puStack_b00;
  undefined8 *puStack_af8;
  undefined8 *puStack_af0;
  undefined *puStack_ae8;
  undefined8 *puStack_ae0;
  undefined *puStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined1 *puStack_aa8;
  undefined8 auStack_aa0 [3];
  undefined1 auStack_a88 [24];
  undefined8 auStack_a70 [2];
  char cStack_a59;
  long lStack_a58;
  undefined8 *puStack_a50;
  undefined8 *puStack_a48;
  undefined8 *puStack_a40;
  undefined8 *puStack_a38;
  undefined *puStack_a30;
  undefined8 *puStack_a28;
  undefined8 *puStack_a20;
  undefined *puStack_a18;
  undefined8 ***pppuStack_a10;
  code *pcStack_a08;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 auStack_9d8 [3];
  undefined1 auStack_9c0 [24];
  undefined1 auStack_9a8 [24];
  undefined8 auStack_990 [2];
  char cStack_979;
  long lStack_978;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 *puStack_8d0;
  long *plStack_8c8;
  undefined *puStack_8c0;
  undefined *puStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 *puStack_888;
  undefined8 auStack_880 [2];
  char cStack_869;
  long lStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  undefined8 *puStack_850;
  long *plStack_848;
  undefined *puStack_840;
  undefined *puStack_838;
  undefined8 ***pppuStack_830;
  code *pcStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined1 *puStack_808;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined *puStack_7c8;
  undefined8 *puStack_7c0;
  undefined *puStack_7b8;
  undefined8 ***pppuStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  undefined8 auStack_780 [3];
  undefined1 auStack_768 [24];
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined *puStack_668;
  undefined8 *puStack_660;
  undefined *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [3];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined *puStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [3];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar2 = param_2;
  puVar3 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_110918530;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar16 = 0;
    puVar7 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(param_3);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_160;
  pcStack_a8 = FUN_106265c84;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar4 = puVar3;
  puVar12 = puVar7;
  puVar6 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_140;
    func_0x00010002b838(auStack_140,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar9 = &UNK_110918580;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar16 = 0;
    puVar4 = puVar10;
    puVar12 = param_5;
    do {
      if ((&cStack_f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_140);
  _objc_release(puVar7);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar11 = &uStack_220;
  pcStack_168 = FUN_106265efc;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar9;
  puVar3 = puVar4;
  puVar7 = puVar12;
  puVar10 = puVar6;
  ppuStack_170 = &puStack_b0;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x25 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    pcVar1 = "true";
    if ((int)puVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar4 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_1d0,puVar4);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar2 = &UNK_1109185d0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar16 = 0;
    puVar3 = puVar11;
    puVar7 = puVar6;
    do {
      if ((&cStack_1b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_220;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar12);
  puVar15 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  puStack_250 = auStack_200;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_250);
  _objc_release(puVar12);
  _objc_release(puVar9);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_228 = FUN_106266174;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar3;
  puVar11 = puVar7;
  puStack_260 = puVar4;
  puStack_258 = unaff_x23;
  puStack_248 = puVar15;
  puStack_240 = puVar12;
  puStack_238 = puVar9;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_298,puVar15);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_280,puVar4);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar8 = &UNK_110918620;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar16 = 0;
    puVar11 = puVar7;
    do {
      if ((&cStack_269)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar12 = &uStack_380;
  pcStack_2c8 = FUN_1062663a4;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar3 = puVar6;
  puVar7 = puVar11;
  puVar4 = puVar10;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_360;
    func_0x00010002b838(auStack_360,puVar2);
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_348,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar3 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_330,puVar3);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_318,3);
    puVar2 = &UNK_110918670;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar16 = 0;
    puVar3 = puVar12;
    puVar7 = puVar10;
    do {
      if ((&cStack_319)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_380;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar15 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_360);
  _objc_release(puVar11);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar11 = &uStack_440;
  pcStack_388 = FUN_10626661c;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar12 = puVar3;
  puVar6 = puVar7;
  puVar10 = puVar4;
  pppuStack_390 = &pppuStack_2d0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_420;
    func_0x00010002b838(auStack_420,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_408,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_3f0,puVar3);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_3d8,3);
    puVar9 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    lVar16 = 0;
    puVar12 = puVar11;
    puVar6 = puVar4;
    do {
      if ((&cStack_3d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_440;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_470 = auStack_420;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_470);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_448 = FUN_106266894;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar4 = puVar12;
  puVar11 = puVar6;
  puStack_480 = puVar3;
  puStack_478 = unaff_x23;
  puStack_468 = puVar15;
  puStack_460 = puVar7;
  puStack_458 = puVar2;
  pppuStack_450 = &pppuStack_390;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_4b8,puVar2);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar3 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_4a0,puVar3);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
    puVar8 = &UNK_110918710;
    unaff_x23 = &uStack_4d8;
    puVar4 = &uStack_4d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4c0);
    lVar16 = 0;
    puVar11 = puVar6;
    do {
      if ((&cStack_489)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar12);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(puVar12);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar6 = &uStack_5a0;
  pcStack_4e8 = FUN_106266ac4;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar3 = puVar4;
  puVar7 = puVar11;
  puVar12 = puVar10;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_580;
    func_0x00010002b838(auStack_580,puVar2);
    pcVar1 = "true";
    if ((int)puVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_568,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar4 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_550,puVar4);
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_538,3);
    puVar15 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_588 = (undefined1 *)&uStack_5a0;
    func_0x00010007e5dc(&puStack_588);
    lVar16 = 0;
    puVar3 = puVar6;
    puVar7 = puVar10;
    do {
      if ((&cStack_539)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_5a0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_5d0 = auStack_580;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_5d0);
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_5a8 = FUN_106266d3c;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar6 = puVar3;
  puVar13 = puVar7;
  puStack_5e0 = puVar4;
  puStack_5d8 = unaff_x23;
  puStack_5c8 = puVar2;
  puStack_5c0 = puVar11;
  puStack_5b8 = puVar8;
  pppuStack_5b0 = &pppuStack_4f0;
  _objc_retain(puVar15);
  _objc_retain(puVar3);
  puVar10 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar4 = auStack_618;
    func_0x00010002b838(auStack_618,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_600,puVar6);
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5e8,2);
    puVar9 = &UNK_1109187b0;
    unaff_x23 = &uStack_638;
    puVar6 = &uStack_638;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_620 = unaff_x23;
    func_0x00010007e5dc(&puStack_620);
    lVar16 = 0;
    puVar10 = auStack_618;
    puVar13 = puVar7;
    do {
      if ((&cStack_5e9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_601 < '\0') {
    __ZdlPv(auStack_618[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_648 = FUN_106266f6c;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar7 = puVar6;
  puVar11 = puVar13;
  puStack_680 = puVar4;
  puStack_678 = unaff_x23;
  puStack_670 = puVar10;
  puStack_668 = puVar2;
  puStack_660 = puVar3;
  puStack_658 = puVar15;
  pppuStack_650 = &pppuStack_5b0;
  _objc_retain(puVar9);
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_6b8,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_6a0,puVar3);
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6c8 = 0;
    func_0x00010007e1e8(&uStack_6d8,auStack_6b8,&lStack_688,2);
    puVar8 = &UNK_110918800;
    unaff_x23 = &uStack_6d8;
    puVar7 = &uStack_6d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_6c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_6c0);
    lVar16 = 0;
    puVar11 = puVar13;
    do {
      if ((&cStack_689)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_6a1 < '\0') {
    __ZdlPv(auStack_6b8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar10 = &uStack_7a0;
  pcStack_6e8 = FUN_10626719c;
  lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar4 = puVar7;
  puVar6 = puVar11;
  puVar3 = puVar12;
  pppuStack_6f0 = &pppuStack_650;
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_780;
    func_0x00010002b838(auStack_780,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_768,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar7 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_750,puVar7);
    uStack_7a0 = 0;
    uStack_798 = 0;
    uStack_790 = 0;
    func_0x00010007e1e8(&uStack_7a0,auStack_780,&lStack_738,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_788 = (undefined1 *)&uStack_7a0;
    func_0x00010007e5dc(&puStack_788);
    lVar16 = 0;
    puVar4 = puVar10;
    puVar6 = puVar12;
    do {
      if ((&cStack_739)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_750 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_7a0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_780);
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_820;
  pcStack_7a8 = FUN_106267414;
  lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar12 = puVar4;
  puStack_7e0 = puVar7;
  puStack_7d8 = unaff_x23;
  puStack_7d0 = auStack_780;
  puStack_7c8 = puVar2;
  puStack_7c0 = puVar11;
  puStack_7b8 = puVar8;
  pppuStack_7b0 = &pppuStack_6f0;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar10 = auStack_780;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_800;
    func_0x00010002b838(auStack_800,puVar2);
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_810 = 0;
    func_0x00010007e1e8(&uStack_820,auStack_800,&lStack_7e8,1);
    puVar9 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_808 = (undefined1 *)&uStack_820;
    func_0x00010007e5dc(&puStack_808);
    puVar12 = puVar13;
    puVar6 = puVar4;
    puVar10 = &uStack_820;
    if (cStack_7e9 < '\0') {
      __ZdlPv(auStack_800[0]);
      puVar12 = puVar13;
      puVar6 = puVar4;
      puVar10 = &uStack_820;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_8a0;
  pcStack_828 = FUN_106267588;
  lStack_868 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar4 = puVar12;
  puStack_860 = puVar7;
  puStack_858 = unaff_x23;
  puStack_850 = puVar10;
  plStack_848 = plVar17;
  puStack_840 = puVar2;
  puStack_838 = puVar15;
  pppuStack_830 = &pppuStack_7b0;
  _objc_retain(puVar9);
  plVar17 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x23 = auStack_880;
    func_0x00010002b838(auStack_880,puVar2);
    uStack_8a0 = 0;
    uStack_898 = 0;
    uStack_890 = 0;
    func_0x00010007e1e8(&uStack_8a0,auStack_880,&lStack_868,1);
    puVar8 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_888 = (undefined1 *)&uStack_8a0;
    func_0x00010007e5dc(&puStack_888);
    puVar4 = puVar11;
    puVar6 = puVar12;
    puVar10 = &uStack_8a0;
    if (cStack_869 < '\0') {
      __ZdlPv(auStack_880[0]);
      puVar4 = puVar11;
      puVar6 = puVar12;
      puVar10 = &uStack_8a0;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_868) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_920;
  pcStack_8a8 = FUN_1062676fc;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar12 = puVar4;
  puStack_8e0 = puVar7;
  puStack_8d8 = unaff_x23;
  puStack_8d0 = puVar10;
  plStack_8c8 = plVar17;
  puStack_8c0 = puVar2;
  puStack_8b8 = puVar9;
  pppuStack_8b0 = &pppuStack_830;
  _objc_retain(puVar8);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_900,puVar2);
    uStack_920 = 0;
    uStack_918 = 0;
    uStack_910 = 0;
    func_0x00010007e1e8(&uStack_920,auStack_900,&lStack_8e8,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_908 = (undefined1 *)&uStack_920;
    func_0x00010007e5dc(&puStack_908);
    puVar12 = puVar11;
    puVar6 = puVar4;
    if (cStack_8e9 < '\0') {
      __ZdlPv(auStack_900[0]);
      puVar12 = puVar11;
      puVar6 = puVar4;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8e8) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    __Unwind_Resume();
    pcStack_928 = FUN_106267870;
    lStack_978 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar7 = puVar12;
    puVar4 = puVar6;
    puVar10 = puVar3;
    pppuStack_930 = &pppuStack_8b0;
    _objc_retain(puVar15);
    _objc_retain(puVar12);
    _objc_retain(puVar6);
    if (puVar2 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_9d8,puVar2);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar7 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_9c0,puVar7);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar7 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_9a8,puVar7);
      unaff_x26 = auStack_9d8;
      unaff_x25 = auStack_990;
      pcVar1 = "true";
      if ((int)puVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x25,pcVar1);
      uStack_9f8 = 0;
      uStack_9f0 = 0;
      uStack_9e8 = 0;
      func_0x00010007e1e8(&uStack_9f8,auStack_9d8,&lStack_978,4);
      puVar9 = &UNK_110918990;
      puVar3 = &uStack_9f8;
      puVar7 = &uStack_9f8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_9e0 = puVar3;
      func_0x00010007e5dc(&puStack_9e0);
      lVar16 = 0;
      puVar4 = param_6;
      do {
        if ((&cStack_979)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_990 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x60);
    }
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_978) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_9d8);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(puVar15);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar14 = &uStack_ac0;
    pcStack_a08 = FUN_106267b58;
    lStack_a58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar9;
    puVar11 = puVar7;
    puVar13 = puVar4;
    puStack_a50 = unaff_x26;
    puStack_a48 = unaff_x25;
    puStack_a40 = puVar3;
    puStack_a38 = auStack_9d8;
    puStack_a30 = puVar2;
    puStack_a28 = puVar6;
    puStack_a20 = puVar12;
    puStack_a18 = puVar15;
    pppuStack_a10 = &pppuStack_930;
    _objc_retain(puVar9);
    _objc_retain(puVar4);
    puVar3 = auStack_9d8;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_aa0,puVar2);
      pcVar1 = "true";
      if ((int)puVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_a88,pcVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar7 = puVar4;
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_a70,puVar7);
      uStack_ac0 = 0;
      uStack_ab8 = 0;
      uStack_ab0 = 0;
      func_0x00010007e1e8(&uStack_ac0,auStack_aa0,&lStack_a58,3);
      puVar8 = &UNK_1109189e0;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_ac0,puVar10);
      puStack_aa8 = (undefined1 *)&uStack_ac0;
      func_0x00010007e5dc(&puStack_aa8);
      lVar16 = 0;
      puVar11 = puVar14;
      puVar13 = puVar10;
      do {
        if ((&cStack_a59)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a70 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        puVar3 = &uStack_ac0;
      } while (lVar16 != -0x48);
    }
    _objc_release(puVar4);
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a58) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != auStack_aa0);
    _objc_release(puVar4);
    _objc_release(puVar9);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar6 = &uStack_b40;
    pcStack_ac8 = FUN_106267dd0;
    lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar8;
    puVar12 = puVar11;
    puStack_b00 = puVar7;
    puStack_af8 = puVar3;
    puStack_af0 = auStack_aa0;
    puStack_ae8 = puVar2;
    puStack_ae0 = puVar4;
    puStack_ad8 = puVar9;
    pppuStack_ad0 = &pppuStack_a10;
    _objc_retain(puVar8);
    plVar17 = (long *)0x0;
    puVar4 = auStack_aa0;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar3 = auStack_b20;
      func_0x00010002b838(auStack_b20,puVar2);
      uStack_b40 = 0;
      uStack_b38 = 0;
      uStack_b30 = 0;
      func_0x00010007e1e8(&uStack_b40,auStack_b20,&lStack_b08,1);
      puVar15 = &UNK_110918a30;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_b40,puVar11);
      puStack_b28 = (undefined1 *)&uStack_b40;
      func_0x00010007e5dc(&puStack_b28);
      puVar12 = puVar6;
      puVar13 = puVar11;
      puVar4 = &uStack_b40;
      if (cStack_b09 < '\0') {
        __ZdlPv(auStack_b20[0]);
        puVar12 = puVar6;
        puVar13 = puVar11;
        puVar4 = &uStack_b40;
      }
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b08) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar5 = puVar2;
      __Unwind_Resume();
      puVar10 = &uStack_bc0;
      pcStack_b48 = FUN_106267f44;
      lStack_b88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar15;
      puVar6 = puVar12;
      puStack_b80 = puVar7;
      puStack_b78 = puVar3;
      puStack_b70 = puVar4;
      plStack_b68 = plVar17;
      puStack_b60 = puVar2;
      puStack_b58 = puVar8;
      pppuStack_b50 = &pppuStack_ad0;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar5 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar3 = auStack_ba0;
        func_0x00010002b838(auStack_ba0,puVar2);
        uStack_bc0 = 0;
        uStack_bb8 = 0;
        uStack_bb0 = 0;
        func_0x00010007e1e8(&uStack_bc0,auStack_ba0,&lStack_b88,1);
        puVar9 = &UNK_110918a80;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_bc0,puVar12);
        puStack_ba8 = (undefined1 *)&uStack_bc0;
        func_0x00010007e5dc(&puStack_ba8);
        puVar6 = puVar10;
        puVar13 = puVar12;
        puVar4 = &uStack_bc0;
        if (cStack_b89 < '\0') {
          __ZdlPv(auStack_ba0[0]);
          puVar6 = puVar10;
          puVar13 = puVar12;
          puVar4 = &uStack_bc0;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b88) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar5 = puVar2;
      __Unwind_Resume();
      pcStack_bc8 = FUN_1062680b8;
      lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar9;
      puVar12 = puVar6;
      puStack_c00 = puVar7;
      puStack_bf8 = puVar3;
      puStack_bf0 = puVar4;
      plStack_be8 = plVar17;
      puStack_be0 = puVar2;
      puStack_bd8 = puVar15;
      pppuStack_bd0 = &pppuStack_b50;
      _objc_retain(puVar9);
      _objc_retain(puVar6);
      puVar4 = (undefined8 *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar5 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        puVar7 = auStack_c38;
        func_0x00010002b838(auStack_c38,puVar2);
        _objc_retain(puVar6);
        if (puVar6 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)&UNK_10f371ee3;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar3 = puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_c20,puVar3);
        uStack_c58 = 0;
        uStack_c50 = 0;
        uStack_c48 = 0;
        func_0x00010007e1e8(&uStack_c58,auStack_c38,&lStack_c08,2);
        puVar8 = &UNK_110918ad0;
        puVar3 = &uStack_c58;
        puVar12 = &uStack_c58;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar12,puVar13);
        puStack_c40 = puVar3;
        func_0x00010007e5dc(&puStack_c40);
        lVar16 = 0;
        puVar4 = auStack_c38;
        do {
          if ((&cStack_c09)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_c20 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != -0x30);
      }
      _objc_release(puVar6);
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c08) {
        ___stack_chk_fail();
        _objc_release(puVar6);
        if (cStack_c21 < '\0') {
          __ZdlPv(auStack_c38[0]);
        }
        _objc_release(puVar6);
        _objc_release(puVar9);
        puVar5 = puVar2;
        __Unwind_Resume();
        puVar11 = &uStack_ce0;
        pcStack_c68 = FUN_1062682e8;
        lStack_ca8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar15 = puVar8;
        puVar10 = puVar12;
        puStack_ca0 = puVar7;
        puStack_c98 = puVar3;
        puStack_c90 = puVar4;
        puStack_c88 = puVar2;
        puStack_c80 = puVar6;
        puStack_c78 = puVar9;
        pppuStack_c70 = &pppuStack_bd0;
        _objc_retain(puVar8);
        plVar17 = (long *)0x0;
        if (puVar5 != (undefined *)0x0) {
          plVar17 = *(long **)(puVar5 + 8);
          _objc_retain(puVar8);
          if (puVar8 == (undefined *)0x0) {
            puVar2 = &UNK_10f371ee3;
          }
          else {
            puVar2 = puVar8;
            _objc_retainAutorelease(puVar8);
            func_0x00010bdc3520();
          }
          _objc_release(puVar8);
          puVar3 = auStack_cc0;
          func_0x00010002b838(auStack_cc0,puVar2);
          uStack_ce0 = 0;
          uStack_cd8 = 0;
          uStack_cd0 = 0;
          func_0x00010007e1e8(&uStack_ce0,auStack_cc0,&lStack_ca8,1);
          puVar15 = &UNK_110918b20;
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_ce0,puVar12);
          puStack_cc8 = (undefined1 *)&uStack_ce0;
          func_0x00010007e5dc(&puStack_cc8);
          puVar10 = puVar11;
          puVar4 = &uStack_ce0;
          if (cStack_ca9 < '\0') {
            __ZdlPv(auStack_cc0[0]);
            puVar10 = puVar11;
            puVar4 = &uStack_ce0;
          }
        }
        puVar2 = puVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ca8) {
          return puVar2;
        }
        ___stack_chk_fail();
        _objc_release(puVar8);
        _objc_release(puVar8);
        puVar5 = puVar2;
        __Unwind_Resume();
        puVar6 = &uStack_d60;
        pcStack_ce8 = FUN_10626845c;
        lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar9 = puVar15;
        puVar12 = puVar10;
        puStack_d20 = puVar7;
        puStack_d18 = puVar3;
        puStack_d10 = puVar4;
        plStack_d08 = plVar17;
        puStack_d00 = puVar2;
        puStack_cf8 = puVar8;
        pppuStack_cf0 = &pppuStack_c70;
        _objc_retain(puVar15);
        plVar17 = (long *)0x0;
        if (puVar5 != (undefined *)0x0) {
          plVar17 = *(long **)(puVar5 + 8);
          _objc_retain(puVar15);
          if (puVar15 == (undefined *)0x0) {
            puVar2 = &UNK_10f371ee3;
          }
          else {
            puVar2 = puVar15;
            _objc_retainAutorelease(puVar15);
            func_0x00010bdc3520();
          }
          _objc_release(puVar15);
          puVar3 = auStack_d40;
          func_0x00010002b838(auStack_d40,puVar2);
          uStack_d60 = 0;
          uStack_d58 = 0;
          uStack_d50 = 0;
          func_0x00010007e1e8(&uStack_d60,auStack_d40,&lStack_d28,1);
          puVar9 = &UNK_110918b70;
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_d60,puVar10);
          puStack_d48 = (undefined1 *)&uStack_d60;
          func_0x00010007e5dc(&puStack_d48);
          puVar12 = puVar6;
          puVar4 = &uStack_d60;
          if (cStack_d29 < '\0') {
            __ZdlPv(auStack_d40[0]);
            puVar12 = puVar6;
            puVar4 = &uStack_d60;
          }
        }
        puVar2 = puVar15;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
          return puVar2;
        }
        ___stack_chk_fail();
        _objc_release(puVar15);
        _objc_release(puVar15);
        puVar8 = puVar2;
        __Unwind_Resume();
        pcStack_d68 = FUN_1062685d0;
        lStack_da8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_da0 = puVar7;
        puStack_d98 = puVar3;
        puStack_d90 = puVar4;
        plStack_d88 = plVar17;
        puStack_d80 = puVar2;
        puStack_d78 = puVar15;
        pppuStack_d70 = &pppuStack_cf0;
        _objc_retain(puVar9);
        if (puVar8 != (undefined *)0x0) {
          plVar17 = *(long **)(puVar8 + 8);
          _objc_retain(puVar9);
          if (puVar9 == (undefined *)0x0) {
            puVar2 = &UNK_10f371ee3;
          }
          else {
            puVar2 = puVar9;
            _objc_retainAutorelease(puVar9);
            func_0x00010bdc3520();
          }
          _objc_release(puVar9);
          func_0x00010002b838(auStack_dc0,puVar2);
          uStack_de0 = 0;
          uStack_dd8 = 0;
          uStack_dd0 = 0;
          func_0x00010007e1e8(&uStack_de0,auStack_dc0,&lStack_da8,1);
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_de0,puVar12);
          puStack_dc8 = (undefined1 *)&uStack_de0;
          func_0x00010007e5dc(&puStack_dc8);
          if (cStack_da9 < '\0') {
            __ZdlPv(auStack_dc0[0]);
          }
        }
        puVar2 = puVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_da8) {
          ___stack_chk_fail();
          _objc_release(puVar9);
          _objc_release(puVar9);
          __Unwind_Resume();
          _objc_retain();
          puVar15 = puVar2;
          func_0x00010c131a00();
          if (puVar15 == (undefined *)0x1) {
            puVar15 = puVar2;
            func_0x00010c0f3b40(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
            _objc_release();
          }
          else {
            puVar15 = (undefined *)0x0;
          }
          _objc_release(puVar2);
          return puVar15;
        }
        return puVar2;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106265c84; end: 106265efb;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062665ec) */
/* WARNING: Removing unreachable block (ram,0x000106265ecc) */
/* WARNING: Removing unreachable block (ram,0x000106266144) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106265c84(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined1 *puStack_d28;
  undefined8 auStack_d20 [2];
  char cStack_d09;
  long lStack_d08;
  undefined8 *puStack_d00;
  undefined8 *puStack_cf8;
  undefined8 *puStack_cf0;
  long *plStack_ce8;
  undefined *puStack_ce0;
  undefined *puStack_cd8;
  undefined8 ***pppuStack_cd0;
  code *pcStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined1 *puStack_ca8;
  undefined8 auStack_ca0 [2];
  char cStack_c89;
  long lStack_c88;
  undefined8 *puStack_c80;
  undefined8 *puStack_c78;
  undefined8 *puStack_c70;
  long *plStack_c68;
  undefined *puStack_c60;
  undefined *puStack_c58;
  undefined8 ***pppuStack_c50;
  code *pcStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 *puStack_c28;
  undefined8 auStack_c20 [2];
  char cStack_c09;
  long lStack_c08;
  undefined8 *puStack_c00;
  undefined8 *puStack_bf8;
  undefined8 *puStack_bf0;
  undefined *puStack_be8;
  undefined8 *puStack_be0;
  undefined *puStack_bd8;
  undefined8 ***pppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 *puStack_ba0;
  undefined8 auStack_b98 [2];
  char cStack_b81;
  undefined8 auStack_b80 [2];
  char cStack_b69;
  long lStack_b68;
  undefined8 *puStack_b60;
  undefined8 *puStack_b58;
  undefined8 *puStack_b50;
  long *plStack_b48;
  undefined *puStack_b40;
  undefined *puStack_b38;
  undefined8 ***pppuStack_b30;
  code *pcStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined1 *puStack_b08;
  undefined8 auStack_b00 [2];
  char cStack_ae9;
  long lStack_ae8;
  undefined8 *puStack_ae0;
  undefined8 *puStack_ad8;
  undefined8 *puStack_ad0;
  long *plStack_ac8;
  undefined *puStack_ac0;
  undefined *puStack_ab8;
  undefined8 ***pppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined1 *puStack_a88;
  undefined8 auStack_a80 [2];
  char cStack_a69;
  long lStack_a68;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  undefined *puStack_a48;
  undefined8 *puStack_a40;
  undefined *puStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined1 *puStack_a08;
  undefined8 auStack_a00 [3];
  undefined1 auStack_9e8 [24];
  undefined8 auStack_9d0 [2];
  char cStack_9b9;
  long lStack_9b8;
  undefined8 *puStack_9b0;
  undefined8 *puStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined *puStack_990;
  undefined8 *puStack_988;
  undefined8 *puStack_980;
  undefined *puStack_978;
  undefined8 ***pppuStack_970;
  code *pcStack_968;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 *puStack_940;
  undefined8 auStack_938 [3];
  undefined1 auStack_920 [24];
  undefined1 auStack_908 [24];
  undefined8 auStack_8f0 [2];
  char cStack_8d9;
  long lStack_8d8;
  undefined8 ***pppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 *puStack_868;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 *puStack_830;
  long *plStack_828;
  undefined *puStack_820;
  undefined *puStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined1 *puStack_7e8;
  undefined8 auStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  long *plStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 *puStack_768;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  undefined *puStack_728;
  undefined8 *puStack_720;
  undefined *puStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [3];
  undefined1 auStack_6c8 [24];
  undefined8 auStack_6b0 [2];
  char cStack_699;
  long lStack_698;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined *puStack_528;
  undefined8 *puStack_520;
  undefined *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [3];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar7 = param_4;
  puVar11 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_110918580;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar3 = puVar5;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_c8 = FUN_106265efc;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar5 = puVar3;
  puVar6 = puVar7;
  puVar12 = puVar11;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_160;
    func_0x00010002b838(auStack_160,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar9 = &UNK_1109185d0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar16 = 0;
    puVar5 = puVar10;
    puVar6 = puVar11;
    do {
      if ((&cStack_119)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_180;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_1b0 = auStack_160;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_1b0);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar4 = puVar15;
  __Unwind_Resume();
  pcStack_188 = FUN_106266174;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar11 = puVar5;
  puVar10 = puVar6;
  puStack_1c0 = puVar3;
  puStack_1b8 = unaff_x23;
  puStack_1a8 = puVar15;
  puStack_1a0 = puVar7;
  puStack_198 = puVar2;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar9);
  _objc_retain(puVar5);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar8 = &UNK_110918620;
    unaff_x23 = &uStack_218;
    puVar11 = &uStack_218;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar16 = 0;
    puVar10 = puVar6;
    do {
      if ((&cStack_1c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar6 = &uStack_2e0;
  pcStack_228 = FUN_1062663a4;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar3 = puVar11;
  puVar7 = puVar10;
  puVar5 = puVar12;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_2c0;
    func_0x00010002b838(auStack_2c0,puVar2);
    pcVar1 = "true";
    if ((int)puVar11 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2a8,pcVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar3 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_290,puVar3);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
    puVar15 = &UNK_110918670;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar16 = 0;
    puVar3 = puVar6;
    puVar7 = puVar12;
    do {
      if ((&cStack_279)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_2e0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar10);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_2c0);
  _objc_release(puVar10);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar10 = &uStack_3a0;
  pcStack_2e8 = FUN_10626661c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar11 = puVar3;
  puVar6 = puVar7;
  puVar12 = puVar5;
  pppuStack_2f0 = &pppuStack_230;
  _objc_retain(puVar15);
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x25 = auStack_380;
    func_0x00010002b838(auStack_380,puVar2);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_368,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_350,puVar3);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_338,3);
    puVar9 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar16 = 0;
    puVar11 = puVar10;
    puVar6 = puVar5;
    do {
      if ((&cStack_339)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_3a0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_3d0 = auStack_380;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_3d0);
  _objc_release(puVar7);
  _objc_release(puVar15);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106266894;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar5 = puVar11;
  puVar10 = puVar6;
  puStack_3e0 = puVar3;
  puStack_3d8 = unaff_x23;
  puStack_3c8 = puVar2;
  puStack_3c0 = puVar7;
  puStack_3b8 = puVar15;
  pppuStack_3b0 = &pppuStack_2f0;
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_418,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar3 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_400,puVar3);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    puVar8 = &UNK_110918710;
    unaff_x23 = &uStack_438;
    puVar5 = &uStack_438;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar16 = 0;
    puVar10 = puVar6;
    do {
      if ((&cStack_3e9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar11);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar6 = &uStack_500;
  pcStack_448 = FUN_106266ac4;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar3 = puVar5;
  puVar7 = puVar10;
  puVar11 = puVar12;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_4e0;
    func_0x00010002b838(auStack_4e0,puVar2);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_4c8,pcVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_4b0,puVar5);
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_498,3);
    puVar15 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_4e8 = (undefined1 *)&uStack_500;
    func_0x00010007e5dc(&puStack_4e8);
    lVar16 = 0;
    puVar3 = puVar6;
    puVar7 = puVar12;
    do {
      if ((&cStack_499)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_500;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar10);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  puStack_530 = auStack_4e0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_530);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_508 = FUN_106266d3c;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar6 = puVar3;
  puVar13 = puVar7;
  puStack_540 = puVar5;
  puStack_538 = unaff_x23;
  puStack_528 = puVar2;
  puStack_520 = puVar10;
  puStack_518 = puVar8;
  pppuStack_510 = &pppuStack_450;
  _objc_retain(puVar15);
  _objc_retain(puVar3);
  puVar12 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar5 = auStack_578;
    func_0x00010002b838(auStack_578,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_560,puVar6);
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    func_0x00010007e1e8(&uStack_598,auStack_578,&lStack_548,2);
    puVar9 = &UNK_1109187b0;
    unaff_x23 = &uStack_598;
    puVar6 = &uStack_598;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_580 = unaff_x23;
    func_0x00010007e5dc(&puStack_580);
    lVar16 = 0;
    puVar12 = auStack_578;
    puVar13 = puVar7;
    do {
      if ((&cStack_549)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_561 < '\0') {
    __ZdlPv(auStack_578[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar15);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_5a8 = FUN_106266f6c;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar7 = puVar6;
  puVar10 = puVar13;
  puStack_5e0 = puVar5;
  puStack_5d8 = unaff_x23;
  puStack_5d0 = puVar12;
  puStack_5c8 = puVar2;
  puStack_5c0 = puVar3;
  puStack_5b8 = puVar15;
  pppuStack_5b0 = &pppuStack_510;
  _objc_retain(puVar9);
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_618,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_600,puVar3);
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5e8,2);
    puVar8 = &UNK_110918800;
    unaff_x23 = &uStack_638;
    puVar7 = &uStack_638;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_620 = unaff_x23;
    func_0x00010007e5dc(&puStack_620);
    lVar16 = 0;
    puVar10 = puVar13;
    do {
      if ((&cStack_5e9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_601 < '\0') {
    __ZdlPv(auStack_618[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar12 = &uStack_700;
  pcStack_648 = FUN_10626719c;
  lStack_698 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar5 = puVar7;
  puVar6 = puVar10;
  puVar3 = puVar11;
  pppuStack_650 = &pppuStack_5b0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_6e0;
    func_0x00010002b838(auStack_6e0,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_6c8,pcVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar7 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_6b0,puVar7);
    uStack_700 = 0;
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_698,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_6e8 = (undefined1 *)&uStack_700;
    func_0x00010007e5dc(&puStack_6e8);
    lVar16 = 0;
    puVar5 = puVar12;
    puVar6 = puVar11;
    do {
      if ((&cStack_699)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_700;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar10);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_698) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_6e0);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_780;
  pcStack_708 = FUN_106267414;
  lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar11 = puVar5;
  puStack_740 = puVar7;
  puStack_738 = unaff_x23;
  puStack_730 = auStack_6e0;
  puStack_728 = puVar2;
  puStack_720 = puVar10;
  puStack_718 = puVar8;
  pppuStack_710 = &pppuStack_650;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar12 = auStack_6e0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_760;
    func_0x00010002b838(auStack_760,puVar2);
    uStack_780 = 0;
    uStack_778 = 0;
    uStack_770 = 0;
    func_0x00010007e1e8(&uStack_780,auStack_760,&lStack_748,1);
    puVar9 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_768 = (undefined1 *)&uStack_780;
    func_0x00010007e5dc(&puStack_768);
    puVar11 = puVar13;
    puVar6 = puVar5;
    puVar12 = &uStack_780;
    if (cStack_749 < '\0') {
      __ZdlPv(auStack_760[0]);
      puVar11 = puVar13;
      puVar6 = puVar5;
      puVar12 = &uStack_780;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_800;
  pcStack_788 = FUN_106267588;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar5 = puVar11;
  puStack_7c0 = puVar7;
  puStack_7b8 = unaff_x23;
  puStack_7b0 = puVar12;
  plStack_7a8 = plVar17;
  puStack_7a0 = puVar2;
  puStack_798 = puVar15;
  pppuStack_790 = &pppuStack_710;
  _objc_retain(puVar9);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x23 = auStack_7e0;
    func_0x00010002b838(auStack_7e0,puVar2);
    uStack_800 = 0;
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    func_0x00010007e1e8(&uStack_800,auStack_7e0,&lStack_7c8,1);
    puVar8 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_7e8 = (undefined1 *)&uStack_800;
    func_0x00010007e5dc(&puStack_7e8);
    puVar5 = puVar10;
    puVar6 = puVar11;
    puVar12 = &uStack_800;
    if (cStack_7c9 < '\0') {
      __ZdlPv(auStack_7e0[0]);
      puVar5 = puVar10;
      puVar6 = puVar11;
      puVar12 = &uStack_800;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_880;
  pcStack_808 = FUN_1062676fc;
  lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar11 = puVar5;
  puStack_840 = puVar7;
  puStack_838 = unaff_x23;
  puStack_830 = puVar12;
  plStack_828 = plVar17;
  puStack_820 = puVar2;
  puStack_818 = puVar9;
  pppuStack_810 = &pppuStack_790;
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_860,puVar2);
    uStack_880 = 0;
    uStack_878 = 0;
    uStack_870 = 0;
    func_0x00010007e1e8(&uStack_880,auStack_860,&lStack_848,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_868 = (undefined1 *)&uStack_880;
    func_0x00010007e5dc(&puStack_868);
    puVar11 = puVar10;
    puVar6 = puVar5;
    if (cStack_849 < '\0') {
      __ZdlPv(auStack_860[0]);
      puVar11 = puVar10;
      puVar6 = puVar5;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  pcStack_888 = FUN_106267870;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar7 = puVar11;
  puVar5 = puVar6;
  puVar12 = puVar3;
  pppuStack_890 = &pppuStack_810;
  _objc_retain(puVar15);
  _objc_retain(puVar11);
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_938,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar7 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_920,puVar7);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar7 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_908,puVar7);
    unaff_x26 = auStack_938;
    unaff_x25 = auStack_8f0;
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_948 = 0;
    func_0x00010007e1e8(&uStack_958,auStack_938,&lStack_8d8,4);
    puVar9 = &UNK_110918990;
    puVar3 = &uStack_958;
    puVar7 = &uStack_958;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_940 = puVar3;
    func_0x00010007e5dc(&puStack_940);
    lVar16 = 0;
    puVar5 = param_6;
    do {
      if ((&cStack_8d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar6);
  _objc_release(puVar11);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_938);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_a20;
  pcStack_968 = FUN_106267b58;
  lStack_9b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar10 = puVar7;
  puVar13 = puVar5;
  puStack_9b0 = unaff_x26;
  puStack_9a8 = unaff_x25;
  puStack_9a0 = puVar3;
  puStack_998 = auStack_938;
  puStack_990 = puVar2;
  puStack_988 = puVar6;
  puStack_980 = puVar11;
  puStack_978 = puVar15;
  pppuStack_970 = &pppuStack_890;
  _objc_retain(puVar9);
  _objc_retain(puVar5);
  puVar3 = auStack_938;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_a00,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_9e8,pcVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar7 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_9d0,puVar7);
    uStack_a20 = 0;
    uStack_a18 = 0;
    uStack_a10 = 0;
    func_0x00010007e1e8(&uStack_a20,auStack_a00,&lStack_9b8,3);
    puVar8 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_a20,puVar12);
    puStack_a08 = (undefined1 *)&uStack_a20;
    func_0x00010007e5dc(&puStack_a08);
    lVar16 = 0;
    puVar10 = puVar14;
    puVar13 = puVar12;
    do {
      if ((&cStack_9b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_9d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar3 = &uStack_a20;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar5);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != auStack_a00);
  _objc_release(puVar5);
  _objc_release(puVar9);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar6 = &uStack_aa0;
  pcStack_a28 = FUN_106267dd0;
  lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar11 = puVar10;
  puStack_a60 = puVar7;
  puStack_a58 = puVar3;
  puStack_a50 = auStack_a00;
  puStack_a48 = puVar2;
  puStack_a40 = puVar5;
  puStack_a38 = puVar9;
  pppuStack_a30 = &pppuStack_970;
  _objc_retain(puVar8);
  plVar17 = (long *)0x0;
  puVar5 = auStack_a00;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar3 = auStack_a80;
    func_0x00010002b838(auStack_a80,puVar2);
    uStack_aa0 = 0;
    uStack_a98 = 0;
    uStack_a90 = 0;
    func_0x00010007e1e8(&uStack_aa0,auStack_a80,&lStack_a68,1);
    puVar15 = &UNK_110918a30;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_aa0,puVar10);
    puStack_a88 = (undefined1 *)&uStack_aa0;
    func_0x00010007e5dc(&puStack_a88);
    puVar11 = puVar6;
    puVar13 = puVar10;
    puVar5 = &uStack_aa0;
    if (cStack_a69 < '\0') {
      __ZdlPv(auStack_a80[0]);
      puVar11 = puVar6;
      puVar13 = puVar10;
      puVar5 = &uStack_aa0;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a68) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_b20;
    pcStack_aa8 = FUN_106267f44;
    lStack_ae8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar6 = puVar11;
    puStack_ae0 = puVar7;
    puStack_ad8 = puVar3;
    puStack_ad0 = puVar5;
    plStack_ac8 = plVar17;
    puStack_ac0 = puVar2;
    puStack_ab8 = puVar8;
    pppuStack_ab0 = &pppuStack_a30;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar3 = auStack_b00;
      func_0x00010002b838(auStack_b00,puVar2);
      uStack_b20 = 0;
      uStack_b18 = 0;
      uStack_b10 = 0;
      func_0x00010007e1e8(&uStack_b20,auStack_b00,&lStack_ae8,1);
      puVar9 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_b20,puVar11);
      puStack_b08 = (undefined1 *)&uStack_b20;
      func_0x00010007e5dc(&puStack_b08);
      puVar6 = puVar12;
      puVar13 = puVar11;
      puVar5 = &uStack_b20;
      if (cStack_ae9 < '\0') {
        __ZdlPv(auStack_b00[0]);
        puVar6 = puVar12;
        puVar13 = puVar11;
        puVar5 = &uStack_b20;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_b28 = FUN_1062680b8;
    lStack_b68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar9;
    puVar11 = puVar6;
    puStack_b60 = puVar7;
    puStack_b58 = puVar3;
    puStack_b50 = puVar5;
    plStack_b48 = plVar17;
    puStack_b40 = puVar2;
    puStack_b38 = puVar15;
    pppuStack_b30 = &pppuStack_ab0;
    _objc_retain(puVar9);
    _objc_retain(puVar6);
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      puVar7 = auStack_b98;
      func_0x00010002b838(auStack_b98,puVar2);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar3 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_b80,puVar3);
      uStack_bb8 = 0;
      uStack_bb0 = 0;
      uStack_ba8 = 0;
      func_0x00010007e1e8(&uStack_bb8,auStack_b98,&lStack_b68,2);
      puVar8 = &UNK_110918ad0;
      puVar3 = &uStack_bb8;
      puVar11 = &uStack_bb8;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar11,puVar13);
      puStack_ba0 = puVar3;
      func_0x00010007e5dc(&puStack_ba0);
      lVar16 = 0;
      puVar5 = auStack_b98;
      do {
        if ((&cStack_b69)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b80 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar6);
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b68) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      if (cStack_b81 < '\0') {
        __ZdlPv(auStack_b98[0]);
      }
      _objc_release(puVar6);
      _objc_release(puVar9);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar10 = &uStack_c40;
      pcStack_bc8 = FUN_1062682e8;
      lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar8;
      puVar12 = puVar11;
      puStack_c00 = puVar7;
      puStack_bf8 = puVar3;
      puStack_bf0 = puVar5;
      puStack_be8 = puVar2;
      puStack_be0 = puVar6;
      puStack_bd8 = puVar9;
      pppuStack_bd0 = &pppuStack_b30;
      _objc_retain(puVar8);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        puVar3 = auStack_c20;
        func_0x00010002b838(auStack_c20,puVar2);
        uStack_c40 = 0;
        uStack_c38 = 0;
        uStack_c30 = 0;
        func_0x00010007e1e8(&uStack_c40,auStack_c20,&lStack_c08,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_c40,puVar11);
        puStack_c28 = (undefined1 *)&uStack_c40;
        func_0x00010007e5dc(&puStack_c28);
        puVar12 = puVar10;
        puVar5 = &uStack_c40;
        if (cStack_c09 < '\0') {
          __ZdlPv(auStack_c20[0]);
          puVar12 = puVar10;
          puVar5 = &uStack_c40;
        }
      }
      puVar2 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c08) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar6 = &uStack_cc0;
      pcStack_c48 = FUN_10626845c;
      lStack_c88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar15;
      puVar11 = puVar12;
      puStack_c80 = puVar7;
      puStack_c78 = puVar3;
      puStack_c70 = puVar5;
      plStack_c68 = plVar17;
      puStack_c60 = puVar2;
      puStack_c58 = puVar8;
      pppuStack_c50 = &pppuStack_bd0;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar3 = auStack_ca0;
        func_0x00010002b838(auStack_ca0,puVar2);
        uStack_cc0 = 0;
        uStack_cb8 = 0;
        uStack_cb0 = 0;
        func_0x00010007e1e8(&uStack_cc0,auStack_ca0,&lStack_c88,1);
        puVar9 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_cc0,puVar12);
        puStack_ca8 = (undefined1 *)&uStack_cc0;
        func_0x00010007e5dc(&puStack_ca8);
        puVar11 = puVar6;
        puVar5 = &uStack_cc0;
        if (cStack_c89 < '\0') {
          __ZdlPv(auStack_ca0[0]);
          puVar11 = puVar6;
          puVar5 = &uStack_cc0;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c88) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar8 = puVar2;
      __Unwind_Resume();
      pcStack_cc8 = FUN_1062685d0;
      lStack_d08 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_d00 = puVar7;
      puStack_cf8 = puVar3;
      puStack_cf0 = puVar5;
      plStack_ce8 = plVar17;
      puStack_ce0 = puVar2;
      puStack_cd8 = puVar15;
      pppuStack_cd0 = &pppuStack_c50;
      _objc_retain(puVar9);
      if (puVar8 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar8 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_d20,puVar2);
        uStack_d40 = 0;
        uStack_d38 = 0;
        uStack_d30 = 0;
        func_0x00010007e1e8(&uStack_d40,auStack_d20,&lStack_d08,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_d40,puVar11);
        puStack_d28 = (undefined1 *)&uStack_d40;
        func_0x00010007e5dc(&puStack_d28);
        if (cStack_d09 < '\0') {
          __ZdlPv(auStack_d20[0]);
        }
      }
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d08) {
        ___stack_chk_fail();
        _objc_release(puVar9);
        _objc_release(puVar9);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106265efc; end: 106266173;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062665ec) */
/* WARNING: Removing unreachable block (ram,0x000106266144) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106265efc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined1 *puStack_c68;
  undefined8 auStack_c60 [2];
  char cStack_c49;
  long lStack_c48;
  undefined8 *puStack_c40;
  undefined8 *puStack_c38;
  undefined8 *puStack_c30;
  long *plStack_c28;
  undefined *puStack_c20;
  undefined *puStack_c18;
  undefined8 ***pppuStack_c10;
  code *pcStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 *puStack_be8;
  undefined8 auStack_be0 [2];
  char cStack_bc9;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  long *plStack_ba8;
  undefined *puStack_ba0;
  undefined *puStack_b98;
  undefined8 ***pppuStack_b90;
  code *pcStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined1 *puStack_b68;
  undefined8 auStack_b60 [2];
  char cStack_b49;
  long lStack_b48;
  undefined8 *puStack_b40;
  undefined8 *puStack_b38;
  undefined8 *puStack_b30;
  undefined *puStack_b28;
  undefined8 *puStack_b20;
  undefined *puStack_b18;
  undefined8 ***pppuStack_b10;
  code *pcStack_b08;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 *puStack_ae0;
  undefined8 auStack_ad8 [2];
  char cStack_ac1;
  undefined8 auStack_ac0 [2];
  char cStack_aa9;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 *puStack_a98;
  undefined8 *puStack_a90;
  long *plStack_a88;
  undefined *puStack_a80;
  undefined *puStack_a78;
  undefined8 ***pppuStack_a70;
  code *pcStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined1 *puStack_a48;
  undefined8 auStack_a40 [2];
  char cStack_a29;
  long lStack_a28;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 *puStack_a10;
  long *plStack_a08;
  undefined *puStack_a00;
  undefined *puStack_9f8;
  undefined8 ***pppuStack_9f0;
  code *pcStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined1 *puStack_9c8;
  undefined8 auStack_9c0 [2];
  char cStack_9a9;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 *puStack_990;
  undefined *puStack_988;
  undefined8 *puStack_980;
  undefined *puStack_978;
  undefined8 ***pppuStack_970;
  code *pcStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined1 *puStack_948;
  undefined8 auStack_940 [3];
  undefined1 auStack_928 [24];
  undefined8 auStack_910 [2];
  char cStack_8f9;
  long lStack_8f8;
  undefined8 *puStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined *puStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 *puStack_8c0;
  undefined *puStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 *puStack_880;
  undefined8 auStack_878 [3];
  undefined1 auStack_860 [24];
  undefined1 auStack_848 [24];
  undefined8 auStack_830 [2];
  char cStack_819;
  long lStack_818;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  long *plStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  long *plStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 *puStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined *puStack_668;
  undefined8 *puStack_660;
  undefined *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [3];
  undefined1 auStack_608 [24];
  undefined8 auStack_5f0 [2];
  char cStack_5d9;
  long lStack_5d8;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined *puStack_508;
  undefined8 *puStack_500;
  undefined *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined *puStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [3];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  puVar8 = param_4;
  puVar11 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_1109185d0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar5 = puVar4;
    puVar8 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar15;
  __Unwind_Resume();
  pcStack_c8 = FUN_106266174;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar4 = puVar5;
  puVar14 = puVar8;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_e8 = puVar15;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar15);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar4 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_120,puVar4);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar9 = &UNK_110918620;
    unaff_x23 = &uStack_158;
    puVar4 = &uStack_158;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_140 = unaff_x23;
    func_0x00010007e5dc(&puStack_140);
    lVar16 = 0;
    puVar14 = puVar8;
    do {
      if ((&cStack_109)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar5);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar10 = &uStack_220;
  pcStack_168 = FUN_1062663a4;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar9;
  puVar5 = puVar4;
  puVar8 = puVar14;
  puVar7 = puVar11;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar9);
  _objc_retain(puVar14);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x25 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    pcVar1 = "true";
    if ((int)puVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar5 = puVar14;
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_1d0,puVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar2 = &UNK_110918670;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar16 = 0;
    puVar5 = puVar10;
    puVar8 = puVar11;
    do {
      if ((&cStack_1b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_220;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar14);
  puVar15 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_200);
  _objc_release(puVar14);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar10 = &uStack_2e0;
  pcStack_228 = FUN_10626661c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar11 = puVar5;
  puVar4 = puVar8;
  puVar14 = puVar7;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_2c0;
    func_0x00010002b838(auStack_2c0,puVar15);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2a8,pcVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_290,puVar5);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
    puVar9 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar16 = 0;
    puVar11 = puVar10;
    puVar4 = puVar7;
    do {
      if ((&cStack_279)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_2e0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar8);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_310 = auStack_2c0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_310);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar6 = puVar15;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106266894;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar7 = puVar11;
  puVar10 = puVar4;
  puStack_320 = puVar5;
  puStack_318 = unaff_x23;
  puStack_308 = puVar15;
  puStack_300 = puVar8;
  puStack_2f8 = puVar2;
  pppuStack_2f0 = &pppuStack_230;
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_358,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar5 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_340,puVar5);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar3 = &UNK_110918710;
    unaff_x23 = &uStack_378;
    puVar7 = &uStack_378;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_360 = unaff_x23;
    func_0x00010007e5dc(&puStack_360);
    lVar16 = 0;
    puVar10 = puVar4;
    do {
      if ((&cStack_329)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar11);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar4 = &uStack_440;
  pcStack_388 = FUN_106266ac4;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar5 = puVar7;
  puVar8 = puVar10;
  puVar11 = puVar14;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x25 = auStack_420;
    func_0x00010002b838(auStack_420,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_408,pcVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar7 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_3f0,puVar7);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_3d8,3);
    puVar15 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    lVar16 = 0;
    puVar5 = puVar4;
    puVar8 = puVar14;
    do {
      if ((&cStack_3d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_440;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar10);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  puStack_470 = auStack_420;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_470);
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_448 = FUN_106266d3c;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar4 = puVar5;
  puVar12 = puVar8;
  puStack_480 = puVar7;
  puStack_478 = unaff_x23;
  puStack_468 = puVar2;
  puStack_460 = puVar10;
  puStack_458 = puVar3;
  pppuStack_450 = &pppuStack_390;
  _objc_retain(puVar15);
  _objc_retain(puVar5);
  puVar14 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar7 = auStack_4b8;
    func_0x00010002b838(auStack_4b8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar4 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_4a0,puVar4);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
    puVar9 = &UNK_1109187b0;
    unaff_x23 = &uStack_4d8;
    puVar4 = &uStack_4d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4c0);
    lVar16 = 0;
    puVar14 = auStack_4b8;
    puVar12 = puVar8;
    do {
      if ((&cStack_489)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar15);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_4e8 = FUN_106266f6c;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar8 = puVar4;
  puVar10 = puVar12;
  puStack_520 = puVar7;
  puStack_518 = unaff_x23;
  puStack_510 = puVar14;
  puStack_508 = puVar2;
  puStack_500 = puVar5;
  puStack_4f8 = puVar15;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(puVar9);
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_558,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar5 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_540,puVar5);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,auStack_558,&lStack_528,2);
    puVar3 = &UNK_110918800;
    unaff_x23 = &uStack_578;
    puVar8 = &uStack_578;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_560 = unaff_x23;
    func_0x00010007e5dc(&puStack_560);
    lVar16 = 0;
    puVar10 = puVar12;
    do {
      if ((&cStack_529)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar7 = &uStack_640;
  pcStack_588 = FUN_10626719c;
  lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar4 = puVar8;
  puVar14 = puVar10;
  puVar5 = puVar11;
  pppuStack_590 = &pppuStack_4f0;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x25 = auStack_620;
    func_0x00010002b838(auStack_620,puVar2);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_608,pcVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar8 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_5f0,puVar8);
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_5d8,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_628 = (undefined1 *)&uStack_640;
    func_0x00010007e5dc(&puStack_628);
    lVar16 = 0;
    puVar4 = puVar7;
    puVar14 = puVar11;
    do {
      if ((&cStack_5d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_640;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar10);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_620);
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_6c0;
  pcStack_648 = FUN_106267414;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar11 = puVar4;
  puStack_680 = puVar8;
  puStack_678 = unaff_x23;
  puStack_670 = auStack_620;
  puStack_668 = puVar2;
  puStack_660 = puVar10;
  puStack_658 = puVar3;
  pppuStack_650 = &pppuStack_590;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar7 = auStack_620;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_6a0;
    func_0x00010002b838(auStack_6a0,puVar2);
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    func_0x00010007e1e8(&uStack_6c0,auStack_6a0,&lStack_688,1);
    puVar9 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_6a8 = (undefined1 *)&uStack_6c0;
    func_0x00010007e5dc(&puStack_6a8);
    puVar11 = puVar12;
    puVar14 = puVar4;
    puVar7 = &uStack_6c0;
    if (cStack_689 < '\0') {
      __ZdlPv(auStack_6a0[0]);
      puVar11 = puVar12;
      puVar14 = puVar4;
      puVar7 = &uStack_6c0;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_740;
  pcStack_6c8 = FUN_106267588;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar4 = puVar11;
  puStack_700 = puVar8;
  puStack_6f8 = unaff_x23;
  puStack_6f0 = puVar7;
  plStack_6e8 = plVar17;
  puStack_6e0 = puVar2;
  puStack_6d8 = puVar15;
  pppuStack_6d0 = &pppuStack_650;
  _objc_retain(puVar9);
  plVar17 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x23 = auStack_720;
    func_0x00010002b838(auStack_720,puVar2);
    uStack_740 = 0;
    uStack_738 = 0;
    uStack_730 = 0;
    func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_708,1);
    puVar3 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_728 = (undefined1 *)&uStack_740;
    func_0x00010007e5dc(&puStack_728);
    puVar4 = puVar10;
    puVar14 = puVar11;
    puVar7 = &uStack_740;
    if (cStack_709 < '\0') {
      __ZdlPv(auStack_720[0]);
      puVar4 = puVar10;
      puVar14 = puVar11;
      puVar7 = &uStack_740;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_7c0;
  pcStack_748 = FUN_1062676fc;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar11 = puVar4;
  puStack_780 = puVar8;
  puStack_778 = unaff_x23;
  puStack_770 = puVar7;
  plStack_768 = plVar17;
  puStack_760 = puVar2;
  puStack_758 = puVar9;
  pppuStack_750 = &pppuStack_6d0;
  _objc_retain(puVar3);
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_7a0,puVar2);
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    func_0x00010007e1e8(&uStack_7c0,auStack_7a0,&lStack_788,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_7a8 = (undefined1 *)&uStack_7c0;
    func_0x00010007e5dc(&puStack_7a8);
    puVar11 = puVar10;
    puVar14 = puVar4;
    if (cStack_789 < '\0') {
      __ZdlPv(auStack_7a0[0]);
      puVar11 = puVar10;
      puVar14 = puVar4;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  pcStack_7c8 = FUN_106267870;
  lStack_818 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar8 = puVar11;
  puVar4 = puVar14;
  puVar7 = puVar5;
  pppuStack_7d0 = &pppuStack_750;
  _objc_retain(puVar15);
  _objc_retain(puVar11);
  _objc_retain(puVar14);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_878,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar8 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_860,puVar8);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar8 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_848,puVar8);
    unaff_x26 = auStack_878;
    unaff_x25 = auStack_830;
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_898 = 0;
    uStack_890 = 0;
    uStack_888 = 0;
    func_0x00010007e1e8(&uStack_898,auStack_878,&lStack_818,4);
    puVar9 = &UNK_110918990;
    puVar5 = &uStack_898;
    puVar8 = &uStack_898;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_880 = puVar5;
    func_0x00010007e5dc(&puStack_880);
    lVar16 = 0;
    puVar4 = param_6;
    do {
      if ((&cStack_819)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_830 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar14);
  _objc_release(puVar11);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_818) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_878);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_960;
  pcStack_8a8 = FUN_106267b58;
  lStack_8f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar10 = puVar8;
  puVar12 = puVar4;
  puStack_8f0 = unaff_x26;
  puStack_8e8 = unaff_x25;
  puStack_8e0 = puVar5;
  puStack_8d8 = auStack_878;
  puStack_8d0 = puVar2;
  puStack_8c8 = puVar14;
  puStack_8c0 = puVar11;
  puStack_8b8 = puVar15;
  pppuStack_8b0 = &pppuStack_7d0;
  _objc_retain(puVar9);
  _objc_retain(puVar4);
  puVar5 = auStack_878;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_940,puVar2);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_928,pcVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar8 = puVar4;
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_910,puVar8);
    uStack_960 = 0;
    uStack_958 = 0;
    uStack_950 = 0;
    func_0x00010007e1e8(&uStack_960,auStack_940,&lStack_8f8,3);
    puVar3 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_960,puVar7);
    puStack_948 = (undefined1 *)&uStack_960;
    func_0x00010007e5dc(&puStack_948);
    lVar16 = 0;
    puVar10 = puVar13;
    puVar12 = puVar7;
    do {
      if ((&cStack_8f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_910 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar5 = &uStack_960;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar4);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  do {
    puVar5 = puVar5 + -3;
  } while (puVar5 != auStack_940);
  _objc_release(puVar4);
  _objc_release(puVar9);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_9e0;
  pcStack_968 = FUN_106267dd0;
  lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar11 = puVar10;
  puStack_9a0 = puVar8;
  puStack_998 = puVar5;
  puStack_990 = auStack_940;
  puStack_988 = puVar2;
  puStack_980 = puVar4;
  puStack_978 = puVar9;
  pppuStack_970 = &pppuStack_8b0;
  _objc_retain(puVar3);
  plVar17 = (long *)0x0;
  puVar4 = auStack_940;
  if (puVar6 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar5 = auStack_9c0;
    func_0x00010002b838(auStack_9c0,puVar2);
    uStack_9e0 = 0;
    uStack_9d8 = 0;
    uStack_9d0 = 0;
    func_0x00010007e1e8(&uStack_9e0,auStack_9c0,&lStack_9a8,1);
    puVar15 = &UNK_110918a30;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_9e0,puVar10);
    puStack_9c8 = (undefined1 *)&uStack_9e0;
    func_0x00010007e5dc(&puStack_9c8);
    puVar11 = puVar14;
    puVar12 = puVar10;
    puVar4 = &uStack_9e0;
    if (cStack_9a9 < '\0') {
      __ZdlPv(auStack_9c0[0]);
      puVar11 = puVar14;
      puVar12 = puVar10;
      puVar4 = &uStack_9e0;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9a8) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar7 = &uStack_a60;
    pcStack_9e8 = FUN_106267f44;
    lStack_a28 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar14 = puVar11;
    puStack_a20 = puVar8;
    puStack_a18 = puVar5;
    puStack_a10 = puVar4;
    plStack_a08 = plVar17;
    puStack_a00 = puVar2;
    puStack_9f8 = puVar3;
    pppuStack_9f0 = &pppuStack_970;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar5 = auStack_a40;
      func_0x00010002b838(auStack_a40,puVar2);
      uStack_a60 = 0;
      uStack_a58 = 0;
      uStack_a50 = 0;
      func_0x00010007e1e8(&uStack_a60,auStack_a40,&lStack_a28,1);
      puVar9 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_a60,puVar11);
      puStack_a48 = (undefined1 *)&uStack_a60;
      func_0x00010007e5dc(&puStack_a48);
      puVar14 = puVar7;
      puVar12 = puVar11;
      puVar4 = &uStack_a60;
      if (cStack_a29 < '\0') {
        __ZdlPv(auStack_a40[0]);
        puVar14 = puVar7;
        puVar12 = puVar11;
        puVar4 = &uStack_a60;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a28) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_a68 = FUN_1062680b8;
    lStack_aa8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar9;
    puVar11 = puVar14;
    puStack_aa0 = puVar8;
    puStack_a98 = puVar5;
    puStack_a90 = puVar4;
    plStack_a88 = plVar17;
    puStack_a80 = puVar2;
    puStack_a78 = puVar15;
    pppuStack_a70 = &pppuStack_9f0;
    _objc_retain(puVar9);
    _objc_retain(puVar14);
    puVar4 = (undefined8 *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      puVar8 = auStack_ad8;
      func_0x00010002b838(auStack_ad8,puVar2);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar5 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_ac0,puVar5);
      uStack_af8 = 0;
      uStack_af0 = 0;
      uStack_ae8 = 0;
      func_0x00010007e1e8(&uStack_af8,auStack_ad8,&lStack_aa8,2);
      puVar3 = &UNK_110918ad0;
      puVar5 = &uStack_af8;
      puVar11 = &uStack_af8;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar11,puVar12);
      puStack_ae0 = puVar5;
      func_0x00010007e5dc(&puStack_ae0);
      lVar16 = 0;
      puVar4 = auStack_ad8;
      do {
        if ((&cStack_aa9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_ac0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar14);
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_aa8) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_ac1 < '\0') {
        __ZdlPv(auStack_ad8[0]);
      }
      _objc_release(puVar14);
      _objc_release(puVar9);
      puVar6 = puVar2;
      __Unwind_Resume();
      puVar10 = &uStack_b80;
      pcStack_b08 = FUN_1062682e8;
      lStack_b48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar3;
      puVar7 = puVar11;
      puStack_b40 = puVar8;
      puStack_b38 = puVar5;
      puStack_b30 = puVar4;
      puStack_b28 = puVar2;
      puStack_b20 = puVar14;
      puStack_b18 = puVar9;
      pppuStack_b10 = &pppuStack_a70;
      _objc_retain(puVar3);
      plVar17 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar6 + 8);
        _objc_retain(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        puVar5 = auStack_b60;
        func_0x00010002b838(auStack_b60,puVar2);
        uStack_b80 = 0;
        uStack_b78 = 0;
        uStack_b70 = 0;
        func_0x00010007e1e8(&uStack_b80,auStack_b60,&lStack_b48,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_b80,puVar11);
        puStack_b68 = (undefined1 *)&uStack_b80;
        func_0x00010007e5dc(&puStack_b68);
        puVar7 = puVar10;
        puVar4 = &uStack_b80;
        if (cStack_b49 < '\0') {
          __ZdlPv(auStack_b60[0]);
          puVar7 = puVar10;
          puVar4 = &uStack_b80;
        }
      }
      puVar2 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b48) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      puVar6 = puVar2;
      __Unwind_Resume();
      puVar14 = &uStack_c00;
      pcStack_b88 = FUN_10626845c;
      lStack_bc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar15;
      puVar11 = puVar7;
      puStack_bc0 = puVar8;
      puStack_bb8 = puVar5;
      puStack_bb0 = puVar4;
      plStack_ba8 = plVar17;
      puStack_ba0 = puVar2;
      puStack_b98 = puVar3;
      pppuStack_b90 = &pppuStack_b10;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar6 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar5 = auStack_be0;
        func_0x00010002b838(auStack_be0,puVar2);
        uStack_c00 = 0;
        uStack_bf8 = 0;
        uStack_bf0 = 0;
        func_0x00010007e1e8(&uStack_c00,auStack_be0,&lStack_bc8,1);
        puVar9 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_c00,puVar7);
        puStack_be8 = (undefined1 *)&uStack_c00;
        func_0x00010007e5dc(&puStack_be8);
        puVar11 = puVar14;
        puVar4 = &uStack_c00;
        if (cStack_bc9 < '\0') {
          __ZdlPv(auStack_be0[0]);
          puVar11 = puVar14;
          puVar4 = &uStack_c00;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bc8) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar3 = puVar2;
      __Unwind_Resume();
      pcStack_c08 = FUN_1062685d0;
      lStack_c48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_c40 = puVar8;
      puStack_c38 = puVar5;
      puStack_c30 = puVar4;
      plStack_c28 = plVar17;
      puStack_c20 = puVar2;
      puStack_c18 = puVar15;
      pppuStack_c10 = &pppuStack_b90;
      _objc_retain(puVar9);
      if (puVar3 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar3 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_c60,puVar2);
        uStack_c80 = 0;
        uStack_c78 = 0;
        uStack_c70 = 0;
        func_0x00010007e1e8(&uStack_c80,auStack_c60,&lStack_c48,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_c80,puVar11);
        puStack_c68 = (undefined1 *)&uStack_c80;
        func_0x00010007e5dc(&puStack_c68);
        if (cStack_c49 < '\0') {
          __ZdlPv(auStack_c60[0]);
        }
      }
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c48) {
        ___stack_chk_fail();
        _objc_release(puVar9);
        _objc_release(puVar9);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106266174; end: 1062663a3;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062665ec) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106266174(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined1 *puStack_ba8;
  undefined8 auStack_ba0 [2];
  char cStack_b89;
  long lStack_b88;
  undefined8 *puStack_b80;
  undefined8 *puStack_b78;
  undefined8 *puStack_b70;
  long *plStack_b68;
  undefined *puStack_b60;
  undefined *puStack_b58;
  undefined8 ***pppuStack_b50;
  code *pcStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined1 *puStack_b28;
  undefined8 auStack_b20 [2];
  char cStack_b09;
  long lStack_b08;
  undefined8 *puStack_b00;
  undefined8 *puStack_af8;
  undefined8 *puStack_af0;
  long *plStack_ae8;
  undefined *puStack_ae0;
  undefined *puStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined1 *puStack_aa8;
  undefined8 auStack_aa0 [2];
  char cStack_a89;
  long lStack_a88;
  undefined8 *puStack_a80;
  undefined8 *puStack_a78;
  undefined8 *puStack_a70;
  undefined *puStack_a68;
  undefined8 *puStack_a60;
  undefined *puStack_a58;
  undefined8 ***pppuStack_a50;
  code *pcStack_a48;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 *puStack_a20;
  undefined8 auStack_a18 [2];
  char cStack_a01;
  undefined8 auStack_a00 [2];
  char cStack_9e9;
  long lStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  long *plStack_9c8;
  undefined *puStack_9c0;
  undefined *puStack_9b8;
  undefined8 ***pppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 *puStack_988;
  undefined8 auStack_980 [2];
  char cStack_969;
  long lStack_968;
  undefined8 *puStack_960;
  undefined8 *puStack_958;
  undefined8 *puStack_950;
  long *plStack_948;
  undefined *puStack_940;
  undefined *puStack_938;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 *puStack_8d0;
  undefined *puStack_8c8;
  undefined8 *puStack_8c0;
  undefined *puStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 *puStack_888;
  undefined8 auStack_880 [3];
  undefined1 auStack_868 [24];
  undefined8 auStack_850 [2];
  char cStack_839;
  long lStack_838;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined *puStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined *puStack_7f8;
  undefined8 ***pppuStack_7f0;
  code *pcStack_7e8;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 auStack_7b8 [3];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined8 auStack_770 [2];
  char cStack_759;
  long lStack_758;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined *puStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [3];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined *puStack_448;
  undefined8 *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar2 = param_2;
  puVar3 = param_3;
  puVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_110918620;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar16 = 0;
    puVar8 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(param_3);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar11 = &uStack_160;
  pcStack_a8 = FUN_1062663a4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar4 = puVar3;
  puVar7 = puVar8;
  puVar6 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_140;
    func_0x00010002b838(auStack_140,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar10 = &UNK_110918670;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar16 = 0;
    puVar4 = puVar11;
    puVar7 = param_5;
    do {
      if ((&cStack_f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar8);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_140);
  _objc_release(puVar8);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar12 = &uStack_220;
  pcStack_168 = FUN_10626661c;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar4;
  puVar8 = puVar7;
  puVar11 = puVar6;
  ppuStack_170 = &puStack_b0;
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x25 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    pcVar1 = "true";
    if ((int)puVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1d0,puVar4);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar2 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar16 = 0;
    puVar3 = puVar12;
    puVar8 = puVar6;
    do {
      if ((&cStack_1b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_220;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar15 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_250 = auStack_200;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_250);
  _objc_release(puVar7);
  _objc_release(puVar10);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_228 = FUN_106266894;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar6 = puVar3;
  puVar12 = puVar8;
  puStack_260 = puVar4;
  puStack_258 = unaff_x23;
  puStack_248 = puVar15;
  puStack_240 = puVar7;
  puStack_238 = puVar10;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_298,puVar15);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_280,puVar4);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar9 = &UNK_110918710;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar16 = 0;
    puVar12 = puVar8;
    do {
      if ((&cStack_269)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar7 = &uStack_380;
  pcStack_2c8 = FUN_106266ac4;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar9;
  puVar3 = puVar6;
  puVar8 = puVar12;
  puVar4 = puVar11;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x25 = auStack_360;
    func_0x00010002b838(auStack_360,puVar2);
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_348,pcVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar6 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_330,puVar6);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_318,3);
    puVar2 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar16 = 0;
    puVar3 = puVar7;
    puVar8 = puVar11;
    do {
      if ((&cStack_319)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_380;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar12);
  puVar15 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  puStack_3b0 = auStack_360;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_3b0);
  _objc_release(puVar12);
  _objc_release(puVar9);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_388 = FUN_106266d3c;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar7 = puVar3;
  puVar13 = puVar8;
  puStack_3c0 = puVar6;
  puStack_3b8 = unaff_x23;
  puStack_3a8 = puVar15;
  puStack_3a0 = puVar12;
  puStack_398 = puVar9;
  pppuStack_390 = &pppuStack_2d0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar11 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    puVar6 = auStack_3f8;
    func_0x00010002b838(auStack_3f8,puVar15);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar7 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_3e0,puVar7);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
    puVar10 = &UNK_1109187b0;
    unaff_x23 = &uStack_418;
    puVar7 = &uStack_418;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_400 = unaff_x23;
    func_0x00010007e5dc(&puStack_400);
    lVar16 = 0;
    puVar11 = auStack_3f8;
    puVar13 = puVar8;
    do {
      if ((&cStack_3c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_3e1 < '\0') {
    __ZdlPv(auStack_3f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_428 = FUN_106266f6c;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar10;
  puVar8 = puVar7;
  puVar12 = puVar13;
  puStack_460 = puVar6;
  puStack_458 = unaff_x23;
  puStack_450 = puVar11;
  puStack_448 = puVar15;
  puStack_440 = puVar3;
  puStack_438 = puVar2;
  pppuStack_430 = &pppuStack_390;
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_498,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_480,puVar3);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    func_0x00010007e1e8(&uStack_4b8,auStack_498,&lStack_468,2);
    puVar9 = &UNK_110918800;
    unaff_x23 = &uStack_4b8;
    puVar8 = &uStack_4b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_4a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4a0);
    lVar16 = 0;
    puVar12 = puVar13;
    do {
      if ((&cStack_469)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar11 = &uStack_580;
  pcStack_4c8 = FUN_10626719c;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar9;
  puVar7 = puVar8;
  puVar6 = puVar12;
  puVar3 = puVar4;
  pppuStack_4d0 = &pppuStack_430;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x25 = auStack_560;
    func_0x00010002b838(auStack_560,puVar2);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_548,pcVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar8 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_530,puVar8);
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_518,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_568 = (undefined1 *)&uStack_580;
    func_0x00010007e5dc(&puStack_568);
    lVar16 = 0;
    puVar7 = puVar11;
    puVar6 = puVar4;
    do {
      if ((&cStack_519)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_580;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar12);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_560);
  _objc_release(puVar12);
  _objc_release(puVar9);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_600;
  pcStack_588 = FUN_106267414;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar15;
  puVar4 = puVar7;
  puStack_5c0 = puVar8;
  puStack_5b8 = unaff_x23;
  puStack_5b0 = auStack_560;
  puStack_5a8 = puVar2;
  puStack_5a0 = puVar12;
  puStack_598 = puVar9;
  pppuStack_590 = &pppuStack_4d0;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar11 = auStack_560;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_5e0;
    func_0x00010002b838(auStack_5e0,puVar2);
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    func_0x00010007e1e8(&uStack_600,auStack_5e0,&lStack_5c8,1);
    puVar10 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_5e8 = (undefined1 *)&uStack_600;
    func_0x00010007e5dc(&puStack_5e8);
    puVar4 = puVar13;
    puVar6 = puVar7;
    puVar11 = &uStack_600;
    if (cStack_5c9 < '\0') {
      __ZdlPv(auStack_5e0[0]);
      puVar4 = puVar13;
      puVar6 = puVar7;
      puVar11 = &uStack_600;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_680;
  pcStack_608 = FUN_106267588;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar10;
  puVar7 = puVar4;
  puStack_640 = puVar8;
  puStack_638 = unaff_x23;
  puStack_630 = puVar11;
  plStack_628 = plVar17;
  puStack_620 = puVar2;
  puStack_618 = puVar15;
  pppuStack_610 = &pppuStack_590;
  _objc_retain(puVar10);
  plVar17 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x23 = auStack_660;
    func_0x00010002b838(auStack_660,puVar2);
    uStack_680 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    func_0x00010007e1e8(&uStack_680,auStack_660,&lStack_648,1);
    puVar9 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_668 = (undefined1 *)&uStack_680;
    func_0x00010007e5dc(&puStack_668);
    puVar7 = puVar12;
    puVar6 = puVar4;
    puVar11 = &uStack_680;
    if (cStack_649 < '\0') {
      __ZdlPv(auStack_660[0]);
      puVar7 = puVar12;
      puVar6 = puVar4;
      puVar11 = &uStack_680;
    }
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_700;
  pcStack_688 = FUN_1062676fc;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar9;
  puVar4 = puVar7;
  puStack_6c0 = puVar8;
  puStack_6b8 = unaff_x23;
  puStack_6b0 = puVar11;
  plStack_6a8 = plVar17;
  puStack_6a0 = puVar2;
  puStack_698 = puVar10;
  pppuStack_690 = &pppuStack_610;
  _objc_retain(puVar9);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_6e0,puVar2);
    uStack_700 = 0;
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_6c8,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_6e8 = (undefined1 *)&uStack_700;
    func_0x00010007e5dc(&puStack_6e8);
    puVar4 = puVar12;
    puVar6 = puVar7;
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
      puVar4 = puVar12;
      puVar6 = puVar7;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  __Unwind_Resume();
  pcStack_708 = FUN_106267870;
  lStack_758 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar15;
  puVar8 = puVar4;
  puVar7 = puVar6;
  puVar11 = puVar3;
  pppuStack_710 = &pppuStack_690;
  _objc_retain(puVar15);
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_7b8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar8 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_7a0,puVar8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar8 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_788,puVar8);
    unaff_x26 = auStack_7b8;
    unaff_x25 = auStack_770;
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_7d8 = 0;
    uStack_7d0 = 0;
    uStack_7c8 = 0;
    func_0x00010007e1e8(&uStack_7d8,auStack_7b8,&lStack_758,4);
    puVar10 = &UNK_110918990;
    puVar3 = &uStack_7d8;
    puVar8 = &uStack_7d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_7c0 = puVar3;
    func_0x00010007e5dc(&puStack_7c0);
    lVar16 = 0;
    puVar7 = param_6;
    do {
      if ((&cStack_759)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_770 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_758) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_7b8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_8a0;
  pcStack_7e8 = FUN_106267b58;
  lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar10;
  puVar12 = puVar8;
  puVar13 = puVar7;
  puStack_830 = unaff_x26;
  puStack_828 = unaff_x25;
  puStack_820 = puVar3;
  puStack_818 = auStack_7b8;
  puStack_810 = puVar2;
  puStack_808 = puVar6;
  puStack_800 = puVar4;
  puStack_7f8 = puVar15;
  pppuStack_7f0 = &pppuStack_710;
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  puVar3 = auStack_7b8;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_880,puVar2);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_868,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar8 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_850,puVar8);
    uStack_8a0 = 0;
    uStack_898 = 0;
    uStack_890 = 0;
    func_0x00010007e1e8(&uStack_8a0,auStack_880,&lStack_838,3);
    puVar9 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_8a0,puVar11);
    puStack_888 = (undefined1 *)&uStack_8a0;
    func_0x00010007e5dc(&puStack_888);
    lVar16 = 0;
    puVar12 = puVar14;
    puVar13 = puVar11;
    do {
      if ((&cStack_839)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_850 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar3 = &uStack_8a0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_838) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != auStack_880);
  _objc_release(puVar7);
  _objc_release(puVar10);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar6 = &uStack_920;
  pcStack_8a8 = FUN_106267dd0;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar9;
  puVar4 = puVar12;
  puStack_8e0 = puVar8;
  puStack_8d8 = puVar3;
  puStack_8d0 = auStack_880;
  puStack_8c8 = puVar2;
  puStack_8c0 = puVar7;
  puStack_8b8 = puVar10;
  pppuStack_8b0 = &pppuStack_7f0;
  _objc_retain(puVar9);
  plVar17 = (long *)0x0;
  puVar7 = auStack_880;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    puVar3 = auStack_900;
    func_0x00010002b838(auStack_900,puVar2);
    uStack_920 = 0;
    uStack_918 = 0;
    uStack_910 = 0;
    func_0x00010007e1e8(&uStack_920,auStack_900,&lStack_8e8,1);
    puVar15 = &UNK_110918a30;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_920,puVar12);
    puStack_908 = (undefined1 *)&uStack_920;
    func_0x00010007e5dc(&puStack_908);
    puVar4 = puVar6;
    puVar13 = puVar12;
    puVar7 = &uStack_920;
    if (cStack_8e9 < '\0') {
      __ZdlPv(auStack_900[0]);
      puVar4 = puVar6;
      puVar13 = puVar12;
      puVar7 = &uStack_920;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8e8) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar11 = &uStack_9a0;
    pcStack_928 = FUN_106267f44;
    lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar15;
    puVar6 = puVar4;
    puStack_960 = puVar8;
    puStack_958 = puVar3;
    puStack_950 = puVar7;
    plStack_948 = plVar17;
    puStack_940 = puVar2;
    puStack_938 = puVar9;
    pppuStack_930 = &pppuStack_8b0;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar3 = auStack_980;
      func_0x00010002b838(auStack_980,puVar2);
      uStack_9a0 = 0;
      uStack_998 = 0;
      uStack_990 = 0;
      func_0x00010007e1e8(&uStack_9a0,auStack_980,&lStack_968,1);
      puVar10 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_9a0,puVar4);
      puStack_988 = (undefined1 *)&uStack_9a0;
      func_0x00010007e5dc(&puStack_988);
      puVar6 = puVar11;
      puVar13 = puVar4;
      puVar7 = &uStack_9a0;
      if (cStack_969 < '\0') {
        __ZdlPv(auStack_980[0]);
        puVar6 = puVar11;
        puVar13 = puVar4;
        puVar7 = &uStack_9a0;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_968) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar5 = puVar2;
    __Unwind_Resume();
    pcStack_9a8 = FUN_1062680b8;
    lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar10;
    puVar4 = puVar6;
    puStack_9e0 = puVar8;
    puStack_9d8 = puVar3;
    puStack_9d0 = puVar7;
    plStack_9c8 = plVar17;
    puStack_9c0 = puVar2;
    puStack_9b8 = puVar15;
    pppuStack_9b0 = &pppuStack_930;
    _objc_retain(puVar10);
    _objc_retain(puVar6);
    puVar7 = (undefined8 *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      puVar8 = auStack_a18;
      func_0x00010002b838(auStack_a18,puVar2);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar3 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_a00,puVar3);
      uStack_a38 = 0;
      uStack_a30 = 0;
      uStack_a28 = 0;
      func_0x00010007e1e8(&uStack_a38,auStack_a18,&lStack_9e8,2);
      puVar9 = &UNK_110918ad0;
      puVar3 = &uStack_a38;
      puVar4 = &uStack_a38;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar4,puVar13);
      puStack_a20 = puVar3;
      func_0x00010007e5dc(&puStack_a20);
      lVar16 = 0;
      puVar7 = auStack_a18;
      do {
        if ((&cStack_9e9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a00 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar6);
    puVar2 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9e8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      if (cStack_a01 < '\0') {
        __ZdlPv(auStack_a18[0]);
      }
      _objc_release(puVar6);
      _objc_release(puVar10);
      puVar5 = puVar2;
      __Unwind_Resume();
      puVar12 = &uStack_ac0;
      pcStack_a48 = FUN_1062682e8;
      lStack_a88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar9;
      puVar11 = puVar4;
      puStack_a80 = puVar8;
      puStack_a78 = puVar3;
      puStack_a70 = puVar7;
      puStack_a68 = puVar2;
      puStack_a60 = puVar6;
      puStack_a58 = puVar10;
      pppuStack_a50 = &pppuStack_9b0;
      _objc_retain(puVar9);
      plVar17 = (long *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar5 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        puVar3 = auStack_aa0;
        func_0x00010002b838(auStack_aa0,puVar2);
        uStack_ac0 = 0;
        uStack_ab8 = 0;
        uStack_ab0 = 0;
        func_0x00010007e1e8(&uStack_ac0,auStack_aa0,&lStack_a88,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_ac0,puVar4);
        puStack_aa8 = (undefined1 *)&uStack_ac0;
        func_0x00010007e5dc(&puStack_aa8);
        puVar11 = puVar12;
        puVar7 = &uStack_ac0;
        if (cStack_a89 < '\0') {
          __ZdlPv(auStack_aa0[0]);
          puVar11 = puVar12;
          puVar7 = &uStack_ac0;
        }
      }
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a88) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar9);
      _objc_release(puVar9);
      puVar5 = puVar2;
      __Unwind_Resume();
      puVar6 = &uStack_b40;
      pcStack_ac8 = FUN_10626845c;
      lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar15;
      puVar4 = puVar11;
      puStack_b00 = puVar8;
      puStack_af8 = puVar3;
      puStack_af0 = puVar7;
      plStack_ae8 = plVar17;
      puStack_ae0 = puVar2;
      puStack_ad8 = puVar9;
      pppuStack_ad0 = &pppuStack_a50;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar5 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar3 = auStack_b20;
        func_0x00010002b838(auStack_b20,puVar2);
        uStack_b40 = 0;
        uStack_b38 = 0;
        uStack_b30 = 0;
        func_0x00010007e1e8(&uStack_b40,auStack_b20,&lStack_b08,1);
        puVar10 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_b40,puVar11);
        puStack_b28 = (undefined1 *)&uStack_b40;
        func_0x00010007e5dc(&puStack_b28);
        puVar4 = puVar6;
        puVar7 = &uStack_b40;
        if (cStack_b09 < '\0') {
          __ZdlPv(auStack_b20[0]);
          puVar4 = puVar6;
          puVar7 = &uStack_b40;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar9 = puVar2;
      __Unwind_Resume();
      pcStack_b48 = FUN_1062685d0;
      lStack_b88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b80 = puVar8;
      puStack_b78 = puVar3;
      puStack_b70 = puVar7;
      plStack_b68 = plVar17;
      puStack_b60 = puVar2;
      puStack_b58 = puVar15;
      pppuStack_b50 = &pppuStack_ad0;
      _objc_retain(puVar10);
      if (puVar9 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar9 + 8);
        _objc_retain(puVar10);
        if (puVar10 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar10;
          _objc_retainAutorelease(puVar10);
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_ba0,puVar2);
        uStack_bc0 = 0;
        uStack_bb8 = 0;
        uStack_bb0 = 0;
        func_0x00010007e1e8(&uStack_bc0,auStack_ba0,&lStack_b88,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_bc0,puVar4);
        puStack_ba8 = (undefined1 *)&uStack_bc0;
        func_0x00010007e5dc(&puStack_ba8);
        if (cStack_b89 < '\0') {
          __ZdlPv(auStack_ba0[0]);
        }
      }
      puVar2 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b88) {
        ___stack_chk_fail();
        _objc_release(puVar10);
        _objc_release(puVar10);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1062663a4; end: 10626661b;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062665ec) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_1062663a4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined1 *puStack_b08;
  undefined8 auStack_b00 [2];
  char cStack_ae9;
  long lStack_ae8;
  undefined8 *puStack_ae0;
  undefined8 *puStack_ad8;
  undefined8 *puStack_ad0;
  long *plStack_ac8;
  undefined *puStack_ac0;
  undefined *puStack_ab8;
  undefined8 ***pppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined1 *puStack_a88;
  undefined8 auStack_a80 [2];
  char cStack_a69;
  long lStack_a68;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  long *plStack_a48;
  undefined *puStack_a40;
  undefined *puStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined1 *puStack_a08;
  undefined8 auStack_a00 [2];
  char cStack_9e9;
  long lStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  undefined *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined *puStack_9b8;
  undefined8 ***pppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 *puStack_980;
  undefined8 auStack_978 [2];
  char cStack_961;
  undefined8 auStack_960 [2];
  char cStack_949;
  long lStack_948;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  long *plStack_928;
  undefined *puStack_920;
  undefined *puStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined1 *puStack_8e8;
  undefined8 auStack_8e0 [2];
  char cStack_8c9;
  long lStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 *puStack_8b0;
  long *plStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined8 ***pppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 *puStack_868;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 *puStack_830;
  undefined *puStack_828;
  undefined8 *puStack_820;
  undefined *puStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined1 *puStack_7e8;
  undefined8 auStack_7e0 [3];
  undefined1 auStack_7c8 [24];
  undefined8 auStack_7b0 [2];
  char cStack_799;
  long lStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 *puStack_720;
  undefined8 auStack_718 [3];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined8 auStack_6d0 [2];
  char cStack_6b9;
  long lStack_6b8;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined *puStack_508;
  undefined8 *puStack_500;
  undefined *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [3];
  undefined1 auStack_4a8 [24];
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar10 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar7 = param_4;
  puVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_110918670;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar3 = puVar10;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar11 = &uStack_180;
  pcStack_c8 = FUN_10626661c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar10 = puVar3;
  puVar6 = puVar7;
  puVar12 = puVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_160;
    func_0x00010002b838(auStack_160,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar9 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar16 = 0;
    puVar10 = puVar11;
    puVar6 = puVar5;
    do {
      if ((&cStack_119)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_180;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar7);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_1b0 = auStack_160;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_1b0);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar4 = puVar15;
  __Unwind_Resume();
  pcStack_188 = FUN_106266894;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar5 = puVar10;
  puVar11 = puVar6;
  puStack_1c0 = puVar3;
  puStack_1b8 = unaff_x23;
  puStack_1a8 = puVar15;
  puStack_1a0 = puVar7;
  puStack_198 = puVar2;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1f8,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar3 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar8 = &UNK_110918710;
    unaff_x23 = &uStack_218;
    puVar5 = &uStack_218;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar16 = 0;
    puVar11 = puVar6;
    do {
      if ((&cStack_1c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar10);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar6 = &uStack_2e0;
  pcStack_228 = FUN_106266ac4;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar3 = puVar5;
  puVar7 = puVar11;
  puVar10 = puVar12;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_2c0;
    func_0x00010002b838(auStack_2c0,puVar2);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2a8,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar5 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_290,puVar5);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
    puVar15 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar16 = 0;
    puVar3 = puVar6;
    puVar7 = puVar12;
    do {
      if ((&cStack_279)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_2e0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_310 = auStack_2c0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_310);
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106266d3c;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar15;
  puVar6 = puVar3;
  puVar13 = puVar7;
  puStack_320 = puVar5;
  puStack_318 = unaff_x23;
  puStack_308 = puVar2;
  puStack_300 = puVar11;
  puStack_2f8 = puVar8;
  pppuStack_2f0 = &pppuStack_230;
  _objc_retain(puVar15);
  _objc_retain(puVar3);
  puVar12 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar5 = auStack_358;
    func_0x00010002b838(auStack_358,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_340,puVar6);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar9 = &UNK_1109187b0;
    unaff_x23 = &uStack_378;
    puVar6 = &uStack_378;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_360 = unaff_x23;
    func_0x00010007e5dc(&puStack_360);
    lVar16 = 0;
    puVar12 = auStack_358;
    puVar13 = puVar7;
    do {
      if ((&cStack_329)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_341 < '\0') {
      __ZdlPv(auStack_358[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_388 = FUN_106266f6c;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar9;
    puVar7 = puVar6;
    puVar11 = puVar13;
    puStack_3c0 = puVar5;
    puStack_3b8 = unaff_x23;
    puStack_3b0 = puVar12;
    puStack_3a8 = puVar2;
    puStack_3a0 = puVar3;
    puStack_398 = puVar15;
    pppuStack_390 = &pppuStack_2f0;
    _objc_retain(puVar9);
    _objc_retain(puVar6);
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_3f8,puVar2);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar3 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_3e0,puVar3);
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
      puVar8 = &UNK_110918800;
      unaff_x23 = &uStack_418;
      puVar7 = &uStack_418;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_400 = unaff_x23;
      func_0x00010007e5dc(&puStack_400);
      lVar16 = 0;
      puVar11 = puVar13;
      do {
        if ((&cStack_3c9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar6);
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(puVar6);
    _objc_release(puVar9);
    __Unwind_Resume();
    puVar12 = &uStack_4e0;
    pcStack_428 = FUN_10626719c;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar8;
    puVar5 = puVar7;
    puVar6 = puVar11;
    puVar3 = puVar10;
    pppuStack_430 = &pppuStack_390;
    _objc_retain(puVar8);
    _objc_retain(puVar11);
    if (puVar2 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      unaff_x25 = auStack_4c0;
      func_0x00010002b838(auStack_4c0,puVar2);
      pcVar1 = "true";
      if ((int)puVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_4a8,pcVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar7 = puVar11;
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_490,puVar7);
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      func_0x00010007e1e8(&uStack_4e0,auStack_4c0,&lStack_478,3);
      puVar15 = &UNK_110918850;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_4c8 = (undefined1 *)&uStack_4e0;
      func_0x00010007e5dc(&puStack_4c8);
      lVar16 = 0;
      puVar5 = puVar12;
      puVar6 = puVar10;
      do {
        if ((&cStack_479)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        unaff_x23 = &uStack_4e0;
      } while (lVar16 != -0x48);
    }
    _objc_release(puVar11);
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != auStack_4c0);
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar13 = &uStack_560;
    pcStack_4e8 = FUN_106267414;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar10 = puVar5;
    puStack_520 = puVar7;
    puStack_518 = unaff_x23;
    puStack_510 = auStack_4c0;
    puStack_508 = puVar2;
    puStack_500 = puVar11;
    puStack_4f8 = puVar8;
    pppuStack_4f0 = &pppuStack_430;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    puVar12 = auStack_4c0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      unaff_x23 = auStack_540;
      func_0x00010002b838(auStack_540,puVar2);
      uStack_560 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      func_0x00010007e1e8(&uStack_560,auStack_540,&lStack_528,1);
      puVar9 = &UNK_1109188a0;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_548 = (undefined1 *)&uStack_560;
      func_0x00010007e5dc(&puStack_548);
      puVar10 = puVar13;
      puVar6 = puVar5;
      puVar12 = &uStack_560;
      if (cStack_529 < '\0') {
        __ZdlPv(auStack_540[0]);
        puVar10 = puVar13;
        puVar6 = puVar5;
        puVar12 = &uStack_560;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar11 = &uStack_5e0;
    pcStack_568 = FUN_106267588;
    lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar9;
    puVar5 = puVar10;
    puStack_5a0 = puVar7;
    puStack_598 = unaff_x23;
    puStack_590 = puVar12;
    plStack_588 = plVar17;
    puStack_580 = puVar2;
    puStack_578 = puVar15;
    pppuStack_570 = &pppuStack_4f0;
    _objc_retain(puVar9);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x23 = auStack_5c0;
      func_0x00010002b838(auStack_5c0,puVar2);
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      func_0x00010007e1e8(&uStack_5e0,auStack_5c0,&lStack_5a8,1);
      puVar8 = &UNK_1109188f0;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_5c8 = (undefined1 *)&uStack_5e0;
      func_0x00010007e5dc(&puStack_5c8);
      puVar5 = puVar11;
      puVar6 = puVar10;
      puVar12 = &uStack_5e0;
      if (cStack_5a9 < '\0') {
        __ZdlPv(auStack_5c0[0]);
        puVar5 = puVar11;
        puVar6 = puVar10;
        puVar12 = &uStack_5e0;
      }
    }
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar11 = &uStack_660;
    pcStack_5e8 = FUN_1062676fc;
    lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar8;
    puVar10 = puVar5;
    puStack_620 = puVar7;
    puStack_618 = unaff_x23;
    puStack_610 = puVar12;
    plStack_608 = plVar17;
    puStack_600 = puVar2;
    puStack_5f8 = puVar9;
    pppuStack_5f0 = &pppuStack_570;
    _objc_retain(puVar8);
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_640,puVar2);
      uStack_660 = 0;
      uStack_658 = 0;
      uStack_650 = 0;
      func_0x00010007e1e8(&uStack_660,auStack_640,&lStack_628,1);
      puVar15 = &UNK_110918940;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_648 = (undefined1 *)&uStack_660;
      func_0x00010007e5dc(&puStack_648);
      puVar10 = puVar11;
      puVar6 = puVar5;
      if (cStack_629 < '\0') {
        __ZdlPv(auStack_640[0]);
        puVar10 = puVar11;
        puVar6 = puVar5;
      }
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    __Unwind_Resume();
    pcStack_668 = FUN_106267870;
    lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar7 = puVar10;
    puVar5 = puVar6;
    puVar12 = puVar3;
    pppuStack_670 = &pppuStack_5f0;
    _objc_retain(puVar15);
    _objc_retain(puVar10);
    _objc_retain(puVar6);
    if (puVar2 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_718,puVar2);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar7 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_700,puVar7);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar7 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_6e8,puVar7);
      unaff_x26 = auStack_718;
      unaff_x25 = auStack_6d0;
      pcVar1 = "true";
      if ((int)puVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x25,pcVar1);
      uStack_738 = 0;
      uStack_730 = 0;
      uStack_728 = 0;
      func_0x00010007e1e8(&uStack_738,auStack_718,&lStack_6b8,4);
      puVar9 = &UNK_110918990;
      puVar3 = &uStack_738;
      puVar7 = &uStack_738;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_720 = puVar3;
      func_0x00010007e5dc(&puStack_720);
      lVar16 = 0;
      puVar5 = param_6;
      do {
        if ((&cStack_6b9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6d0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x60);
    }
    _objc_release(puVar6);
    _objc_release(puVar10);
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_718);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar14 = &uStack_800;
    pcStack_748 = FUN_106267b58;
    lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar9;
    puVar11 = puVar7;
    puVar13 = puVar5;
    puStack_790 = unaff_x26;
    puStack_788 = unaff_x25;
    puStack_780 = puVar3;
    puStack_778 = auStack_718;
    puStack_770 = puVar2;
    puStack_768 = puVar6;
    puStack_760 = puVar10;
    puStack_758 = puVar15;
    pppuStack_750 = &pppuStack_670;
    _objc_retain(puVar9);
    _objc_retain(puVar5);
    puVar3 = auStack_718;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_7e0,puVar2);
      pcVar1 = "true";
      if ((int)puVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_7c8,pcVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar7 = puVar5;
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_7b0,puVar7);
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      func_0x00010007e1e8(&uStack_800,auStack_7e0,&lStack_798,3);
      puVar8 = &UNK_1109189e0;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_800,puVar12);
      puStack_7e8 = (undefined1 *)&uStack_800;
      func_0x00010007e5dc(&puStack_7e8);
      lVar16 = 0;
      puVar11 = puVar14;
      puVar13 = puVar12;
      do {
        if ((&cStack_799)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7b0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        puVar3 = &uStack_800;
      } while (lVar16 != -0x48);
    }
    _objc_release(puVar5);
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_798) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      do {
        puVar3 = puVar3 + -3;
      } while (puVar3 != auStack_7e0);
      _objc_release(puVar5);
      _objc_release(puVar9);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar6 = &uStack_880;
      pcStack_808 = FUN_106267dd0;
      lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar8;
      puVar10 = puVar11;
      puStack_840 = puVar7;
      puStack_838 = puVar3;
      puStack_830 = auStack_7e0;
      puStack_828 = puVar2;
      puStack_820 = puVar5;
      puStack_818 = puVar9;
      pppuStack_810 = &pppuStack_750;
      _objc_retain(puVar8);
      plVar17 = (long *)0x0;
      puVar5 = auStack_7e0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        puVar3 = auStack_860;
        func_0x00010002b838(auStack_860,puVar2);
        uStack_880 = 0;
        uStack_878 = 0;
        uStack_870 = 0;
        func_0x00010007e1e8(&uStack_880,auStack_860,&lStack_848,1);
        puVar15 = &UNK_110918a30;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_880,puVar11);
        puStack_868 = (undefined1 *)&uStack_880;
        func_0x00010007e5dc(&puStack_868);
        puVar10 = puVar6;
        puVar13 = puVar11;
        puVar5 = &uStack_880;
        if (cStack_849 < '\0') {
          __ZdlPv(auStack_860[0]);
          puVar10 = puVar6;
          puVar13 = puVar11;
          puVar5 = &uStack_880;
        }
      }
      puVar2 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar12 = &uStack_900;
      pcStack_888 = FUN_106267f44;
      lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar15;
      puVar6 = puVar10;
      puStack_8c0 = puVar7;
      puStack_8b8 = puVar3;
      puStack_8b0 = puVar5;
      plStack_8a8 = plVar17;
      puStack_8a0 = puVar2;
      puStack_898 = puVar8;
      pppuStack_890 = &pppuStack_810;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar3 = auStack_8e0;
        func_0x00010002b838(auStack_8e0,puVar2);
        uStack_900 = 0;
        uStack_8f8 = 0;
        uStack_8f0 = 0;
        func_0x00010007e1e8(&uStack_900,auStack_8e0,&lStack_8c8,1);
        puVar9 = &UNK_110918a80;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_900,puVar10);
        puStack_8e8 = (undefined1 *)&uStack_900;
        func_0x00010007e5dc(&puStack_8e8);
        puVar6 = puVar12;
        puVar13 = puVar10;
        puVar5 = &uStack_900;
        if (cStack_8c9 < '\0') {
          __ZdlPv(auStack_8e0[0]);
          puVar6 = puVar12;
          puVar13 = puVar10;
          puVar5 = &uStack_900;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_908 = FUN_1062680b8;
      lStack_948 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar9;
      puVar10 = puVar6;
      puStack_940 = puVar7;
      puStack_938 = puVar3;
      puStack_930 = puVar5;
      plStack_928 = plVar17;
      puStack_920 = puVar2;
      puStack_918 = puVar15;
      pppuStack_910 = &pppuStack_890;
      _objc_retain(puVar9);
      _objc_retain(puVar6);
      puVar5 = (undefined8 *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        puVar7 = auStack_978;
        func_0x00010002b838(auStack_978,puVar2);
        _objc_retain(puVar6);
        if (puVar6 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)&UNK_10f371ee3;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar3 = puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_960,puVar3);
        uStack_998 = 0;
        uStack_990 = 0;
        uStack_988 = 0;
        func_0x00010007e1e8(&uStack_998,auStack_978,&lStack_948,2);
        puVar8 = &UNK_110918ad0;
        puVar3 = &uStack_998;
        puVar10 = &uStack_998;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar10,puVar13);
        puStack_980 = puVar3;
        func_0x00010007e5dc(&puStack_980);
        lVar16 = 0;
        puVar5 = auStack_978;
        do {
          if ((&cStack_949)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_960 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != -0x30);
      }
      _objc_release(puVar6);
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_948) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar6);
      if (cStack_961 < '\0') {
        __ZdlPv(auStack_978[0]);
      }
      _objc_release(puVar6);
      _objc_release(puVar9);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar11 = &uStack_a20;
      pcStack_9a8 = FUN_1062682e8;
      lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar8;
      puVar12 = puVar10;
      puStack_9e0 = puVar7;
      puStack_9d8 = puVar3;
      puStack_9d0 = puVar5;
      puStack_9c8 = puVar2;
      puStack_9c0 = puVar6;
      puStack_9b8 = puVar9;
      pppuStack_9b0 = &pppuStack_910;
      _objc_retain(puVar8);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        puVar3 = auStack_a00;
        func_0x00010002b838(auStack_a00,puVar2);
        uStack_a20 = 0;
        uStack_a18 = 0;
        uStack_a10 = 0;
        func_0x00010007e1e8(&uStack_a20,auStack_a00,&lStack_9e8,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_a20,puVar10);
        puStack_a08 = (undefined1 *)&uStack_a20;
        func_0x00010007e5dc(&puStack_a08);
        puVar12 = puVar11;
        puVar5 = &uStack_a20;
        if (cStack_9e9 < '\0') {
          __ZdlPv(auStack_a00[0]);
          puVar12 = puVar11;
          puVar5 = &uStack_a20;
        }
      }
      puVar2 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar6 = &uStack_aa0;
      pcStack_a28 = FUN_10626845c;
      lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar15;
      puVar10 = puVar12;
      puStack_a60 = puVar7;
      puStack_a58 = puVar3;
      puStack_a50 = puVar5;
      plStack_a48 = plVar17;
      puStack_a40 = puVar2;
      puStack_a38 = puVar8;
      pppuStack_a30 = &pppuStack_9b0;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar3 = auStack_a80;
        func_0x00010002b838(auStack_a80,puVar2);
        uStack_aa0 = 0;
        uStack_a98 = 0;
        uStack_a90 = 0;
        func_0x00010007e1e8(&uStack_aa0,auStack_a80,&lStack_a68,1);
        puVar9 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_aa0,puVar12);
        puStack_a88 = (undefined1 *)&uStack_aa0;
        func_0x00010007e5dc(&puStack_a88);
        puVar10 = puVar6;
        puVar5 = &uStack_aa0;
        if (cStack_a69 < '\0') {
          __ZdlPv(auStack_a80[0]);
          puVar10 = puVar6;
          puVar5 = &uStack_aa0;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a68) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar8 = puVar2;
      __Unwind_Resume();
      pcStack_aa8 = FUN_1062685d0;
      lStack_ae8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_ae0 = puVar7;
      puStack_ad8 = puVar3;
      puStack_ad0 = puVar5;
      plStack_ac8 = plVar17;
      puStack_ac0 = puVar2;
      puStack_ab8 = puVar15;
      pppuStack_ab0 = &pppuStack_a30;
      _objc_retain(puVar9);
      if (puVar8 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar8 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_b00,puVar2);
        uStack_b20 = 0;
        uStack_b18 = 0;
        uStack_b10 = 0;
        func_0x00010007e1e8(&uStack_b20,auStack_b00,&lStack_ae8,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_b20,puVar10);
        puStack_b08 = (undefined1 *)&uStack_b20;
        func_0x00010007e5dc(&puStack_b08);
        if (cStack_ae9 < '\0') {
          __ZdlPv(auStack_b00[0]);
        }
      }
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ae8) {
        ___stack_chk_fail();
        _objc_release(puVar9);
        _objc_release(puVar9);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10626661c; end: 106266893;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x000106266864) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_10626661c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined1 *puStack_a48;
  undefined8 auStack_a40 [2];
  char cStack_a29;
  long lStack_a28;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 *puStack_a10;
  long *plStack_a08;
  undefined *puStack_a00;
  undefined *puStack_9f8;
  undefined8 ***pppuStack_9f0;
  code *pcStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined1 *puStack_9c8;
  undefined8 auStack_9c0 [2];
  char cStack_9a9;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 *puStack_990;
  long *plStack_988;
  undefined *puStack_980;
  undefined *puStack_978;
  undefined8 ***pppuStack_970;
  code *pcStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined1 *puStack_948;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  undefined *puStack_908;
  undefined8 *puStack_900;
  undefined *puStack_8f8;
  undefined8 ***pppuStack_8f0;
  code *pcStack_8e8;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 auStack_8b8 [2];
  char cStack_8a1;
  undefined8 auStack_8a0 [2];
  char cStack_889;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  long *plStack_868;
  undefined *puStack_860;
  undefined *puStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 *puStack_828;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  long *plStack_7e8;
  undefined *puStack_7e0;
  undefined *puStack_7d8;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  undefined *puStack_768;
  undefined8 *puStack_760;
  undefined *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [3];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 *puStack_660;
  undefined8 auStack_658 [3];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined *puStack_448;
  undefined8 *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [3];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  puVar8 = param_4;
  puVar6 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_1109186c0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar7 = puVar4;
    puVar8 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar15;
  __Unwind_Resume();
  pcStack_c8 = FUN_106266894;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar4 = puVar7;
  puVar11 = puVar8;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_e8 = puVar15;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar15);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_120,puVar4);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar9 = &UNK_110918710;
    unaff_x23 = &uStack_158;
    puVar4 = &uStack_158;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_140 = unaff_x23;
    func_0x00010007e5dc(&puStack_140);
    lVar16 = 0;
    puVar11 = puVar8;
    do {
      if ((&cStack_109)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar7);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar10 = &uStack_220;
  pcStack_168 = FUN_106266ac4;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar9;
  puVar7 = puVar4;
  puVar8 = puVar11;
  puVar13 = puVar6;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x25 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    pcVar1 = "true";
    if ((int)puVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar4 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1d0,puVar4);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar2 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar16 = 0;
    puVar7 = puVar10;
    puVar8 = puVar6;
    do {
      if ((&cStack_1b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_220;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar11);
  puVar15 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_250 = auStack_200;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_250);
  _objc_release(puVar11);
  _objc_release(puVar9);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_228 = FUN_106266d3c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  puVar6 = puVar7;
  puVar10 = puVar8;
  puStack_260 = puVar4;
  puStack_258 = unaff_x23;
  puStack_248 = puVar15;
  puStack_240 = puVar11;
  puStack_238 = puVar9;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  puVar11 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    puVar4 = auStack_298;
    func_0x00010002b838(auStack_298,puVar15);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar6 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_280,puVar6);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar3 = &UNK_1109187b0;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar16 = 0;
    puVar11 = auStack_298;
    puVar10 = puVar8;
    do {
      if ((&cStack_269)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar7);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106266f6c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar8 = puVar6;
  puVar14 = puVar10;
  puStack_300 = puVar4;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar11;
  puStack_2e8 = puVar15;
  puStack_2e0 = puVar7;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar3);
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_338,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar7 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_320,puVar7);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar9 = &UNK_110918800;
    unaff_x23 = &uStack_358;
    puVar8 = &uStack_358;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_340 = unaff_x23;
    func_0x00010007e5dc(&puStack_340);
    lVar16 = 0;
    puVar14 = puVar10;
    do {
      if ((&cStack_309)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar11 = &uStack_420;
  pcStack_368 = FUN_10626719c;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar9;
  puVar6 = puVar8;
  puVar4 = puVar14;
  puVar7 = puVar13;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar9);
  _objc_retain(puVar14);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x25 = auStack_400;
    func_0x00010002b838(auStack_400,puVar2);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_3e8,pcVar1);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar8 = puVar14;
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_3d0,puVar8);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x00010007e1e8(&uStack_420,auStack_400,&lStack_3b8,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x00010007e5dc(&puStack_408);
    lVar16 = 0;
    puVar6 = puVar11;
    puVar4 = puVar13;
    do {
      if ((&cStack_3b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_420;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar14);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_400);
  _objc_release(puVar14);
  _objc_release(puVar9);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_4a0;
  pcStack_428 = FUN_106267414;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar15;
  puVar11 = puVar6;
  puStack_460 = puVar8;
  puStack_458 = unaff_x23;
  puStack_450 = auStack_400;
  puStack_448 = puVar2;
  puStack_440 = puVar14;
  puStack_438 = puVar9;
  pppuStack_430 = &pppuStack_370;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar13 = auStack_400;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_480;
    func_0x00010002b838(auStack_480,puVar2);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010007e1e8(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar3 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    puVar11 = puVar10;
    puVar4 = puVar6;
    puVar13 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar11 = puVar10;
      puVar4 = puVar6;
      puVar13 = &uStack_4a0;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_520;
  pcStack_4a8 = FUN_106267588;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar6 = puVar11;
  puStack_4e0 = puVar8;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar13;
  plStack_4c8 = plVar17;
  puStack_4c0 = puVar2;
  puStack_4b8 = puVar15;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar3);
  plVar17 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_500;
    func_0x00010002b838(auStack_500,puVar2);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x00010007e1e8(&uStack_520,auStack_500,&lStack_4e8,1);
    puVar9 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x00010007e5dc(&puStack_508);
    puVar6 = puVar10;
    puVar4 = puVar11;
    puVar13 = &uStack_520;
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
      puVar6 = puVar10;
      puVar4 = puVar11;
      puVar13 = &uStack_520;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e8) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar10 = &uStack_5a0;
    pcStack_528 = FUN_1062676fc;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar9;
    puVar11 = puVar6;
    puStack_560 = puVar8;
    puStack_558 = unaff_x23;
    puStack_550 = puVar13;
    plStack_548 = plVar17;
    puStack_540 = puVar2;
    puStack_538 = puVar3;
    pppuStack_530 = &pppuStack_4b0;
    _objc_retain(puVar9);
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_580,puVar2);
      uStack_5a0 = 0;
      uStack_598 = 0;
      uStack_590 = 0;
      func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_568,1);
      puVar15 = &UNK_110918940;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_588 = (undefined1 *)&uStack_5a0;
      func_0x00010007e5dc(&puStack_588);
      puVar11 = puVar10;
      puVar4 = puVar6;
      if (cStack_569 < '\0') {
        __ZdlPv(auStack_580[0]);
        puVar11 = puVar10;
        puVar4 = puVar6;
      }
    }
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    __Unwind_Resume();
    pcStack_5a8 = FUN_106267870;
    lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar8 = puVar11;
    puVar6 = puVar4;
    puVar13 = puVar7;
    pppuStack_5b0 = &pppuStack_530;
    _objc_retain(puVar15);
    _objc_retain(puVar11);
    _objc_retain(puVar4);
    if (puVar2 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_658,puVar2);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar8 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_640,puVar8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar8 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_628,puVar8);
      unaff_x26 = auStack_658;
      unaff_x25 = auStack_610;
      pcVar1 = "true";
      if ((int)puVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x25,pcVar1);
      uStack_678 = 0;
      uStack_670 = 0;
      uStack_668 = 0;
      func_0x00010007e1e8(&uStack_678,auStack_658,&lStack_5f8,4);
      puVar9 = &UNK_110918990;
      puVar7 = &uStack_678;
      puVar8 = &uStack_678;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_660 = puVar7;
      func_0x00010007e5dc(&puStack_660);
      lVar16 = 0;
      puVar6 = param_6;
      do {
        if ((&cStack_5f9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_610 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x60);
    }
    _objc_release(puVar4);
    _objc_release(puVar11);
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_658);
    _objc_release(puVar4);
    _objc_release(puVar11);
    _objc_release(puVar15);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_740;
    pcStack_688 = FUN_106267b58;
    lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar9;
    puVar10 = puVar8;
    puVar14 = puVar6;
    puStack_6d0 = unaff_x26;
    puStack_6c8 = unaff_x25;
    puStack_6c0 = puVar7;
    puStack_6b8 = auStack_658;
    puStack_6b0 = puVar2;
    puStack_6a8 = puVar4;
    puStack_6a0 = puVar11;
    puStack_698 = puVar15;
    pppuStack_690 = &pppuStack_5b0;
    _objc_retain(puVar9);
    _objc_retain(puVar6);
    puVar7 = auStack_658;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_720,puVar2);
      pcVar1 = "true";
      if ((int)puVar8 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_708,pcVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar8 = puVar6;
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_6f0,puVar8);
      uStack_740 = 0;
      uStack_738 = 0;
      uStack_730 = 0;
      func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_6d8,3);
      puVar3 = &UNK_1109189e0;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_740,puVar13);
      puStack_728 = (undefined1 *)&uStack_740;
      func_0x00010007e5dc(&puStack_728);
      lVar16 = 0;
      puVar10 = puVar12;
      puVar14 = puVar13;
      do {
        if ((&cStack_6d9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        puVar7 = &uStack_740;
      } while (lVar16 != -0x48);
    }
    _objc_release(puVar6);
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      puVar7 = puVar7 + -3;
    } while (puVar7 != auStack_720);
    _objc_release(puVar6);
    _objc_release(puVar9);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar11 = &uStack_7c0;
    pcStack_748 = FUN_106267dd0;
    lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar3;
    puVar4 = puVar10;
    puStack_780 = puVar8;
    puStack_778 = puVar7;
    puStack_770 = auStack_720;
    puStack_768 = puVar2;
    puStack_760 = puVar6;
    puStack_758 = puVar9;
    pppuStack_750 = &pppuStack_690;
    _objc_retain(puVar3);
    plVar17 = (long *)0x0;
    puVar6 = auStack_720;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      puVar7 = auStack_7a0;
      func_0x00010002b838(auStack_7a0,puVar2);
      uStack_7c0 = 0;
      uStack_7b8 = 0;
      uStack_7b0 = 0;
      func_0x00010007e1e8(&uStack_7c0,auStack_7a0,&lStack_788,1);
      puVar15 = &UNK_110918a30;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_7c0,puVar10);
      puStack_7a8 = (undefined1 *)&uStack_7c0;
      func_0x00010007e5dc(&puStack_7a8);
      puVar4 = puVar11;
      puVar14 = puVar10;
      puVar6 = &uStack_7c0;
      if (cStack_789 < '\0') {
        __ZdlPv(auStack_7a0[0]);
        puVar4 = puVar11;
        puVar14 = puVar10;
        puVar6 = &uStack_7c0;
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar13 = &uStack_840;
    pcStack_7c8 = FUN_106267f44;
    lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar15;
    puVar11 = puVar4;
    puStack_800 = puVar8;
    puStack_7f8 = puVar7;
    puStack_7f0 = puVar6;
    plStack_7e8 = plVar17;
    puStack_7e0 = puVar2;
    puStack_7d8 = puVar3;
    pppuStack_7d0 = &pppuStack_750;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar7 = auStack_820;
      func_0x00010002b838(auStack_820,puVar2);
      uStack_840 = 0;
      uStack_838 = 0;
      uStack_830 = 0;
      func_0x00010007e1e8(&uStack_840,auStack_820,&lStack_808,1);
      puVar9 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_840,puVar4);
      puStack_828 = (undefined1 *)&uStack_840;
      func_0x00010007e5dc(&puStack_828);
      puVar11 = puVar13;
      puVar14 = puVar4;
      puVar6 = &uStack_840;
      if (cStack_809 < '\0') {
        __ZdlPv(auStack_820[0]);
        puVar11 = puVar13;
        puVar14 = puVar4;
        puVar6 = &uStack_840;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_808) {
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar5 = puVar2;
      __Unwind_Resume();
      pcStack_848 = FUN_1062680b8;
      lStack_888 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = puVar9;
      puVar4 = puVar11;
      puStack_880 = puVar8;
      puStack_878 = puVar7;
      puStack_870 = puVar6;
      plStack_868 = plVar17;
      puStack_860 = puVar2;
      puStack_858 = puVar15;
      pppuStack_850 = &pppuStack_7d0;
      _objc_retain(puVar9);
      _objc_retain(puVar11);
      puVar6 = (undefined8 *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar5 + 8);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        puVar8 = auStack_8b8;
        func_0x00010002b838(auStack_8b8,puVar2);
        _objc_retain(puVar11);
        if (puVar11 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)&UNK_10f371ee3;
        }
        else {
          _objc_retainAutorelease(puVar11);
          puVar7 = puVar11;
          func_0x00010bdc3520(puVar11);
        }
        _objc_release(puVar11);
        func_0x00010002b838(auStack_8a0,puVar7);
        uStack_8d8 = 0;
        uStack_8d0 = 0;
        uStack_8c8 = 0;
        func_0x00010007e1e8(&uStack_8d8,auStack_8b8,&lStack_888,2);
        puVar3 = &UNK_110918ad0;
        puVar7 = &uStack_8d8;
        puVar4 = &uStack_8d8;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar4,puVar14);
        puStack_8c0 = puVar7;
        func_0x00010007e5dc(&puStack_8c0);
        lVar16 = 0;
        puVar6 = auStack_8b8;
        do {
          if ((&cStack_889)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_8a0 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != -0x30);
      }
      _objc_release(puVar11);
      puVar2 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_888) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_8a1 < '\0') {
        __ZdlPv(auStack_8b8[0]);
      }
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar5 = puVar2;
      __Unwind_Resume();
      puVar10 = &uStack_960;
      pcStack_8e8 = FUN_1062682e8;
      lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar3;
      puVar13 = puVar4;
      puStack_920 = puVar8;
      puStack_918 = puVar7;
      puStack_910 = puVar6;
      puStack_908 = puVar2;
      puStack_900 = puVar11;
      puStack_8f8 = puVar9;
      pppuStack_8f0 = &pppuStack_850;
      _objc_retain(puVar3);
      plVar17 = (long *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar5 + 8);
        _objc_retain(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        puVar7 = auStack_940;
        func_0x00010002b838(auStack_940,puVar2);
        uStack_960 = 0;
        uStack_958 = 0;
        uStack_950 = 0;
        func_0x00010007e1e8(&uStack_960,auStack_940,&lStack_928,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_960,puVar4);
        puStack_948 = (undefined1 *)&uStack_960;
        func_0x00010007e5dc(&puStack_948);
        puVar13 = puVar10;
        puVar6 = &uStack_960;
        if (cStack_929 < '\0') {
          __ZdlPv(auStack_940[0]);
          puVar13 = puVar10;
          puVar6 = &uStack_960;
        }
      }
      puVar2 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_928) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(puVar3);
        puVar5 = puVar2;
        __Unwind_Resume();
        puVar11 = &uStack_9e0;
        pcStack_968 = FUN_10626845c;
        lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar9 = puVar15;
        puVar4 = puVar13;
        puStack_9a0 = puVar8;
        puStack_998 = puVar7;
        puStack_990 = puVar6;
        plStack_988 = plVar17;
        puStack_980 = puVar2;
        puStack_978 = puVar3;
        pppuStack_970 = &pppuStack_8f0;
        _objc_retain(puVar15);
        plVar17 = (long *)0x0;
        if (puVar5 != (undefined *)0x0) {
          plVar17 = *(long **)(puVar5 + 8);
          _objc_retain(puVar15);
          if (puVar15 == (undefined *)0x0) {
            puVar2 = &UNK_10f371ee3;
          }
          else {
            puVar2 = puVar15;
            _objc_retainAutorelease(puVar15);
            func_0x00010bdc3520();
          }
          _objc_release(puVar15);
          puVar7 = auStack_9c0;
          func_0x00010002b838(auStack_9c0,puVar2);
          uStack_9e0 = 0;
          uStack_9d8 = 0;
          uStack_9d0 = 0;
          func_0x00010007e1e8(&uStack_9e0,auStack_9c0,&lStack_9a8,1);
          puVar9 = &UNK_110918b70;
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_9e0,puVar13);
          puStack_9c8 = (undefined1 *)&uStack_9e0;
          func_0x00010007e5dc(&puStack_9c8);
          puVar4 = puVar11;
          puVar6 = &uStack_9e0;
          if (cStack_9a9 < '\0') {
            __ZdlPv(auStack_9c0[0]);
            puVar4 = puVar11;
            puVar6 = &uStack_9e0;
          }
        }
        puVar2 = puVar15;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a8) {
          return puVar2;
        }
        ___stack_chk_fail();
        _objc_release(puVar15);
        _objc_release(puVar15);
        puVar3 = puVar2;
        __Unwind_Resume();
        pcStack_9e8 = FUN_1062685d0;
        lStack_a28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_a20 = puVar8;
        puStack_a18 = puVar7;
        puStack_a10 = puVar6;
        plStack_a08 = plVar17;
        puStack_a00 = puVar2;
        puStack_9f8 = puVar15;
        pppuStack_9f0 = &pppuStack_970;
        _objc_retain(puVar9);
        if (puVar3 != (undefined *)0x0) {
          plVar17 = *(long **)(puVar3 + 8);
          _objc_retain(puVar9);
          if (puVar9 == (undefined *)0x0) {
            puVar2 = &UNK_10f371ee3;
          }
          else {
            puVar2 = puVar9;
            _objc_retainAutorelease(puVar9);
            func_0x00010bdc3520();
          }
          _objc_release(puVar9);
          func_0x00010002b838(auStack_a40,puVar2);
          uStack_a60 = 0;
          uStack_a58 = 0;
          uStack_a50 = 0;
          func_0x00010007e1e8(&uStack_a60,auStack_a40,&lStack_a28,1);
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_a60,puVar4);
          puStack_a48 = (undefined1 *)&uStack_a60;
          func_0x00010007e5dc(&puStack_a48);
          if (cStack_a29 < '\0') {
            __ZdlPv(auStack_a40[0]);
          }
        }
        puVar2 = puVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a28) {
          ___stack_chk_fail();
          _objc_release(puVar9);
          _objc_release(puVar9);
          __Unwind_Resume();
          _objc_retain();
          puVar15 = puVar2;
          func_0x00010c131a00();
          if (puVar15 == (undefined *)0x1) {
            puVar15 = puVar2;
            func_0x00010c0f3b40(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
            _objc_release();
          }
          else {
            puVar15 = (undefined *)0x0;
          }
          _objc_release(puVar2);
          return puVar15;
        }
        return puVar2;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106266894; end: 106266ac3;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106266894(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 *puStack_988;
  undefined8 auStack_980 [2];
  char cStack_969;
  long lStack_968;
  undefined8 *puStack_960;
  undefined8 *puStack_958;
  undefined8 *puStack_950;
  long *plStack_948;
  undefined *puStack_940;
  undefined *puStack_938;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 *puStack_8d0;
  long *plStack_8c8;
  undefined *puStack_8c0;
  undefined *puStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 *puStack_888;
  undefined8 auStack_880 [2];
  char cStack_869;
  long lStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  undefined8 *puStack_850;
  undefined *puStack_848;
  undefined8 *puStack_840;
  undefined *puStack_838;
  undefined8 ***pppuStack_830;
  code *pcStack_828;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 *puStack_800;
  undefined8 auStack_7f8 [2];
  char cStack_7e1;
  undefined8 auStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  long *plStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 *puStack_768;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  long *plStack_728;
  undefined *puStack_720;
  undefined *puStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [3];
  undefined1 auStack_648 [24];
  undefined8 auStack_630 [2];
  char cStack_619;
  long lStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [3];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [3];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar2 = param_2;
  puVar3 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_110918710;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar16 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(param_3);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_160;
  pcStack_a8 = FUN_106266ac4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar9 = puVar3;
  puVar6 = puVar5;
  puVar11 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_140;
    func_0x00010002b838(auStack_140,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar8 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar16 = 0;
    puVar9 = puVar10;
    puVar6 = param_5;
    do {
      if ((&cStack_f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar5);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  puStack_190 = auStack_140;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_190);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar15;
  __Unwind_Resume();
  pcStack_168 = FUN_106266d3c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar8;
  puVar10 = puVar9;
  puVar12 = puVar6;
  puStack_1a0 = puVar3;
  puStack_198 = unaff_x23;
  puStack_188 = puVar15;
  puStack_180 = puVar5;
  puStack_178 = puVar2;
  ppuStack_170 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar3 = auStack_1d8;
    func_0x00010002b838(auStack_1d8,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1c0,puVar5);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar7 = &UNK_1109187b0;
    unaff_x23 = &uStack_1f8;
    puVar10 = &uStack_1f8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1e0);
    lVar16 = 0;
    puVar5 = auStack_1d8;
    puVar12 = puVar6;
    do {
      if ((&cStack_1a9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_208 = FUN_106266f6c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar7;
  puVar6 = puVar10;
  puVar14 = puVar12;
  puStack_240 = puVar3;
  puStack_238 = unaff_x23;
  puStack_230 = puVar5;
  puStack_228 = puVar2;
  puStack_220 = puVar9;
  puStack_218 = puVar8;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_278,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar3 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_260,puVar3);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar15 = &UNK_110918800;
    unaff_x23 = &uStack_298;
    puVar6 = &uStack_298;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_280 = unaff_x23;
    func_0x00010007e5dc(&puStack_280);
    lVar16 = 0;
    puVar14 = puVar12;
    do {
      if ((&cStack_249)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar10);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar10 = &uStack_360;
  pcStack_2a8 = FUN_10626719c;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar15;
  puVar5 = puVar6;
  puVar9 = puVar14;
  puVar3 = puVar11;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar15);
  _objc_retain(puVar14);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x25 = auStack_340;
    func_0x00010002b838(auStack_340,puVar2);
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_328,pcVar1);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar6 = puVar14;
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_310,puVar6);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_2f8,3);
    puVar8 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    lVar16 = 0;
    puVar5 = puVar10;
    puVar9 = puVar11;
    do {
      if ((&cStack_2f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_360;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar14);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != auStack_340);
    _objc_release(puVar14);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_3e0;
    pcStack_368 = FUN_106267414;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar8;
    puVar11 = puVar5;
    puStack_3a0 = puVar6;
    puStack_398 = unaff_x23;
    puStack_390 = auStack_340;
    puStack_388 = puVar2;
    puStack_380 = puVar14;
    puStack_378 = puVar15;
    pppuStack_370 = &pppuStack_2b0;
    _objc_retain(puVar8);
    plVar17 = (long *)0x0;
    puVar10 = auStack_340;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      unaff_x23 = auStack_3c0;
      func_0x00010002b838(auStack_3c0,puVar2);
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
      puVar7 = &UNK_1109188a0;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_3c8 = (undefined1 *)&uStack_3e0;
      func_0x00010007e5dc(&puStack_3c8);
      puVar11 = puVar12;
      puVar9 = puVar5;
      puVar10 = &uStack_3e0;
      if (cStack_3a9 < '\0') {
        __ZdlPv(auStack_3c0[0]);
        puVar11 = puVar12;
        puVar9 = puVar5;
        puVar10 = &uStack_3e0;
      }
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_460;
    pcStack_3e8 = FUN_106267588;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar7;
    puVar5 = puVar11;
    puStack_420 = puVar6;
    puStack_418 = unaff_x23;
    puStack_410 = puVar10;
    plStack_408 = plVar17;
    puStack_400 = puVar2;
    puStack_3f8 = puVar8;
    pppuStack_3f0 = &pppuStack_370;
    _objc_retain(puVar7);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x23 = auStack_440;
      func_0x00010002b838(auStack_440,puVar2);
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_428,1);
      puVar15 = &UNK_1109188f0;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_448 = (undefined1 *)&uStack_460;
      func_0x00010007e5dc(&puStack_448);
      puVar5 = puVar12;
      puVar9 = puVar11;
      puVar10 = &uStack_460;
      if (cStack_429 < '\0') {
        __ZdlPv(auStack_440[0]);
        puVar5 = puVar12;
        puVar9 = puVar11;
        puVar10 = &uStack_460;
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_4e0;
    pcStack_468 = FUN_1062676fc;
    lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar15;
    puVar11 = puVar5;
    puStack_4a0 = puVar6;
    puStack_498 = unaff_x23;
    puStack_490 = puVar10;
    plStack_488 = plVar17;
    puStack_480 = puVar2;
    puStack_478 = puVar7;
    pppuStack_470 = &pppuStack_3f0;
    _objc_retain(puVar15);
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_4c0,puVar2);
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      func_0x00010007e1e8(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
      puVar8 = &UNK_110918940;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_4c8 = (undefined1 *)&uStack_4e0;
      func_0x00010007e5dc(&puStack_4c8);
      puVar11 = puVar12;
      puVar9 = puVar5;
      if (cStack_4a9 < '\0') {
        __ZdlPv(auStack_4c0[0]);
        puVar11 = puVar12;
        puVar9 = puVar5;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    __Unwind_Resume();
    pcStack_4e8 = FUN_106267870;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar8;
    puVar5 = puVar11;
    puVar6 = puVar9;
    puVar10 = puVar3;
    pppuStack_4f0 = &pppuStack_470;
    _objc_retain(puVar8);
    _objc_retain(puVar11);
    _objc_retain(puVar9);
    if (puVar2 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar2 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_598,puVar2);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar5 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_580,puVar5);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar5 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_568,puVar5);
      unaff_x26 = auStack_598;
      unaff_x25 = auStack_550;
      pcVar1 = "true";
      if ((int)puVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x25,pcVar1);
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_538,4);
      puVar15 = &UNK_110918990;
      puVar3 = &uStack_5b8;
      puVar5 = &uStack_5b8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_5a0 = puVar3;
      func_0x00010007e5dc(&puStack_5a0);
      lVar16 = 0;
      puVar6 = param_6;
      do {
        if ((&cStack_539)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x60);
    }
    _objc_release(puVar9);
    _objc_release(puVar11);
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_598);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar13 = &uStack_680;
    pcStack_5c8 = FUN_106267b58;
    lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar15;
    puVar12 = puVar5;
    puVar14 = puVar6;
    puStack_610 = unaff_x26;
    puStack_608 = unaff_x25;
    puStack_600 = puVar3;
    puStack_5f8 = auStack_598;
    puStack_5f0 = puVar2;
    puStack_5e8 = puVar9;
    puStack_5e0 = puVar11;
    puStack_5d8 = puVar8;
    pppuStack_5d0 = &pppuStack_4f0;
    _objc_retain(puVar15);
    _objc_retain(puVar6);
    puVar3 = auStack_598;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_660,puVar2);
      pcVar1 = "true";
      if ((int)puVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_648,pcVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar5 = puVar6;
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_630,puVar5);
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      func_0x00010007e1e8(&uStack_680,auStack_660,&lStack_618,3);
      puVar7 = &UNK_1109189e0;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_680,puVar10);
      puStack_668 = (undefined1 *)&uStack_680;
      func_0x00010007e5dc(&puStack_668);
      lVar16 = 0;
      puVar12 = puVar13;
      puVar14 = puVar10;
      do {
        if ((&cStack_619)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_630 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        puVar3 = &uStack_680;
      } while (lVar16 != -0x48);
    }
    _objc_release(puVar6);
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != auStack_660);
    _objc_release(puVar6);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar11 = &uStack_700;
    pcStack_688 = FUN_106267dd0;
    lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar7;
    puVar9 = puVar12;
    puStack_6c0 = puVar5;
    puStack_6b8 = puVar3;
    puStack_6b0 = auStack_660;
    puStack_6a8 = puVar2;
    puStack_6a0 = puVar6;
    puStack_698 = puVar15;
    pppuStack_690 = &pppuStack_5d0;
    _objc_retain(puVar7);
    plVar17 = (long *)0x0;
    puVar6 = auStack_660;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar3 = auStack_6e0;
      func_0x00010002b838(auStack_6e0,puVar2);
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_6c8,1);
      puVar8 = &UNK_110918a30;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_700,puVar12);
      puStack_6e8 = (undefined1 *)&uStack_700;
      func_0x00010007e5dc(&puStack_6e8);
      puVar9 = puVar11;
      puVar14 = puVar12;
      puVar6 = &uStack_700;
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
        puVar9 = puVar11;
        puVar14 = puVar12;
        puVar6 = &uStack_700;
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar10 = &uStack_780;
    pcStack_708 = FUN_106267f44;
    lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar8;
    puVar11 = puVar9;
    puStack_740 = puVar5;
    puStack_738 = puVar3;
    puStack_730 = puVar6;
    plStack_728 = plVar17;
    puStack_720 = puVar2;
    puStack_718 = puVar7;
    pppuStack_710 = &pppuStack_690;
    _objc_retain(puVar8);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar3 = auStack_760;
      func_0x00010002b838(auStack_760,puVar2);
      uStack_780 = 0;
      uStack_778 = 0;
      uStack_770 = 0;
      func_0x00010007e1e8(&uStack_780,auStack_760,&lStack_748,1);
      puVar15 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_780,puVar9);
      puStack_768 = (undefined1 *)&uStack_780;
      func_0x00010007e5dc(&puStack_768);
      puVar11 = puVar10;
      puVar14 = puVar9;
      puVar6 = &uStack_780;
      if (cStack_749 < '\0') {
        __ZdlPv(auStack_760[0]);
        puVar11 = puVar10;
        puVar14 = puVar9;
        puVar6 = &uStack_780;
      }
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_788 = FUN_1062680b8;
    lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar15;
    puVar9 = puVar11;
    puStack_7c0 = puVar5;
    puStack_7b8 = puVar3;
    puStack_7b0 = puVar6;
    plStack_7a8 = plVar17;
    puStack_7a0 = puVar2;
    puStack_798 = puVar8;
    pppuStack_790 = &pppuStack_710;
    _objc_retain(puVar15);
    _objc_retain(puVar11);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar5 = auStack_7f8;
      func_0x00010002b838(auStack_7f8,puVar2);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar3 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_7e0,puVar3);
      uStack_818 = 0;
      uStack_810 = 0;
      uStack_808 = 0;
      func_0x00010007e1e8(&uStack_818,auStack_7f8,&lStack_7c8,2);
      puVar7 = &UNK_110918ad0;
      puVar3 = &uStack_818;
      puVar9 = &uStack_818;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar9,puVar14);
      puStack_800 = puVar3;
      func_0x00010007e5dc(&puStack_800);
      lVar16 = 0;
      puVar6 = auStack_7f8;
      do {
        if ((&cStack_7c9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7e0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar11);
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7c8) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_7e1 < '\0') {
        __ZdlPv(auStack_7f8[0]);
      }
      _objc_release(puVar11);
      _objc_release(puVar15);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar12 = &uStack_8a0;
      pcStack_828 = FUN_1062682e8;
      lStack_868 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar7;
      puVar10 = puVar9;
      puStack_860 = puVar5;
      puStack_858 = puVar3;
      puStack_850 = puVar6;
      puStack_848 = puVar2;
      puStack_840 = puVar11;
      puStack_838 = puVar15;
      pppuStack_830 = &pppuStack_790;
      _objc_retain(puVar7);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar7;
          _objc_retainAutorelease(puVar7);
          func_0x00010bdc3520();
        }
        _objc_release(puVar7);
        puVar3 = auStack_880;
        func_0x00010002b838(auStack_880,puVar2);
        uStack_8a0 = 0;
        uStack_898 = 0;
        uStack_890 = 0;
        func_0x00010007e1e8(&uStack_8a0,auStack_880,&lStack_868,1);
        puVar8 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_8a0,puVar9);
        puStack_888 = (undefined1 *)&uStack_8a0;
        func_0x00010007e5dc(&puStack_888);
        puVar10 = puVar12;
        puVar6 = &uStack_8a0;
        if (cStack_869 < '\0') {
          __ZdlPv(auStack_880[0]);
          puVar10 = puVar12;
          puVar6 = &uStack_8a0;
        }
      }
      puVar2 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_868) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar11 = &uStack_920;
      pcStack_8a8 = FUN_10626845c;
      lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar8;
      puVar9 = puVar10;
      puStack_8e0 = puVar5;
      puStack_8d8 = puVar3;
      puStack_8d0 = puVar6;
      plStack_8c8 = plVar17;
      puStack_8c0 = puVar2;
      puStack_8b8 = puVar7;
      pppuStack_8b0 = &pppuStack_830;
      _objc_retain(puVar8);
      plVar17 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        puVar3 = auStack_900;
        func_0x00010002b838(auStack_900,puVar2);
        uStack_920 = 0;
        uStack_918 = 0;
        uStack_910 = 0;
        func_0x00010007e1e8(&uStack_920,auStack_900,&lStack_8e8,1);
        puVar15 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_920,puVar10);
        puStack_908 = (undefined1 *)&uStack_920;
        func_0x00010007e5dc(&puStack_908);
        puVar9 = puVar11;
        puVar6 = &uStack_920;
        if (cStack_8e9 < '\0') {
          __ZdlPv(auStack_900[0]);
          puVar9 = puVar11;
          puVar6 = &uStack_920;
        }
      }
      puVar2 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar7 = puVar2;
      __Unwind_Resume();
      pcStack_928 = FUN_1062685d0;
      lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_960 = puVar5;
      puStack_958 = puVar3;
      puStack_950 = puVar6;
      plStack_948 = plVar17;
      puStack_940 = puVar2;
      puStack_938 = puVar8;
      pppuStack_930 = &pppuStack_8b0;
      _objc_retain(puVar15);
      if (puVar7 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar7 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        func_0x00010002b838(auStack_980,puVar2);
        uStack_9a0 = 0;
        uStack_998 = 0;
        uStack_990 = 0;
        func_0x00010007e1e8(&uStack_9a0,auStack_980,&lStack_968,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_9a0,puVar9);
        puStack_988 = (undefined1 *)&uStack_9a0;
        func_0x00010007e5dc(&puStack_988);
        if (cStack_969 < '\0') {
          __ZdlPv(auStack_980[0]);
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_968) {
        ___stack_chk_fail();
        _objc_release(puVar15);
        _objc_release(puVar15);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106266ac4; end: 106266d3b;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106266d0c) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106266ac4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined1 *puStack_8e8;
  undefined8 auStack_8e0 [2];
  char cStack_8c9;
  long lStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 *puStack_8b0;
  long *plStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined8 ***pppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 *puStack_868;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 *puStack_830;
  long *plStack_828;
  undefined *puStack_820;
  undefined *puStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined1 *puStack_7e8;
  undefined8 auStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  undefined *puStack_7a8;
  undefined8 *puStack_7a0;
  undefined *puStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 *puStack_760;
  undefined8 auStack_758 [2];
  char cStack_741;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  undefined8 *puStack_720;
  undefined8 *puStack_718;
  undefined8 *puStack_710;
  long *plStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 *puStack_6c8;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined *puStack_608;
  undefined8 *puStack_600;
  undefined *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [3];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [3];
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar6 = param_3;
  puVar7 = param_4;
  puVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_110918760;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar6 = puVar4;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar15;
  __Unwind_Resume();
  pcStack_c8 = FUN_106266d3c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar4 = puVar6;
  puVar9 = puVar7;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_e8 = puVar15;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  puVar14 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    param_3 = auStack_138;
    func_0x00010002b838(auStack_138,puVar15);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_120,puVar4);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar8 = &UNK_1109187b0;
    unaff_x23 = &uStack_158;
    puVar4 = &uStack_158;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_140 = unaff_x23;
    func_0x00010007e5dc(&puStack_140);
    lVar16 = 0;
    puVar14 = auStack_138;
    puVar9 = puVar7;
    do {
      if ((&cStack_109)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar6);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar5 = puVar15;
  __Unwind_Resume();
  pcStack_168 = FUN_106266f6c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar7 = puVar4;
  puVar12 = puVar9;
  puStack_1a0 = param_3;
  puStack_198 = unaff_x23;
  puStack_190 = puVar14;
  puStack_188 = puVar15;
  puStack_180 = puVar6;
  puStack_178 = puVar2;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1d8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar6 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1c0,puVar6);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar3 = &UNK_110918800;
    unaff_x23 = &uStack_1f8;
    puVar7 = &uStack_1f8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1e0);
    lVar16 = 0;
    puVar12 = puVar9;
    do {
      if ((&cStack_1a9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar9 = &uStack_2c0;
  pcStack_208 = FUN_10626719c;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar4 = puVar7;
  puVar14 = puVar12;
  puVar6 = puVar10;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar3);
  _objc_retain(puVar12);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x25 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_288,pcVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar7 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_270,puVar7);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
    puVar15 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar16 = 0;
    puVar4 = puVar9;
    puVar14 = puVar10;
    do {
      if ((&cStack_259)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_2c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar12);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_2a0);
  _objc_release(puVar12);
  _objc_release(puVar3);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_340;
  pcStack_2c8 = FUN_106267414;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar15;
  puVar10 = puVar4;
  puStack_300 = puVar7;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = auStack_2a0;
  puStack_2e8 = puVar2;
  puStack_2e0 = puVar12;
  puStack_2d8 = puVar3;
  pppuStack_2d0 = &pppuStack_210;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  puVar9 = auStack_2a0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    unaff_x23 = auStack_320;
    func_0x00010002b838(auStack_320,puVar2);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    puVar8 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar10 = puVar11;
    puVar14 = puVar4;
    puVar9 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar10 = puVar11;
      puVar14 = puVar4;
      puVar9 = &uStack_340;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_3c0;
  pcStack_348 = FUN_106267588;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar4 = puVar10;
  puStack_380 = puVar7;
  puStack_378 = unaff_x23;
  puStack_370 = puVar9;
  plStack_368 = plVar17;
  puStack_360 = puVar2;
  puStack_358 = puVar15;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar8);
  plVar17 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,puVar2);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar3 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar4 = puVar12;
    puVar14 = puVar10;
    puVar9 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar4 = puVar12;
      puVar14 = puVar10;
      puVar9 = &uStack_3c0;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_440;
  pcStack_3c8 = FUN_1062676fc;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar10 = puVar4;
  puStack_400 = puVar7;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar9;
  plStack_3e8 = plVar17;
  puStack_3e0 = puVar2;
  puStack_3d8 = puVar8;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_420,puVar2);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_408,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar10 = puVar12;
    puVar14 = puVar4;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar10 = puVar12;
      puVar14 = puVar4;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  pcStack_448 = FUN_106267870;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar15;
  puVar7 = puVar10;
  puVar4 = puVar14;
  puVar9 = puVar6;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(puVar15);
  _objc_retain(puVar10);
  _objc_retain(puVar14);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_4f8,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar7 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_4e0,puVar7);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar7 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_4c8,puVar7);
    unaff_x26 = auStack_4f8;
    unaff_x25 = auStack_4b0;
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_498,4);
    puVar8 = &UNK_110918990;
    puVar6 = &uStack_518;
    puVar7 = &uStack_518;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_500 = puVar6;
    func_0x00010007e5dc(&puStack_500);
    lVar16 = 0;
    puVar4 = param_6;
    do {
      if ((&cStack_499)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar14);
  _objc_release(puVar10);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_4f8);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_5e0;
  pcStack_528 = FUN_106267b58;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar12 = puVar7;
  puVar11 = puVar4;
  puStack_570 = unaff_x26;
  puStack_568 = unaff_x25;
  puStack_560 = puVar6;
  puStack_558 = auStack_4f8;
  puStack_550 = puVar2;
  puStack_548 = puVar14;
  puStack_540 = puVar10;
  puStack_538 = puVar15;
  pppuStack_530 = &pppuStack_450;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  puVar6 = auStack_4f8;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_5c0,puVar2);
    pcVar1 = "true";
    if ((int)puVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_5a8,pcVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar7 = puVar4;
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_590,puVar7);
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    func_0x00010007e1e8(&uStack_5e0,auStack_5c0,&lStack_578,3);
    puVar3 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_5e0,puVar9);
    puStack_5c8 = (undefined1 *)&uStack_5e0;
    func_0x00010007e5dc(&puStack_5c8);
    lVar16 = 0;
    puVar12 = puVar13;
    puVar11 = puVar9;
    do {
      if ((&cStack_579)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar6 = &uStack_5e0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar4);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  do {
    puVar6 = puVar6 + -3;
  } while (puVar6 != auStack_5c0);
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_660;
  pcStack_5e8 = FUN_106267dd0;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar10 = puVar12;
  puStack_620 = puVar7;
  puStack_618 = puVar6;
  puStack_610 = auStack_5c0;
  puStack_608 = puVar2;
  puStack_600 = puVar4;
  puStack_5f8 = puVar8;
  pppuStack_5f0 = &pppuStack_530;
  _objc_retain(puVar3);
  plVar17 = (long *)0x0;
  puVar4 = auStack_5c0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar6 = auStack_640;
    func_0x00010002b838(auStack_640,puVar2);
    uStack_660 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    func_0x00010007e1e8(&uStack_660,auStack_640,&lStack_628,1);
    puVar15 = &UNK_110918a30;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_660,puVar12);
    puStack_648 = (undefined1 *)&uStack_660;
    func_0x00010007e5dc(&puStack_648);
    puVar10 = puVar14;
    puVar11 = puVar12;
    puVar4 = &uStack_660;
    if (cStack_629 < '\0') {
      __ZdlPv(auStack_640[0]);
      puVar10 = puVar14;
      puVar11 = puVar12;
      puVar4 = &uStack_660;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_6e0;
  pcStack_668 = FUN_106267f44;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar15;
  puVar14 = puVar10;
  puStack_6a0 = puVar7;
  puStack_698 = puVar6;
  puStack_690 = puVar4;
  plStack_688 = plVar17;
  puStack_680 = puVar2;
  puStack_678 = puVar3;
  pppuStack_670 = &pppuStack_5f0;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar6 = auStack_6c0;
    func_0x00010002b838(auStack_6c0,puVar2);
    uStack_6e0 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    func_0x00010007e1e8(&uStack_6e0,auStack_6c0,&lStack_6a8,1);
    puVar8 = &UNK_110918a80;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_6e0,puVar10);
    puStack_6c8 = (undefined1 *)&uStack_6e0;
    func_0x00010007e5dc(&puStack_6c8);
    puVar14 = puVar9;
    puVar11 = puVar10;
    puVar4 = &uStack_6e0;
    if (cStack_6a9 < '\0') {
      __ZdlPv(auStack_6c0[0]);
      puVar14 = puVar9;
      puVar11 = puVar10;
      puVar4 = &uStack_6e0;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_6e8 = FUN_1062680b8;
  lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar10 = puVar14;
  puStack_720 = puVar7;
  puStack_718 = puVar6;
  puStack_710 = puVar4;
  plStack_708 = plVar17;
  puStack_700 = puVar2;
  puStack_6f8 = puVar15;
  pppuStack_6f0 = &pppuStack_670;
  _objc_retain(puVar8);
  _objc_retain(puVar14);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar7 = auStack_758;
    func_0x00010002b838(auStack_758,puVar2);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar6 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_740,puVar6);
    uStack_778 = 0;
    uStack_770 = 0;
    uStack_768 = 0;
    func_0x00010007e1e8(&uStack_778,auStack_758,&lStack_728,2);
    puVar3 = &UNK_110918ad0;
    puVar6 = &uStack_778;
    puVar10 = &uStack_778;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar10,puVar11);
    puStack_760 = puVar6;
    func_0x00010007e5dc(&puStack_760);
    lVar16 = 0;
    puVar4 = auStack_758;
    do {
      if ((&cStack_729)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_740 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar14);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_728) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    if (cStack_741 < '\0') {
      __ZdlPv(auStack_758[0]);
    }
    _objc_release(puVar14);
    _objc_release(puVar8);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_800;
    pcStack_788 = FUN_1062682e8;
    lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar3;
    puVar9 = puVar10;
    puStack_7c0 = puVar7;
    puStack_7b8 = puVar6;
    puStack_7b0 = puVar4;
    puStack_7a8 = puVar2;
    puStack_7a0 = puVar14;
    puStack_798 = puVar8;
    pppuStack_790 = &pppuStack_6f0;
    _objc_retain(puVar3);
    plVar17 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      puVar6 = auStack_7e0;
      func_0x00010002b838(auStack_7e0,puVar2);
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      func_0x00010007e1e8(&uStack_800,auStack_7e0,&lStack_7c8,1);
      puVar15 = &UNK_110918b20;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_800,puVar10);
      puStack_7e8 = (undefined1 *)&uStack_800;
      func_0x00010007e5dc(&puStack_7e8);
      puVar9 = puVar12;
      puVar4 = &uStack_800;
      if (cStack_7c9 < '\0') {
        __ZdlPv(auStack_7e0[0]);
        puVar9 = puVar12;
        puVar4 = &uStack_800;
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar14 = &uStack_880;
    pcStack_808 = FUN_10626845c;
    lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar15;
    puVar10 = puVar9;
    puStack_840 = puVar7;
    puStack_838 = puVar6;
    puStack_830 = puVar4;
    plStack_828 = plVar17;
    puStack_820 = puVar2;
    puStack_818 = puVar3;
    pppuStack_810 = &pppuStack_790;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar5 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar6 = auStack_860;
      func_0x00010002b838(auStack_860,puVar2);
      uStack_880 = 0;
      uStack_878 = 0;
      uStack_870 = 0;
      func_0x00010007e1e8(&uStack_880,auStack_860,&lStack_848,1);
      puVar8 = &UNK_110918b70;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_880,puVar9);
      puStack_868 = (undefined1 *)&uStack_880;
      func_0x00010007e5dc(&puStack_868);
      puVar10 = puVar14;
      puVar4 = &uStack_880;
      if (cStack_849 < '\0') {
        __ZdlPv(auStack_860[0]);
        puVar10 = puVar14;
        puVar4 = &uStack_880;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar3 = puVar2;
    __Unwind_Resume();
    pcStack_888 = FUN_1062685d0;
    lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_8c0 = puVar7;
    puStack_8b8 = puVar6;
    puStack_8b0 = puVar4;
    plStack_8a8 = plVar17;
    puStack_8a0 = puVar2;
    puStack_898 = puVar15;
    pppuStack_890 = &pppuStack_810;
    _objc_retain(puVar8);
    if (puVar3 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar3 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_8e0,puVar2);
      uStack_900 = 0;
      uStack_8f8 = 0;
      uStack_8f0 = 0;
      func_0x00010007e1e8(&uStack_900,auStack_8e0,&lStack_8c8,1);
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_900,puVar10);
      puStack_8e8 = (undefined1 *)&uStack_900;
      func_0x00010007e5dc(&puStack_8e8);
      if (cStack_8c9 < '\0') {
        __ZdlPv(auStack_8e0[0]);
      }
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8c8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      __Unwind_Resume();
      _objc_retain();
      puVar15 = puVar2;
      func_0x00010c131a00();
      if (puVar15 == (undefined *)0x1) {
        puVar15 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
        _objc_release();
      }
      else {
        puVar15 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      return puVar15;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106266d3c; end: 106266f6b;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106266d3c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 *puStack_828;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  long *plStack_7e8;
  undefined *puStack_7e0;
  undefined *puStack_7d8;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  long *plStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 auStack_698 [2];
  char cStack_681;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  long *plStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  long *plStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined *puStack_548;
  undefined8 *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [3];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [3];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar2 = param_2;
  puVar3 = param_3;
  puVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_1109187b0;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar16 = 0;
    puVar5 = auStack_78;
    puVar12 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(param_3);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar15;
  __Unwind_Resume();
  pcStack_a8 = FUN_106266f6c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar3;
  puVar13 = puVar12;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar15;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_118,puVar15);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = &UNK_110918800;
    unaff_x23 = &uStack_138;
    puVar6 = &uStack_138;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar16 = 0;
    puVar13 = puVar12;
    do {
      if ((&cStack_e9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar3);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar9 = &uStack_200;
  pcStack_148 = FUN_10626719c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar5 = puVar6;
  puVar12 = puVar13;
  puVar3 = param_5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x25 = auStack_1e0;
    func_0x00010002b838(auStack_1e0,puVar2);
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar6 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_1b0,puVar6);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
    puVar2 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar16 = 0;
    puVar5 = puVar9;
    puVar12 = param_5;
    do {
      if ((&cStack_199)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_200;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar13);
  puVar15 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_1e0);
  _objc_release(puVar13);
  _objc_release(puVar8);
  puVar7 = puVar15;
  __Unwind_Resume();
  puVar10 = &uStack_280;
  pcStack_208 = FUN_106267414;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar9 = puVar5;
  puStack_240 = puVar6;
  puStack_238 = unaff_x23;
  puStack_230 = auStack_1e0;
  puStack_228 = puVar15;
  puStack_220 = puVar13;
  puStack_218 = puVar8;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(puVar2);
  plVar17 = (long *)0x0;
  puVar13 = auStack_1e0;
  if (puVar7 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar7 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_260;
    func_0x00010002b838(auStack_260,puVar15);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar4 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar9 = puVar10;
    puVar12 = puVar5;
    puVar13 = &uStack_280;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar9 = puVar10;
      puVar12 = puVar5;
      puVar13 = &uStack_280;
    }
  }
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar7 = puVar15;
  __Unwind_Resume();
  puVar10 = &uStack_300;
  pcStack_288 = FUN_106267588;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar4;
  puVar5 = puVar9;
  puStack_2c0 = puVar6;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar13;
  plStack_2a8 = plVar17;
  puStack_2a0 = puVar15;
  puStack_298 = puVar2;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar4);
  plVar17 = (long *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar7 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_2e0;
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar8 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar5 = puVar10;
    puVar12 = puVar9;
    puVar13 = &uStack_300;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar5 = puVar10;
      puVar12 = puVar9;
      puVar13 = &uStack_300;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_380;
  pcStack_308 = FUN_1062676fc;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar8;
  puVar9 = puVar5;
  puStack_340 = puVar6;
  puStack_338 = unaff_x23;
  puStack_330 = puVar13;
  plStack_328 = plVar17;
  puStack_320 = puVar2;
  puStack_318 = puVar4;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar8);
  if (puVar7 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_360,puVar2);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar9 = puVar10;
    puVar12 = puVar5;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar9 = puVar10;
      puVar12 = puVar5;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  pcStack_388 = FUN_106267870;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar15;
  puVar5 = puVar9;
  puVar6 = puVar12;
  puVar13 = puVar3;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(puVar15);
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_438,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_420,puVar5);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar5 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_408,puVar5);
    unaff_x26 = auStack_438;
    unaff_x25 = auStack_3f0;
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_3d8,4);
    puVar8 = &UNK_110918990;
    puVar3 = &uStack_458;
    puVar5 = &uStack_458;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_440 = puVar3;
    func_0x00010007e5dc(&puStack_440);
    lVar16 = 0;
    puVar6 = param_6;
    do {
      if ((&cStack_3d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar12);
  _objc_release(puVar9);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_438);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar15);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_520;
  pcStack_468 = FUN_106267b58;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  puVar10 = puVar5;
  puVar14 = puVar6;
  puStack_4b0 = unaff_x26;
  puStack_4a8 = unaff_x25;
  puStack_4a0 = puVar3;
  puStack_498 = auStack_438;
  puStack_490 = puVar2;
  puStack_488 = puVar12;
  puStack_480 = puVar9;
  puStack_478 = puVar15;
  pppuStack_470 = &pppuStack_390;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  puVar3 = auStack_438;
  if (puVar7 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_500,puVar2);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_4e8,pcVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar5 = puVar6;
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_4d0,puVar5);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x00010007e1e8(&uStack_520,auStack_500,&lStack_4b8,3);
    puVar4 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_520,puVar13);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x00010007e5dc(&puStack_508);
    lVar16 = 0;
    puVar10 = puVar11;
    puVar14 = puVar13;
    do {
      if ((&cStack_4b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar3 = &uStack_520;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar6);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != auStack_500);
    _objc_release(puVar6);
    _objc_release(puVar8);
    puVar7 = puVar2;
    __Unwind_Resume();
    puVar13 = &uStack_5a0;
    pcStack_528 = FUN_106267dd0;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar4;
    puVar12 = puVar10;
    puStack_560 = puVar5;
    puStack_558 = puVar3;
    puStack_550 = auStack_500;
    puStack_548 = puVar2;
    puStack_540 = puVar6;
    puStack_538 = puVar8;
    pppuStack_530 = &pppuStack_470;
    _objc_retain(puVar4);
    plVar17 = (long *)0x0;
    puVar6 = auStack_500;
    if (puVar7 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar7 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      puVar3 = auStack_580;
      func_0x00010002b838(auStack_580,puVar2);
      uStack_5a0 = 0;
      uStack_598 = 0;
      uStack_590 = 0;
      func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_568,1);
      puVar15 = &UNK_110918a30;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_5a0,puVar10);
      puStack_588 = (undefined1 *)&uStack_5a0;
      func_0x00010007e5dc(&puStack_588);
      puVar12 = puVar13;
      puVar14 = puVar10;
      puVar6 = &uStack_5a0;
      if (cStack_569 < '\0') {
        __ZdlPv(auStack_580[0]);
        puVar12 = puVar13;
        puVar14 = puVar10;
        puVar6 = &uStack_5a0;
      }
    }
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar7 = puVar2;
    __Unwind_Resume();
    puVar9 = &uStack_620;
    pcStack_5a8 = FUN_106267f44;
    lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar15;
    puVar13 = puVar12;
    puStack_5e0 = puVar5;
    puStack_5d8 = puVar3;
    puStack_5d0 = puVar6;
    plStack_5c8 = plVar17;
    puStack_5c0 = puVar2;
    puStack_5b8 = puVar4;
    pppuStack_5b0 = &pppuStack_530;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar7 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar7 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar3 = auStack_600;
      func_0x00010002b838(auStack_600,puVar2);
      uStack_620 = 0;
      uStack_618 = 0;
      uStack_610 = 0;
      func_0x00010007e1e8(&uStack_620,auStack_600,&lStack_5e8,1);
      puVar8 = &UNK_110918a80;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_620,puVar12);
      puStack_608 = (undefined1 *)&uStack_620;
      func_0x00010007e5dc(&puStack_608);
      puVar13 = puVar9;
      puVar14 = puVar12;
      puVar6 = &uStack_620;
      if (cStack_5e9 < '\0') {
        __ZdlPv(auStack_600[0]);
        puVar13 = puVar9;
        puVar14 = puVar12;
        puVar6 = &uStack_620;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar7 = puVar2;
    __Unwind_Resume();
    pcStack_628 = FUN_1062680b8;
    lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar8;
    puVar12 = puVar13;
    puStack_660 = puVar5;
    puStack_658 = puVar3;
    puStack_650 = puVar6;
    plStack_648 = plVar17;
    puStack_640 = puVar2;
    puStack_638 = puVar15;
    pppuStack_630 = &pppuStack_5b0;
    _objc_retain(puVar8);
    _objc_retain(puVar13);
    puVar6 = (undefined8 *)0x0;
    if (puVar7 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar7 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar5 = auStack_698;
      func_0x00010002b838(auStack_698,puVar2);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar3 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_680,puVar3);
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_6a8 = 0;
      func_0x00010007e1e8(&uStack_6b8,auStack_698,&lStack_668,2);
      puVar4 = &UNK_110918ad0;
      puVar3 = &uStack_6b8;
      puVar12 = &uStack_6b8;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar12,puVar14);
      puStack_6a0 = puVar3;
      func_0x00010007e5dc(&puStack_6a0);
      lVar16 = 0;
      puVar6 = auStack_698;
      do {
        if ((&cStack_669)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar13);
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
      ___stack_chk_fail();
      _objc_release(puVar13);
      if (cStack_681 < '\0') {
        __ZdlPv(auStack_698[0]);
      }
      _objc_release(puVar13);
      _objc_release(puVar8);
      puVar7 = puVar2;
      __Unwind_Resume();
      puVar10 = &uStack_740;
      pcStack_6c8 = FUN_1062682e8;
      lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = puVar4;
      puVar9 = puVar12;
      puStack_700 = puVar5;
      puStack_6f8 = puVar3;
      puStack_6f0 = puVar6;
      puStack_6e8 = puVar2;
      puStack_6e0 = puVar13;
      puStack_6d8 = puVar8;
      pppuStack_6d0 = &pppuStack_630;
      _objc_retain(puVar4);
      plVar17 = (long *)0x0;
      if (puVar7 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar7 + 8);
        _objc_retain(puVar4);
        if (puVar4 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar4;
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc3520();
        }
        _objc_release(puVar4);
        puVar3 = auStack_720;
        func_0x00010002b838(auStack_720,puVar2);
        uStack_740 = 0;
        uStack_738 = 0;
        uStack_730 = 0;
        func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_708,1);
        puVar15 = &UNK_110918b20;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_740,puVar12);
        puStack_728 = (undefined1 *)&uStack_740;
        func_0x00010007e5dc(&puStack_728);
        puVar9 = puVar10;
        puVar6 = &uStack_740;
        if (cStack_709 < '\0') {
          __ZdlPv(auStack_720[0]);
          puVar9 = puVar10;
          puVar6 = &uStack_740;
        }
      }
      puVar2 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar4);
      puVar7 = puVar2;
      __Unwind_Resume();
      puVar13 = &uStack_7c0;
      pcStack_748 = FUN_10626845c;
      lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar15;
      puVar12 = puVar9;
      puStack_780 = puVar5;
      puStack_778 = puVar3;
      puStack_770 = puVar6;
      plStack_768 = plVar17;
      puStack_760 = puVar2;
      puStack_758 = puVar4;
      pppuStack_750 = &pppuStack_6d0;
      _objc_retain(puVar15);
      plVar17 = (long *)0x0;
      if (puVar7 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar7 + 8);
        _objc_retain(puVar15);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar15;
          _objc_retainAutorelease(puVar15);
          func_0x00010bdc3520();
        }
        _objc_release(puVar15);
        puVar3 = auStack_7a0;
        func_0x00010002b838(auStack_7a0,puVar2);
        uStack_7c0 = 0;
        uStack_7b8 = 0;
        uStack_7b0 = 0;
        func_0x00010007e1e8(&uStack_7c0,auStack_7a0,&lStack_788,1);
        puVar8 = &UNK_110918b70;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_7c0,puVar9);
        puStack_7a8 = (undefined1 *)&uStack_7c0;
        func_0x00010007e5dc(&puStack_7a8);
        puVar12 = puVar13;
        puVar6 = &uStack_7c0;
        if (cStack_789 < '\0') {
          __ZdlPv(auStack_7a0[0]);
          puVar12 = puVar13;
          puVar6 = &uStack_7c0;
        }
      }
      puVar2 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_7c8 = FUN_1062685d0;
      lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_800 = puVar5;
      puStack_7f8 = puVar3;
      puStack_7f0 = puVar6;
      plStack_7e8 = plVar17;
      puStack_7e0 = puVar2;
      puStack_7d8 = puVar15;
      pppuStack_7d0 = &pppuStack_750;
      _objc_retain(puVar8);
      if (puVar4 != (undefined *)0x0) {
        plVar17 = *(long **)(puVar4 + 8);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_820,puVar2);
        uStack_840 = 0;
        uStack_838 = 0;
        uStack_830 = 0;
        func_0x00010007e1e8(&uStack_840,auStack_820,&lStack_808,1);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_840,puVar12);
        puStack_828 = (undefined1 *)&uStack_840;
        func_0x00010007e5dc(&puStack_828);
        if (cStack_809 < '\0') {
          __ZdlPv(auStack_820[0]);
        }
      }
      puVar2 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_808) {
        ___stack_chk_fail();
        _objc_release(puVar8);
        _objc_release(puVar8);
        __Unwind_Resume();
        _objc_retain();
        puVar15 = puVar2;
        func_0x00010c131a00();
        if (puVar15 == (undefined *)0x1) {
          puVar15 = puVar2;
          func_0x00010c0f3b40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
          _objc_release();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
        _objc_release(puVar2);
        return puVar15;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106266f6c; end: 10626719b;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106266f6c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  long *plStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  long *plStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 *puStack_688;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined *puStack_648;
  undefined8 *puStack_640;
  undefined *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  undefined8 auStack_5f8 [2];
  char cStack_5e1;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  long *plStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  long *plStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [3];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [3];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar2 = param_2;
  puVar3 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_110918800;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar16 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(param_3);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_160;
  pcStack_a8 = FUN_10626719c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar3;
  puVar12 = puVar5;
  puVar14 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  if (puVar15 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar15 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x25 = auStack_140;
    func_0x00010002b838(auStack_140,puVar15);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar7 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar16 = 0;
    puVar8 = puVar9;
    puVar12 = param_5;
    do {
      if ((&cStack_f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar5);
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_140);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar15;
  __Unwind_Resume();
  puVar10 = &uStack_1e0;
  pcStack_168 = FUN_106267414;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar9 = puVar8;
  puStack_1a0 = puVar3;
  puStack_198 = unaff_x23;
  puStack_190 = auStack_140;
  puStack_188 = puVar15;
  puStack_180 = puVar5;
  puStack_178 = puVar2;
  ppuStack_170 = &puStack_b0;
  _objc_retain(puVar7);
  plVar17 = (long *)0x0;
  puVar5 = auStack_140;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1c0;
    func_0x00010002b838(auStack_1c0,puVar2);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
    puVar6 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    puVar9 = puVar10;
    puVar12 = puVar8;
    puVar5 = &uStack_1e0;
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
      puVar9 = puVar10;
      puVar12 = puVar8;
      puVar5 = &uStack_1e0;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_260;
  pcStack_1e8 = FUN_106267588;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar6;
  puVar8 = puVar9;
  puStack_220 = puVar3;
  puStack_218 = unaff_x23;
  puStack_210 = puVar5;
  plStack_208 = plVar17;
  puStack_200 = puVar2;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_170;
  _objc_retain(puVar6);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_240;
    func_0x00010002b838(auStack_240,puVar2);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar15 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    puVar8 = puVar10;
    puVar12 = puVar9;
    puVar5 = &uStack_260;
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
      puVar8 = puVar10;
      puVar12 = puVar9;
      puVar5 = &uStack_260;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_2e0;
  pcStack_268 = FUN_1062676fc;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar15;
  puVar9 = puVar8;
  puStack_2a0 = puVar3;
  puStack_298 = unaff_x23;
  puStack_290 = puVar5;
  plStack_288 = plVar17;
  puStack_280 = puVar2;
  puStack_278 = puVar6;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(puVar15);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_2c0,puVar2);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
    puVar7 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    puVar9 = puVar10;
    puVar12 = puVar8;
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
      puVar9 = puVar10;
      puVar12 = puVar8;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  __Unwind_Resume();
  pcStack_2e8 = FUN_106267870;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar7;
  puVar3 = puVar9;
  puVar5 = puVar12;
  puVar8 = puVar14;
  pppuStack_2f0 = &pppuStack_270;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_398,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_380,puVar3);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar3 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_368,puVar3);
    unaff_x26 = auStack_398;
    unaff_x25 = auStack_350;
    pcVar1 = "true";
    if ((int)puVar14 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_338,4);
    puVar15 = &UNK_110918990;
    puVar14 = &uStack_3b8;
    puVar3 = &uStack_3b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_3a0 = puVar14;
    func_0x00010007e5dc(&puStack_3a0);
    lVar16 = 0;
    puVar5 = param_6;
    do {
      if ((&cStack_339)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar12);
  _objc_release(puVar9);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_398);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_480;
  pcStack_3c8 = FUN_106267b58;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar15;
  puVar10 = puVar3;
  puVar13 = puVar5;
  puStack_410 = unaff_x26;
  puStack_408 = unaff_x25;
  puStack_400 = puVar14;
  puStack_3f8 = auStack_398;
  puStack_3f0 = puVar2;
  puStack_3e8 = puVar12;
  puStack_3e0 = puVar9;
  puStack_3d8 = puVar7;
  pppuStack_3d0 = &pppuStack_2f0;
  _objc_retain(puVar15);
  _objc_retain(puVar5);
  puVar14 = auStack_398;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_460,puVar2);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_448,pcVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_430,puVar3);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_418,3);
    puVar6 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_480,puVar8);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    lVar16 = 0;
    puVar10 = puVar11;
    puVar13 = puVar8;
    do {
      if ((&cStack_419)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar14 = &uStack_480;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar5);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  do {
    puVar14 = puVar14 + -3;
  } while (puVar14 != auStack_460);
  _objc_release(puVar5);
  _objc_release(puVar15);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_500;
  pcStack_488 = FUN_106267dd0;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar10;
  puStack_4c0 = puVar3;
  puStack_4b8 = puVar14;
  puStack_4b0 = auStack_460;
  puStack_4a8 = puVar2;
  puStack_4a0 = puVar5;
  puStack_498 = puVar15;
  pppuStack_490 = &pppuStack_3d0;
  _objc_retain(puVar6);
  plVar17 = (long *)0x0;
  puVar5 = auStack_460;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar14 = auStack_4e0;
    func_0x00010002b838(auStack_4e0,puVar2);
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
    puVar7 = &UNK_110918a30;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_500,puVar10);
    puStack_4e8 = (undefined1 *)&uStack_500;
    func_0x00010007e5dc(&puStack_4e8);
    puVar8 = puVar12;
    puVar13 = puVar10;
    puVar5 = &uStack_500;
    if (cStack_4c9 < '\0') {
      __ZdlPv(auStack_4e0[0]);
      puVar8 = puVar12;
      puVar13 = puVar10;
      puVar5 = &uStack_500;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_580;
  pcStack_508 = FUN_106267f44;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar7;
  puVar12 = puVar8;
  puStack_540 = puVar3;
  puStack_538 = puVar14;
  puStack_530 = puVar5;
  plStack_528 = plVar17;
  puStack_520 = puVar2;
  puStack_518 = puVar6;
  pppuStack_510 = &pppuStack_490;
  _objc_retain(puVar7);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar14 = auStack_560;
    func_0x00010002b838(auStack_560,puVar2);
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
    puVar15 = &UNK_110918a80;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_580,puVar8);
    puStack_568 = (undefined1 *)&uStack_580;
    func_0x00010007e5dc(&puStack_568);
    puVar12 = puVar9;
    puVar13 = puVar8;
    puVar5 = &uStack_580;
    if (cStack_549 < '\0') {
      __ZdlPv(auStack_560[0]);
      puVar12 = puVar9;
      puVar13 = puVar8;
      puVar5 = &uStack_580;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_588 = FUN_1062680b8;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar15;
  puVar8 = puVar12;
  puStack_5c0 = puVar3;
  puStack_5b8 = puVar14;
  puStack_5b0 = puVar5;
  plStack_5a8 = plVar17;
  puStack_5a0 = puVar2;
  puStack_598 = puVar7;
  pppuStack_590 = &pppuStack_510;
  _objc_retain(puVar15);
  _objc_retain(puVar12);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar3 = auStack_5f8;
    func_0x00010002b838(auStack_5f8,puVar2);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar5 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_5e0,puVar5);
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x00010007e1e8(&uStack_618,auStack_5f8,&lStack_5c8,2);
    puVar6 = &UNK_110918ad0;
    puVar14 = &uStack_618;
    puVar8 = &uStack_618;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar8,puVar13);
    puStack_600 = puVar14;
    func_0x00010007e5dc(&puStack_600);
    lVar16 = 0;
    puVar5 = auStack_5f8;
    do {
      if ((&cStack_5c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar12);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_5e1 < '\0') {
      __ZdlPv(auStack_5f8[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar10 = &uStack_6a0;
    pcStack_628 = FUN_1062682e8;
    lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puVar9 = puVar8;
    puStack_660 = puVar3;
    puStack_658 = puVar14;
    puStack_650 = puVar5;
    puStack_648 = puVar2;
    puStack_640 = puVar12;
    puStack_638 = puVar15;
    pppuStack_630 = &pppuStack_590;
    _objc_retain(puVar6);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      puVar14 = auStack_680;
      func_0x00010002b838(auStack_680,puVar2);
      uStack_6a0 = 0;
      uStack_698 = 0;
      uStack_690 = 0;
      func_0x00010007e1e8(&uStack_6a0,auStack_680,&lStack_668,1);
      puVar7 = &UNK_110918b20;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_6a0,puVar8);
      puStack_688 = (undefined1 *)&uStack_6a0;
      func_0x00010007e5dc(&puStack_688);
      puVar9 = puVar10;
      puVar5 = &uStack_6a0;
      if (cStack_669 < '\0') {
        __ZdlPv(auStack_680[0]);
        puVar9 = puVar10;
        puVar5 = &uStack_6a0;
      }
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_720;
    pcStack_6a8 = FUN_10626845c;
    lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar7;
    puVar8 = puVar9;
    puStack_6e0 = puVar3;
    puStack_6d8 = puVar14;
    puStack_6d0 = puVar5;
    plStack_6c8 = plVar17;
    puStack_6c0 = puVar2;
    puStack_6b8 = puVar6;
    pppuStack_6b0 = &pppuStack_630;
    _objc_retain(puVar7);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar14 = auStack_700;
      func_0x00010002b838(auStack_700,puVar2);
      uStack_720 = 0;
      uStack_718 = 0;
      uStack_710 = 0;
      func_0x00010007e1e8(&uStack_720,auStack_700,&lStack_6e8,1);
      puVar15 = &UNK_110918b70;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_720,puVar9);
      puStack_708 = (undefined1 *)&uStack_720;
      func_0x00010007e5dc(&puStack_708);
      puVar8 = puVar12;
      puVar5 = &uStack_720;
      if (cStack_6e9 < '\0') {
        __ZdlPv(auStack_700[0]);
        puVar8 = puVar12;
        puVar5 = &uStack_720;
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_728 = FUN_1062685d0;
    lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_760 = puVar3;
    puStack_758 = puVar14;
    puStack_750 = puVar5;
    plStack_748 = plVar17;
    puStack_740 = puVar2;
    puStack_738 = puVar7;
    pppuStack_730 = &pppuStack_6b0;
    _objc_retain(puVar15);
    if (puVar6 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar6 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_780,puVar2);
      uStack_7a0 = 0;
      uStack_798 = 0;
      uStack_790 = 0;
      func_0x00010007e1e8(&uStack_7a0,auStack_780,&lStack_768,1);
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_7a0,puVar8);
      puStack_788 = (undefined1 *)&uStack_7a0;
      func_0x00010007e5dc(&puStack_788);
      if (cStack_769 < '\0') {
        __ZdlPv(auStack_780[0]);
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
      ___stack_chk_fail();
      _objc_release(puVar15);
      _objc_release(puVar15);
      __Unwind_Resume();
      _objc_retain();
      puVar15 = puVar2;
      func_0x00010c131a00();
      if (puVar15 == (undefined *)0x1) {
        puVar15 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
        _objc_release();
      }
      else {
        puVar15 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      return puVar15;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10626719c; end: 106267413;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x0001062673e4) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_10626719c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined *puStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined *puStack_408;
  undefined8 *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [3];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [3];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar8 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  puVar12 = param_4;
  puVar6 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x25 = auStack_a0;
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_110918850;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar5 = puVar8;
    puVar12 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar15;
  __Unwind_Resume();
  puVar9 = &uStack_140;
  pcStack_c8 = FUN_106267414;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar5;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_f0 = auStack_a0;
  puStack_e8 = puVar15;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar17 = (long *)0x0;
  puVar13 = auStack_a0;
  if (puVar3 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar15 = &UNK_10f371ee3;
    }
    else {
      puVar15 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_120;
    func_0x00010002b838(auStack_120,puVar15);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    puVar7 = &UNK_1109188a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar8 = puVar9;
    puVar12 = puVar5;
    puVar13 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar8 = puVar9;
      puVar12 = puVar5;
      puVar13 = &uStack_140;
    }
  }
  puVar15 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar15;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  pcStack_148 = FUN_106267588;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar5 = puVar8;
  puStack_180 = param_3;
  puStack_178 = unaff_x23;
  puStack_170 = puVar13;
  plStack_168 = plVar17;
  puStack_160 = puVar15;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar7);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = &UNK_1109188f0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar5 = puVar9;
    puVar12 = puVar8;
    puVar13 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar5 = puVar9;
      puVar12 = puVar8;
      puVar13 = &uStack_1c0;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_1c8 = FUN_1062676fc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar8 = puVar5;
  puStack_200 = param_3;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar13;
  plStack_1e8 = plVar17;
  puStack_1e0 = puVar2;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_220,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar15 = &UNK_110918940;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar8 = puVar9;
    puVar12 = puVar5;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar8 = puVar9;
      puVar12 = puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  pcStack_248 = FUN_106267870;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar15;
  puVar5 = puVar8;
  puVar13 = puVar12;
  puVar9 = puVar6;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar15);
  _objc_retain(puVar8);
  _objc_retain(puVar12);
  if (puVar2 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar2 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_2f8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_2e0,puVar5);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar5 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_2c8,puVar5);
    unaff_x26 = auStack_2f8;
    unaff_x25 = auStack_2b0;
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_298,4);
    puVar7 = &UNK_110918990;
    puVar6 = &uStack_318;
    puVar5 = &uStack_318;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_300 = puVar6;
    func_0x00010007e5dc(&puStack_300);
    lVar16 = 0;
    puVar13 = param_6;
    do {
      if ((&cStack_299)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar12);
  _objc_release(puVar8);
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_2f8);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar15);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_3e0;
  pcStack_328 = FUN_106267b58;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar10 = puVar5;
  puVar14 = puVar13;
  puStack_370 = unaff_x26;
  puStack_368 = unaff_x25;
  puStack_360 = puVar6;
  puStack_358 = auStack_2f8;
  puStack_350 = puVar2;
  puStack_348 = puVar12;
  puStack_340 = puVar8;
  puStack_338 = puVar15;
  pppuStack_330 = &pppuStack_250;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  puVar6 = auStack_2f8;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_3c0,puVar2);
    pcVar1 = "true";
    if ((int)puVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_3a8,pcVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar5 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_390,puVar5);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_378,3);
    puVar3 = &UNK_1109189e0;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109189e0,&uStack_3e0,puVar9);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    lVar16 = 0;
    puVar10 = puVar11;
    puVar14 = puVar9;
    do {
      if ((&cStack_379)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar6 = &uStack_3e0;
    } while (lVar16 != -0x48);
  }
  _objc_release(puVar13);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  do {
    puVar6 = puVar6 + -3;
  } while (puVar6 != auStack_3c0);
  _objc_release(puVar13);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_460;
  pcStack_3e8 = FUN_106267dd0;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar3;
  puVar12 = puVar10;
  puStack_420 = puVar5;
  puStack_418 = puVar6;
  puStack_410 = auStack_3c0;
  puStack_408 = puVar2;
  puStack_400 = puVar13;
  puStack_3f8 = puVar7;
  pppuStack_3f0 = &pppuStack_330;
  _objc_retain(puVar3);
  plVar17 = (long *)0x0;
  puVar8 = auStack_3c0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar6 = auStack_440;
    func_0x00010002b838(auStack_440,puVar2);
    uStack_460 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_428,1);
    puVar15 = &UNK_110918a30;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a30,&uStack_460,puVar10);
    puStack_448 = (undefined1 *)&uStack_460;
    func_0x00010007e5dc(&puStack_448);
    puVar12 = puVar9;
    puVar14 = puVar10;
    puVar8 = &uStack_460;
    if (cStack_429 < '\0') {
      __ZdlPv(auStack_440[0]);
      puVar12 = puVar9;
      puVar14 = puVar10;
      puVar8 = &uStack_460;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_4e0;
  pcStack_468 = FUN_106267f44;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar15;
  puVar13 = puVar12;
  puStack_4a0 = puVar5;
  puStack_498 = puVar6;
  puStack_490 = puVar8;
  plStack_488 = plVar17;
  puStack_480 = puVar2;
  puStack_478 = puVar3;
  pppuStack_470 = &pppuStack_3f0;
  _objc_retain(puVar15);
  plVar17 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar4 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    puVar6 = auStack_4c0;
    func_0x00010002b838(auStack_4c0,puVar2);
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x00010007e1e8(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
    puVar7 = &UNK_110918a80;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918a80,&uStack_4e0,puVar12);
    puStack_4c8 = (undefined1 *)&uStack_4e0;
    func_0x00010007e5dc(&puStack_4c8);
    puVar13 = puVar9;
    puVar14 = puVar12;
    puVar8 = &uStack_4e0;
    if (cStack_4a9 < '\0') {
      __ZdlPv(auStack_4c0[0]);
      puVar13 = puVar9;
      puVar14 = puVar12;
      puVar8 = &uStack_4e0;
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_4e8 = FUN_1062680b8;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puVar12 = puVar13;
    puStack_520 = puVar5;
    puStack_518 = puVar6;
    puStack_510 = puVar8;
    plStack_508 = plVar17;
    puStack_500 = puVar2;
    puStack_4f8 = puVar15;
    pppuStack_4f0 = &pppuStack_470;
    _objc_retain(puVar7);
    _objc_retain(puVar13);
    puVar8 = (undefined8 *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar5 = auStack_558;
      func_0x00010002b838(auStack_558,puVar2);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar6 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_540,puVar6);
      uStack_578 = 0;
      uStack_570 = 0;
      uStack_568 = 0;
      func_0x00010007e1e8(&uStack_578,auStack_558,&lStack_528,2);
      puVar3 = &UNK_110918ad0;
      puVar6 = &uStack_578;
      puVar12 = &uStack_578;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918ad0,puVar12,puVar14);
      puStack_560 = puVar6;
      func_0x00010007e5dc(&puStack_560);
      lVar16 = 0;
      puVar8 = auStack_558;
      do {
        if ((&cStack_529)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x30);
    }
    _objc_release(puVar13);
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_541 < '\0') {
      __ZdlPv(auStack_558[0]);
    }
    _objc_release(puVar13);
    _objc_release(puVar7);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar10 = &uStack_600;
    pcStack_588 = FUN_1062682e8;
    lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = puVar3;
    puVar9 = puVar12;
    puStack_5c0 = puVar5;
    puStack_5b8 = puVar6;
    puStack_5b0 = puVar8;
    puStack_5a8 = puVar2;
    puStack_5a0 = puVar13;
    puStack_598 = puVar7;
    pppuStack_590 = &pppuStack_4f0;
    _objc_retain(puVar3);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      puVar6 = auStack_5e0;
      func_0x00010002b838(auStack_5e0,puVar2);
      uStack_600 = 0;
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      func_0x00010007e1e8(&uStack_600,auStack_5e0,&lStack_5c8,1);
      puVar15 = &UNK_110918b20;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b20,&uStack_600,puVar12);
      puStack_5e8 = (undefined1 *)&uStack_600;
      func_0x00010007e5dc(&puStack_5e8);
      puVar9 = puVar10;
      puVar8 = &uStack_600;
      if (cStack_5c9 < '\0') {
        __ZdlPv(auStack_5e0[0]);
        puVar9 = puVar10;
        puVar8 = &uStack_600;
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar13 = &uStack_680;
    pcStack_608 = FUN_10626845c;
    lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar15;
    puVar12 = puVar9;
    puStack_640 = puVar5;
    puStack_638 = puVar6;
    puStack_630 = puVar8;
    plStack_628 = plVar17;
    puStack_620 = puVar2;
    puStack_618 = puVar3;
    pppuStack_610 = &pppuStack_590;
    _objc_retain(puVar15);
    plVar17 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar4 + 8);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar15;
        _objc_retainAutorelease(puVar15);
        func_0x00010bdc3520();
      }
      _objc_release(puVar15);
      puVar6 = auStack_660;
      func_0x00010002b838(auStack_660,puVar2);
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      func_0x00010007e1e8(&uStack_680,auStack_660,&lStack_648,1);
      puVar7 = &UNK_110918b70;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918b70,&uStack_680,puVar9);
      puStack_668 = (undefined1 *)&uStack_680;
      func_0x00010007e5dc(&puStack_668);
      puVar12 = puVar13;
      puVar8 = &uStack_680;
      if (cStack_649 < '\0') {
        __ZdlPv(auStack_660[0]);
        puVar12 = puVar13;
        puVar8 = &uStack_680;
      }
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar3 = puVar2;
    __Unwind_Resume();
    pcStack_688 = FUN_1062685d0;
    lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_6c0 = puVar5;
    puStack_6b8 = puVar6;
    puStack_6b0 = puVar8;
    plStack_6a8 = plVar17;
    puStack_6a0 = puVar2;
    puStack_698 = puVar15;
    pppuStack_690 = &pppuStack_610;
    _objc_retain(puVar7);
    if (puVar3 != (undefined *)0x0) {
      plVar17 = *(long **)(puVar3 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_6e0,puVar2);
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_6c8,1);
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110918bc0,&uStack_700,puVar12);
      puStack_6e8 = (undefined1 *)&uStack_700;
      func_0x00010007e5dc(&puStack_6e8);
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      __Unwind_Resume();
      _objc_retain();
      puVar15 = puVar2;
      func_0x00010c131a00();
      if (puVar15 == (undefined *)0x1) {
        puVar15 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = (undefined *)(ulong)(puVar15 == (undefined *)0x0);
        _objc_release();
      }
      else {
        puVar15 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      return puVar15;
    }
    return puVar2;
  }
  return puVar2;
}


