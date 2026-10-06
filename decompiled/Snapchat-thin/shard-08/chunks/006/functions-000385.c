/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062ccfb4; end: 1062cd583;  */

void FUN_1062ccfb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126c96d0;
  _objc_opt_class(PTR_PTR_1126c96d0);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e48a38,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062cd584; end: 1062cd80f; -[SCContextSpotlightActionsParams initWithSessionId:storyId:isSharingEnabledOnContextMenu:shareCount:isReplyEnabled:isReplyActionButtonVisible:isMoreButtonVisible:boostState:boostCount:isSubsCountEnabled:subsCount:showCreateButton:createContextAction:spotlightNewPendingReplyCount:spotlightLiveReplyCount:isSpotlightRepliesCreatorExperience:multiSnapFirstSnapId:spotlightPendingReplyCount:isSpotlightManagement:isSpotlightRepliesEnabled:recommendCount:recommendState:] */

undefined8 *
FUN_1062cd584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_23);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126f0c60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9;
    puVar1[6] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_13;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_16;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_19;
    puVar1[0xb] = param_20;
    *(undefined1 *)((long)puVar1 + 0xe) = param_21;
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_24;
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_25;
    *(undefined1 *)(puVar1 + 2) = param_25._1_1_;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_28;
  }
  _objc_release(param_27);
  _objc_release(param_23);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062cd810; end: 1062cd833; -[SCContextSpotlightActionsParams copyWithZone:] */

undefined8 FUN_1062cd810(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062cd834; end: 1062cd943; -[SCContextSpotlightActionsParams hash] */

undefined8 * FUN_1062cd834(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uStack_c8 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uStack_b8 = (ulong)*(byte *)(param_1 + 9);
  uStack_b0 = (ulong)*(byte *)(param_1 + 10);
  uStack_a8 = (ulong)*(byte *)(param_1 + 0xb);
  lVar6 = *(long *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  lStack_a0 = -lVar6;
  if (-1 < lVar6) {
    lStack_a0 = lVar6;
  }
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 0xd);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = (ulong)*(byte *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x78);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  puVar4 = &uStack_d8;
  uStack_38 = uVar1;
  func_0x000100505190(puVar4,0x16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1062cdb34:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1062cdb40;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
            (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
           (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
          ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
           (puVar4[6] == param_3[6])))))) &&
        (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
       ((((*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd) &&
          (puVar4[10] == param_3[10])) &&
         ((puVar4[0xb] == param_3[0xb] &&
          (((*(char *)((long)puVar4 + 0xe) == *(char *)((long)param_3 + 0xe) &&
            (puVar4[0xd] == param_3[0xd])) &&
           (*(char *)((long)puVar4 + 0xf) == *(char *)((long)param_3 + 0xf))))))) &&
        ((*(char *)(puVar4 + 2) == *(char *)(param_3 + 2) && (puVar4[0xf] == param_3[0xf])))))) {
      lVar6 = puVar4[3];
      if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[4];
        if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[5];
          if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[7];
            if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[8];
              if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[9];
                if ((lVar6 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  lVar6 = puVar4[0xc];
                  if ((lVar6 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    puVar7 = (undefined8 *)puVar4[0xe];
                    if (puVar7 != (undefined8 *)param_3[0xe]) {
                      func_0x00010c071ae0();
                      goto LAB_1062cdb40;
                    }
                    goto LAB_1062cdb34;
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
LAB_1062cdb40:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 1062cd944; end: 1062cdb5b; -[SCContextSpotlightActionsParams isEqual:] */

long FUN_1062cd944(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062cdb34:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062cdb40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       ((((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
         ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
          (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
            (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
           (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))))))) &&
        ((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x60);
                  if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x70);
                    if (lVar3 != *(long *)(param_3 + 0x70)) {
                      func_0x00010c071ae0();
                      goto LAB_1062cdb40;
                    }
                    goto LAB_1062cdb34;
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
LAB_1062cdb40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062cdb5c; end: 1062cdb63; -[SCContextSpotlightActionsParams sessionId] */

undefined8 FUN_1062cdb5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062cdb64; end: 1062cdb6b; -[SCContextSpotlightActionsParams storyId] */

undefined8 FUN_1062cdb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062cdb6c; end: 1062cdb73; -[SCContextSpotlightActionsParams isSharingEnabledOnContextMenu] */

undefined1 FUN_1062cdb6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062cdb74; end: 1062cdb7b; -[SCContextSpotlightActionsParams shareCount] */

undefined8 FUN_1062cdb74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062cdb7c; end: 1062cdb83; -[SCContextSpotlightActionsParams isReplyEnabled] */

undefined1 FUN_1062cdb7c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1062cdb84; end: 1062cdb8b; -[SCContextSpotlightActionsParams isReplyActionButtonVisible] */

undefined1 FUN_1062cdb84(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1062cdb8c; end: 1062cdb93; -[SCContextSpotlightActionsParams isMoreButtonVisible] */

undefined1 FUN_1062cdb8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1062cdb94; end: 1062cdb9b; -[SCContextSpotlightActionsParams boostState] */

undefined8 FUN_1062cdb94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062cdb9c; end: 1062cdba3; -[SCContextSpotlightActionsParams boostCount] */

undefined8 FUN_1062cdb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1062cdba4; end: 1062cdbab; -[SCContextSpotlightActionsParams isSubsCountEnabled] */

undefined1 FUN_1062cdba4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1062cdbac; end: 1062cdbb3; -[SCContextSpotlightActionsParams subsCount] */

undefined8 FUN_1062cdbac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1062cdbb4; end: 1062cdbbb; -[SCContextSpotlightActionsParams showCreateButton] */

undefined1 FUN_1062cdbb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1062cdbbc; end: 1062cdbc3; -[SCContextSpotlightActionsParams createContextAction] */

undefined8 FUN_1062cdbbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1062cdbc4; end: 1062cdbcb; -[SCContextSpotlightActionsParams spotlightNewPendingReplyCount] */

undefined8 FUN_1062cdbc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1062cdbcc; end: 1062cdbd3; -[SCContextSpotlightActionsParams spotlightLiveReplyCount] */

undefined8 FUN_1062cdbcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1062cdbd4; end: 1062cdbdb; -[SCContextSpotlightActionsParams isSpotlightRepliesCreatorExperience] */

undefined1 FUN_1062cdbd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1062cdbdc; end: 1062cdbe3; -[SCContextSpotlightActionsParams multiSnapFirstSnapId] */

undefined8 FUN_1062cdbdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1062cdbe4; end: 1062cdbeb; -[SCContextSpotlightActionsParams spotlightPendingReplyCount] */

undefined8 FUN_1062cdbe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1062cdbec; end: 1062cdbf3; -[SCContextSpotlightActionsParams isSpotlightManagement] */

undefined1 FUN_1062cdbec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1062cdbf4; end: 1062cdbfb; -[SCContextSpotlightActionsParams isSpotlightRepliesEnabled] */

undefined1 FUN_1062cdbf4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1062cdbfc; end: 1062cdc03; -[SCContextSpotlightActionsParams recommendCount] */

undefined8 FUN_1062cdbfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1062cdc04; end: 1062cdc0b; -[SCContextSpotlightActionsParams recommendState] */

undefined8 FUN_1062cdc04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1062cdc0c; end: 1062cdc83; -[SCContextSpotlightActionsParams .cxx_destruct] */

void FUN_1062cdc0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1062cdc84; end: 1062cdc9f; +[SCContextSpotlightActionsParamsBuilder contextSpotlightActionsParams] */

void FUN_1062cdc84(void)

{
  _objc_alloc_init(PTR_PTR_1126c9488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062cdca0; end: 1062ce167; +[SCContextSpotlightActionsParamsBuilder contextSpotlightActionsParamsFromExistingContextSpotlightActionsParams:] */

void FUN_1062cdca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  
  puVar1 = PTR_PTR_1126c9488;
  _objc_retain(param_3);
  func_0x00010bf4f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b8500(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ba460(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c07dd20(param_3);
  puVar7 = puVar5;
  func_0x00010c2b1500(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c22a980();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b8600(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c07c500(param_3);
  puVar10 = puVar8;
  func_0x00010c2b13c0(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c07c4a0(param_3);
  puVar11 = puVar10;
  func_0x00010c2b13a0(puVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c077f40(param_3);
  puVar12 = puVar11;
  func_0x00010c2b0ea0(puVar11,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf1f900(param_3);
  puVar13 = puVar12;
  func_0x00010c2a9740(puVar12,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf1f680();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c2a9700(puVar13,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0800c0(param_3);
  puVar16 = puVar14;
  func_0x00010c2b1780(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c25fae0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c2ba8c0(puVar16,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c236d40(param_3);
  puVar19 = puVar17;
  func_0x00010c2b8dc0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf55640();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010c2ab300(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c24b7a0(param_3);
  puVar22 = puVar20;
  func_0x00010c2b9dc0(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c24b580(param_3);
  puVar23 = puVar22;
  func_0x00010c2b9d80(puVar22,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c07f4e0(param_3);
  puVar24 = puVar23;
  func_0x00010c2b16e0(puVar23,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0d21c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c2b4180(puVar24,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c24ba40(param_3);
  puVar27 = puVar25;
  func_0x00010c2b9de0(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c07f3e0(param_3);
  puVar28 = puVar27;
  func_0x00010c2b16a0(puVar27,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c07f500(param_3);
  puVar29 = puVar28;
  func_0x00010c2b1700(puVar28,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c123100(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010c2b69e0(puVar29,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c123140(param_3);
  _objc_release(param_3);
  puVar32 = puVar30;
  func_0x00010c2b6a00(puVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar30);
  _objc_release(uVar26);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar25);
  _objc_release(uVar21);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(uVar18);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar15);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 1062ce168; end: 1062ce207; -[SCContextSpotlightActionsParamsBuilder build] */

void FUN_1062ce168(void)

{
  _objc_alloc(PTR_PTR_1126c9480);
  func_0x00010c0452c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ce208; end: 1062ce23f; -[SCContextSpotlightActionsParamsBuilder withSessionId:] */

long FUN_1062ce208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce240; end: 1062ce277; -[SCContextSpotlightActionsParamsBuilder withStoryId:] */

long FUN_1062ce240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce278; end: 1062ce27f; -[SCContextSpotlightActionsParamsBuilder withIsSharingEnabledOnContextMenu:] */

void FUN_1062ce278(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1062ce280; end: 1062ce2b7; -[SCContextSpotlightActionsParamsBuilder withShareCount:] */

long FUN_1062ce280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce2b8; end: 1062ce2bf; -[SCContextSpotlightActionsParamsBuilder withIsReplyEnabled:] */

void FUN_1062ce2b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1062ce2c0; end: 1062ce2c7; -[SCContextSpotlightActionsParamsBuilder withIsReplyActionButtonVisible:] */

void FUN_1062ce2c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 1062ce2c8; end: 1062ce2cf; -[SCContextSpotlightActionsParamsBuilder withIsMoreButtonVisible:] */

void FUN_1062ce2c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 1062ce2d0; end: 1062ce2d7; -[SCContextSpotlightActionsParamsBuilder withBoostState:] */

void FUN_1062ce2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1062ce2d8; end: 1062ce30f; -[SCContextSpotlightActionsParamsBuilder withBoostCount:] */

long FUN_1062ce2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce310; end: 1062ce317; -[SCContextSpotlightActionsParamsBuilder withIsSubsCountEnabled:] */

void FUN_1062ce310(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1062ce318; end: 1062ce34f; -[SCContextSpotlightActionsParamsBuilder withSubsCount:] */

long FUN_1062ce318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce350; end: 1062ce357; -[SCContextSpotlightActionsParamsBuilder withShowCreateButton:] */

void FUN_1062ce350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1062ce358; end: 1062ce38f; -[SCContextSpotlightActionsParamsBuilder withCreateContextAction:] */

long FUN_1062ce358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce390; end: 1062ce397; -[SCContextSpotlightActionsParamsBuilder withSpotlightNewPendingReplyCount:] */

void FUN_1062ce390(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1062ce398; end: 1062ce39f; -[SCContextSpotlightActionsParamsBuilder withSpotlightLiveReplyCount:] */

void FUN_1062ce398(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 1062ce3a0; end: 1062ce3a7; -[SCContextSpotlightActionsParamsBuilder withIsSpotlightRepliesCreatorExperience:] */

void FUN_1062ce3a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 1062ce3a8; end: 1062ce3df; -[SCContextSpotlightActionsParamsBuilder withMultiSnapFirstSnapId:] */

long FUN_1062ce3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce3e0; end: 1062ce3e7; -[SCContextSpotlightActionsParamsBuilder withSpotlightPendingReplyCount:] */

void FUN_1062ce3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1062ce3e8; end: 1062ce3ef; -[SCContextSpotlightActionsParamsBuilder withIsSpotlightManagement:] */

void FUN_1062ce3e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 1062ce3f0; end: 1062ce3f7; -[SCContextSpotlightActionsParamsBuilder withIsSpotlightRepliesEnabled:] */

void FUN_1062ce3f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x89) = param_3;
  return;
}



/* Entry: 1062ce3f8; end: 1062ce42f; -[SCContextSpotlightActionsParamsBuilder withRecommendCount:] */

long FUN_1062ce3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1062ce430; end: 1062ce437; -[SCContextSpotlightActionsParamsBuilder withRecommendState:] */

void FUN_1062ce430(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 1062ce438; end: 1062ce4af; -[SCContextSpotlightActionsParamsBuilder .cxx_destruct] */

void FUN_1062ce438(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062ce4b0; end: 1062ce55b; -[SCContextSpotlightRemixAttributionParams initWithRemixAttributionText:action:] */

undefined1 *
FUN_1062ce4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0c68;
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



/* Entry: 1062ce55c; end: 1062ce57f; -[SCContextSpotlightRemixAttributionParams copyWithZone:] */

undefined8 FUN_1062ce55c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062ce580; end: 1062ce5f3; -[SCContextSpotlightRemixAttributionParams hash] */

undefined8 * FUN_1062ce580(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1062ce674:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1062ce680;
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
          goto LAB_1062ce680;
        }
        goto LAB_1062ce674;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1062ce680:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1062ce5f4; end: 1062ce69b; -[SCContextSpotlightRemixAttributionParams isEqual:] */

long FUN_1062ce5f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062ce674:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062ce680;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1062ce680;
        }
        goto LAB_1062ce674;
      }
    }
    lVar3 = 0;
  }
LAB_1062ce680:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062ce69c; end: 1062ce6a3; -[SCContextSpotlightRemixAttributionParams remixAttributionText] */

undefined8 FUN_1062ce69c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062ce6a4; end: 1062ce6ab; -[SCContextSpotlightRemixAttributionParams action] */

undefined8 FUN_1062ce6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062ce6ac; end: 1062ce6db; -[SCContextSpotlightRemixAttributionParams .cxx_destruct] */

void FUN_1062ce6ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062ce6dc; end: 1062ce78f; -[SCContextSpotlightSponsorAttributionParams initWithStatus:displayName:profileId:] */

undefined1 *
FUN_1062ce6dc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0c70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 1062ce790; end: 1062ce7b3; -[SCContextSpotlightSponsorAttributionParams copyWithZone:] */

undefined8 FUN_1062ce790(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062ce7b4; end: 1062ce82f; -[SCContextSpotlightSponsorAttributionParams hash] */

long * FUN_1062ce7b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_1062ce8c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1062ce8cc;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)plVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1062ce8cc;
        }
        goto LAB_1062ce8c0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1062ce8cc:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 1062ce830; end: 1062ce8e7; -[SCContextSpotlightSponsorAttributionParams isEqual:] */

long FUN_1062ce830(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062ce8c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062ce8cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1062ce8cc;
        }
        goto LAB_1062ce8c0;
      }
    }
    lVar3 = 0;
  }
LAB_1062ce8cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062ce8e8; end: 1062ce8ef; -[SCContextSpotlightSponsorAttributionParams status] */

undefined4 FUN_1062ce8e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1062ce8f0; end: 1062ce8f7; -[SCContextSpotlightSponsorAttributionParams displayName] */

undefined8 FUN_1062ce8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062ce8f8; end: 1062ce8ff; -[SCContextSpotlightSponsorAttributionParams profileId] */

undefined8 FUN_1062ce8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062ce900; end: 1062ce92f; -[SCContextSpotlightSponsorAttributionParams .cxx_destruct] */

void FUN_1062ce900(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1062ce930; end: 1062ce98b; +[SCContextSpotlightSubscriptionParams publisherWithPublisherId:] */

void FUN_1062ce930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062ce98c; end: 1062cea4f; +[SCContextSpotlightSubscriptionParams snapchatterWithSnapchatter:snapId:compositeStoryId:] */

void FUN_1062ce98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062cea50; end: 1062cea73; -[SCContextSpotlightSubscriptionParams copyWithZone:] */

undefined8 FUN_1062cea50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062cea74; end: 1062ceb03; -[SCContextSpotlightSubscriptionParams hash] */

void FUN_1062cea74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f0c78;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ceb04; end: 1062ceb47; -[SCContextSpotlightSubscriptionParams internalInit] */

void FUN_1062ceb04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f0c78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ceb48; end: 1062cec27; -[SCContextSpotlightSubscriptionParams isEqual:] */

long FUN_1062ceb48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062cec00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062cec0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1062cec0c;
          }
          goto LAB_1062cec00;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1062cec0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062cec28; end: 1062cecb3; -[SCContextSpotlightSubscriptionParams matchSnapchatter:publisher:] */

void FUN_1062cec28(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062cecb4; end: 1062cecef; -[SCContextSpotlightSubscriptionParams .cxx_destruct] */

void FUN_1062cecb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1062cecf0; end: 1062ced9b; -[SCContextSpotlightLensAttributionParams initWithLensId:name:] */

undefined1 *
FUN_1062cecf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0c80;
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



/* Entry: 1062ced9c; end: 1062cedbf; -[SCContextSpotlightLensAttributionParams copyWithZone:] */

undefined8 FUN_1062ced9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062cedc0; end: 1062cee33; -[SCContextSpotlightLensAttributionParams hash] */

undefined8 * FUN_1062cedc0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1062ceeb4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1062ceec0;
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
          goto LAB_1062ceec0;
        }
        goto LAB_1062ceeb4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1062ceec0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1062cee34; end: 1062ceedb; -[SCContextSpotlightLensAttributionParams isEqual:] */

long FUN_1062cee34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062ceeb4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062ceec0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1062ceec0;
        }
        goto LAB_1062ceeb4;
      }
    }
    lVar3 = 0;
  }
LAB_1062ceec0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062ceedc; end: 1062ceee3; -[SCContextSpotlightLensAttributionParams lensId] */

undefined8 FUN_1062ceedc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062ceee4; end: 1062ceeeb; -[SCContextSpotlightLensAttributionParams name] */

undefined8 FUN_1062ceee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062ceeec; end: 1062cef1b; -[SCContextSpotlightLensAttributionParams .cxx_destruct] */

void FUN_1062ceeec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062cef1c; end: 1062cf0a3; -[SCContextSpotlightHeroContextLabelViewModel initWithLabelStyle:iconImage:groupAvatarParticipants:text:plusCountText:showChevron:cardType:additionalLeadingIconImage:posterAvatarMetadata:] */

undefined1 *
FUN_1062cef1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f0c88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1062cf0a4; end: 1062cf0c7; -[SCContextSpotlightHeroContextLabelViewModel copyWithZone:] */

undefined8 FUN_1062cf0a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1062cf0c8; end: 1062cf187; -[SCContextSpotlightHeroContextLabelViewModel hash] */

long * FUN_1062cf0c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&lStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_1062cf298:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1062cf2a4;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)plVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)((long)plVar3 + 8) == param_3[8])) &&
        (*(long *)((long)plVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)plVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)plVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)plVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)plVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)plVar3 + 0x40);
              if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)plVar3 + 0x48);
                if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_1062cf2a4;
                }
                goto LAB_1062cf298;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1062cf2a4:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 1062cf188; end: 1062cf2bf; -[SCContextSpotlightHeroContextLabelViewModel isEqual:] */

long FUN_1062cf188(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1062cf298:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1062cf2a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if (lVar3 != *(long *)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_1062cf2a4;
                }
                goto LAB_1062cf298;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1062cf2a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1062cf2c0; end: 1062cf2c7; -[SCContextSpotlightHeroContextLabelViewModel labelStyle] */

undefined8 FUN_1062cf2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062cf2c8; end: 1062cf2cf; -[SCContextSpotlightHeroContextLabelViewModel iconImage] */

undefined8 FUN_1062cf2c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062cf2d0; end: 1062cf2d7; -[SCContextSpotlightHeroContextLabelViewModel groupAvatarParticipants] */

undefined8 FUN_1062cf2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062cf2d8; end: 1062cf2df; -[SCContextSpotlightHeroContextLabelViewModel text] */

undefined8 FUN_1062cf2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062cf2e0; end: 1062cf2e7; -[SCContextSpotlightHeroContextLabelViewModel plusCountText] */

undefined8 FUN_1062cf2e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062cf2e8; end: 1062cf2ef; -[SCContextSpotlightHeroContextLabelViewModel showChevron] */

undefined1 FUN_1062cf2e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062cf2f0; end: 1062cf2f7; -[SCContextSpotlightHeroContextLabelViewModel cardType] */

undefined8 FUN_1062cf2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1062cf2f8; end: 1062cf2ff; -[SCContextSpotlightHeroContextLabelViewModel additionalLeadingIconImage] */

undefined8 FUN_1062cf2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1062cf300; end: 1062cf307; -[SCContextSpotlightHeroContextLabelViewModel posterAvatarMetadata] */

undefined8 FUN_1062cf300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1062cf308; end: 1062cf367; -[SCContextSpotlightHeroContextLabelViewModel .cxx_destruct] */

void FUN_1062cf308(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1062cf368; end: 1062cf373; +[SCCContextHeroCardCellView componentPath] */

undefined ** FUN_1062cf368(void)

{
  return &PTR____CFConstantStringClassReference_110e48b98;
}



/* Entry: 1062cf374; end: 1062cf397; -[SCCContextHeroCardCellView initWithViewModel:componentContext:runtime:] */

void FUN_1062cf374(void)

{
  FUN_1062cf4b8(PTR_PTR_1126f0c90);
  return;
}


