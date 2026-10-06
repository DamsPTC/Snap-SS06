/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b019934; end: 10b01993b; -[SCLensTurnBasedPromptTurnResult isFirstTurn] */

undefined1 FUN_10b019934(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b01993c; end: 10b019943; -[SCLensTurnBasedPromptTurnResult isComplete] */

undefined1 FUN_10b01993c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b019944; end: 10b019973; -[SCLensTurnBasedPromptTurnResult .cxx_destruct] */

void FUN_10b019944(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b019974; end: 10b019a13; -[SCLensTurnBasedPromptMetadata initWithIsComplete:receiverUserId:isCurrentUsersTurn:turnCount:] */

undefined1 *
FUN_10b019974(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112704550;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b019a14; end: 10b019a37; -[SCLensTurnBasedPromptMetadata copyWithZone:] */

undefined8 FUN_10b019a14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b019a38; end: 10b019ab3; -[SCLensTurnBasedPromptMetadata hash] */

ulong * FUN_10b019a38(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = &uStack_48;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b019b58;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((((char)puVar2[1] != (char)param_3[1] ||
         (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) || (puVar2[3] != param_3[3])
        ))) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b019b58;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b019b58;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b019b58:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b019ab4; end: 10b019b73; -[SCLensTurnBasedPromptMetadata isEqual:] */

long FUN_10b019ab4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b019b58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b019b58;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b019b58;
    }
  }
  lVar3 = 1;
LAB_10b019b58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b019b74; end: 10b019b7b; -[SCLensTurnBasedPromptMetadata isComplete] */

undefined1 FUN_10b019b74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b019b7c; end: 10b019b83; -[SCLensTurnBasedPromptMetadata receiverUserId] */

undefined8 FUN_10b019b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b019b84; end: 10b019b8b; -[SCLensTurnBasedPromptMetadata isCurrentUsersTurn] */

undefined1 FUN_10b019b84(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b019b8c; end: 10b019b93; -[SCLensTurnBasedPromptMetadata turnCount] */

undefined8 FUN_10b019b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b019b94; end: 10b019b9f; -[SCLensTurnBasedPromptMetadata .cxx_destruct] */

void FUN_10b019b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b019ba0; end: 10b019ba7; -[SCMusicRecommendationServices recommendationManagerBuilder] */

undefined8 FUN_10b019ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b019ba8; end: 10b019bb3; -[SCMusicRecommendationServices .cxx_destruct] */

void FUN_10b019ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b019bb4; end: 10b019c8b; -[SCCTRecommendation initWithRecommendation:requestId:contextIndex:] */

undefined1 *
FUN_10b019bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704560;
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



/* Entry: 10b019c8c; end: 10b019caf; -[SCCTRecommendation copyWithZone:] */

undefined8 FUN_10b019c8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b019cb0; end: 10b019d2f; -[SCCTRecommendation hash] */

undefined8 * FUN_10b019cb0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b019dc8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b019dd4;
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
            goto LAB_10b019dd4;
          }
          goto LAB_10b019dc8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b019dd4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b019d30; end: 10b019def; -[SCCTRecommendation isEqual:] */

long FUN_10b019d30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b019dc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b019dd4;
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
            goto LAB_10b019dd4;
          }
          goto LAB_10b019dc8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b019dd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b019df0; end: 10b019df7; -[SCCTRecommendation recommendation] */

undefined8 FUN_10b019df0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b019df8; end: 10b019dff; -[SCCTRecommendation requestId] */

undefined8 FUN_10b019df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b019e00; end: 10b019e07; -[SCCTRecommendation contextIndex] */

undefined8 FUN_10b019e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b019e08; end: 10b019e43; -[SCCTRecommendation .cxx_destruct] */

void FUN_10b019e08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b019e44; end: 10b019ecb; -[SCMusicRecommendationManagerCacheOptions initWithCacheKey:cacheTTL:] */

undefined1 *
FUN_10b019e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704568;
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



/* Entry: 10b019ecc; end: 10b019eef; -[SCMusicRecommendationManagerCacheOptions copyWithZone:] */

undefined8 FUN_10b019ecc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b019ef0; end: 10b019f7b; -[SCMusicRecommendationManagerCacheOptions hash] */

undefined8 * FUN_10b019ef0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b01a018:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b01a024;
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
          goto LAB_10b01a024;
        }
        goto LAB_10b01a018;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b01a024:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b019f7c; end: 10b01a03f; -[SCMusicRecommendationManagerCacheOptions isEqual:] */

long FUN_10b019f7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01a018:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01a024;
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
          goto LAB_10b01a024;
        }
        goto LAB_10b01a018;
      }
    }
    lVar4 = 0;
  }
LAB_10b01a024:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b01a040; end: 10b01a047; -[SCMusicRecommendationManagerCacheOptions cacheKey] */

undefined8 FUN_10b01a040(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01a048; end: 10b01a04f; -[SCMusicRecommendationManagerCacheOptions cacheTTL] */

undefined8 FUN_10b01a048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01a050; end: 10b01a05b; -[SCMusicRecommendationManagerCacheOptions .cxx_destruct] */

void FUN_10b01a050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01a05c; end: 10b01a0c3; +[SCCTPRecommendationsCTContext descriptor] */

void FUN_10b01a05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c650,
                        &PTR____CFConstantStringClassReference_110f4c498,&PTR_DAT_113356748,
                        &PTR_DAT_1133568c0,5,0x30,0x1c);
    puRam00000001137f2360 = puVar1;
  }
  return;
}



/* Entry: 10b01a0c4; end: 10b01a13f; +[SCCTPRecommendationsCTContext_LensContext descriptor] */

undefined * FUN_10b01a0c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c6a0,
                        &PTR____CFConstantStringClassReference_110e409f8,&PTR_DAT_113356748,
                        &PTR_s_lensId_113356760,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f2368 = puVar1;
  }
  return puRam00000001137f2368;
}



/* Entry: 10b01a140; end: 10b01a1bb; +[SCCTPRecommendationsCTContext_FilterContext descriptor] */

undefined * FUN_10b01a140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c6f0,
                        &PTR____CFConstantStringClassReference_110e3ded8,&PTR_DAT_113356748,
                        &PTR_DAT_113356780,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f2370 = puVar1;
  }
  return puRam00000001137f2370;
}



/* Entry: 10b01a1bc; end: 10b01a237; +[SCCTPRecommendationsCTContext_KeywordContext descriptor] */

undefined * FUN_10b01a1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c740,
                        &PTR____CFConstantStringClassReference_110f4c4b8,&PTR_DAT_113356748,
                        &PTR_DAT_1133567a0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f2378 = puVar1;
  }
  return puRam00000001137f2378;
}



/* Entry: 10b01a238; end: 10b01a2b3; +[SCCTPRecommendationsCTContext_TrackContext descriptor] */

undefined * FUN_10b01a238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c790,
                        &PTR____CFConstantStringClassReference_110f4c4d8,&PTR_DAT_113356748,
                        &PTR_s_trackId_1133567c0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f2380 = puVar1;
  }
  return puRam00000001137f2380;
}



/* Entry: 10b01a2b4; end: 10b01a32f; +[SCCTPRecommendationsCTContext_SnapContext descriptor] */

undefined * FUN_10b01a2b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c7e0,
                        &PTR____CFConstantStringClassReference_110f4c4f8,&PTR_DAT_113356748,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f2388 = puVar1;
  }
  return puRam00000001137f2388;
}



/* Entry: 10b01a330; end: 10b01a397; +[SCCTPRecommendationsCTRecommendation descriptor] */

void FUN_10b01a330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c830,
                        &PTR____CFConstantStringClassReference_110f4c518,&PTR_DAT_113356748,
                        &PTR_s_context_113356960,5,0x28,0x1c);
    puRam00000001137f2390 = puVar1;
  }
  return;
}



/* Entry: 10b01a398; end: 10b01a3ff; +[SCCTPRecommendationsCTRecommendationSignals descriptor] */

void FUN_10b01a398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c880,
                        &PTR____CFConstantStringClassReference_110f4c538,&PTR_DAT_113356748,
                        &PTR_DAT_113356a00,6,0x30,0x1c);
    puRam00000001137f2398 = puVar1;
  }
  return;
}



/* Entry: 10b01a400; end: 10b01a467; +[SCCTPRecommendationsGetCTRecommendationsRequest descriptor] */

void FUN_10b01a400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f23a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c8d0,
                        &PTR____CFConstantStringClassReference_110f4c558,&PTR_DAT_113356748,
                        &PTR_DAT_1133567e0,3,0x20,0x1c);
    puRam00000001137f23a0 = puVar1;
  }
  return;
}



/* Entry: 10b01a468; end: 10b01a4cf; +[SCCTPRecommendationsGetCTRecommendationsResponse descriptor] */

void FUN_10b01a468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f23a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4c920,
                        &PTR____CFConstantStringClassReference_110f4c578,&PTR_DAT_113356748,
                        &PTR_s_requestId_113356840,4,0x28,0x1c);
    puRam00000001137f23a8 = puVar1;
  }
  return;
}



/* Entry: 10b01a4d0; end: 10b01a543; -[SCPreviewToolbarCreationService initWithPreviewToolbarCreator:] */

undefined1 * FUN_10b01a4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704570;
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



/* Entry: 10b01a544; end: 10b01a54b; -[SCPreviewToolbarCreationService previewToolbarCreator] */

undefined8 FUN_10b01a544(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01a54c; end: 10b01a557; -[SCPreviewToolbarCreationService .cxx_destruct] */

void FUN_10b01a54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01a558; end: 10b01a69f; -[SCPreviewToolBarItemConfiguration initWithItemType:image:maskImage:accessibilityLabel:accessibilityIdentifier:displayName:] */

undefined1 *
FUN_10b01a558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112704578;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b01a6a0; end: 10b01a6c3; -[SCPreviewToolBarItemConfiguration copyWithZone:] */

undefined8 FUN_10b01a6a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01a6c4; end: 10b01a767; -[SCPreviewToolBarItemConfiguration hash] */

long * FUN_10b01a6c4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
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
  plVar3 = &lStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b01a840:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b01a84c;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && (plVar3[1] == param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = plVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = plVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              plVar6 = (long *)plVar3[6];
              if (plVar6 != (long *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10b01a84c;
              }
              goto LAB_10b01a840;
            }
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b01a84c:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b01a768; end: 10b01a867; -[SCPreviewToolBarItemConfiguration isEqual:] */

long FUN_10b01a768(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01a840:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01a84c;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b01a84c;
              }
              goto LAB_10b01a840;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01a84c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01a868; end: 10b01a86f; -[SCPreviewToolBarItemConfiguration itemType] */

undefined8 FUN_10b01a868(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01a870; end: 10b01a877; -[SCPreviewToolBarItemConfiguration image] */

undefined8 FUN_10b01a870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01a878; end: 10b01a87f; -[SCPreviewToolBarItemConfiguration maskImage] */

undefined8 FUN_10b01a878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01a880; end: 10b01a887; -[SCPreviewToolBarItemConfiguration accessibilityLabel] */

undefined8 FUN_10b01a880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01a888; end: 10b01a88f; -[SCPreviewToolBarItemConfiguration accessibilityIdentifier] */

undefined8 FUN_10b01a888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01a890; end: 10b01a897; -[SCPreviewToolBarItemConfiguration displayName] */

undefined8 FUN_10b01a890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b01a898; end: 10b01a8eb; -[SCPreviewToolBarItemConfiguration .cxx_destruct] */

void FUN_10b01a898(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01a8ec; end: 10b01a8f7; -[SCPreviewABServices .cxx_destruct] */

void FUN_10b01a8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01a8f8; end: 10b01a973;  */

undefined * FUN_10b01a8f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f23b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4c598,
                        &UNK_10e54f148,&UNK_10e54f178,4,FUN_10b01a974,0);
    do {
      if (puRam00000001137f23b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f23b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f23b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f23b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f23b0;
}



/* Entry: 10b01a974; end: 10b01a97f;  */

bool FUN_10b01a974(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b01a980; end: 10b01a9e7; +[SCCTPLensToolConfig descriptor] */

void FUN_10b01a980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f23b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c4cab0,
                        &PTR____CFConstantStringClassReference_110f4c5b8,&PTR_DAT_113356ac0,
                        &PTR_s_lensId_113356ad8,3,0x18,0x1c);
    puRam00000001137f23b8 = puVar1;
  }
  return;
}



/* Entry: 10b01a9e8; end: 10b01abaf; -[SCShoppingLensExitStateProduct initWithCoder:] */

undefined1 * FUN_10b01a9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01abb0; end: 10b01ad8f; -[SCShoppingLensExitStateProduct initWithProductId:storeId:domain:displayName:productImageUrl:productActionLink:options:productIdentifier:productIdentifierType:commerceAttachments:] */

undefined8 *
FUN_10b01abb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112704588;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
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
    puVar1[9] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b01ad90; end: 10b01adb3; -[SCShoppingLensExitStateProduct copyWithZone:] */

undefined8 FUN_10b01ad90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01adb4; end: 10b01aeb3; -[SCShoppingLensExitStateProduct encodeWithCoder:] */

void FUN_10b01adb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e85898);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f4c5d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4c5f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4c618);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4c638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4c658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4c678);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f4c698);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f4c6b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01aeb4; end: 10b01af87; -[SCShoppingLensExitStateProduct hash] */

long * FUN_10b01aeb4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  plVar3 = &lStack_78;
  func_0x000107c3191c(plVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b01b0b8:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b01b0c4;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && ((plVar3[1] == param_3[1] && (plVar3[9] == param_3[9])))) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = plVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = plVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = plVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = plVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = plVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    plVar6 = (long *)plVar3[10];
                    if (plVar6 != (long *)param_3[10]) {
                      func_0x00010c071ae0();
                      goto LAB_10b01b0c4;
                    }
                    goto LAB_10b01b0b8;
                  }
                }
              }
            }
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b01b0c4:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b01af88; end: 10b01b0df; -[SCShoppingLensExitStateProduct isEqual:] */

long FUN_10b01af88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01b0b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01b0c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))) {
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
                    lVar3 = *(long *)(param_1 + 0x50);
                    if (lVar3 != *(long *)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_10b01b0c4;
                    }
                    goto LAB_10b01b0b8;
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
LAB_10b01b0c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01b0e0; end: 10b01b0e7; -[SCShoppingLensExitStateProduct productId] */

undefined8 FUN_10b01b0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01b0e8; end: 10b01b0ef; -[SCShoppingLensExitStateProduct storeId] */

undefined8 FUN_10b01b0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01b0f0; end: 10b01b0f7; -[SCShoppingLensExitStateProduct domain] */

undefined8 FUN_10b01b0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01b0f8; end: 10b01b0ff; -[SCShoppingLensExitStateProduct displayName] */

undefined8 FUN_10b01b0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01b100; end: 10b01b107; -[SCShoppingLensExitStateProduct productImageUrl] */

undefined8 FUN_10b01b100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01b108; end: 10b01b10f; -[SCShoppingLensExitStateProduct productActionLink] */

undefined8 FUN_10b01b108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b01b110; end: 10b01b117; -[SCShoppingLensExitStateProduct options] */

undefined8 FUN_10b01b110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b01b118; end: 10b01b11f; -[SCShoppingLensExitStateProduct productIdentifier] */

undefined8 FUN_10b01b118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b01b120; end: 10b01b127; -[SCShoppingLensExitStateProduct productIdentifierType] */

undefined8 FUN_10b01b120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b01b128; end: 10b01b12f; -[SCShoppingLensExitStateProduct commerceAttachments] */

undefined8 FUN_10b01b128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b01b130; end: 10b01b1a7; -[SCShoppingLensExitStateProduct .cxx_destruct] */

void FUN_10b01b130(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10b01b1a8; end: 10b01b1c3; +[SCShoppingLensExitStateProductBuilder shoppingLensExitStateProduct] */

void FUN_10b01b1a8(void)

{
  _objc_alloc_init(PTR_PTR_1126df350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01b1c4; end: 10b01b47b; +[SCShoppingLensExitStateProductBuilder shoppingLensExitStateProductFromExistingShoppingLensExitStateProduct:] */

void FUN_10b01b1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  puVar1 = PTR_PTR_1126df350;
  _objc_retain(param_3);
  func_0x00010c22cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c115e60(param_3);
  puVar3 = puVar1;
  func_0x00010c2b6120(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ba2e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac8c0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2ac7a0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c115f40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b6180(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c115c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b60e0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0ec860(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2b4fe0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2b6140(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c115ec0(param_3);
  puVar18 = puVar16;
  func_0x00010c2b6160(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf422c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar19 = puVar18;
  func_0x00010c2aaaa0(puVar18,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 10b01b47c; end: 10b01b4cb; -[SCShoppingLensExitStateProductBuilder build] */

void FUN_10b01b47c(void)

{
  _objc_alloc(PTR_PTR_1126df358);
  func_0x00010c03a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01b4cc; end: 10b01b4d3; -[SCShoppingLensExitStateProductBuilder withProductId:] */

void FUN_10b01b4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b01b4d4; end: 10b01b50b; -[SCShoppingLensExitStateProductBuilder withStoreId:] */

long FUN_10b01b4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b50c; end: 10b01b543; -[SCShoppingLensExitStateProductBuilder withDomain:] */

long FUN_10b01b50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b544; end: 10b01b57b; -[SCShoppingLensExitStateProductBuilder withDisplayName:] */

long FUN_10b01b544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b57c; end: 10b01b5b3; -[SCShoppingLensExitStateProductBuilder withProductImageUrl:] */

long FUN_10b01b57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b5b4; end: 10b01b5eb; -[SCShoppingLensExitStateProductBuilder withProductActionLink:] */

long FUN_10b01b5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b5ec; end: 10b01b623; -[SCShoppingLensExitStateProductBuilder withOptions:] */

long FUN_10b01b5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b624; end: 10b01b65b; -[SCShoppingLensExitStateProductBuilder withProductIdentifier:] */

long FUN_10b01b624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b65c; end: 10b01b663; -[SCShoppingLensExitStateProductBuilder withProductIdentifierType:] */

void FUN_10b01b65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b01b664; end: 10b01b69b; -[SCShoppingLensExitStateProductBuilder withCommerceAttachments:] */

long FUN_10b01b664(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01b69c; end: 10b01b713; -[SCShoppingLensExitStateProductBuilder .cxx_destruct] */

void FUN_10b01b69c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10b01b714; end: 10b01b88b; -[SCShoppingLensPreviewPayload initWithCoder:] */

undefined1 * FUN_10b01b714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704590;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01b88c; end: 10b01ba0f; -[SCShoppingLensPreviewPayload initWithLensId:lensSessionId:lensCreatorId:lensContext:isLensSponsored:exitStateVersionId:exitProducts:exitType:] */

undefined1 *
FUN_10b01b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112704590;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01ba10; end: 10b01ba33; -[SCShoppingLensPreviewPayload copyWithZone:] */

undefined8 FUN_10b01ba10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01ba34; end: 10b01bb0b; -[SCShoppingLensPreviewPayload encodeWithCoder:] */

void FUN_10b01ba34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f315b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4c6d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4c6f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4c718);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4c738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4c758);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4c778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01bb0c; end: 10b01bbbf; -[SCShoppingLensPreviewPayload hash] */

undefined8 * FUN_10b01bb0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_68;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b01bcc0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b01bccc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[8] == param_3[8])))) {
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
                puVar6 = (undefined8 *)puVar3[7];
                if (puVar6 != (undefined8 *)param_3[7]) {
                  func_0x00010c071ae0();
                  goto LAB_10b01bccc;
                }
                goto LAB_10b01bcc0;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b01bccc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b01bbc0; end: 10b01bce7; -[SCShoppingLensPreviewPayload isEqual:] */

long FUN_10b01bbc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01bcc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01bccc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
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
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b01bccc;
                }
                goto LAB_10b01bcc0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01bccc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01bce8; end: 10b01bcef; -[SCShoppingLensPreviewPayload lensId] */

undefined8 FUN_10b01bce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01bcf0; end: 10b01bcf7; -[SCShoppingLensPreviewPayload lensSessionId] */

undefined8 FUN_10b01bcf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01bcf8; end: 10b01bcff; -[SCShoppingLensPreviewPayload lensCreatorId] */

undefined8 FUN_10b01bcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01bd00; end: 10b01bd07; -[SCShoppingLensPreviewPayload lensContext] */

undefined8 FUN_10b01bd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01bd08; end: 10b01bd0f; -[SCShoppingLensPreviewPayload isLensSponsored] */

undefined1 FUN_10b01bd08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b01bd10; end: 10b01bd17; -[SCShoppingLensPreviewPayload exitStateVersionId] */

undefined8 FUN_10b01bd10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


