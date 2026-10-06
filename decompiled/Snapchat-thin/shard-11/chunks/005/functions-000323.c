/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10861c318; end: 10861c343;  */

long FUN_10861c318(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10861c344; end: 10861c36b;  */

void FUN_10861c344(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10861c36c; end: 10861c4eb;  */

void FUN_10861c36c(undefined8 *param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_248 [216];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x00010065cf40(param_1,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010861c560();
  if (uVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      uVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = *(undefined8 *)(lStack_118 + uVar4 * 8);
        _objc_retain(uVar2);
        func_0x000107c2874c(auStack_138,uVar2);
        func_0x00010069c690(param_1,auStack_138);
        func_0x000107c27914(auStack_138);
        func_0x0001006d00a4();
        uVar4 = uVar4 + 1;
        in_ZR = uVar4 == uVar1;
      } while (uVar4 < uVar1);
      uVar1 = param_2;
      func_0x00010861c560();
    } while (uVar1 != 0);
  }
  uVar2 = 0;
  func_0x0001006cf854();
  func_0x0001006cf854();
  func_0x00010861c57c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006cf854();
  func_0x000107c27a04(param_1);
  func_0x0001006cf854();
  __Unwind_Resume(uVar2);
  func_0x00010861c568();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  else {
    FUN_1086227d0(auStack_248,param_2);
    func_0x000105282d68(param_1,auStack_248);
    func_0x00010066dfa0(auStack_248);
  }
  func_0x0001006cf854();
  return;
}



/* Entry: 10861c4ec; end: 10861c553;  */

void FUN_10861c4ec(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_108 [216];
  
  func_0x00010861c568();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0xd8] = 0;
  }
  else {
    FUN_1086227d0(auStack_108);
    func_0x000105282d68();
    func_0x00010066dfa0(auStack_108);
  }
  func_0x0001006cf854();
  return;
}



/* Entry: 10861c554; end: 10861c58f;  */

void FUN_10861c554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861c590; end: 10861c607; -[SCNMessagingConversationAdsManager initWithCpp:] */

undefined1 * FUN_10861c590(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd270;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10861c8f0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c285e0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10861c608; end: 10861c69f; -[SCNMessagingConversationAdsManager logImpression:] */

void FUN_10861c608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010861c938();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  func_0x00010861c910();
  func_0x00010861c918();
  return;
}



/* Entry: 10861c6a0; end: 10861c73f; -[SCNMessagingConversationAdsManager removeAd:reason:] */

void FUN_10861c6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010861c938();
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_48,param_4);
  func_0x00010861c910();
  func_0x00010861c918();
  return;
}



/* Entry: 10861c740; end: 10861c76b;  */

void FUN_10861c740(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10861c804();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861c76c; end: 10861c7bf; -[SCNMessagingConversationAdsManager .cxx_destruct] */

void FUN_10861c76c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5c010;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c285e0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10861c7c0; end: 10861c803; -[SCNMessagingConversationAdsManager .cxx_construct] */

undefined8 * FUN_10861c7c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10861c8f0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10861c804; end: 10861c87b;  */

void FUN_10861c804(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5c010;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10861c8f0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10861c87c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861c92c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861c87c; end: 10861c8ef;  */

void FUN_10861c87c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126da930;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10861c8f0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c285e0(&uStack_30);
  return;
}



/* Entry: 10861c8f0; end: 10861c953;  */

void FUN_10861c8f0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10861c954; end: 10861c967;  */

void FUN_10861c954(void)

{
  FUN_10861cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10861c968; end: 10861c973;  */

long FUN_10861c968(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5c078;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010861cdec();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10861c974; end: 10861c9b3;  */

void FUN_10861c974(void)

{
  func_0x00010861ce6c();
  return;
}



/* Entry: 10861c9b4; end: 10861ca1f;  */

void FUN_10861c9b4(void)

{
  func_0x00010861cddc();
  func_0x00010861ce44();
  FUN_10861a1f4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10861a404();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861cdf4();
  func_0x00010bf21fc0();
  func_0x00010861cdec();
  func_0x000107c31a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10861ca20; end: 10861ca87;  */

void FUN_10861ca20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e23c0(uVar2);
  func_0x00010861ce08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861ca88; end: 10861cadf;  */

void FUN_10861ca88(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010861ce78();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2400(uVar1,param_2,unaff_x20);
  func_0x00010861ce08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10861cae0; end: 10861cb4b;  */

void FUN_10861cae0(void)

{
  func_0x00010861cddc();
  func_0x00010861ce44();
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28044();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861cdf4();
  func_0x00010c0e24c0();
  func_0x00010861cdec();
  func_0x000107c31a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10861cb4c; end: 10861cbc3;  */

void FUN_10861cb4c(undefined8 param_1)

{
  func_0x00010861ce18();
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28044();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861ce54();
  func_0x00010c0e6940();
  func_0x000107c31a18();
  func_0x000107c31a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10861cbc4; end: 10861cc3b;  */

void FUN_10861cbc4(undefined8 param_1)

{
  func_0x00010861ce18();
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28044();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861ce54();
  func_0x00010c0e6900();
  func_0x000107c31a18();
  func_0x000107c31a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10861cc3c; end: 10861cca7;  */

void FUN_10861cc3c(void)

{
  func_0x00010861cddc();
  func_0x00010861ce44();
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010861cdf4();
  func_0x00010c0e4280();
  func_0x00010861cdec();
  func_0x000107c31a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10861cca8; end: 10861ccff;  */

void FUN_10861cca8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010861ce78();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x0001006a7a88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e68e0(uVar1,param_2,unaff_x20);
  func_0x00010861ce08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10861cd00; end: 10861cd2f;  */

void FUN_10861cd00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e68c0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10861cd30; end: 10861cdbf;  */

long FUN_10861cd30(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5c078;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010861cdec();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10861cdc0; end: 10861ce83;  */

void FUN_10861cdc0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5c0b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10861ce84; end: 10861cf33;  */

void FUN_10861ce84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126da938;
  _objc_alloc(PTR_PTR_1126da938);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar3 = param_1;
    FUN_10862d894(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
  }
  lVar2 = param_1 + 0x20;
  func_0x0001006ab3d4(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f760(puVar1,param_2,lVar3,lVar2,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  func_0x00010861cf3c();
  func_0x00010861cf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861cf34; end: 10861cf43;  */

void FUN_10861cf34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861cf44; end: 10861cfc3; -[SCNMessagingConversationIdProvider initWithCpp:] */

undefined1 * FUN_10861cf44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010861d188(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10861cfc4; end: 10861d0df; +[SCNMessagingConversationIdProvider getOneOnOneConversationId:participant2UserId:] */

void FUN_10861cfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000107c2874c(auStack_60,param_3);
  func_0x000107c2874c(auStack_78,param_4);
  FUN_10867aae8(auStack_48,auStack_60,auStack_78);
  func_0x000107c27914(auStack_78);
  func_0x000107c27914(auStack_60);
  puVar1 = auStack_48;
  func_0x0001006a7d84(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27914(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861d0e0; end: 10861d13b; -[SCNMessagingConversationIdProvider .cxx_destruct] */

void FUN_10861d0e0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5c1c8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010861d188((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10861d13c; end: 10861d1b3; -[SCNMessagingConversationIdProvider .cxx_construct] */

undefined8 * FUN_10861d13c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10861d1b4; end: 10861d1bf;  */

void FUN_10861d1b4(void)

{
  return;
}



/* Entry: 10861d1c0; end: 10861d21f;  */

void FUN_10861d1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da940;
  _objc_alloc(PTR_PTR_1126da940);
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01eb60(puVar1,param_2,param_1);
  FUN_10861d220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10861d220; end: 10861d22b;  */

void FUN_10861d220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861d22c; end: 10861d25b;  */

void FUN_10861d22c(void)

{
  _objc_alloc(PTR_PTR_1126da948);
  func_0x00010c04bde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861d25c; end: 10861d2f3; -[SCNMessagingConversationManager enterConversation:conversationType:callback:] */

void FUN_10861d25c(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x0001086219a8(*(undefined8 *)(*plVar1 + 0x10));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d2f4; end: 10861d393; -[SCNMessagingConversationManager fetchConversationWithMessages:callback:] */

void FUN_10861d2f4(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_1086268e8();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000108621c8c();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d394; end: 10861d4b3; -[SCNMessagingConversationManager fetchConversationWithMessagesPaginated:startingMessageId:numberOfMessages:callback:] */

void FUN_10861d394(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  long unaff_x23;
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  
  func_0x0001086219c8();
  func_0x000108621a94();
  func_0x000108621ae0();
  func_0x000108621d24();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010862197c();
  func_0x000108621c9c();
  func_0x000107c28124(param_5);
  FUN_1086268e8(auStack_78,param_6);
  (**(code **)(*plVar1 + 0x20))
            (plVar1,auStack_68,param_1,param_2 & 0xff,param_5 & 0xffffffffff,auStack_78);
  func_0x000108621c8c();
  func_0x000108621a7c();
  func_0x000108621bf4();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d4b4; end: 10861d557; -[SCNMessagingConversationManager fetchConversation:callback:] */

void FUN_10861d4b4(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_10862653c();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x28));
  func_0x000104be31bc(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d558; end: 10861d5ff; -[SCNMessagingConversationManager fetchConversationByParticipants:callback:] */

void FUN_10861d558(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108621ac8();
  FUN_10861c36c();
  func_0x000108621ad4();
  FUN_108626cfc();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x30));
  func_0x000104be33d4(auStack_58);
  func_0x000108621b90();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d600; end: 10861d6a3; -[SCNMessagingConversationManager fetchMessage:messageId:callback:] */

void FUN_10861d600(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108627cac();
  func_0x000108621930(*(undefined8 *)(*plVar1 + 0x38));
  func_0x000108621230(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d6a4; end: 10861d76f; -[SCNMessagingConversationManager fetchMessageByServerId:syncIfNotFound:callback:] */

void FUN_10861d6a4(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  func_0x0001086218d8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_10863c7fc(auStack_50);
  FUN_108627cac(auStack_60,in_x4);
  (**(code **)(*plVar1 + 0x40))(plVar1,auStack_50,in_x3,auStack_60);
  func_0x000108621230(auStack_60);
  func_0x000108621b7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861d770; end: 10861da47; -[SCNMessagingConversationManager fetchMessagesByServerIds:callback:] */

void FUN_10861d770(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uVar2 = param_1;
  func_0x000108621a20();
  func_0x000108621a94();
  plVar7 = *(long **)(param_1 + 0x18);
  func_0x000108621c6c();
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  lStack_198 = 0;
  func_0x000108621d2c();
  puVar3 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    if (uVar2 >> 0x3b != 0) goto LAB_10861d994;
    FUN_1086212f8(auStack_f0,uVar2,0,&puStack_188);
    FUN_108621260(&lStack_198,auStack_f0);
    puVar3 = auStack_f0;
    func_0x0001086213f4();
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x000108621c6c();
  func_0x000108621a5c();
  if (puVar3 != (undefined1 *)0x0) {
    lVar9 = *plStack_150;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar9) {
          func_0x000108621d34();
        }
        puVar8 = *(undefined1 **)(lStack_158 + (long)puVar10 * 8);
        _objc_retain(puVar8);
        FUN_10863c7fc(auStack_180,puVar8);
        if (puStack_190 < puStack_188) {
          *puStack_190 = 0;
          puStack_190[1] = 0;
          puStack_190[2] = 0;
          func_0x000108621c04();
          puVar6 = (undefined8 *)(extraout_x8 + 0x20);
        }
        else {
          lVar4 = (long)puStack_190 - lStack_198 >> 5;
          uVar2 = lVar4 + 1;
          if (uVar2 >> 0x3b != 0) {
            FUN_108621254();
            goto LAB_10861da14;
          }
          uVar5 = (long)puStack_188 - lStack_198 >> 4;
          if (uVar5 <= uVar2) {
            uVar5 = uVar2;
          }
          if (0x7fffffffffffffdf < (ulong)((long)puStack_188 - lStack_198)) {
            uVar5 = 0x7ffffffffffffff;
          }
          FUN_1086212f8(auStack_118,uVar5,lVar4,&puStack_188);
          puStack_108[1] = 0;
          puStack_108[2] = 0;
          *puStack_108 = 0;
          func_0x000108621c04();
          puStack_108 = (undefined8 *)(extraout_x8_00 + 0x20);
          FUN_108621260(&lStack_198,auStack_118);
          puVar6 = puStack_190;
          func_0x0001086213f4(auStack_118);
        }
        puStack_190 = puVar6;
        func_0x000107c27914(auStack_180);
        _objc_release();
        puVar10 = puVar10 + 1;
        in_ZR = puVar10 == puVar3;
      } while (puVar10 < puVar3);
      func_0x000108621a5c();
      puVar3 = puVar8;
    } while (puVar8 != (undefined1 *)0x0);
  }
  func_0x000100624928();
  func_0x000100624928();
  FUN_108628054(auStack_f0,param_4);
  (**(code **)(*plVar7 + 0x48))(plVar7,&lStack_198,auStack_f0);
  func_0x00010862143c(auStack_f0);
  func_0x000108621d1c();
  func_0x000108621a68();
  func_0x000100624928();
  func_0x000108621b00(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10861d994:
  FUN_108621254();
LAB_10861da14:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10861da18);
  (*pcVar1)();
}



/* Entry: 10861da48; end: 10861daeb; -[SCNMessagingConversationManager fetchServerMessageIdentifier:messageId:callback:] */

void FUN_10861da48(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108628fc4();
  func_0x000108621930(*(undefined8 *)(*plVar1 + 0x50));
  func_0x000104be3b38(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861daec; end: 10861dbb3; -[SCNMessagingConversationManager fetchPrefetchableMessagesForConversations:prefetchRequest:callback:] */

void FUN_10861daec(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d80();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621ac8();
  FUN_10861c36c();
  FUN_1086350dc();
  func_0x000108621b84();
  FUN_1086284b8();
  func_0x00010862196c(*(undefined8 *)(*plVar1 + 0x58));
  func_0x000104be3f18();
  func_0x000108621b90();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861dbb4; end: 10861dc57; -[SCNMessagingConversationManager fetchMessageForQuotedView:messageId:callback:] */

void FUN_10861dbb4(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108628864();
  func_0x000108621930(*(undefined8 *)(*plVar1 + 0x60));
  func_0x000108621460(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861dc58; end: 10861dcef; -[SCNMessagingConversationManager displayedMessages:lastMessageId:callback:] */

void FUN_10861dc58(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x000108621930(*(undefined8 *)(*plVar1 + 0x68));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861dcf0; end: 10861dda3; -[SCNMessagingConversationManager exitConversation:lastMessageId:callback:] */

void FUN_10861dcf0(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d80();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621c9c();
  func_0x0001086219f8();
  func_0x000108621a44(*(undefined8 *)(*plVar1 + 0x70));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861dda4; end: 10861e0d7; -[SCNMessagingConversationManager mediaMessagesDisplayed:messages:callback:] */

void FUN_10861dda4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long *plVar10;
  long **unaff_x24;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_70;
  
  func_0x000108621a20();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar8 = *(long **)(param_1 + 0x18);
  func_0x000107c2874c(auStack_178,param_3);
  func_0x000108621a94();
  plStack_188 = (long *)0x0;
  plStack_180 = (long *)0x0;
  plStack_190 = (long *)0x0;
  uVar2 = param_4;
  func_0x00010bf529e0();
  pplVar3 = (long **)0x0;
  plVar5 = (long *)0x0;
  if (uVar2 != 0) {
    if (uVar2 >> 0x3c != 0) goto LAB_10861e020;
    FUN_108621490(&plStack_f0,uVar2,0,&plStack_180);
    plVar10 = (long *)((long)plStack_e8 - ((long)plStack_188 - (long)plStack_190));
    plVar5 = plStack_190;
    _memcpy(plVar10);
    plVar12 = plStack_180;
    plStack_180 = plStack_d8;
    plStack_188 = plStack_e0;
    plStack_e0 = plStack_190;
    plStack_d8 = plVar12;
    plStack_f0 = plStack_190;
    plStack_e8 = plStack_190;
    pplVar3 = &plStack_f0;
    plStack_190 = plVar10;
    FUN_10862150c();
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x000108621a94();
  func_0x000108621c34();
  if (pplVar3 != (long **)0x0) {
    lVar13 = *plStack_150;
    do {
      pplVar9 = (long **)0x0;
      do {
        if (*plStack_150 != lVar13) {
          _objc_enumerationMutation(param_4);
        }
        func_0x000108621d08(uStack_158);
        pplVar4 = unaff_x24;
        FUN_10863488c();
        if (plStack_188 < plStack_180) {
          *plStack_188 = (long)pplVar4;
          *(int *)(plStack_188 + 1) = (int)plVar5;
          plVar12 = plStack_188 + 2;
        }
        else {
          lVar6 = (long)plStack_188 - (long)plStack_190 >> 4;
          uVar2 = lVar6 + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_108621484();
            goto LAB_10861e09c;
          }
          uVar7 = (long)plStack_180 - (long)plStack_190 >> 3;
          if (uVar7 <= uVar2) {
            uVar7 = uVar2;
          }
          if (0x7fffffffffffffef < (ulong)((long)plStack_180 - (long)plStack_190)) {
            uVar7 = 0xfffffffffffffff;
          }
          FUN_108621490(&plStack_118,uVar7,lVar6,&plStack_180);
          *plStack_108 = (long)pplVar4;
          *(int *)(plStack_108 + 1) = (int)plVar5;
          plVar12 = plStack_108 + 2;
          plVar11 = (long *)((long)plStack_110 - ((long)plStack_188 - (long)plStack_190));
          plVar5 = plStack_190;
          _memcpy(plVar11);
          plVar10 = plStack_180;
          plStack_180 = plStack_100;
          plStack_108 = plStack_190;
          plStack_100 = plVar10;
          plStack_118 = plStack_190;
          plStack_110 = plStack_190;
          pplVar4 = &plStack_118;
          plStack_190 = plVar11;
          plStack_188 = plVar12;
          FUN_10862150c();
        }
        plStack_188 = plVar12;
        func_0x000108621c7c();
        pplVar9 = (long **)((long)pplVar9 + 1);
        in_ZR = pplVar9 == pplVar3;
      } while (pplVar9 < pplVar3);
      func_0x000108621c34();
      pplVar3 = pplVar4;
    } while (pplVar4 != (long **)0x0);
  }
  func_0x000108621a68();
  func_0x000108621a68();
  FUN_10861a5ac(&plStack_f0,param_5);
  (**(code **)(*plVar8 + 0x78))(plVar8,auStack_178,&plStack_190,&plStack_f0);
  func_0x000104be3970(&plStack_f0);
  func_0x000108621d44();
  func_0x000107c27914(auStack_178);
  func_0x000100624928();
  func_0x000108621a68();
  _objc_release(param_3);
  func_0x000108621b00(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10861e020:
  FUN_108621484();
LAB_10861e09c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10861e0a0);
  (*pcVar1)();
}



/* Entry: 10861e0d8; end: 10861e1c3; -[SCNMessagingConversationManager sendMessageWithContent:messageContent:callback:] */

void FUN_10861e0d8(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [904];
  undefined1 auStack_a0 [96];
  
  FUN_108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_108631fc4(auStack_a0);
  func_0x000108621cfc();
  FUN_10862f7c0();
  FUN_108638f14(auStack_438);
  func_0x000108621a10(*(undefined8 *)(*plVar1 + 0x80));
  func_0x000108621c94();
  func_0x000104bee3a8(auStack_428);
  func_0x000104bee768(auStack_a0);
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e1c4; end: 10861e2af; -[SCNMessagingConversationManager forwardMessage:destinations:callback:] */

void FUN_10861e1c4(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [96];
  undefined1 auStack_230 [496];
  
  FUN_108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_108629970(auStack_230);
  func_0x000108621b98();
  FUN_108631fc4();
  func_0x000108621b84();
  FUN_108638f14();
  func_0x00010862196c(*(undefined8 *)(*plVar1 + 0x88));
  func_0x000104be36f0(auStack_2a0);
  func_0x000104bee768(auStack_290);
  FUN_1086210b0(auStack_230);
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e2b0; end: 10861e34f; -[SCNMessagingConversationManager retrySendMessage:messageId:callback:] */

void FUN_10861e2b0(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108638f14();
  func_0x000108621930(*(undefined8 *)(*plVar1 + 0x90));
  func_0x000108621c94();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e350; end: 10861e3e7; -[SCNMessagingConversationManager cancelMessageSend:messageId:callback:] */

void FUN_10861e350(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x000108621930(*(undefined8 *)(*plVar1 + 0x98));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e3e8; end: 10861e49f; -[SCNMessagingConversationManager updateMessage:messageId:update:callback:] */

void FUN_10861e3e8(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x23;
  long *plVar1;
  
  func_0x000108621d80();
  func_0x0001086219c8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  (**(code **)(*plVar1 + 0xa0))(plVar1,&stack0x00000018,in_x3,in_x4,&stack0x00000008);
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e4a0; end: 10861e607; -[SCNMessagingConversationManager reactToMessage:messageId:reaction:platformAnalytics:callback:] */

void FUN_10861e4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [464];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  func_0x000108621d4c();
  func_0x000108621a8c();
  func_0x000108621a94();
  func_0x000108621ae0();
  func_0x000108621d24();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000108621aa8(auStack_68);
  FUN_1086361d4(auStack_98);
  FUN_1086349cc(auStack_268);
  FUN_10861a5ac(auStack_278,param_7);
  (**(code **)(*plVar1 + 0xa8))(plVar1,auStack_68,param_4,auStack_98,auStack_268,auStack_278);
  func_0x000108621a84();
  func_0x000104bee6b8(auStack_268);
  func_0x000107c279a4(auStack_88);
  func_0x000107c27914(auStack_68);
  func_0x000108621bf4();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e608; end: 10861e6eb; -[SCNMessagingConversationManager removeReaction:messageId:reaction:callback:] */

void FUN_10861e608(void)

{
  long unaff_x23;
  long *plVar1;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  func_0x000108621d4c();
  func_0x0001086219c8();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x000108621aa8(auStack_58);
  func_0x000108621cfc();
  FUN_1086361d4();
  func_0x0001086219f8();
  func_0x000108621b14(*(undefined8 *)(*plVar1 + 0xb0));
  func_0x000108621a84();
  func_0x000107c279a4(auStack_78);
  func_0x000108621cb4();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e6ec; end: 10861e7a7; -[SCNMessagingConversationManager removeFailedMessages:messagesToRemove:callback:] */

void FUN_10861e6ec(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  FUN_10861e7a8();
  func_0x000108621a38();
  func_0x000108621958(*(undefined8 *)(*plVar1 + 0xb8));
  func_0x000108621b24();
  func_0x000108621cbc();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e7a8; end: 10861e8f3;  */

void FUN_10861e7a8(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x000108621d2c();
  puVar1 = param_1;
  func_0x000100676478(param_1,param_2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000108621c6c();
  puVar6 = &uStack_120;
  func_0x000108621a5c();
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x000108621d34();
        }
        uVar4 = *(undefined8 *)(lStack_118 + (long)puVar6 * 8);
        func_0x000108621d24();
        func_0x000107c2813c();
        puVar2 = param_1;
        uStack_128 = uVar4;
        func_0x0001006764fc(param_1,&uStack_128);
        func_0x000108621bf4();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar1;
      } while (puVar6 < puVar1);
      puVar6 = &uStack_120;
      func_0x000108621a5c();
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  func_0x000100624928();
  func_0x000100624928();
  func_0x000108621b00(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100624928();
  func_0x0001006573e4();
  func_0x000100624928();
  func_0x000108621ab8();
  pcVar3 = FUN_10861e8f4;
  func_0x000108621d58();
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = pcVar3;
  func_0x000108621a8c();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar7 = (long *)param_1[3];
  FUN_10861c36c(&uStack_108,puVar6);
  func_0x000108621b98();
  func_0x000107c27f20();
  func_0x000108621b84();
  FUN_108622bb0();
  (**(code **)(*plVar7 + 0xc0))(plVar7,&uStack_108,&uStack_120,in_x4,in_x5,auStack_130);
  func_0x000104be37e8(auStack_130);
  func_0x000108621ccc();
  func_0x000107c27a04(&uStack_108);
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e8f4; end: 10861e9fb; -[SCNMessagingConversationManager createConversation:title:conversationType:sourcePage:callback:] */

void FUN_10861e8f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621a8c();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10861c36c(&stack0x00000028,param_3);
  func_0x000108621b98();
  func_0x000107c27f20();
  func_0x000108621b84();
  FUN_108622bb0();
  (**(code **)(*plVar1 + 0xc0))(plVar1,&stack0x00000028,&stack0x00000010,param_5,param_6);
  func_0x000104be37e8();
  func_0x000108621ccc();
  func_0x000107c27a04(&stack0x00000028);
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861e9fc; end: 10861ea97; -[SCNMessagingConversationManager removeLocalConversations:callback:] */

void FUN_10861e9fc(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108621ac8();
  FUN_10861c36c();
  func_0x0001086219bc();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 200));
  func_0x000108621a84();
  func_0x000108621b90();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861ea98; end: 10861eb3b; -[SCNMessagingConversationManager ensureNetworkConversation:callback:] */

void FUN_10861ea98(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108622bb0();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0xd0));
  func_0x000104be37e8(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861eb3c; end: 10861ebe3; -[SCNMessagingConversationManager getOneOnOneConversationIds:callback:] */

void FUN_10861eb3c(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108621ac8();
  FUN_10861c36c();
  func_0x000108621ad4();
  FUN_10862a254();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0xd8));
  func_0x000104be3e20(auStack_58);
  func_0x000108621b90();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861ebe4; end: 10861ec9f; -[SCNMessagingConversationManager updateConversationTitle:title:callback:] */

void FUN_10861ebe4(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  func_0x000107c27f20();
  func_0x000108621a38();
  func_0x000108621958(*(undefined8 *)(*plVar1 + 0xe0));
  func_0x000108621b24();
  func_0x000108621ccc();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861eca0; end: 10861ed3f; -[SCNMessagingConversationManager updateGroupStoryConsent:consent:callback:] */

void FUN_10861eca0(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x0001086218d8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x000108621944(*(undefined8 *)(*plVar1 + 0xe8));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861ed40; end: 10861ee0f; -[SCNMessagingConversationManager inviteParticipants:participants:callback:] */

void FUN_10861ed40(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  FUN_108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621aa8(auStack_58);
  func_0x000108621cfc();
  FUN_10862ebf0();
  func_0x0001086219f8();
  func_0x000108621a10(*(undefined8 *)(*plVar1 + 0xf0));
  func_0x000108621a84();
  func_0x0001086210d8(auStack_88);
  func_0x000108621cb4();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861ee10; end: 10861eea7; -[SCNMessagingConversationManager leaveConversation:callback:] */

void FUN_10861ee10(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0xf8));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861eea8; end: 10861ef3f; -[SCNMessagingConversationManager clearConversation:callback:] */

void FUN_10861eea8(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x100));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861ef40; end: 10861eff7; -[SCNMessagingConversationManager updateConversationRetentionMode:retentionMode:updateSource:callback:] */

void FUN_10861ef40(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x23;
  long *plVar1;
  
  func_0x000108621d80();
  func_0x0001086219c8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  (**(code **)(*plVar1 + 0x108))(plVar1,&stack0x00000018,in_x3,in_x4,&stack0x00000008);
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861eff8; end: 10861f0b3; -[SCNMessagingConversationManager addBlockedParticipantException:participants:callback:] */

void FUN_10861eff8(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  FUN_10861c36c();
  func_0x000108621a38();
  func_0x000108621958(*(undefined8 *)(*plVar1 + 0x110));
  func_0x000108621b24();
  func_0x000108621cc4();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f0b4; end: 10861f16f; -[SCNMessagingConversationManager addNonFriendParticipantException:participants:callback:] */

void FUN_10861f0b4(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  FUN_10861c36c();
  func_0x000108621a38();
  func_0x000108621958(*(undefined8 *)(*plVar1 + 0x118));
  func_0x000108621b24();
  func_0x000108621cc4();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f170; end: 10861f207; -[SCNMessagingConversationManager updateChatNotificationSettings:notificationPreference:callback:] */

void FUN_10861f170(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x0001086219a8(*(undefined8 *)(*plVar1 + 0x120));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f208; end: 10861f29f; -[SCNMessagingConversationManager updateCallingNotificationSettings:notificationPreference:callback:] */

void FUN_10861f208(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x0001086219a8(*(undefined8 *)(*plVar1 + 0x128));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f2a0; end: 10861f33f; -[SCNMessagingConversationManager updateTemporaryMuteChatNotificationSettings:temporaryMuteDurationMinutes:callback:] */

void FUN_10861f2a0(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x0001086218d8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x000108621944(*(undefined8 *)(*plVar1 + 0x130));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f340; end: 10861f3df; -[SCNMessagingConversationManager updateTemporaryMuteCallingNotificationSettings:temporaryMuteDurationMinutes:callback:] */

void FUN_10861f340(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x0001086218d8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x000108621944(*(undefined8 *)(*plVar1 + 0x138));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f3e0; end: 10861f477; -[SCNMessagingConversationManager updateGameNotificationSettings:notificationPreference:callback:] */

void FUN_10861f3e0(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x0001086219a8(*(undefined8 *)(*plVar1 + 0x140));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f478; end: 10861f52b; -[SCNMessagingConversationManager updateCustomNotificationSound:soundId:callback:] */

void FUN_10861f478(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d80();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621c9c();
  func_0x0001086219f8();
  func_0x000108621a44(*(undefined8 *)(*plVar1 + 0x148));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f52c; end: 10861f5df; -[SCNMessagingConversationManager updateCustomRingtoneSound:soundId:callback:] */

void FUN_10861f52c(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d80();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x000108621c9c();
  func_0x0001086219f8();
  func_0x000108621a44(*(undefined8 *)(*plVar1 + 0x150));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f5e0; end: 10861f6bf; -[SCNMessagingConversationManager updateChatWallpaper:wallpaper:callback:] */

void FUN_10861f5e0(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_110 [184];
  undefined1 auStack_58 [24];
  
  FUN_108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621aa8(auStack_58);
  func_0x000108621b98();
  FUN_10861ac70();
  func_0x000108621a38();
  func_0x00010862196c(*(undefined8 *)(*plVar1 + 0x158));
  func_0x000108621b24();
  func_0x000108621100(auStack_110);
  func_0x000108621c74();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f6c0; end: 10861f78b; -[SCNMessagingConversationManager syncServerConversation:updateFeedEntry:reason:callback:] */

void FUN_10861f6c0(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x23;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x0001086219c8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  FUN_108622a70(&stack0x00000010);
  FUN_1086403d8(in_x5);
  (**(code **)(*plVar1 + 0x168))(plVar1,&stack0x00000010,in_x3,in_x4);
  func_0x000108621cd4();
  func_0x000108621b7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861f78c; end: 10861fa73; -[SCNMessagingConversationManager batchSyncServerConversation:batchSyncReason:callback:] */

void FUN_10861f78c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uVar4 = param_1;
  func_0x000108621a20();
  func_0x000108621a94();
  plVar8 = *(long **)(param_1 + 0x18);
  func_0x000108621c6c();
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  lStack_1a8 = 0;
  func_0x000108621d2c();
  puVar5 = (undefined1 *)0x0;
  if (uVar4 != 0) {
    in_ZR = uVar4 == 0x555555555555555;
    if (0x555555555555555 < uVar4) goto LAB_10861f9c4;
    FUN_1086215fc(auStack_f0,uVar4,0,&puStack_198);
    FUN_108621558(&lStack_1a8,auStack_f0);
    puVar5 = auStack_f0;
    func_0x000108621740();
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x000108621c6c();
  func_0x000108621a5c();
  if (puVar5 != (undefined1 *)0x0) {
    lVar11 = *plStack_150;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar11) {
          func_0x000108621d34();
        }
        func_0x000108621d08(uStack_158);
        FUN_108622a70(auStack_190);
        if (puStack_1a0 < puStack_198) {
          *puStack_1a0 = 0;
          puStack_1a0[1] = 0;
          puStack_1a0[2] = 0;
          func_0x000108621ba4();
          puVar10 = (undefined8 *)(extraout_x8 + 0x30);
        }
        else {
          lVar1 = ((long)puStack_1a0 - lStack_1a8) / 0x30;
          uVar4 = lVar1 + 1;
          if (0x555555555555555 < uVar4) {
            FUN_10862154c();
            goto LAB_10861fa40;
          }
          uVar2 = ((long)puStack_198 - lStack_1a8) / 0x30;
          uVar7 = uVar2 * 2;
          if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
            uVar7 = uVar4;
          }
          if (0x2aaaaaaaaaaaaa9 < uVar2) {
            uVar7 = 0x555555555555555;
          }
          FUN_1086215fc(auStack_118,uVar7,lVar1,&puStack_198);
          puStack_108[1] = 0;
          puStack_108[2] = 0;
          *puStack_108 = 0;
          func_0x000108621ba4();
          puStack_108 = (undefined8 *)(extraout_x8_00 + 0x30);
          FUN_108621558(&lStack_1a8,auStack_118);
          puVar10 = puStack_1a0;
          func_0x000108621740(auStack_118);
        }
        puVar6 = auStack_190;
        puStack_1a0 = puVar10;
        func_0x000107c27914();
        func_0x000108621c7c();
        puVar9 = puVar9 + 1;
        in_ZR = puVar9 == puVar5;
      } while (puVar9 < puVar5);
      func_0x000108621a5c();
      puVar5 = puVar6;
    } while (puVar6 != (undefined1 *)0x0);
  }
  func_0x000100624928();
  func_0x000100624928();
  FUN_10861a5ac(auStack_f0,param_5);
  (**(code **)(*plVar8 + 0x170))(plVar8,&lStack_1a8,param_4,auStack_f0);
  func_0x000104be3970(auStack_f0);
  func_0x000108621d14();
  func_0x000108621a68();
  func_0x000100624928();
  func_0x000108621b00(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10861f9c4:
  FUN_10862154c();
LAB_10861fa40:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10861fa44);
  (*pcVar3)();
}



/* Entry: 10861fa74; end: 10861fb17; -[SCNMessagingConversationManager getClientConversationId:callback:] */

void FUN_10861fa74(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108629b00();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x178));
  func_0x000108621788(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861fb18; end: 10861fb9b; -[SCNMessagingConversationManager getLocalMediaReferences:] */

void FUN_10861fb18(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x0001006241f4();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000100624288();
  FUN_10862f418();
  func_0x000100624478(*(undefined8 *)(*plVar1 + 0x180));
  func_0x0001086217ac(auStack_40);
  func_0x000100624928();
  return;
}



/* Entry: 10861fb9c; end: 10861fc33; -[SCNMessagingConversationManager sendTypingNotification:typingActivityType:callback:] */

void FUN_10861fb9c(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x0001086219a8(*(undefined8 *)(*plVar1 + 0x188));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861fc34; end: 10861fcb7; -[SCNMessagingConversationManager queryUserGroupsMetadata:] */

void FUN_10861fc34(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x0001006241f4();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000100624288();
  FUN_10863560c();
  func_0x000100624478(*(undefined8 *)(*plVar1 + 400));
  func_0x0001086217d0(auStack_40);
  func_0x000100624928();
  return;
}



/* Entry: 10861fcb8; end: 10861fd5b; -[SCNMessagingConversationManager hasUnreadMessage:callback:] */

void FUN_10861fcb8(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_108641368();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x198));
  func_0x0001086217f4(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861fd5c; end: 10861fe7b; -[SCNMessagingConversationManager applyMessageOrSyncConversation:conversationType:minVersion:updateFeedEntry:reason:messagePayloadBytes:callback:] */

void FUN_10861fd5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000108621a8c();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  func_0x000107c28040();
  func_0x000108621b84();
  FUN_1086403d8();
  (**(code **)(*plVar1 + 0x1a0))
            (plVar1,auStack_68,param_4,param_5,param_6,param_7,auStack_80,auStack_90);
  func_0x000108621cd4();
  func_0x000108621b7c();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861fe7c; end: 10861ff43; -[SCNMessagingConversationManager attachTranscription:messageId:transcriptionInfo:callback:] */

void FUN_10861fe7c(void)

{
  long unaff_x23;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621d4c();
  func_0x0001086219c8();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x000108621a04();
  FUN_108641140();
  func_0x0001086219f8();
  func_0x000108621b14(*(undefined8 *)(*plVar1 + 0x1a8));
  func_0x000108621a84();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10861ff44; end: 10862000b; -[SCNMessagingConversationManager retrieveMessagesByServerId:serverMessageIds:callback:] */

void FUN_10861ff44(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  FUN_10861e7a8();
  func_0x000108621b84();
  FUN_1086384e4();
  func_0x000108621958(*(undefined8 *)(*plVar1 + 0x1b0));
  func_0x000104be3c30();
  func_0x000108621cbc();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10862000c; end: 1086200c7; -[SCNMessagingConversationManager kickParticipant:userId:callback:] */

void FUN_10862000c(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000108621d58();
  func_0x000108621884();
  func_0x000108621a94();
  func_0x000108621ae0();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621a04();
  func_0x000108621b98();
  func_0x000107c2874c();
  func_0x000108621a38();
  func_0x000108621958(*(undefined8 *)(*plVar1 + 0x1b8));
  func_0x000108621b24();
  func_0x000108621b7c();
  func_0x000108621af8();
  func_0x000108621ab0();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 1086200c8; end: 10862016b; -[SCNMessagingConversationManager bootstrapDevice:keyVersion:callback:] */

void FUN_1086200c8(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x0001086218d8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000108621ac8();
  func_0x000107c28040();
  func_0x0001086219bc();
  func_0x000108621944(*(undefined8 *)(*plVar1 + 0x1c0));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10862016c; end: 108620203; -[SCNMessagingConversationManager dismissStreakRestore:callback:] */

void FUN_10862016c(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x1c8));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 108620204; end: 10862029b; -[SCNMessagingConversationManager clearConversationHistory:callback:] */

void FUN_108620204(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x1d0));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 10862029c; end: 108620333; -[SCNMessagingConversationManager setSnapPostOpenViewingPolicy:snapPostOpenViewingPolicy:callback:] */

void FUN_10862029c(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010862189c();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x0001086219a8(*(undefined8 *)(*plVar1 + 0x1d8));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 108620334; end: 1086203d3; -[SCNMessagingConversationManager getPendingDecryptionCount:callback:] */

void FUN_108620334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000100624288();
  FUN_108634058();
  (**(code **)(*plVar1 + 0x1e0))(plVar1,param_3,auStack_40);
  func_0x000108621818(auStack_40);
  func_0x000100624928();
  return;
}



/* Entry: 1086203d4; end: 108620473; -[SCNMessagingConversationManager updateColor:colorOption:callback:] */

void FUN_1086203d4(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x0001086218d8();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010862197c();
  func_0x0001086219bc();
  func_0x000108621944(*(undefined8 *)(*plVar1 + 0x1e8));
  func_0x000108621a84();
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 108620474; end: 108620517; -[SCNMessagingConversationManager getPendingDecryptionMessagesCountByConvId:callback:] */

void FUN_108620474(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x0001086218b4();
  func_0x000108621a94();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010862197c();
  func_0x000108621ad4();
  FUN_1086344c0();
  func_0x00010862190c(*(undefined8 *)(*plVar1 + 0x1f0));
  func_0x00010862183c(auStack_58);
  func_0x000108621a7c();
  func_0x000108621a68();
  func_0x000100624928();
  return;
}



/* Entry: 108620518; end: 10862059b; -[SCNMessagingConversationManager getPendingSendCount:] */

void FUN_108620518(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x0001006241f4();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000100624288();
  FUN_108634518();
  func_0x000100624478(*(undefined8 *)(*plVar1 + 0x1f8));
  func_0x000108621860(auStack_40);
  func_0x000100624928();
  return;
}


