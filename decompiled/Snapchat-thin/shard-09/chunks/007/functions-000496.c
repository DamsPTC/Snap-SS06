/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070bc898; end: 1070bc8a7; -[SCStoredPostSnapAction senderBusinessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc898(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763eb4);
}



/* Entry: 1070bc8a8; end: 1070bc8b7; -[SCStoredPostSnapAction senderDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc8a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763eb8);
}



/* Entry: 1070bc8b8; end: 1070bc8c7; -[SCStoredPostSnapAction isFromSendSide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070bc8b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763ebc);
}



/* Entry: 1070bc8c8; end: 1070bc8d7; -[SCStoredPostSnapAction viewedAtTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc8c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ec0);
}



/* Entry: 1070bc8d8; end: 1070bc8e7; -[SCStoredPostSnapAction isGroupConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070bc8d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763ec4);
}



/* Entry: 1070bc8e8; end: 1070bc8f7; -[SCStoredPostSnapAction isStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070bc8e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763ec8);
}



/* Entry: 1070bc8f8; end: 1070bc907; -[SCStoredPostSnapAction lensPromptId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc8f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ecc);
}



/* Entry: 1070bc908; end: 1070bc9b7; -[SCStoredPostSnapAction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070bc908(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763ecc,0);
  _objc_storeStrong(param_1 + _DAT_112763eb8,0);
  _objc_storeStrong(param_1 + _DAT_112763eb4,0);
  _objc_storeStrong(param_1 + _DAT_112763eb0,0);
  _objc_storeStrong(param_1 + _DAT_112763eac,0);
  _objc_storeStrong(param_1 + _DAT_112763ea8,0);
  _objc_storeStrong(param_1 + _DAT_112763ea4,0);
  _objc_storeStrong(param_1 + _DAT_112763ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763e9c,0);
  return;
}



/* Entry: 1070bc9b8; end: 1070bcaa7; -[SCStoredViewedSnapsForPostSnapActions initWithConversationId:snapId:viewedAtTimestamp:hasPlace:hasMention:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1070bc9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f89a8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763ed0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ed0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763ed4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ed4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ed8) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763edc) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763ee0) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1070bcaa8; end: 1070bcacb; -[SCStoredViewedSnapsForPostSnapActions copyWithZone:] */

undefined8 FUN_1070bcaa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bcacc; end: 1070bcb87; -[SCStoredViewedSnapsForPostSnapActions hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1070bcacc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763ed0);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763ed4);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_112763ed8) + *(ulong *)(param_1 + _DAT_112763ed8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112763edc);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_112763ee0);
  uStack_48 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1070bcc84:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070bcc90;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)((long)puVar4 + (long)_DAT_112763edc) == param_3[_DAT_112763edc] &&
        (*(char *)((long)puVar4 + (long)_DAT_112763ee0) == param_3[_DAT_112763ee0])))) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_112763ed8) -
                   *(double *)(param_3 + _DAT_112763ed8));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_112763ed8) +
                  *(double *)(param_3 + _DAT_112763ed8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763ed0),
          lVar6 == *(long *)(param_3 + _DAT_112763ed0) || (func_0x00010c071ae0(), (int)lVar6 != 0)))
         ) {
        puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_112763ed4);
        if (puVar8 != *(undefined1 **)(param_3 + _DAT_112763ed4)) {
          func_0x00010c071ae0();
          goto LAB_1070bcc90;
        }
        goto LAB_1070bcc84;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1070bcc90:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1070bcb88; end: 1070bccab; -[SCStoredViewedSnapsForPostSnapActions isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1070bcb88(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bcc84:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bcc90;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + (long)_DAT_112763edc) == *(char *)(param_3 + (long)_DAT_112763edc) &&
        (*(char *)(param_1 + (long)_DAT_112763ee0) == *(char *)(param_3 + (long)_DAT_112763ee0)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_112763ed8);
      dVar6 = *(double *)(param_3 + (long)_DAT_112763ed8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_112763ed0),
          lVar4 == *(long *)(param_3 + (long)_DAT_112763ed0) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112763ed4);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112763ed4)) {
          func_0x00010c071ae0();
          goto LAB_1070bcc90;
        }
        goto LAB_1070bcc84;
      }
    }
    lVar4 = 0;
  }
LAB_1070bcc90:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1070bccac; end: 1070bccbb; -[SCStoredViewedSnapsForPostSnapActions conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bccac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ed0);
}



/* Entry: 1070bccbc; end: 1070bcccb; -[SCStoredViewedSnapsForPostSnapActions snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bccbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ed4);
}



/* Entry: 1070bcccc; end: 1070bccdb; -[SCStoredViewedSnapsForPostSnapActions viewedAtTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bcccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ed8);
}



/* Entry: 1070bccdc; end: 1070bcceb; -[SCStoredViewedSnapsForPostSnapActions hasPlace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070bccdc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763edc);
}



/* Entry: 1070bccec; end: 1070bccfb; -[SCStoredViewedSnapsForPostSnapActions hasMention] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070bccec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763ee0);
}



/* Entry: 1070bccfc; end: 1070bcd3b; -[SCStoredViewedSnapsForPostSnapActions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070bccfc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763ed4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763ed0,0);
  return;
}



/* Entry: 1070bcd3c; end: 1070bcd5f;  */

undefined * FUN_1070bcd3c(long param_1)

{
  if (param_1 - 1U < 0x20) {
    return (&PTR_PTR_11098ce50)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 1070bcd60; end: 1070bce3f;  */

void FUN_1070bcd60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  FUN_1070bcd3c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e684d8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e684d8,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8260(puVar3,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110e28c58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    puVar4 = puVar3;
    if (param_1 == 0x16) {
      func_0x00010bfe77e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070bce40; end: 1070bd1cf;  */

undefined8 FUN_1070bce40(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f3d8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e63538);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f3f8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dbb9d8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f418);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f438);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc22b8
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110daee38);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110e27f18);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110e9f458);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110dbce78);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x00010c0720c0(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110de1318);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_1;
                            func_0x00010c0720c0(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110e9f478);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_1;
                              func_0x00010c0720c0(param_1,param_2,
                                                  &PTR____CFConstantStringClassReference_110dbc778);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_1;
                                func_0x00010c0720c0(param_1,param_2,
                                                    &PTR____CFConstantStringClassReference_110e09c38
                                                   );
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_1;
                                  func_0x00010c0720c0(param_1,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110e5bd78);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_1;
                                    func_0x00010c0720c0(param_1,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110e9f498);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_1;
                                      func_0x00010c0720c0(param_1,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110e9f4b8);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_1;
                                        func_0x00010c0720c0(param_1,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110e9f4d8);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_1;
                                          func_0x00010c0720c0(param_1,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110e9f4f8);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = param_1;
                                            func_0x00010c0720c0(param_1,param_2,
                                                                &
                                                  PTR____CFConstantStringClassReference_110dfe358);
                                            if ((uVar1 & 1) == 0) {
                                              uVar1 = param_1;
                                              func_0x00010c0720c0(param_1,param_2,
                                                                  &
                                                  PTR____CFConstantStringClassReference_110dcd978);
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = param_1;
                                                func_0x00010c0720c0(param_1,param_2,
                                                                    &
                                                  PTR____CFConstantStringClassReference_110e11bf8);
                                                if ((uVar1 & 1) == 0) {
                                                  uVar1 = param_1;
                                                  func_0x00010c0720c0(param_1,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110e50718);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e9f318);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e9f518);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e684f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e68518);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e68538);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e68558);
                                                  uVar2 = 0x1d;
                                                  if ((int)uVar1 == 0) {
                                                    uVar2 = 0xffffffffffffffff;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x20;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x19;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0x18;
                                                }
                                              }
                                              else {
                                                uVar2 = 0x17;
                                              }
                                            }
                                            else {
                                              uVar2 = 0x16;
                                            }
                                          }
                                          else {
                                            uVar2 = 0x15;
                                          }
                                        }
                                        else {
                                          uVar2 = 0x14;
                                        }
                                      }
                                      else {
                                        uVar2 = 0x13;
                                      }
                                    }
                                    else {
                                      uVar2 = 0x12;
                                    }
                                  }
                                  else {
                                    uVar2 = 0x11;
                                  }
                                }
                                else {
                                  uVar2 = 0x10;
                                }
                              }
                              else {
                                uVar2 = 0xf;
                              }
                            }
                            else {
                              uVar2 = 0xe;
                            }
                          }
                          else {
                            uVar2 = 0xd;
                          }
                        }
                        else {
                          uVar2 = 0xc;
                        }
                      }
                      else {
                        uVar2 = 0xb;
                      }
                    }
                    else {
                      uVar2 = 10;
                    }
                  }
                  else {
                    uVar2 = 9;
                  }
                }
                else {
                  uVar2 = 8;
                }
              }
              else {
                uVar2 = 7;
              }
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070bd1d0; end: 1070bd1e7;  */

undefined4 FUN_1070bd1d0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 != 2) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1070bd1e8; end: 1070bd40f;  */

void FUN_1070bd1e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010c24cb80();
  puVar8 = PTR_PTR_1126d4b48;
  iVar1 = (int)lVar3;
  lVar3 = lVar2;
  if (iVar1 == 3) {
    func_0x00010bf93ba0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d4b48;
    lVar4 = lVar3;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf92c80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf92c60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93bc0(puVar8,param_2,lVar4,lVar5,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        func_0x00010c09d760();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        FUN_1070bce40();
        _objc_release(lVar3);
        puVar8 = (undefined *)0x0;
        if (lVar4 != 0) {
          puVar8 = PTR_PTR_1126d4b48;
          func_0x00010c09e160(PTR_PTR_1126d4b48,param_2,lVar4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar8 = (undefined *)0x0;
      }
      goto LAB_1070bd35c;
    }
    func_0x00010c129b60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12a8c0(puVar8,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
LAB_1070bd35c:
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (puVar8 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126d4b50;
    _objc_alloc(PTR_PTR_1126d4b50);
    lVar2 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c270ee0();
    iVar1 = (int)lVar3;
    if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
      if (iVar1 == 2) {
        uVar7 = 1;
      }
    }
    func_0x00010c002ce0(puVar9,param_2,puVar8,uVar7);
    _objc_release(lVar2);
  }
  _objc_release(puVar8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1070bd410; end: 1070bd56b;  */

void FUN_1070bd410(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126c94a0;
  _objc_retain();
  func_0x00010c0cb140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c94a8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c130820();
  uVar5 = 1;
  if (lVar4 != 2) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  func_0x00010c216120(puVar3,param_2,uVar1);
  lVar4 = param_1;
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1070bd56c;
  puStack_40 = &UNK_110855e40;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1070bd5ac;
  puStack_68 = &UNK_1108450c8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1070bd604;
  puStack_90 = &UNK_11098ce00;
  puStack_88 = puVar3;
  puStack_60 = puVar3;
  puStack_38 = puVar3;
  func_0x00010c0beac0(lVar4,param_2,&puStack_58,&puStack_80,&PTR___NSConcreteGlobalBlock_11098cdc0,
                      &PTR___NSConcreteGlobalBlock_11098cde0,&puStack_a8,
                      &PTR___NSConcreteGlobalBlock_11098ce30);
  _objc_release(lVar4);
  func_0x00010c16a7a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070bd56c; end: 1070bd5fb;  */

void FUN_1070bd56c(long param_1,undefined8 param_2)

{
  FUN_1070bcd3c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1befc0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070bd5fc; end: 1070bd603;  */

void FUN_1070bd5fc(void)

{
  return;
}



/* Entry: 1070bd604; end: 1070bd6b7;  */

void FUN_1070bd604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4b60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a60();
  _objc_release(param_2);
  func_0x00010c195660(puVar1);
  _objc_release(param_3);
  func_0x00010c195640(puVar1);
  _objc_release(param_4);
  func_0x00010c195b20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070bd6b8; end: 1070bd703;  */

void FUN_1070bd6b8(void)

{
  return;
}



/* Entry: 1070bd704; end: 1070bd777; -[SCContextPostSnapServices initWithPostSnapProvider:] */

undefined1 * FUN_1070bd704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f89b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070bd778; end: 1070bd77f; -[SCContextPostSnapServices postSnapProvider] */

undefined8 FUN_1070bd778(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070bd780; end: 1070bd78b; -[SCContextPostSnapServices .cxx_destruct] */

void FUN_1070bd780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070bd78c; end: 1070bd797; -[SCFeatureSettingsService isHasUserSeenDwebAvailable] */

void FUN_1070bd78c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e9f578);
  return;
}



/* Entry: 1070bd798; end: 1070bd7a3; -[SCFeatureSettingsService hasUserSeenDwebServerParam] */

undefined ** FUN_1070bd798(void)

{
  return &PTR____CFConstantStringClassReference_110e9f578;
}



/* Entry: 1070bd7a4; end: 1070bd7ab; -[SCFeatureSettingsService dweb_seen_client_value:] */

undefined * FUN_1070bd7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1070bd7ac; end: 1070bd7b3; -[SCFeatureSettingsService dweb_seen_server_value:] */

void FUN_1070bd7ac(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1070bd7b4; end: 1070bd7c3; -[SCFeatureSettingsService hasUserSeenDweb] */

void FUN_1070bd7b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e9f578,0);
  return;
}



/* Entry: 1070bd7c4; end: 1070bdf6b; +[SCContextSessionParams paramsWithChatMedia:message:isGroupConversation:recipientDisplayName:recipientUserId:properties:userSession:viewLocation:messageProperties:circumstanceEngine:isRemixable:isUserOnDweb:] */

void FUN_1070bd7c4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                  ulong param_6,long param_7,ulong param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long in_stack_00000010;
  undefined *puStack_a8;
  long lStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  uVar2 = param_6;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    uVar3 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = param_8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_6);
    uStack_78 = param_6;
  }
  if (param_4 == 0) {
    lVar6 = in_stack_00000010;
    func_0x00010c0cba00();
    lStack_80 = in_stack_00000010;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = in_stack_00000010;
  }
  else {
    lVar6 = param_4;
    func_0x00010c27dd80();
    lStack_80 = param_4;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_4;
  }
  lVar7 = lVar10;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    param_5 = 1;
  }
  lVar1 = lVar8;
  if (param_5 == 0) {
    lVar1 = param_7;
  }
  _objc_retain(lVar1);
  puVar4 = PTR_PTR_1126b23a0;
  func_0x00010c292680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07ea80();
  lVar11 = param_4;
  if (lVar6 != 0x10 || param_4 == 0) {
    lVar11 = param_3;
  }
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08fa60();
  _objc_release(lVar12);
  puStack_a8 = PTR_PTR_1126b2378;
  if (lVar13 == 0) {
    puStack_a8 = (undefined *)0x0;
  }
  else {
    lVar12 = lVar11;
    func_0x00010bf4e840(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe3740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
  }
  lVar12 = lVar11;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar11;
  func_0x00010c0d2280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(lVar8);
  if ((lVar6 == 0x10) && (lVar6 = param_4, func_0x00010c07d080(), (int)lVar6 != 0)) {
    lVar6 = param_4;
    func_0x00010c243480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c100380();
    _objc_release(lVar6);
  }
  puVar16 = PTR_PTR_1126b2390;
  _objc_alloc();
  puVar17 = puVar16;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2370;
  _objc_alloc();
  uVar2 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar3 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar5 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c01f560();
  lVar6 = param_3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puStack_a8;
  func_0x00010bf43580();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2380;
  _objc_alloc();
  lVar21 = param_3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_3;
  func_0x00010c23f480();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c2a2ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0607a0();
  puVar26 = PTR_PTR_1126b2398;
  _objc_alloc(PTR_PTR_1126b2398);
  func_0x00010c01bcc0();
  puVar28 = PTR_PTR_1126b23a8;
  func_0x00010c0c6c20(param_3);
  func_0x00010c07ebc0();
  lVar27 = param_4;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37be0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_3;
  func_0x00010c0c6c20();
  if (lVar29 != -1) {
    func_0x00010c0c6c20();
    func_0x0001085439dc();
  }
  func_0x00010c045140();
  _objc_release(puVar28);
  _objc_release(lVar27);
  _objc_release(puVar26);
  _objc_release(puVar20);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(puVar19);
  _objc_release(lVar6);
  _objc_release(puVar18);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar17);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puStack_a8);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lStack_80);
  _objc_release(uStack_78);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1070bdf6c; end: 1070be71b; +[SCContextSessionParams paramsWithSnapDoc:isGroupConversation:conversationId:chatMessageId:intendedRecipientUserId:] */

undefined *
FUN_1070bdf6c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = param_3;
  func_0x00010c08f220();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c0eebe0();
  puStack_138 = param_3;
  if ((int)puVar9 == 0) {
    _objc_release(puVar4);
  }
  else {
    puVar11 = param_3;
    func_0x00010c08f220();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010c0eede0();
    puVar15 = param_3;
    func_0x00010c08f220();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010c0eebe0();
    uVar3 = (int)puVar9 - 1;
    puVar9 = (undefined *)(ulong)uVar3;
    _objc_release(puVar15);
    _objc_release(puVar11);
    _objc_release(puVar4);
    if ((uint)puVar14 < uVar3) {
      puStack_158 = (undefined *)0x0;
      goto LAB_1070be6bc;
    }
  }
  puVar4 = PTR_PTR_1126b2370;
  _objc_alloc();
  uStack_1c0 = uStack_1c0 & 0xffffff0000000000;
  uStack_1c8 = 0;
  puStack_1d0 = (undefined *)((ulong)puStack_1d0 & 0xffffffffffffff00);
  func_0x00010c01f560();
  puVar9 = param_3;
  func_0x00010bfd84e0();
  puStack_170 = puVar4;
  if ((int)puVar9 == 0) {
LAB_1070be128:
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar4 = param_3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bfe5ea0();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar9 == (undefined *)0x0) goto LAB_1070be128;
    puVar11 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar11);
  }
  puVar4 = param_3;
  func_0x00010bfddcc0();
  puStack_158 = (undefined *)CONCAT44(puStack_158._4_4_,param_4);
  uStack_160 = param_5;
  if ((int)puVar4 == 0) {
    puStack_150 = (undefined *)0x0;
  }
  else {
    puVar4 = param_3;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar15;
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010c098320();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar15;
    func_0x00010c2810a0();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar4);
    if ((puVar9 == (undefined *)0x0) && (puVar10 != (undefined *)0x0)) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_168 = param_6;
  puStack_148 = puVar9;
  uStack_140 = param_7;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar4;
  func_0x00010bf52a60();
  if (puVar9 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    lVar13 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      puVar7 = puVar14;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        puVar12 = *(undefined **)(lStack_128 + (long)puVar10 * 8);
        puVar5 = puVar12;
        func_0x00010bf0d0a0();
        puVar14 = puVar7;
        if ((int)puVar5 == 3) {
          func_0x00010c2a3a80();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar12;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
LAB_1070be3dc:
          _objc_release(puVar11);
          _objc_release(puVar12);
          puVar11 = puVar7;
        }
        else if ((int)puVar5 == 1) {
          puVar5 = puVar12;
          func_0x00010bf4e080(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar5;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar5);
          puVar7 = puVar12;
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          func_0x00010bf4e840();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar7);
          if (puVar5 != (undefined *)0x0) {
            func_0x00010bf4e080();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar12;
            func_0x00010bf4e840();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf43560();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            puVar7 = puVar11;
            puVar11 = puVar5;
            puVar15 = puVar6;
            goto LAB_1070be3dc;
          }
        }
        puVar10 = puVar10 + 1;
        puVar7 = puVar14;
      } while (puVar9 != puVar10);
      puVar9 = puVar4;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar4 = puStack_138;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c0ed200();
  if ((int)puVar5 == 0x22) {
    uVar8 = uStack_140;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
    if ((uVar8 & 1) == 0) {
      puVar4 = PTR_PTR_1126d4b68;
      _objc_opt_new(PTR_PTR_1126d4b68);
      func_0x00010c21acc0();
      if (puVar15 == (undefined *)0x0) {
        puVar15 = PTR_PTR_1126b5c10;
        _objc_alloc_init(PTR_PTR_1126b5c10);
      }
      func_0x00010c1ca940(puVar15);
      goto LAB_1070be520;
    }
  }
  else {
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
LAB_1070be520:
    _objc_release(puVar4);
  }
  puVar10 = PTR_PTR_1126b2380;
  _objc_alloc(PTR_PTR_1126b2380);
  puStack_1d0 = puStack_150;
  func_0x00010c0607a0();
  puVar4 = PTR_PTR_1126b2398;
  _objc_alloc();
  puVar9 = PTR_PTR_1126b23a0;
  func_0x00010c292680(PTR_PTR_1126b23a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0();
  puStack_178 = puVar4;
  _objc_release(puVar9);
  param_5 = uStack_160;
  param_6 = uStack_168;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uVar8 = (ulong)puStack_1d0 >> 0x10;
  puStack_1d0 = (undefined *)CONCAT62((uint6)uVar8 & 0xffffffffff00,1);
  uVar1 = 0x14;
  if ((int)puStack_158 == 0) {
    uVar1 = 0xf;
  }
  puVar4 = PTR_PTR_1126b23a8;
  func_0x00010bf37be0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2390;
  _objc_alloc();
  puVar12 = puVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puStack_170;
  puVar7 = puStack_178;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0xb;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puStack_1d0 = puVar4;
  uStack_1c8 = uVar1;
  func_0x00010c045140();
  puStack_158 = puVar5;
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puStack_150);
  _objc_release(puVar11);
  param_7 = uStack_140;
  _objc_release(puVar15);
  _objc_release(puStack_148);
  _objc_release(puVar14);
  _objc_release(puVar9);
LAB_1070be6bc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar14 = puStack_138;
  _objc_release(puStack_138);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1d8 = FUN_1070be71c;
    uStack_200 = param_7;
    puStack_1f8 = puVar4;
    puStack_1f0 = puVar11;
    puStack_1e8 = puVar9;
    puStack_1e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_218 = &uStack_220;
    uStack_220 = 0;
    uStack_210 = 0x2020000000;
    uStack_208 = 0;
    puVar4 = puVar14;
    func_0x00010bfa29a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(puVar4);
    bVar2 = *(byte *)(puStack_218 + 3);
    __Block_object_dispose(&uStack_220,8);
    _objc_release(puVar14);
    return (undefined *)(ulong)bVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_158);
  return puStack_158;
}



/* Entry: 1070be71c; end: 1070be81b;  */

undefined1 FUN_1070be71c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070be81c; end: 1070be887;  */

void FUN_1070be81c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_4 != 0;
  return;
}



/* Entry: 1070be888; end: 1070be9ab;  */

void FUN_1070be888(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1070be9ac;
  uStack_40 = 0x1070be9bc;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070be9ac; end: 1070be9c3;  */

void FUN_1070be9ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1070be9c4; end: 1070bea5b;  */

void FUN_1070be9c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070bea5c; end: 1070bea83;  */

undefined ** FUN_1070bea5c(long param_1)

{
  if (param_1 - 2U < 6) {
    return (undefined **)(&PTR_PTR_11098cf50)[param_1 - 2U];
  }
  return &PTR____CFConstantStringClassReference_110e9f598;
}



/* Entry: 1070bea84; end: 1070beaab;  */

void FUN_1070bea84(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1070beaac; end: 1070beab3;  */

void FUN_1070beaac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatter_11266eac8);
  return;
}



/* Entry: 1070beab4; end: 1070beabb; -[SCBaseChatCellViewModelProps dateHeaderHeight] */

undefined8 FUN_1070beab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070beabc; end: 1070beac3; -[SCBaseChatCellViewModelProps setDateHeaderHeight:] */

void FUN_1070beabc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1070beac4; end: 1070beacb; -[SCBaseChatCellViewModelProps topMargin] */

undefined8 FUN_1070beac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070beacc; end: 1070bead3; -[SCBaseChatCellViewModelProps setTopMargin:] */

void FUN_1070beacc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1070bead4; end: 1070beadb; -[SCBaseChatCellViewModelProps prefetchPluginIdentifier] */

undefined8 FUN_1070bead4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070beadc; end: 1070beb0b; -[SCBaseChatCellViewModelProps setPrefetchPluginIdentifier:] */

void FUN_1070beadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070beb0c; end: 1070beb13; -[SCBaseChatCellViewModelProps prefetchedData] */

undefined8 FUN_1070beb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070beb14; end: 1070beb43; -[SCBaseChatCellViewModelProps setPrefetchedData:] */

void FUN_1070beb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070beb44; end: 1070beb4b; -[SCBaseChatCellViewModelProps renderAsBubble] */

undefined1 FUN_1070beb44(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1070beb4c; end: 1070beb53; -[SCBaseChatCellViewModelProps setRenderAsBubble:] */

void FUN_1070beb4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1070beb54; end: 1070beb83; -[SCBaseChatCellViewModelProps .cxx_destruct] */

void FUN_1070beb54(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1070beb84; end: 1070bec37; -[SCNativeConversationContainer initWithConversation:messages:hasMoreMessageHistoryToLoad:] */

undefined1 *
FUN_1070beb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f89b8;
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



/* Entry: 1070bec38; end: 1070bec5b; -[SCNativeConversationContainer copyWithZone:] */

undefined8 FUN_1070bec38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bec5c; end: 1070becd3; -[SCNativeConversationContainer hash] */

undefined8 * FUN_1070bec5c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1070bed64:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070bed70;
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
          goto LAB_1070bed70;
        }
        goto LAB_1070bed64;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1070bed70:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1070becd4; end: 1070bed8b; -[SCNativeConversationContainer isEqual:] */

long FUN_1070becd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bed64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bed70;
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
          goto LAB_1070bed70;
        }
        goto LAB_1070bed64;
      }
    }
    lVar3 = 0;
  }
LAB_1070bed70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070bed8c; end: 1070bed93; -[SCNativeConversationContainer conversation] */

undefined8 FUN_1070bed8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070bed94; end: 1070bed9b; -[SCNativeConversationContainer messages] */

undefined8 FUN_1070bed94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070bed9c; end: 1070beda3; -[SCNativeConversationContainer hasMoreMessageHistoryToLoad] */

undefined1 FUN_1070bed9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1070beda4; end: 1070bedd3; -[SCNativeConversationContainer .cxx_destruct] */

void FUN_1070beda4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070bedd4; end: 1070bee7f; -[SCChatLoadHistoryPaginationRequest initWithConversationId:sinceMessageId:] */

undefined1 *
FUN_1070bedd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f89c0;
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



/* Entry: 1070bee80; end: 1070beea3; -[SCChatLoadHistoryPaginationRequest copyWithZone:] */

undefined8 FUN_1070bee80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070beea4; end: 1070bef17; -[SCChatLoadHistoryPaginationRequest hash] */

undefined8 * FUN_1070beea4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1070bef98:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070befa4;
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
          goto LAB_1070befa4;
        }
        goto LAB_1070bef98;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070befa4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070bef18; end: 1070befbf; -[SCChatLoadHistoryPaginationRequest isEqual:] */

long FUN_1070bef18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bef98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070befa4;
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
          goto LAB_1070befa4;
        }
        goto LAB_1070bef98;
      }
    }
    lVar3 = 0;
  }
LAB_1070befa4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070befc0; end: 1070befc7; -[SCChatLoadHistoryPaginationRequest conversationId] */

undefined8 FUN_1070befc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070befc8; end: 1070befcf; -[SCChatLoadHistoryPaginationRequest sinceMessageId] */

undefined8 FUN_1070befc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070befd0; end: 1070befff; -[SCChatLoadHistoryPaginationRequest .cxx_destruct] */

void FUN_1070befd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070bf000; end: 1070bf087; -[SCChatConversationLoggingViewModel initWithMessageLoggingInfo:wallpaperSource:] */

undefined1 *
FUN_1070bf000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f89c8;
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



/* Entry: 1070bf088; end: 1070bf0ab; -[SCChatConversationLoggingViewModel copyWithZone:] */

undefined8 FUN_1070bf088(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bf0ac; end: 1070bf11f; -[SCChatConversationLoggingViewModel hash] */

undefined8 * FUN_1070bf0ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070bf1a4;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_1070bf1a4;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1070bf1a4;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_1070bf1a4:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1070bf120; end: 1070bf1bf; -[SCChatConversationLoggingViewModel isEqual:] */

long FUN_1070bf120(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bf1a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1070bf1a4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1070bf1a4;
    }
  }
  lVar3 = 1;
LAB_1070bf1a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070bf1c0; end: 1070bf1c7; -[SCChatConversationLoggingViewModel messageLoggingInfo] */

undefined8 FUN_1070bf1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070bf1c8; end: 1070bf1cf; -[SCChatConversationLoggingViewModel wallpaperSource] */

undefined8 FUN_1070bf1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070bf1d0; end: 1070bf1db; -[SCChatConversationLoggingViewModel .cxx_destruct] */

void FUN_1070bf1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070bf1dc; end: 1070bf387; -[SCChatMessageLoggingViewModel initWithMessageContent:messageId:messageTimestamp:analyticsMessageId:orderForLogging:quotedMessageId:quotedMessageAvailabilityStatus:quotedAnalyticsMessageId:reactionInfo:isReencrypted:messageEncryption:gallerySource:] */

undefined8 *
FUN_1070bf1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

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
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f89d0;
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
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    puVar1[8] = param_9;
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
    *(undefined1 *)(puVar1 + 1) = param_12;
    puVar1[0xb] = param_14;
    puVar1[0xc] = param_15;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1070bf388; end: 1070bf3ab; -[SCChatMessageLoggingViewModel copyWithZone:] */

undefined8 FUN_1070bf388(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bf3ac; end: 1070bf477; -[SCChatMessageLoggingViewModel hash] */

undefined8 * FUN_1070bf3ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  puVar3 = &uStack_88;
  uStack_48 = uVar1;
  func_0x000100505190(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1070bf5b8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070bf5c4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])) && (puVar3[8] == param_3[8])) &&
         ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[0xb] == param_3[0xb])))))) &&
       (puVar3[0xc] == param_3[0xc])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[9];
              if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[10];
                if (puVar6 != (undefined8 *)param_3[10]) {
                  func_0x00010c071ae0();
                  goto LAB_1070bf5c4;
                }
                goto LAB_1070bf5b8;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070bf5c4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070bf478; end: 1070bf5df; -[SCChatMessageLoggingViewModel isEqual:] */

long FUN_1070bf478(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bf5b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bf5c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))))) &&
       (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 != *(long *)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_1070bf5c4;
                }
                goto LAB_1070bf5b8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1070bf5c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070bf5e0; end: 1070bf5e7; -[SCChatMessageLoggingViewModel messageContent] */

undefined8 FUN_1070bf5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070bf5e8; end: 1070bf5ef; -[SCChatMessageLoggingViewModel messageId] */

undefined8 FUN_1070bf5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070bf5f0; end: 1070bf5f7; -[SCChatMessageLoggingViewModel messageTimestamp] */

undefined8 FUN_1070bf5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070bf5f8; end: 1070bf5ff; -[SCChatMessageLoggingViewModel analyticsMessageId] */

undefined8 FUN_1070bf5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070bf600; end: 1070bf607; -[SCChatMessageLoggingViewModel orderForLogging] */

undefined8 FUN_1070bf600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070bf608; end: 1070bf60f; -[SCChatMessageLoggingViewModel quotedMessageId] */

undefined8 FUN_1070bf608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070bf610; end: 1070bf617; -[SCChatMessageLoggingViewModel quotedMessageAvailabilityStatus] */

undefined8 FUN_1070bf610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1070bf618; end: 1070bf61f; -[SCChatMessageLoggingViewModel quotedAnalyticsMessageId] */

undefined8 FUN_1070bf618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1070bf620; end: 1070bf627; -[SCChatMessageLoggingViewModel reactionInfo] */

undefined8 FUN_1070bf620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1070bf628; end: 1070bf62f; -[SCChatMessageLoggingViewModel isReencrypted] */

undefined1 FUN_1070bf628(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1070bf630; end: 1070bf637; -[SCChatMessageLoggingViewModel messageEncryption] */

undefined8 FUN_1070bf630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1070bf638; end: 1070bf63f; -[SCChatMessageLoggingViewModel gallerySource] */

undefined8 FUN_1070bf638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1070bf640; end: 1070bf69f; -[SCChatMessageLoggingViewModel .cxx_destruct] */

void FUN_1070bf640(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070bf6a0; end: 1070bf703; +[SCChatMessageReactionLogInfo bitmojiReactionWithIntentId:] */

void FUN_1070bf6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cede8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070bf704; end: 1070bf74f; +[SCChatMessageReactionLogInfo emoji] */

void FUN_1070bf704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cede8;
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



/* Entry: 1070bf750; end: 1070bf773; -[SCChatMessageReactionLogInfo copyWithZone:] */

undefined8 FUN_1070bf750(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bf774; end: 1070bf7d3; -[SCChatMessageReactionLogInfo hash] */

void FUN_1070bf774(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f89d8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


