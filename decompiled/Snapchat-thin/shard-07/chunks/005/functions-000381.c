/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056ec804; end: 1056ec82f; -[SCLeaveCustomStoryRouterImpl dialogDidDismiss:] */

void FUN_1056ec804(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ec830; end: 1056ec873; -[SCLeaveCustomStoryRouterImpl .cxx_destruct] */

void FUN_1056ec830(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056ec874; end: 1056ec94f; -[SCLeaveCustomStoryWorkflow initWithRouter:delegate:customStoriesDataMutator:isCommunity:isPendingMembership:] */

undefined1 *
FUN_1056ec874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e9c90;
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
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x21) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056ec950; end: 1056ec96b; -[SCLeaveCustomStoryWorkflow beginWorkflow] */

void FUN_1056ec950(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c10c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_presentLeaveCommunityOptionsWith_112620c78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentLeaveCustomStoryOptionsWi_112620c90,param_1);
  return;
}



/* Entry: 1056ec96c; end: 1056ecaa3; -[SCLeaveCustomStoryWorkflow didSelectLeaveStory:] */

void FUN_1056ec96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_copyWeak(auStack_48,param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c08e1e0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1056ecaa4; end: 1056ecafb;  */

void FUN_1056ecaa4(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    func_0x000108f57f1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(PTR_PTR_1126afca8);
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf73e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ecafc; end: 1056ecc2f; -[SCLeaveCustomStoryWorkflow didSelectBlockStory:] */

void FUN_1056ecafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_copyWeak(auStack_48,param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c08e1e0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1056ecc30; end: 1056ecc87;  */

void FUN_1056ecc30(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    func_0x000108f57f1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(PTR_PTR_1126afca8);
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf73e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ecc88; end: 1056eccb7; -[SCLeaveCustomStoryWorkflow didSelectCancelLeaveStory] */

void FUN_1056ecc88(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056eccb8; end: 1056eccef; -[SCLeaveCustomStoryWorkflow .cxx_destruct] */

void FUN_1056eccb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056eccf0; end: 1056ecd8b;  */

void FUN_1056eccf0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108aa4f0);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_1108aa4f0,&uStack_40,param_2 * 10);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 1056ecd8c; end: 1056ecfff;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056ecfd0) */
/* WARNING: Removing unreachable block (ram,0x0001056ed260) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ecd8c(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x24;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined1 *puStack_f28;
  long *plStack_f20;
  long *plStack_f18;
  undefined8 ***pppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined1 *puStack_ee8;
  undefined8 auStack_ee0 [2];
  char cStack_ec9;
  long lStack_ec8;
  long *plStack_ec0;
  long *plStack_eb8;
  long *plStack_eb0;
  long *plStack_ea8;
  long *plStack_ea0;
  long *plStack_e98;
  undefined8 ***pppuStack_e90;
  code *pcStack_e88;
  long alStack_e80 [3];
  undefined1 *puStack_e68;
  long alStack_e60 [2];
  char cStack_e49;
  long lStack_e48;
  long *plStack_e40;
  long *plStack_e38;
  long *plStack_e30;
  long *plStack_e28;
  long *plStack_e20;
  long *plStack_e18;
  undefined8 ***pppuStack_e10;
  code *pcStack_e08;
  long alStack_e00 [3];
  undefined1 *puStack_de8;
  long alStack_de0 [2];
  char cStack_dc9;
  long lStack_dc8;
  long *plStack_dc0;
  long *plStack_db8;
  long *plStack_db0;
  long *plStack_da8;
  long *plStack_da0;
  long *plStack_d98;
  undefined8 ***pppuStack_d90;
  code *pcStack_d88;
  long alStack_d80 [3];
  undefined1 *puStack_d68;
  long alStack_d60 [3];
  undefined1 auStack_d48 [24];
  undefined8 auStack_d30 [2];
  char cStack_d19;
  long lStack_d18;
  undefined8 ***pppuStack_cd0;
  code *pcStack_cc8;
  long alStack_cc0 [3];
  undefined1 *puStack_ca8;
  long alStack_ca0 [3];
  undefined1 auStack_c88 [24];
  undefined8 auStack_c70 [2];
  char cStack_c59;
  long lStack_c58;
  undefined8 ***pppuStack_c10;
  code *pcStack_c08;
  long alStack_c00 [3];
  undefined1 *puStack_be8;
  long alStack_be0 [3];
  undefined1 auStack_bc8 [24];
  undefined8 auStack_bb0 [2];
  char cStack_b99;
  long lStack_b98;
  undefined8 ***pppuStack_b50;
  code *pcStack_b48;
  long alStack_b40 [3];
  undefined1 *puStack_b28;
  long alStack_b20 [3];
  undefined1 auStack_b08 [24];
  undefined8 auStack_af0 [2];
  char cStack_ad9;
  long lStack_ad8;
  undefined8 ***pppuStack_a90;
  code *pcStack_a88;
  long alStack_a80 [3];
  undefined1 *puStack_a68;
  long alStack_a60 [2];
  char cStack_a49;
  long lStack_a48;
  long *plStack_a40;
  long *plStack_a38;
  long *plStack_a30;
  long *plStack_a28;
  long *plStack_a20;
  long *plStack_a18;
  undefined8 ***pppuStack_a10;
  code *pcStack_a08;
  long alStack_9f8 [3];
  long *plStack_9e0;
  long alStack_9d8 [2];
  char cStack_9c1;
  undefined8 auStack_9c0 [2];
  char cStack_9a9;
  long lStack_9a8;
  long *plStack_9a0;
  long *plStack_998;
  long *plStack_990;
  long *plStack_988;
  long *plStack_980;
  long *plStack_978;
  undefined8 ***pppuStack_970;
  code *pcStack_968;
  long alStack_958 [3];
  long *plStack_940;
  long alStack_938 [2];
  char cStack_921;
  undefined8 auStack_920 [2];
  char cStack_909;
  long lStack_908;
  long *plStack_900;
  long *plStack_8f8;
  long *plStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  long *plStack_8d8;
  undefined8 ***pppuStack_8d0;
  code *pcStack_8c8;
  long alStack_8c0 [3];
  undefined1 *puStack_8a8;
  long alStack_8a0 [3];
  undefined1 auStack_888 [24];
  undefined8 auStack_870 [2];
  char cStack_859;
  long lStack_858;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  long alStack_7f8 [3];
  char *pcStack_7e0;
  long alStack_7d8 [2];
  char cStack_7c1;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  long *plStack_7a0;
  long *plStack_798;
  long *plStack_790;
  long *plStack_788;
  long *plStack_780;
  long *plStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  long alStack_760 [3];
  undefined1 *puStack_748;
  long alStack_740 [3];
  undefined1 auStack_728 [24];
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  long alStack_6a0 [3];
  undefined1 *puStack_688;
  long alStack_680 [3];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  long alStack_5e0 [3];
  undefined1 *puStack_5c8;
  long alStack_5c0 [3];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  long alStack_520 [3];
  undefined1 *puStack_508;
  long alStack_500 [3];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  long alStack_460 [3];
  undefined1 *puStack_448;
  long alStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long alStack_3a0 [3];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  long alStack_320 [3];
  undefined1 *puStack_308;
  long alStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  long alStack_2a0 [3];
  undefined1 *puStack_288;
  long alStack_280 [2];
  char cStack_269;
  long lStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  long alStack_218 [3];
  long *plStack_200;
  long alStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long alStack_180 [3];
  undefined1 *puStack_168;
  long alStack_160 [3];
  undefined1 auStack_148 [24];
  long alStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long alStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  plVar16 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  plVar6 = param_3;
  plVar15 = param_4;
  plVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(alStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = alStack_70;
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    alStack_c0[2] = 0;
    func_0x00010007e1e8(alStack_c0,alStack_a0,&lStack_58,3);
    plVar4 = (long *)&UNK_1108aa540;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)alStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    plVar6 = plVar16;
    plVar15 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)alStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_3);
  plVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != alStack_a0);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  plVar9 = alStack_180;
  pcStack_c8 = FUN_1056ed000;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar4;
  plVar14 = plVar6;
  plVar11 = plVar15;
  plVar8 = plVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar4);
  _objc_retain(plVar6);
  if (plVar16 != (long *)0x0) {
    plVar2 = (long *)plVar16[1];
    plVar7 = (long *)&UNK_1108aa590;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar16 = (long *)plVar16[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      func_0x00010002b838(alStack_160,pcVar1);
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar6);
        pcVar1 = (char *)plVar6;
        func_0x00010bdc3520(plVar6);
      }
      _objc_release(plVar6);
      func_0x00010002b838(auStack_148,pcVar1);
      unaff_x24 = alStack_130;
      pcVar1 = "true";
      if ((int)plVar15 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar1);
      alStack_180[0] = 0;
      alStack_180[1] = 0;
      alStack_180[2] = 0;
      func_0x00010007e1e8(alStack_180,alStack_160,&lStack_118,3);
      plVar11 = (long *)((long)plVar3 * 10);
      plVar7 = (long *)&UNK_1108aa590;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_168 = (undefined1 *)alStack_180;
      func_0x00010007e5dc(&puStack_168);
      lVar13 = 0;
      plVar14 = plVar9;
      do {
        if ((&cStack_119)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)alStack_130 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        plVar15 = alStack_180;
      } while (lVar13 != -0x48);
    }
  }
  _objc_release(plVar6);
  plVar3 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  plStack_1b0 = alStack_160;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != plStack_1b0);
  _objc_release(plVar6);
  _objc_release(plVar4);
  plVar2 = plVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_1056ed298;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = plVar7;
  plVar9 = plVar14;
  plVar12 = plVar11;
  plStack_1c0 = unaff_x24;
  plStack_1b8 = plVar15;
  plStack_1a8 = plVar3;
  plStack_1a0 = plVar6;
  plStack_198 = plVar4;
  ppuStack_190 = &puStack_d0;
  _objc_retain(plVar7);
  _objc_retain(plVar14);
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)plVar2[1];
    plVar16 = (long *)&UNK_1108aa5e0;
    (**(code **)(*plVar4 + 0x28))();
    if ((int)plVar4 != 0) {
      plVar4 = (long *)plVar2[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      unaff_x24 = alStack_1f8;
      func_0x00010002b838(alStack_1f8,pcVar1);
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar14);
        pcVar1 = (char *)plVar14;
        func_0x00010bdc3520(plVar14);
      }
      _objc_release(plVar14);
      func_0x00010002b838(auStack_1e0,pcVar1);
      alStack_218[0] = 0;
      alStack_218[1] = 0;
      alStack_218[2] = 0;
      func_0x00010007e1e8(alStack_218,alStack_1f8,&lStack_1c8,2);
      plVar12 = (long *)((long)plVar11 * 10);
      plVar16 = (long *)&UNK_1108aa5e0;
      plVar15 = alStack_218;
      plVar9 = alStack_218;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plStack_200 = plVar15;
      func_0x00010007e5dc(&plStack_200);
      lVar13 = 0;
      plVar2 = alStack_1f8;
      do {
        if ((&cStack_1c9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(plVar14);
  plVar4 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  if (cStack_1e1 < '\0') {
    __ZdlPv(alStack_1f8[0]);
  }
  _objc_release(plVar14);
  _objc_release(plVar7);
  plVar3 = plVar4;
  __Unwind_Resume();
  plVar10 = alStack_2a0;
  pcStack_228 = FUN_1056ed4ec;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar16;
  plVar11 = plVar9;
  plStack_260 = unaff_x24;
  plStack_258 = plVar15;
  plStack_250 = plVar2;
  plStack_248 = plVar4;
  plStack_240 = plVar14;
  plStack_238 = plVar7;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(plVar16);
  plVar4 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar16;
      _objc_retainAutorelease(plVar16);
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    plVar15 = alStack_280;
    func_0x00010002b838(alStack_280,pcVar1);
    alStack_2a0[0] = 0;
    alStack_2a0[1] = 0;
    alStack_2a0[2] = 0;
    func_0x00010007e1e8(alStack_2a0,alStack_280,&lStack_268,1);
    plVar6 = (long *)&UNK_1108aa630;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_288 = (undefined1 *)alStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    plVar11 = plVar10;
    plVar12 = plVar9;
    plVar2 = alStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(alStack_280[0]);
      plVar11 = plVar10;
      plVar12 = plVar9;
      plVar2 = alStack_2a0;
    }
  }
  plVar3 = plVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar16);
  _objc_release(plVar16);
  plVar14 = plVar3;
  __Unwind_Resume();
  plVar10 = alStack_320;
  pcStack_2a8 = FUN_1056ed660;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar6;
  plVar9 = plVar11;
  plStack_2e0 = unaff_x24;
  plStack_2d8 = plVar15;
  plStack_2d0 = plVar2;
  plStack_2c8 = plVar4;
  plStack_2c0 = plVar3;
  plStack_2b8 = plVar16;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar6);
  if (plVar14 != (long *)0x0) {
    plVar4 = (long *)plVar14[1];
    plVar7 = (long *)&UNK_1108aa680;
    (**(code **)(*plVar4 + 0x28))();
    if ((int)plVar4 != 0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      plVar15 = alStack_300;
      func_0x00010002b838(alStack_300,pcVar1);
      alStack_320[0] = 0;
      alStack_320[1] = 0;
      alStack_320[2] = 0;
      func_0x00010007e1e8(alStack_320,alStack_300,&lStack_2e8,1);
      plVar12 = (long *)((long)plVar11 * 10);
      plVar7 = (long *)&UNK_1108aa680;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_308 = (undefined1 *)alStack_320;
      func_0x00010007e5dc(&puStack_308);
      plVar9 = plVar10;
      plVar2 = alStack_320;
      if (cStack_2e9 < '\0') {
        __ZdlPv(alStack_300[0]);
        plVar9 = plVar10;
        plVar2 = alStack_320;
      }
    }
  }
  plVar4 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar16 = plVar4;
  __Unwind_Resume();
  plVar10 = alStack_3a0;
  pcStack_328 = FUN_1056ed7f8;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar7;
  plVar11 = plVar9;
  plStack_360 = unaff_x24;
  plStack_358 = plVar15;
  plStack_350 = plVar2;
  plStack_348 = plVar14;
  plStack_340 = plVar4;
  plStack_338 = plVar6;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar7);
  if (plVar16 != (long *)0x0) {
    plVar4 = (long *)plVar16[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    func_0x00010002b838(auStack_380,pcVar1);
    alStack_3a0[0] = 0;
    alStack_3a0[1] = 0;
    alStack_3a0[2] = 0;
    func_0x00010007e1e8(alStack_3a0,auStack_380,&lStack_368,1);
    plVar3 = (long *)&UNK_1108aa6d0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_388 = (undefined1 *)alStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    plVar11 = plVar10;
    plVar12 = plVar9;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      plVar11 = plVar10;
      plVar12 = plVar9;
    }
  }
  plVar4 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar7);
  _objc_release(plVar7);
  __Unwind_Resume();
  plVar14 = alStack_460;
  pcStack_3a8 = FUN_1056ed96c;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar3;
  plVar6 = plVar11;
  plVar16 = plVar12;
  plVar7 = plVar8;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar3);
  _objc_retain(plVar11);
  _objc_retain(plVar12);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    func_0x00010002b838(alStack_440,pcVar1);
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar11);
      pcVar1 = (char *)plVar11;
      func_0x00010bdc3520(plVar11);
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_428,pcVar1);
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar12);
      pcVar1 = (char *)plVar12;
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_410,pcVar1);
    alStack_460[0] = 0;
    alStack_460[1] = 0;
    alStack_460[2] = 0;
    func_0x00010007e1e8(alStack_460,alStack_440,&lStack_3f8,3);
    plVar15 = (long *)&UNK_1108aa720;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_448 = (undefined1 *)alStack_460;
    func_0x00010007e5dc(&puStack_448);
    lVar13 = 0;
    plVar6 = plVar14;
    plVar16 = plVar8;
    do {
      if ((&cStack_3f9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = alStack_460;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar12);
  _objc_release(plVar11);
  plVar4 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != alStack_440);
  _objc_release(plVar12);
  _objc_release(plVar11);
  _objc_release(plVar3);
  __Unwind_Resume();
  plVar9 = alStack_520;
  pcStack_468 = FUN_1056edc2c;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar15;
  plVar14 = plVar6;
  plVar11 = plVar16;
  plVar8 = plVar7;
  pppuStack_470 = &pppuStack_3b0;
  _objc_retain(plVar15);
  _objc_retain(plVar6);
  _objc_retain(plVar16);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)plVar4[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    func_0x00010002b838(alStack_500,pcVar1);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar1 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_4e8,pcVar1);
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar16);
      pcVar1 = (char *)plVar16;
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    func_0x00010002b838(auStack_4d0,pcVar1);
    alStack_520[0] = 0;
    alStack_520[1] = 0;
    alStack_520[2] = 0;
    func_0x00010007e1e8(alStack_520,alStack_500,&lStack_4b8,3);
    plVar3 = (long *)&UNK_1108aa770;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_508 = (undefined1 *)alStack_520;
    func_0x00010007e5dc(&puStack_508);
    lVar13 = 0;
    plVar14 = plVar9;
    plVar11 = plVar7;
    do {
      if ((&cStack_4b9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = alStack_520;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar16);
  _objc_release(plVar6);
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar16);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != alStack_500);
  _objc_release(plVar16);
  _objc_release(plVar6);
  _objc_release(plVar15);
  __Unwind_Resume();
  plVar9 = alStack_5e0;
  pcStack_528 = FUN_1056edeec;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar3;
  plVar6 = plVar14;
  plVar16 = plVar11;
  plVar7 = plVar8;
  pppuStack_530 = &pppuStack_470;
  _objc_retain(plVar3);
  _objc_retain(plVar14);
  _objc_retain(plVar11);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    func_0x00010002b838(alStack_5c0,pcVar1);
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar14);
      pcVar1 = (char *)plVar14;
      func_0x00010bdc3520(plVar14);
    }
    _objc_release(plVar14);
    func_0x00010002b838(auStack_5a8,pcVar1);
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar11);
      pcVar1 = (char *)plVar11;
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_590,pcVar1);
    alStack_5e0[0] = 0;
    alStack_5e0[1] = 0;
    alStack_5e0[2] = 0;
    func_0x00010007e1e8(alStack_5e0,alStack_5c0,&lStack_578,3);
    plVar15 = (long *)&UNK_1108aa7c0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_5c8 = (undefined1 *)alStack_5e0;
    func_0x00010007e5dc(&puStack_5c8);
    lVar13 = 0;
    plVar6 = plVar9;
    plVar16 = plVar8;
    do {
      if ((&cStack_579)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = alStack_5e0;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar11);
  _objc_release(plVar14);
  plVar4 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != alStack_5c0);
  _objc_release(plVar11);
  _objc_release(plVar14);
  _objc_release(plVar3);
  __Unwind_Resume();
  plVar9 = alStack_6a0;
  pcStack_5e8 = FUN_1056ee1ac;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar15;
  plVar14 = plVar6;
  plVar11 = plVar16;
  plVar8 = plVar7;
  pppuStack_5f0 = &pppuStack_530;
  _objc_retain(plVar15);
  _objc_retain(plVar6);
  _objc_retain(plVar16);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)plVar4[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    func_0x00010002b838(alStack_680,pcVar1);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar1 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_668,pcVar1);
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar16);
      pcVar1 = (char *)plVar16;
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    func_0x00010002b838(auStack_650,pcVar1);
    alStack_6a0[0] = 0;
    alStack_6a0[1] = 0;
    alStack_6a0[2] = 0;
    func_0x00010007e1e8(alStack_6a0,alStack_680,&lStack_638,3);
    plVar3 = (long *)&UNK_1108aa810;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_688 = (undefined1 *)alStack_6a0;
    func_0x00010007e5dc(&puStack_688);
    lVar13 = 0;
    plVar14 = plVar9;
    plVar11 = plVar7;
    do {
      if ((&cStack_639)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = alStack_6a0;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar16);
  _objc_release(plVar6);
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar16);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != alStack_680);
  _objc_release(plVar16);
  _objc_release(plVar6);
  _objc_release(plVar15);
  __Unwind_Resume();
  plVar9 = alStack_760;
  pcStack_6a8 = FUN_1056ee46c;
  lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar3;
  plVar6 = plVar14;
  plVar16 = plVar11;
  plVar7 = plVar8;
  pppuStack_6b0 = &pppuStack_5f0;
  _objc_retain(plVar3);
  _objc_retain(plVar14);
  _objc_retain(plVar11);
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)plVar4[1];
    plVar15 = (long *)&UNK_1108aa860;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar4 = (long *)plVar4[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      func_0x00010002b838(alStack_740,pcVar1);
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar14);
        pcVar1 = (char *)plVar14;
        func_0x00010bdc3520(plVar14);
      }
      _objc_release(plVar14);
      func_0x00010002b838(auStack_728,pcVar1);
      _objc_retain(plVar11);
      if (plVar11 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar11);
        pcVar1 = (char *)plVar11;
        func_0x00010bdc3520();
      }
      _objc_release(plVar11);
      func_0x00010002b838(auStack_710,pcVar1);
      alStack_760[0] = 0;
      alStack_760[1] = 0;
      alStack_760[2] = 0;
      func_0x00010007e1e8(alStack_760,alStack_740,&lStack_6f8,3);
      plVar16 = (long *)((long)plVar8 * 10);
      plVar15 = (long *)&UNK_1108aa860;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      puStack_748 = (undefined1 *)alStack_760;
      func_0x00010007e5dc(&puStack_748);
      lVar13 = 0;
      plVar6 = plVar9;
      do {
        if ((&cStack_6f9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_710 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = alStack_760;
      } while (lVar13 != -0x48);
    }
  }
  _objc_release(plVar11);
  _objc_release(plVar14);
  plVar4 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  plStack_798 = alStack_740;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != plStack_798);
  _objc_release(plVar11);
  _objc_release(plVar14);
  _objc_release(plVar3);
  plVar2 = plVar4;
  __Unwind_Resume();
  pcStack_768 = FUN_1056ee750;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar15;
  plVar9 = plVar6;
  plVar12 = plVar16;
  plStack_7a0 = unaff_x24;
  plStack_790 = plVar4;
  plStack_788 = plVar11;
  plStack_780 = plVar14;
  plStack_778 = plVar3;
  pppuStack_770 = &pppuStack_6b0;
  _objc_retain(plVar15);
  _objc_retain(plVar6);
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)plVar2[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = alStack_7d8;
    func_0x00010002b838(alStack_7d8,pcVar1);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar1 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_7c0,pcVar1);
    alStack_7f8[0] = 0;
    alStack_7f8[1] = 0;
    alStack_7f8[2] = 0;
    func_0x00010007e1e8(alStack_7f8,alStack_7d8,&lStack_7a8,2);
    plVar8 = (long *)&UNK_1108aa8b0;
    plVar9 = alStack_7f8;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    pcStack_7e0 = (char *)alStack_7f8;
    func_0x00010007e5dc(&pcStack_7e0);
    lVar13 = 0;
    plVar12 = plVar16;
    do {
      if ((&cStack_7a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(plVar6);
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  if (cStack_7c1 < '\0') {
    __ZdlPv(alStack_7d8[0]);
  }
  _objc_release(plVar6);
  _objc_release(plVar15);
  __Unwind_Resume();
  plVar14 = alStack_8c0;
  pcStack_808 = FUN_1056ee980;
  lStack_858 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar8;
  plVar6 = plVar9;
  plVar3 = plVar12;
  plVar16 = plVar7;
  pppuStack_810 = &pppuStack_770;
  _objc_retain(plVar8);
  _objc_retain(plVar9);
  _objc_retain(plVar12);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)plVar4[1];
    _objc_retain(plVar8);
    if (plVar8 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar8;
      _objc_retainAutorelease(plVar8);
      func_0x00010bdc3520();
    }
    _objc_release(plVar8);
    func_0x00010002b838(alStack_8a0,pcVar1);
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar9);
      pcVar1 = (char *)plVar9;
      func_0x00010bdc3520(plVar9);
    }
    _objc_release(plVar9);
    func_0x00010002b838(auStack_888,pcVar1);
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar12);
      pcVar1 = (char *)plVar12;
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_870,pcVar1);
    alStack_8c0[0] = 0;
    alStack_8c0[1] = 0;
    alStack_8c0[2] = 0;
    func_0x00010007e1e8(alStack_8c0,alStack_8a0,&lStack_858,3);
    plVar15 = (long *)&UNK_1108aa900;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_8a8 = (undefined1 *)alStack_8c0;
    func_0x00010007e5dc(&puStack_8a8);
    lVar13 = 0;
    plVar6 = plVar14;
    plVar3 = plVar7;
    do {
      if ((&cStack_859)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_870 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = alStack_8c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar12);
  _objc_release(plVar9);
  plVar4 = plVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_858) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  plVar7 = alStack_8a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != plVar7);
  _objc_release(plVar12);
  _objc_release(plVar9);
  _objc_release(plVar8);
  plVar2 = plVar4;
  __Unwind_Resume();
  pcStack_8c8 = FUN_1056eec40;
  lStack_908 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar15;
  plVar11 = plVar6;
  plVar10 = plVar3;
  plStack_900 = unaff_x24;
  plStack_8f8 = plVar7;
  plStack_8f0 = plVar4;
  plStack_8e8 = plVar12;
  plStack_8e0 = plVar9;
  plStack_8d8 = plVar8;
  pppuStack_8d0 = &pppuStack_810;
  _objc_retain(plVar15);
  _objc_retain(plVar6);
  plVar4 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)plVar2[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = alStack_938;
    func_0x00010002b838(alStack_938,pcVar1);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar1 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_920,pcVar1);
    alStack_958[0] = 0;
    alStack_958[1] = 0;
    alStack_958[2] = 0;
    func_0x00010007e1e8(alStack_958,alStack_938,&lStack_908,2);
    plVar14 = (long *)&UNK_1108aa950;
    plVar7 = alStack_958;
    plVar11 = alStack_958;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plStack_940 = plVar7;
    func_0x00010007e5dc(&plStack_940);
    lVar13 = 0;
    plVar4 = alStack_938;
    plVar10 = plVar3;
    do {
      if ((&cStack_909)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_920 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(plVar6);
  plVar3 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_908) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  if (cStack_921 < '\0') {
    __ZdlPv(alStack_938[0]);
  }
  _objc_release(plVar6);
  _objc_release(plVar15);
  plVar2 = plVar3;
  __Unwind_Resume();
  pcStack_968 = FUN_1056eee70;
  lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar14;
  plVar9 = plVar11;
  plVar12 = plVar10;
  plStack_9a0 = unaff_x24;
  plStack_998 = plVar7;
  plStack_990 = plVar4;
  plStack_988 = plVar3;
  plStack_980 = plVar6;
  plStack_978 = plVar15;
  pppuStack_970 = &pppuStack_8d0;
  _objc_retain(plVar14);
  _objc_retain(plVar11);
  plVar4 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)plVar2[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x24 = alStack_9d8;
    func_0x00010002b838(alStack_9d8,pcVar1);
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar11);
      pcVar1 = (char *)plVar11;
      func_0x00010bdc3520(plVar11);
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_9c0,pcVar1);
    alStack_9f8[0] = 0;
    alStack_9f8[1] = 0;
    alStack_9f8[2] = 0;
    func_0x00010007e1e8(alStack_9f8,alStack_9d8,&lStack_9a8,2);
    plVar8 = (long *)&UNK_1108aa9a0;
    plVar7 = alStack_9f8;
    plVar9 = alStack_9f8;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plStack_9e0 = plVar7;
    func_0x00010007e5dc(&plStack_9e0);
    lVar13 = 0;
    plVar4 = alStack_9d8;
    plVar12 = plVar10;
    do {
      if ((&cStack_9a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_9c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(plVar11);
  plVar15 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  if (cStack_9c1 < '\0') {
    __ZdlPv(alStack_9d8[0]);
  }
  _objc_release(plVar11);
  _objc_release(plVar14);
  plVar3 = plVar15;
  __Unwind_Resume();
  plVar10 = alStack_a80;
  pcStack_a08 = FUN_1056ef0a0;
  lStack_a48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar8;
  plVar2 = plVar9;
  plStack_a40 = unaff_x24;
  plStack_a38 = plVar7;
  plStack_a30 = plVar4;
  plStack_a28 = plVar15;
  plStack_a20 = plVar11;
  plStack_a18 = plVar14;
  pppuStack_a10 = &pppuStack_970;
  _objc_retain(plVar8);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    _objc_retain(plVar8);
    if (plVar8 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar8;
      _objc_retainAutorelease(plVar8);
      func_0x00010bdc3520();
    }
    _objc_release(plVar8);
    plVar7 = alStack_a60;
    func_0x00010002b838(alStack_a60,pcVar1);
    alStack_a80[0] = 0;
    alStack_a80[1] = 0;
    alStack_a80[2] = 0;
    func_0x00010007e1e8(alStack_a80,alStack_a60,&lStack_a48,1);
    plVar6 = (long *)&UNK_1108aa9f0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_a68 = (undefined1 *)alStack_a80;
    func_0x00010007e5dc(&puStack_a68);
    plVar2 = plVar10;
    plVar12 = plVar9;
    if (cStack_a49 < '\0') {
      __ZdlPv(alStack_a60[0]);
      plVar2 = plVar10;
      plVar12 = plVar9;
    }
  }
  plVar4 = plVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar8);
  _objc_release(plVar8);
  __Unwind_Resume();
  plVar8 = alStack_b40;
  pcStack_a88 = FUN_1056ef214;
  lStack_ad8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar6;
  plVar3 = plVar2;
  plVar14 = plVar12;
  plVar11 = plVar16;
  pppuStack_a90 = &pppuStack_a10;
  _objc_retain(plVar6);
  _objc_retain(plVar12);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)plVar4[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    func_0x00010002b838(alStack_b20,pcVar1);
    pcVar1 = "true";
    if ((int)plVar2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_b08,pcVar1);
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(plVar12);
      pcVar1 = (char *)plVar12;
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_af0,pcVar1);
    alStack_b40[0] = 0;
    alStack_b40[1] = 0;
    alStack_b40[2] = 0;
    func_0x00010007e1e8(alStack_b40,alStack_b20,&lStack_ad8,3);
    plVar15 = (long *)&UNK_1108aaa40;
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puStack_b28 = (undefined1 *)alStack_b40;
    func_0x00010007e5dc(&puStack_b28);
    lVar13 = 0;
    plVar3 = plVar8;
    plVar14 = plVar16;
    do {
      if ((&cStack_ad9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_af0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      plVar7 = alStack_b40;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar12);
  plVar4 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ad8) {
    ___stack_chk_fail();
    _objc_release(plVar12);
    do {
      plVar7 = plVar7 + -3;
    } while (plVar7 != alStack_b20);
    _objc_release(plVar12);
    _objc_release(plVar6);
    __Unwind_Resume();
    plVar2 = alStack_c00;
    pcStack_b48 = FUN_1056ef48c;
    lStack_b98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar15;
    plVar16 = plVar3;
    plVar8 = plVar14;
    plVar9 = plVar11;
    pppuStack_b50 = &pppuStack_a90;
    _objc_retain(plVar15);
    _objc_retain(plVar14);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)plVar4[1];
      _objc_retain(plVar15);
      if (plVar15 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar15;
        _objc_retainAutorelease(plVar15);
        func_0x00010bdc3520();
      }
      _objc_release(plVar15);
      func_0x00010002b838(alStack_be0,pcVar1);
      pcVar1 = "true";
      if ((int)plVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_bc8,pcVar1);
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar14);
        pcVar1 = (char *)plVar14;
        func_0x00010bdc3520();
      }
      _objc_release(plVar14);
      func_0x00010002b838(auStack_bb0,pcVar1);
      alStack_c00[0] = 0;
      alStack_c00[1] = 0;
      alStack_c00[2] = 0;
      func_0x00010007e1e8(alStack_c00,alStack_be0,&lStack_b98,3);
      plVar6 = (long *)&UNK_1108aaa90;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      puStack_be8 = (undefined1 *)alStack_c00;
      func_0x00010007e5dc(&puStack_be8);
      lVar13 = 0;
      plVar16 = plVar2;
      plVar8 = plVar11;
      do {
        if ((&cStack_b99)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_bb0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        plVar7 = alStack_c00;
      } while (lVar13 != -0x48);
    }
    _objc_release(plVar14);
    plVar4 = plVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b98) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar14);
    do {
      plVar7 = plVar7 + -3;
    } while (plVar7 != alStack_be0);
    _objc_release(plVar14);
    _objc_release(plVar15);
    __Unwind_Resume();
    plVar11 = alStack_cc0;
    pcStack_c08 = FUN_1056ef704;
    lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar15 = plVar6;
    pcVar1 = (char *)plVar16;
    plVar3 = plVar8;
    plVar14 = plVar9;
    pppuStack_c10 = &pppuStack_b50;
    _objc_retain(plVar6);
    _objc_retain(plVar8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)plVar4[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      func_0x00010002b838(alStack_ca0,pcVar1);
      pcVar1 = "true";
      if ((int)plVar16 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_c88,pcVar1);
      _objc_retain(plVar8);
      if (plVar8 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar8);
        pcVar1 = (char *)plVar8;
        func_0x00010bdc3520();
      }
      _objc_release(plVar8);
      func_0x00010002b838(auStack_c70,pcVar1);
      alStack_cc0[0] = 0;
      alStack_cc0[1] = 0;
      alStack_cc0[2] = 0;
      func_0x00010007e1e8(alStack_cc0,alStack_ca0,&lStack_c58,3);
      plVar15 = (long *)&UNK_1108aaae0;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      puStack_ca8 = (undefined1 *)alStack_cc0;
      func_0x00010007e5dc(&puStack_ca8);
      lVar13 = 0;
      pcVar1 = (char *)plVar11;
      plVar3 = plVar9;
      do {
        if ((&cStack_c59)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_c70 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        plVar7 = alStack_cc0;
      } while (lVar13 != -0x48);
    }
    _objc_release(plVar8);
    plVar4 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar8);
    do {
      plVar7 = plVar7 + -3;
    } while (plVar7 != alStack_ca0);
    _objc_release(plVar8);
    _objc_release(plVar6);
    __Unwind_Resume();
    plVar11 = alStack_d80;
    pcStack_cc8 = FUN_1056ef97c;
    lStack_d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar15;
    plVar16 = (long *)pcVar1;
    pppuStack_cd0 = &pppuStack_c10;
    _objc_retain(plVar15);
    _objc_retain(plVar3);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)plVar4[1];
      _objc_retain(plVar15);
      if (plVar15 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar15;
        _objc_retainAutorelease(plVar15);
        func_0x00010bdc3520();
      }
      _objc_release(plVar15);
      func_0x00010002b838(alStack_d60,pcVar5);
      pcVar5 = "true";
      if ((int)pcVar1 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_d48,pcVar5);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar1 = (char *)plVar3;
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_d30,pcVar1);
      alStack_d80[0] = 0;
      alStack_d80[1] = 0;
      alStack_d80[2] = 0;
      func_0x00010007e1e8(alStack_d80,alStack_d60,&lStack_d18,3);
      plVar6 = (long *)&UNK_1108aab30;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aab30,alStack_d80,plVar14);
      puStack_d68 = (undefined1 *)alStack_d80;
      func_0x00010007e5dc(&puStack_d68);
      lVar13 = 0;
      plVar16 = plVar11;
      do {
        if ((&cStack_d19)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_d30 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        plVar7 = alStack_d80;
      } while (lVar13 != -0x48);
    }
    _objc_release(plVar3);
    plVar4 = plVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d18) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar3);
    do {
      plVar7 = plVar7 + -3;
    } while (plVar7 != alStack_d60);
    _objc_release(plVar3);
    _objc_release(plVar15);
    plVar11 = plVar4;
    __Unwind_Resume();
    plVar9 = alStack_e00;
    pcStack_d88 = FUN_1056efbf4;
    lStack_dc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar6;
    plVar8 = plVar16;
    plStack_dc0 = (long *)pcVar1;
    plStack_db8 = plVar7;
    plStack_db0 = alStack_d60;
    plStack_da8 = plVar4;
    plStack_da0 = plVar3;
    plStack_d98 = plVar15;
    pppuStack_d90 = &pppuStack_cd0;
    _objc_retain(plVar6);
    plVar4 = (long *)0x0;
    plVar15 = alStack_d60;
    if (plVar11 != (long *)0x0) {
      plVar4 = (long *)plVar11[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      plVar7 = alStack_de0;
      func_0x00010002b838(alStack_de0,pcVar5);
      alStack_e00[0] = 0;
      alStack_e00[1] = 0;
      alStack_e00[2] = 0;
      func_0x00010007e1e8(alStack_e00,alStack_de0,&lStack_dc8,1);
      plVar14 = (long *)&UNK_1108aab80;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aab80,alStack_e00,plVar16);
      puStack_de8 = (undefined1 *)alStack_e00;
      func_0x00010007e5dc(&puStack_de8);
      plVar8 = plVar9;
      plVar15 = alStack_e00;
      if (cStack_dc9 < '\0') {
        __ZdlPv(alStack_de0[0]);
        plVar8 = plVar9;
        plVar15 = alStack_e00;
      }
    }
    plVar3 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_dc8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar11 = plVar3;
    __Unwind_Resume();
    plVar2 = alStack_e80;
    pcStack_e08 = FUN_1056efd68;
    lStack_e48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16 = plVar14;
    plVar9 = plVar8;
    plStack_e40 = (long *)pcVar1;
    plStack_e38 = plVar7;
    plStack_e30 = plVar15;
    plStack_e28 = plVar4;
    plStack_e20 = plVar3;
    plStack_e18 = plVar6;
    pppuStack_e10 = &pppuStack_d90;
    _objc_retain(plVar14);
    plVar4 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar4 = (long *)plVar11[1];
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar14;
        _objc_retainAutorelease(plVar14);
        func_0x00010bdc3520();
      }
      _objc_release(plVar14);
      plVar7 = alStack_e60;
      func_0x00010002b838(alStack_e60,pcVar5);
      alStack_e80[0] = 0;
      alStack_e80[1] = 0;
      alStack_e80[2] = 0;
      func_0x00010007e1e8(alStack_e80,alStack_e60,&lStack_e48,1);
      plVar16 = (long *)&UNK_1108aabd0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aabd0,alStack_e80,plVar8);
      puStack_e68 = (undefined1 *)alStack_e80;
      func_0x00010007e5dc(&puStack_e68);
      plVar9 = plVar2;
      plVar15 = alStack_e80;
      if (cStack_e49 < '\0') {
        __ZdlPv(alStack_e60[0]);
        plVar9 = plVar2;
        plVar15 = alStack_e80;
      }
    }
    plVar6 = plVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e48) {
      ___stack_chk_fail();
      _objc_release(plVar14);
      _objc_release(plVar14);
      plVar11 = plVar6;
      __Unwind_Resume();
      pcStack_e88 = FUN_1056efedc;
      lStack_ec8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3 = plVar16;
      plStack_ec0 = (long *)pcVar1;
      plStack_eb8 = plVar7;
      plStack_eb0 = plVar15;
      plStack_ea8 = plVar4;
      plStack_ea0 = plVar6;
      plStack_e98 = plVar14;
      pppuStack_e90 = &pppuStack_e10;
      _objc_retain(plVar16);
      if (plVar11 != (long *)0x0) {
        plVar4 = (long *)plVar11[1];
        _objc_retain(plVar16);
        if (plVar16 == (long *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = (char *)plVar16;
          _objc_retainAutorelease(plVar16);
          func_0x00010bdc3520();
        }
        _objc_release(plVar16);
        func_0x00010002b838(auStack_ee0,pcVar1);
        uStack_f00 = 0;
        uStack_ef8 = 0;
        uStack_ef0 = 0;
        func_0x00010007e1e8(&uStack_f00,auStack_ee0,&lStack_ec8,1);
        plVar3 = (long *)&UNK_1108aac20;
        (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aac20,&uStack_f00,plVar9);
        puStack_ee8 = (undefined1 *)&uStack_f00;
        func_0x00010007e5dc(&puStack_ee8);
        if (cStack_ec9 < '\0') {
          __ZdlPv(auStack_ee0[0]);
        }
      }
      plVar4 = plVar16;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ec8) {
        ___stack_chk_fail();
        _objc_release(plVar16);
        _objc_release(plVar16);
        plVar15 = plVar4;
        __Unwind_Resume();
        puStack_f28 = (undefined1 *)&uStack_f40;
        pcStack_f08 = FUN_1056f0050;
        if (plVar15 != (long *)0x0) {
          uStack_f40 = 0;
          uStack_f38 = 0;
          uStack_f30 = 0;
          plStack_f20 = plVar4;
          plStack_f18 = plVar16;
          pppuStack_f10 = &pppuStack_e90;
          (**(code **)(*(long *)plVar15[1] + 0x18))
                    ((long *)plVar15[1],&UNK_1108aac70,&uStack_f40,plVar3);
          func_0x00010007e5dc(&puStack_f28);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ed000; end: 1056ed297;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056ed260) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ed000(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x24;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined1 *puStack_e68;
  long *plStack_e60;
  long *plStack_e58;
  undefined8 ***pppuStack_e50;
  code *pcStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined1 *puStack_e28;
  undefined8 auStack_e20 [2];
  char cStack_e09;
  long lStack_e08;
  long *plStack_e00;
  long *plStack_df8;
  long *plStack_df0;
  long *plStack_de8;
  long *plStack_de0;
  long *plStack_dd8;
  undefined8 ***pppuStack_dd0;
  code *pcStack_dc8;
  long alStack_dc0 [3];
  undefined1 *puStack_da8;
  long alStack_da0 [2];
  char cStack_d89;
  long lStack_d88;
  long *plStack_d80;
  long *plStack_d78;
  long *plStack_d70;
  long *plStack_d68;
  long *plStack_d60;
  long *plStack_d58;
  undefined8 ***pppuStack_d50;
  code *pcStack_d48;
  long alStack_d40 [3];
  undefined1 *puStack_d28;
  long alStack_d20 [2];
  char cStack_d09;
  long lStack_d08;
  long *plStack_d00;
  long *plStack_cf8;
  long *plStack_cf0;
  long *plStack_ce8;
  long *plStack_ce0;
  long *plStack_cd8;
  undefined8 ***pppuStack_cd0;
  code *pcStack_cc8;
  long alStack_cc0 [3];
  undefined1 *puStack_ca8;
  long alStack_ca0 [3];
  undefined1 auStack_c88 [24];
  undefined8 auStack_c70 [2];
  char cStack_c59;
  long lStack_c58;
  undefined8 ***pppuStack_c10;
  code *pcStack_c08;
  long alStack_c00 [3];
  undefined1 *puStack_be8;
  long alStack_be0 [3];
  undefined1 auStack_bc8 [24];
  undefined8 auStack_bb0 [2];
  char cStack_b99;
  long lStack_b98;
  undefined8 ***pppuStack_b50;
  code *pcStack_b48;
  long alStack_b40 [3];
  undefined1 *puStack_b28;
  long alStack_b20 [3];
  undefined1 auStack_b08 [24];
  undefined8 auStack_af0 [2];
  char cStack_ad9;
  long lStack_ad8;
  undefined8 ***pppuStack_a90;
  code *pcStack_a88;
  long alStack_a80 [3];
  undefined1 *puStack_a68;
  long alStack_a60 [3];
  undefined1 auStack_a48 [24];
  undefined8 auStack_a30 [2];
  char cStack_a19;
  long lStack_a18;
  undefined8 ***pppuStack_9d0;
  code *pcStack_9c8;
  long alStack_9c0 [3];
  undefined1 *puStack_9a8;
  long alStack_9a0 [2];
  char cStack_989;
  long lStack_988;
  long *plStack_980;
  long *plStack_978;
  long *plStack_970;
  long *plStack_968;
  long *plStack_960;
  long *plStack_958;
  undefined8 ***pppuStack_950;
  code *pcStack_948;
  long alStack_938 [3];
  long *plStack_920;
  long alStack_918 [2];
  char cStack_901;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  long *plStack_8e0;
  long *plStack_8d8;
  long *plStack_8d0;
  long *plStack_8c8;
  long *plStack_8c0;
  long *plStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  long alStack_898 [3];
  long *plStack_880;
  long alStack_878 [2];
  char cStack_861;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  long *plStack_840;
  long *plStack_838;
  long *plStack_830;
  long *plStack_828;
  long *plStack_820;
  long *plStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  long alStack_800 [3];
  undefined1 *puStack_7e8;
  long alStack_7e0 [3];
  undefined1 auStack_7c8 [24];
  undefined8 auStack_7b0 [2];
  char cStack_799;
  long lStack_798;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  long alStack_738 [3];
  char *pcStack_720;
  long alStack_718 [2];
  char cStack_701;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  long alStack_6a0 [3];
  undefined1 *puStack_688;
  long alStack_680 [3];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  long alStack_5e0 [3];
  undefined1 *puStack_5c8;
  long alStack_5c0 [3];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  long alStack_520 [3];
  undefined1 *puStack_508;
  long alStack_500 [3];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  long alStack_460 [3];
  undefined1 *puStack_448;
  long alStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long alStack_3a0 [3];
  undefined1 *puStack_388;
  long alStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  long alStack_2e0 [3];
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long alStack_260 [3];
  undefined1 *puStack_248;
  long alStack_240 [2];
  char cStack_229;
  long lStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  long alStack_1e0 [3];
  undefined1 *puStack_1c8;
  long alStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long alStack_158 [3];
  long *plStack_140;
  long alStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long alStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  plVar4 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_2;
  plVar16 = param_3;
  plVar11 = param_4;
  plVar7 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    plVar14 = (long *)&UNK_1108aa590;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar16 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(alStack_a0,pcVar2);
      _objc_retain(param_3);
      if (param_3 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar2 = (char *)param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_88,pcVar2);
      unaff_x24 = alStack_70;
      pcVar2 = "true";
      if ((int)param_4 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar2);
      alStack_c0[0] = 0;
      alStack_c0[1] = 0;
      alStack_c0[2] = 0;
      func_0x00010007e1e8(alStack_c0,alStack_a0,&lStack_58,3);
      plVar11 = (long *)((long)param_5 * 10);
      plVar14 = (long *)&UNK_1108aa590;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_a8 = (undefined1 *)alStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar13 = 0;
      plVar16 = plVar4;
      do {
        if ((&cStack_59)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)alStack_70 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        param_4 = alStack_c0;
      } while (lVar13 != -0x48);
    }
  }
  _objc_release(param_3);
  plVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  plStack_f0 = alStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != plStack_f0);
  _objc_release(param_3);
  _objc_release(param_2);
  plVar3 = plVar4;
  __Unwind_Resume();
  pcStack_c8 = FUN_1056ed298;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar14;
  plVar15 = plVar16;
  plVar12 = plVar11;
  plStack_100 = unaff_x24;
  plStack_f8 = param_4;
  plStack_e8 = plVar4;
  plStack_e0 = param_3;
  plStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  _objc_retain(plVar16);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    plVar1 = (long *)&UNK_1108aa5e0;
    (**(code **)(*plVar4 + 0x28))();
    if ((int)plVar4 != 0) {
      plVar4 = (long *)plVar3[1];
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar14;
        _objc_retainAutorelease(plVar14);
        func_0x00010bdc3520();
      }
      _objc_release(plVar14);
      unaff_x24 = alStack_138;
      func_0x00010002b838(alStack_138,pcVar2);
      _objc_retain(plVar16);
      if (plVar16 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar16);
        pcVar2 = (char *)plVar16;
        func_0x00010bdc3520(plVar16);
      }
      _objc_release(plVar16);
      func_0x00010002b838(auStack_120,pcVar2);
      alStack_158[0] = 0;
      alStack_158[1] = 0;
      alStack_158[2] = 0;
      func_0x00010007e1e8(alStack_158,alStack_138,&lStack_108,2);
      plVar12 = (long *)((long)plVar11 * 10);
      plVar1 = (long *)&UNK_1108aa5e0;
      param_4 = alStack_158;
      plVar15 = alStack_158;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plStack_140 = param_4;
      func_0x00010007e5dc(&plStack_140);
      lVar13 = 0;
      plVar3 = alStack_138;
      do {
        if ((&cStack_109)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(plVar16);
  plVar11 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar16);
  if (cStack_121 < '\0') {
    __ZdlPv(alStack_138[0]);
  }
  _objc_release(plVar16);
  _objc_release(plVar14);
  plVar5 = plVar11;
  __Unwind_Resume();
  plVar9 = alStack_1e0;
  pcStack_168 = FUN_1056ed4ec;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar1;
  plVar6 = plVar15;
  plStack_1a0 = unaff_x24;
  plStack_198 = param_4;
  plStack_190 = plVar3;
  plStack_188 = plVar11;
  plStack_180 = plVar16;
  plStack_178 = plVar14;
  ppuStack_170 = &puStack_d0;
  _objc_retain(plVar1);
  plVar14 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar14 = (long *)plVar5[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    param_4 = alStack_1c0;
    func_0x00010002b838(alStack_1c0,pcVar2);
    alStack_1e0[0] = 0;
    alStack_1e0[1] = 0;
    alStack_1e0[2] = 0;
    func_0x00010007e1e8(alStack_1e0,alStack_1c0,&lStack_1a8,1);
    plVar4 = (long *)&UNK_1108aa630;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1c8 = (undefined1 *)alStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    plVar6 = plVar9;
    plVar12 = plVar15;
    plVar3 = alStack_1e0;
    if (cStack_1a9 < '\0') {
      __ZdlPv(alStack_1c0[0]);
      plVar6 = plVar9;
      plVar12 = plVar15;
      plVar3 = alStack_1e0;
    }
  }
  plVar16 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  plVar15 = plVar16;
  __Unwind_Resume();
  plVar9 = alStack_260;
  pcStack_1e8 = FUN_1056ed660;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar4;
  plVar5 = plVar6;
  plStack_220 = unaff_x24;
  plStack_218 = param_4;
  plStack_210 = plVar3;
  plStack_208 = plVar14;
  plStack_200 = plVar16;
  plStack_1f8 = plVar1;
  pppuStack_1f0 = &ppuStack_170;
  _objc_retain(plVar4);
  if (plVar15 != (long *)0x0) {
    plVar14 = (long *)plVar15[1];
    plVar11 = (long *)&UNK_1108aa680;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar15 = (long *)plVar15[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      param_4 = alStack_240;
      func_0x00010002b838(alStack_240,pcVar2);
      alStack_260[0] = 0;
      alStack_260[1] = 0;
      alStack_260[2] = 0;
      func_0x00010007e1e8(alStack_260,alStack_240,&lStack_228,1);
      plVar12 = (long *)((long)plVar6 * 10);
      plVar11 = (long *)&UNK_1108aa680;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_248 = (undefined1 *)alStack_260;
      func_0x00010007e5dc(&puStack_248);
      plVar5 = plVar9;
      plVar3 = alStack_260;
      if (cStack_229 < '\0') {
        __ZdlPv(alStack_240[0]);
        plVar5 = plVar9;
        plVar3 = alStack_260;
      }
    }
  }
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar1 = plVar14;
  __Unwind_Resume();
  plVar9 = alStack_2e0;
  pcStack_268 = FUN_1056ed7f8;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = plVar11;
  plVar6 = plVar5;
  plStack_2a0 = unaff_x24;
  plStack_298 = param_4;
  plStack_290 = plVar3;
  plStack_288 = plVar15;
  plStack_280 = plVar14;
  plStack_278 = plVar4;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(plVar11);
  if (plVar1 != (long *)0x0) {
    plVar14 = (long *)plVar1[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_2c0,pcVar2);
    alStack_2e0[0] = 0;
    alStack_2e0[1] = 0;
    alStack_2e0[2] = 0;
    func_0x00010007e1e8(alStack_2e0,auStack_2c0,&lStack_2a8,1);
    plVar16 = (long *)&UNK_1108aa6d0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_2c8 = (undefined1 *)alStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    plVar6 = plVar9;
    plVar12 = plVar5;
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
      plVar6 = plVar9;
      plVar12 = plVar5;
    }
  }
  plVar14 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  plVar3 = alStack_3a0;
  pcStack_2e8 = FUN_1056ed96c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar16;
  plVar4 = plVar6;
  plVar1 = plVar12;
  plVar15 = plVar7;
  pppuStack_2f0 = &pppuStack_270;
  _objc_retain(plVar16);
  _objc_retain(plVar6);
  _objc_retain(plVar12);
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)plVar14[1];
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar16;
      _objc_retainAutorelease(plVar16);
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    func_0x00010002b838(alStack_380,pcVar2);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar2 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_368,pcVar2);
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar12);
      pcVar2 = (char *)plVar12;
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_350,pcVar2);
    alStack_3a0[0] = 0;
    alStack_3a0[1] = 0;
    alStack_3a0[2] = 0;
    func_0x00010007e1e8(alStack_3a0,alStack_380,&lStack_338,3);
    plVar11 = (long *)&UNK_1108aa720;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_388 = (undefined1 *)alStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar13 = 0;
    plVar4 = plVar3;
    plVar1 = plVar7;
    do {
      if ((&cStack_339)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = alStack_3a0;
    } while (lVar13 != -0x48);
  }
  _objc_release(plVar12);
  _objc_release(plVar6);
  plVar14 = plVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    _objc_release(plVar12);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != alStack_380);
    _objc_release(plVar12);
    _objc_release(plVar6);
    _objc_release(plVar16);
    __Unwind_Resume();
    plVar5 = alStack_460;
    pcStack_3a8 = FUN_1056edc2c;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16 = plVar11;
    plVar7 = plVar4;
    plVar3 = plVar1;
    plVar12 = plVar15;
    pppuStack_3b0 = &pppuStack_2f0;
    _objc_retain(plVar11);
    _objc_retain(plVar4);
    _objc_retain(plVar1);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar11);
      if (plVar11 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar11;
        _objc_retainAutorelease(plVar11);
        func_0x00010bdc3520();
      }
      _objc_release(plVar11);
      func_0x00010002b838(alStack_440,pcVar2);
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar4);
        pcVar2 = (char *)plVar4;
        func_0x00010bdc3520(plVar4);
      }
      _objc_release(plVar4);
      func_0x00010002b838(auStack_428,pcVar2);
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar1);
        pcVar2 = (char *)plVar1;
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      func_0x00010002b838(auStack_410,pcVar2);
      alStack_460[0] = 0;
      alStack_460[1] = 0;
      alStack_460[2] = 0;
      func_0x00010007e1e8(alStack_460,alStack_440,&lStack_3f8,3);
      plVar16 = (long *)&UNK_1108aa770;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_448 = (undefined1 *)alStack_460;
      func_0x00010007e5dc(&puStack_448);
      lVar13 = 0;
      plVar7 = plVar5;
      plVar3 = plVar15;
      do {
        if ((&cStack_3f9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = alStack_460;
      } while (lVar13 != -0x48);
    }
    _objc_release(plVar1);
    _objc_release(plVar4);
    plVar14 = plVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar1);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != alStack_440);
    _objc_release(plVar1);
    _objc_release(plVar4);
    _objc_release(plVar11);
    __Unwind_Resume();
    plVar5 = alStack_520;
    pcStack_468 = FUN_1056edeec;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar16;
    plVar4 = plVar7;
    plVar1 = plVar3;
    plVar15 = plVar12;
    pppuStack_470 = &pppuStack_3b0;
    _objc_retain(plVar16);
    _objc_retain(plVar7);
    _objc_retain(plVar3);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar16);
      if (plVar16 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar16;
        _objc_retainAutorelease(plVar16);
        func_0x00010bdc3520();
      }
      _objc_release(plVar16);
      func_0x00010002b838(alStack_500,pcVar2);
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar7);
        pcVar2 = (char *)plVar7;
        func_0x00010bdc3520(plVar7);
      }
      _objc_release(plVar7);
      func_0x00010002b838(auStack_4e8,pcVar2);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar2 = (char *)plVar3;
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_4d0,pcVar2);
      alStack_520[0] = 0;
      alStack_520[1] = 0;
      alStack_520[2] = 0;
      func_0x00010007e1e8(alStack_520,alStack_500,&lStack_4b8,3);
      plVar11 = (long *)&UNK_1108aa7c0;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_508 = (undefined1 *)alStack_520;
      func_0x00010007e5dc(&puStack_508);
      lVar13 = 0;
      plVar4 = plVar5;
      plVar1 = plVar12;
      do {
        if ((&cStack_4b9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = alStack_520;
      } while (lVar13 != -0x48);
    }
    _objc_release(plVar3);
    _objc_release(plVar7);
    plVar14 = plVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar3);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != alStack_500);
    _objc_release(plVar3);
    _objc_release(plVar7);
    _objc_release(plVar16);
    __Unwind_Resume();
    plVar5 = alStack_5e0;
    pcStack_528 = FUN_1056ee1ac;
    lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16 = plVar11;
    plVar7 = plVar4;
    plVar3 = plVar1;
    plVar12 = plVar15;
    pppuStack_530 = &pppuStack_470;
    _objc_retain(plVar11);
    _objc_retain(plVar4);
    _objc_retain(plVar1);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar11);
      if (plVar11 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar11;
        _objc_retainAutorelease(plVar11);
        func_0x00010bdc3520();
      }
      _objc_release(plVar11);
      func_0x00010002b838(alStack_5c0,pcVar2);
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar4);
        pcVar2 = (char *)plVar4;
        func_0x00010bdc3520(plVar4);
      }
      _objc_release(plVar4);
      func_0x00010002b838(auStack_5a8,pcVar2);
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar1);
        pcVar2 = (char *)plVar1;
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      func_0x00010002b838(auStack_590,pcVar2);
      alStack_5e0[0] = 0;
      alStack_5e0[1] = 0;
      alStack_5e0[2] = 0;
      func_0x00010007e1e8(alStack_5e0,alStack_5c0,&lStack_578,3);
      plVar16 = (long *)&UNK_1108aa810;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_5c8 = (undefined1 *)alStack_5e0;
      func_0x00010007e5dc(&puStack_5c8);
      lVar13 = 0;
      plVar7 = plVar5;
      plVar3 = plVar15;
      do {
        if ((&cStack_579)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = alStack_5e0;
      } while (lVar13 != -0x48);
    }
    _objc_release(plVar1);
    _objc_release(plVar4);
    plVar14 = plVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
      ___stack_chk_fail();
      _objc_release(plVar1);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != alStack_5c0);
      _objc_release(plVar1);
      _objc_release(plVar4);
      _objc_release(plVar11);
      __Unwind_Resume();
      plVar5 = alStack_6a0;
      pcStack_5e8 = FUN_1056ee46c;
      lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar11 = plVar16;
      plVar4 = plVar7;
      plVar1 = plVar3;
      plVar15 = plVar12;
      pppuStack_5f0 = &pppuStack_530;
      _objc_retain(plVar16);
      _objc_retain(plVar7);
      _objc_retain(plVar3);
      if (plVar14 != (long *)0x0) {
        plVar6 = (long *)plVar14[1];
        plVar11 = (long *)&UNK_1108aa860;
        (**(code **)(*plVar6 + 0x28))();
        if ((int)plVar6 != 0) {
          plVar14 = (long *)plVar14[1];
          _objc_retain(plVar16);
          if (plVar16 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar16;
            _objc_retainAutorelease(plVar16);
            func_0x00010bdc3520();
          }
          _objc_release(plVar16);
          func_0x00010002b838(alStack_680,pcVar2);
          _objc_retain(plVar7);
          if (plVar7 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(plVar7);
            pcVar2 = (char *)plVar7;
            func_0x00010bdc3520(plVar7);
          }
          _objc_release(plVar7);
          func_0x00010002b838(auStack_668,pcVar2);
          _objc_retain(plVar3);
          if (plVar3 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(plVar3);
            pcVar2 = (char *)plVar3;
            func_0x00010bdc3520();
          }
          _objc_release(plVar3);
          func_0x00010002b838(auStack_650,pcVar2);
          alStack_6a0[0] = 0;
          alStack_6a0[1] = 0;
          alStack_6a0[2] = 0;
          func_0x00010007e1e8(alStack_6a0,alStack_680,&lStack_638,3);
          plVar1 = (long *)((long)plVar12 * 10);
          plVar11 = (long *)&UNK_1108aa860;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          puStack_688 = (undefined1 *)alStack_6a0;
          func_0x00010007e5dc(&puStack_688);
          lVar13 = 0;
          plVar4 = plVar5;
          do {
            if ((&cStack_639)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
            unaff_x24 = alStack_6a0;
          } while (lVar13 != -0x48);
        }
      }
      _objc_release(plVar3);
      _objc_release(plVar7);
      plVar14 = plVar16;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar3);
      plStack_6d8 = alStack_680;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != plStack_6d8);
      _objc_release(plVar3);
      _objc_release(plVar7);
      _objc_release(plVar16);
      plVar6 = plVar14;
      __Unwind_Resume();
      pcStack_6a8 = FUN_1056ee750;
      lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar12 = plVar11;
      plVar5 = plVar4;
      plVar9 = plVar1;
      plStack_6e0 = unaff_x24;
      plStack_6d0 = plVar14;
      plStack_6c8 = plVar3;
      plStack_6c0 = plVar7;
      plStack_6b8 = plVar16;
      pppuStack_6b0 = &pppuStack_5f0;
      _objc_retain(plVar11);
      _objc_retain(plVar4);
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        _objc_retain(plVar11);
        if (plVar11 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar11;
          _objc_retainAutorelease(plVar11);
          func_0x00010bdc3520();
        }
        _objc_release(plVar11);
        unaff_x24 = alStack_718;
        func_0x00010002b838(alStack_718,pcVar2);
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar4);
          pcVar2 = (char *)plVar4;
          func_0x00010bdc3520(plVar4);
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_700,pcVar2);
        alStack_738[0] = 0;
        alStack_738[1] = 0;
        alStack_738[2] = 0;
        func_0x00010007e1e8(alStack_738,alStack_718,&lStack_6e8,2);
        plVar12 = (long *)&UNK_1108aa8b0;
        plVar5 = alStack_738;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        pcStack_720 = (char *)alStack_738;
        func_0x00010007e5dc(&pcStack_720);
        lVar13 = 0;
        plVar9 = plVar1;
        do {
          if ((&cStack_6e9)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_700 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(plVar4);
      plVar14 = plVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar4);
      if (cStack_701 < '\0') {
        __ZdlPv(alStack_718[0]);
      }
      _objc_release(plVar4);
      _objc_release(plVar11);
      __Unwind_Resume();
      plVar1 = alStack_800;
      pcStack_748 = FUN_1056ee980;
      lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar16 = plVar12;
      plVar11 = plVar5;
      plVar7 = plVar9;
      plVar4 = plVar15;
      pppuStack_750 = &pppuStack_6b0;
      _objc_retain(plVar12);
      _objc_retain(plVar5);
      _objc_retain(plVar9);
      if (plVar14 != (long *)0x0) {
        plVar14 = (long *)plVar14[1];
        _objc_retain(plVar12);
        if (plVar12 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar12;
          _objc_retainAutorelease(plVar12);
          func_0x00010bdc3520();
        }
        _objc_release(plVar12);
        func_0x00010002b838(alStack_7e0,pcVar2);
        _objc_retain(plVar5);
        if (plVar5 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar5);
          pcVar2 = (char *)plVar5;
          func_0x00010bdc3520(plVar5);
        }
        _objc_release(plVar5);
        func_0x00010002b838(auStack_7c8,pcVar2);
        _objc_retain(plVar9);
        if (plVar9 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar9);
          pcVar2 = (char *)plVar9;
          func_0x00010bdc3520();
        }
        _objc_release(plVar9);
        func_0x00010002b838(auStack_7b0,pcVar2);
        alStack_800[0] = 0;
        alStack_800[1] = 0;
        alStack_800[2] = 0;
        func_0x00010007e1e8(alStack_800,alStack_7e0,&lStack_798,3);
        plVar16 = (long *)&UNK_1108aa900;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        puStack_7e8 = (undefined1 *)alStack_800;
        func_0x00010007e5dc(&puStack_7e8);
        lVar13 = 0;
        plVar11 = plVar1;
        plVar7 = plVar15;
        do {
          if ((&cStack_799)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_7b0 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
          unaff_x24 = alStack_800;
        } while (lVar13 != -0x48);
      }
      _objc_release(plVar9);
      _objc_release(plVar5);
      plVar14 = plVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar9);
      plVar1 = alStack_7e0;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != plVar1);
      _objc_release(plVar9);
      _objc_release(plVar5);
      _objc_release(plVar12);
      plVar6 = plVar14;
      __Unwind_Resume();
      pcStack_808 = FUN_1056eec40;
      lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar15 = plVar16;
      plVar3 = plVar11;
      plVar10 = plVar7;
      plStack_840 = unaff_x24;
      plStack_838 = plVar1;
      plStack_830 = plVar14;
      plStack_828 = plVar9;
      plStack_820 = plVar5;
      plStack_818 = plVar12;
      pppuStack_810 = &pppuStack_750;
      _objc_retain(plVar16);
      _objc_retain(plVar11);
      plVar14 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        _objc_retain(plVar16);
        if (plVar16 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar16;
          _objc_retainAutorelease(plVar16);
          func_0x00010bdc3520();
        }
        _objc_release(plVar16);
        unaff_x24 = alStack_878;
        func_0x00010002b838(alStack_878,pcVar2);
        _objc_retain(plVar11);
        if (plVar11 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar11);
          pcVar2 = (char *)plVar11;
          func_0x00010bdc3520(plVar11);
        }
        _objc_release(plVar11);
        func_0x00010002b838(auStack_860,pcVar2);
        alStack_898[0] = 0;
        alStack_898[1] = 0;
        alStack_898[2] = 0;
        func_0x00010007e1e8(alStack_898,alStack_878,&lStack_848,2);
        plVar15 = (long *)&UNK_1108aa950;
        plVar1 = alStack_898;
        plVar3 = alStack_898;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        plStack_880 = plVar1;
        func_0x00010007e5dc(&plStack_880);
        lVar13 = 0;
        plVar14 = alStack_878;
        plVar10 = plVar7;
        do {
          if ((&cStack_849)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(plVar11);
      plVar7 = plVar16;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar11);
      if (cStack_861 < '\0') {
        __ZdlPv(alStack_878[0]);
      }
      _objc_release(plVar11);
      _objc_release(plVar16);
      plVar6 = plVar7;
      __Unwind_Resume();
      pcStack_8a8 = FUN_1056eee70;
      lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar12 = plVar15;
      plVar5 = plVar3;
      plVar9 = plVar10;
      plStack_8e0 = unaff_x24;
      plStack_8d8 = plVar1;
      plStack_8d0 = plVar14;
      plStack_8c8 = plVar7;
      plStack_8c0 = plVar11;
      plStack_8b8 = plVar16;
      pppuStack_8b0 = &pppuStack_810;
      _objc_retain(plVar15);
      _objc_retain(plVar3);
      plVar14 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        _objc_retain(plVar15);
        if (plVar15 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar15;
          _objc_retainAutorelease(plVar15);
          func_0x00010bdc3520();
        }
        _objc_release(plVar15);
        unaff_x24 = alStack_918;
        func_0x00010002b838(alStack_918,pcVar2);
        _objc_retain(plVar3);
        if (plVar3 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar3);
          pcVar2 = (char *)plVar3;
          func_0x00010bdc3520(plVar3);
        }
        _objc_release(plVar3);
        func_0x00010002b838(auStack_900,pcVar2);
        alStack_938[0] = 0;
        alStack_938[1] = 0;
        alStack_938[2] = 0;
        func_0x00010007e1e8(alStack_938,alStack_918,&lStack_8e8,2);
        plVar12 = (long *)&UNK_1108aa9a0;
        plVar1 = alStack_938;
        plVar5 = alStack_938;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        plStack_920 = plVar1;
        func_0x00010007e5dc(&plStack_920);
        lVar13 = 0;
        plVar14 = alStack_918;
        plVar9 = plVar10;
        do {
          if ((&cStack_8e9)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_900 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(plVar3);
      plVar16 = plVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8e8) {
        ___stack_chk_fail();
        _objc_release(plVar3);
        if (cStack_901 < '\0') {
          __ZdlPv(alStack_918[0]);
        }
        _objc_release(plVar3);
        _objc_release(plVar15);
        plVar7 = plVar16;
        __Unwind_Resume();
        plVar10 = alStack_9c0;
        pcStack_948 = FUN_1056ef0a0;
        lStack_988 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar11 = plVar12;
        plVar6 = plVar5;
        plStack_980 = unaff_x24;
        plStack_978 = plVar1;
        plStack_970 = plVar14;
        plStack_968 = plVar16;
        plStack_960 = plVar3;
        plStack_958 = plVar15;
        pppuStack_950 = &pppuStack_8b0;
        _objc_retain(plVar12);
        if (plVar7 != (long *)0x0) {
          plVar14 = (long *)plVar7[1];
          _objc_retain(plVar12);
          if (plVar12 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar12;
            _objc_retainAutorelease(plVar12);
            func_0x00010bdc3520();
          }
          _objc_release(plVar12);
          plVar1 = alStack_9a0;
          func_0x00010002b838(alStack_9a0,pcVar2);
          alStack_9c0[0] = 0;
          alStack_9c0[1] = 0;
          alStack_9c0[2] = 0;
          func_0x00010007e1e8(alStack_9c0,alStack_9a0,&lStack_988,1);
          plVar11 = (long *)&UNK_1108aa9f0;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          puStack_9a8 = (undefined1 *)alStack_9c0;
          func_0x00010007e5dc(&puStack_9a8);
          plVar6 = plVar10;
          plVar9 = plVar5;
          if (cStack_989 < '\0') {
            __ZdlPv(alStack_9a0[0]);
            plVar6 = plVar10;
            plVar9 = plVar5;
          }
        }
        plVar14 = plVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_988) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(plVar12);
        _objc_release(plVar12);
        __Unwind_Resume();
        plVar12 = alStack_a80;
        pcStack_9c8 = FUN_1056ef214;
        lStack_a18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar16 = plVar11;
        plVar7 = plVar6;
        plVar15 = plVar9;
        plVar3 = plVar4;
        pppuStack_9d0 = &pppuStack_950;
        _objc_retain(plVar11);
        _objc_retain(plVar9);
        if (plVar14 != (long *)0x0) {
          plVar14 = (long *)plVar14[1];
          _objc_retain(plVar11);
          if (plVar11 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar11;
            _objc_retainAutorelease(plVar11);
            func_0x00010bdc3520();
          }
          _objc_release(plVar11);
          func_0x00010002b838(alStack_a60,pcVar2);
          pcVar2 = "true";
          if ((int)plVar6 == 0) {
            pcVar2 = "false";
          }
          func_0x00010002b838(auStack_a48,pcVar2);
          _objc_retain(plVar9);
          if (plVar9 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(plVar9);
            pcVar2 = (char *)plVar9;
            func_0x00010bdc3520();
          }
          _objc_release(plVar9);
          func_0x00010002b838(auStack_a30,pcVar2);
          alStack_a80[0] = 0;
          alStack_a80[1] = 0;
          alStack_a80[2] = 0;
          func_0x00010007e1e8(alStack_a80,alStack_a60,&lStack_a18,3);
          plVar16 = (long *)&UNK_1108aaa40;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          puStack_a68 = (undefined1 *)alStack_a80;
          func_0x00010007e5dc(&puStack_a68);
          lVar13 = 0;
          plVar7 = plVar12;
          plVar15 = plVar4;
          do {
            if ((&cStack_a19)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_a30 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
            plVar1 = alStack_a80;
          } while (lVar13 != -0x48);
        }
        _objc_release(plVar9);
        plVar14 = plVar11;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a18) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(plVar9);
        do {
          plVar1 = plVar1 + -3;
        } while (plVar1 != alStack_a60);
        _objc_release(plVar9);
        _objc_release(plVar11);
        __Unwind_Resume();
        plVar6 = alStack_b40;
        pcStack_a88 = FUN_1056ef48c;
        lStack_ad8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar11 = plVar16;
        plVar4 = plVar7;
        plVar12 = plVar15;
        plVar5 = plVar3;
        pppuStack_a90 = &pppuStack_9d0;
        _objc_retain(plVar16);
        _objc_retain(plVar15);
        if (plVar14 != (long *)0x0) {
          plVar14 = (long *)plVar14[1];
          _objc_retain(plVar16);
          if (plVar16 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar16;
            _objc_retainAutorelease(plVar16);
            func_0x00010bdc3520();
          }
          _objc_release(plVar16);
          func_0x00010002b838(alStack_b20,pcVar2);
          pcVar2 = "true";
          if ((int)plVar7 == 0) {
            pcVar2 = "false";
          }
          func_0x00010002b838(auStack_b08,pcVar2);
          _objc_retain(plVar15);
          if (plVar15 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(plVar15);
            pcVar2 = (char *)plVar15;
            func_0x00010bdc3520();
          }
          _objc_release(plVar15);
          func_0x00010002b838(auStack_af0,pcVar2);
          alStack_b40[0] = 0;
          alStack_b40[1] = 0;
          alStack_b40[2] = 0;
          func_0x00010007e1e8(alStack_b40,alStack_b20,&lStack_ad8,3);
          plVar11 = (long *)&UNK_1108aaa90;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          puStack_b28 = (undefined1 *)alStack_b40;
          func_0x00010007e5dc(&puStack_b28);
          lVar13 = 0;
          plVar4 = plVar6;
          plVar12 = plVar3;
          do {
            if ((&cStack_ad9)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_af0 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
            plVar1 = alStack_b40;
          } while (lVar13 != -0x48);
        }
        _objc_release(plVar15);
        plVar14 = plVar16;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ad8) {
          ___stack_chk_fail();
          _objc_release(plVar15);
          do {
            plVar1 = plVar1 + -3;
          } while (plVar1 != alStack_b20);
          _objc_release(plVar15);
          _objc_release(plVar16);
          __Unwind_Resume();
          plVar3 = alStack_c00;
          pcStack_b48 = FUN_1056ef704;
          lStack_b98 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar16 = plVar11;
          pcVar2 = (char *)plVar4;
          plVar7 = plVar12;
          plVar15 = plVar5;
          pppuStack_b50 = &pppuStack_a90;
          _objc_retain(plVar11);
          _objc_retain(plVar12);
          if (plVar14 != (long *)0x0) {
            plVar14 = (long *)plVar14[1];
            _objc_retain(plVar11);
            if (plVar11 == (long *)0x0) {
              pcVar2 = "";
            }
            else {
              pcVar2 = (char *)plVar11;
              _objc_retainAutorelease(plVar11);
              func_0x00010bdc3520();
            }
            _objc_release(plVar11);
            func_0x00010002b838(alStack_be0,pcVar2);
            pcVar2 = "true";
            if ((int)plVar4 == 0) {
              pcVar2 = "false";
            }
            func_0x00010002b838(auStack_bc8,pcVar2);
            _objc_retain(plVar12);
            if (plVar12 == (long *)0x0) {
              pcVar2 = "";
            }
            else {
              _objc_retainAutorelease(plVar12);
              pcVar2 = (char *)plVar12;
              func_0x00010bdc3520();
            }
            _objc_release(plVar12);
            func_0x00010002b838(auStack_bb0,pcVar2);
            alStack_c00[0] = 0;
            alStack_c00[1] = 0;
            alStack_c00[2] = 0;
            func_0x00010007e1e8(alStack_c00,alStack_be0,&lStack_b98,3);
            plVar16 = (long *)&UNK_1108aaae0;
            (**(code **)(*plVar14 + 0x18))(plVar14);
            puStack_be8 = (undefined1 *)alStack_c00;
            func_0x00010007e5dc(&puStack_be8);
            lVar13 = 0;
            pcVar2 = (char *)plVar3;
            plVar7 = plVar5;
            do {
              if ((&cStack_b99)[lVar13] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_bb0 + lVar13));
              }
              lVar13 = lVar13 + -0x18;
              plVar1 = alStack_c00;
            } while (lVar13 != -0x48);
          }
          _objc_release(plVar12);
          plVar14 = plVar11;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b98) {
            return;
          }
          ___stack_chk_fail();
          _objc_release(plVar12);
          do {
            plVar1 = plVar1 + -3;
          } while (plVar1 != alStack_be0);
          _objc_release(plVar12);
          _objc_release(plVar11);
          __Unwind_Resume();
          plVar3 = alStack_cc0;
          pcStack_c08 = FUN_1056ef97c;
          lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar11 = plVar16;
          plVar4 = (long *)pcVar2;
          pppuStack_c10 = &pppuStack_b50;
          _objc_retain(plVar16);
          _objc_retain(plVar7);
          if (plVar14 != (long *)0x0) {
            plVar14 = (long *)plVar14[1];
            _objc_retain(plVar16);
            if (plVar16 == (long *)0x0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)plVar16;
              _objc_retainAutorelease(plVar16);
              func_0x00010bdc3520();
            }
            _objc_release(plVar16);
            func_0x00010002b838(alStack_ca0,pcVar8);
            pcVar8 = "true";
            if ((int)pcVar2 == 0) {
              pcVar8 = "false";
            }
            func_0x00010002b838(auStack_c88,pcVar8);
            _objc_retain(plVar7);
            if (plVar7 == (long *)0x0) {
              pcVar2 = "";
            }
            else {
              _objc_retainAutorelease(plVar7);
              pcVar2 = (char *)plVar7;
              func_0x00010bdc3520();
            }
            _objc_release(plVar7);
            func_0x00010002b838(auStack_c70,pcVar2);
            alStack_cc0[0] = 0;
            alStack_cc0[1] = 0;
            alStack_cc0[2] = 0;
            func_0x00010007e1e8(alStack_cc0,alStack_ca0,&lStack_c58,3);
            plVar11 = (long *)&UNK_1108aab30;
            (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab30,alStack_cc0,plVar15);
            puStack_ca8 = (undefined1 *)alStack_cc0;
            func_0x00010007e5dc(&puStack_ca8);
            lVar13 = 0;
            plVar4 = plVar3;
            do {
              if ((&cStack_c59)[lVar13] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_c70 + lVar13));
              }
              lVar13 = lVar13 + -0x18;
              plVar1 = alStack_cc0;
            } while (lVar13 != -0x48);
          }
          _objc_release(plVar7);
          plVar14 = plVar16;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c58) {
            ___stack_chk_fail();
            _objc_release(plVar7);
            do {
              plVar1 = plVar1 + -3;
            } while (plVar1 != alStack_ca0);
            _objc_release(plVar7);
            _objc_release(plVar16);
            plVar3 = plVar14;
            __Unwind_Resume();
            plVar5 = alStack_d40;
            pcStack_cc8 = FUN_1056efbf4;
            lStack_d08 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar15 = plVar11;
            plVar12 = plVar4;
            plStack_d00 = (long *)pcVar2;
            plStack_cf8 = plVar1;
            plStack_cf0 = alStack_ca0;
            plStack_ce8 = plVar14;
            plStack_ce0 = plVar7;
            plStack_cd8 = plVar16;
            pppuStack_cd0 = &pppuStack_c10;
            _objc_retain(plVar11);
            plVar14 = (long *)0x0;
            plVar16 = alStack_ca0;
            if (plVar3 != (long *)0x0) {
              plVar14 = (long *)plVar3[1];
              _objc_retain(plVar11);
              if (plVar11 == (long *)0x0) {
                pcVar8 = "";
              }
              else {
                pcVar8 = (char *)plVar11;
                _objc_retainAutorelease(plVar11);
                func_0x00010bdc3520();
              }
              _objc_release(plVar11);
              plVar1 = alStack_d20;
              func_0x00010002b838(alStack_d20,pcVar8);
              alStack_d40[0] = 0;
              alStack_d40[1] = 0;
              alStack_d40[2] = 0;
              func_0x00010007e1e8(alStack_d40,alStack_d20,&lStack_d08,1);
              plVar15 = (long *)&UNK_1108aab80;
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab80,alStack_d40,plVar4);
              puStack_d28 = (undefined1 *)alStack_d40;
              func_0x00010007e5dc(&puStack_d28);
              plVar12 = plVar5;
              plVar16 = alStack_d40;
              if (cStack_d09 < '\0') {
                __ZdlPv(alStack_d20[0]);
                plVar12 = plVar5;
                plVar16 = alStack_d40;
              }
            }
            plVar7 = plVar11;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d08) {
              return;
            }
            ___stack_chk_fail();
            _objc_release(plVar11);
            _objc_release(plVar11);
            plVar3 = plVar7;
            __Unwind_Resume();
            plVar6 = alStack_dc0;
            pcStack_d48 = FUN_1056efd68;
            lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar4 = plVar15;
            plVar5 = plVar12;
            plStack_d80 = (long *)pcVar2;
            plStack_d78 = plVar1;
            plStack_d70 = plVar16;
            plStack_d68 = plVar14;
            plStack_d60 = plVar7;
            plStack_d58 = plVar11;
            pppuStack_d50 = &pppuStack_cd0;
            _objc_retain(plVar15);
            plVar14 = (long *)0x0;
            if (plVar3 != (long *)0x0) {
              plVar14 = (long *)plVar3[1];
              _objc_retain(plVar15);
              if (plVar15 == (long *)0x0) {
                pcVar8 = "";
              }
              else {
                pcVar8 = (char *)plVar15;
                _objc_retainAutorelease(plVar15);
                func_0x00010bdc3520();
              }
              _objc_release(plVar15);
              plVar1 = alStack_da0;
              func_0x00010002b838(alStack_da0,pcVar8);
              alStack_dc0[0] = 0;
              alStack_dc0[1] = 0;
              alStack_dc0[2] = 0;
              func_0x00010007e1e8(alStack_dc0,alStack_da0,&lStack_d88,1);
              plVar4 = (long *)&UNK_1108aabd0;
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aabd0,alStack_dc0,plVar12);
              puStack_da8 = (undefined1 *)alStack_dc0;
              func_0x00010007e5dc(&puStack_da8);
              plVar5 = plVar6;
              plVar16 = alStack_dc0;
              if (cStack_d89 < '\0') {
                __ZdlPv(alStack_da0[0]);
                plVar5 = plVar6;
                plVar16 = alStack_dc0;
              }
            }
            plVar11 = plVar15;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d88) {
              ___stack_chk_fail();
              _objc_release(plVar15);
              _objc_release(plVar15);
              plVar3 = plVar11;
              __Unwind_Resume();
              pcStack_dc8 = FUN_1056efedc;
              lStack_e08 = *(long *)PTR____stack_chk_guard_11034bdc0;
              plVar7 = plVar4;
              plStack_e00 = (long *)pcVar2;
              plStack_df8 = plVar1;
              plStack_df0 = plVar16;
              plStack_de8 = plVar14;
              plStack_de0 = plVar11;
              plStack_dd8 = plVar15;
              pppuStack_dd0 = &pppuStack_d50;
              _objc_retain(plVar4);
              if (plVar3 != (long *)0x0) {
                plVar14 = (long *)plVar3[1];
                _objc_retain(plVar4);
                if (plVar4 == (long *)0x0) {
                  pcVar2 = "";
                }
                else {
                  pcVar2 = (char *)plVar4;
                  _objc_retainAutorelease(plVar4);
                  func_0x00010bdc3520();
                }
                _objc_release(plVar4);
                func_0x00010002b838(auStack_e20,pcVar2);
                uStack_e40 = 0;
                uStack_e38 = 0;
                uStack_e30 = 0;
                func_0x00010007e1e8(&uStack_e40,auStack_e20,&lStack_e08,1);
                plVar7 = (long *)&UNK_1108aac20;
                (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aac20,&uStack_e40,plVar5);
                puStack_e28 = (undefined1 *)&uStack_e40;
                func_0x00010007e5dc(&puStack_e28);
                if (cStack_e09 < '\0') {
                  __ZdlPv(auStack_e20[0]);
                }
              }
              plVar14 = plVar4;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e08) {
                ___stack_chk_fail();
                _objc_release(plVar4);
                _objc_release(plVar4);
                plVar16 = plVar14;
                __Unwind_Resume();
                puStack_e68 = (undefined1 *)&uStack_e80;
                pcStack_e48 = FUN_1056f0050;
                if (plVar16 != (long *)0x0) {
                  uStack_e80 = 0;
                  uStack_e78 = 0;
                  uStack_e70 = 0;
                  plStack_e60 = plVar14;
                  plStack_e58 = plVar4;
                  pppuStack_e50 = &pppuStack_dd0;
                  (**(code **)(*(long *)plVar16[1] + 0x18))
                            ((long *)plVar16[1],&UNK_1108aac70,&uStack_e80,plVar7);
                  func_0x00010007e5dc(&puStack_e68);
                }
                return;
              }
              return;
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ed298; end: 1056ed4eb;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ed298(char *param_1,long *param_2,char *param_3,char *param_4,char *param_5)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined1 *puStack_da8;
  long *plStack_da0;
  long *plStack_d98;
  undefined8 ****ppppuStack_d90;
  code *pcStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 *puStack_d68;
  undefined8 auStack_d60 [2];
  char cStack_d49;
  long lStack_d48;
  char *pcStack_d40;
  char *pcStack_d38;
  char *pcStack_d30;
  long *plStack_d28;
  long *plStack_d20;
  long *plStack_d18;
  undefined8 ****ppppuStack_d10;
  code *pcStack_d08;
  char acStack_d00 [24];
  undefined1 *puStack_ce8;
  undefined8 auStack_ce0 [2];
  char cStack_cc9;
  long lStack_cc8;
  char *pcStack_cc0;
  char *pcStack_cb8;
  char *pcStack_cb0;
  long *plStack_ca8;
  long *plStack_ca0;
  long *plStack_c98;
  undefined8 ****ppppuStack_c90;
  code *pcStack_c88;
  char acStack_c80 [24];
  undefined1 *puStack_c68;
  undefined8 auStack_c60 [2];
  char cStack_c49;
  long lStack_c48;
  char *pcStack_c40;
  char *pcStack_c38;
  char *pcStack_c30;
  long *plStack_c28;
  char *pcStack_c20;
  long *plStack_c18;
  undefined8 ****ppppuStack_c10;
  code *pcStack_c08;
  char acStack_c00 [24];
  undefined1 *puStack_be8;
  char acStack_be0 [24];
  undefined1 auStack_bc8 [24];
  undefined8 auStack_bb0 [2];
  char cStack_b99;
  long lStack_b98;
  undefined8 ****ppppuStack_b50;
  code *pcStack_b48;
  char acStack_b40 [24];
  undefined1 *puStack_b28;
  char acStack_b20 [24];
  undefined1 auStack_b08 [24];
  undefined8 auStack_af0 [2];
  char cStack_ad9;
  long lStack_ad8;
  undefined8 ****ppppuStack_a90;
  code *pcStack_a88;
  char acStack_a80 [24];
  undefined1 *puStack_a68;
  char acStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined8 auStack_a30 [2];
  char cStack_a19;
  long lStack_a18;
  undefined8 ****ppppuStack_9d0;
  code *pcStack_9c8;
  char acStack_9c0 [24];
  undefined1 *puStack_9a8;
  char acStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined8 auStack_970 [2];
  char cStack_959;
  long lStack_958;
  undefined8 ****ppppuStack_910;
  code *pcStack_908;
  char acStack_900 [24];
  undefined1 *puStack_8e8;
  undefined8 auStack_8e0 [2];
  char cStack_8c9;
  long lStack_8c8;
  char *pcStack_8c0;
  char *pcStack_8b8;
  undefined8 *puStack_8b0;
  long *plStack_8a8;
  char *pcStack_8a0;
  long *plStack_898;
  undefined8 ****ppppuStack_890;
  code *pcStack_888;
  char acStack_878 [24];
  char *pcStack_860;
  undefined8 auStack_858 [2];
  char cStack_841;
  undefined8 auStack_840 [2];
  char cStack_829;
  long lStack_828;
  char *pcStack_820;
  char *pcStack_818;
  undefined8 *puStack_810;
  long *plStack_808;
  char *pcStack_800;
  long *plStack_7f8;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  char acStack_7d8 [24];
  char *pcStack_7c0;
  undefined8 auStack_7b8 [2];
  char cStack_7a1;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  char *pcStack_780;
  char *pcStack_778;
  long *plStack_770;
  char *pcStack_768;
  char *pcStack_760;
  long *plStack_758;
  undefined8 ****ppppuStack_750;
  code *pcStack_748;
  char acStack_740 [24];
  undefined1 *puStack_728;
  char acStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 ****ppppuStack_690;
  code *pcStack_688;
  char acStack_678 [24];
  char *pcStack_660;
  undefined8 auStack_658 [2];
  char cStack_641;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  char *pcStack_620;
  char *pcStack_618;
  long *plStack_610;
  char *pcStack_608;
  char *pcStack_600;
  long *plStack_5f8;
  undefined8 ****ppppuStack_5f0;
  code *pcStack_5e8;
  char acStack_5e0 [24];
  undefined1 *puStack_5c8;
  char acStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 ****ppppuStack_530;
  code *pcStack_528;
  char acStack_520 [24];
  undefined1 *puStack_508;
  char acStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_460 [24];
  undefined1 *puStack_448;
  char acStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  char acStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  char acStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ****ppppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  pcVar2 = param_3;
  pcVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (char *)0x0) {
    plVar1 = *(long **)((long)param_1 + 8);
    plVar3 = (long *)&UNK_1108aa5e0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)((long)param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = (char *)auStack_78;
      func_0x00010002b838(auStack_78,pcVar2);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
      pcVar12 = (char *)((long)param_4 * 10);
      plVar3 = (long *)&UNK_1108aa5e0;
      unaff_x23 = acStack_98;
      pcVar2 = acStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      pcStack_80 = unaff_x23;
      func_0x00010007e5dc(&pcStack_80);
      lVar14 = 0;
      param_1 = (char *)auStack_78;
      do {
        if ((&cStack_49)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(param_3);
  plVar1 = param_2;
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
  plVar4 = plVar1;
  __Unwind_Resume();
  pcVar13 = acStack_120;
  pcStack_a8 = FUN_1056ed4ec;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar3;
  pcVar6 = pcVar2;
  pcStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)param_1;
  plStack_c8 = plVar1;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  plVar1 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar1 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar12);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    plVar7 = (long *)&UNK_1108aa630;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar6 = pcVar13;
    pcVar12 = pcVar2;
    param_1 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar6 = pcVar13;
      pcVar12 = pcVar2;
      param_1 = acStack_120;
    }
  }
  plVar4 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar15 = plVar4;
  __Unwind_Resume();
  pcVar13 = acStack_1a0;
  pcStack_128 = FUN_1056ed660;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar7;
  pcVar2 = pcVar6;
  pcStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)param_1;
  plStack_148 = plVar1;
  plStack_140 = plVar4;
  plStack_138 = plVar3;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar7);
  if (plVar15 != (long *)0x0) {
    plVar3 = (long *)plVar15[1];
    plVar5 = (long *)&UNK_1108aa680;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar15 = (long *)plVar15[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      unaff_x23 = (char *)auStack_180;
      func_0x00010002b838(auStack_180,pcVar2);
      acStack_1a0[0] = '\0';
      acStack_1a0[1] = '\0';
      acStack_1a0[2] = '\0';
      acStack_1a0[3] = '\0';
      acStack_1a0[4] = '\0';
      acStack_1a0[5] = '\0';
      acStack_1a0[6] = '\0';
      acStack_1a0[7] = '\0';
      acStack_1a0[8] = '\0';
      acStack_1a0[9] = '\0';
      acStack_1a0[10] = '\0';
      acStack_1a0[0xb] = '\0';
      acStack_1a0[0xc] = '\0';
      acStack_1a0[0xd] = '\0';
      acStack_1a0[0xe] = '\0';
      acStack_1a0[0xf] = '\0';
      acStack_1a0[0x10] = '\0';
      acStack_1a0[0x11] = '\0';
      acStack_1a0[0x12] = '\0';
      acStack_1a0[0x13] = '\0';
      acStack_1a0[0x14] = '\0';
      acStack_1a0[0x15] = '\0';
      acStack_1a0[0x16] = '\0';
      acStack_1a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
      pcVar12 = (char *)((long)pcVar6 * 10);
      plVar5 = (long *)&UNK_1108aa680;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_188 = acStack_1a0;
      func_0x00010007e5dc(&puStack_188);
      pcVar2 = pcVar13;
      param_1 = acStack_1a0;
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
        pcVar2 = pcVar13;
        param_1 = acStack_1a0;
      }
    }
  }
  plVar3 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar7);
  _objc_release(plVar7);
  plVar4 = plVar3;
  __Unwind_Resume();
  pcVar13 = acStack_220;
  pcStack_1a8 = FUN_1056ed7f8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar5;
  pcVar6 = pcVar2;
  pcStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)param_1;
  plStack_1c8 = plVar15;
  plStack_1c0 = plVar3;
  plStack_1b8 = plVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    func_0x00010002b838(auStack_200,pcVar12);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar1 = (long *)&UNK_1108aa6d0;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar6 = pcVar13;
    pcVar12 = pcVar2;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar6 = pcVar13;
      pcVar12 = pcVar2;
    }
  }
  plVar3 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  __Unwind_Resume();
  pcVar8 = acStack_2e0;
  pcStack_228 = FUN_1056ed96c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar1;
  pcVar2 = pcVar6;
  pcVar13 = pcVar12;
  pcVar10 = param_5;
  ppppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar12);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)plVar3[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    func_0x00010002b838(acStack_2c0,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_2a8,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_290,pcVar2);
    acStack_2e0[0] = '\0';
    acStack_2e0[1] = '\0';
    acStack_2e0[2] = '\0';
    acStack_2e0[3] = '\0';
    acStack_2e0[4] = '\0';
    acStack_2e0[5] = '\0';
    acStack_2e0[6] = '\0';
    acStack_2e0[7] = '\0';
    acStack_2e0[8] = '\0';
    acStack_2e0[9] = '\0';
    acStack_2e0[10] = '\0';
    acStack_2e0[0xb] = '\0';
    acStack_2e0[0xc] = '\0';
    acStack_2e0[0xd] = '\0';
    acStack_2e0[0xe] = '\0';
    acStack_2e0[0xf] = '\0';
    acStack_2e0[0x10] = '\0';
    acStack_2e0[0x11] = '\0';
    acStack_2e0[0x12] = '\0';
    acStack_2e0[0x13] = '\0';
    acStack_2e0[0x14] = '\0';
    acStack_2e0[0x15] = '\0';
    acStack_2e0[0x16] = '\0';
    acStack_2e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2e0,acStack_2c0,&lStack_278,3);
    plVar7 = (long *)&UNK_1108aa720;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_2c8 = acStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar14 = 0;
    pcVar2 = pcVar8;
    pcVar13 = param_5;
    do {
      if ((&cStack_279)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_2e0;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  plVar3 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2c0);
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  _objc_release(plVar1);
  __Unwind_Resume();
  pcVar9 = acStack_3a0;
  pcStack_2e8 = FUN_1056edc2c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar7;
  pcVar12 = pcVar2;
  pcVar6 = pcVar13;
  pcVar8 = pcVar10;
  ppppuStack_2f0 = &ppppuStack_230;
  _objc_retain(plVar7);
  _objc_retain(pcVar2);
  _objc_retain(pcVar13);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)plVar3[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    func_0x00010002b838(acStack_380,pcVar12);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar12 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_368,pcVar12);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar12 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_350,pcVar12);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,acStack_380,&lStack_338,3);
    plVar1 = (long *)&UNK_1108aa770;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar14 = 0;
    pcVar12 = pcVar9;
    pcVar6 = pcVar10;
    do {
      if ((&cStack_339)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_3a0;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar2);
  plVar3 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_380);
  _objc_release(pcVar13);
  _objc_release(pcVar2);
  _objc_release(plVar7);
  __Unwind_Resume();
  pcVar9 = acStack_460;
  pcStack_3a8 = FUN_1056edeec;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar1;
  pcVar2 = pcVar12;
  pcVar13 = pcVar6;
  pcVar10 = pcVar8;
  ppppuStack_3b0 = &ppppuStack_2f0;
  _objc_retain(plVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar6);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)plVar3[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    func_0x00010002b838(acStack_440,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_428,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_410,pcVar2);
    acStack_460[0] = '\0';
    acStack_460[1] = '\0';
    acStack_460[2] = '\0';
    acStack_460[3] = '\0';
    acStack_460[4] = '\0';
    acStack_460[5] = '\0';
    acStack_460[6] = '\0';
    acStack_460[7] = '\0';
    acStack_460[8] = '\0';
    acStack_460[9] = '\0';
    acStack_460[10] = '\0';
    acStack_460[0xb] = '\0';
    acStack_460[0xc] = '\0';
    acStack_460[0xd] = '\0';
    acStack_460[0xe] = '\0';
    acStack_460[0xf] = '\0';
    acStack_460[0x10] = '\0';
    acStack_460[0x11] = '\0';
    acStack_460[0x12] = '\0';
    acStack_460[0x13] = '\0';
    acStack_460[0x14] = '\0';
    acStack_460[0x15] = '\0';
    acStack_460[0x16] = '\0';
    acStack_460[0x17] = '\0';
    func_0x00010007e1e8(acStack_460,acStack_440,&lStack_3f8,3);
    plVar7 = (long *)&UNK_1108aa7c0;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_448 = acStack_460;
    func_0x00010007e5dc(&puStack_448);
    lVar14 = 0;
    pcVar2 = pcVar9;
    pcVar13 = pcVar8;
    do {
      if ((&cStack_3f9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_460;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar12);
  plVar3 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_440);
  _objc_release(pcVar6);
  _objc_release(pcVar12);
  _objc_release(plVar1);
  __Unwind_Resume();
  pcVar9 = acStack_520;
  pcStack_468 = FUN_1056ee1ac;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar7;
  pcVar12 = pcVar2;
  pcVar6 = pcVar13;
  pcVar8 = pcVar10;
  ppppuStack_470 = &ppppuStack_3b0;
  _objc_retain(plVar7);
  _objc_retain(pcVar2);
  _objc_retain(pcVar13);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)plVar3[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    func_0x00010002b838(acStack_500,pcVar12);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar12 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_4e8,pcVar12);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar12 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_4d0,pcVar12);
    acStack_520[0] = '\0';
    acStack_520[1] = '\0';
    acStack_520[2] = '\0';
    acStack_520[3] = '\0';
    acStack_520[4] = '\0';
    acStack_520[5] = '\0';
    acStack_520[6] = '\0';
    acStack_520[7] = '\0';
    acStack_520[8] = '\0';
    acStack_520[9] = '\0';
    acStack_520[10] = '\0';
    acStack_520[0xb] = '\0';
    acStack_520[0xc] = '\0';
    acStack_520[0xd] = '\0';
    acStack_520[0xe] = '\0';
    acStack_520[0xf] = '\0';
    acStack_520[0x10] = '\0';
    acStack_520[0x11] = '\0';
    acStack_520[0x12] = '\0';
    acStack_520[0x13] = '\0';
    acStack_520[0x14] = '\0';
    acStack_520[0x15] = '\0';
    acStack_520[0x16] = '\0';
    acStack_520[0x17] = '\0';
    func_0x00010007e1e8(acStack_520,acStack_500,&lStack_4b8,3);
    plVar1 = (long *)&UNK_1108aa810;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_508 = acStack_520;
    func_0x00010007e5dc(&puStack_508);
    lVar14 = 0;
    pcVar12 = pcVar9;
    pcVar6 = pcVar10;
    do {
      if ((&cStack_4b9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_520;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar2);
  plVar3 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_500);
  _objc_release(pcVar13);
  _objc_release(pcVar2);
  _objc_release(plVar7);
  __Unwind_Resume();
  pcVar9 = acStack_5e0;
  pcStack_528 = FUN_1056ee46c;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar1;
  pcVar2 = pcVar12;
  pcVar13 = pcVar6;
  pcVar10 = pcVar8;
  ppppuStack_530 = &ppppuStack_470;
  _objc_retain(plVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar6);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    plVar7 = (long *)&UNK_1108aa860;
    (**(code **)(*plVar4 + 0x28))();
    if ((int)plVar4 != 0) {
      plVar3 = (long *)plVar3[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      func_0x00010002b838(acStack_5c0,pcVar2);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar2 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_5a8,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_590,pcVar2);
      acStack_5e0[0] = '\0';
      acStack_5e0[1] = '\0';
      acStack_5e0[2] = '\0';
      acStack_5e0[3] = '\0';
      acStack_5e0[4] = '\0';
      acStack_5e0[5] = '\0';
      acStack_5e0[6] = '\0';
      acStack_5e0[7] = '\0';
      acStack_5e0[8] = '\0';
      acStack_5e0[9] = '\0';
      acStack_5e0[10] = '\0';
      acStack_5e0[0xb] = '\0';
      acStack_5e0[0xc] = '\0';
      acStack_5e0[0xd] = '\0';
      acStack_5e0[0xe] = '\0';
      acStack_5e0[0xf] = '\0';
      acStack_5e0[0x10] = '\0';
      acStack_5e0[0x11] = '\0';
      acStack_5e0[0x12] = '\0';
      acStack_5e0[0x13] = '\0';
      acStack_5e0[0x14] = '\0';
      acStack_5e0[0x15] = '\0';
      acStack_5e0[0x16] = '\0';
      acStack_5e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_5e0,acStack_5c0,&lStack_578,3);
      pcVar13 = (char *)((long)pcVar8 * 10);
      plVar7 = (long *)&UNK_1108aa860;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_5c8 = acStack_5e0;
      func_0x00010007e5dc(&puStack_5c8);
      lVar14 = 0;
      pcVar2 = pcVar9;
      do {
        if ((&cStack_579)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_5e0;
      } while (lVar14 != -0x48);
    }
  }
  _objc_release(pcVar6);
  _objc_release(pcVar12);
  plVar3 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_618 = acStack_5c0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_618);
  _objc_release(pcVar6);
  _objc_release(pcVar12);
  _objc_release(plVar1);
  plVar5 = plVar3;
  __Unwind_Resume();
  pcStack_5e8 = FUN_1056ee750;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar7;
  pcVar8 = pcVar2;
  pcVar9 = pcVar13;
  pcStack_620 = unaff_x24;
  plStack_610 = plVar3;
  pcStack_608 = pcVar6;
  pcStack_600 = pcVar12;
  plStack_5f8 = plVar1;
  ppppuStack_5f0 = &ppppuStack_530;
  _objc_retain(plVar7);
  _objc_retain(pcVar2);
  if (plVar5 != (long *)0x0) {
    plVar3 = (long *)plVar5[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    unaff_x24 = (char *)auStack_658;
    func_0x00010002b838(auStack_658,pcVar12);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar12 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_640,pcVar12);
    acStack_678[0] = '\0';
    acStack_678[1] = '\0';
    acStack_678[2] = '\0';
    acStack_678[3] = '\0';
    acStack_678[4] = '\0';
    acStack_678[5] = '\0';
    acStack_678[6] = '\0';
    acStack_678[7] = '\0';
    acStack_678[8] = '\0';
    acStack_678[9] = '\0';
    acStack_678[10] = '\0';
    acStack_678[0xb] = '\0';
    acStack_678[0xc] = '\0';
    acStack_678[0xd] = '\0';
    acStack_678[0xe] = '\0';
    acStack_678[0xf] = '\0';
    acStack_678[0x10] = '\0';
    acStack_678[0x11] = '\0';
    acStack_678[0x12] = '\0';
    acStack_678[0x13] = '\0';
    acStack_678[0x14] = '\0';
    acStack_678[0x15] = '\0';
    acStack_678[0x16] = '\0';
    acStack_678[0x17] = '\0';
    func_0x00010007e1e8(acStack_678,auStack_658,&lStack_628,2);
    plVar4 = (long *)&UNK_1108aa8b0;
    pcVar8 = acStack_678;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    pcStack_660 = acStack_678;
    func_0x00010007e5dc(&pcStack_660);
    lVar14 = 0;
    pcVar9 = pcVar13;
    do {
      if ((&cStack_629)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  plVar3 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_628) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_641 < '\0') {
      __ZdlPv(auStack_658[0]);
    }
    _objc_release(pcVar2);
    _objc_release(plVar7);
    __Unwind_Resume();
    pcVar13 = acStack_740;
    pcStack_688 = FUN_1056ee980;
    lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar1 = plVar4;
    pcVar2 = pcVar8;
    pcVar12 = pcVar9;
    pcVar6 = pcVar10;
    ppppuStack_690 = &ppppuStack_5f0;
    _objc_retain(plVar4);
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)plVar3[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      func_0x00010002b838(acStack_720,pcVar2);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar2 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_708,pcVar2);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar2 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_6f0,pcVar2);
      acStack_740[0] = '\0';
      acStack_740[1] = '\0';
      acStack_740[2] = '\0';
      acStack_740[3] = '\0';
      acStack_740[4] = '\0';
      acStack_740[5] = '\0';
      acStack_740[6] = '\0';
      acStack_740[7] = '\0';
      acStack_740[8] = '\0';
      acStack_740[9] = '\0';
      acStack_740[10] = '\0';
      acStack_740[0xb] = '\0';
      acStack_740[0xc] = '\0';
      acStack_740[0xd] = '\0';
      acStack_740[0xe] = '\0';
      acStack_740[0xf] = '\0';
      acStack_740[0x10] = '\0';
      acStack_740[0x11] = '\0';
      acStack_740[0x12] = '\0';
      acStack_740[0x13] = '\0';
      acStack_740[0x14] = '\0';
      acStack_740[0x15] = '\0';
      acStack_740[0x16] = '\0';
      acStack_740[0x17] = '\0';
      func_0x00010007e1e8(acStack_740,acStack_720,&lStack_6d8,3);
      plVar1 = (long *)&UNK_1108aa900;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_728 = acStack_740;
      func_0x00010007e5dc(&puStack_728);
      lVar14 = 0;
      pcVar2 = pcVar13;
      pcVar12 = pcVar10;
      do {
        if ((&cStack_6d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_740;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    plVar3 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    pcVar13 = acStack_720;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar13);
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    _objc_release(plVar4);
    plVar5 = plVar3;
    __Unwind_Resume();
    pcStack_748 = FUN_1056eec40;
    lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = plVar1;
    pcVar10 = pcVar2;
    pcVar11 = pcVar12;
    pcStack_780 = unaff_x24;
    pcStack_778 = pcVar13;
    plStack_770 = plVar3;
    pcStack_768 = pcVar9;
    pcStack_760 = pcVar8;
    plStack_758 = plVar4;
    ppppuStack_750 = &ppppuStack_690;
    _objc_retain(plVar1);
    _objc_retain(pcVar2);
    puVar16 = (undefined8 *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar3 = (long *)plVar5[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      unaff_x24 = (char *)auStack_7b8;
      func_0x00010002b838(auStack_7b8,pcVar13);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar13 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar13 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_7a0,pcVar13);
      acStack_7d8[0] = '\0';
      acStack_7d8[1] = '\0';
      acStack_7d8[2] = '\0';
      acStack_7d8[3] = '\0';
      acStack_7d8[4] = '\0';
      acStack_7d8[5] = '\0';
      acStack_7d8[6] = '\0';
      acStack_7d8[7] = '\0';
      acStack_7d8[8] = '\0';
      acStack_7d8[9] = '\0';
      acStack_7d8[10] = '\0';
      acStack_7d8[0xb] = '\0';
      acStack_7d8[0xc] = '\0';
      acStack_7d8[0xd] = '\0';
      acStack_7d8[0xe] = '\0';
      acStack_7d8[0xf] = '\0';
      acStack_7d8[0x10] = '\0';
      acStack_7d8[0x11] = '\0';
      acStack_7d8[0x12] = '\0';
      acStack_7d8[0x13] = '\0';
      acStack_7d8[0x14] = '\0';
      acStack_7d8[0x15] = '\0';
      acStack_7d8[0x16] = '\0';
      acStack_7d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_7d8,auStack_7b8,&lStack_788,2);
      plVar7 = (long *)&UNK_1108aa950;
      pcVar13 = acStack_7d8;
      pcVar10 = acStack_7d8;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      pcStack_7c0 = pcVar13;
      func_0x00010007e5dc(&pcStack_7c0);
      lVar14 = 0;
      puVar16 = auStack_7b8;
      pcVar11 = pcVar12;
      do {
        if ((&cStack_789)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar2);
    plVar3 = plVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_7a1 < '\0') {
      __ZdlPv(auStack_7b8[0]);
    }
    _objc_release(pcVar2);
    _objc_release(plVar1);
    plVar5 = plVar3;
    __Unwind_Resume();
    pcStack_7e8 = FUN_1056eee70;
    lStack_828 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar7;
    pcVar12 = pcVar10;
    pcVar8 = pcVar11;
    pcStack_820 = unaff_x24;
    pcStack_818 = pcVar13;
    puStack_810 = puVar16;
    plStack_808 = plVar3;
    pcStack_800 = pcVar2;
    plStack_7f8 = plVar1;
    ppppuStack_7f0 = &ppppuStack_750;
    _objc_retain(plVar7);
    _objc_retain(pcVar10);
    puVar16 = (undefined8 *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar3 = (long *)plVar5[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      unaff_x24 = (char *)auStack_858;
      func_0x00010002b838(auStack_858,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar2 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_840,pcVar2);
      acStack_878[0] = '\0';
      acStack_878[1] = '\0';
      acStack_878[2] = '\0';
      acStack_878[3] = '\0';
      acStack_878[4] = '\0';
      acStack_878[5] = '\0';
      acStack_878[6] = '\0';
      acStack_878[7] = '\0';
      acStack_878[8] = '\0';
      acStack_878[9] = '\0';
      acStack_878[10] = '\0';
      acStack_878[0xb] = '\0';
      acStack_878[0xc] = '\0';
      acStack_878[0xd] = '\0';
      acStack_878[0xe] = '\0';
      acStack_878[0xf] = '\0';
      acStack_878[0x10] = '\0';
      acStack_878[0x11] = '\0';
      acStack_878[0x12] = '\0';
      acStack_878[0x13] = '\0';
      acStack_878[0x14] = '\0';
      acStack_878[0x15] = '\0';
      acStack_878[0x16] = '\0';
      acStack_878[0x17] = '\0';
      func_0x00010007e1e8(acStack_878,auStack_858,&lStack_828,2);
      plVar4 = (long *)&UNK_1108aa9a0;
      pcVar13 = acStack_878;
      pcVar12 = acStack_878;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      pcStack_860 = pcVar13;
      func_0x00010007e5dc(&pcStack_860);
      lVar14 = 0;
      puVar16 = auStack_858;
      pcVar8 = pcVar11;
      do {
        if ((&cStack_829)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_840 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar10);
    plVar3 = plVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_828) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_841 < '\0') {
      __ZdlPv(auStack_858[0]);
    }
    _objc_release(pcVar10);
    _objc_release(plVar7);
    plVar5 = plVar3;
    __Unwind_Resume();
    pcVar9 = acStack_900;
    pcStack_888 = FUN_1056ef0a0;
    lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar1 = plVar4;
    pcVar2 = pcVar12;
    pcStack_8c0 = unaff_x24;
    pcStack_8b8 = pcVar13;
    puStack_8b0 = puVar16;
    plStack_8a8 = plVar3;
    pcStack_8a0 = pcVar10;
    plStack_898 = plVar7;
    ppppuStack_890 = &ppppuStack_7f0;
    _objc_retain(plVar4);
    if (plVar5 != (long *)0x0) {
      plVar3 = (long *)plVar5[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      pcVar13 = (char *)auStack_8e0;
      func_0x00010002b838(auStack_8e0,pcVar2);
      acStack_900[0] = '\0';
      acStack_900[1] = '\0';
      acStack_900[2] = '\0';
      acStack_900[3] = '\0';
      acStack_900[4] = '\0';
      acStack_900[5] = '\0';
      acStack_900[6] = '\0';
      acStack_900[7] = '\0';
      acStack_900[8] = '\0';
      acStack_900[9] = '\0';
      acStack_900[10] = '\0';
      acStack_900[0xb] = '\0';
      acStack_900[0xc] = '\0';
      acStack_900[0xd] = '\0';
      acStack_900[0xe] = '\0';
      acStack_900[0xf] = '\0';
      acStack_900[0x10] = '\0';
      acStack_900[0x11] = '\0';
      acStack_900[0x12] = '\0';
      acStack_900[0x13] = '\0';
      acStack_900[0x14] = '\0';
      acStack_900[0x15] = '\0';
      acStack_900[0x16] = '\0';
      acStack_900[0x17] = '\0';
      func_0x00010007e1e8(acStack_900,auStack_8e0,&lStack_8c8,1);
      plVar1 = (long *)&UNK_1108aa9f0;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_8e8 = acStack_900;
      func_0x00010007e5dc(&puStack_8e8);
      pcVar2 = pcVar9;
      pcVar8 = pcVar12;
      if (cStack_8c9 < '\0') {
        __ZdlPv(auStack_8e0[0]);
        pcVar2 = pcVar9;
        pcVar8 = pcVar12;
      }
    }
    plVar3 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar4);
    _objc_release(plVar4);
    __Unwind_Resume();
    pcVar11 = acStack_9c0;
    pcStack_908 = FUN_1056ef214;
    lStack_958 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = plVar1;
    pcVar12 = pcVar2;
    pcVar10 = pcVar8;
    pcVar9 = pcVar6;
    ppppuStack_910 = &ppppuStack_890;
    _objc_retain(plVar1);
    _objc_retain(pcVar8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)plVar3[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      func_0x00010002b838(acStack_9a0,pcVar12);
      pcVar12 = "true";
      if ((int)pcVar2 == 0) {
        pcVar12 = "false";
      }
      func_0x00010002b838(auStack_988,pcVar12);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar2 = pcVar8;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_970,pcVar2);
      acStack_9c0[0] = '\0';
      acStack_9c0[1] = '\0';
      acStack_9c0[2] = '\0';
      acStack_9c0[3] = '\0';
      acStack_9c0[4] = '\0';
      acStack_9c0[5] = '\0';
      acStack_9c0[6] = '\0';
      acStack_9c0[7] = '\0';
      acStack_9c0[8] = '\0';
      acStack_9c0[9] = '\0';
      acStack_9c0[10] = '\0';
      acStack_9c0[0xb] = '\0';
      acStack_9c0[0xc] = '\0';
      acStack_9c0[0xd] = '\0';
      acStack_9c0[0xe] = '\0';
      acStack_9c0[0xf] = '\0';
      acStack_9c0[0x10] = '\0';
      acStack_9c0[0x11] = '\0';
      acStack_9c0[0x12] = '\0';
      acStack_9c0[0x13] = '\0';
      acStack_9c0[0x14] = '\0';
      acStack_9c0[0x15] = '\0';
      acStack_9c0[0x16] = '\0';
      acStack_9c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_9c0,acStack_9a0,&lStack_958,3);
      plVar7 = (long *)&UNK_1108aaa40;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_9a8 = acStack_9c0;
      func_0x00010007e5dc(&puStack_9a8);
      lVar14 = 0;
      pcVar12 = pcVar11;
      pcVar10 = pcVar6;
      do {
        if ((&cStack_959)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_970 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar13 = acStack_9c0;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar8);
    plVar3 = plVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_958) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_9a0);
    _objc_release(pcVar8);
    _objc_release(plVar1);
    __Unwind_Resume();
    pcVar11 = acStack_a80;
    pcStack_9c8 = FUN_1056ef48c;
    lStack_a18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar1 = plVar7;
    pcVar2 = pcVar12;
    pcVar6 = pcVar10;
    pcVar8 = pcVar9;
    ppppuStack_9d0 = &ppppuStack_910;
    _objc_retain(plVar7);
    _objc_retain(pcVar10);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)plVar3[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      func_0x00010002b838(acStack_a60,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar12 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_a48,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar2 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_a30,pcVar2);
      acStack_a80[0] = '\0';
      acStack_a80[1] = '\0';
      acStack_a80[2] = '\0';
      acStack_a80[3] = '\0';
      acStack_a80[4] = '\0';
      acStack_a80[5] = '\0';
      acStack_a80[6] = '\0';
      acStack_a80[7] = '\0';
      acStack_a80[8] = '\0';
      acStack_a80[9] = '\0';
      acStack_a80[10] = '\0';
      acStack_a80[0xb] = '\0';
      acStack_a80[0xc] = '\0';
      acStack_a80[0xd] = '\0';
      acStack_a80[0xe] = '\0';
      acStack_a80[0xf] = '\0';
      acStack_a80[0x10] = '\0';
      acStack_a80[0x11] = '\0';
      acStack_a80[0x12] = '\0';
      acStack_a80[0x13] = '\0';
      acStack_a80[0x14] = '\0';
      acStack_a80[0x15] = '\0';
      acStack_a80[0x16] = '\0';
      acStack_a80[0x17] = '\0';
      func_0x00010007e1e8(acStack_a80,acStack_a60,&lStack_a18,3);
      plVar1 = (long *)&UNK_1108aaa90;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_a68 = acStack_a80;
      func_0x00010007e5dc(&puStack_a68);
      lVar14 = 0;
      pcVar2 = pcVar11;
      pcVar6 = pcVar9;
      do {
        if ((&cStack_a19)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a30 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar13 = acStack_a80;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar10);
    plVar3 = plVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a18) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_a60);
    _objc_release(pcVar10);
    _objc_release(plVar7);
    __Unwind_Resume();
    pcVar11 = acStack_b40;
    pcStack_a88 = FUN_1056ef704;
    lStack_ad8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = plVar1;
    pcVar12 = pcVar2;
    pcVar10 = pcVar6;
    pcVar9 = pcVar8;
    ppppuStack_a90 = &ppppuStack_9d0;
    _objc_retain(plVar1);
    _objc_retain(pcVar6);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)plVar3[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      func_0x00010002b838(acStack_b20,pcVar12);
      pcVar12 = "true";
      if ((int)pcVar2 == 0) {
        pcVar12 = "false";
      }
      func_0x00010002b838(auStack_b08,pcVar12);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_af0,pcVar2);
      acStack_b40[0] = '\0';
      acStack_b40[1] = '\0';
      acStack_b40[2] = '\0';
      acStack_b40[3] = '\0';
      acStack_b40[4] = '\0';
      acStack_b40[5] = '\0';
      acStack_b40[6] = '\0';
      acStack_b40[7] = '\0';
      acStack_b40[8] = '\0';
      acStack_b40[9] = '\0';
      acStack_b40[10] = '\0';
      acStack_b40[0xb] = '\0';
      acStack_b40[0xc] = '\0';
      acStack_b40[0xd] = '\0';
      acStack_b40[0xe] = '\0';
      acStack_b40[0xf] = '\0';
      acStack_b40[0x10] = '\0';
      acStack_b40[0x11] = '\0';
      acStack_b40[0x12] = '\0';
      acStack_b40[0x13] = '\0';
      acStack_b40[0x14] = '\0';
      acStack_b40[0x15] = '\0';
      acStack_b40[0x16] = '\0';
      acStack_b40[0x17] = '\0';
      func_0x00010007e1e8(acStack_b40,acStack_b20,&lStack_ad8,3);
      plVar7 = (long *)&UNK_1108aaae0;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_b28 = acStack_b40;
      func_0x00010007e5dc(&puStack_b28);
      lVar14 = 0;
      pcVar12 = pcVar11;
      pcVar10 = pcVar8;
      do {
        if ((&cStack_ad9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_af0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar13 = acStack_b40;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar6);
    plVar3 = plVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ad8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_b20);
    _objc_release(pcVar6);
    _objc_release(plVar1);
    __Unwind_Resume();
    pcVar6 = acStack_c00;
    pcStack_b48 = FUN_1056ef97c;
    lStack_b98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar1 = plVar7;
    pcVar2 = pcVar12;
    ppppuStack_b50 = &ppppuStack_a90;
    _objc_retain(plVar7);
    _objc_retain(pcVar10);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)plVar3[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      func_0x00010002b838(acStack_be0,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar12 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_bc8,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar12 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar12 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_bb0,pcVar12);
      acStack_c00[0] = '\0';
      acStack_c00[1] = '\0';
      acStack_c00[2] = '\0';
      acStack_c00[3] = '\0';
      acStack_c00[4] = '\0';
      acStack_c00[5] = '\0';
      acStack_c00[6] = '\0';
      acStack_c00[7] = '\0';
      acStack_c00[8] = '\0';
      acStack_c00[9] = '\0';
      acStack_c00[10] = '\0';
      acStack_c00[0xb] = '\0';
      acStack_c00[0xc] = '\0';
      acStack_c00[0xd] = '\0';
      acStack_c00[0xe] = '\0';
      acStack_c00[0xf] = '\0';
      acStack_c00[0x10] = '\0';
      acStack_c00[0x11] = '\0';
      acStack_c00[0x12] = '\0';
      acStack_c00[0x13] = '\0';
      acStack_c00[0x14] = '\0';
      acStack_c00[0x15] = '\0';
      acStack_c00[0x16] = '\0';
      acStack_c00[0x17] = '\0';
      func_0x00010007e1e8(acStack_c00,acStack_be0,&lStack_b98,3);
      plVar1 = (long *)&UNK_1108aab30;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108aab30,acStack_c00,pcVar9);
      puStack_be8 = acStack_c00;
      func_0x00010007e5dc(&puStack_be8);
      lVar14 = 0;
      pcVar2 = pcVar6;
      do {
        if ((&cStack_b99)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_bb0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar13 = acStack_c00;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar10);
    plVar3 = plVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b98) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        pcVar13 = pcVar13 + -0x18;
      } while (pcVar13 != acStack_be0);
      _objc_release(pcVar10);
      _objc_release(plVar7);
      plVar5 = plVar3;
      __Unwind_Resume();
      pcVar8 = acStack_c80;
      pcStack_c08 = FUN_1056efbf4;
      lStack_c48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar4 = plVar1;
      pcVar6 = pcVar2;
      pcStack_c40 = pcVar12;
      pcStack_c38 = pcVar13;
      pcStack_c30 = acStack_be0;
      plStack_c28 = plVar3;
      pcStack_c20 = pcVar10;
      plStack_c18 = plVar7;
      ppppuStack_c10 = &ppppuStack_b50;
      _objc_retain(plVar1);
      plVar3 = (long *)0x0;
      pcVar10 = acStack_be0;
      if (plVar5 != (long *)0x0) {
        plVar3 = (long *)plVar5[1];
        _objc_retain(plVar1);
        if (plVar1 == (long *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = (char *)plVar1;
          _objc_retainAutorelease(plVar1);
          func_0x00010bdc3520();
        }
        _objc_release(plVar1);
        pcVar13 = (char *)auStack_c60;
        func_0x00010002b838(auStack_c60,pcVar6);
        acStack_c80[0] = '\0';
        acStack_c80[1] = '\0';
        acStack_c80[2] = '\0';
        acStack_c80[3] = '\0';
        acStack_c80[4] = '\0';
        acStack_c80[5] = '\0';
        acStack_c80[6] = '\0';
        acStack_c80[7] = '\0';
        acStack_c80[8] = '\0';
        acStack_c80[9] = '\0';
        acStack_c80[10] = '\0';
        acStack_c80[0xb] = '\0';
        acStack_c80[0xc] = '\0';
        acStack_c80[0xd] = '\0';
        acStack_c80[0xe] = '\0';
        acStack_c80[0xf] = '\0';
        acStack_c80[0x10] = '\0';
        acStack_c80[0x11] = '\0';
        acStack_c80[0x12] = '\0';
        acStack_c80[0x13] = '\0';
        acStack_c80[0x14] = '\0';
        acStack_c80[0x15] = '\0';
        acStack_c80[0x16] = '\0';
        acStack_c80[0x17] = '\0';
        func_0x00010007e1e8(acStack_c80,auStack_c60,&lStack_c48,1);
        plVar4 = (long *)&UNK_1108aab80;
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108aab80,acStack_c80,pcVar2);
        puStack_c68 = acStack_c80;
        func_0x00010007e5dc(&puStack_c68);
        pcVar6 = pcVar8;
        pcVar10 = acStack_c80;
        if (cStack_c49 < '\0') {
          __ZdlPv(auStack_c60[0]);
          pcVar6 = pcVar8;
          pcVar10 = acStack_c80;
        }
      }
      plVar7 = plVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c48) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar1);
      _objc_release(plVar1);
      plVar15 = plVar7;
      __Unwind_Resume();
      pcVar8 = acStack_d00;
      pcStack_c88 = FUN_1056efd68;
      lStack_cc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar5 = plVar4;
      pcVar2 = pcVar6;
      pcStack_cc0 = pcVar12;
      pcStack_cb8 = pcVar13;
      pcStack_cb0 = pcVar10;
      plStack_ca8 = plVar3;
      plStack_ca0 = plVar7;
      plStack_c98 = plVar1;
      ppppuStack_c90 = &ppppuStack_c10;
      _objc_retain(plVar4);
      plVar3 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        plVar3 = (long *)plVar15[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
        }
        _objc_release(plVar4);
        pcVar13 = (char *)auStack_ce0;
        func_0x00010002b838(auStack_ce0,pcVar2);
        acStack_d00[0] = '\0';
        acStack_d00[1] = '\0';
        acStack_d00[2] = '\0';
        acStack_d00[3] = '\0';
        acStack_d00[4] = '\0';
        acStack_d00[5] = '\0';
        acStack_d00[6] = '\0';
        acStack_d00[7] = '\0';
        acStack_d00[8] = '\0';
        acStack_d00[9] = '\0';
        acStack_d00[10] = '\0';
        acStack_d00[0xb] = '\0';
        acStack_d00[0xc] = '\0';
        acStack_d00[0xd] = '\0';
        acStack_d00[0xe] = '\0';
        acStack_d00[0xf] = '\0';
        acStack_d00[0x10] = '\0';
        acStack_d00[0x11] = '\0';
        acStack_d00[0x12] = '\0';
        acStack_d00[0x13] = '\0';
        acStack_d00[0x14] = '\0';
        acStack_d00[0x15] = '\0';
        acStack_d00[0x16] = '\0';
        acStack_d00[0x17] = '\0';
        func_0x00010007e1e8(acStack_d00,auStack_ce0,&lStack_cc8,1);
        plVar5 = (long *)&UNK_1108aabd0;
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108aabd0,acStack_d00,pcVar6);
        puStack_ce8 = acStack_d00;
        func_0x00010007e5dc(&puStack_ce8);
        pcVar2 = pcVar8;
        pcVar10 = acStack_d00;
        if (cStack_cc9 < '\0') {
          __ZdlPv(auStack_ce0[0]);
          pcVar2 = pcVar8;
          pcVar10 = acStack_d00;
        }
      }
      plVar1 = plVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cc8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar4);
      _objc_release(plVar4);
      plVar15 = plVar1;
      __Unwind_Resume();
      pcStack_d08 = FUN_1056efedc;
      lStack_d48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar7 = plVar5;
      pcStack_d40 = pcVar12;
      pcStack_d38 = pcVar13;
      pcStack_d30 = pcVar10;
      plStack_d28 = plVar3;
      plStack_d20 = plVar1;
      plStack_d18 = plVar4;
      ppppuStack_d10 = &ppppuStack_c90;
      _objc_retain(plVar5);
      if (plVar15 != (long *)0x0) {
        plVar3 = (long *)plVar15[1];
        _objc_retain(plVar5);
        if (plVar5 == (long *)0x0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = (char *)plVar5;
          _objc_retainAutorelease(plVar5);
          func_0x00010bdc3520();
        }
        _objc_release(plVar5);
        func_0x00010002b838(auStack_d60,pcVar12);
        uStack_d80 = 0;
        uStack_d78 = 0;
        uStack_d70 = 0;
        func_0x00010007e1e8(&uStack_d80,auStack_d60,&lStack_d48,1);
        plVar7 = (long *)&UNK_1108aac20;
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108aac20,&uStack_d80,pcVar2);
        puStack_d68 = (undefined1 *)&uStack_d80;
        func_0x00010007e5dc(&puStack_d68);
        if (cStack_d49 < '\0') {
          __ZdlPv(auStack_d60[0]);
        }
      }
      plVar3 = plVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d48) {
        ___stack_chk_fail();
        _objc_release(plVar5);
        _objc_release(plVar5);
        plVar1 = plVar3;
        __Unwind_Resume();
        puStack_da8 = (undefined1 *)&uStack_dc0;
        pcStack_d88 = FUN_1056f0050;
        if (plVar1 != (long *)0x0) {
          uStack_dc0 = 0;
          uStack_db8 = 0;
          uStack_db0 = 0;
          plStack_da0 = plVar3;
          plStack_d98 = plVar5;
          ppppuStack_d90 = &ppppuStack_d10;
          (**(code **)(*(long *)plVar1[1] + 0x18))
                    ((long *)plVar1[1],&UNK_1108aac70,&uStack_dc0,plVar7);
          func_0x00010007e5dc(&puStack_da8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ed4ec; end: 1056ed65f;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ed4ec(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x24;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined1 *puStack_d08;
  char *pcStack_d00;
  char *pcStack_cf8;
  undefined8 ****ppppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined1 *puStack_cc8;
  undefined8 auStack_cc0 [2];
  char cStack_ca9;
  long lStack_ca8;
  char *pcStack_ca0;
  char *pcStack_c98;
  char *pcStack_c90;
  long *plStack_c88;
  char *pcStack_c80;
  char *pcStack_c78;
  undefined8 ****ppppuStack_c70;
  code *pcStack_c68;
  char acStack_c60 [24];
  undefined1 *puStack_c48;
  undefined8 auStack_c40 [2];
  char cStack_c29;
  long lStack_c28;
  char *pcStack_c20;
  char *pcStack_c18;
  char *pcStack_c10;
  long *plStack_c08;
  char *pcStack_c00;
  char *pcStack_bf8;
  undefined8 ****ppppuStack_bf0;
  code *pcStack_be8;
  char acStack_be0 [24];
  undefined1 *puStack_bc8;
  undefined8 auStack_bc0 [2];
  char cStack_ba9;
  long lStack_ba8;
  char *pcStack_ba0;
  char *pcStack_b98;
  char *pcStack_b90;
  char *pcStack_b88;
  char *pcStack_b80;
  char *pcStack_b78;
  undefined8 ****ppppuStack_b70;
  code *pcStack_b68;
  char acStack_b60 [24];
  undefined1 *puStack_b48;
  char acStack_b40 [24];
  undefined1 auStack_b28 [24];
  undefined8 auStack_b10 [2];
  char cStack_af9;
  long lStack_af8;
  undefined8 ****ppppuStack_ab0;
  code *pcStack_aa8;
  char acStack_aa0 [24];
  undefined1 *puStack_a88;
  char acStack_a80 [24];
  undefined1 auStack_a68 [24];
  undefined8 auStack_a50 [2];
  char cStack_a39;
  long lStack_a38;
  undefined8 ****ppppuStack_9f0;
  code *pcStack_9e8;
  char acStack_9e0 [24];
  undefined1 *puStack_9c8;
  char acStack_9c0 [24];
  undefined1 auStack_9a8 [24];
  undefined8 auStack_990 [2];
  char cStack_979;
  long lStack_978;
  undefined8 ****ppppuStack_930;
  code *pcStack_928;
  char acStack_920 [24];
  undefined1 *puStack_908;
  char acStack_900 [24];
  undefined1 auStack_8e8 [24];
  undefined8 auStack_8d0 [2];
  char cStack_8b9;
  long lStack_8b8;
  undefined8 ****ppppuStack_870;
  code *pcStack_868;
  char acStack_860 [24];
  undefined1 *puStack_848;
  undefined8 auStack_840 [2];
  char cStack_829;
  long lStack_828;
  char *pcStack_820;
  char *pcStack_818;
  undefined8 *puStack_810;
  char *pcStack_808;
  char *pcStack_800;
  char *pcStack_7f8;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  char acStack_7d8 [24];
  char *pcStack_7c0;
  undefined8 auStack_7b8 [2];
  char cStack_7a1;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  char *pcStack_780;
  char *pcStack_778;
  undefined8 *puStack_770;
  char *pcStack_768;
  char *pcStack_760;
  char *pcStack_758;
  undefined8 ****ppppuStack_750;
  code *pcStack_748;
  char acStack_738 [24];
  char *pcStack_720;
  undefined8 auStack_718 [2];
  char cStack_701;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  undefined8 ****ppppuStack_6b0;
  code *pcStack_6a8;
  char acStack_6a0 [24];
  undefined1 *puStack_688;
  char acStack_680 [24];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ****ppppuStack_5f0;
  code *pcStack_5e8;
  char acStack_5d8 [24];
  char *pcStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  char *pcStack_580;
  char *pcStack_578;
  char *pcStack_570;
  char *pcStack_568;
  char *pcStack_560;
  char *pcStack_558;
  undefined8 ****ppppuStack_550;
  code *pcStack_548;
  char acStack_540 [24];
  undefined1 *puStack_528;
  char acStack_520 [24];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  char acStack_480 [24];
  undefined1 *puStack_468;
  char acStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ****ppppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar12 = acStack_100;
  pcStack_88 = FUN_1056ed660;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar10 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    pcVar6 = "";
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_e0,pcVar2);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
      param_4 = (char *)((long)pcVar3 * 10);
      pcVar6 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_e8 = acStack_100;
      func_0x00010007e5dc(&puStack_e8);
      pcVar10 = pcVar12;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        pcVar10 = pcVar12;
      }
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar12 = acStack_180;
  pcStack_108 = FUN_1056ed7f8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar10;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar2 = pcVar12;
    param_4 = pcVar10;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar2 = pcVar12;
      param_4 = pcVar10;
    }
  }
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_188 = FUN_1056ed96c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar10 = pcVar2;
  pcVar12 = param_4;
  pcVar8 = param_5;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(param_4);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_220,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_208,pcVar3);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_1f0,pcVar3);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar15 = 0;
    pcVar10 = pcVar9;
    pcVar12 = param_5;
    do {
      if ((&cStack_1d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(param_4);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_300;
  pcStack_248 = FUN_1056edc2c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar10;
  pcVar9 = pcVar12;
  pcVar7 = pcVar8;
  ppppuStack_250 = &pppuStack_190;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_2e0,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_2c8,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2b0,pcVar1);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar15 = 0;
    pcVar2 = pcVar5;
    pcVar9 = pcVar8;
    do {
      if ((&cStack_299)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2e0);
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar5 = acStack_3c0;
  pcStack_308 = FUN_1056edeec;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar10 = pcVar2;
  pcVar12 = pcVar9;
  pcVar8 = pcVar7;
  ppppuStack_310 = &ppppuStack_250;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_3a0,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_388,pcVar3);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar3 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_370,pcVar3);
    acStack_3c0[0] = '\0';
    acStack_3c0[1] = '\0';
    acStack_3c0[2] = '\0';
    acStack_3c0[3] = '\0';
    acStack_3c0[4] = '\0';
    acStack_3c0[5] = '\0';
    acStack_3c0[6] = '\0';
    acStack_3c0[7] = '\0';
    acStack_3c0[8] = '\0';
    acStack_3c0[9] = '\0';
    acStack_3c0[10] = '\0';
    acStack_3c0[0xb] = '\0';
    acStack_3c0[0xc] = '\0';
    acStack_3c0[0xd] = '\0';
    acStack_3c0[0xe] = '\0';
    acStack_3c0[0xf] = '\0';
    acStack_3c0[0x10] = '\0';
    acStack_3c0[0x11] = '\0';
    acStack_3c0[0x12] = '\0';
    acStack_3c0[0x13] = '\0';
    acStack_3c0[0x14] = '\0';
    acStack_3c0[0x15] = '\0';
    acStack_3c0[0x16] = '\0';
    acStack_3c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3c0,acStack_3a0,&lStack_358,3);
    pcVar6 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_3a8 = acStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar15 = 0;
    pcVar10 = pcVar5;
    pcVar12 = pcVar7;
    do {
      if ((&cStack_359)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_3c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_3a0);
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_480;
  pcStack_3c8 = FUN_1056ee1ac;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar10;
  pcVar9 = pcVar12;
  pcVar7 = pcVar8;
  ppppuStack_3d0 = &ppppuStack_310;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_460,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_448,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_430,pcVar1);
    acStack_480[0] = '\0';
    acStack_480[1] = '\0';
    acStack_480[2] = '\0';
    acStack_480[3] = '\0';
    acStack_480[4] = '\0';
    acStack_480[5] = '\0';
    acStack_480[6] = '\0';
    acStack_480[7] = '\0';
    acStack_480[8] = '\0';
    acStack_480[9] = '\0';
    acStack_480[10] = '\0';
    acStack_480[0xb] = '\0';
    acStack_480[0xc] = '\0';
    acStack_480[0xd] = '\0';
    acStack_480[0xe] = '\0';
    acStack_480[0xf] = '\0';
    acStack_480[0x10] = '\0';
    acStack_480[0x11] = '\0';
    acStack_480[0x12] = '\0';
    acStack_480[0x13] = '\0';
    acStack_480[0x14] = '\0';
    acStack_480[0x15] = '\0';
    acStack_480[0x16] = '\0';
    acStack_480[0x17] = '\0';
    func_0x00010007e1e8(acStack_480,acStack_460,&lStack_418,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_468 = acStack_480;
    func_0x00010007e5dc(&puStack_468);
    lVar15 = 0;
    pcVar2 = pcVar5;
    pcVar9 = pcVar8;
    do {
      if ((&cStack_419)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_480;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_460);
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar5 = acStack_540;
  pcStack_488 = FUN_1056ee46c;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar10 = pcVar2;
  pcVar12 = pcVar9;
  pcVar8 = pcVar7;
  ppppuStack_490 = &ppppuStack_3d0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    pcVar6 = "";
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_520,pcVar3);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar3 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_508,pcVar3);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar3 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_4f0,pcVar3);
      acStack_540[0] = '\0';
      acStack_540[1] = '\0';
      acStack_540[2] = '\0';
      acStack_540[3] = '\0';
      acStack_540[4] = '\0';
      acStack_540[5] = '\0';
      acStack_540[6] = '\0';
      acStack_540[7] = '\0';
      acStack_540[8] = '\0';
      acStack_540[9] = '\0';
      acStack_540[10] = '\0';
      acStack_540[0xb] = '\0';
      acStack_540[0xc] = '\0';
      acStack_540[0xd] = '\0';
      acStack_540[0xe] = '\0';
      acStack_540[0xf] = '\0';
      acStack_540[0x10] = '\0';
      acStack_540[0x11] = '\0';
      acStack_540[0x12] = '\0';
      acStack_540[0x13] = '\0';
      acStack_540[0x14] = '\0';
      acStack_540[0x15] = '\0';
      acStack_540[0x16] = '\0';
      acStack_540[0x17] = '\0';
      func_0x00010007e1e8(acStack_540,acStack_520,&lStack_4d8,3);
      pcVar12 = (char *)((long)pcVar7 * 10);
      pcVar6 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_528 = acStack_540;
      func_0x00010007e5dc(&puStack_528);
      lVar15 = 0;
      pcVar10 = pcVar5;
      do {
        if ((&cStack_4d9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = acStack_540;
      } while (lVar15 != -0x48);
    }
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  pcStack_578 = acStack_520;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_578);
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_548 = FUN_1056ee750;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar5 = pcVar10;
  pcVar11 = pcVar12;
  pcStack_580 = unaff_x24;
  pcStack_570 = pcVar3;
  pcStack_568 = pcVar9;
  pcStack_560 = pcVar2;
  pcStack_558 = pcVar1;
  ppppuStack_550 = &ppppuStack_490;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = (char *)auStack_5b8;
    func_0x00010002b838(auStack_5b8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_5a0,pcVar1);
    acStack_5d8[0] = '\0';
    acStack_5d8[1] = '\0';
    acStack_5d8[2] = '\0';
    acStack_5d8[3] = '\0';
    acStack_5d8[4] = '\0';
    acStack_5d8[5] = '\0';
    acStack_5d8[6] = '\0';
    acStack_5d8[7] = '\0';
    acStack_5d8[8] = '\0';
    acStack_5d8[9] = '\0';
    acStack_5d8[10] = '\0';
    acStack_5d8[0xb] = '\0';
    acStack_5d8[0xc] = '\0';
    acStack_5d8[0xd] = '\0';
    acStack_5d8[0xe] = '\0';
    acStack_5d8[0xf] = '\0';
    acStack_5d8[0x10] = '\0';
    acStack_5d8[0x11] = '\0';
    acStack_5d8[0x12] = '\0';
    acStack_5d8[0x13] = '\0';
    acStack_5d8[0x14] = '\0';
    acStack_5d8[0x15] = '\0';
    acStack_5d8[0x16] = '\0';
    acStack_5d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5d8,auStack_5b8,&lStack_588,2);
    pcVar7 = "";
    pcVar5 = acStack_5d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_5c0 = acStack_5d8;
    func_0x00010007e5dc(&pcStack_5c0);
    lVar15 = 0;
    pcVar11 = pcVar12;
    do {
      if ((&cStack_589)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_5a1 < '\0') {
    __ZdlPv(auStack_5b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar12 = acStack_6a0;
  pcStack_5e8 = FUN_1056ee980;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar2 = pcVar5;
  pcVar6 = pcVar11;
  pcVar10 = pcVar8;
  ppppuStack_5f0 = &ppppuStack_550;
  _objc_retain(pcVar7);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_680,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_668,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_650,pcVar1);
    acStack_6a0[0] = '\0';
    acStack_6a0[1] = '\0';
    acStack_6a0[2] = '\0';
    acStack_6a0[3] = '\0';
    acStack_6a0[4] = '\0';
    acStack_6a0[5] = '\0';
    acStack_6a0[6] = '\0';
    acStack_6a0[7] = '\0';
    acStack_6a0[8] = '\0';
    acStack_6a0[9] = '\0';
    acStack_6a0[10] = '\0';
    acStack_6a0[0xb] = '\0';
    acStack_6a0[0xc] = '\0';
    acStack_6a0[0xd] = '\0';
    acStack_6a0[0xe] = '\0';
    acStack_6a0[0xf] = '\0';
    acStack_6a0[0x10] = '\0';
    acStack_6a0[0x11] = '\0';
    acStack_6a0[0x12] = '\0';
    acStack_6a0[0x13] = '\0';
    acStack_6a0[0x14] = '\0';
    acStack_6a0[0x15] = '\0';
    acStack_6a0[0x16] = '\0';
    acStack_6a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_6a0,acStack_680,&lStack_638,3);
    pcVar3 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_688 = acStack_6a0;
    func_0x00010007e5dc(&puStack_688);
    lVar15 = 0;
    pcVar2 = pcVar12;
    pcVar6 = pcVar8;
    do {
      if ((&cStack_639)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_6a0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  pcVar12 = acStack_680;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar12);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_6a8 = FUN_1056eec40;
  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar9 = pcVar2;
  pcVar13 = pcVar6;
  pcStack_6e0 = unaff_x24;
  pcStack_6d8 = pcVar12;
  pcStack_6d0 = pcVar1;
  pcStack_6c8 = pcVar11;
  pcStack_6c0 = pcVar5;
  pcStack_6b8 = pcVar7;
  ppppuStack_6b0 = &ppppuStack_5f0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar2);
  puVar16 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = (char *)auStack_718;
    func_0x00010002b838(auStack_718,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_700,pcVar1);
    acStack_738[0] = '\0';
    acStack_738[1] = '\0';
    acStack_738[2] = '\0';
    acStack_738[3] = '\0';
    acStack_738[4] = '\0';
    acStack_738[5] = '\0';
    acStack_738[6] = '\0';
    acStack_738[7] = '\0';
    acStack_738[8] = '\0';
    acStack_738[9] = '\0';
    acStack_738[10] = '\0';
    acStack_738[0xb] = '\0';
    acStack_738[0xc] = '\0';
    acStack_738[0xd] = '\0';
    acStack_738[0xe] = '\0';
    acStack_738[0xf] = '\0';
    acStack_738[0x10] = '\0';
    acStack_738[0x11] = '\0';
    acStack_738[0x12] = '\0';
    acStack_738[0x13] = '\0';
    acStack_738[0x14] = '\0';
    acStack_738[0x15] = '\0';
    acStack_738[0x16] = '\0';
    acStack_738[0x17] = '\0';
    func_0x00010007e1e8(acStack_738,auStack_718,&lStack_6e8,2);
    pcVar8 = "\x01";
    pcVar12 = acStack_738;
    pcVar9 = acStack_738;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_720 = pcVar12;
    func_0x00010007e5dc(&pcStack_720);
    lVar15 = 0;
    puVar16 = auStack_718;
    pcVar13 = pcVar6;
    do {
      if ((&cStack_6e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_700 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_701 < '\0') {
    __ZdlPv(auStack_718[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_748 = FUN_1056eee70;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar8;
  pcVar7 = pcVar9;
  pcVar4 = pcVar13;
  pcStack_780 = unaff_x24;
  pcStack_778 = pcVar12;
  puStack_770 = puVar16;
  pcStack_768 = pcVar1;
  pcStack_760 = pcVar2;
  pcStack_758 = pcVar3;
  ppppuStack_750 = &ppppuStack_6b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_7b8;
    func_0x00010002b838(auStack_7b8,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_7a0,pcVar1);
    acStack_7d8[0] = '\0';
    acStack_7d8[1] = '\0';
    acStack_7d8[2] = '\0';
    acStack_7d8[3] = '\0';
    acStack_7d8[4] = '\0';
    acStack_7d8[5] = '\0';
    acStack_7d8[6] = '\0';
    acStack_7d8[7] = '\0';
    acStack_7d8[8] = '\0';
    acStack_7d8[9] = '\0';
    acStack_7d8[10] = '\0';
    acStack_7d8[0xb] = '\0';
    acStack_7d8[0xc] = '\0';
    acStack_7d8[0xd] = '\0';
    acStack_7d8[0xe] = '\0';
    acStack_7d8[0xf] = '\0';
    acStack_7d8[0x10] = '\0';
    acStack_7d8[0x11] = '\0';
    acStack_7d8[0x12] = '\0';
    acStack_7d8[0x13] = '\0';
    acStack_7d8[0x14] = '\0';
    acStack_7d8[0x15] = '\0';
    acStack_7d8[0x16] = '\0';
    acStack_7d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_7d8,auStack_7b8,&lStack_788,2);
    pcVar6 = "";
    pcVar12 = acStack_7d8;
    pcVar7 = acStack_7d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_7c0 = pcVar12;
    func_0x00010007e5dc(&pcStack_7c0);
    lVar15 = 0;
    puVar16 = auStack_7b8;
    pcVar4 = pcVar13;
    do {
      if ((&cStack_789)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_7a1 < '\0') {
    __ZdlPv(auStack_7b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar11 = acStack_860;
  pcStack_7e8 = FUN_1056ef0a0;
  lStack_828 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar6;
  pcVar5 = pcVar7;
  pcStack_820 = unaff_x24;
  pcStack_818 = pcVar12;
  puStack_810 = puVar16;
  pcStack_808 = pcVar1;
  pcStack_800 = pcVar9;
  pcStack_7f8 = pcVar8;
  ppppuStack_7f0 = &ppppuStack_750;
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    pcVar12 = (char *)auStack_840;
    func_0x00010002b838(auStack_840,pcVar1);
    acStack_860[0] = '\0';
    acStack_860[1] = '\0';
    acStack_860[2] = '\0';
    acStack_860[3] = '\0';
    acStack_860[4] = '\0';
    acStack_860[5] = '\0';
    acStack_860[6] = '\0';
    acStack_860[7] = '\0';
    acStack_860[8] = '\0';
    acStack_860[9] = '\0';
    acStack_860[10] = '\0';
    acStack_860[0xb] = '\0';
    acStack_860[0xc] = '\0';
    acStack_860[0xd] = '\0';
    acStack_860[0xe] = '\0';
    acStack_860[0xf] = '\0';
    acStack_860[0x10] = '\0';
    acStack_860[0x11] = '\0';
    acStack_860[0x12] = '\0';
    acStack_860[0x13] = '\0';
    acStack_860[0x14] = '\0';
    acStack_860[0x15] = '\0';
    acStack_860[0x16] = '\0';
    acStack_860[0x17] = '\0';
    func_0x00010007e1e8(acStack_860,auStack_840,&lStack_828,1);
    pcVar3 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_848 = acStack_860;
    func_0x00010007e5dc(&puStack_848);
    pcVar5 = pcVar11;
    pcVar4 = pcVar7;
    if (cStack_829 < '\0') {
      __ZdlPv(auStack_840[0]);
      pcVar5 = pcVar11;
      pcVar4 = pcVar7;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_828) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar7 = acStack_920;
  pcStack_868 = FUN_1056ef214;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar3;
  pcVar6 = pcVar5;
  pcVar8 = pcVar4;
  pcVar9 = pcVar10;
  ppppuStack_870 = &ppppuStack_7f0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar4);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(acStack_900,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_8e8,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_8d0,pcVar1);
    acStack_920[0] = '\0';
    acStack_920[1] = '\0';
    acStack_920[2] = '\0';
    acStack_920[3] = '\0';
    acStack_920[4] = '\0';
    acStack_920[5] = '\0';
    acStack_920[6] = '\0';
    acStack_920[7] = '\0';
    acStack_920[8] = '\0';
    acStack_920[9] = '\0';
    acStack_920[10] = '\0';
    acStack_920[0xb] = '\0';
    acStack_920[0xc] = '\0';
    acStack_920[0xd] = '\0';
    acStack_920[0xe] = '\0';
    acStack_920[0xf] = '\0';
    acStack_920[0x10] = '\0';
    acStack_920[0x11] = '\0';
    acStack_920[0x12] = '\0';
    acStack_920[0x13] = '\0';
    acStack_920[0x14] = '\0';
    acStack_920[0x15] = '\0';
    acStack_920[0x16] = '\0';
    acStack_920[0x17] = '\0';
    func_0x00010007e1e8(acStack_920,acStack_900,&lStack_8b8,3);
    pcVar2 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_908 = acStack_920;
    func_0x00010007e5dc(&puStack_908);
    lVar15 = 0;
    pcVar6 = pcVar7;
    pcVar8 = pcVar10;
    do {
      if ((&cStack_8b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar12 = acStack_920;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8b8) {
    ___stack_chk_fail();
    _objc_release(pcVar4);
    do {
      pcVar12 = pcVar12 + -0x18;
    } while (pcVar12 != acStack_900);
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar4 = acStack_9e0;
    pcStack_928 = FUN_1056ef48c;
    lStack_978 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar2;
    pcVar10 = pcVar6;
    pcVar7 = pcVar8;
    pcVar5 = pcVar9;
    ppppuStack_930 = &ppppuStack_870;
    _objc_retain(pcVar2);
    _objc_retain(pcVar8);
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_9c0,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar6 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_9a8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_990,pcVar1);
      acStack_9e0[0] = '\0';
      acStack_9e0[1] = '\0';
      acStack_9e0[2] = '\0';
      acStack_9e0[3] = '\0';
      acStack_9e0[4] = '\0';
      acStack_9e0[5] = '\0';
      acStack_9e0[6] = '\0';
      acStack_9e0[7] = '\0';
      acStack_9e0[8] = '\0';
      acStack_9e0[9] = '\0';
      acStack_9e0[10] = '\0';
      acStack_9e0[0xb] = '\0';
      acStack_9e0[0xc] = '\0';
      acStack_9e0[0xd] = '\0';
      acStack_9e0[0xe] = '\0';
      acStack_9e0[0xf] = '\0';
      acStack_9e0[0x10] = '\0';
      acStack_9e0[0x11] = '\0';
      acStack_9e0[0x12] = '\0';
      acStack_9e0[0x13] = '\0';
      acStack_9e0[0x14] = '\0';
      acStack_9e0[0x15] = '\0';
      acStack_9e0[0x16] = '\0';
      acStack_9e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_9e0,acStack_9c0,&lStack_978,3);
      pcVar3 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_9c8 = acStack_9e0;
      func_0x00010007e5dc(&puStack_9c8);
      lVar15 = 0;
      pcVar10 = pcVar4;
      pcVar7 = pcVar9;
      do {
        if ((&cStack_979)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_990 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        pcVar12 = acStack_9e0;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_978) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      pcVar12 = pcVar12 + -0x18;
    } while (pcVar12 != acStack_9c0);
    _objc_release(pcVar8);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar4 = acStack_aa0;
    pcStack_9e8 = FUN_1056ef704;
    lStack_a38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar3;
    pcVar6 = pcVar10;
    pcVar8 = pcVar7;
    pcVar9 = pcVar5;
    ppppuStack_9f0 = &ppppuStack_930;
    _objc_retain(pcVar3);
    _objc_retain(pcVar7);
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(acStack_a80,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar10 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_a68,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_a50,pcVar1);
      acStack_aa0[0] = '\0';
      acStack_aa0[1] = '\0';
      acStack_aa0[2] = '\0';
      acStack_aa0[3] = '\0';
      acStack_aa0[4] = '\0';
      acStack_aa0[5] = '\0';
      acStack_aa0[6] = '\0';
      acStack_aa0[7] = '\0';
      acStack_aa0[8] = '\0';
      acStack_aa0[9] = '\0';
      acStack_aa0[10] = '\0';
      acStack_aa0[0xb] = '\0';
      acStack_aa0[0xc] = '\0';
      acStack_aa0[0xd] = '\0';
      acStack_aa0[0xe] = '\0';
      acStack_aa0[0xf] = '\0';
      acStack_aa0[0x10] = '\0';
      acStack_aa0[0x11] = '\0';
      acStack_aa0[0x12] = '\0';
      acStack_aa0[0x13] = '\0';
      acStack_aa0[0x14] = '\0';
      acStack_aa0[0x15] = '\0';
      acStack_aa0[0x16] = '\0';
      acStack_aa0[0x17] = '\0';
      func_0x00010007e1e8(acStack_aa0,acStack_a80,&lStack_a38,3);
      pcVar2 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_a88 = acStack_aa0;
      func_0x00010007e5dc(&puStack_a88);
      lVar15 = 0;
      pcVar6 = pcVar4;
      pcVar8 = pcVar5;
      do {
        if ((&cStack_a39)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a50 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        pcVar12 = acStack_aa0;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a38) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    do {
      pcVar12 = pcVar12 + -0x18;
    } while (pcVar12 != acStack_a80);
    _objc_release(pcVar7);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar7 = acStack_b60;
    pcStack_aa8 = FUN_1056ef97c;
    lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar2;
    pcVar10 = pcVar6;
    ppppuStack_ab0 = &ppppuStack_9f0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar8);
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_b40,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar6 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_b28,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar6 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar6 = pcVar8;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_b10,pcVar6);
      acStack_b60[0] = '\0';
      acStack_b60[1] = '\0';
      acStack_b60[2] = '\0';
      acStack_b60[3] = '\0';
      acStack_b60[4] = '\0';
      acStack_b60[5] = '\0';
      acStack_b60[6] = '\0';
      acStack_b60[7] = '\0';
      acStack_b60[8] = '\0';
      acStack_b60[9] = '\0';
      acStack_b60[10] = '\0';
      acStack_b60[0xb] = '\0';
      acStack_b60[0xc] = '\0';
      acStack_b60[0xd] = '\0';
      acStack_b60[0xe] = '\0';
      acStack_b60[0xf] = '\0';
      acStack_b60[0x10] = '\0';
      acStack_b60[0x11] = '\0';
      acStack_b60[0x12] = '\0';
      acStack_b60[0x13] = '\0';
      acStack_b60[0x14] = '\0';
      acStack_b60[0x15] = '\0';
      acStack_b60[0x16] = '\0';
      acStack_b60[0x17] = '\0';
      func_0x00010007e1e8(acStack_b60,acStack_b40,&lStack_af8,3);
      pcVar3 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab30,acStack_b60,pcVar9);
      puStack_b48 = acStack_b60;
      func_0x00010007e5dc(&puStack_b48);
      lVar15 = 0;
      pcVar10 = pcVar7;
      do {
        if ((&cStack_af9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b10 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        pcVar12 = acStack_b60;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_af8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        pcVar12 = pcVar12 + -0x18;
      } while (pcVar12 != acStack_b40);
      _objc_release(pcVar8);
      _objc_release(pcVar2);
      pcVar7 = pcVar1;
      __Unwind_Resume();
      pcVar4 = acStack_be0;
      pcStack_b68 = FUN_1056efbf4;
      lStack_ba8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar3;
      pcVar5 = pcVar10;
      pcStack_ba0 = pcVar6;
      pcStack_b98 = pcVar12;
      pcStack_b90 = acStack_b40;
      pcStack_b88 = pcVar1;
      pcStack_b80 = pcVar8;
      pcStack_b78 = pcVar2;
      ppppuStack_b70 = &ppppuStack_ab0;
      _objc_retain(pcVar3);
      plVar14 = (long *)0x0;
      pcVar1 = acStack_b40;
      if (pcVar7 != (char *)0x0) {
        plVar14 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        pcVar12 = (char *)auStack_bc0;
        func_0x00010002b838(auStack_bc0,pcVar1);
        acStack_be0[0] = '\0';
        acStack_be0[1] = '\0';
        acStack_be0[2] = '\0';
        acStack_be0[3] = '\0';
        acStack_be0[4] = '\0';
        acStack_be0[5] = '\0';
        acStack_be0[6] = '\0';
        acStack_be0[7] = '\0';
        acStack_be0[8] = '\0';
        acStack_be0[9] = '\0';
        acStack_be0[10] = '\0';
        acStack_be0[0xb] = '\0';
        acStack_be0[0xc] = '\0';
        acStack_be0[0xd] = '\0';
        acStack_be0[0xe] = '\0';
        acStack_be0[0xf] = '\0';
        acStack_be0[0x10] = '\0';
        acStack_be0[0x11] = '\0';
        acStack_be0[0x12] = '\0';
        acStack_be0[0x13] = '\0';
        acStack_be0[0x14] = '\0';
        acStack_be0[0x15] = '\0';
        acStack_be0[0x16] = '\0';
        acStack_be0[0x17] = '\0';
        func_0x00010007e1e8(acStack_be0,auStack_bc0,&lStack_ba8,1);
        pcVar9 = "\x01";
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab80,acStack_be0,pcVar10);
        puStack_bc8 = acStack_be0;
        func_0x00010007e5dc(&puStack_bc8);
        pcVar5 = pcVar4;
        pcVar1 = acStack_be0;
        if (cStack_ba9 < '\0') {
          __ZdlPv(auStack_bc0[0]);
          pcVar5 = pcVar4;
          pcVar1 = acStack_be0;
        }
      }
      pcVar2 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ba8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      pcVar8 = pcVar2;
      __Unwind_Resume();
      pcVar4 = acStack_c60;
      pcStack_be8 = FUN_1056efd68;
      lStack_c28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar9;
      pcVar7 = pcVar5;
      pcStack_c20 = pcVar6;
      pcStack_c18 = pcVar12;
      pcStack_c10 = pcVar1;
      plStack_c08 = plVar14;
      pcStack_c00 = pcVar2;
      pcStack_bf8 = pcVar3;
      ppppuStack_bf0 = &ppppuStack_b70;
      _objc_retain(pcVar9);
      plVar14 = (long *)0x0;
      if (pcVar8 != (char *)0x0) {
        plVar14 = *(long **)(pcVar8 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        pcVar12 = (char *)auStack_c40;
        func_0x00010002b838(auStack_c40,pcVar1);
        acStack_c60[0] = '\0';
        acStack_c60[1] = '\0';
        acStack_c60[2] = '\0';
        acStack_c60[3] = '\0';
        acStack_c60[4] = '\0';
        acStack_c60[5] = '\0';
        acStack_c60[6] = '\0';
        acStack_c60[7] = '\0';
        acStack_c60[8] = '\0';
        acStack_c60[9] = '\0';
        acStack_c60[10] = '\0';
        acStack_c60[0xb] = '\0';
        acStack_c60[0xc] = '\0';
        acStack_c60[0xd] = '\0';
        acStack_c60[0xe] = '\0';
        acStack_c60[0xf] = '\0';
        acStack_c60[0x10] = '\0';
        acStack_c60[0x11] = '\0';
        acStack_c60[0x12] = '\0';
        acStack_c60[0x13] = '\0';
        acStack_c60[0x14] = '\0';
        acStack_c60[0x15] = '\0';
        acStack_c60[0x16] = '\0';
        acStack_c60[0x17] = '\0';
        func_0x00010007e1e8(acStack_c60,auStack_c40,&lStack_c28,1);
        pcVar10 = "\x01";
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aabd0,acStack_c60,pcVar5);
        puStack_c48 = acStack_c60;
        func_0x00010007e5dc(&puStack_c48);
        pcVar7 = pcVar4;
        pcVar1 = acStack_c60;
        if (cStack_c29 < '\0') {
          __ZdlPv(auStack_c40[0]);
          pcVar7 = pcVar4;
          pcVar1 = acStack_c60;
        }
      }
      pcVar3 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c28) {
        ___stack_chk_fail();
        _objc_release(pcVar9);
        _objc_release(pcVar9);
        pcVar8 = pcVar3;
        __Unwind_Resume();
        pcStack_c68 = FUN_1056efedc;
        lStack_ca8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar10;
        pcStack_ca0 = pcVar6;
        pcStack_c98 = pcVar12;
        pcStack_c90 = pcVar1;
        plStack_c88 = plVar14;
        pcStack_c80 = pcVar3;
        pcStack_c78 = pcVar9;
        ppppuStack_c70 = &ppppuStack_bf0;
        _objc_retain(pcVar10);
        if (pcVar8 != (char *)0x0) {
          plVar14 = *(long **)(pcVar8 + 8);
          _objc_retain(pcVar10);
          if (pcVar10 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar10;
            _objc_retainAutorelease(pcVar10);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar10);
          func_0x00010002b838(auStack_cc0,pcVar1);
          uStack_ce0 = 0;
          uStack_cd8 = 0;
          uStack_cd0 = 0;
          func_0x00010007e1e8(&uStack_ce0,auStack_cc0,&lStack_ca8,1);
          pcVar2 = "\x01";
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aac20,&uStack_ce0,pcVar7);
          puStack_cc8 = (undefined1 *)&uStack_ce0;
          func_0x00010007e5dc(&puStack_cc8);
          if (cStack_ca9 < '\0') {
            __ZdlPv(auStack_cc0[0]);
          }
        }
        pcVar1 = pcVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ca8) {
          ___stack_chk_fail();
          _objc_release(pcVar10);
          _objc_release(pcVar10);
          pcVar3 = pcVar1;
          __Unwind_Resume();
          puStack_d08 = (undefined1 *)&uStack_d20;
          pcStack_ce8 = FUN_1056f0050;
          if (pcVar3 != (char *)0x0) {
            uStack_d20 = 0;
            uStack_d18 = 0;
            uStack_d10 = 0;
            pcStack_d00 = pcVar1;
            pcStack_cf8 = pcVar10;
            ppppuStack_cf0 = &ppppuStack_c70;
            (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                      (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_d20,pcVar2);
            func_0x00010007e5dc(&puStack_d08);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ed660; end: 1056ed7f7;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ed660(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x24;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined1 *puStack_c88;
  char *pcStack_c80;
  char *pcStack_c78;
  undefined8 ****ppppuStack_c70;
  code *pcStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined1 *puStack_c48;
  undefined8 auStack_c40 [2];
  char cStack_c29;
  long lStack_c28;
  char *pcStack_c20;
  char *pcStack_c18;
  char *pcStack_c10;
  long *plStack_c08;
  char *pcStack_c00;
  char *pcStack_bf8;
  undefined8 ****ppppuStack_bf0;
  code *pcStack_be8;
  char acStack_be0 [24];
  undefined1 *puStack_bc8;
  undefined8 auStack_bc0 [2];
  char cStack_ba9;
  long lStack_ba8;
  char *pcStack_ba0;
  char *pcStack_b98;
  char *pcStack_b90;
  long *plStack_b88;
  char *pcStack_b80;
  char *pcStack_b78;
  undefined8 ****ppppuStack_b70;
  code *pcStack_b68;
  char acStack_b60 [24];
  undefined1 *puStack_b48;
  undefined8 auStack_b40 [2];
  char cStack_b29;
  long lStack_b28;
  char *pcStack_b20;
  char *pcStack_b18;
  char *pcStack_b10;
  char *pcStack_b08;
  char *pcStack_b00;
  char *pcStack_af8;
  undefined8 ****ppppuStack_af0;
  code *pcStack_ae8;
  char acStack_ae0 [24];
  undefined1 *puStack_ac8;
  char acStack_ac0 [24];
  undefined1 auStack_aa8 [24];
  undefined8 auStack_a90 [2];
  char cStack_a79;
  long lStack_a78;
  undefined8 ****ppppuStack_a30;
  code *pcStack_a28;
  char acStack_a20 [24];
  undefined1 *puStack_a08;
  char acStack_a00 [24];
  undefined1 auStack_9e8 [24];
  undefined8 auStack_9d0 [2];
  char cStack_9b9;
  long lStack_9b8;
  undefined8 ****ppppuStack_970;
  code *pcStack_968;
  char acStack_960 [24];
  undefined1 *puStack_948;
  char acStack_940 [24];
  undefined1 auStack_928 [24];
  undefined8 auStack_910 [2];
  char cStack_8f9;
  long lStack_8f8;
  undefined8 ****ppppuStack_8b0;
  code *pcStack_8a8;
  char acStack_8a0 [24];
  undefined1 *puStack_888;
  char acStack_880 [24];
  undefined1 auStack_868 [24];
  undefined8 auStack_850 [2];
  char cStack_839;
  long lStack_838;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  char acStack_7e0 [24];
  undefined1 *puStack_7c8;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  undefined8 *puStack_790;
  char *pcStack_788;
  char *pcStack_780;
  char *pcStack_778;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  char acStack_758 [24];
  char *pcStack_740;
  undefined8 auStack_738 [2];
  char cStack_721;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  undefined8 *puStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  undefined8 ****ppppuStack_6d0;
  code *pcStack_6c8;
  char acStack_6b8 [24];
  char *pcStack_6a0;
  undefined8 auStack_698 [2];
  char cStack_681;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  char *pcStack_660;
  char *pcStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_620 [24];
  undefined1 *puStack_608;
  char acStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  char acStack_558 [24];
  char *pcStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  char *pcStack_4f0;
  char *pcStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  char acStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  char acStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
      param_4 = (char *)((long)param_3 * 10);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_68 = acStack_80;
      func_0x00010007e5dc(&puStack_68);
      pcVar4 = pcVar3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        pcVar4 = pcVar3;
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar13 = acStack_100;
  pcStack_88 = FUN_1056ed7f8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar11 = pcVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_e0,pcVar3);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar7 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar11 = pcVar13;
    param_4 = pcVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar11 = pcVar13;
      param_4 = pcVar4;
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar10 = acStack_1c0;
  pcStack_108 = FUN_1056ed96c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar11;
  pcVar13 = param_4;
  pcVar9 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar7);
  _objc_retain(pcVar11);
  _objc_retain(param_4);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_1a0,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_188,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_170,pcVar2);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,acStack_1a0,&lStack_158,3);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar15 = 0;
    pcVar3 = pcVar10;
    pcVar13 = param_5;
    do {
      if ((&cStack_159)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_1c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar11);
  pcVar4 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_1a0);
  _objc_release(param_4);
  _objc_release(pcVar11);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar6 = acStack_280;
  pcStack_1c8 = FUN_1056edc2c;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar11 = pcVar3;
  pcVar10 = pcVar13;
  pcVar8 = pcVar9;
  pppuStack_1d0 = &ppuStack_110;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  _objc_retain(pcVar13);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_260,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar4 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_248,pcVar4);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar4 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_230,pcVar4);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x00010007e1e8(acStack_280,acStack_260,&lStack_218,3);
    pcVar7 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_268 = acStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar15 = 0;
    pcVar11 = pcVar6;
    pcVar10 = pcVar9;
    do {
      if ((&cStack_219)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_280;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_260);
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar6 = acStack_340;
  pcStack_288 = FUN_1056edeec;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar11;
  pcVar13 = pcVar10;
  pcVar9 = pcVar8;
  ppppuStack_290 = &pppuStack_1d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar11);
  _objc_retain(pcVar10);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_320,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_308,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_2f0,pcVar2);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,acStack_320,&lStack_2d8,3);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar15 = 0;
    pcVar3 = pcVar6;
    pcVar13 = pcVar8;
    do {
      if ((&cStack_2d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_340;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar11);
  pcVar4 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_320);
  _objc_release(pcVar10);
  _objc_release(pcVar11);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar6 = acStack_400;
  pcStack_348 = FUN_1056ee1ac;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar11 = pcVar3;
  pcVar10 = pcVar13;
  pcVar8 = pcVar9;
  ppppuStack_350 = &ppppuStack_290;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  _objc_retain(pcVar13);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_3e0,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar4 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_3c8,pcVar4);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar4 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_3b0,pcVar4);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x00010007e1e8(acStack_400,acStack_3e0,&lStack_398,3);
    pcVar7 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_3e8 = acStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar15 = 0;
    pcVar11 = pcVar6;
    pcVar10 = pcVar9;
    do {
      if ((&cStack_399)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_400;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_3e0);
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar6 = acStack_4c0;
  pcStack_408 = FUN_1056ee46c;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar11;
  pcVar13 = pcVar10;
  pcVar9 = pcVar8;
  ppppuStack_410 = &ppppuStack_350;
  _objc_retain(pcVar7);
  _objc_retain(pcVar11);
  _objc_retain(pcVar10);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_4a0,pcVar2);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar2 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_488,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar2 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_470,pcVar2);
      acStack_4c0[0] = '\0';
      acStack_4c0[1] = '\0';
      acStack_4c0[2] = '\0';
      acStack_4c0[3] = '\0';
      acStack_4c0[4] = '\0';
      acStack_4c0[5] = '\0';
      acStack_4c0[6] = '\0';
      acStack_4c0[7] = '\0';
      acStack_4c0[8] = '\0';
      acStack_4c0[9] = '\0';
      acStack_4c0[10] = '\0';
      acStack_4c0[0xb] = '\0';
      acStack_4c0[0xc] = '\0';
      acStack_4c0[0xd] = '\0';
      acStack_4c0[0xe] = '\0';
      acStack_4c0[0xf] = '\0';
      acStack_4c0[0x10] = '\0';
      acStack_4c0[0x11] = '\0';
      acStack_4c0[0x12] = '\0';
      acStack_4c0[0x13] = '\0';
      acStack_4c0[0x14] = '\0';
      acStack_4c0[0x15] = '\0';
      acStack_4c0[0x16] = '\0';
      acStack_4c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4c0,acStack_4a0,&lStack_458,3);
      pcVar13 = (char *)((long)pcVar8 * 10);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_4a8 = acStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      lVar15 = 0;
      pcVar3 = pcVar6;
      do {
        if ((&cStack_459)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = acStack_4c0;
      } while (lVar15 != -0x48);
    }
  }
  _objc_release(pcVar10);
  _objc_release(pcVar11);
  pcVar4 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_4f8 = acStack_4a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_4f8);
  _objc_release(pcVar10);
  _objc_release(pcVar11);
  _objc_release(pcVar7);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_4c8 = FUN_1056ee750;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar6 = pcVar3;
  pcVar12 = pcVar13;
  pcStack_500 = unaff_x24;
  pcStack_4f0 = pcVar4;
  pcStack_4e8 = pcVar10;
  pcStack_4e0 = pcVar11;
  pcStack_4d8 = pcVar7;
  ppppuStack_4d0 = &ppppuStack_410;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar1 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_538;
    func_0x00010002b838(auStack_538,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar4 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_520,pcVar4);
    acStack_558[0] = '\0';
    acStack_558[1] = '\0';
    acStack_558[2] = '\0';
    acStack_558[3] = '\0';
    acStack_558[4] = '\0';
    acStack_558[5] = '\0';
    acStack_558[6] = '\0';
    acStack_558[7] = '\0';
    acStack_558[8] = '\0';
    acStack_558[9] = '\0';
    acStack_558[10] = '\0';
    acStack_558[0xb] = '\0';
    acStack_558[0xc] = '\0';
    acStack_558[0xd] = '\0';
    acStack_558[0xe] = '\0';
    acStack_558[0xf] = '\0';
    acStack_558[0x10] = '\0';
    acStack_558[0x11] = '\0';
    acStack_558[0x12] = '\0';
    acStack_558[0x13] = '\0';
    acStack_558[0x14] = '\0';
    acStack_558[0x15] = '\0';
    acStack_558[0x16] = '\0';
    acStack_558[0x17] = '\0';
    func_0x00010007e1e8(acStack_558,auStack_538,&lStack_508,2);
    pcVar8 = "";
    pcVar6 = acStack_558;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_540 = acStack_558;
    func_0x00010007e5dc(&pcStack_540);
    lVar15 = 0;
    pcVar12 = pcVar13;
    do {
      if ((&cStack_509)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar13 = acStack_620;
  pcStack_568 = FUN_1056ee980;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar3 = pcVar6;
  pcVar7 = pcVar12;
  pcVar11 = pcVar9;
  ppppuStack_570 = &ppppuStack_4d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  _objc_retain(pcVar12);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(acStack_600,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_5e8,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_5d0,pcVar2);
    acStack_620[0] = '\0';
    acStack_620[1] = '\0';
    acStack_620[2] = '\0';
    acStack_620[3] = '\0';
    acStack_620[4] = '\0';
    acStack_620[5] = '\0';
    acStack_620[6] = '\0';
    acStack_620[7] = '\0';
    acStack_620[8] = '\0';
    acStack_620[9] = '\0';
    acStack_620[10] = '\0';
    acStack_620[0xb] = '\0';
    acStack_620[0xc] = '\0';
    acStack_620[0xd] = '\0';
    acStack_620[0xe] = '\0';
    acStack_620[0xf] = '\0';
    acStack_620[0x10] = '\0';
    acStack_620[0x11] = '\0';
    acStack_620[0x12] = '\0';
    acStack_620[0x13] = '\0';
    acStack_620[0x14] = '\0';
    acStack_620[0x15] = '\0';
    acStack_620[0x16] = '\0';
    acStack_620[0x17] = '\0';
    func_0x00010007e1e8(acStack_620,acStack_600,&lStack_5b8,3);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_608 = acStack_620;
    func_0x00010007e5dc(&puStack_608);
    lVar15 = 0;
    pcVar3 = pcVar13;
    pcVar7 = pcVar9;
    do {
      if ((&cStack_5b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_620;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  pcVar4 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcVar13 = acStack_600;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_628 = FUN_1056eec40;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar10 = pcVar3;
  pcVar14 = pcVar7;
  pcStack_660 = unaff_x24;
  pcStack_658 = pcVar13;
  pcStack_650 = pcVar4;
  pcStack_648 = pcVar12;
  pcStack_640 = pcVar6;
  pcStack_638 = pcVar8;
  ppppuStack_630 = &ppppuStack_570;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  puVar16 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar1 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_698;
    func_0x00010002b838(auStack_698,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar4 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_680,pcVar4);
    acStack_6b8[0] = '\0';
    acStack_6b8[1] = '\0';
    acStack_6b8[2] = '\0';
    acStack_6b8[3] = '\0';
    acStack_6b8[4] = '\0';
    acStack_6b8[5] = '\0';
    acStack_6b8[6] = '\0';
    acStack_6b8[7] = '\0';
    acStack_6b8[8] = '\0';
    acStack_6b8[9] = '\0';
    acStack_6b8[10] = '\0';
    acStack_6b8[0xb] = '\0';
    acStack_6b8[0xc] = '\0';
    acStack_6b8[0xd] = '\0';
    acStack_6b8[0xe] = '\0';
    acStack_6b8[0xf] = '\0';
    acStack_6b8[0x10] = '\0';
    acStack_6b8[0x11] = '\0';
    acStack_6b8[0x12] = '\0';
    acStack_6b8[0x13] = '\0';
    acStack_6b8[0x14] = '\0';
    acStack_6b8[0x15] = '\0';
    acStack_6b8[0x16] = '\0';
    acStack_6b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_6b8,auStack_698,&lStack_668,2);
    pcVar9 = "\x01";
    pcVar13 = acStack_6b8;
    pcVar10 = acStack_6b8;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_6a0 = pcVar13;
    func_0x00010007e5dc(&pcStack_6a0);
    lVar15 = 0;
    puVar16 = auStack_698;
    pcVar14 = pcVar7;
    do {
      if ((&cStack_669)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_681 < '\0') {
    __ZdlPv(auStack_698[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar6 = pcVar4;
  __Unwind_Resume();
  pcStack_6c8 = FUN_1056eee70;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar9;
  pcVar8 = pcVar10;
  pcVar5 = pcVar14;
  pcStack_700 = unaff_x24;
  pcStack_6f8 = pcVar13;
  puStack_6f0 = puVar16;
  pcStack_6e8 = pcVar4;
  pcStack_6e0 = pcVar3;
  pcStack_6d8 = pcVar2;
  ppppuStack_6d0 = &ppppuStack_630;
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  puVar16 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar1 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = (char *)auStack_738;
    func_0x00010002b838(auStack_738,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_720,pcVar2);
    acStack_758[0] = '\0';
    acStack_758[1] = '\0';
    acStack_758[2] = '\0';
    acStack_758[3] = '\0';
    acStack_758[4] = '\0';
    acStack_758[5] = '\0';
    acStack_758[6] = '\0';
    acStack_758[7] = '\0';
    acStack_758[8] = '\0';
    acStack_758[9] = '\0';
    acStack_758[10] = '\0';
    acStack_758[0xb] = '\0';
    acStack_758[0xc] = '\0';
    acStack_758[0xd] = '\0';
    acStack_758[0xe] = '\0';
    acStack_758[0xf] = '\0';
    acStack_758[0x10] = '\0';
    acStack_758[0x11] = '\0';
    acStack_758[0x12] = '\0';
    acStack_758[0x13] = '\0';
    acStack_758[0x14] = '\0';
    acStack_758[0x15] = '\0';
    acStack_758[0x16] = '\0';
    acStack_758[0x17] = '\0';
    func_0x00010007e1e8(acStack_758,auStack_738,&lStack_708,2);
    pcVar7 = "";
    pcVar13 = acStack_758;
    pcVar8 = acStack_758;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_740 = pcVar13;
    func_0x00010007e5dc(&pcStack_740);
    lVar15 = 0;
    puVar16 = auStack_738;
    pcVar5 = pcVar14;
    do {
      if ((&cStack_709)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_721 < '\0') {
    __ZdlPv(auStack_738[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar12 = acStack_7e0;
  pcStack_768 = FUN_1056ef0a0;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar7;
  pcVar6 = pcVar8;
  pcStack_7a0 = unaff_x24;
  pcStack_798 = pcVar13;
  puStack_790 = puVar16;
  pcStack_788 = pcVar2;
  pcStack_780 = pcVar10;
  pcStack_778 = pcVar9;
  ppppuStack_770 = &ppppuStack_6d0;
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    pcVar13 = (char *)auStack_7c0;
    func_0x00010002b838(auStack_7c0,pcVar2);
    acStack_7e0[0] = '\0';
    acStack_7e0[1] = '\0';
    acStack_7e0[2] = '\0';
    acStack_7e0[3] = '\0';
    acStack_7e0[4] = '\0';
    acStack_7e0[5] = '\0';
    acStack_7e0[6] = '\0';
    acStack_7e0[7] = '\0';
    acStack_7e0[8] = '\0';
    acStack_7e0[9] = '\0';
    acStack_7e0[10] = '\0';
    acStack_7e0[0xb] = '\0';
    acStack_7e0[0xc] = '\0';
    acStack_7e0[0xd] = '\0';
    acStack_7e0[0xe] = '\0';
    acStack_7e0[0xf] = '\0';
    acStack_7e0[0x10] = '\0';
    acStack_7e0[0x11] = '\0';
    acStack_7e0[0x12] = '\0';
    acStack_7e0[0x13] = '\0';
    acStack_7e0[0x14] = '\0';
    acStack_7e0[0x15] = '\0';
    acStack_7e0[0x16] = '\0';
    acStack_7e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_7e0,auStack_7c0,&lStack_7a8,1);
    pcVar4 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_7c8 = acStack_7e0;
    func_0x00010007e5dc(&puStack_7c8);
    pcVar6 = pcVar12;
    pcVar5 = pcVar8;
    if (cStack_7a9 < '\0') {
      __ZdlPv(auStack_7c0[0]);
      pcVar6 = pcVar12;
      pcVar5 = pcVar8;
    }
  }
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar8 = acStack_8a0;
  pcStack_7e8 = FUN_1056ef214;
  lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar4;
  pcVar7 = pcVar6;
  pcVar9 = pcVar5;
  pcVar10 = pcVar11;
  ppppuStack_7f0 = &ppppuStack_770;
  _objc_retain(pcVar4);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(acStack_880,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_868,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_850,pcVar2);
    acStack_8a0[0] = '\0';
    acStack_8a0[1] = '\0';
    acStack_8a0[2] = '\0';
    acStack_8a0[3] = '\0';
    acStack_8a0[4] = '\0';
    acStack_8a0[5] = '\0';
    acStack_8a0[6] = '\0';
    acStack_8a0[7] = '\0';
    acStack_8a0[8] = '\0';
    acStack_8a0[9] = '\0';
    acStack_8a0[10] = '\0';
    acStack_8a0[0xb] = '\0';
    acStack_8a0[0xc] = '\0';
    acStack_8a0[0xd] = '\0';
    acStack_8a0[0xe] = '\0';
    acStack_8a0[0xf] = '\0';
    acStack_8a0[0x10] = '\0';
    acStack_8a0[0x11] = '\0';
    acStack_8a0[0x12] = '\0';
    acStack_8a0[0x13] = '\0';
    acStack_8a0[0x14] = '\0';
    acStack_8a0[0x15] = '\0';
    acStack_8a0[0x16] = '\0';
    acStack_8a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_8a0,acStack_880,&lStack_838,3);
    pcVar3 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_888 = acStack_8a0;
    func_0x00010007e5dc(&puStack_888);
    lVar15 = 0;
    pcVar7 = pcVar8;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_839)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_850 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar13 = acStack_8a0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_838) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    pcVar13 = pcVar13 + -0x18;
  } while (pcVar13 != acStack_880);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar5 = acStack_960;
  pcStack_8a8 = FUN_1056ef48c;
  lStack_8f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar3;
  pcVar11 = pcVar7;
  pcVar8 = pcVar9;
  pcVar6 = pcVar10;
  ppppuStack_8b0 = &ppppuStack_7f0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(acStack_940,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar7 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_928,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_910,pcVar2);
    acStack_960[0] = '\0';
    acStack_960[1] = '\0';
    acStack_960[2] = '\0';
    acStack_960[3] = '\0';
    acStack_960[4] = '\0';
    acStack_960[5] = '\0';
    acStack_960[6] = '\0';
    acStack_960[7] = '\0';
    acStack_960[8] = '\0';
    acStack_960[9] = '\0';
    acStack_960[10] = '\0';
    acStack_960[0xb] = '\0';
    acStack_960[0xc] = '\0';
    acStack_960[0xd] = '\0';
    acStack_960[0xe] = '\0';
    acStack_960[0xf] = '\0';
    acStack_960[0x10] = '\0';
    acStack_960[0x11] = '\0';
    acStack_960[0x12] = '\0';
    acStack_960[0x13] = '\0';
    acStack_960[0x14] = '\0';
    acStack_960[0x15] = '\0';
    acStack_960[0x16] = '\0';
    acStack_960[0x17] = '\0';
    func_0x00010007e1e8(acStack_960,acStack_940,&lStack_8f8,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_948 = acStack_960;
    func_0x00010007e5dc(&puStack_948);
    lVar15 = 0;
    pcVar11 = pcVar5;
    pcVar8 = pcVar10;
    do {
      if ((&cStack_8f9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_910 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar13 = acStack_960;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    pcVar13 = pcVar13 + -0x18;
  } while (pcVar13 != acStack_940);
  _objc_release(pcVar9);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcVar5 = acStack_a20;
  pcStack_968 = FUN_1056ef704;
  lStack_9b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar4;
  pcVar7 = pcVar11;
  pcVar9 = pcVar8;
  pcVar10 = pcVar6;
  ppppuStack_970 = &ppppuStack_8b0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(acStack_a00,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar11 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_9e8,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_9d0,pcVar2);
    acStack_a20[0] = '\0';
    acStack_a20[1] = '\0';
    acStack_a20[2] = '\0';
    acStack_a20[3] = '\0';
    acStack_a20[4] = '\0';
    acStack_a20[5] = '\0';
    acStack_a20[6] = '\0';
    acStack_a20[7] = '\0';
    acStack_a20[8] = '\0';
    acStack_a20[9] = '\0';
    acStack_a20[10] = '\0';
    acStack_a20[0xb] = '\0';
    acStack_a20[0xc] = '\0';
    acStack_a20[0xd] = '\0';
    acStack_a20[0xe] = '\0';
    acStack_a20[0xf] = '\0';
    acStack_a20[0x10] = '\0';
    acStack_a20[0x11] = '\0';
    acStack_a20[0x12] = '\0';
    acStack_a20[0x13] = '\0';
    acStack_a20[0x14] = '\0';
    acStack_a20[0x15] = '\0';
    acStack_a20[0x16] = '\0';
    acStack_a20[0x17] = '\0';
    func_0x00010007e1e8(acStack_a20,acStack_a00,&lStack_9b8,3);
    pcVar3 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_a08 = acStack_a20;
    func_0x00010007e5dc(&puStack_a08);
    lVar15 = 0;
    pcVar7 = pcVar5;
    pcVar9 = pcVar6;
    do {
      if ((&cStack_9b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_9d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar13 = acStack_a20;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  do {
    pcVar13 = pcVar13 + -0x18;
  } while (pcVar13 != acStack_a00);
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar8 = acStack_ae0;
  pcStack_a28 = FUN_1056ef97c;
  lStack_a78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar3;
  pcVar11 = pcVar7;
  ppppuStack_a30 = &ppppuStack_970;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(acStack_ac0,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar7 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_aa8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar7 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_a90,pcVar7);
    acStack_ae0[0] = '\0';
    acStack_ae0[1] = '\0';
    acStack_ae0[2] = '\0';
    acStack_ae0[3] = '\0';
    acStack_ae0[4] = '\0';
    acStack_ae0[5] = '\0';
    acStack_ae0[6] = '\0';
    acStack_ae0[7] = '\0';
    acStack_ae0[8] = '\0';
    acStack_ae0[9] = '\0';
    acStack_ae0[10] = '\0';
    acStack_ae0[0xb] = '\0';
    acStack_ae0[0xc] = '\0';
    acStack_ae0[0xd] = '\0';
    acStack_ae0[0xe] = '\0';
    acStack_ae0[0xf] = '\0';
    acStack_ae0[0x10] = '\0';
    acStack_ae0[0x11] = '\0';
    acStack_ae0[0x12] = '\0';
    acStack_ae0[0x13] = '\0';
    acStack_ae0[0x14] = '\0';
    acStack_ae0[0x15] = '\0';
    acStack_ae0[0x16] = '\0';
    acStack_ae0[0x17] = '\0';
    func_0x00010007e1e8(acStack_ae0,acStack_ac0,&lStack_a78,3);
    pcVar4 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aab30,acStack_ae0,pcVar10);
    puStack_ac8 = acStack_ae0;
    func_0x00010007e5dc(&puStack_ac8);
    lVar15 = 0;
    pcVar11 = pcVar8;
    do {
      if ((&cStack_a79)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a90 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar13 = acStack_ae0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a78) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_ac0);
    _objc_release(pcVar9);
    _objc_release(pcVar3);
    pcVar8 = pcVar2;
    __Unwind_Resume();
    pcVar5 = acStack_b60;
    pcStack_ae8 = FUN_1056efbf4;
    lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar10 = pcVar4;
    pcVar6 = pcVar11;
    pcStack_b20 = pcVar7;
    pcStack_b18 = pcVar13;
    pcStack_b10 = acStack_ac0;
    pcStack_b08 = pcVar2;
    pcStack_b00 = pcVar9;
    pcStack_af8 = pcVar3;
    ppppuStack_af0 = &ppppuStack_a30;
    _objc_retain(pcVar4);
    plVar1 = (long *)0x0;
    pcVar2 = acStack_ac0;
    if (pcVar8 != (char *)0x0) {
      plVar1 = *(long **)(pcVar8 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      pcVar13 = (char *)auStack_b40;
      func_0x00010002b838(auStack_b40,pcVar2);
      acStack_b60[0] = '\0';
      acStack_b60[1] = '\0';
      acStack_b60[2] = '\0';
      acStack_b60[3] = '\0';
      acStack_b60[4] = '\0';
      acStack_b60[5] = '\0';
      acStack_b60[6] = '\0';
      acStack_b60[7] = '\0';
      acStack_b60[8] = '\0';
      acStack_b60[9] = '\0';
      acStack_b60[10] = '\0';
      acStack_b60[0xb] = '\0';
      acStack_b60[0xc] = '\0';
      acStack_b60[0xd] = '\0';
      acStack_b60[0xe] = '\0';
      acStack_b60[0xf] = '\0';
      acStack_b60[0x10] = '\0';
      acStack_b60[0x11] = '\0';
      acStack_b60[0x12] = '\0';
      acStack_b60[0x13] = '\0';
      acStack_b60[0x14] = '\0';
      acStack_b60[0x15] = '\0';
      acStack_b60[0x16] = '\0';
      acStack_b60[0x17] = '\0';
      func_0x00010007e1e8(acStack_b60,auStack_b40,&lStack_b28,1);
      pcVar10 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aab80,acStack_b60,pcVar11);
      puStack_b48 = acStack_b60;
      func_0x00010007e5dc(&puStack_b48);
      pcVar6 = pcVar5;
      pcVar2 = acStack_b60;
      if (cStack_b29 < '\0') {
        __ZdlPv(auStack_b40[0]);
        pcVar6 = pcVar5;
        pcVar2 = acStack_b60;
      }
    }
    pcVar3 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    _objc_release(pcVar4);
    pcVar9 = pcVar3;
    __Unwind_Resume();
    pcVar5 = acStack_be0;
    pcStack_b68 = FUN_1056efd68;
    lStack_ba8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar11 = pcVar10;
    pcVar8 = pcVar6;
    pcStack_ba0 = pcVar7;
    pcStack_b98 = pcVar13;
    pcStack_b90 = pcVar2;
    plStack_b88 = plVar1;
    pcStack_b80 = pcVar3;
    pcStack_b78 = pcVar4;
    ppppuStack_b70 = &ppppuStack_af0;
    _objc_retain(pcVar10);
    plVar1 = (long *)0x0;
    if (pcVar9 != (char *)0x0) {
      plVar1 = *(long **)(pcVar9 + 8);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar10;
        _objc_retainAutorelease(pcVar10);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      pcVar13 = (char *)auStack_bc0;
      func_0x00010002b838(auStack_bc0,pcVar2);
      acStack_be0[0] = '\0';
      acStack_be0[1] = '\0';
      acStack_be0[2] = '\0';
      acStack_be0[3] = '\0';
      acStack_be0[4] = '\0';
      acStack_be0[5] = '\0';
      acStack_be0[6] = '\0';
      acStack_be0[7] = '\0';
      acStack_be0[8] = '\0';
      acStack_be0[9] = '\0';
      acStack_be0[10] = '\0';
      acStack_be0[0xb] = '\0';
      acStack_be0[0xc] = '\0';
      acStack_be0[0xd] = '\0';
      acStack_be0[0xe] = '\0';
      acStack_be0[0xf] = '\0';
      acStack_be0[0x10] = '\0';
      acStack_be0[0x11] = '\0';
      acStack_be0[0x12] = '\0';
      acStack_be0[0x13] = '\0';
      acStack_be0[0x14] = '\0';
      acStack_be0[0x15] = '\0';
      acStack_be0[0x16] = '\0';
      acStack_be0[0x17] = '\0';
      func_0x00010007e1e8(acStack_be0,auStack_bc0,&lStack_ba8,1);
      pcVar11 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aabd0,acStack_be0,pcVar6);
      puStack_bc8 = acStack_be0;
      func_0x00010007e5dc(&puStack_bc8);
      pcVar8 = pcVar5;
      pcVar2 = acStack_be0;
      if (cStack_ba9 < '\0') {
        __ZdlPv(auStack_bc0[0]);
        pcVar8 = pcVar5;
        pcVar2 = acStack_be0;
      }
    }
    pcVar4 = pcVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ba8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    _objc_release(pcVar10);
    pcVar9 = pcVar4;
    __Unwind_Resume();
    pcStack_be8 = FUN_1056efedc;
    lStack_c28 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar11;
    pcStack_c20 = pcVar7;
    pcStack_c18 = pcVar13;
    pcStack_c10 = pcVar2;
    plStack_c08 = plVar1;
    pcStack_c00 = pcVar4;
    pcStack_bf8 = pcVar10;
    ppppuStack_bf0 = &ppppuStack_b70;
    _objc_retain(pcVar11);
    if (pcVar9 != (char *)0x0) {
      plVar1 = *(long **)(pcVar9 + 8);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar11;
        _objc_retainAutorelease(pcVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_c40,pcVar2);
      uStack_c60 = 0;
      uStack_c58 = 0;
      uStack_c50 = 0;
      func_0x00010007e1e8(&uStack_c60,auStack_c40,&lStack_c28,1);
      pcVar3 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aac20,&uStack_c60,pcVar8);
      puStack_c48 = (undefined1 *)&uStack_c60;
      func_0x00010007e5dc(&puStack_c48);
      if (cStack_c29 < '\0') {
        __ZdlPv(auStack_c40[0]);
      }
    }
    pcVar2 = pcVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c28) {
      ___stack_chk_fail();
      _objc_release(pcVar11);
      _objc_release(pcVar11);
      pcVar4 = pcVar2;
      __Unwind_Resume();
      puStack_c88 = (undefined1 *)&uStack_ca0;
      pcStack_c68 = FUN_1056f0050;
      if (pcVar4 != (char *)0x0) {
        uStack_ca0 = 0;
        uStack_c98 = 0;
        uStack_c90 = 0;
        pcStack_c80 = pcVar2;
        pcStack_c78 = pcVar11;
        ppppuStack_c70 = &ppppuStack_bf0;
        (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                  (*(long **)(pcVar4 + 8),&UNK_1108aac70,&uStack_ca0,pcVar3);
        func_0x00010007e5dc(&puStack_c88);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ed7f8; end: 1056ed96b;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ed7f8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x24;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined1 *puStack_c08;
  char *pcStack_c00;
  char *pcStack_bf8;
  undefined8 ****ppppuStack_bf0;
  code *pcStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined1 *puStack_bc8;
  undefined8 auStack_bc0 [2];
  char cStack_ba9;
  long lStack_ba8;
  char *pcStack_ba0;
  char *pcStack_b98;
  char *pcStack_b90;
  long *plStack_b88;
  char *pcStack_b80;
  char *pcStack_b78;
  undefined8 ****ppppuStack_b70;
  code *pcStack_b68;
  char acStack_b60 [24];
  undefined1 *puStack_b48;
  undefined8 auStack_b40 [2];
  char cStack_b29;
  long lStack_b28;
  char *pcStack_b20;
  char *pcStack_b18;
  char *pcStack_b10;
  long *plStack_b08;
  char *pcStack_b00;
  char *pcStack_af8;
  undefined8 ****ppppuStack_af0;
  code *pcStack_ae8;
  char acStack_ae0 [24];
  undefined1 *puStack_ac8;
  undefined8 auStack_ac0 [2];
  char cStack_aa9;
  long lStack_aa8;
  char *pcStack_aa0;
  char *pcStack_a98;
  char *pcStack_a90;
  char *pcStack_a88;
  char *pcStack_a80;
  char *pcStack_a78;
  undefined8 ****ppppuStack_a70;
  code *pcStack_a68;
  char acStack_a60 [24];
  undefined1 *puStack_a48;
  char acStack_a40 [24];
  undefined1 auStack_a28 [24];
  undefined8 auStack_a10 [2];
  char cStack_9f9;
  long lStack_9f8;
  undefined8 ****ppppuStack_9b0;
  code *pcStack_9a8;
  char acStack_9a0 [24];
  undefined1 *puStack_988;
  char acStack_980 [24];
  undefined1 auStack_968 [24];
  undefined8 auStack_950 [2];
  char cStack_939;
  long lStack_938;
  undefined8 ****ppppuStack_8f0;
  code *pcStack_8e8;
  char acStack_8e0 [24];
  undefined1 *puStack_8c8;
  char acStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined8 auStack_890 [2];
  char cStack_879;
  long lStack_878;
  undefined8 ****ppppuStack_830;
  code *pcStack_828;
  char acStack_820 [24];
  undefined1 *puStack_808;
  char acStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined8 auStack_7d0 [2];
  char cStack_7b9;
  long lStack_7b8;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  char acStack_760 [24];
  undefined1 *puStack_748;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  char *pcStack_720;
  char *pcStack_718;
  undefined8 *puStack_710;
  char *pcStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6d8 [24];
  char *pcStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  char *pcStack_680;
  char *pcStack_678;
  undefined8 *puStack_670;
  char *pcStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  char acStack_638 [24];
  char *pcStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_5a0 [24];
  undefined1 *puStack_588;
  char acStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4d8 [24];
  char *pcStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  char *pcStack_480;
  char *pcStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  char acStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  char acStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  char acStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  char acStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar8 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar8 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_140;
  pcStack_88 = FUN_1056ed96c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar10 = pcVar8;
  pcVar12 = param_4;
  pcVar7 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(param_4);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_120,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_108,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,pcVar2);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,acStack_120,&lStack_d8,3);
    pcVar5 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar15 = 0;
    pcVar10 = pcVar9;
    pcVar12 = param_5;
    do {
      if ((&cStack_d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_140;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_120);
  _objc_release(param_4);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar4 = acStack_200;
  pcStack_148 = FUN_1056edc2c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar8 = pcVar10;
  pcVar9 = pcVar12;
  pcVar6 = pcVar7;
  ppuStack_150 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(acStack_1e0,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_1b0,pcVar1);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,acStack_1e0,&lStack_198,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar15 = 0;
    pcVar8 = pcVar4;
    pcVar9 = pcVar7;
    do {
      if ((&cStack_199)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_200;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_1e0);
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar4 = acStack_2c0;
  pcStack_208 = FUN_1056edeec;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar10 = pcVar8;
  pcVar12 = pcVar9;
  pcVar7 = pcVar6;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2a0,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_288,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_270,pcVar2);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,acStack_2a0,&lStack_258,3);
    pcVar5 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar15 = 0;
    pcVar10 = pcVar4;
    pcVar12 = pcVar6;
    do {
      if ((&cStack_259)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_2c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2a0);
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar4 = acStack_380;
  pcStack_2c8 = FUN_1056ee1ac;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar8 = pcVar10;
  pcVar9 = pcVar12;
  pcVar6 = pcVar7;
  ppppuStack_2d0 = &pppuStack_210;
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(acStack_360,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_348,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_330,pcVar1);
    acStack_380[0] = '\0';
    acStack_380[1] = '\0';
    acStack_380[2] = '\0';
    acStack_380[3] = '\0';
    acStack_380[4] = '\0';
    acStack_380[5] = '\0';
    acStack_380[6] = '\0';
    acStack_380[7] = '\0';
    acStack_380[8] = '\0';
    acStack_380[9] = '\0';
    acStack_380[10] = '\0';
    acStack_380[0xb] = '\0';
    acStack_380[0xc] = '\0';
    acStack_380[0xd] = '\0';
    acStack_380[0xe] = '\0';
    acStack_380[0xf] = '\0';
    acStack_380[0x10] = '\0';
    acStack_380[0x11] = '\0';
    acStack_380[0x12] = '\0';
    acStack_380[0x13] = '\0';
    acStack_380[0x14] = '\0';
    acStack_380[0x15] = '\0';
    acStack_380[0x16] = '\0';
    acStack_380[0x17] = '\0';
    func_0x00010007e1e8(acStack_380,acStack_360,&lStack_318,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_368 = acStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar15 = 0;
    pcVar8 = pcVar4;
    pcVar9 = pcVar7;
    do {
      if ((&cStack_319)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_380;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_360);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
    _objc_release(pcVar5);
    __Unwind_Resume();
    pcVar4 = acStack_440;
    pcStack_388 = FUN_1056ee46c;
    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar1;
    pcVar10 = pcVar8;
    pcVar12 = pcVar9;
    pcVar7 = pcVar6;
    ppppuStack_390 = &ppppuStack_2d0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    if (pcVar2 != (char *)0x0) {
      plVar14 = *(long **)(pcVar2 + 8);
      pcVar5 = "";
      (**(code **)(*plVar14 + 0x28))();
      if ((int)plVar14 != 0) {
        plVar14 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(acStack_420,pcVar2);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar2 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_408,pcVar2);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar2 = pcVar9;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_3f0,pcVar2);
        acStack_440[0] = '\0';
        acStack_440[1] = '\0';
        acStack_440[2] = '\0';
        acStack_440[3] = '\0';
        acStack_440[4] = '\0';
        acStack_440[5] = '\0';
        acStack_440[6] = '\0';
        acStack_440[7] = '\0';
        acStack_440[8] = '\0';
        acStack_440[9] = '\0';
        acStack_440[10] = '\0';
        acStack_440[0xb] = '\0';
        acStack_440[0xc] = '\0';
        acStack_440[0xd] = '\0';
        acStack_440[0xe] = '\0';
        acStack_440[0xf] = '\0';
        acStack_440[0x10] = '\0';
        acStack_440[0x11] = '\0';
        acStack_440[0x12] = '\0';
        acStack_440[0x13] = '\0';
        acStack_440[0x14] = '\0';
        acStack_440[0x15] = '\0';
        acStack_440[0x16] = '\0';
        acStack_440[0x17] = '\0';
        func_0x00010007e1e8(acStack_440,acStack_420,&lStack_3d8,3);
        pcVar12 = (char *)((long)pcVar6 * 10);
        pcVar5 = "";
        (**(code **)(*plVar14 + 0x18))(plVar14);
        puStack_428 = acStack_440;
        func_0x00010007e5dc(&puStack_428);
        lVar15 = 0;
        pcVar10 = pcVar4;
        do {
          if ((&cStack_3d9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
          unaff_x24 = acStack_440;
        } while (lVar15 != -0x48);
      }
    }
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    pcStack_478 = acStack_420;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcStack_478);
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_448 = FUN_1056ee750;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar5;
    pcVar4 = pcVar10;
    pcVar11 = pcVar12;
    pcStack_480 = unaff_x24;
    pcStack_470 = pcVar2;
    pcStack_468 = pcVar9;
    pcStack_460 = pcVar8;
    pcStack_458 = pcVar1;
    ppppuStack_450 = &ppppuStack_390;
    _objc_retain(pcVar5);
    _objc_retain(pcVar10);
    if (pcVar3 != (char *)0x0) {
      plVar14 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      unaff_x24 = (char *)auStack_4b8;
      func_0x00010002b838(auStack_4b8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_4a0,pcVar1);
      acStack_4d8[0] = '\0';
      acStack_4d8[1] = '\0';
      acStack_4d8[2] = '\0';
      acStack_4d8[3] = '\0';
      acStack_4d8[4] = '\0';
      acStack_4d8[5] = '\0';
      acStack_4d8[6] = '\0';
      acStack_4d8[7] = '\0';
      acStack_4d8[8] = '\0';
      acStack_4d8[9] = '\0';
      acStack_4d8[10] = '\0';
      acStack_4d8[0xb] = '\0';
      acStack_4d8[0xc] = '\0';
      acStack_4d8[0xd] = '\0';
      acStack_4d8[0xe] = '\0';
      acStack_4d8[0xf] = '\0';
      acStack_4d8[0x10] = '\0';
      acStack_4d8[0x11] = '\0';
      acStack_4d8[0x12] = '\0';
      acStack_4d8[0x13] = '\0';
      acStack_4d8[0x14] = '\0';
      acStack_4d8[0x15] = '\0';
      acStack_4d8[0x16] = '\0';
      acStack_4d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_4d8,auStack_4b8,&lStack_488,2);
      pcVar6 = "";
      pcVar4 = acStack_4d8;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pcStack_4c0 = acStack_4d8;
      func_0x00010007e5dc(&pcStack_4c0);
      lVar15 = 0;
      pcVar11 = pcVar12;
      do {
        if ((&cStack_489)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_4a1 < '\0') {
      __ZdlPv(auStack_4b8[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar5);
    __Unwind_Resume();
    pcVar12 = acStack_5a0;
    pcStack_4e8 = FUN_1056ee980;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar6;
    pcVar2 = pcVar4;
    pcVar5 = pcVar11;
    pcVar10 = pcVar7;
    ppppuStack_4f0 = &ppppuStack_450;
    _objc_retain(pcVar6);
    _objc_retain(pcVar4);
    _objc_retain(pcVar11);
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(acStack_580,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_568,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_550,pcVar1);
      acStack_5a0[0] = '\0';
      acStack_5a0[1] = '\0';
      acStack_5a0[2] = '\0';
      acStack_5a0[3] = '\0';
      acStack_5a0[4] = '\0';
      acStack_5a0[5] = '\0';
      acStack_5a0[6] = '\0';
      acStack_5a0[7] = '\0';
      acStack_5a0[8] = '\0';
      acStack_5a0[9] = '\0';
      acStack_5a0[10] = '\0';
      acStack_5a0[0xb] = '\0';
      acStack_5a0[0xc] = '\0';
      acStack_5a0[0xd] = '\0';
      acStack_5a0[0xe] = '\0';
      acStack_5a0[0xf] = '\0';
      acStack_5a0[0x10] = '\0';
      acStack_5a0[0x11] = '\0';
      acStack_5a0[0x12] = '\0';
      acStack_5a0[0x13] = '\0';
      acStack_5a0[0x14] = '\0';
      acStack_5a0[0x15] = '\0';
      acStack_5a0[0x16] = '\0';
      acStack_5a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_5a0,acStack_580,&lStack_538,3);
      pcVar8 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_588 = acStack_5a0;
      func_0x00010007e5dc(&puStack_588);
      lVar15 = 0;
      pcVar2 = pcVar12;
      pcVar5 = pcVar7;
      do {
        if ((&cStack_539)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = acStack_5a0;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar11);
    _objc_release(pcVar4);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar11);
    pcVar12 = acStack_580;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar12);
    _objc_release(pcVar11);
    _objc_release(pcVar4);
    _objc_release(pcVar6);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcStack_5a8 = FUN_1056eec40;
    lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar8;
    pcVar9 = pcVar2;
    pcVar13 = pcVar5;
    pcStack_5e0 = unaff_x24;
    pcStack_5d8 = pcVar12;
    pcStack_5d0 = pcVar1;
    pcStack_5c8 = pcVar11;
    pcStack_5c0 = pcVar4;
    pcStack_5b8 = pcVar6;
    ppppuStack_5b0 = &ppppuStack_4f0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar2);
    puVar16 = (undefined8 *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar14 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x24 = (char *)auStack_618;
      func_0x00010002b838(auStack_618,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_600,pcVar1);
      acStack_638[0] = '\0';
      acStack_638[1] = '\0';
      acStack_638[2] = '\0';
      acStack_638[3] = '\0';
      acStack_638[4] = '\0';
      acStack_638[5] = '\0';
      acStack_638[6] = '\0';
      acStack_638[7] = '\0';
      acStack_638[8] = '\0';
      acStack_638[9] = '\0';
      acStack_638[10] = '\0';
      acStack_638[0xb] = '\0';
      acStack_638[0xc] = '\0';
      acStack_638[0xd] = '\0';
      acStack_638[0xe] = '\0';
      acStack_638[0xf] = '\0';
      acStack_638[0x10] = '\0';
      acStack_638[0x11] = '\0';
      acStack_638[0x12] = '\0';
      acStack_638[0x13] = '\0';
      acStack_638[0x14] = '\0';
      acStack_638[0x15] = '\0';
      acStack_638[0x16] = '\0';
      acStack_638[0x17] = '\0';
      func_0x00010007e1e8(acStack_638,auStack_618,&lStack_5e8,2);
      pcVar7 = "\x01";
      pcVar12 = acStack_638;
      pcVar9 = acStack_638;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pcStack_620 = pcVar12;
      func_0x00010007e5dc(&pcStack_620);
      lVar15 = 0;
      puVar16 = auStack_618;
      pcVar13 = pcVar5;
      do {
        if ((&cStack_5e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar2);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5e8) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      if (cStack_601 < '\0') {
        __ZdlPv(auStack_618[0]);
      }
      _objc_release(pcVar2);
      _objc_release(pcVar8);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_648 = FUN_1056eee70;
      lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = pcVar7;
      pcVar6 = pcVar9;
      pcVar3 = pcVar13;
      pcStack_680 = unaff_x24;
      pcStack_678 = pcVar12;
      puStack_670 = puVar16;
      pcStack_668 = pcVar1;
      pcStack_660 = pcVar2;
      pcStack_658 = pcVar8;
      ppppuStack_650 = &ppppuStack_5b0;
      _objc_retain(pcVar7);
      _objc_retain(pcVar9);
      puVar16 = (undefined8 *)0x0;
      if (pcVar4 != (char *)0x0) {
        plVar14 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        unaff_x24 = (char *)auStack_6b8;
        func_0x00010002b838(auStack_6b8,pcVar1);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar1 = pcVar9;
          func_0x00010bdc3520(pcVar9);
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_6a0,pcVar1);
        acStack_6d8[0] = '\0';
        acStack_6d8[1] = '\0';
        acStack_6d8[2] = '\0';
        acStack_6d8[3] = '\0';
        acStack_6d8[4] = '\0';
        acStack_6d8[5] = '\0';
        acStack_6d8[6] = '\0';
        acStack_6d8[7] = '\0';
        acStack_6d8[8] = '\0';
        acStack_6d8[9] = '\0';
        acStack_6d8[10] = '\0';
        acStack_6d8[0xb] = '\0';
        acStack_6d8[0xc] = '\0';
        acStack_6d8[0xd] = '\0';
        acStack_6d8[0xe] = '\0';
        acStack_6d8[0xf] = '\0';
        acStack_6d8[0x10] = '\0';
        acStack_6d8[0x11] = '\0';
        acStack_6d8[0x12] = '\0';
        acStack_6d8[0x13] = '\0';
        acStack_6d8[0x14] = '\0';
        acStack_6d8[0x15] = '\0';
        acStack_6d8[0x16] = '\0';
        acStack_6d8[0x17] = '\0';
        func_0x00010007e1e8(acStack_6d8,auStack_6b8,&lStack_688,2);
        pcVar5 = "";
        pcVar12 = acStack_6d8;
        pcVar6 = acStack_6d8;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        pcStack_6c0 = pcVar12;
        func_0x00010007e5dc(&pcStack_6c0);
        lVar15 = 0;
        puVar16 = auStack_6b8;
        pcVar3 = pcVar13;
        do {
          if ((&cStack_689)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(pcVar9);
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_6a1 < '\0') {
        __ZdlPv(auStack_6b8[0]);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar7);
      pcVar2 = pcVar1;
      __Unwind_Resume();
      pcVar11 = acStack_760;
      pcStack_6e8 = FUN_1056ef0a0;
      lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar5;
      pcVar4 = pcVar6;
      pcStack_720 = unaff_x24;
      pcStack_718 = pcVar12;
      puStack_710 = puVar16;
      pcStack_708 = pcVar1;
      pcStack_700 = pcVar9;
      pcStack_6f8 = pcVar7;
      ppppuStack_6f0 = &ppppuStack_650;
      _objc_retain(pcVar5);
      if (pcVar2 != (char *)0x0) {
        plVar14 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        pcVar12 = (char *)auStack_740;
        func_0x00010002b838(auStack_740,pcVar1);
        acStack_760[0] = '\0';
        acStack_760[1] = '\0';
        acStack_760[2] = '\0';
        acStack_760[3] = '\0';
        acStack_760[4] = '\0';
        acStack_760[5] = '\0';
        acStack_760[6] = '\0';
        acStack_760[7] = '\0';
        acStack_760[8] = '\0';
        acStack_760[9] = '\0';
        acStack_760[10] = '\0';
        acStack_760[0xb] = '\0';
        acStack_760[0xc] = '\0';
        acStack_760[0xd] = '\0';
        acStack_760[0xe] = '\0';
        acStack_760[0xf] = '\0';
        acStack_760[0x10] = '\0';
        acStack_760[0x11] = '\0';
        acStack_760[0x12] = '\0';
        acStack_760[0x13] = '\0';
        acStack_760[0x14] = '\0';
        acStack_760[0x15] = '\0';
        acStack_760[0x16] = '\0';
        acStack_760[0x17] = '\0';
        func_0x00010007e1e8(acStack_760,auStack_740,&lStack_728,1);
        pcVar8 = "";
        (**(code **)(*plVar14 + 0x18))(plVar14);
        puStack_748 = acStack_760;
        func_0x00010007e5dc(&puStack_748);
        pcVar4 = pcVar11;
        pcVar3 = pcVar6;
        if (cStack_729 < '\0') {
          __ZdlPv(auStack_740[0]);
          pcVar4 = pcVar11;
          pcVar3 = pcVar6;
        }
      }
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      _objc_release(pcVar5);
      __Unwind_Resume();
      pcVar6 = acStack_820;
      pcStack_768 = FUN_1056ef214;
      lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar8;
      pcVar5 = pcVar4;
      pcVar7 = pcVar3;
      pcVar9 = pcVar10;
      ppppuStack_770 = &ppppuStack_6f0;
      _objc_retain(pcVar8);
      _objc_retain(pcVar3);
      if (pcVar1 != (char *)0x0) {
        plVar14 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(acStack_800,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar4 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_7e8,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_7d0,pcVar1);
        acStack_820[0] = '\0';
        acStack_820[1] = '\0';
        acStack_820[2] = '\0';
        acStack_820[3] = '\0';
        acStack_820[4] = '\0';
        acStack_820[5] = '\0';
        acStack_820[6] = '\0';
        acStack_820[7] = '\0';
        acStack_820[8] = '\0';
        acStack_820[9] = '\0';
        acStack_820[10] = '\0';
        acStack_820[0xb] = '\0';
        acStack_820[0xc] = '\0';
        acStack_820[0xd] = '\0';
        acStack_820[0xe] = '\0';
        acStack_820[0xf] = '\0';
        acStack_820[0x10] = '\0';
        acStack_820[0x11] = '\0';
        acStack_820[0x12] = '\0';
        acStack_820[0x13] = '\0';
        acStack_820[0x14] = '\0';
        acStack_820[0x15] = '\0';
        acStack_820[0x16] = '\0';
        acStack_820[0x17] = '\0';
        func_0x00010007e1e8(acStack_820,acStack_800,&lStack_7b8,3);
        pcVar2 = "\x01";
        (**(code **)(*plVar14 + 0x18))(plVar14);
        puStack_808 = acStack_820;
        func_0x00010007e5dc(&puStack_808);
        lVar15 = 0;
        pcVar5 = pcVar6;
        pcVar7 = pcVar10;
        do {
          if ((&cStack_7b9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_7d0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
          pcVar12 = acStack_820;
        } while (lVar15 != -0x48);
      }
      _objc_release(pcVar3);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar3);
      do {
        pcVar12 = pcVar12 + -0x18;
      } while (pcVar12 != acStack_800);
      _objc_release(pcVar3);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar3 = acStack_8e0;
      pcStack_828 = FUN_1056ef48c;
      lStack_878 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar2;
      pcVar10 = pcVar5;
      pcVar6 = pcVar7;
      pcVar4 = pcVar9;
      ppppuStack_830 = &ppppuStack_770;
      _objc_retain(pcVar2);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar14 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(acStack_8c0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar5 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_8a8,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_890,pcVar1);
        acStack_8e0[0] = '\0';
        acStack_8e0[1] = '\0';
        acStack_8e0[2] = '\0';
        acStack_8e0[3] = '\0';
        acStack_8e0[4] = '\0';
        acStack_8e0[5] = '\0';
        acStack_8e0[6] = '\0';
        acStack_8e0[7] = '\0';
        acStack_8e0[8] = '\0';
        acStack_8e0[9] = '\0';
        acStack_8e0[10] = '\0';
        acStack_8e0[0xb] = '\0';
        acStack_8e0[0xc] = '\0';
        acStack_8e0[0xd] = '\0';
        acStack_8e0[0xe] = '\0';
        acStack_8e0[0xf] = '\0';
        acStack_8e0[0x10] = '\0';
        acStack_8e0[0x11] = '\0';
        acStack_8e0[0x12] = '\0';
        acStack_8e0[0x13] = '\0';
        acStack_8e0[0x14] = '\0';
        acStack_8e0[0x15] = '\0';
        acStack_8e0[0x16] = '\0';
        acStack_8e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_8e0,acStack_8c0,&lStack_878,3);
        pcVar8 = "\x01";
        (**(code **)(*plVar14 + 0x18))(plVar14);
        puStack_8c8 = acStack_8e0;
        func_0x00010007e5dc(&puStack_8c8);
        lVar15 = 0;
        pcVar10 = pcVar3;
        pcVar6 = pcVar9;
        do {
          if ((&cStack_879)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_890 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
          pcVar12 = acStack_8e0;
        } while (lVar15 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_878) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        do {
          pcVar12 = pcVar12 + -0x18;
        } while (pcVar12 != acStack_8c0);
        _objc_release(pcVar7);
        _objc_release(pcVar2);
        __Unwind_Resume();
        pcVar3 = acStack_9a0;
        pcStack_8e8 = FUN_1056ef704;
        lStack_938 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar8;
        pcVar5 = pcVar10;
        pcVar7 = pcVar6;
        pcVar9 = pcVar4;
        ppppuStack_8f0 = &ppppuStack_830;
        _objc_retain(pcVar8);
        _objc_retain(pcVar6);
        if (pcVar1 != (char *)0x0) {
          plVar14 = *(long **)(pcVar1 + 8);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar8;
            _objc_retainAutorelease(pcVar8);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar8);
          func_0x00010002b838(acStack_980,pcVar1);
          pcVar1 = "true";
          if ((int)pcVar10 == 0) {
            pcVar1 = "false";
          }
          func_0x00010002b838(auStack_968,pcVar1);
          _objc_retain(pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar6);
            pcVar1 = pcVar6;
            func_0x00010bdc3520();
          }
          _objc_release(pcVar6);
          func_0x00010002b838(auStack_950,pcVar1);
          acStack_9a0[0] = '\0';
          acStack_9a0[1] = '\0';
          acStack_9a0[2] = '\0';
          acStack_9a0[3] = '\0';
          acStack_9a0[4] = '\0';
          acStack_9a0[5] = '\0';
          acStack_9a0[6] = '\0';
          acStack_9a0[7] = '\0';
          acStack_9a0[8] = '\0';
          acStack_9a0[9] = '\0';
          acStack_9a0[10] = '\0';
          acStack_9a0[0xb] = '\0';
          acStack_9a0[0xc] = '\0';
          acStack_9a0[0xd] = '\0';
          acStack_9a0[0xe] = '\0';
          acStack_9a0[0xf] = '\0';
          acStack_9a0[0x10] = '\0';
          acStack_9a0[0x11] = '\0';
          acStack_9a0[0x12] = '\0';
          acStack_9a0[0x13] = '\0';
          acStack_9a0[0x14] = '\0';
          acStack_9a0[0x15] = '\0';
          acStack_9a0[0x16] = '\0';
          acStack_9a0[0x17] = '\0';
          func_0x00010007e1e8(acStack_9a0,acStack_980,&lStack_938,3);
          pcVar2 = "\x01";
          (**(code **)(*plVar14 + 0x18))(plVar14);
          puStack_988 = acStack_9a0;
          func_0x00010007e5dc(&puStack_988);
          lVar15 = 0;
          pcVar5 = pcVar3;
          pcVar7 = pcVar4;
          do {
            if ((&cStack_939)[lVar15] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_950 + lVar15));
            }
            lVar15 = lVar15 + -0x18;
            pcVar12 = acStack_9a0;
          } while (lVar15 != -0x48);
        }
        _objc_release(pcVar6);
        pcVar1 = pcVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_938) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar6);
        do {
          pcVar12 = pcVar12 + -0x18;
        } while (pcVar12 != acStack_980);
        _objc_release(pcVar6);
        _objc_release(pcVar8);
        __Unwind_Resume();
        pcVar6 = acStack_a60;
        pcStack_9a8 = FUN_1056ef97c;
        lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar8 = pcVar2;
        pcVar10 = pcVar5;
        ppppuStack_9b0 = &ppppuStack_8f0;
        _objc_retain(pcVar2);
        _objc_retain(pcVar7);
        if (pcVar1 != (char *)0x0) {
          plVar14 = *(long **)(pcVar1 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          func_0x00010002b838(acStack_a40,pcVar1);
          pcVar1 = "true";
          if ((int)pcVar5 == 0) {
            pcVar1 = "false";
          }
          func_0x00010002b838(auStack_a28,pcVar1);
          _objc_retain(pcVar7);
          if (pcVar7 == (char *)0x0) {
            pcVar5 = "";
          }
          else {
            _objc_retainAutorelease(pcVar7);
            pcVar5 = pcVar7;
            func_0x00010bdc3520();
          }
          _objc_release(pcVar7);
          func_0x00010002b838(auStack_a10,pcVar5);
          acStack_a60[0] = '\0';
          acStack_a60[1] = '\0';
          acStack_a60[2] = '\0';
          acStack_a60[3] = '\0';
          acStack_a60[4] = '\0';
          acStack_a60[5] = '\0';
          acStack_a60[6] = '\0';
          acStack_a60[7] = '\0';
          acStack_a60[8] = '\0';
          acStack_a60[9] = '\0';
          acStack_a60[10] = '\0';
          acStack_a60[0xb] = '\0';
          acStack_a60[0xc] = '\0';
          acStack_a60[0xd] = '\0';
          acStack_a60[0xe] = '\0';
          acStack_a60[0xf] = '\0';
          acStack_a60[0x10] = '\0';
          acStack_a60[0x11] = '\0';
          acStack_a60[0x12] = '\0';
          acStack_a60[0x13] = '\0';
          acStack_a60[0x14] = '\0';
          acStack_a60[0x15] = '\0';
          acStack_a60[0x16] = '\0';
          acStack_a60[0x17] = '\0';
          func_0x00010007e1e8(acStack_a60,acStack_a40,&lStack_9f8,3);
          pcVar8 = "";
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab30,acStack_a60,pcVar9);
          puStack_a48 = acStack_a60;
          func_0x00010007e5dc(&puStack_a48);
          lVar15 = 0;
          pcVar10 = pcVar6;
          do {
            if ((&cStack_9f9)[lVar15] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_a10 + lVar15));
            }
            lVar15 = lVar15 + -0x18;
            pcVar12 = acStack_a60;
          } while (lVar15 != -0x48);
        }
        _objc_release(pcVar7);
        pcVar1 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar7);
        do {
          pcVar12 = pcVar12 + -0x18;
        } while (pcVar12 != acStack_a40);
        _objc_release(pcVar7);
        _objc_release(pcVar2);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        pcVar3 = acStack_ae0;
        pcStack_a68 = FUN_1056efbf4;
        lStack_aa8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar9 = pcVar8;
        pcVar4 = pcVar10;
        pcStack_aa0 = pcVar5;
        pcStack_a98 = pcVar12;
        pcStack_a90 = acStack_a40;
        pcStack_a88 = pcVar1;
        pcStack_a80 = pcVar7;
        pcStack_a78 = pcVar2;
        ppppuStack_a70 = &ppppuStack_9b0;
        _objc_retain(pcVar8);
        plVar14 = (long *)0x0;
        pcVar1 = acStack_a40;
        if (pcVar6 != (char *)0x0) {
          plVar14 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar8;
            _objc_retainAutorelease(pcVar8);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar8);
          pcVar12 = (char *)auStack_ac0;
          func_0x00010002b838(auStack_ac0,pcVar1);
          acStack_ae0[0] = '\0';
          acStack_ae0[1] = '\0';
          acStack_ae0[2] = '\0';
          acStack_ae0[3] = '\0';
          acStack_ae0[4] = '\0';
          acStack_ae0[5] = '\0';
          acStack_ae0[6] = '\0';
          acStack_ae0[7] = '\0';
          acStack_ae0[8] = '\0';
          acStack_ae0[9] = '\0';
          acStack_ae0[10] = '\0';
          acStack_ae0[0xb] = '\0';
          acStack_ae0[0xc] = '\0';
          acStack_ae0[0xd] = '\0';
          acStack_ae0[0xe] = '\0';
          acStack_ae0[0xf] = '\0';
          acStack_ae0[0x10] = '\0';
          acStack_ae0[0x11] = '\0';
          acStack_ae0[0x12] = '\0';
          acStack_ae0[0x13] = '\0';
          acStack_ae0[0x14] = '\0';
          acStack_ae0[0x15] = '\0';
          acStack_ae0[0x16] = '\0';
          acStack_ae0[0x17] = '\0';
          func_0x00010007e1e8(acStack_ae0,auStack_ac0,&lStack_aa8,1);
          pcVar9 = "\x01";
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab80,acStack_ae0,pcVar10);
          puStack_ac8 = acStack_ae0;
          func_0x00010007e5dc(&puStack_ac8);
          pcVar4 = pcVar3;
          pcVar1 = acStack_ae0;
          if (cStack_aa9 < '\0') {
            __ZdlPv(auStack_ac0[0]);
            pcVar4 = pcVar3;
            pcVar1 = acStack_ae0;
          }
        }
        pcVar2 = pcVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_aa8) {
          ___stack_chk_fail();
          _objc_release(pcVar8);
          _objc_release(pcVar8);
          pcVar7 = pcVar2;
          __Unwind_Resume();
          pcVar3 = acStack_b60;
          pcStack_ae8 = FUN_1056efd68;
          lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar10 = pcVar9;
          pcVar6 = pcVar4;
          pcStack_b20 = pcVar5;
          pcStack_b18 = pcVar12;
          pcStack_b10 = pcVar1;
          plStack_b08 = plVar14;
          pcStack_b00 = pcVar2;
          pcStack_af8 = pcVar8;
          ppppuStack_af0 = &ppppuStack_a70;
          _objc_retain(pcVar9);
          plVar14 = (long *)0x0;
          if (pcVar7 != (char *)0x0) {
            plVar14 = *(long **)(pcVar7 + 8);
            _objc_retain(pcVar9);
            if (pcVar9 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              pcVar1 = pcVar9;
              _objc_retainAutorelease(pcVar9);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar9);
            pcVar12 = (char *)auStack_b40;
            func_0x00010002b838(auStack_b40,pcVar1);
            acStack_b60[0] = '\0';
            acStack_b60[1] = '\0';
            acStack_b60[2] = '\0';
            acStack_b60[3] = '\0';
            acStack_b60[4] = '\0';
            acStack_b60[5] = '\0';
            acStack_b60[6] = '\0';
            acStack_b60[7] = '\0';
            acStack_b60[8] = '\0';
            acStack_b60[9] = '\0';
            acStack_b60[10] = '\0';
            acStack_b60[0xb] = '\0';
            acStack_b60[0xc] = '\0';
            acStack_b60[0xd] = '\0';
            acStack_b60[0xe] = '\0';
            acStack_b60[0xf] = '\0';
            acStack_b60[0x10] = '\0';
            acStack_b60[0x11] = '\0';
            acStack_b60[0x12] = '\0';
            acStack_b60[0x13] = '\0';
            acStack_b60[0x14] = '\0';
            acStack_b60[0x15] = '\0';
            acStack_b60[0x16] = '\0';
            acStack_b60[0x17] = '\0';
            func_0x00010007e1e8(acStack_b60,auStack_b40,&lStack_b28,1);
            pcVar10 = "\x01";
            (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aabd0,acStack_b60,pcVar4);
            puStack_b48 = acStack_b60;
            func_0x00010007e5dc(&puStack_b48);
            pcVar6 = pcVar3;
            pcVar1 = acStack_b60;
            if (cStack_b29 < '\0') {
              __ZdlPv(auStack_b40[0]);
              pcVar6 = pcVar3;
              pcVar1 = acStack_b60;
            }
          }
          pcVar8 = pcVar9;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
            return;
          }
          ___stack_chk_fail();
          _objc_release(pcVar9);
          _objc_release(pcVar9);
          pcVar7 = pcVar8;
          __Unwind_Resume();
          pcStack_b68 = FUN_1056efedc;
          lStack_ba8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar2 = pcVar10;
          pcStack_ba0 = pcVar5;
          pcStack_b98 = pcVar12;
          pcStack_b90 = pcVar1;
          plStack_b88 = plVar14;
          pcStack_b80 = pcVar8;
          pcStack_b78 = pcVar9;
          ppppuStack_b70 = &ppppuStack_af0;
          _objc_retain(pcVar10);
          if (pcVar7 != (char *)0x0) {
            plVar14 = *(long **)(pcVar7 + 8);
            _objc_retain(pcVar10);
            if (pcVar10 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              pcVar1 = pcVar10;
              _objc_retainAutorelease(pcVar10);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar10);
            func_0x00010002b838(auStack_bc0,pcVar1);
            uStack_be0 = 0;
            uStack_bd8 = 0;
            uStack_bd0 = 0;
            func_0x00010007e1e8(&uStack_be0,auStack_bc0,&lStack_ba8,1);
            pcVar2 = "\x01";
            (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aac20,&uStack_be0,pcVar6);
            puStack_bc8 = (undefined1 *)&uStack_be0;
            func_0x00010007e5dc(&puStack_bc8);
            if (cStack_ba9 < '\0') {
              __ZdlPv(auStack_bc0[0]);
            }
          }
          pcVar1 = pcVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ba8) {
            ___stack_chk_fail();
            _objc_release(pcVar10);
            _objc_release(pcVar10);
            pcVar8 = pcVar1;
            __Unwind_Resume();
            puStack_c08 = (undefined1 *)&uStack_c20;
            pcStack_be8 = FUN_1056f0050;
            if (pcVar8 != (char *)0x0) {
              uStack_c20 = 0;
              uStack_c18 = 0;
              uStack_c10 = 0;
              pcStack_c00 = pcVar1;
              pcStack_bf8 = pcVar10;
              ppppuStack_bf0 = &ppppuStack_b70;
              (**(code **)(**(long **)(pcVar8 + 8) + 0x18))
                        (*(long **)(pcVar8 + 8),&UNK_1108aac70,&uStack_c20,pcVar2);
              func_0x00010007e5dc(&puStack_c08);
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ed96c; end: 1056edc2b;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ed96c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x24;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined1 *puStack_b88;
  char *pcStack_b80;
  char *pcStack_b78;
  undefined8 ****ppppuStack_b70;
  code *pcStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined1 *puStack_b48;
  undefined8 auStack_b40 [2];
  char cStack_b29;
  long lStack_b28;
  char *pcStack_b20;
  char *pcStack_b18;
  char *pcStack_b10;
  long *plStack_b08;
  char *pcStack_b00;
  char *pcStack_af8;
  undefined8 ****ppppuStack_af0;
  code *pcStack_ae8;
  char acStack_ae0 [24];
  undefined1 *puStack_ac8;
  undefined8 auStack_ac0 [2];
  char cStack_aa9;
  long lStack_aa8;
  char *pcStack_aa0;
  char *pcStack_a98;
  char *pcStack_a90;
  long *plStack_a88;
  char *pcStack_a80;
  char *pcStack_a78;
  undefined8 ****ppppuStack_a70;
  code *pcStack_a68;
  char acStack_a60 [24];
  undefined1 *puStack_a48;
  undefined8 auStack_a40 [2];
  char cStack_a29;
  long lStack_a28;
  char *pcStack_a20;
  char *pcStack_a18;
  char *pcStack_a10;
  char *pcStack_a08;
  char *pcStack_a00;
  char *pcStack_9f8;
  undefined8 ****ppppuStack_9f0;
  code *pcStack_9e8;
  char acStack_9e0 [24];
  undefined1 *puStack_9c8;
  char acStack_9c0 [24];
  undefined1 auStack_9a8 [24];
  undefined8 auStack_990 [2];
  char cStack_979;
  long lStack_978;
  undefined8 ****ppppuStack_930;
  code *pcStack_928;
  char acStack_920 [24];
  undefined1 *puStack_908;
  char acStack_900 [24];
  undefined1 auStack_8e8 [24];
  undefined8 auStack_8d0 [2];
  char cStack_8b9;
  long lStack_8b8;
  undefined8 ****ppppuStack_870;
  code *pcStack_868;
  char acStack_860 [24];
  undefined1 *puStack_848;
  char acStack_840 [24];
  undefined1 auStack_828 [24];
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 ****ppppuStack_7b0;
  code *pcStack_7a8;
  char acStack_7a0 [24];
  undefined1 *puStack_788;
  char acStack_780 [24];
  undefined1 auStack_768 [24];
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6e0 [24];
  undefined1 *puStack_6c8;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 *puStack_690;
  char *pcStack_688;
  char *pcStack_680;
  char *pcStack_678;
  undefined8 ****ppppuStack_670;
  code *pcStack_668;
  char acStack_658 [24];
  char *pcStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5b8 [24];
  char *pcStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  char *pcStack_560;
  char *pcStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ****ppppuStack_530;
  code *pcStack_528;
  char acStack_520 [24];
  undefined1 *puStack_508;
  char acStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined1 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar8 = param_3;
  pcVar12 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar8 = pcVar2;
    pcVar12 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_180;
  pcStack_c8 = FUN_1056edc2c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar7 = pcVar8;
  pcVar10 = pcVar12;
  pcVar6 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar16 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar9 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    pcVar7 = pcVar5;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_240;
  pcStack_188 = FUN_1056edeec;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar8 = pcVar7;
  pcVar12 = pcVar10;
  pcVar2 = pcVar6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(acStack_220,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    pcVar8 = pcVar5;
    pcVar12 = pcVar6;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar9);
  __Unwind_Resume();
  pcVar5 = acStack_300;
  pcStack_248 = FUN_1056ee1ac;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar7 = pcVar8;
  pcVar10 = pcVar12;
  pcVar6 = pcVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2e0,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
    pcVar9 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar14 = 0;
    pcVar7 = pcVar5;
    pcVar10 = pcVar2;
    do {
      if ((&cStack_299)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2e0);
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_3c0;
  pcStack_308 = FUN_1056ee46c;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar8 = pcVar7;
  pcVar12 = pcVar10;
  pcVar2 = pcVar6;
  ppppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar9);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x28))();
    if ((int)plVar16 != 0) {
      plVar16 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_3a0,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_388,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_370,pcVar1);
      acStack_3c0[0] = '\0';
      acStack_3c0[1] = '\0';
      acStack_3c0[2] = '\0';
      acStack_3c0[3] = '\0';
      acStack_3c0[4] = '\0';
      acStack_3c0[5] = '\0';
      acStack_3c0[6] = '\0';
      acStack_3c0[7] = '\0';
      acStack_3c0[8] = '\0';
      acStack_3c0[9] = '\0';
      acStack_3c0[10] = '\0';
      acStack_3c0[0xb] = '\0';
      acStack_3c0[0xc] = '\0';
      acStack_3c0[0xd] = '\0';
      acStack_3c0[0xe] = '\0';
      acStack_3c0[0xf] = '\0';
      acStack_3c0[0x10] = '\0';
      acStack_3c0[0x11] = '\0';
      acStack_3c0[0x12] = '\0';
      acStack_3c0[0x13] = '\0';
      acStack_3c0[0x14] = '\0';
      acStack_3c0[0x15] = '\0';
      acStack_3c0[0x16] = '\0';
      acStack_3c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3c0,acStack_3a0,&lStack_358,3);
      pcVar12 = (char *)((long)pcVar6 * 10);
      pcVar1 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_3a8 = acStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      lVar14 = 0;
      pcVar8 = pcVar5;
      do {
        if ((&cStack_359)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_3c0;
      } while (lVar14 != -0x48);
    }
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_3f8 = acStack_3a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_3f8);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar9);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1056ee750;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar5 = pcVar8;
  pcVar11 = pcVar12;
  pcStack_400 = unaff_x24;
  pcStack_3f0 = pcVar3;
  pcStack_3e8 = pcVar10;
  pcStack_3e0 = pcVar7;
  pcStack_3d8 = pcVar9;
  ppppuStack_3d0 = &ppppuStack_310;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_438;
    func_0x00010002b838(auStack_438,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_420,pcVar3);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
    pcVar6 = "";
    pcVar5 = acStack_458;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_440 = acStack_458;
    func_0x00010007e5dc(&pcStack_440);
    lVar14 = 0;
    pcVar11 = pcVar12;
    do {
      if ((&cStack_409)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar12 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_520;
  pcStack_468 = FUN_1056ee980;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar8 = pcVar5;
  pcVar3 = pcVar11;
  pcVar9 = pcVar2;
  ppppuStack_470 = &ppppuStack_3d0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  if (pcVar12 != (char *)0x0) {
    plVar16 = *(long **)(pcVar12 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_500,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_4e8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_4d0,pcVar1);
    acStack_520[0] = '\0';
    acStack_520[1] = '\0';
    acStack_520[2] = '\0';
    acStack_520[3] = '\0';
    acStack_520[4] = '\0';
    acStack_520[5] = '\0';
    acStack_520[6] = '\0';
    acStack_520[7] = '\0';
    acStack_520[8] = '\0';
    acStack_520[9] = '\0';
    acStack_520[10] = '\0';
    acStack_520[0xb] = '\0';
    acStack_520[0xc] = '\0';
    acStack_520[0xd] = '\0';
    acStack_520[0xe] = '\0';
    acStack_520[0xf] = '\0';
    acStack_520[0x10] = '\0';
    acStack_520[0x11] = '\0';
    acStack_520[0x12] = '\0';
    acStack_520[0x13] = '\0';
    acStack_520[0x14] = '\0';
    acStack_520[0x15] = '\0';
    acStack_520[0x16] = '\0';
    acStack_520[0x17] = '\0';
    func_0x00010007e1e8(acStack_520,acStack_500,&lStack_4b8,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_508 = acStack_520;
    func_0x00010007e5dc(&puStack_508);
    lVar14 = 0;
    pcVar8 = pcVar7;
    pcVar3 = pcVar2;
    do {
      if ((&cStack_4b9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_520;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar12 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  pcVar2 = acStack_500;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  _objc_release(pcVar6);
  pcVar4 = pcVar12;
  __Unwind_Resume();
  pcStack_528 = FUN_1056eec40;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar8;
  pcVar13 = pcVar3;
  pcStack_560 = unaff_x24;
  pcStack_558 = pcVar2;
  pcStack_550 = pcVar12;
  pcStack_548 = pcVar11;
  pcStack_540 = pcVar5;
  pcStack_538 = pcVar6;
  ppppuStack_530 = &ppppuStack_470;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  puVar15 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_598;
    func_0x00010002b838(auStack_598,pcVar12);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar12 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_580,pcVar12);
    acStack_5b8[0] = '\0';
    acStack_5b8[1] = '\0';
    acStack_5b8[2] = '\0';
    acStack_5b8[3] = '\0';
    acStack_5b8[4] = '\0';
    acStack_5b8[5] = '\0';
    acStack_5b8[6] = '\0';
    acStack_5b8[7] = '\0';
    acStack_5b8[8] = '\0';
    acStack_5b8[9] = '\0';
    acStack_5b8[10] = '\0';
    acStack_5b8[0xb] = '\0';
    acStack_5b8[0xc] = '\0';
    acStack_5b8[0xd] = '\0';
    acStack_5b8[0xe] = '\0';
    acStack_5b8[0xf] = '\0';
    acStack_5b8[0x10] = '\0';
    acStack_5b8[0x11] = '\0';
    acStack_5b8[0x12] = '\0';
    acStack_5b8[0x13] = '\0';
    acStack_5b8[0x14] = '\0';
    acStack_5b8[0x15] = '\0';
    acStack_5b8[0x16] = '\0';
    acStack_5b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5b8,auStack_598,&lStack_568,2);
    pcVar7 = "\x01";
    pcVar2 = acStack_5b8;
    pcVar10 = acStack_5b8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_5a0 = pcVar2;
    func_0x00010007e5dc(&pcStack_5a0);
    lVar14 = 0;
    puVar15 = auStack_598;
    pcVar13 = pcVar3;
    do {
      if ((&cStack_569)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar12 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_581 < '\0') {
      __ZdlPv(auStack_598[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar5 = pcVar12;
    __Unwind_Resume();
    pcStack_5c8 = FUN_1056eee70;
    lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar7;
    pcVar6 = pcVar10;
    pcVar4 = pcVar13;
    pcStack_600 = unaff_x24;
    pcStack_5f8 = pcVar2;
    puStack_5f0 = puVar15;
    pcStack_5e8 = pcVar12;
    pcStack_5e0 = pcVar8;
    pcStack_5d8 = pcVar1;
    ppppuStack_5d0 = &ppppuStack_530;
    _objc_retain(pcVar7);
    _objc_retain(pcVar10);
    puVar15 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar16 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      unaff_x24 = (char *)auStack_638;
      func_0x00010002b838(auStack_638,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_620,pcVar1);
      acStack_658[0] = '\0';
      acStack_658[1] = '\0';
      acStack_658[2] = '\0';
      acStack_658[3] = '\0';
      acStack_658[4] = '\0';
      acStack_658[5] = '\0';
      acStack_658[6] = '\0';
      acStack_658[7] = '\0';
      acStack_658[8] = '\0';
      acStack_658[9] = '\0';
      acStack_658[10] = '\0';
      acStack_658[0xb] = '\0';
      acStack_658[0xc] = '\0';
      acStack_658[0xd] = '\0';
      acStack_658[0xe] = '\0';
      acStack_658[0xf] = '\0';
      acStack_658[0x10] = '\0';
      acStack_658[0x11] = '\0';
      acStack_658[0x12] = '\0';
      acStack_658[0x13] = '\0';
      acStack_658[0x14] = '\0';
      acStack_658[0x15] = '\0';
      acStack_658[0x16] = '\0';
      acStack_658[0x17] = '\0';
      func_0x00010007e1e8(acStack_658,auStack_638,&lStack_608,2);
      pcVar3 = "";
      pcVar2 = acStack_658;
      pcVar6 = acStack_658;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_640 = pcVar2;
      func_0x00010007e5dc(&pcStack_640);
      lVar14 = 0;
      puVar15 = auStack_638;
      pcVar4 = pcVar13;
      do {
        if ((&cStack_609)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_621 < '\0') {
      __ZdlPv(auStack_638[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    pcVar12 = pcVar1;
    __Unwind_Resume();
    pcVar11 = acStack_6e0;
    pcStack_668 = FUN_1056ef0a0;
    lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar3;
    pcVar5 = pcVar6;
    pcStack_6a0 = unaff_x24;
    pcStack_698 = pcVar2;
    puStack_690 = puVar15;
    pcStack_688 = pcVar1;
    pcStack_680 = pcVar10;
    pcStack_678 = pcVar7;
    ppppuStack_670 = &ppppuStack_5d0;
    _objc_retain(pcVar3);
    if (pcVar12 != (char *)0x0) {
      plVar16 = *(long **)(pcVar12 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      pcVar2 = (char *)auStack_6c0;
      func_0x00010002b838(auStack_6c0,pcVar1);
      acStack_6e0[0] = '\0';
      acStack_6e0[1] = '\0';
      acStack_6e0[2] = '\0';
      acStack_6e0[3] = '\0';
      acStack_6e0[4] = '\0';
      acStack_6e0[5] = '\0';
      acStack_6e0[6] = '\0';
      acStack_6e0[7] = '\0';
      acStack_6e0[8] = '\0';
      acStack_6e0[9] = '\0';
      acStack_6e0[10] = '\0';
      acStack_6e0[0xb] = '\0';
      acStack_6e0[0xc] = '\0';
      acStack_6e0[0xd] = '\0';
      acStack_6e0[0xe] = '\0';
      acStack_6e0[0xf] = '\0';
      acStack_6e0[0x10] = '\0';
      acStack_6e0[0x11] = '\0';
      acStack_6e0[0x12] = '\0';
      acStack_6e0[0x13] = '\0';
      acStack_6e0[0x14] = '\0';
      acStack_6e0[0x15] = '\0';
      acStack_6e0[0x16] = '\0';
      acStack_6e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_6e0,auStack_6c0,&lStack_6a8,1);
      pcVar8 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_6c8 = acStack_6e0;
      func_0x00010007e5dc(&puStack_6c8);
      pcVar5 = pcVar11;
      pcVar4 = pcVar6;
      if (cStack_6a9 < '\0') {
        __ZdlPv(auStack_6c0[0]);
        pcVar5 = pcVar11;
        pcVar4 = pcVar6;
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar6 = acStack_7a0;
    pcStack_6e8 = FUN_1056ef214;
    lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar8;
    pcVar3 = pcVar5;
    pcVar7 = pcVar4;
    pcVar10 = pcVar9;
    ppppuStack_6f0 = &ppppuStack_670;
    _objc_retain(pcVar8);
    _objc_retain(pcVar4);
    if (pcVar1 != (char *)0x0) {
      plVar16 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(acStack_780,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_768,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_750,pcVar1);
      acStack_7a0[0] = '\0';
      acStack_7a0[1] = '\0';
      acStack_7a0[2] = '\0';
      acStack_7a0[3] = '\0';
      acStack_7a0[4] = '\0';
      acStack_7a0[5] = '\0';
      acStack_7a0[6] = '\0';
      acStack_7a0[7] = '\0';
      acStack_7a0[8] = '\0';
      acStack_7a0[9] = '\0';
      acStack_7a0[10] = '\0';
      acStack_7a0[0xb] = '\0';
      acStack_7a0[0xc] = '\0';
      acStack_7a0[0xd] = '\0';
      acStack_7a0[0xe] = '\0';
      acStack_7a0[0xf] = '\0';
      acStack_7a0[0x10] = '\0';
      acStack_7a0[0x11] = '\0';
      acStack_7a0[0x12] = '\0';
      acStack_7a0[0x13] = '\0';
      acStack_7a0[0x14] = '\0';
      acStack_7a0[0x15] = '\0';
      acStack_7a0[0x16] = '\0';
      acStack_7a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_7a0,acStack_780,&lStack_738,3);
      pcVar12 = "\x01";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_788 = acStack_7a0;
      func_0x00010007e5dc(&puStack_788);
      lVar14 = 0;
      pcVar3 = pcVar6;
      pcVar7 = pcVar9;
      do {
        if ((&cStack_739)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_750 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar2 = acStack_7a0;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar4);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_738) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_780);
      _objc_release(pcVar4);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar4 = acStack_860;
      pcStack_7a8 = FUN_1056ef48c;
      lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar12;
      pcVar9 = pcVar3;
      pcVar6 = pcVar7;
      pcVar5 = pcVar10;
      ppppuStack_7b0 = &ppppuStack_6f0;
      _objc_retain(pcVar12);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x00010002b838(acStack_840,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_828,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_810,pcVar1);
        acStack_860[0] = '\0';
        acStack_860[1] = '\0';
        acStack_860[2] = '\0';
        acStack_860[3] = '\0';
        acStack_860[4] = '\0';
        acStack_860[5] = '\0';
        acStack_860[6] = '\0';
        acStack_860[7] = '\0';
        acStack_860[8] = '\0';
        acStack_860[9] = '\0';
        acStack_860[10] = '\0';
        acStack_860[0xb] = '\0';
        acStack_860[0xc] = '\0';
        acStack_860[0xd] = '\0';
        acStack_860[0xe] = '\0';
        acStack_860[0xf] = '\0';
        acStack_860[0x10] = '\0';
        acStack_860[0x11] = '\0';
        acStack_860[0x12] = '\0';
        acStack_860[0x13] = '\0';
        acStack_860[0x14] = '\0';
        acStack_860[0x15] = '\0';
        acStack_860[0x16] = '\0';
        acStack_860[0x17] = '\0';
        func_0x00010007e1e8(acStack_860,acStack_840,&lStack_7f8,3);
        pcVar8 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_848 = acStack_860;
        func_0x00010007e5dc(&puStack_848);
        lVar14 = 0;
        pcVar9 = pcVar4;
        pcVar6 = pcVar10;
        do {
          if ((&cStack_7f9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_810 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar2 = acStack_860;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7f8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_840);
      _objc_release(pcVar7);
      _objc_release(pcVar12);
      __Unwind_Resume();
      pcVar4 = acStack_920;
      pcStack_868 = FUN_1056ef704;
      lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar12 = pcVar8;
      pcVar3 = pcVar9;
      pcVar7 = pcVar6;
      pcVar10 = pcVar5;
      ppppuStack_870 = &ppppuStack_7b0;
      _objc_retain(pcVar8);
      _objc_retain(pcVar6);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(acStack_900,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar9 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_8e8,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_8d0,pcVar1);
        acStack_920[0] = '\0';
        acStack_920[1] = '\0';
        acStack_920[2] = '\0';
        acStack_920[3] = '\0';
        acStack_920[4] = '\0';
        acStack_920[5] = '\0';
        acStack_920[6] = '\0';
        acStack_920[7] = '\0';
        acStack_920[8] = '\0';
        acStack_920[9] = '\0';
        acStack_920[10] = '\0';
        acStack_920[0xb] = '\0';
        acStack_920[0xc] = '\0';
        acStack_920[0xd] = '\0';
        acStack_920[0xe] = '\0';
        acStack_920[0xf] = '\0';
        acStack_920[0x10] = '\0';
        acStack_920[0x11] = '\0';
        acStack_920[0x12] = '\0';
        acStack_920[0x13] = '\0';
        acStack_920[0x14] = '\0';
        acStack_920[0x15] = '\0';
        acStack_920[0x16] = '\0';
        acStack_920[0x17] = '\0';
        func_0x00010007e1e8(acStack_920,acStack_900,&lStack_8b8,3);
        pcVar12 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_908 = acStack_920;
        func_0x00010007e5dc(&puStack_908);
        lVar14 = 0;
        pcVar3 = pcVar4;
        pcVar7 = pcVar5;
        do {
          if ((&cStack_8b9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_8d0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar2 = acStack_920;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar6);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar6);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_900);
      _objc_release(pcVar6);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar6 = acStack_9e0;
      pcStack_928 = FUN_1056ef97c;
      lStack_978 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar12;
      pcVar9 = pcVar3;
      ppppuStack_930 = &ppppuStack_870;
      _objc_retain(pcVar12);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x00010002b838(acStack_9c0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_9a8,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar3 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_990,pcVar3);
        acStack_9e0[0] = '\0';
        acStack_9e0[1] = '\0';
        acStack_9e0[2] = '\0';
        acStack_9e0[3] = '\0';
        acStack_9e0[4] = '\0';
        acStack_9e0[5] = '\0';
        acStack_9e0[6] = '\0';
        acStack_9e0[7] = '\0';
        acStack_9e0[8] = '\0';
        acStack_9e0[9] = '\0';
        acStack_9e0[10] = '\0';
        acStack_9e0[0xb] = '\0';
        acStack_9e0[0xc] = '\0';
        acStack_9e0[0xd] = '\0';
        acStack_9e0[0xe] = '\0';
        acStack_9e0[0xf] = '\0';
        acStack_9e0[0x10] = '\0';
        acStack_9e0[0x11] = '\0';
        acStack_9e0[0x12] = '\0';
        acStack_9e0[0x13] = '\0';
        acStack_9e0[0x14] = '\0';
        acStack_9e0[0x15] = '\0';
        acStack_9e0[0x16] = '\0';
        acStack_9e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_9e0,acStack_9c0,&lStack_978,3);
        pcVar8 = "";
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab30,acStack_9e0,pcVar10);
        puStack_9c8 = acStack_9e0;
        func_0x00010007e5dc(&puStack_9c8);
        lVar14 = 0;
        pcVar9 = pcVar6;
        do {
          if ((&cStack_979)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_990 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar2 = acStack_9e0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_978) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        do {
          pcVar2 = pcVar2 + -0x18;
        } while (pcVar2 != acStack_9c0);
        _objc_release(pcVar7);
        _objc_release(pcVar12);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        pcVar4 = acStack_a60;
        pcStack_9e8 = FUN_1056efbf4;
        lStack_a28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar10 = pcVar8;
        pcVar5 = pcVar9;
        pcStack_a20 = pcVar3;
        pcStack_a18 = pcVar2;
        pcStack_a10 = acStack_9c0;
        pcStack_a08 = pcVar1;
        pcStack_a00 = pcVar7;
        pcStack_9f8 = pcVar12;
        ppppuStack_9f0 = &ppppuStack_930;
        _objc_retain(pcVar8);
        plVar16 = (long *)0x0;
        pcVar1 = acStack_9c0;
        if (pcVar6 != (char *)0x0) {
          plVar16 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar8;
            _objc_retainAutorelease(pcVar8);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar8);
          pcVar2 = (char *)auStack_a40;
          func_0x00010002b838(auStack_a40,pcVar1);
          acStack_a60[0] = '\0';
          acStack_a60[1] = '\0';
          acStack_a60[2] = '\0';
          acStack_a60[3] = '\0';
          acStack_a60[4] = '\0';
          acStack_a60[5] = '\0';
          acStack_a60[6] = '\0';
          acStack_a60[7] = '\0';
          acStack_a60[8] = '\0';
          acStack_a60[9] = '\0';
          acStack_a60[10] = '\0';
          acStack_a60[0xb] = '\0';
          acStack_a60[0xc] = '\0';
          acStack_a60[0xd] = '\0';
          acStack_a60[0xe] = '\0';
          acStack_a60[0xf] = '\0';
          acStack_a60[0x10] = '\0';
          acStack_a60[0x11] = '\0';
          acStack_a60[0x12] = '\0';
          acStack_a60[0x13] = '\0';
          acStack_a60[0x14] = '\0';
          acStack_a60[0x15] = '\0';
          acStack_a60[0x16] = '\0';
          acStack_a60[0x17] = '\0';
          func_0x00010007e1e8(acStack_a60,auStack_a40,&lStack_a28,1);
          pcVar10 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab80,acStack_a60,pcVar9);
          puStack_a48 = acStack_a60;
          func_0x00010007e5dc(&puStack_a48);
          pcVar5 = pcVar4;
          pcVar1 = acStack_a60;
          if (cStack_a29 < '\0') {
            __ZdlPv(auStack_a40[0]);
            pcVar5 = pcVar4;
            pcVar1 = acStack_a60;
          }
        }
        pcVar12 = pcVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a28) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar8);
        _objc_release(pcVar8);
        pcVar7 = pcVar12;
        __Unwind_Resume();
        pcVar4 = acStack_ae0;
        pcStack_a68 = FUN_1056efd68;
        lStack_aa8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar9 = pcVar10;
        pcVar6 = pcVar5;
        pcStack_aa0 = pcVar3;
        pcStack_a98 = pcVar2;
        pcStack_a90 = pcVar1;
        plStack_a88 = plVar16;
        pcStack_a80 = pcVar12;
        pcStack_a78 = pcVar8;
        ppppuStack_a70 = &ppppuStack_9f0;
        _objc_retain(pcVar10);
        plVar16 = (long *)0x0;
        if (pcVar7 != (char *)0x0) {
          plVar16 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar10);
          if (pcVar10 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar10;
            _objc_retainAutorelease(pcVar10);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar10);
          pcVar2 = (char *)auStack_ac0;
          func_0x00010002b838(auStack_ac0,pcVar1);
          acStack_ae0[0] = '\0';
          acStack_ae0[1] = '\0';
          acStack_ae0[2] = '\0';
          acStack_ae0[3] = '\0';
          acStack_ae0[4] = '\0';
          acStack_ae0[5] = '\0';
          acStack_ae0[6] = '\0';
          acStack_ae0[7] = '\0';
          acStack_ae0[8] = '\0';
          acStack_ae0[9] = '\0';
          acStack_ae0[10] = '\0';
          acStack_ae0[0xb] = '\0';
          acStack_ae0[0xc] = '\0';
          acStack_ae0[0xd] = '\0';
          acStack_ae0[0xe] = '\0';
          acStack_ae0[0xf] = '\0';
          acStack_ae0[0x10] = '\0';
          acStack_ae0[0x11] = '\0';
          acStack_ae0[0x12] = '\0';
          acStack_ae0[0x13] = '\0';
          acStack_ae0[0x14] = '\0';
          acStack_ae0[0x15] = '\0';
          acStack_ae0[0x16] = '\0';
          acStack_ae0[0x17] = '\0';
          func_0x00010007e1e8(acStack_ae0,auStack_ac0,&lStack_aa8,1);
          pcVar9 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aabd0,acStack_ae0,pcVar5);
          puStack_ac8 = acStack_ae0;
          func_0x00010007e5dc(&puStack_ac8);
          pcVar6 = pcVar4;
          pcVar1 = acStack_ae0;
          if (cStack_aa9 < '\0') {
            __ZdlPv(auStack_ac0[0]);
            pcVar6 = pcVar4;
            pcVar1 = acStack_ae0;
          }
        }
        pcVar8 = pcVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_aa8) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar10);
        _objc_release(pcVar10);
        pcVar7 = pcVar8;
        __Unwind_Resume();
        pcStack_ae8 = FUN_1056efedc;
        lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar12 = pcVar9;
        pcStack_b20 = pcVar3;
        pcStack_b18 = pcVar2;
        pcStack_b10 = pcVar1;
        plStack_b08 = plVar16;
        pcStack_b00 = pcVar8;
        pcStack_af8 = pcVar10;
        ppppuStack_af0 = &ppppuStack_a70;
        _objc_retain(pcVar9);
        if (pcVar7 != (char *)0x0) {
          plVar16 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar9;
            _objc_retainAutorelease(pcVar9);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar9);
          func_0x00010002b838(auStack_b40,pcVar1);
          uStack_b60 = 0;
          uStack_b58 = 0;
          uStack_b50 = 0;
          func_0x00010007e1e8(&uStack_b60,auStack_b40,&lStack_b28,1);
          pcVar12 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aac20,&uStack_b60,pcVar6);
          puStack_b48 = (undefined1 *)&uStack_b60;
          func_0x00010007e5dc(&puStack_b48);
          if (cStack_b29 < '\0') {
            __ZdlPv(auStack_b40[0]);
          }
        }
        pcVar1 = pcVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b28) {
          ___stack_chk_fail();
          _objc_release(pcVar9);
          _objc_release(pcVar9);
          pcVar8 = pcVar1;
          __Unwind_Resume();
          puStack_b88 = (undefined1 *)&uStack_ba0;
          pcStack_b68 = FUN_1056f0050;
          if (pcVar8 != (char *)0x0) {
            uStack_ba0 = 0;
            uStack_b98 = 0;
            uStack_b90 = 0;
            pcStack_b80 = pcVar1;
            pcStack_b78 = pcVar9;
            ppppuStack_b70 = &ppppuStack_af0;
            (**(code **)(**(long **)(pcVar8 + 8) + 0x18))
                      (*(long **)(pcVar8 + 8),&UNK_1108aac70,&uStack_ba0,pcVar12);
            func_0x00010007e5dc(&puStack_b88);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056edc2c; end: 1056edeeb;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056edeb4) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056edc2c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x24;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined1 *puStack_ac8;
  char *pcStack_ac0;
  char *pcStack_ab8;
  undefined8 ****ppppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined1 *puStack_a88;
  undefined8 auStack_a80 [2];
  char cStack_a69;
  long lStack_a68;
  char *pcStack_a60;
  char *pcStack_a58;
  char *pcStack_a50;
  long *plStack_a48;
  char *pcStack_a40;
  char *pcStack_a38;
  undefined8 ****ppppuStack_a30;
  code *pcStack_a28;
  char acStack_a20 [24];
  undefined1 *puStack_a08;
  undefined8 auStack_a00 [2];
  char cStack_9e9;
  long lStack_9e8;
  char *pcStack_9e0;
  char *pcStack_9d8;
  char *pcStack_9d0;
  long *plStack_9c8;
  char *pcStack_9c0;
  char *pcStack_9b8;
  undefined8 ****ppppuStack_9b0;
  code *pcStack_9a8;
  char acStack_9a0 [24];
  undefined1 *puStack_988;
  undefined8 auStack_980 [2];
  char cStack_969;
  long lStack_968;
  char *pcStack_960;
  char *pcStack_958;
  char *pcStack_950;
  char *pcStack_948;
  char *pcStack_940;
  char *pcStack_938;
  undefined8 ****ppppuStack_930;
  code *pcStack_928;
  char acStack_920 [24];
  undefined1 *puStack_908;
  char acStack_900 [24];
  undefined1 auStack_8e8 [24];
  undefined8 auStack_8d0 [2];
  char cStack_8b9;
  long lStack_8b8;
  undefined8 ****ppppuStack_870;
  code *pcStack_868;
  char acStack_860 [24];
  undefined1 *puStack_848;
  char acStack_840 [24];
  undefined1 auStack_828 [24];
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 ****ppppuStack_7b0;
  code *pcStack_7a8;
  char acStack_7a0 [24];
  undefined1 *puStack_788;
  char acStack_780 [24];
  undefined1 auStack_768 [24];
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6e0 [24];
  undefined1 *puStack_6c8;
  char acStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_620 [24];
  undefined1 *puStack_608;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 *puStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_598 [24];
  char *pcStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 *puStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_460 [24];
  undefined1 *puStack_448;
  char acStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_398 [24];
  char *pcStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char *pcStack_340;
  char *pcStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined1 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar6 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar9 = pcVar2;
    pcVar6 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_180;
  pcStack_c8 = FUN_1056edeec;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar9;
  pcVar12 = pcVar6;
  pcVar7 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar16 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    pcVar10 = pcVar5;
    pcVar12 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_240;
  pcStack_188 = FUN_1056ee1ac;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar9 = pcVar10;
  pcVar6 = pcVar12;
  pcVar2 = pcVar7;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(acStack_220,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    pcVar9 = pcVar5;
    pcVar6 = pcVar7;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar5 = acStack_300;
  pcStack_248 = FUN_1056ee46c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar9;
  pcVar12 = pcVar6;
  pcVar7 = pcVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    pcVar8 = "";
    (**(code **)(*plVar16 + 0x28))();
    if ((int)plVar16 != 0) {
      plVar16 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_2e0,pcVar3);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar3 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_2c8,pcVar3);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar3 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_2b0,pcVar3);
      acStack_300[0] = '\0';
      acStack_300[1] = '\0';
      acStack_300[2] = '\0';
      acStack_300[3] = '\0';
      acStack_300[4] = '\0';
      acStack_300[5] = '\0';
      acStack_300[6] = '\0';
      acStack_300[7] = '\0';
      acStack_300[8] = '\0';
      acStack_300[9] = '\0';
      acStack_300[10] = '\0';
      acStack_300[0xb] = '\0';
      acStack_300[0xc] = '\0';
      acStack_300[0xd] = '\0';
      acStack_300[0xe] = '\0';
      acStack_300[0xf] = '\0';
      acStack_300[0x10] = '\0';
      acStack_300[0x11] = '\0';
      acStack_300[0x12] = '\0';
      acStack_300[0x13] = '\0';
      acStack_300[0x14] = '\0';
      acStack_300[0x15] = '\0';
      acStack_300[0x16] = '\0';
      acStack_300[0x17] = '\0';
      func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
      pcVar12 = (char *)((long)pcVar2 * 10);
      pcVar8 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_2e8 = acStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar14 = 0;
      pcVar10 = pcVar5;
      do {
        if ((&cStack_299)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_300;
      } while (lVar14 != -0x48);
    }
  }
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_338 = acStack_2e0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_338);
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_308 = FUN_1056ee750;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar5 = pcVar10;
  pcVar11 = pcVar12;
  pcStack_340 = unaff_x24;
  pcStack_330 = pcVar3;
  pcStack_328 = pcVar6;
  pcStack_320 = pcVar9;
  pcStack_318 = pcVar1;
  ppppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_378;
    func_0x00010002b838(auStack_378,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_360,pcVar1);
    acStack_398[0] = '\0';
    acStack_398[1] = '\0';
    acStack_398[2] = '\0';
    acStack_398[3] = '\0';
    acStack_398[4] = '\0';
    acStack_398[5] = '\0';
    acStack_398[6] = '\0';
    acStack_398[7] = '\0';
    acStack_398[8] = '\0';
    acStack_398[9] = '\0';
    acStack_398[10] = '\0';
    acStack_398[0xb] = '\0';
    acStack_398[0xc] = '\0';
    acStack_398[0xd] = '\0';
    acStack_398[0xe] = '\0';
    acStack_398[0xf] = '\0';
    acStack_398[0x10] = '\0';
    acStack_398[0x11] = '\0';
    acStack_398[0x12] = '\0';
    acStack_398[0x13] = '\0';
    acStack_398[0x14] = '\0';
    acStack_398[0x15] = '\0';
    acStack_398[0x16] = '\0';
    acStack_398[0x17] = '\0';
    func_0x00010007e1e8(acStack_398,auStack_378,&lStack_348,2);
    pcVar2 = "";
    pcVar5 = acStack_398;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_380 = acStack_398;
    func_0x00010007e5dc(&pcStack_380);
    lVar14 = 0;
    pcVar11 = pcVar12;
    do {
      if ((&cStack_349)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_361 < '\0') {
      __ZdlPv(auStack_378[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar8);
    __Unwind_Resume();
    pcVar10 = acStack_460;
    pcStack_3a8 = FUN_1056ee980;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar2;
    pcVar6 = pcVar5;
    pcVar3 = pcVar11;
    pcVar8 = pcVar7;
    ppppuStack_3b0 = &ppppuStack_310;
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    _objc_retain(pcVar11);
    if (pcVar1 != (char *)0x0) {
      plVar16 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_440,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_428,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_410,pcVar1);
      acStack_460[0] = '\0';
      acStack_460[1] = '\0';
      acStack_460[2] = '\0';
      acStack_460[3] = '\0';
      acStack_460[4] = '\0';
      acStack_460[5] = '\0';
      acStack_460[6] = '\0';
      acStack_460[7] = '\0';
      acStack_460[8] = '\0';
      acStack_460[9] = '\0';
      acStack_460[10] = '\0';
      acStack_460[0xb] = '\0';
      acStack_460[0xc] = '\0';
      acStack_460[0xd] = '\0';
      acStack_460[0xe] = '\0';
      acStack_460[0xf] = '\0';
      acStack_460[0x10] = '\0';
      acStack_460[0x11] = '\0';
      acStack_460[0x12] = '\0';
      acStack_460[0x13] = '\0';
      acStack_460[0x14] = '\0';
      acStack_460[0x15] = '\0';
      acStack_460[0x16] = '\0';
      acStack_460[0x17] = '\0';
      func_0x00010007e1e8(acStack_460,acStack_440,&lStack_3f8,3);
      pcVar9 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_448 = acStack_460;
      func_0x00010007e5dc(&puStack_448);
      lVar14 = 0;
      pcVar6 = pcVar10;
      pcVar3 = pcVar7;
      do {
        if ((&cStack_3f9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_460;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar11);
    _objc_release(pcVar5);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar11);
    pcVar10 = acStack_440;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar10);
    _objc_release(pcVar11);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_468 = FUN_1056eec40;
    lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar9;
    pcVar7 = pcVar6;
    pcVar13 = pcVar3;
    pcStack_4a0 = unaff_x24;
    pcStack_498 = pcVar10;
    pcStack_490 = pcVar1;
    pcStack_488 = pcVar11;
    pcStack_480 = pcVar5;
    pcStack_478 = pcVar2;
    ppppuStack_470 = &ppppuStack_3b0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar6);
    puVar15 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar16 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x24 = (char *)auStack_4d8;
      func_0x00010002b838(auStack_4d8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_4c0,pcVar1);
      acStack_4f8[0] = '\0';
      acStack_4f8[1] = '\0';
      acStack_4f8[2] = '\0';
      acStack_4f8[3] = '\0';
      acStack_4f8[4] = '\0';
      acStack_4f8[5] = '\0';
      acStack_4f8[6] = '\0';
      acStack_4f8[7] = '\0';
      acStack_4f8[8] = '\0';
      acStack_4f8[9] = '\0';
      acStack_4f8[10] = '\0';
      acStack_4f8[0xb] = '\0';
      acStack_4f8[0xc] = '\0';
      acStack_4f8[0xd] = '\0';
      acStack_4f8[0xe] = '\0';
      acStack_4f8[0xf] = '\0';
      acStack_4f8[0x10] = '\0';
      acStack_4f8[0x11] = '\0';
      acStack_4f8[0x12] = '\0';
      acStack_4f8[0x13] = '\0';
      acStack_4f8[0x14] = '\0';
      acStack_4f8[0x15] = '\0';
      acStack_4f8[0x16] = '\0';
      acStack_4f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_4f8,auStack_4d8,&lStack_4a8,2);
      pcVar12 = "\x01";
      pcVar10 = acStack_4f8;
      pcVar7 = acStack_4f8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_4e0 = pcVar10;
      func_0x00010007e5dc(&pcStack_4e0);
      lVar14 = 0;
      puVar15 = auStack_4d8;
      pcVar13 = pcVar3;
      do {
        if ((&cStack_4a9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_4c1 < '\0') {
      __ZdlPv(auStack_4d8[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar9);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_508 = FUN_1056eee70;
    lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar12;
    pcVar2 = pcVar7;
    pcVar4 = pcVar13;
    pcStack_540 = unaff_x24;
    pcStack_538 = pcVar10;
    puStack_530 = puVar15;
    pcStack_528 = pcVar1;
    pcStack_520 = pcVar6;
    pcStack_518 = pcVar9;
    ppppuStack_510 = &ppppuStack_470;
    _objc_retain(pcVar12);
    _objc_retain(pcVar7);
    puVar15 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar16 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      unaff_x24 = (char *)auStack_578;
      func_0x00010002b838(auStack_578,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_560,pcVar1);
      acStack_598[0] = '\0';
      acStack_598[1] = '\0';
      acStack_598[2] = '\0';
      acStack_598[3] = '\0';
      acStack_598[4] = '\0';
      acStack_598[5] = '\0';
      acStack_598[6] = '\0';
      acStack_598[7] = '\0';
      acStack_598[8] = '\0';
      acStack_598[9] = '\0';
      acStack_598[10] = '\0';
      acStack_598[0xb] = '\0';
      acStack_598[0xc] = '\0';
      acStack_598[0xd] = '\0';
      acStack_598[0xe] = '\0';
      acStack_598[0xf] = '\0';
      acStack_598[0x10] = '\0';
      acStack_598[0x11] = '\0';
      acStack_598[0x12] = '\0';
      acStack_598[0x13] = '\0';
      acStack_598[0x14] = '\0';
      acStack_598[0x15] = '\0';
      acStack_598[0x16] = '\0';
      acStack_598[0x17] = '\0';
      func_0x00010007e1e8(acStack_598,auStack_578,&lStack_548,2);
      pcVar3 = "";
      pcVar10 = acStack_598;
      pcVar2 = acStack_598;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_580 = pcVar10;
      func_0x00010007e5dc(&pcStack_580);
      lVar14 = 0;
      puVar15 = auStack_578;
      pcVar4 = pcVar13;
      do {
        if ((&cStack_549)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_561 < '\0') {
      __ZdlPv(auStack_578[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar12);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcVar11 = acStack_620;
    pcStack_5a8 = FUN_1056ef0a0;
    lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar3;
    pcVar5 = pcVar2;
    pcStack_5e0 = unaff_x24;
    pcStack_5d8 = pcVar10;
    puStack_5d0 = puVar15;
    pcStack_5c8 = pcVar1;
    pcStack_5c0 = pcVar7;
    pcStack_5b8 = pcVar12;
    ppppuStack_5b0 = &ppppuStack_510;
    _objc_retain(pcVar3);
    if (pcVar6 != (char *)0x0) {
      plVar16 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      pcVar10 = (char *)auStack_600;
      func_0x00010002b838(auStack_600,pcVar1);
      acStack_620[0] = '\0';
      acStack_620[1] = '\0';
      acStack_620[2] = '\0';
      acStack_620[3] = '\0';
      acStack_620[4] = '\0';
      acStack_620[5] = '\0';
      acStack_620[6] = '\0';
      acStack_620[7] = '\0';
      acStack_620[8] = '\0';
      acStack_620[9] = '\0';
      acStack_620[10] = '\0';
      acStack_620[0xb] = '\0';
      acStack_620[0xc] = '\0';
      acStack_620[0xd] = '\0';
      acStack_620[0xe] = '\0';
      acStack_620[0xf] = '\0';
      acStack_620[0x10] = '\0';
      acStack_620[0x11] = '\0';
      acStack_620[0x12] = '\0';
      acStack_620[0x13] = '\0';
      acStack_620[0x14] = '\0';
      acStack_620[0x15] = '\0';
      acStack_620[0x16] = '\0';
      acStack_620[0x17] = '\0';
      func_0x00010007e1e8(acStack_620,auStack_600,&lStack_5e8,1);
      pcVar9 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_608 = acStack_620;
      func_0x00010007e5dc(&puStack_608);
      pcVar5 = pcVar11;
      pcVar4 = pcVar2;
      if (cStack_5e9 < '\0') {
        __ZdlPv(auStack_600[0]);
        pcVar5 = pcVar11;
        pcVar4 = pcVar2;
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5e8) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      __Unwind_Resume();
      pcVar7 = acStack_6e0;
      pcStack_628 = FUN_1056ef214;
      lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar9;
      pcVar3 = pcVar5;
      pcVar2 = pcVar4;
      pcVar12 = pcVar8;
      ppppuStack_630 = &ppppuStack_5b0;
      _objc_retain(pcVar9);
      _objc_retain(pcVar4);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_6c0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar5 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_6a8,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_690,pcVar1);
        acStack_6e0[0] = '\0';
        acStack_6e0[1] = '\0';
        acStack_6e0[2] = '\0';
        acStack_6e0[3] = '\0';
        acStack_6e0[4] = '\0';
        acStack_6e0[5] = '\0';
        acStack_6e0[6] = '\0';
        acStack_6e0[7] = '\0';
        acStack_6e0[8] = '\0';
        acStack_6e0[9] = '\0';
        acStack_6e0[10] = '\0';
        acStack_6e0[0xb] = '\0';
        acStack_6e0[0xc] = '\0';
        acStack_6e0[0xd] = '\0';
        acStack_6e0[0xe] = '\0';
        acStack_6e0[0xf] = '\0';
        acStack_6e0[0x10] = '\0';
        acStack_6e0[0x11] = '\0';
        acStack_6e0[0x12] = '\0';
        acStack_6e0[0x13] = '\0';
        acStack_6e0[0x14] = '\0';
        acStack_6e0[0x15] = '\0';
        acStack_6e0[0x16] = '\0';
        acStack_6e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_6e0,acStack_6c0,&lStack_678,3);
        pcVar6 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_6c8 = acStack_6e0;
        func_0x00010007e5dc(&puStack_6c8);
        lVar14 = 0;
        pcVar3 = pcVar7;
        pcVar2 = pcVar8;
        do {
          if ((&cStack_679)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_690 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_6e0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar4);
      pcVar1 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != acStack_6c0);
      _objc_release(pcVar4);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar4 = acStack_7a0;
      pcStack_6e8 = FUN_1056ef48c;
      lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar6;
      pcVar8 = pcVar3;
      pcVar7 = pcVar2;
      pcVar5 = pcVar12;
      ppppuStack_6f0 = &ppppuStack_630;
      _objc_retain(pcVar6);
      _objc_retain(pcVar2);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_780,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_768,pcVar1);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar1 = pcVar2;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_750,pcVar1);
        acStack_7a0[0] = '\0';
        acStack_7a0[1] = '\0';
        acStack_7a0[2] = '\0';
        acStack_7a0[3] = '\0';
        acStack_7a0[4] = '\0';
        acStack_7a0[5] = '\0';
        acStack_7a0[6] = '\0';
        acStack_7a0[7] = '\0';
        acStack_7a0[8] = '\0';
        acStack_7a0[9] = '\0';
        acStack_7a0[10] = '\0';
        acStack_7a0[0xb] = '\0';
        acStack_7a0[0xc] = '\0';
        acStack_7a0[0xd] = '\0';
        acStack_7a0[0xe] = '\0';
        acStack_7a0[0xf] = '\0';
        acStack_7a0[0x10] = '\0';
        acStack_7a0[0x11] = '\0';
        acStack_7a0[0x12] = '\0';
        acStack_7a0[0x13] = '\0';
        acStack_7a0[0x14] = '\0';
        acStack_7a0[0x15] = '\0';
        acStack_7a0[0x16] = '\0';
        acStack_7a0[0x17] = '\0';
        func_0x00010007e1e8(acStack_7a0,acStack_780,&lStack_738,3);
        pcVar9 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_788 = acStack_7a0;
        func_0x00010007e5dc(&puStack_788);
        lVar14 = 0;
        pcVar8 = pcVar4;
        pcVar7 = pcVar12;
        do {
          if ((&cStack_739)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_750 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_7a0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar2);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != acStack_780);
      _objc_release(pcVar2);
      _objc_release(pcVar6);
      __Unwind_Resume();
      pcVar4 = acStack_860;
      pcStack_7a8 = FUN_1056ef704;
      lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar9;
      pcVar3 = pcVar8;
      pcVar2 = pcVar7;
      pcVar12 = pcVar5;
      ppppuStack_7b0 = &ppppuStack_6f0;
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_840,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar8 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_828,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_810,pcVar1);
        acStack_860[0] = '\0';
        acStack_860[1] = '\0';
        acStack_860[2] = '\0';
        acStack_860[3] = '\0';
        acStack_860[4] = '\0';
        acStack_860[5] = '\0';
        acStack_860[6] = '\0';
        acStack_860[7] = '\0';
        acStack_860[8] = '\0';
        acStack_860[9] = '\0';
        acStack_860[10] = '\0';
        acStack_860[0xb] = '\0';
        acStack_860[0xc] = '\0';
        acStack_860[0xd] = '\0';
        acStack_860[0xe] = '\0';
        acStack_860[0xf] = '\0';
        acStack_860[0x10] = '\0';
        acStack_860[0x11] = '\0';
        acStack_860[0x12] = '\0';
        acStack_860[0x13] = '\0';
        acStack_860[0x14] = '\0';
        acStack_860[0x15] = '\0';
        acStack_860[0x16] = '\0';
        acStack_860[0x17] = '\0';
        func_0x00010007e1e8(acStack_860,acStack_840,&lStack_7f8,3);
        pcVar6 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_848 = acStack_860;
        func_0x00010007e5dc(&puStack_848);
        lVar14 = 0;
        pcVar3 = pcVar4;
        pcVar2 = pcVar5;
        do {
          if ((&cStack_7f9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_810 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_860;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7f8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != acStack_840);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar7 = acStack_920;
      pcStack_868 = FUN_1056ef97c;
      lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar6;
      pcVar8 = pcVar3;
      ppppuStack_870 = &ppppuStack_7b0;
      _objc_retain(pcVar6);
      _objc_retain(pcVar2);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_900,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_8e8,pcVar1);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar3 = pcVar2;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_8d0,pcVar3);
        acStack_920[0] = '\0';
        acStack_920[1] = '\0';
        acStack_920[2] = '\0';
        acStack_920[3] = '\0';
        acStack_920[4] = '\0';
        acStack_920[5] = '\0';
        acStack_920[6] = '\0';
        acStack_920[7] = '\0';
        acStack_920[8] = '\0';
        acStack_920[9] = '\0';
        acStack_920[10] = '\0';
        acStack_920[0xb] = '\0';
        acStack_920[0xc] = '\0';
        acStack_920[0xd] = '\0';
        acStack_920[0xe] = '\0';
        acStack_920[0xf] = '\0';
        acStack_920[0x10] = '\0';
        acStack_920[0x11] = '\0';
        acStack_920[0x12] = '\0';
        acStack_920[0x13] = '\0';
        acStack_920[0x14] = '\0';
        acStack_920[0x15] = '\0';
        acStack_920[0x16] = '\0';
        acStack_920[0x17] = '\0';
        func_0x00010007e1e8(acStack_920,acStack_900,&lStack_8b8,3);
        pcVar9 = "";
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab30,acStack_920,pcVar12);
        puStack_908 = acStack_920;
        func_0x00010007e5dc(&puStack_908);
        lVar14 = 0;
        pcVar8 = pcVar7;
        do {
          if ((&cStack_8b9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_8d0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_920;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar2);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8b8) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        do {
          pcVar10 = pcVar10 + -0x18;
        } while (pcVar10 != acStack_900);
        _objc_release(pcVar2);
        _objc_release(pcVar6);
        pcVar7 = pcVar1;
        __Unwind_Resume();
        pcVar4 = acStack_9a0;
        pcStack_928 = FUN_1056efbf4;
        lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar12 = pcVar9;
        pcVar5 = pcVar8;
        pcStack_960 = pcVar3;
        pcStack_958 = pcVar10;
        pcStack_950 = acStack_900;
        pcStack_948 = pcVar1;
        pcStack_940 = pcVar2;
        pcStack_938 = pcVar6;
        ppppuStack_930 = &ppppuStack_870;
        _objc_retain(pcVar9);
        plVar16 = (long *)0x0;
        pcVar1 = acStack_900;
        if (pcVar7 != (char *)0x0) {
          plVar16 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar9;
            _objc_retainAutorelease(pcVar9);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar9);
          pcVar10 = (char *)auStack_980;
          func_0x00010002b838(auStack_980,pcVar1);
          acStack_9a0[0] = '\0';
          acStack_9a0[1] = '\0';
          acStack_9a0[2] = '\0';
          acStack_9a0[3] = '\0';
          acStack_9a0[4] = '\0';
          acStack_9a0[5] = '\0';
          acStack_9a0[6] = '\0';
          acStack_9a0[7] = '\0';
          acStack_9a0[8] = '\0';
          acStack_9a0[9] = '\0';
          acStack_9a0[10] = '\0';
          acStack_9a0[0xb] = '\0';
          acStack_9a0[0xc] = '\0';
          acStack_9a0[0xd] = '\0';
          acStack_9a0[0xe] = '\0';
          acStack_9a0[0xf] = '\0';
          acStack_9a0[0x10] = '\0';
          acStack_9a0[0x11] = '\0';
          acStack_9a0[0x12] = '\0';
          acStack_9a0[0x13] = '\0';
          acStack_9a0[0x14] = '\0';
          acStack_9a0[0x15] = '\0';
          acStack_9a0[0x16] = '\0';
          acStack_9a0[0x17] = '\0';
          func_0x00010007e1e8(acStack_9a0,auStack_980,&lStack_968,1);
          pcVar12 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab80,acStack_9a0,pcVar8);
          puStack_988 = acStack_9a0;
          func_0x00010007e5dc(&puStack_988);
          pcVar5 = pcVar4;
          pcVar1 = acStack_9a0;
          if (cStack_969 < '\0') {
            __ZdlPv(auStack_980[0]);
            pcVar5 = pcVar4;
            pcVar1 = acStack_9a0;
          }
        }
        pcVar6 = pcVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_968) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar9);
        _objc_release(pcVar9);
        pcVar8 = pcVar6;
        __Unwind_Resume();
        pcVar4 = acStack_a20;
        pcStack_9a8 = FUN_1056efd68;
        lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar12;
        pcVar7 = pcVar5;
        pcStack_9e0 = pcVar3;
        pcStack_9d8 = pcVar10;
        pcStack_9d0 = pcVar1;
        plStack_9c8 = plVar16;
        pcStack_9c0 = pcVar6;
        pcStack_9b8 = pcVar9;
        ppppuStack_9b0 = &ppppuStack_930;
        _objc_retain(pcVar12);
        plVar16 = (long *)0x0;
        if (pcVar8 != (char *)0x0) {
          plVar16 = *(long **)(pcVar8 + 8);
          _objc_retain(pcVar12);
          if (pcVar12 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar12;
            _objc_retainAutorelease(pcVar12);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar12);
          pcVar10 = (char *)auStack_a00;
          func_0x00010002b838(auStack_a00,pcVar1);
          acStack_a20[0] = '\0';
          acStack_a20[1] = '\0';
          acStack_a20[2] = '\0';
          acStack_a20[3] = '\0';
          acStack_a20[4] = '\0';
          acStack_a20[5] = '\0';
          acStack_a20[6] = '\0';
          acStack_a20[7] = '\0';
          acStack_a20[8] = '\0';
          acStack_a20[9] = '\0';
          acStack_a20[10] = '\0';
          acStack_a20[0xb] = '\0';
          acStack_a20[0xc] = '\0';
          acStack_a20[0xd] = '\0';
          acStack_a20[0xe] = '\0';
          acStack_a20[0xf] = '\0';
          acStack_a20[0x10] = '\0';
          acStack_a20[0x11] = '\0';
          acStack_a20[0x12] = '\0';
          acStack_a20[0x13] = '\0';
          acStack_a20[0x14] = '\0';
          acStack_a20[0x15] = '\0';
          acStack_a20[0x16] = '\0';
          acStack_a20[0x17] = '\0';
          func_0x00010007e1e8(acStack_a20,auStack_a00,&lStack_9e8,1);
          pcVar2 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aabd0,acStack_a20,pcVar5);
          puStack_a08 = acStack_a20;
          func_0x00010007e5dc(&puStack_a08);
          pcVar7 = pcVar4;
          pcVar1 = acStack_a20;
          if (cStack_9e9 < '\0') {
            __ZdlPv(auStack_a00[0]);
            pcVar7 = pcVar4;
            pcVar1 = acStack_a20;
          }
        }
        pcVar9 = pcVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar12);
        _objc_release(pcVar12);
        pcVar8 = pcVar9;
        __Unwind_Resume();
        pcStack_a28 = FUN_1056efedc;
        lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar6 = pcVar2;
        pcStack_a60 = pcVar3;
        pcStack_a58 = pcVar10;
        pcStack_a50 = pcVar1;
        plStack_a48 = plVar16;
        pcStack_a40 = pcVar9;
        pcStack_a38 = pcVar12;
        ppppuStack_a30 = &ppppuStack_9b0;
        _objc_retain(pcVar2);
        if (pcVar8 != (char *)0x0) {
          plVar16 = *(long **)(pcVar8 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_a80,pcVar1);
          uStack_aa0 = 0;
          uStack_a98 = 0;
          uStack_a90 = 0;
          func_0x00010007e1e8(&uStack_aa0,auStack_a80,&lStack_a68,1);
          pcVar6 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aac20,&uStack_aa0,pcVar7);
          puStack_a88 = (undefined1 *)&uStack_aa0;
          func_0x00010007e5dc(&puStack_a88);
          if (cStack_a69 < '\0') {
            __ZdlPv(auStack_a80[0]);
          }
        }
        pcVar1 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a68) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          _objc_release(pcVar2);
          pcVar9 = pcVar1;
          __Unwind_Resume();
          puStack_ac8 = (undefined1 *)&uStack_ae0;
          pcStack_aa8 = FUN_1056f0050;
          if (pcVar9 != (char *)0x0) {
            uStack_ae0 = 0;
            uStack_ad8 = 0;
            uStack_ad0 = 0;
            pcStack_ac0 = pcVar1;
            pcStack_ab8 = pcVar2;
            ppppuStack_ab0 = &ppppuStack_a30;
            (**(code **)(**(long **)(pcVar9 + 8) + 0x18))
                      (*(long **)(pcVar9 + 8),&UNK_1108aac70,&uStack_ae0,pcVar6);
            func_0x00010007e5dc(&puStack_ac8);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056edeec; end: 1056ee1ab;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee174) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056edeec(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x24;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined1 *puStack_a08;
  char *pcStack_a00;
  char *pcStack_9f8;
  undefined8 ****ppppuStack_9f0;
  code *pcStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined1 *puStack_9c8;
  undefined8 auStack_9c0 [2];
  char cStack_9a9;
  long lStack_9a8;
  char *pcStack_9a0;
  char *pcStack_998;
  char *pcStack_990;
  long *plStack_988;
  char *pcStack_980;
  char *pcStack_978;
  undefined8 ****ppppuStack_970;
  code *pcStack_968;
  char acStack_960 [24];
  undefined1 *puStack_948;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  char *pcStack_920;
  char *pcStack_918;
  char *pcStack_910;
  long *plStack_908;
  char *pcStack_900;
  char *pcStack_8f8;
  undefined8 ****ppppuStack_8f0;
  code *pcStack_8e8;
  char acStack_8e0 [24];
  undefined1 *puStack_8c8;
  undefined8 auStack_8c0 [2];
  char cStack_8a9;
  long lStack_8a8;
  char *pcStack_8a0;
  char *pcStack_898;
  char *pcStack_890;
  char *pcStack_888;
  char *pcStack_880;
  char *pcStack_878;
  undefined8 ****ppppuStack_870;
  code *pcStack_868;
  char acStack_860 [24];
  undefined1 *puStack_848;
  char acStack_840 [24];
  undefined1 auStack_828 [24];
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 ****ppppuStack_7b0;
  code *pcStack_7a8;
  char acStack_7a0 [24];
  undefined1 *puStack_788;
  char acStack_780 [24];
  undefined1 auStack_768 [24];
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6e0 [24];
  undefined1 *puStack_6c8;
  char acStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_620 [24];
  undefined1 *puStack_608;
  char acStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  char acStack_560 [24];
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 *puStack_510;
  char *pcStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4d8 [24];
  char *pcStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 *puStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_438 [24];
  char *pcStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  char *pcStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  char acStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar8 = param_3;
  pcVar12 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar8 = pcVar2;
    pcVar12 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_180;
  pcStack_c8 = FUN_1056ee1ac;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar7 = pcVar8;
  pcVar10 = pcVar12;
  pcVar6 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar16 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar9 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    pcVar7 = pcVar5;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_240;
  pcStack_188 = FUN_1056ee46c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar8 = pcVar7;
  pcVar12 = pcVar10;
  pcVar2 = pcVar6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x28))();
    if ((int)plVar16 != 0) {
      plVar16 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_220,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_208,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_1f0,pcVar1);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
      pcVar12 = (char *)((long)pcVar6 * 10);
      pcVar1 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_228 = acStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar14 = 0;
      pcVar8 = pcVar5;
      do {
        if ((&cStack_1d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_240;
      } while (lVar14 != -0x48);
    }
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_278 = acStack_220;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_278);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar9);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_248 = FUN_1056ee750;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar5 = pcVar8;
  pcVar11 = pcVar12;
  pcStack_280 = unaff_x24;
  pcStack_270 = pcVar3;
  pcStack_268 = pcVar10;
  pcStack_260 = pcVar7;
  pcStack_258 = pcVar9;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_2b8;
    func_0x00010002b838(auStack_2b8,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_2a0,pcVar3);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
    pcVar6 = "";
    pcVar5 = acStack_2d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_2c0 = acStack_2d8;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar14 = 0;
    pcVar11 = pcVar12;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar12 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_3a0;
  pcStack_2e8 = FUN_1056ee980;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar8 = pcVar5;
  pcVar3 = pcVar11;
  pcVar9 = pcVar2;
  ppppuStack_2f0 = &pppuStack_250;
  _objc_retain(pcVar6);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  if (pcVar12 != (char *)0x0) {
    plVar16 = *(long **)(pcVar12 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_380,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_368,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_350,pcVar1);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,acStack_380,&lStack_338,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar14 = 0;
    pcVar8 = pcVar7;
    pcVar3 = pcVar2;
    do {
      if ((&cStack_339)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_3a0;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar12 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    _objc_release(pcVar11);
    pcVar2 = acStack_380;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar2);
    _objc_release(pcVar11);
    _objc_release(pcVar5);
    _objc_release(pcVar6);
    pcVar4 = pcVar12;
    __Unwind_Resume();
    pcStack_3a8 = FUN_1056eec40;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar1;
    pcVar10 = pcVar8;
    pcVar13 = pcVar3;
    pcStack_3e0 = unaff_x24;
    pcStack_3d8 = pcVar2;
    pcStack_3d0 = pcVar12;
    pcStack_3c8 = pcVar11;
    pcStack_3c0 = pcVar5;
    pcStack_3b8 = pcVar6;
    ppppuStack_3b0 = &ppppuStack_2f0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar8);
    puVar15 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar16 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x24 = (char *)auStack_418;
      func_0x00010002b838(auStack_418,pcVar12);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar12 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar12 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_400,pcVar12);
      acStack_438[0] = '\0';
      acStack_438[1] = '\0';
      acStack_438[2] = '\0';
      acStack_438[3] = '\0';
      acStack_438[4] = '\0';
      acStack_438[5] = '\0';
      acStack_438[6] = '\0';
      acStack_438[7] = '\0';
      acStack_438[8] = '\0';
      acStack_438[9] = '\0';
      acStack_438[10] = '\0';
      acStack_438[0xb] = '\0';
      acStack_438[0xc] = '\0';
      acStack_438[0xd] = '\0';
      acStack_438[0xe] = '\0';
      acStack_438[0xf] = '\0';
      acStack_438[0x10] = '\0';
      acStack_438[0x11] = '\0';
      acStack_438[0x12] = '\0';
      acStack_438[0x13] = '\0';
      acStack_438[0x14] = '\0';
      acStack_438[0x15] = '\0';
      acStack_438[0x16] = '\0';
      acStack_438[0x17] = '\0';
      func_0x00010007e1e8(acStack_438,auStack_418,&lStack_3e8,2);
      pcVar7 = "\x01";
      pcVar2 = acStack_438;
      pcVar10 = acStack_438;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_420 = pcVar2;
      func_0x00010007e5dc(&pcStack_420);
      lVar14 = 0;
      puVar15 = auStack_418;
      pcVar13 = pcVar3;
      do {
        if ((&cStack_3e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar12 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_401 < '\0') {
      __ZdlPv(auStack_418[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar5 = pcVar12;
    __Unwind_Resume();
    pcStack_448 = FUN_1056eee70;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar7;
    pcVar6 = pcVar10;
    pcVar4 = pcVar13;
    pcStack_480 = unaff_x24;
    pcStack_478 = pcVar2;
    puStack_470 = puVar15;
    pcStack_468 = pcVar12;
    pcStack_460 = pcVar8;
    pcStack_458 = pcVar1;
    ppppuStack_450 = &ppppuStack_3b0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar10);
    puVar15 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar16 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      unaff_x24 = (char *)auStack_4b8;
      func_0x00010002b838(auStack_4b8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_4a0,pcVar1);
      acStack_4d8[0] = '\0';
      acStack_4d8[1] = '\0';
      acStack_4d8[2] = '\0';
      acStack_4d8[3] = '\0';
      acStack_4d8[4] = '\0';
      acStack_4d8[5] = '\0';
      acStack_4d8[6] = '\0';
      acStack_4d8[7] = '\0';
      acStack_4d8[8] = '\0';
      acStack_4d8[9] = '\0';
      acStack_4d8[10] = '\0';
      acStack_4d8[0xb] = '\0';
      acStack_4d8[0xc] = '\0';
      acStack_4d8[0xd] = '\0';
      acStack_4d8[0xe] = '\0';
      acStack_4d8[0xf] = '\0';
      acStack_4d8[0x10] = '\0';
      acStack_4d8[0x11] = '\0';
      acStack_4d8[0x12] = '\0';
      acStack_4d8[0x13] = '\0';
      acStack_4d8[0x14] = '\0';
      acStack_4d8[0x15] = '\0';
      acStack_4d8[0x16] = '\0';
      acStack_4d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_4d8,auStack_4b8,&lStack_488,2);
      pcVar3 = "";
      pcVar2 = acStack_4d8;
      pcVar6 = acStack_4d8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_4c0 = pcVar2;
      func_0x00010007e5dc(&pcStack_4c0);
      lVar14 = 0;
      puVar15 = auStack_4b8;
      pcVar4 = pcVar13;
      do {
        if ((&cStack_489)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_4a1 < '\0') {
      __ZdlPv(auStack_4b8[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    pcVar12 = pcVar1;
    __Unwind_Resume();
    pcVar11 = acStack_560;
    pcStack_4e8 = FUN_1056ef0a0;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar3;
    pcVar5 = pcVar6;
    pcStack_520 = unaff_x24;
    pcStack_518 = pcVar2;
    puStack_510 = puVar15;
    pcStack_508 = pcVar1;
    pcStack_500 = pcVar10;
    pcStack_4f8 = pcVar7;
    ppppuStack_4f0 = &ppppuStack_450;
    _objc_retain(pcVar3);
    if (pcVar12 != (char *)0x0) {
      plVar16 = *(long **)(pcVar12 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      pcVar2 = (char *)auStack_540;
      func_0x00010002b838(auStack_540,pcVar1);
      acStack_560[0] = '\0';
      acStack_560[1] = '\0';
      acStack_560[2] = '\0';
      acStack_560[3] = '\0';
      acStack_560[4] = '\0';
      acStack_560[5] = '\0';
      acStack_560[6] = '\0';
      acStack_560[7] = '\0';
      acStack_560[8] = '\0';
      acStack_560[9] = '\0';
      acStack_560[10] = '\0';
      acStack_560[0xb] = '\0';
      acStack_560[0xc] = '\0';
      acStack_560[0xd] = '\0';
      acStack_560[0xe] = '\0';
      acStack_560[0xf] = '\0';
      acStack_560[0x10] = '\0';
      acStack_560[0x11] = '\0';
      acStack_560[0x12] = '\0';
      acStack_560[0x13] = '\0';
      acStack_560[0x14] = '\0';
      acStack_560[0x15] = '\0';
      acStack_560[0x16] = '\0';
      acStack_560[0x17] = '\0';
      func_0x00010007e1e8(acStack_560,auStack_540,&lStack_528,1);
      pcVar8 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_548 = acStack_560;
      func_0x00010007e5dc(&puStack_548);
      pcVar5 = pcVar11;
      pcVar4 = pcVar6;
      if (cStack_529 < '\0') {
        __ZdlPv(auStack_540[0]);
        pcVar5 = pcVar11;
        pcVar4 = pcVar6;
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar6 = acStack_620;
    pcStack_568 = FUN_1056ef214;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar8;
    pcVar3 = pcVar5;
    pcVar7 = pcVar4;
    pcVar10 = pcVar9;
    ppppuStack_570 = &ppppuStack_4f0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar4);
    if (pcVar1 != (char *)0x0) {
      plVar16 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(acStack_600,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_5e8,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_5d0,pcVar1);
      acStack_620[0] = '\0';
      acStack_620[1] = '\0';
      acStack_620[2] = '\0';
      acStack_620[3] = '\0';
      acStack_620[4] = '\0';
      acStack_620[5] = '\0';
      acStack_620[6] = '\0';
      acStack_620[7] = '\0';
      acStack_620[8] = '\0';
      acStack_620[9] = '\0';
      acStack_620[10] = '\0';
      acStack_620[0xb] = '\0';
      acStack_620[0xc] = '\0';
      acStack_620[0xd] = '\0';
      acStack_620[0xe] = '\0';
      acStack_620[0xf] = '\0';
      acStack_620[0x10] = '\0';
      acStack_620[0x11] = '\0';
      acStack_620[0x12] = '\0';
      acStack_620[0x13] = '\0';
      acStack_620[0x14] = '\0';
      acStack_620[0x15] = '\0';
      acStack_620[0x16] = '\0';
      acStack_620[0x17] = '\0';
      func_0x00010007e1e8(acStack_620,acStack_600,&lStack_5b8,3);
      pcVar12 = "\x01";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_608 = acStack_620;
      func_0x00010007e5dc(&puStack_608);
      lVar14 = 0;
      pcVar3 = pcVar6;
      pcVar7 = pcVar9;
      do {
        if ((&cStack_5b9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar2 = acStack_620;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar4);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_600);
      _objc_release(pcVar4);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar4 = acStack_6e0;
      pcStack_628 = FUN_1056ef48c;
      lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar12;
      pcVar9 = pcVar3;
      pcVar6 = pcVar7;
      pcVar5 = pcVar10;
      ppppuStack_630 = &ppppuStack_570;
      _objc_retain(pcVar12);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x00010002b838(acStack_6c0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_6a8,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_690,pcVar1);
        acStack_6e0[0] = '\0';
        acStack_6e0[1] = '\0';
        acStack_6e0[2] = '\0';
        acStack_6e0[3] = '\0';
        acStack_6e0[4] = '\0';
        acStack_6e0[5] = '\0';
        acStack_6e0[6] = '\0';
        acStack_6e0[7] = '\0';
        acStack_6e0[8] = '\0';
        acStack_6e0[9] = '\0';
        acStack_6e0[10] = '\0';
        acStack_6e0[0xb] = '\0';
        acStack_6e0[0xc] = '\0';
        acStack_6e0[0xd] = '\0';
        acStack_6e0[0xe] = '\0';
        acStack_6e0[0xf] = '\0';
        acStack_6e0[0x10] = '\0';
        acStack_6e0[0x11] = '\0';
        acStack_6e0[0x12] = '\0';
        acStack_6e0[0x13] = '\0';
        acStack_6e0[0x14] = '\0';
        acStack_6e0[0x15] = '\0';
        acStack_6e0[0x16] = '\0';
        acStack_6e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_6e0,acStack_6c0,&lStack_678,3);
        pcVar8 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_6c8 = acStack_6e0;
        func_0x00010007e5dc(&puStack_6c8);
        lVar14 = 0;
        pcVar9 = pcVar4;
        pcVar6 = pcVar10;
        do {
          if ((&cStack_679)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_690 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar2 = acStack_6e0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_6c0);
      _objc_release(pcVar7);
      _objc_release(pcVar12);
      __Unwind_Resume();
      pcVar4 = acStack_7a0;
      pcStack_6e8 = FUN_1056ef704;
      lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar12 = pcVar8;
      pcVar3 = pcVar9;
      pcVar7 = pcVar6;
      pcVar10 = pcVar5;
      ppppuStack_6f0 = &ppppuStack_630;
      _objc_retain(pcVar8);
      _objc_retain(pcVar6);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(acStack_780,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar9 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_768,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_750,pcVar1);
        acStack_7a0[0] = '\0';
        acStack_7a0[1] = '\0';
        acStack_7a0[2] = '\0';
        acStack_7a0[3] = '\0';
        acStack_7a0[4] = '\0';
        acStack_7a0[5] = '\0';
        acStack_7a0[6] = '\0';
        acStack_7a0[7] = '\0';
        acStack_7a0[8] = '\0';
        acStack_7a0[9] = '\0';
        acStack_7a0[10] = '\0';
        acStack_7a0[0xb] = '\0';
        acStack_7a0[0xc] = '\0';
        acStack_7a0[0xd] = '\0';
        acStack_7a0[0xe] = '\0';
        acStack_7a0[0xf] = '\0';
        acStack_7a0[0x10] = '\0';
        acStack_7a0[0x11] = '\0';
        acStack_7a0[0x12] = '\0';
        acStack_7a0[0x13] = '\0';
        acStack_7a0[0x14] = '\0';
        acStack_7a0[0x15] = '\0';
        acStack_7a0[0x16] = '\0';
        acStack_7a0[0x17] = '\0';
        func_0x00010007e1e8(acStack_7a0,acStack_780,&lStack_738,3);
        pcVar12 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_788 = acStack_7a0;
        func_0x00010007e5dc(&puStack_788);
        lVar14 = 0;
        pcVar3 = pcVar4;
        pcVar7 = pcVar5;
        do {
          if ((&cStack_739)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_750 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar2 = acStack_7a0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar6);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar6);
      do {
        pcVar2 = pcVar2 + -0x18;
      } while (pcVar2 != acStack_780);
      _objc_release(pcVar6);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcVar6 = acStack_860;
      pcStack_7a8 = FUN_1056ef97c;
      lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar12;
      pcVar9 = pcVar3;
      ppppuStack_7b0 = &ppppuStack_6f0;
      _objc_retain(pcVar12);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x00010002b838(acStack_840,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_828,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar3 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_810,pcVar3);
        acStack_860[0] = '\0';
        acStack_860[1] = '\0';
        acStack_860[2] = '\0';
        acStack_860[3] = '\0';
        acStack_860[4] = '\0';
        acStack_860[5] = '\0';
        acStack_860[6] = '\0';
        acStack_860[7] = '\0';
        acStack_860[8] = '\0';
        acStack_860[9] = '\0';
        acStack_860[10] = '\0';
        acStack_860[0xb] = '\0';
        acStack_860[0xc] = '\0';
        acStack_860[0xd] = '\0';
        acStack_860[0xe] = '\0';
        acStack_860[0xf] = '\0';
        acStack_860[0x10] = '\0';
        acStack_860[0x11] = '\0';
        acStack_860[0x12] = '\0';
        acStack_860[0x13] = '\0';
        acStack_860[0x14] = '\0';
        acStack_860[0x15] = '\0';
        acStack_860[0x16] = '\0';
        acStack_860[0x17] = '\0';
        func_0x00010007e1e8(acStack_860,acStack_840,&lStack_7f8,3);
        pcVar8 = "";
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab30,acStack_860,pcVar10);
        puStack_848 = acStack_860;
        func_0x00010007e5dc(&puStack_848);
        lVar14 = 0;
        pcVar9 = pcVar6;
        do {
          if ((&cStack_7f9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_810 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar2 = acStack_860;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7f8) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        do {
          pcVar2 = pcVar2 + -0x18;
        } while (pcVar2 != acStack_840);
        _objc_release(pcVar7);
        _objc_release(pcVar12);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        pcVar4 = acStack_8e0;
        pcStack_868 = FUN_1056efbf4;
        lStack_8a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar10 = pcVar8;
        pcVar5 = pcVar9;
        pcStack_8a0 = pcVar3;
        pcStack_898 = pcVar2;
        pcStack_890 = acStack_840;
        pcStack_888 = pcVar1;
        pcStack_880 = pcVar7;
        pcStack_878 = pcVar12;
        ppppuStack_870 = &ppppuStack_7b0;
        _objc_retain(pcVar8);
        plVar16 = (long *)0x0;
        pcVar1 = acStack_840;
        if (pcVar6 != (char *)0x0) {
          plVar16 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar8;
            _objc_retainAutorelease(pcVar8);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar8);
          pcVar2 = (char *)auStack_8c0;
          func_0x00010002b838(auStack_8c0,pcVar1);
          acStack_8e0[0] = '\0';
          acStack_8e0[1] = '\0';
          acStack_8e0[2] = '\0';
          acStack_8e0[3] = '\0';
          acStack_8e0[4] = '\0';
          acStack_8e0[5] = '\0';
          acStack_8e0[6] = '\0';
          acStack_8e0[7] = '\0';
          acStack_8e0[8] = '\0';
          acStack_8e0[9] = '\0';
          acStack_8e0[10] = '\0';
          acStack_8e0[0xb] = '\0';
          acStack_8e0[0xc] = '\0';
          acStack_8e0[0xd] = '\0';
          acStack_8e0[0xe] = '\0';
          acStack_8e0[0xf] = '\0';
          acStack_8e0[0x10] = '\0';
          acStack_8e0[0x11] = '\0';
          acStack_8e0[0x12] = '\0';
          acStack_8e0[0x13] = '\0';
          acStack_8e0[0x14] = '\0';
          acStack_8e0[0x15] = '\0';
          acStack_8e0[0x16] = '\0';
          acStack_8e0[0x17] = '\0';
          func_0x00010007e1e8(acStack_8e0,auStack_8c0,&lStack_8a8,1);
          pcVar10 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab80,acStack_8e0,pcVar9);
          puStack_8c8 = acStack_8e0;
          func_0x00010007e5dc(&puStack_8c8);
          pcVar5 = pcVar4;
          pcVar1 = acStack_8e0;
          if (cStack_8a9 < '\0') {
            __ZdlPv(auStack_8c0[0]);
            pcVar5 = pcVar4;
            pcVar1 = acStack_8e0;
          }
        }
        pcVar12 = pcVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8a8) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar8);
        _objc_release(pcVar8);
        pcVar7 = pcVar12;
        __Unwind_Resume();
        pcVar4 = acStack_960;
        pcStack_8e8 = FUN_1056efd68;
        lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar9 = pcVar10;
        pcVar6 = pcVar5;
        pcStack_920 = pcVar3;
        pcStack_918 = pcVar2;
        pcStack_910 = pcVar1;
        plStack_908 = plVar16;
        pcStack_900 = pcVar12;
        pcStack_8f8 = pcVar8;
        ppppuStack_8f0 = &ppppuStack_870;
        _objc_retain(pcVar10);
        plVar16 = (long *)0x0;
        if (pcVar7 != (char *)0x0) {
          plVar16 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar10);
          if (pcVar10 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar10;
            _objc_retainAutorelease(pcVar10);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar10);
          pcVar2 = (char *)auStack_940;
          func_0x00010002b838(auStack_940,pcVar1);
          acStack_960[0] = '\0';
          acStack_960[1] = '\0';
          acStack_960[2] = '\0';
          acStack_960[3] = '\0';
          acStack_960[4] = '\0';
          acStack_960[5] = '\0';
          acStack_960[6] = '\0';
          acStack_960[7] = '\0';
          acStack_960[8] = '\0';
          acStack_960[9] = '\0';
          acStack_960[10] = '\0';
          acStack_960[0xb] = '\0';
          acStack_960[0xc] = '\0';
          acStack_960[0xd] = '\0';
          acStack_960[0xe] = '\0';
          acStack_960[0xf] = '\0';
          acStack_960[0x10] = '\0';
          acStack_960[0x11] = '\0';
          acStack_960[0x12] = '\0';
          acStack_960[0x13] = '\0';
          acStack_960[0x14] = '\0';
          acStack_960[0x15] = '\0';
          acStack_960[0x16] = '\0';
          acStack_960[0x17] = '\0';
          func_0x00010007e1e8(acStack_960,auStack_940,&lStack_928,1);
          pcVar9 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aabd0,acStack_960,pcVar5);
          puStack_948 = acStack_960;
          func_0x00010007e5dc(&puStack_948);
          pcVar6 = pcVar4;
          pcVar1 = acStack_960;
          if (cStack_929 < '\0') {
            __ZdlPv(auStack_940[0]);
            pcVar6 = pcVar4;
            pcVar1 = acStack_960;
          }
        }
        pcVar8 = pcVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_928) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar10);
        _objc_release(pcVar10);
        pcVar7 = pcVar8;
        __Unwind_Resume();
        pcStack_968 = FUN_1056efedc;
        lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar12 = pcVar9;
        pcStack_9a0 = pcVar3;
        pcStack_998 = pcVar2;
        pcStack_990 = pcVar1;
        plStack_988 = plVar16;
        pcStack_980 = pcVar8;
        pcStack_978 = pcVar10;
        ppppuStack_970 = &ppppuStack_8f0;
        _objc_retain(pcVar9);
        if (pcVar7 != (char *)0x0) {
          plVar16 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar9;
            _objc_retainAutorelease(pcVar9);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar9);
          func_0x00010002b838(auStack_9c0,pcVar1);
          uStack_9e0 = 0;
          uStack_9d8 = 0;
          uStack_9d0 = 0;
          func_0x00010007e1e8(&uStack_9e0,auStack_9c0,&lStack_9a8,1);
          pcVar12 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aac20,&uStack_9e0,pcVar6);
          puStack_9c8 = (undefined1 *)&uStack_9e0;
          func_0x00010007e5dc(&puStack_9c8);
          if (cStack_9a9 < '\0') {
            __ZdlPv(auStack_9c0[0]);
          }
        }
        pcVar1 = pcVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9a8) {
          ___stack_chk_fail();
          _objc_release(pcVar9);
          _objc_release(pcVar9);
          pcVar8 = pcVar1;
          __Unwind_Resume();
          puStack_a08 = (undefined1 *)&uStack_a20;
          pcStack_9e8 = FUN_1056f0050;
          if (pcVar8 != (char *)0x0) {
            uStack_a20 = 0;
            uStack_a18 = 0;
            uStack_a10 = 0;
            pcStack_a00 = pcVar1;
            pcStack_9f8 = pcVar9;
            ppppuStack_9f0 = &ppppuStack_970;
            (**(code **)(**(long **)(pcVar8 + 8) + 0x18))
                      (*(long **)(pcVar8 + 8),&UNK_1108aac70,&uStack_a20,pcVar12);
            func_0x00010007e5dc(&puStack_a08);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ee1ac; end: 1056ee46b;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056ee434) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ee1ac(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x24;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined1 *puStack_948;
  char *pcStack_940;
  char *pcStack_938;
  undefined8 ****ppppuStack_930;
  code *pcStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  char *pcStack_8e0;
  char *pcStack_8d8;
  char *pcStack_8d0;
  long *plStack_8c8;
  char *pcStack_8c0;
  char *pcStack_8b8;
  undefined8 ****ppppuStack_8b0;
  code *pcStack_8a8;
  char acStack_8a0 [24];
  undefined1 *puStack_888;
  undefined8 auStack_880 [2];
  char cStack_869;
  long lStack_868;
  char *pcStack_860;
  char *pcStack_858;
  char *pcStack_850;
  long *plStack_848;
  char *pcStack_840;
  char *pcStack_838;
  undefined8 ****ppppuStack_830;
  code *pcStack_828;
  char acStack_820 [24];
  undefined1 *puStack_808;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  char *pcStack_7e0;
  char *pcStack_7d8;
  char *pcStack_7d0;
  char *pcStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  undefined8 ****ppppuStack_7b0;
  code *pcStack_7a8;
  char acStack_7a0 [24];
  undefined1 *puStack_788;
  char acStack_780 [24];
  undefined1 auStack_768 [24];
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6e0 [24];
  undefined1 *puStack_6c8;
  char acStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_620 [24];
  undefined1 *puStack_608;
  char acStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  char acStack_560 [24];
  undefined1 *puStack_548;
  char acStack_540 [24];
  undefined1 auStack_528 [24];
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  char acStack_4a0 [24];
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 *puStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_418 [24];
  char *pcStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  char acStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar6 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar9 = pcVar2;
    pcVar6 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_180;
  pcStack_c8 = FUN_1056ee46c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar9;
  pcVar12 = pcVar6;
  pcVar7 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar16 = *(long **)(pcVar2 + 8);
    pcVar8 = "";
    (**(code **)(*plVar16 + 0x28))();
    if ((int)plVar16 != 0) {
      plVar16 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_160,pcVar2);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar2 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_148,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_130,pcVar2);
      acStack_180[0] = '\0';
      acStack_180[1] = '\0';
      acStack_180[2] = '\0';
      acStack_180[3] = '\0';
      acStack_180[4] = '\0';
      acStack_180[5] = '\0';
      acStack_180[6] = '\0';
      acStack_180[7] = '\0';
      acStack_180[8] = '\0';
      acStack_180[9] = '\0';
      acStack_180[10] = '\0';
      acStack_180[0xb] = '\0';
      acStack_180[0xc] = '\0';
      acStack_180[0xd] = '\0';
      acStack_180[0xe] = '\0';
      acStack_180[0xf] = '\0';
      acStack_180[0x10] = '\0';
      acStack_180[0x11] = '\0';
      acStack_180[0x12] = '\0';
      acStack_180[0x13] = '\0';
      acStack_180[0x14] = '\0';
      acStack_180[0x15] = '\0';
      acStack_180[0x16] = '\0';
      acStack_180[0x17] = '\0';
      func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
      pcVar12 = (char *)((long)pcVar3 * 10);
      pcVar8 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_168 = acStack_180;
      func_0x00010007e5dc(&puStack_168);
      lVar14 = 0;
      pcVar10 = pcVar5;
      do {
        if ((&cStack_119)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = acStack_180;
      } while (lVar14 != -0x48);
    }
  }
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_1b8 = acStack_160;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_1b8);
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_1056ee750;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar5 = pcVar10;
  pcVar11 = pcVar12;
  pcStack_1c0 = unaff_x24;
  pcStack_1b0 = pcVar3;
  pcStack_1a8 = pcVar6;
  pcStack_1a0 = pcVar9;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1e0,pcVar1);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar2 = "";
    pcVar5 = acStack_218;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_200 = acStack_218;
    func_0x00010007e5dc(&pcStack_200);
    lVar14 = 0;
    pcVar11 = pcVar12;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar10 = acStack_2e0;
  pcStack_228 = FUN_1056ee980;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar6 = pcVar5;
  pcVar3 = pcVar11;
  pcVar8 = pcVar7;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar16 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_2c0,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_2a8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_290,pcVar1);
    acStack_2e0[0] = '\0';
    acStack_2e0[1] = '\0';
    acStack_2e0[2] = '\0';
    acStack_2e0[3] = '\0';
    acStack_2e0[4] = '\0';
    acStack_2e0[5] = '\0';
    acStack_2e0[6] = '\0';
    acStack_2e0[7] = '\0';
    acStack_2e0[8] = '\0';
    acStack_2e0[9] = '\0';
    acStack_2e0[10] = '\0';
    acStack_2e0[0xb] = '\0';
    acStack_2e0[0xc] = '\0';
    acStack_2e0[0xd] = '\0';
    acStack_2e0[0xe] = '\0';
    acStack_2e0[0xf] = '\0';
    acStack_2e0[0x10] = '\0';
    acStack_2e0[0x11] = '\0';
    acStack_2e0[0x12] = '\0';
    acStack_2e0[0x13] = '\0';
    acStack_2e0[0x14] = '\0';
    acStack_2e0[0x15] = '\0';
    acStack_2e0[0x16] = '\0';
    acStack_2e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2e0,acStack_2c0,&lStack_278,3);
    pcVar9 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_2c8 = acStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar14 = 0;
    pcVar6 = pcVar10;
    pcVar3 = pcVar7;
    do {
      if ((&cStack_279)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_2e0;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    _objc_release(pcVar11);
    pcVar10 = acStack_2c0;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar10);
    _objc_release(pcVar11);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_2e8 = FUN_1056eec40;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar9;
    pcVar7 = pcVar6;
    pcVar13 = pcVar3;
    pcStack_320 = unaff_x24;
    pcStack_318 = pcVar10;
    pcStack_310 = pcVar1;
    pcStack_308 = pcVar11;
    pcStack_300 = pcVar5;
    pcStack_2f8 = pcVar2;
    ppppuStack_2f0 = &pppuStack_230;
    _objc_retain(pcVar9);
    _objc_retain(pcVar6);
    puVar15 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar16 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x24 = (char *)auStack_358;
      func_0x00010002b838(auStack_358,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_340,pcVar1);
      acStack_378[0] = '\0';
      acStack_378[1] = '\0';
      acStack_378[2] = '\0';
      acStack_378[3] = '\0';
      acStack_378[4] = '\0';
      acStack_378[5] = '\0';
      acStack_378[6] = '\0';
      acStack_378[7] = '\0';
      acStack_378[8] = '\0';
      acStack_378[9] = '\0';
      acStack_378[10] = '\0';
      acStack_378[0xb] = '\0';
      acStack_378[0xc] = '\0';
      acStack_378[0xd] = '\0';
      acStack_378[0xe] = '\0';
      acStack_378[0xf] = '\0';
      acStack_378[0x10] = '\0';
      acStack_378[0x11] = '\0';
      acStack_378[0x12] = '\0';
      acStack_378[0x13] = '\0';
      acStack_378[0x14] = '\0';
      acStack_378[0x15] = '\0';
      acStack_378[0x16] = '\0';
      acStack_378[0x17] = '\0';
      func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
      pcVar12 = "\x01";
      pcVar10 = acStack_378;
      pcVar7 = acStack_378;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_360 = pcVar10;
      func_0x00010007e5dc(&pcStack_360);
      lVar14 = 0;
      puVar15 = auStack_358;
      pcVar13 = pcVar3;
      do {
        if ((&cStack_329)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_341 < '\0') {
      __ZdlPv(auStack_358[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar9);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_388 = FUN_1056eee70;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar12;
    pcVar2 = pcVar7;
    pcVar4 = pcVar13;
    pcStack_3c0 = unaff_x24;
    pcStack_3b8 = pcVar10;
    puStack_3b0 = puVar15;
    pcStack_3a8 = pcVar1;
    pcStack_3a0 = pcVar6;
    pcStack_398 = pcVar9;
    ppppuStack_390 = &ppppuStack_2f0;
    _objc_retain(pcVar12);
    _objc_retain(pcVar7);
    puVar15 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar16 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      unaff_x24 = (char *)auStack_3f8;
      func_0x00010002b838(auStack_3f8,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_3e0,pcVar1);
      acStack_418[0] = '\0';
      acStack_418[1] = '\0';
      acStack_418[2] = '\0';
      acStack_418[3] = '\0';
      acStack_418[4] = '\0';
      acStack_418[5] = '\0';
      acStack_418[6] = '\0';
      acStack_418[7] = '\0';
      acStack_418[8] = '\0';
      acStack_418[9] = '\0';
      acStack_418[10] = '\0';
      acStack_418[0xb] = '\0';
      acStack_418[0xc] = '\0';
      acStack_418[0xd] = '\0';
      acStack_418[0xe] = '\0';
      acStack_418[0xf] = '\0';
      acStack_418[0x10] = '\0';
      acStack_418[0x11] = '\0';
      acStack_418[0x12] = '\0';
      acStack_418[0x13] = '\0';
      acStack_418[0x14] = '\0';
      acStack_418[0x15] = '\0';
      acStack_418[0x16] = '\0';
      acStack_418[0x17] = '\0';
      func_0x00010007e1e8(acStack_418,auStack_3f8,&lStack_3c8,2);
      pcVar3 = "";
      pcVar10 = acStack_418;
      pcVar2 = acStack_418;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcStack_400 = pcVar10;
      func_0x00010007e5dc(&pcStack_400);
      lVar14 = 0;
      puVar15 = auStack_3f8;
      pcVar4 = pcVar13;
      do {
        if ((&cStack_3c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar12);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcVar11 = acStack_4a0;
    pcStack_428 = FUN_1056ef0a0;
    lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar3;
    pcVar5 = pcVar2;
    pcStack_460 = unaff_x24;
    pcStack_458 = pcVar10;
    puStack_450 = puVar15;
    pcStack_448 = pcVar1;
    pcStack_440 = pcVar7;
    pcStack_438 = pcVar12;
    ppppuStack_430 = &ppppuStack_390;
    _objc_retain(pcVar3);
    if (pcVar6 != (char *)0x0) {
      plVar16 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      pcVar10 = (char *)auStack_480;
      func_0x00010002b838(auStack_480,pcVar1);
      acStack_4a0[0] = '\0';
      acStack_4a0[1] = '\0';
      acStack_4a0[2] = '\0';
      acStack_4a0[3] = '\0';
      acStack_4a0[4] = '\0';
      acStack_4a0[5] = '\0';
      acStack_4a0[6] = '\0';
      acStack_4a0[7] = '\0';
      acStack_4a0[8] = '\0';
      acStack_4a0[9] = '\0';
      acStack_4a0[10] = '\0';
      acStack_4a0[0xb] = '\0';
      acStack_4a0[0xc] = '\0';
      acStack_4a0[0xd] = '\0';
      acStack_4a0[0xe] = '\0';
      acStack_4a0[0xf] = '\0';
      acStack_4a0[0x10] = '\0';
      acStack_4a0[0x11] = '\0';
      acStack_4a0[0x12] = '\0';
      acStack_4a0[0x13] = '\0';
      acStack_4a0[0x14] = '\0';
      acStack_4a0[0x15] = '\0';
      acStack_4a0[0x16] = '\0';
      acStack_4a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4a0,auStack_480,&lStack_468,1);
      pcVar9 = "";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_488 = acStack_4a0;
      func_0x00010007e5dc(&puStack_488);
      pcVar5 = pcVar11;
      pcVar4 = pcVar2;
      if (cStack_469 < '\0') {
        __ZdlPv(auStack_480[0]);
        pcVar5 = pcVar11;
        pcVar4 = pcVar2;
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar7 = acStack_560;
    pcStack_4a8 = FUN_1056ef214;
    lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar9;
    pcVar3 = pcVar5;
    pcVar2 = pcVar4;
    pcVar12 = pcVar8;
    ppppuStack_4b0 = &ppppuStack_430;
    _objc_retain(pcVar9);
    _objc_retain(pcVar4);
    if (pcVar1 != (char *)0x0) {
      plVar16 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_540,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_528,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_510,pcVar1);
      acStack_560[0] = '\0';
      acStack_560[1] = '\0';
      acStack_560[2] = '\0';
      acStack_560[3] = '\0';
      acStack_560[4] = '\0';
      acStack_560[5] = '\0';
      acStack_560[6] = '\0';
      acStack_560[7] = '\0';
      acStack_560[8] = '\0';
      acStack_560[9] = '\0';
      acStack_560[10] = '\0';
      acStack_560[0xb] = '\0';
      acStack_560[0xc] = '\0';
      acStack_560[0xd] = '\0';
      acStack_560[0xe] = '\0';
      acStack_560[0xf] = '\0';
      acStack_560[0x10] = '\0';
      acStack_560[0x11] = '\0';
      acStack_560[0x12] = '\0';
      acStack_560[0x13] = '\0';
      acStack_560[0x14] = '\0';
      acStack_560[0x15] = '\0';
      acStack_560[0x16] = '\0';
      acStack_560[0x17] = '\0';
      func_0x00010007e1e8(acStack_560,acStack_540,&lStack_4f8,3);
      pcVar6 = "\x01";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_548 = acStack_560;
      func_0x00010007e5dc(&puStack_548);
      lVar14 = 0;
      pcVar3 = pcVar7;
      pcVar2 = pcVar8;
      do {
        if ((&cStack_4f9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_510 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar10 = acStack_560;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar4);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != acStack_540);
      _objc_release(pcVar4);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar4 = acStack_620;
      pcStack_568 = FUN_1056ef48c;
      lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar6;
      pcVar8 = pcVar3;
      pcVar7 = pcVar2;
      pcVar5 = pcVar12;
      ppppuStack_570 = &ppppuStack_4b0;
      _objc_retain(pcVar6);
      _objc_retain(pcVar2);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_600,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_5e8,pcVar1);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar1 = pcVar2;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_5d0,pcVar1);
        acStack_620[0] = '\0';
        acStack_620[1] = '\0';
        acStack_620[2] = '\0';
        acStack_620[3] = '\0';
        acStack_620[4] = '\0';
        acStack_620[5] = '\0';
        acStack_620[6] = '\0';
        acStack_620[7] = '\0';
        acStack_620[8] = '\0';
        acStack_620[9] = '\0';
        acStack_620[10] = '\0';
        acStack_620[0xb] = '\0';
        acStack_620[0xc] = '\0';
        acStack_620[0xd] = '\0';
        acStack_620[0xe] = '\0';
        acStack_620[0xf] = '\0';
        acStack_620[0x10] = '\0';
        acStack_620[0x11] = '\0';
        acStack_620[0x12] = '\0';
        acStack_620[0x13] = '\0';
        acStack_620[0x14] = '\0';
        acStack_620[0x15] = '\0';
        acStack_620[0x16] = '\0';
        acStack_620[0x17] = '\0';
        func_0x00010007e1e8(acStack_620,acStack_600,&lStack_5b8,3);
        pcVar9 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_608 = acStack_620;
        func_0x00010007e5dc(&puStack_608);
        lVar14 = 0;
        pcVar8 = pcVar4;
        pcVar7 = pcVar12;
        do {
          if ((&cStack_5b9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_620;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar2);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != acStack_600);
      _objc_release(pcVar2);
      _objc_release(pcVar6);
      __Unwind_Resume();
      pcVar4 = acStack_6e0;
      pcStack_628 = FUN_1056ef704;
      lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar9;
      pcVar3 = pcVar8;
      pcVar2 = pcVar7;
      pcVar12 = pcVar5;
      ppppuStack_630 = &ppppuStack_570;
      _objc_retain(pcVar9);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(acStack_6c0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar8 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_6a8,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_690,pcVar1);
        acStack_6e0[0] = '\0';
        acStack_6e0[1] = '\0';
        acStack_6e0[2] = '\0';
        acStack_6e0[3] = '\0';
        acStack_6e0[4] = '\0';
        acStack_6e0[5] = '\0';
        acStack_6e0[6] = '\0';
        acStack_6e0[7] = '\0';
        acStack_6e0[8] = '\0';
        acStack_6e0[9] = '\0';
        acStack_6e0[10] = '\0';
        acStack_6e0[0xb] = '\0';
        acStack_6e0[0xc] = '\0';
        acStack_6e0[0xd] = '\0';
        acStack_6e0[0xe] = '\0';
        acStack_6e0[0xf] = '\0';
        acStack_6e0[0x10] = '\0';
        acStack_6e0[0x11] = '\0';
        acStack_6e0[0x12] = '\0';
        acStack_6e0[0x13] = '\0';
        acStack_6e0[0x14] = '\0';
        acStack_6e0[0x15] = '\0';
        acStack_6e0[0x16] = '\0';
        acStack_6e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_6e0,acStack_6c0,&lStack_678,3);
        pcVar6 = "\x01";
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_6c8 = acStack_6e0;
        func_0x00010007e5dc(&puStack_6c8);
        lVar14 = 0;
        pcVar3 = pcVar4;
        pcVar2 = pcVar5;
        do {
          if ((&cStack_679)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_690 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_6e0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != acStack_6c0);
      _objc_release(pcVar7);
      _objc_release(pcVar9);
      __Unwind_Resume();
      pcVar7 = acStack_7a0;
      pcStack_6e8 = FUN_1056ef97c;
      lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar6;
      pcVar8 = pcVar3;
      ppppuStack_6f0 = &ppppuStack_630;
      _objc_retain(pcVar6);
      _objc_retain(pcVar2);
      if (pcVar1 != (char *)0x0) {
        plVar16 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_780,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_768,pcVar1);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar3 = pcVar2;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_750,pcVar3);
        acStack_7a0[0] = '\0';
        acStack_7a0[1] = '\0';
        acStack_7a0[2] = '\0';
        acStack_7a0[3] = '\0';
        acStack_7a0[4] = '\0';
        acStack_7a0[5] = '\0';
        acStack_7a0[6] = '\0';
        acStack_7a0[7] = '\0';
        acStack_7a0[8] = '\0';
        acStack_7a0[9] = '\0';
        acStack_7a0[10] = '\0';
        acStack_7a0[0xb] = '\0';
        acStack_7a0[0xc] = '\0';
        acStack_7a0[0xd] = '\0';
        acStack_7a0[0xe] = '\0';
        acStack_7a0[0xf] = '\0';
        acStack_7a0[0x10] = '\0';
        acStack_7a0[0x11] = '\0';
        acStack_7a0[0x12] = '\0';
        acStack_7a0[0x13] = '\0';
        acStack_7a0[0x14] = '\0';
        acStack_7a0[0x15] = '\0';
        acStack_7a0[0x16] = '\0';
        acStack_7a0[0x17] = '\0';
        func_0x00010007e1e8(acStack_7a0,acStack_780,&lStack_738,3);
        pcVar9 = "";
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab30,acStack_7a0,pcVar12);
        puStack_788 = acStack_7a0;
        func_0x00010007e5dc(&puStack_788);
        lVar14 = 0;
        pcVar8 = pcVar7;
        do {
          if ((&cStack_739)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_750 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar10 = acStack_7a0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar2);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_738) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        do {
          pcVar10 = pcVar10 + -0x18;
        } while (pcVar10 != acStack_780);
        _objc_release(pcVar2);
        _objc_release(pcVar6);
        pcVar7 = pcVar1;
        __Unwind_Resume();
        pcVar4 = acStack_820;
        pcStack_7a8 = FUN_1056efbf4;
        lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar12 = pcVar9;
        pcVar5 = pcVar8;
        pcStack_7e0 = pcVar3;
        pcStack_7d8 = pcVar10;
        pcStack_7d0 = acStack_780;
        pcStack_7c8 = pcVar1;
        pcStack_7c0 = pcVar2;
        pcStack_7b8 = pcVar6;
        ppppuStack_7b0 = &ppppuStack_6f0;
        _objc_retain(pcVar9);
        plVar16 = (long *)0x0;
        pcVar1 = acStack_780;
        if (pcVar7 != (char *)0x0) {
          plVar16 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar9;
            _objc_retainAutorelease(pcVar9);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar9);
          pcVar10 = (char *)auStack_800;
          func_0x00010002b838(auStack_800,pcVar1);
          acStack_820[0] = '\0';
          acStack_820[1] = '\0';
          acStack_820[2] = '\0';
          acStack_820[3] = '\0';
          acStack_820[4] = '\0';
          acStack_820[5] = '\0';
          acStack_820[6] = '\0';
          acStack_820[7] = '\0';
          acStack_820[8] = '\0';
          acStack_820[9] = '\0';
          acStack_820[10] = '\0';
          acStack_820[0xb] = '\0';
          acStack_820[0xc] = '\0';
          acStack_820[0xd] = '\0';
          acStack_820[0xe] = '\0';
          acStack_820[0xf] = '\0';
          acStack_820[0x10] = '\0';
          acStack_820[0x11] = '\0';
          acStack_820[0x12] = '\0';
          acStack_820[0x13] = '\0';
          acStack_820[0x14] = '\0';
          acStack_820[0x15] = '\0';
          acStack_820[0x16] = '\0';
          acStack_820[0x17] = '\0';
          func_0x00010007e1e8(acStack_820,auStack_800,&lStack_7e8,1);
          pcVar12 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aab80,acStack_820,pcVar8);
          puStack_808 = acStack_820;
          func_0x00010007e5dc(&puStack_808);
          pcVar5 = pcVar4;
          pcVar1 = acStack_820;
          if (cStack_7e9 < '\0') {
            __ZdlPv(auStack_800[0]);
            pcVar5 = pcVar4;
            pcVar1 = acStack_820;
          }
        }
        pcVar6 = pcVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar9);
        _objc_release(pcVar9);
        pcVar8 = pcVar6;
        __Unwind_Resume();
        pcVar4 = acStack_8a0;
        pcStack_828 = FUN_1056efd68;
        lStack_868 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar12;
        pcVar7 = pcVar5;
        pcStack_860 = pcVar3;
        pcStack_858 = pcVar10;
        pcStack_850 = pcVar1;
        plStack_848 = plVar16;
        pcStack_840 = pcVar6;
        pcStack_838 = pcVar9;
        ppppuStack_830 = &ppppuStack_7b0;
        _objc_retain(pcVar12);
        plVar16 = (long *)0x0;
        if (pcVar8 != (char *)0x0) {
          plVar16 = *(long **)(pcVar8 + 8);
          _objc_retain(pcVar12);
          if (pcVar12 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar12;
            _objc_retainAutorelease(pcVar12);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar12);
          pcVar10 = (char *)auStack_880;
          func_0x00010002b838(auStack_880,pcVar1);
          acStack_8a0[0] = '\0';
          acStack_8a0[1] = '\0';
          acStack_8a0[2] = '\0';
          acStack_8a0[3] = '\0';
          acStack_8a0[4] = '\0';
          acStack_8a0[5] = '\0';
          acStack_8a0[6] = '\0';
          acStack_8a0[7] = '\0';
          acStack_8a0[8] = '\0';
          acStack_8a0[9] = '\0';
          acStack_8a0[10] = '\0';
          acStack_8a0[0xb] = '\0';
          acStack_8a0[0xc] = '\0';
          acStack_8a0[0xd] = '\0';
          acStack_8a0[0xe] = '\0';
          acStack_8a0[0xf] = '\0';
          acStack_8a0[0x10] = '\0';
          acStack_8a0[0x11] = '\0';
          acStack_8a0[0x12] = '\0';
          acStack_8a0[0x13] = '\0';
          acStack_8a0[0x14] = '\0';
          acStack_8a0[0x15] = '\0';
          acStack_8a0[0x16] = '\0';
          acStack_8a0[0x17] = '\0';
          func_0x00010007e1e8(acStack_8a0,auStack_880,&lStack_868,1);
          pcVar2 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aabd0,acStack_8a0,pcVar5);
          puStack_888 = acStack_8a0;
          func_0x00010007e5dc(&puStack_888);
          pcVar7 = pcVar4;
          pcVar1 = acStack_8a0;
          if (cStack_869 < '\0') {
            __ZdlPv(auStack_880[0]);
            pcVar7 = pcVar4;
            pcVar1 = acStack_8a0;
          }
        }
        pcVar9 = pcVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_868) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar12);
        _objc_release(pcVar12);
        pcVar8 = pcVar9;
        __Unwind_Resume();
        pcStack_8a8 = FUN_1056efedc;
        lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar6 = pcVar2;
        pcStack_8e0 = pcVar3;
        pcStack_8d8 = pcVar10;
        pcStack_8d0 = pcVar1;
        plStack_8c8 = plVar16;
        pcStack_8c0 = pcVar9;
        pcStack_8b8 = pcVar12;
        ppppuStack_8b0 = &ppppuStack_830;
        _objc_retain(pcVar2);
        if (pcVar8 != (char *)0x0) {
          plVar16 = *(long **)(pcVar8 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_900,pcVar1);
          uStack_920 = 0;
          uStack_918 = 0;
          uStack_910 = 0;
          func_0x00010007e1e8(&uStack_920,auStack_900,&lStack_8e8,1);
          pcVar6 = "\x01";
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108aac20,&uStack_920,pcVar7);
          puStack_908 = (undefined1 *)&uStack_920;
          func_0x00010007e5dc(&puStack_908);
          if (cStack_8e9 < '\0') {
            __ZdlPv(auStack_900[0]);
          }
        }
        pcVar1 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8e8) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          _objc_release(pcVar2);
          pcVar9 = pcVar1;
          __Unwind_Resume();
          puStack_948 = (undefined1 *)&uStack_960;
          pcStack_928 = FUN_1056f0050;
          if (pcVar9 != (char *)0x0) {
            uStack_960 = 0;
            uStack_958 = 0;
            uStack_950 = 0;
            pcStack_940 = pcVar1;
            pcStack_938 = pcVar2;
            ppppuStack_930 = &ppppuStack_8b0;
            (**(code **)(**(long **)(pcVar9 + 8) + 0x18))
                      (*(long **)(pcVar9 + 8),&UNK_1108aac70,&uStack_960,pcVar6);
            func_0x00010007e5dc(&puStack_948);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ee46c; end: 1056ee74f;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ee710) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ee46c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x24;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 *puStack_888;
  char *pcStack_880;
  char *pcStack_878;
  undefined8 ****ppppuStack_870;
  code *pcStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 *puStack_848;
  undefined8 auStack_840 [2];
  char cStack_829;
  long lStack_828;
  char *pcStack_820;
  char *pcStack_818;
  char *pcStack_810;
  long *plStack_808;
  char *pcStack_800;
  char *pcStack_7f8;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  char acStack_7e0 [24];
  undefined1 *puStack_7c8;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  char *pcStack_790;
  long *plStack_788;
  char *pcStack_780;
  char *pcStack_778;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  char acStack_760 [24];
  undefined1 *puStack_748;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  char *pcStack_720;
  char *pcStack_718;
  char *pcStack_710;
  char *pcStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6e0 [24];
  undefined1 *puStack_6c8;
  char acStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_620 [24];
  undefined1 *puStack_608;
  char acStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  char acStack_560 [24];
  undefined1 *puStack_548;
  char acStack_540 [24];
  undefined1 auStack_528 [24];
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  char acStack_4a0 [24];
  undefined1 *puStack_488;
  char acStack_480 [24];
  undefined1 auStack_468 [24];
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3e0 [24];
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  char acStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar8 = param_3;
  pcVar12 = param_4;
  pcVar13 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(acStack_a0,pcVar2);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_88,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
      pcVar12 = (char *)((long)param_5 * 10);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_a8 = acStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar15 = 0;
      pcVar8 = pcVar3;
      do {
        if ((&cStack_59)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = acStack_c0;
      } while (lVar15 != -0x48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcStack_f8 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1056ee750;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar6 = pcVar8;
  pcVar7 = pcVar12;
  pcStack_100 = unaff_x24;
  pcStack_f0 = pcVar3;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar8);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_120,pcVar3);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar9 = "";
    pcVar6 = acStack_158;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar15 = 0;
    pcVar7 = pcVar12;
    do {
      if ((&cStack_109)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar12 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar10 = acStack_220;
  pcStack_168 = FUN_1056ee980;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar9;
  pcVar8 = pcVar6;
  pcVar3 = pcVar7;
  pcVar4 = pcVar13;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  if (pcVar12 != (char *)0x0) {
    plVar1 = *(long **)(pcVar12 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(acStack_200,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1e8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1d0,pcVar2);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,acStack_200,&lStack_1b8,3);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar15 = 0;
    pcVar8 = pcVar10;
    pcVar3 = pcVar13;
    do {
      if ((&cStack_1b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_220;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar12 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  pcVar13 = acStack_200;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar13);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar5 = pcVar12;
  __Unwind_Resume();
  pcStack_228 = FUN_1056eec40;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar2;
  pcVar11 = pcVar8;
  pcVar14 = pcVar3;
  pcStack_260 = unaff_x24;
  pcStack_258 = pcVar13;
  pcStack_250 = pcVar12;
  pcStack_248 = pcVar7;
  pcStack_240 = pcVar6;
  pcStack_238 = pcVar9;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(pcVar2);
  _objc_retain(pcVar8);
  puVar16 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar1 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar12);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar12 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_280,pcVar12);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar10 = "\x01";
    pcVar13 = acStack_2b8;
    pcVar11 = acStack_2b8;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_2a0 = pcVar13;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar15 = 0;
    puVar16 = auStack_298;
    pcVar14 = pcVar3;
    do {
      if ((&cStack_269)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar12 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar2);
  pcVar6 = pcVar12;
  __Unwind_Resume();
  pcStack_2c8 = FUN_1056eee70;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar10;
  pcVar9 = pcVar11;
  pcVar7 = pcVar14;
  pcStack_300 = unaff_x24;
  pcStack_2f8 = pcVar13;
  puStack_2f0 = puVar16;
  pcStack_2e8 = pcVar12;
  pcStack_2e0 = pcVar8;
  pcStack_2d8 = pcVar2;
  ppppuStack_2d0 = &pppuStack_230;
  _objc_retain(pcVar10);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar1 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    unaff_x24 = (char *)auStack_338;
    func_0x00010002b838(auStack_338,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_320,pcVar2);
    acStack_358[0] = '\0';
    acStack_358[1] = '\0';
    acStack_358[2] = '\0';
    acStack_358[3] = '\0';
    acStack_358[4] = '\0';
    acStack_358[5] = '\0';
    acStack_358[6] = '\0';
    acStack_358[7] = '\0';
    acStack_358[8] = '\0';
    acStack_358[9] = '\0';
    acStack_358[10] = '\0';
    acStack_358[0xb] = '\0';
    acStack_358[0xc] = '\0';
    acStack_358[0xd] = '\0';
    acStack_358[0xe] = '\0';
    acStack_358[0xf] = '\0';
    acStack_358[0x10] = '\0';
    acStack_358[0x11] = '\0';
    acStack_358[0x12] = '\0';
    acStack_358[0x13] = '\0';
    acStack_358[0x14] = '\0';
    acStack_358[0x15] = '\0';
    acStack_358[0x16] = '\0';
    acStack_358[0x17] = '\0';
    func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
    pcVar3 = "";
    pcVar13 = acStack_358;
    pcVar9 = acStack_358;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_340 = pcVar13;
    func_0x00010007e5dc(&pcStack_340);
    lVar15 = 0;
    puVar16 = auStack_338;
    pcVar7 = pcVar14;
    do {
      if ((&cStack_309)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar2 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar10);
  pcVar12 = pcVar2;
  __Unwind_Resume();
  pcVar5 = acStack_3e0;
  pcStack_368 = FUN_1056ef0a0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar6 = pcVar9;
  pcStack_3a0 = unaff_x24;
  pcStack_398 = pcVar13;
  puStack_390 = puVar16;
  pcStack_388 = pcVar2;
  pcStack_380 = pcVar11;
  pcStack_378 = pcVar10;
  ppppuStack_370 = &ppppuStack_2d0;
  _objc_retain(pcVar3);
  if (pcVar12 != (char *)0x0) {
    plVar1 = *(long **)(pcVar12 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    pcVar13 = (char *)auStack_3c0;
    func_0x00010002b838(auStack_3c0,pcVar2);
    acStack_3e0[0] = '\0';
    acStack_3e0[1] = '\0';
    acStack_3e0[2] = '\0';
    acStack_3e0[3] = '\0';
    acStack_3e0[4] = '\0';
    acStack_3e0[5] = '\0';
    acStack_3e0[6] = '\0';
    acStack_3e0[7] = '\0';
    acStack_3e0[8] = '\0';
    acStack_3e0[9] = '\0';
    acStack_3e0[10] = '\0';
    acStack_3e0[0xb] = '\0';
    acStack_3e0[0xc] = '\0';
    acStack_3e0[0xd] = '\0';
    acStack_3e0[0xe] = '\0';
    acStack_3e0[0xf] = '\0';
    acStack_3e0[0x10] = '\0';
    acStack_3e0[0x11] = '\0';
    acStack_3e0[0x12] = '\0';
    acStack_3e0[0x13] = '\0';
    acStack_3e0[0x14] = '\0';
    acStack_3e0[0x15] = '\0';
    acStack_3e0[0x16] = '\0';
    acStack_3e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3e0,auStack_3c0,&lStack_3a8,1);
    pcVar8 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_3c8 = acStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    pcVar6 = pcVar5;
    pcVar7 = pcVar9;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      pcVar6 = pcVar5;
      pcVar7 = pcVar9;
    }
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcVar11 = acStack_4a0;
  pcStack_3e8 = FUN_1056ef214;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar8;
  pcVar3 = pcVar6;
  pcVar9 = pcVar7;
  pcVar10 = pcVar4;
  ppppuStack_3f0 = &ppppuStack_370;
  _objc_retain(pcVar8);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(acStack_480,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_468,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_450,pcVar2);
    acStack_4a0[0] = '\0';
    acStack_4a0[1] = '\0';
    acStack_4a0[2] = '\0';
    acStack_4a0[3] = '\0';
    acStack_4a0[4] = '\0';
    acStack_4a0[5] = '\0';
    acStack_4a0[6] = '\0';
    acStack_4a0[7] = '\0';
    acStack_4a0[8] = '\0';
    acStack_4a0[9] = '\0';
    acStack_4a0[10] = '\0';
    acStack_4a0[0xb] = '\0';
    acStack_4a0[0xc] = '\0';
    acStack_4a0[0xd] = '\0';
    acStack_4a0[0xe] = '\0';
    acStack_4a0[0xf] = '\0';
    acStack_4a0[0x10] = '\0';
    acStack_4a0[0x11] = '\0';
    acStack_4a0[0x12] = '\0';
    acStack_4a0[0x13] = '\0';
    acStack_4a0[0x14] = '\0';
    acStack_4a0[0x15] = '\0';
    acStack_4a0[0x16] = '\0';
    acStack_4a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4a0,acStack_480,&lStack_438,3);
    pcVar12 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_488 = acStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    lVar15 = 0;
    pcVar3 = pcVar11;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_439)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_450 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar13 = acStack_4a0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    pcVar13 = pcVar13 + -0x18;
  } while (pcVar13 != acStack_480);
  _objc_release(pcVar7);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar11 = acStack_560;
  pcStack_4a8 = FUN_1056ef48c;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar12;
  pcVar6 = pcVar3;
  pcVar4 = pcVar9;
  pcVar7 = pcVar10;
  ppppuStack_4b0 = &ppppuStack_3f0;
  _objc_retain(pcVar12);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(acStack_540,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_528,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_510,pcVar2);
    acStack_560[0] = '\0';
    acStack_560[1] = '\0';
    acStack_560[2] = '\0';
    acStack_560[3] = '\0';
    acStack_560[4] = '\0';
    acStack_560[5] = '\0';
    acStack_560[6] = '\0';
    acStack_560[7] = '\0';
    acStack_560[8] = '\0';
    acStack_560[9] = '\0';
    acStack_560[10] = '\0';
    acStack_560[0xb] = '\0';
    acStack_560[0xc] = '\0';
    acStack_560[0xd] = '\0';
    acStack_560[0xe] = '\0';
    acStack_560[0xf] = '\0';
    acStack_560[0x10] = '\0';
    acStack_560[0x11] = '\0';
    acStack_560[0x12] = '\0';
    acStack_560[0x13] = '\0';
    acStack_560[0x14] = '\0';
    acStack_560[0x15] = '\0';
    acStack_560[0x16] = '\0';
    acStack_560[0x17] = '\0';
    func_0x00010007e1e8(acStack_560,acStack_540,&lStack_4f8,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_548 = acStack_560;
    func_0x00010007e5dc(&puStack_548);
    lVar15 = 0;
    pcVar6 = pcVar11;
    pcVar4 = pcVar10;
    do {
      if ((&cStack_4f9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_510 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar13 = acStack_560;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_540);
    _objc_release(pcVar9);
    _objc_release(pcVar12);
    __Unwind_Resume();
    pcVar11 = acStack_620;
    pcStack_568 = FUN_1056ef704;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar8;
    pcVar3 = pcVar6;
    pcVar9 = pcVar4;
    pcVar10 = pcVar7;
    ppppuStack_570 = &ppppuStack_4b0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar4);
    if (pcVar2 != (char *)0x0) {
      plVar1 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(acStack_600,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar6 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_5e8,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_5d0,pcVar2);
      acStack_620[0] = '\0';
      acStack_620[1] = '\0';
      acStack_620[2] = '\0';
      acStack_620[3] = '\0';
      acStack_620[4] = '\0';
      acStack_620[5] = '\0';
      acStack_620[6] = '\0';
      acStack_620[7] = '\0';
      acStack_620[8] = '\0';
      acStack_620[9] = '\0';
      acStack_620[10] = '\0';
      acStack_620[0xb] = '\0';
      acStack_620[0xc] = '\0';
      acStack_620[0xd] = '\0';
      acStack_620[0xe] = '\0';
      acStack_620[0xf] = '\0';
      acStack_620[0x10] = '\0';
      acStack_620[0x11] = '\0';
      acStack_620[0x12] = '\0';
      acStack_620[0x13] = '\0';
      acStack_620[0x14] = '\0';
      acStack_620[0x15] = '\0';
      acStack_620[0x16] = '\0';
      acStack_620[0x17] = '\0';
      func_0x00010007e1e8(acStack_620,acStack_600,&lStack_5b8,3);
      pcVar12 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_608 = acStack_620;
      func_0x00010007e5dc(&puStack_608);
      lVar15 = 0;
      pcVar3 = pcVar11;
      pcVar9 = pcVar7;
      do {
        if ((&cStack_5b9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        pcVar13 = acStack_620;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar4);
    pcVar2 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    do {
      pcVar13 = pcVar13 + -0x18;
    } while (pcVar13 != acStack_600);
    _objc_release(pcVar4);
    _objc_release(pcVar8);
    __Unwind_Resume();
    pcVar4 = acStack_6e0;
    pcStack_628 = FUN_1056ef97c;
    lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar12;
    pcVar6 = pcVar3;
    ppppuStack_630 = &ppppuStack_570;
    _objc_retain(pcVar12);
    _objc_retain(pcVar9);
    if (pcVar2 != (char *)0x0) {
      plVar1 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      func_0x00010002b838(acStack_6c0,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar3 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_6a8,pcVar2);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar3 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_690,pcVar3);
      acStack_6e0[0] = '\0';
      acStack_6e0[1] = '\0';
      acStack_6e0[2] = '\0';
      acStack_6e0[3] = '\0';
      acStack_6e0[4] = '\0';
      acStack_6e0[5] = '\0';
      acStack_6e0[6] = '\0';
      acStack_6e0[7] = '\0';
      acStack_6e0[8] = '\0';
      acStack_6e0[9] = '\0';
      acStack_6e0[10] = '\0';
      acStack_6e0[0xb] = '\0';
      acStack_6e0[0xc] = '\0';
      acStack_6e0[0xd] = '\0';
      acStack_6e0[0xe] = '\0';
      acStack_6e0[0xf] = '\0';
      acStack_6e0[0x10] = '\0';
      acStack_6e0[0x11] = '\0';
      acStack_6e0[0x12] = '\0';
      acStack_6e0[0x13] = '\0';
      acStack_6e0[0x14] = '\0';
      acStack_6e0[0x15] = '\0';
      acStack_6e0[0x16] = '\0';
      acStack_6e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_6e0,acStack_6c0,&lStack_678,3);
      pcVar8 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aab30,acStack_6e0,pcVar10);
      puStack_6c8 = acStack_6e0;
      func_0x00010007e5dc(&puStack_6c8);
      lVar15 = 0;
      pcVar6 = pcVar4;
      do {
        if ((&cStack_679)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_690 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        pcVar13 = acStack_6e0;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar9);
    pcVar2 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_678) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      do {
        pcVar13 = pcVar13 + -0x18;
      } while (pcVar13 != acStack_6c0);
      _objc_release(pcVar9);
      _objc_release(pcVar12);
      pcVar7 = pcVar2;
      __Unwind_Resume();
      pcVar11 = acStack_760;
      pcStack_6e8 = FUN_1056efbf4;
      lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar8;
      pcVar10 = pcVar6;
      pcStack_720 = pcVar3;
      pcStack_718 = pcVar13;
      pcStack_710 = acStack_6c0;
      pcStack_708 = pcVar2;
      pcStack_700 = pcVar9;
      pcStack_6f8 = pcVar12;
      ppppuStack_6f0 = &ppppuStack_630;
      _objc_retain(pcVar8);
      plVar1 = (long *)0x0;
      pcVar2 = acStack_6c0;
      if (pcVar7 != (char *)0x0) {
        plVar1 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        pcVar13 = (char *)auStack_740;
        func_0x00010002b838(auStack_740,pcVar2);
        acStack_760[0] = '\0';
        acStack_760[1] = '\0';
        acStack_760[2] = '\0';
        acStack_760[3] = '\0';
        acStack_760[4] = '\0';
        acStack_760[5] = '\0';
        acStack_760[6] = '\0';
        acStack_760[7] = '\0';
        acStack_760[8] = '\0';
        acStack_760[9] = '\0';
        acStack_760[10] = '\0';
        acStack_760[0xb] = '\0';
        acStack_760[0xc] = '\0';
        acStack_760[0xd] = '\0';
        acStack_760[0xe] = '\0';
        acStack_760[0xf] = '\0';
        acStack_760[0x10] = '\0';
        acStack_760[0x11] = '\0';
        acStack_760[0x12] = '\0';
        acStack_760[0x13] = '\0';
        acStack_760[0x14] = '\0';
        acStack_760[0x15] = '\0';
        acStack_760[0x16] = '\0';
        acStack_760[0x17] = '\0';
        func_0x00010007e1e8(acStack_760,auStack_740,&lStack_728,1);
        pcVar4 = "\x01";
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aab80,acStack_760,pcVar6);
        puStack_748 = acStack_760;
        func_0x00010007e5dc(&puStack_748);
        pcVar10 = pcVar11;
        pcVar2 = acStack_760;
        if (cStack_729 < '\0') {
          __ZdlPv(auStack_740[0]);
          pcVar10 = pcVar11;
          pcVar2 = acStack_760;
        }
      }
      pcVar12 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar6 = pcVar12;
      __Unwind_Resume();
      pcVar11 = acStack_7e0;
      pcStack_768 = FUN_1056efd68;
      lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar4;
      pcVar7 = pcVar10;
      pcStack_7a0 = pcVar3;
      pcStack_798 = pcVar13;
      pcStack_790 = pcVar2;
      plStack_788 = plVar1;
      pcStack_780 = pcVar12;
      pcStack_778 = pcVar8;
      ppppuStack_770 = &ppppuStack_6f0;
      _objc_retain(pcVar4);
      plVar1 = (long *)0x0;
      if (pcVar6 != (char *)0x0) {
        plVar1 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar4;
          _objc_retainAutorelease(pcVar4);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        pcVar13 = (char *)auStack_7c0;
        func_0x00010002b838(auStack_7c0,pcVar2);
        acStack_7e0[0] = '\0';
        acStack_7e0[1] = '\0';
        acStack_7e0[2] = '\0';
        acStack_7e0[3] = '\0';
        acStack_7e0[4] = '\0';
        acStack_7e0[5] = '\0';
        acStack_7e0[6] = '\0';
        acStack_7e0[7] = '\0';
        acStack_7e0[8] = '\0';
        acStack_7e0[9] = '\0';
        acStack_7e0[10] = '\0';
        acStack_7e0[0xb] = '\0';
        acStack_7e0[0xc] = '\0';
        acStack_7e0[0xd] = '\0';
        acStack_7e0[0xe] = '\0';
        acStack_7e0[0xf] = '\0';
        acStack_7e0[0x10] = '\0';
        acStack_7e0[0x11] = '\0';
        acStack_7e0[0x12] = '\0';
        acStack_7e0[0x13] = '\0';
        acStack_7e0[0x14] = '\0';
        acStack_7e0[0x15] = '\0';
        acStack_7e0[0x16] = '\0';
        acStack_7e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_7e0,auStack_7c0,&lStack_7a8,1);
        pcVar9 = "\x01";
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aabd0,acStack_7e0,pcVar10);
        puStack_7c8 = acStack_7e0;
        func_0x00010007e5dc(&puStack_7c8);
        pcVar7 = pcVar11;
        pcVar2 = acStack_7e0;
        if (cStack_7a9 < '\0') {
          __ZdlPv(auStack_7c0[0]);
          pcVar7 = pcVar11;
          pcVar2 = acStack_7e0;
        }
      }
      pcVar8 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7a8) {
        ___stack_chk_fail();
        _objc_release(pcVar4);
        _objc_release(pcVar4);
        pcVar6 = pcVar8;
        __Unwind_Resume();
        pcStack_7e8 = FUN_1056efedc;
        lStack_828 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar12 = pcVar9;
        pcStack_820 = pcVar3;
        pcStack_818 = pcVar13;
        pcStack_810 = pcVar2;
        plStack_808 = plVar1;
        pcStack_800 = pcVar8;
        pcStack_7f8 = pcVar4;
        ppppuStack_7f0 = &ppppuStack_770;
        _objc_retain(pcVar9);
        if (pcVar6 != (char *)0x0) {
          plVar1 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = pcVar9;
            _objc_retainAutorelease(pcVar9);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar9);
          func_0x00010002b838(auStack_840,pcVar2);
          uStack_860 = 0;
          uStack_858 = 0;
          uStack_850 = 0;
          func_0x00010007e1e8(&uStack_860,auStack_840,&lStack_828,1);
          pcVar12 = "\x01";
          (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108aac20,&uStack_860,pcVar7);
          puStack_848 = (undefined1 *)&uStack_860;
          func_0x00010007e5dc(&puStack_848);
          if (cStack_829 < '\0') {
            __ZdlPv(auStack_840[0]);
          }
        }
        pcVar2 = pcVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_828) {
          ___stack_chk_fail();
          _objc_release(pcVar9);
          _objc_release(pcVar9);
          pcVar8 = pcVar2;
          __Unwind_Resume();
          puStack_888 = (undefined1 *)&uStack_8a0;
          pcStack_868 = FUN_1056f0050;
          if (pcVar8 != (char *)0x0) {
            uStack_8a0 = 0;
            uStack_898 = 0;
            uStack_890 = 0;
            pcStack_880 = pcVar2;
            pcStack_878 = pcVar9;
            ppppuStack_870 = &ppppuStack_7f0;
            (**(code **)(**(long **)(pcVar8 + 8) + 0x18))
                      (*(long **)(pcVar8 + 8),&UNK_1108aac70,&uStack_8a0,pcVar12);
            func_0x00010007e5dc(&puStack_888);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ee750; end: 1056ee97f;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ee750(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x24;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 *puStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  undefined8 ****ppppuStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  char *pcStack_760;
  char *pcStack_758;
  char *pcStack_750;
  long *plStack_748;
  char *pcStack_740;
  char *pcStack_738;
  undefined8 ****ppppuStack_730;
  code *pcStack_728;
  char acStack_720 [24];
  undefined1 *puStack_708;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  char *pcStack_6d0;
  long *plStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  undefined8 ****ppppuStack_6b0;
  code *pcStack_6a8;
  char acStack_6a0 [24];
  undefined1 *puStack_688;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  char *pcStack_660;
  char *pcStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_620 [24];
  undefined1 *puStack_608;
  char acStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  char acStack_560 [24];
  undefined1 *puStack_548;
  char acStack_540 [24];
  undefined1 auStack_528 [24];
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  char acStack_4a0 [24];
  undefined1 *puStack_488;
  char acStack_480 [24];
  undefined1 auStack_468 [24];
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3e0 [24];
  undefined1 *puStack_3c8;
  char acStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 ****ppppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  char acStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar7 = acStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar14 = 0;
    pcVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
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
  __Unwind_Resume();
  pcVar11 = acStack_160;
  pcStack_a8 = FUN_1056ee980;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar8 = pcVar7;
  pcVar10 = pcVar5;
  pcVar6 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_140,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,acStack_140,&lStack_f8,3);
    pcVar4 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar14 = 0;
    pcVar8 = pcVar11;
    pcVar10 = param_5;
    do {
      if ((&cStack_f9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  pcVar11 = acStack_140;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar11);
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_1056eec40;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar4;
  pcVar12 = pcVar8;
  pcVar13 = pcVar10;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar11;
  pcStack_190 = pcVar2;
  pcStack_188 = pcVar5;
  pcStack_180 = pcVar7;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  puVar16 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1c0,pcVar1);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
    pcVar9 = "\x01";
    pcVar11 = acStack_1f8;
    pcVar12 = acStack_1f8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_1e0 = pcVar11;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar14 = 0;
    puVar16 = auStack_1d8;
    pcVar13 = pcVar10;
    do {
      if ((&cStack_1a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_1056eee70;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar9;
  pcVar5 = pcVar12;
  pcVar10 = pcVar13;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar11;
  puStack_230 = puVar16;
  pcStack_228 = pcVar1;
  pcStack_220 = pcVar8;
  pcStack_218 = pcVar4;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar9);
  _objc_retain(pcVar12);
  puVar16 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    pcVar7 = "";
    pcVar11 = acStack_298;
    pcVar5 = acStack_298;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_280 = pcVar11;
    func_0x00010007e5dc(&pcStack_280);
    lVar14 = 0;
    puVar16 = auStack_278;
    pcVar10 = pcVar13;
    do {
      if ((&cStack_249)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar9);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcVar3 = acStack_320;
  pcStack_2a8 = FUN_1056ef0a0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar8 = pcVar5;
  pcStack_2e0 = unaff_x24;
  pcStack_2d8 = pcVar11;
  puStack_2d0 = puVar16;
  pcStack_2c8 = pcVar1;
  pcStack_2c0 = pcVar12;
  pcStack_2b8 = pcVar9;
  ppppuStack_2b0 = &pppuStack_210;
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    pcVar11 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    pcVar2 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar8 = pcVar3;
    pcVar10 = pcVar5;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar8 = pcVar3;
      pcVar10 = pcVar5;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    __Unwind_Resume();
    pcVar12 = acStack_3e0;
    pcStack_328 = FUN_1056ef214;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar2;
    pcVar5 = pcVar8;
    pcVar4 = pcVar10;
    pcVar9 = pcVar6;
    ppppuStack_330 = &ppppuStack_2b0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar10);
    if (pcVar1 != (char *)0x0) {
      plVar15 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_3c0,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar8 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_3a8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_390,pcVar1);
      acStack_3e0[0] = '\0';
      acStack_3e0[1] = '\0';
      acStack_3e0[2] = '\0';
      acStack_3e0[3] = '\0';
      acStack_3e0[4] = '\0';
      acStack_3e0[5] = '\0';
      acStack_3e0[6] = '\0';
      acStack_3e0[7] = '\0';
      acStack_3e0[8] = '\0';
      acStack_3e0[9] = '\0';
      acStack_3e0[10] = '\0';
      acStack_3e0[0xb] = '\0';
      acStack_3e0[0xc] = '\0';
      acStack_3e0[0xd] = '\0';
      acStack_3e0[0xe] = '\0';
      acStack_3e0[0xf] = '\0';
      acStack_3e0[0x10] = '\0';
      acStack_3e0[0x11] = '\0';
      acStack_3e0[0x12] = '\0';
      acStack_3e0[0x13] = '\0';
      acStack_3e0[0x14] = '\0';
      acStack_3e0[0x15] = '\0';
      acStack_3e0[0x16] = '\0';
      acStack_3e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3e0,acStack_3c0,&lStack_378,3);
      pcVar7 = "\x01";
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_3c8 = acStack_3e0;
      func_0x00010007e5dc(&puStack_3c8);
      lVar14 = 0;
      pcVar5 = pcVar12;
      pcVar4 = pcVar6;
      do {
        if ((&cStack_379)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar11 = acStack_3e0;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      pcVar11 = pcVar11 + -0x18;
    } while (pcVar11 != acStack_3c0);
    _objc_release(pcVar10);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar12 = acStack_4a0;
    pcStack_3e8 = FUN_1056ef48c;
    lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar7;
    pcVar8 = pcVar5;
    pcVar10 = pcVar4;
    pcVar6 = pcVar9;
    ppppuStack_3f0 = &ppppuStack_330;
    _objc_retain(pcVar7);
    _objc_retain(pcVar4);
    if (pcVar1 != (char *)0x0) {
      plVar15 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_480,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_468,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_450,pcVar1);
      acStack_4a0[0] = '\0';
      acStack_4a0[1] = '\0';
      acStack_4a0[2] = '\0';
      acStack_4a0[3] = '\0';
      acStack_4a0[4] = '\0';
      acStack_4a0[5] = '\0';
      acStack_4a0[6] = '\0';
      acStack_4a0[7] = '\0';
      acStack_4a0[8] = '\0';
      acStack_4a0[9] = '\0';
      acStack_4a0[10] = '\0';
      acStack_4a0[0xb] = '\0';
      acStack_4a0[0xc] = '\0';
      acStack_4a0[0xd] = '\0';
      acStack_4a0[0xe] = '\0';
      acStack_4a0[0xf] = '\0';
      acStack_4a0[0x10] = '\0';
      acStack_4a0[0x11] = '\0';
      acStack_4a0[0x12] = '\0';
      acStack_4a0[0x13] = '\0';
      acStack_4a0[0x14] = '\0';
      acStack_4a0[0x15] = '\0';
      acStack_4a0[0x16] = '\0';
      acStack_4a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4a0,acStack_480,&lStack_438,3);
      pcVar2 = "\x01";
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_488 = acStack_4a0;
      func_0x00010007e5dc(&puStack_488);
      lVar14 = 0;
      pcVar8 = pcVar12;
      pcVar10 = pcVar9;
      do {
        if ((&cStack_439)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_450 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        pcVar11 = acStack_4a0;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar4);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_438) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != acStack_480);
      _objc_release(pcVar4);
      _objc_release(pcVar7);
      __Unwind_Resume();
      pcVar12 = acStack_560;
      pcStack_4a8 = FUN_1056ef704;
      lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar7 = pcVar2;
      pcVar5 = pcVar8;
      pcVar4 = pcVar10;
      pcVar9 = pcVar6;
      ppppuStack_4b0 = &ppppuStack_3f0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar10);
      if (pcVar1 != (char *)0x0) {
        plVar15 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(acStack_540,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar8 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_528,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_510,pcVar1);
        acStack_560[0] = '\0';
        acStack_560[1] = '\0';
        acStack_560[2] = '\0';
        acStack_560[3] = '\0';
        acStack_560[4] = '\0';
        acStack_560[5] = '\0';
        acStack_560[6] = '\0';
        acStack_560[7] = '\0';
        acStack_560[8] = '\0';
        acStack_560[9] = '\0';
        acStack_560[10] = '\0';
        acStack_560[0xb] = '\0';
        acStack_560[0xc] = '\0';
        acStack_560[0xd] = '\0';
        acStack_560[0xe] = '\0';
        acStack_560[0xf] = '\0';
        acStack_560[0x10] = '\0';
        acStack_560[0x11] = '\0';
        acStack_560[0x12] = '\0';
        acStack_560[0x13] = '\0';
        acStack_560[0x14] = '\0';
        acStack_560[0x15] = '\0';
        acStack_560[0x16] = '\0';
        acStack_560[0x17] = '\0';
        func_0x00010007e1e8(acStack_560,acStack_540,&lStack_4f8,3);
        pcVar7 = "\x01";
        (**(code **)(*plVar15 + 0x18))(plVar15);
        puStack_548 = acStack_560;
        func_0x00010007e5dc(&puStack_548);
        lVar14 = 0;
        pcVar5 = pcVar12;
        pcVar4 = pcVar6;
        do {
          if ((&cStack_4f9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_510 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar11 = acStack_560;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar10);
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != acStack_540);
      _objc_release(pcVar10);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcVar10 = acStack_620;
      pcStack_568 = FUN_1056ef97c;
      lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar7;
      pcVar8 = pcVar5;
      ppppuStack_570 = &ppppuStack_4b0;
      _objc_retain(pcVar7);
      _objc_retain(pcVar4);
      if (pcVar1 != (char *)0x0) {
        plVar15 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(acStack_600,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar5 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_5e8,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar5 = pcVar4;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_5d0,pcVar5);
        acStack_620[0] = '\0';
        acStack_620[1] = '\0';
        acStack_620[2] = '\0';
        acStack_620[3] = '\0';
        acStack_620[4] = '\0';
        acStack_620[5] = '\0';
        acStack_620[6] = '\0';
        acStack_620[7] = '\0';
        acStack_620[8] = '\0';
        acStack_620[9] = '\0';
        acStack_620[10] = '\0';
        acStack_620[0xb] = '\0';
        acStack_620[0xc] = '\0';
        acStack_620[0xd] = '\0';
        acStack_620[0xe] = '\0';
        acStack_620[0xf] = '\0';
        acStack_620[0x10] = '\0';
        acStack_620[0x11] = '\0';
        acStack_620[0x12] = '\0';
        acStack_620[0x13] = '\0';
        acStack_620[0x14] = '\0';
        acStack_620[0x15] = '\0';
        acStack_620[0x16] = '\0';
        acStack_620[0x17] = '\0';
        func_0x00010007e1e8(acStack_620,acStack_600,&lStack_5b8,3);
        pcVar2 = "";
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108aab30,acStack_620,pcVar9);
        puStack_608 = acStack_620;
        func_0x00010007e5dc(&puStack_608);
        lVar14 = 0;
        pcVar8 = pcVar10;
        do {
          if ((&cStack_5b9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          pcVar11 = acStack_620;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar4);
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
        ___stack_chk_fail();
        _objc_release(pcVar4);
        do {
          pcVar11 = pcVar11 + -0x18;
        } while (pcVar11 != acStack_600);
        _objc_release(pcVar4);
        _objc_release(pcVar7);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        pcVar12 = acStack_6a0;
        pcStack_628 = FUN_1056efbf4;
        lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar10 = pcVar2;
        pcVar9 = pcVar8;
        pcStack_660 = pcVar5;
        pcStack_658 = pcVar11;
        pcStack_650 = acStack_600;
        pcStack_648 = pcVar1;
        pcStack_640 = pcVar4;
        pcStack_638 = pcVar7;
        ppppuStack_630 = &ppppuStack_570;
        _objc_retain(pcVar2);
        plVar15 = (long *)0x0;
        pcVar1 = acStack_600;
        if (pcVar6 != (char *)0x0) {
          plVar15 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          pcVar11 = (char *)auStack_680;
          func_0x00010002b838(auStack_680,pcVar1);
          acStack_6a0[0] = '\0';
          acStack_6a0[1] = '\0';
          acStack_6a0[2] = '\0';
          acStack_6a0[3] = '\0';
          acStack_6a0[4] = '\0';
          acStack_6a0[5] = '\0';
          acStack_6a0[6] = '\0';
          acStack_6a0[7] = '\0';
          acStack_6a0[8] = '\0';
          acStack_6a0[9] = '\0';
          acStack_6a0[10] = '\0';
          acStack_6a0[0xb] = '\0';
          acStack_6a0[0xc] = '\0';
          acStack_6a0[0xd] = '\0';
          acStack_6a0[0xe] = '\0';
          acStack_6a0[0xf] = '\0';
          acStack_6a0[0x10] = '\0';
          acStack_6a0[0x11] = '\0';
          acStack_6a0[0x12] = '\0';
          acStack_6a0[0x13] = '\0';
          acStack_6a0[0x14] = '\0';
          acStack_6a0[0x15] = '\0';
          acStack_6a0[0x16] = '\0';
          acStack_6a0[0x17] = '\0';
          func_0x00010007e1e8(acStack_6a0,auStack_680,&lStack_668,1);
          pcVar10 = "\x01";
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108aab80,acStack_6a0,pcVar8);
          puStack_688 = acStack_6a0;
          func_0x00010007e5dc(&puStack_688);
          pcVar9 = pcVar12;
          pcVar1 = acStack_6a0;
          if (cStack_669 < '\0') {
            __ZdlPv(auStack_680[0]);
            pcVar9 = pcVar12;
            pcVar1 = acStack_6a0;
          }
        }
        pcVar7 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          _objc_release(pcVar2);
          pcVar8 = pcVar7;
          __Unwind_Resume();
          pcVar12 = acStack_720;
          pcStack_6a8 = FUN_1056efd68;
          lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar4 = pcVar10;
          pcVar6 = pcVar9;
          pcStack_6e0 = pcVar5;
          pcStack_6d8 = pcVar11;
          pcStack_6d0 = pcVar1;
          plStack_6c8 = plVar15;
          pcStack_6c0 = pcVar7;
          pcStack_6b8 = pcVar2;
          ppppuStack_6b0 = &ppppuStack_630;
          _objc_retain(pcVar10);
          plVar15 = (long *)0x0;
          if (pcVar8 != (char *)0x0) {
            plVar15 = *(long **)(pcVar8 + 8);
            _objc_retain(pcVar10);
            if (pcVar10 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              pcVar1 = pcVar10;
              _objc_retainAutorelease(pcVar10);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar10);
            pcVar11 = (char *)auStack_700;
            func_0x00010002b838(auStack_700,pcVar1);
            acStack_720[0] = '\0';
            acStack_720[1] = '\0';
            acStack_720[2] = '\0';
            acStack_720[3] = '\0';
            acStack_720[4] = '\0';
            acStack_720[5] = '\0';
            acStack_720[6] = '\0';
            acStack_720[7] = '\0';
            acStack_720[8] = '\0';
            acStack_720[9] = '\0';
            acStack_720[10] = '\0';
            acStack_720[0xb] = '\0';
            acStack_720[0xc] = '\0';
            acStack_720[0xd] = '\0';
            acStack_720[0xe] = '\0';
            acStack_720[0xf] = '\0';
            acStack_720[0x10] = '\0';
            acStack_720[0x11] = '\0';
            acStack_720[0x12] = '\0';
            acStack_720[0x13] = '\0';
            acStack_720[0x14] = '\0';
            acStack_720[0x15] = '\0';
            acStack_720[0x16] = '\0';
            acStack_720[0x17] = '\0';
            func_0x00010007e1e8(acStack_720,auStack_700,&lStack_6e8,1);
            pcVar4 = "\x01";
            (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108aabd0,acStack_720,pcVar9);
            puStack_708 = acStack_720;
            func_0x00010007e5dc(&puStack_708);
            pcVar6 = pcVar12;
            pcVar1 = acStack_720;
            if (cStack_6e9 < '\0') {
              __ZdlPv(auStack_700[0]);
              pcVar6 = pcVar12;
              pcVar1 = acStack_720;
            }
          }
          pcVar7 = pcVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e8) {
            ___stack_chk_fail();
            _objc_release(pcVar10);
            _objc_release(pcVar10);
            pcVar8 = pcVar7;
            __Unwind_Resume();
            pcStack_728 = FUN_1056efedc;
            lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcVar2 = pcVar4;
            pcStack_760 = pcVar5;
            pcStack_758 = pcVar11;
            pcStack_750 = pcVar1;
            plStack_748 = plVar15;
            pcStack_740 = pcVar7;
            pcStack_738 = pcVar10;
            ppppuStack_730 = &ppppuStack_6b0;
            _objc_retain(pcVar4);
            if (pcVar8 != (char *)0x0) {
              plVar15 = *(long **)(pcVar8 + 8);
              _objc_retain(pcVar4);
              if (pcVar4 == (char *)0x0) {
                pcVar1 = "";
              }
              else {
                pcVar1 = pcVar4;
                _objc_retainAutorelease(pcVar4);
                func_0x00010bdc3520();
              }
              _objc_release(pcVar4);
              func_0x00010002b838(auStack_780,pcVar1);
              uStack_7a0 = 0;
              uStack_798 = 0;
              uStack_790 = 0;
              func_0x00010007e1e8(&uStack_7a0,auStack_780,&lStack_768,1);
              pcVar2 = "\x01";
              (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108aac20,&uStack_7a0,pcVar6);
              puStack_788 = (undefined1 *)&uStack_7a0;
              func_0x00010007e5dc(&puStack_788);
              if (cStack_769 < '\0') {
                __ZdlPv(auStack_780[0]);
              }
            }
            pcVar1 = pcVar4;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
              ___stack_chk_fail();
              _objc_release(pcVar4);
              _objc_release(pcVar4);
              pcVar7 = pcVar1;
              __Unwind_Resume();
              puStack_7c8 = (undefined1 *)&uStack_7e0;
              pcStack_7a8 = FUN_1056f0050;
              if (pcVar7 != (char *)0x0) {
                uStack_7e0 = 0;
                uStack_7d8 = 0;
                uStack_7d0 = 0;
                pcStack_7c0 = pcVar1;
                pcStack_7b8 = pcVar4;
                ppppuStack_7b0 = &ppppuStack_730;
                (**(code **)(**(long **)(pcVar7 + 8) + 0x18))
                          (*(long **)(pcVar7 + 8),&UNK_1108aac70,&uStack_7e0,pcVar2);
                func_0x00010007e5dc(&puStack_7c8);
              }
              return;
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ee980; end: 1056eec3f;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056eec08) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ee980(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *pcVar15;
  char *unaff_x24;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  char *pcStack_720;
  char *pcStack_718;
  undefined8 ****ppppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  long *plStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 ****ppppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  char *pcStack_640;
  char *pcStack_638;
  char *pcStack_630;
  long *plStack_628;
  char *pcStack_620;
  char *pcStack_618;
  undefined8 ****ppppuStack_610;
  code *pcStack_608;
  char acStack_600 [24];
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  char *pcStack_5b0;
  char *pcStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  undefined8 ****ppppuStack_590;
  code *pcStack_588;
  char acStack_580 [24];
  undefined1 *puStack_568;
  char acStack_560 [24];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar15 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1056eec40;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar10 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar15;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar6 = "\x01";
    pcVar15 = acStack_158;
    pcVar8 = acStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_140 = pcVar15;
    func_0x00010007e5dc(&pcStack_140);
    lVar12 = 0;
    puVar13 = auStack_138;
    pcVar10 = pcVar4;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_1056eee70;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar3 = pcVar8;
  pcVar11 = pcVar10;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar15;
  puStack_190 = puVar13;
  pcStack_188 = pcVar4;
  pcStack_180 = pcVar7;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1c0,pcVar1);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
    pcVar2 = "";
    pcVar15 = acStack_1f8;
    pcVar3 = acStack_1f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_1e0 = pcVar15;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar12 = 0;
    puVar13 = auStack_1d8;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_1a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcVar5 = acStack_280;
  pcStack_208 = FUN_1056ef0a0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar10 = pcVar3;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar15;
  puStack_230 = puVar13;
  pcStack_228 = pcVar1;
  pcStack_220 = pcVar8;
  pcStack_218 = pcVar6;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    pcVar15 = (char *)auStack_260;
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x00010007e1e8(acStack_280,auStack_260,&lStack_248,1);
    pcVar7 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_268 = acStack_280;
    func_0x00010007e5dc(&puStack_268);
    pcVar10 = pcVar5;
    pcVar11 = pcVar3;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      pcVar10 = pcVar5;
      pcVar11 = pcVar3;
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar3 = acStack_340;
  pcStack_288 = FUN_1056ef214;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar7;
  pcVar2 = pcVar10;
  pcVar6 = pcVar11;
  pcVar8 = pcVar9;
  ppppuStack_290 = &pppuStack_210;
  _objc_retain(pcVar7);
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_320,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar10 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_308,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_2f0,pcVar1);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,acStack_320,&lStack_2d8,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar12 = 0;
    pcVar2 = pcVar3;
    pcVar6 = pcVar9;
    do {
      if ((&cStack_2d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      pcVar15 = acStack_340;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  do {
    pcVar15 = pcVar15 + -0x18;
  } while (pcVar15 != acStack_320);
  _objc_release(pcVar11);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar5 = acStack_400;
  pcStack_348 = FUN_1056ef48c;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar4;
  pcVar9 = pcVar2;
  pcVar3 = pcVar6;
  pcVar10 = pcVar8;
  ppppuStack_350 = &ppppuStack_290;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(acStack_3e0,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_3c8,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_3b0,pcVar1);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x00010007e1e8(acStack_400,acStack_3e0,&lStack_398,3);
    pcVar7 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_3e8 = acStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar12 = 0;
    pcVar9 = pcVar5;
    pcVar3 = pcVar8;
    do {
      if ((&cStack_399)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      pcVar15 = acStack_400;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      pcVar15 = pcVar15 + -0x18;
    } while (pcVar15 != acStack_3e0);
    _objc_release(pcVar6);
    _objc_release(pcVar4);
    __Unwind_Resume();
    pcVar5 = acStack_4c0;
    pcStack_408 = FUN_1056ef704;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar7;
    pcVar2 = pcVar9;
    pcVar6 = pcVar3;
    pcVar8 = pcVar10;
    ppppuStack_410 = &ppppuStack_350;
    _objc_retain(pcVar7);
    _objc_retain(pcVar3);
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_4a0,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar9 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_488,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_470,pcVar1);
      acStack_4c0[0] = '\0';
      acStack_4c0[1] = '\0';
      acStack_4c0[2] = '\0';
      acStack_4c0[3] = '\0';
      acStack_4c0[4] = '\0';
      acStack_4c0[5] = '\0';
      acStack_4c0[6] = '\0';
      acStack_4c0[7] = '\0';
      acStack_4c0[8] = '\0';
      acStack_4c0[9] = '\0';
      acStack_4c0[10] = '\0';
      acStack_4c0[0xb] = '\0';
      acStack_4c0[0xc] = '\0';
      acStack_4c0[0xd] = '\0';
      acStack_4c0[0xe] = '\0';
      acStack_4c0[0xf] = '\0';
      acStack_4c0[0x10] = '\0';
      acStack_4c0[0x11] = '\0';
      acStack_4c0[0x12] = '\0';
      acStack_4c0[0x13] = '\0';
      acStack_4c0[0x14] = '\0';
      acStack_4c0[0x15] = '\0';
      acStack_4c0[0x16] = '\0';
      acStack_4c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4c0,acStack_4a0,&lStack_458,3);
      pcVar4 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_4a8 = acStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      lVar12 = 0;
      pcVar2 = pcVar5;
      pcVar6 = pcVar10;
      do {
        if ((&cStack_459)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        pcVar15 = acStack_4c0;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar3);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    do {
      pcVar15 = pcVar15 + -0x18;
    } while (pcVar15 != acStack_4a0);
    _objc_release(pcVar3);
    _objc_release(pcVar7);
    __Unwind_Resume();
    pcVar3 = acStack_580;
    pcStack_4c8 = FUN_1056ef97c;
    lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar4;
    pcVar9 = pcVar2;
    ppppuStack_4d0 = &ppppuStack_410;
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(acStack_560,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar2 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_548,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_530,pcVar2);
      acStack_580[0] = '\0';
      acStack_580[1] = '\0';
      acStack_580[2] = '\0';
      acStack_580[3] = '\0';
      acStack_580[4] = '\0';
      acStack_580[5] = '\0';
      acStack_580[6] = '\0';
      acStack_580[7] = '\0';
      acStack_580[8] = '\0';
      acStack_580[9] = '\0';
      acStack_580[10] = '\0';
      acStack_580[0xb] = '\0';
      acStack_580[0xc] = '\0';
      acStack_580[0xd] = '\0';
      acStack_580[0xe] = '\0';
      acStack_580[0xf] = '\0';
      acStack_580[0x10] = '\0';
      acStack_580[0x11] = '\0';
      acStack_580[0x12] = '\0';
      acStack_580[0x13] = '\0';
      acStack_580[0x14] = '\0';
      acStack_580[0x15] = '\0';
      acStack_580[0x16] = '\0';
      acStack_580[0x17] = '\0';
      func_0x00010007e1e8(acStack_580,acStack_560,&lStack_518,3);
      pcVar7 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab30,acStack_580,pcVar8);
      puStack_568 = acStack_580;
      func_0x00010007e5dc(&puStack_568);
      lVar12 = 0;
      pcVar9 = pcVar3;
      do {
        if ((&cStack_519)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        pcVar15 = acStack_580;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      pcVar15 = pcVar15 + -0x18;
    } while (pcVar15 != acStack_560);
    _objc_release(pcVar6);
    _objc_release(pcVar4);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcVar5 = acStack_600;
    pcStack_588 = FUN_1056efbf4;
    lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar7;
    pcVar10 = pcVar9;
    pcStack_5c0 = pcVar2;
    pcStack_5b8 = pcVar15;
    pcStack_5b0 = acStack_560;
    pcStack_5a8 = pcVar1;
    pcStack_5a0 = pcVar6;
    pcStack_598 = pcVar4;
    ppppuStack_590 = &ppppuStack_4d0;
    _objc_retain(pcVar7);
    plVar14 = (long *)0x0;
    pcVar1 = acStack_560;
    if (pcVar3 != (char *)0x0) {
      plVar14 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      pcVar15 = (char *)auStack_5e0;
      func_0x00010002b838(auStack_5e0,pcVar1);
      acStack_600[0] = '\0';
      acStack_600[1] = '\0';
      acStack_600[2] = '\0';
      acStack_600[3] = '\0';
      acStack_600[4] = '\0';
      acStack_600[5] = '\0';
      acStack_600[6] = '\0';
      acStack_600[7] = '\0';
      acStack_600[8] = '\0';
      acStack_600[9] = '\0';
      acStack_600[10] = '\0';
      acStack_600[0xb] = '\0';
      acStack_600[0xc] = '\0';
      acStack_600[0xd] = '\0';
      acStack_600[0xe] = '\0';
      acStack_600[0xf] = '\0';
      acStack_600[0x10] = '\0';
      acStack_600[0x11] = '\0';
      acStack_600[0x12] = '\0';
      acStack_600[0x13] = '\0';
      acStack_600[0x14] = '\0';
      acStack_600[0x15] = '\0';
      acStack_600[0x16] = '\0';
      acStack_600[0x17] = '\0';
      func_0x00010007e1e8(acStack_600,auStack_5e0,&lStack_5c8,1);
      pcVar8 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aab80,acStack_600,pcVar9);
      puStack_5e8 = acStack_600;
      func_0x00010007e5dc(&puStack_5e8);
      pcVar10 = pcVar5;
      pcVar1 = acStack_600;
      if (cStack_5c9 < '\0') {
        __ZdlPv(auStack_5e0[0]);
        pcVar10 = pcVar5;
        pcVar1 = acStack_600;
      }
    }
    pcVar4 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar6 = pcVar4;
    __Unwind_Resume();
    pcVar5 = acStack_680;
    pcStack_608 = FUN_1056efd68;
    lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar8;
    pcVar3 = pcVar10;
    pcStack_640 = pcVar2;
    pcStack_638 = pcVar15;
    pcStack_630 = pcVar1;
    plStack_628 = plVar14;
    pcStack_620 = pcVar4;
    pcStack_618 = pcVar7;
    ppppuStack_610 = &ppppuStack_590;
    _objc_retain(pcVar8);
    plVar14 = (long *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar14 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      pcVar15 = (char *)auStack_660;
      func_0x00010002b838(auStack_660,pcVar1);
      acStack_680[0] = '\0';
      acStack_680[1] = '\0';
      acStack_680[2] = '\0';
      acStack_680[3] = '\0';
      acStack_680[4] = '\0';
      acStack_680[5] = '\0';
      acStack_680[6] = '\0';
      acStack_680[7] = '\0';
      acStack_680[8] = '\0';
      acStack_680[9] = '\0';
      acStack_680[10] = '\0';
      acStack_680[0xb] = '\0';
      acStack_680[0xc] = '\0';
      acStack_680[0xd] = '\0';
      acStack_680[0xe] = '\0';
      acStack_680[0xf] = '\0';
      acStack_680[0x10] = '\0';
      acStack_680[0x11] = '\0';
      acStack_680[0x12] = '\0';
      acStack_680[0x13] = '\0';
      acStack_680[0x14] = '\0';
      acStack_680[0x15] = '\0';
      acStack_680[0x16] = '\0';
      acStack_680[0x17] = '\0';
      func_0x00010007e1e8(acStack_680,auStack_660,&lStack_648,1);
      pcVar9 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aabd0,acStack_680,pcVar10);
      puStack_668 = acStack_680;
      func_0x00010007e5dc(&puStack_668);
      pcVar3 = pcVar5;
      pcVar1 = acStack_680;
      if (cStack_649 < '\0') {
        __ZdlPv(auStack_660[0]);
        pcVar3 = pcVar5;
        pcVar1 = acStack_680;
      }
    }
    pcVar7 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    _objc_release(pcVar8);
    pcVar6 = pcVar7;
    __Unwind_Resume();
    pcStack_688 = FUN_1056efedc;
    lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar9;
    pcStack_6c0 = pcVar2;
    pcStack_6b8 = pcVar15;
    pcStack_6b0 = pcVar1;
    plStack_6a8 = plVar14;
    pcStack_6a0 = pcVar7;
    pcStack_698 = pcVar8;
    ppppuStack_690 = &ppppuStack_610;
    _objc_retain(pcVar9);
    if (pcVar6 != (char *)0x0) {
      plVar14 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_6e0,pcVar1);
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_6c8,1);
      pcVar4 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aac20,&uStack_700,pcVar3);
      puStack_6e8 = (undefined1 *)&uStack_700;
      func_0x00010007e5dc(&puStack_6e8);
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
    }
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      _objc_release(pcVar9);
      pcVar7 = pcVar1;
      __Unwind_Resume();
      puStack_728 = (undefined1 *)&uStack_740;
      pcStack_708 = FUN_1056f0050;
      if (pcVar7 != (char *)0x0) {
        uStack_740 = 0;
        uStack_738 = 0;
        uStack_730 = 0;
        pcStack_720 = pcVar1;
        pcStack_718 = pcVar9;
        ppppuStack_710 = &ppppuStack_690;
        (**(code **)(**(long **)(pcVar7 + 8) + 0x18))
                  (*(long **)(pcVar7 + 8),&UNK_1108aac70,&uStack_740,pcVar4);
        func_0x00010007e5dc(&puStack_728);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056eec40; end: 1056eee6f;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056eec40(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  char *pcStack_5f0;
  long *plStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  char *pcStack_580;
  char *pcStack_578;
  char *pcStack_570;
  long *plStack_568;
  char *pcStack_560;
  char *pcStack_558;
  undefined8 ****ppppuStack_550;
  code *pcStack_548;
  char acStack_540 [24];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  char *pcStack_4f0;
  char *pcStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  char acStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1056eee70;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar6;
  pcVar5 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    puVar13 = auStack_118;
    pcVar5 = pcVar4;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar4;
  __Unwind_Resume();
  pcVar10 = acStack_1c0;
  pcStack_148 = FUN_1056ef0a0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar9 = pcVar8;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar4;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_1a0;
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    pcVar2 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar9 = pcVar10;
    pcVar5 = pcVar8;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar9 = pcVar10;
      pcVar5 = pcVar8;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar3 = acStack_280;
  pcStack_1c8 = FUN_1056ef214;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar4 = pcVar9;
  pcVar7 = pcVar5;
  pcVar8 = param_5;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  if (pcVar1 != (char *)0x0) {
    plVar12 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_260,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar9 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_248,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_230,pcVar1);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x00010007e1e8(acStack_280,acStack_260,&lStack_218,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_268 = acStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar11 = 0;
    pcVar4 = pcVar3;
    pcVar7 = param_5;
    do {
      if ((&cStack_219)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_280;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_260);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar10 = acStack_340;
  pcStack_288 = FUN_1056ef48c;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar3 = pcVar4;
  pcVar5 = pcVar7;
  pcVar9 = pcVar8;
  ppppuStack_290 = &pppuStack_1d0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  if (pcVar1 != (char *)0x0) {
    plVar12 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_320,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_308,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_2f0,pcVar1);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,acStack_320,&lStack_2d8,3);
    pcVar2 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar11 = 0;
    pcVar3 = pcVar10;
    pcVar5 = pcVar8;
    do {
      if ((&cStack_2d9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_340;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_320);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar10 = acStack_400;
  pcStack_348 = FUN_1056ef704;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar4 = pcVar3;
  pcVar7 = pcVar5;
  pcVar8 = pcVar9;
  ppppuStack_350 = &ppppuStack_290;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  if (pcVar1 != (char *)0x0) {
    plVar12 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_3e0,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_3c8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_3b0,pcVar1);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x00010007e1e8(acStack_400,acStack_3e0,&lStack_398,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_3e8 = acStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar11 = 0;
    pcVar4 = pcVar10;
    pcVar7 = pcVar9;
    do {
      if ((&cStack_399)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_400;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != acStack_3e0);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar5 = acStack_4c0;
    pcStack_408 = FUN_1056ef97c;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar6;
    pcVar3 = pcVar4;
    ppppuStack_410 = &ppppuStack_350;
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    if (pcVar1 != (char *)0x0) {
      plVar12 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(acStack_4a0,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar4 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_488,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar4 = pcVar7;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_470,pcVar4);
      acStack_4c0[0] = '\0';
      acStack_4c0[1] = '\0';
      acStack_4c0[2] = '\0';
      acStack_4c0[3] = '\0';
      acStack_4c0[4] = '\0';
      acStack_4c0[5] = '\0';
      acStack_4c0[6] = '\0';
      acStack_4c0[7] = '\0';
      acStack_4c0[8] = '\0';
      acStack_4c0[9] = '\0';
      acStack_4c0[10] = '\0';
      acStack_4c0[0xb] = '\0';
      acStack_4c0[0xc] = '\0';
      acStack_4c0[0xd] = '\0';
      acStack_4c0[0xe] = '\0';
      acStack_4c0[0xf] = '\0';
      acStack_4c0[0x10] = '\0';
      acStack_4c0[0x11] = '\0';
      acStack_4c0[0x12] = '\0';
      acStack_4c0[0x13] = '\0';
      acStack_4c0[0x14] = '\0';
      acStack_4c0[0x15] = '\0';
      acStack_4c0[0x16] = '\0';
      acStack_4c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4c0,acStack_4a0,&lStack_458,3);
      pcVar2 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab30,acStack_4c0,pcVar8);
      puStack_4a8 = acStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      lVar11 = 0;
      pcVar3 = pcVar5;
      do {
        if ((&cStack_459)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x23 = acStack_4c0;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != acStack_4a0);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcVar10 = acStack_540;
    pcStack_4c8 = FUN_1056efbf4;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar2;
    pcVar9 = pcVar3;
    pcStack_500 = pcVar4;
    pcStack_4f8 = unaff_x23;
    pcStack_4f0 = acStack_4a0;
    pcStack_4e8 = pcVar1;
    pcStack_4e0 = pcVar7;
    pcStack_4d8 = pcVar6;
    ppppuStack_4d0 = &ppppuStack_410;
    _objc_retain(pcVar2);
    plVar12 = (long *)0x0;
    pcVar1 = acStack_4a0;
    if (pcVar5 != (char *)0x0) {
      plVar12 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x23 = (char *)auStack_520;
      func_0x00010002b838(auStack_520,pcVar1);
      acStack_540[0] = '\0';
      acStack_540[1] = '\0';
      acStack_540[2] = '\0';
      acStack_540[3] = '\0';
      acStack_540[4] = '\0';
      acStack_540[5] = '\0';
      acStack_540[6] = '\0';
      acStack_540[7] = '\0';
      acStack_540[8] = '\0';
      acStack_540[9] = '\0';
      acStack_540[10] = '\0';
      acStack_540[0xb] = '\0';
      acStack_540[0xc] = '\0';
      acStack_540[0xd] = '\0';
      acStack_540[0xe] = '\0';
      acStack_540[0xf] = '\0';
      acStack_540[0x10] = '\0';
      acStack_540[0x11] = '\0';
      acStack_540[0x12] = '\0';
      acStack_540[0x13] = '\0';
      acStack_540[0x14] = '\0';
      acStack_540[0x15] = '\0';
      acStack_540[0x16] = '\0';
      acStack_540[0x17] = '\0';
      func_0x00010007e1e8(acStack_540,auStack_520,&lStack_508,1);
      pcVar8 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab80,acStack_540,pcVar3);
      puStack_528 = acStack_540;
      func_0x00010007e5dc(&puStack_528);
      pcVar9 = pcVar10;
      pcVar1 = acStack_540;
      if (cStack_509 < '\0') {
        __ZdlPv(auStack_520[0]);
        pcVar9 = pcVar10;
        pcVar1 = acStack_540;
      }
    }
    pcVar6 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    pcVar3 = pcVar6;
    __Unwind_Resume();
    pcVar10 = acStack_5c0;
    pcStack_548 = FUN_1056efd68;
    lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar8;
    pcVar5 = pcVar9;
    pcStack_580 = pcVar4;
    pcStack_578 = unaff_x23;
    pcStack_570 = pcVar1;
    plStack_568 = plVar12;
    pcStack_560 = pcVar6;
    pcStack_558 = pcVar2;
    ppppuStack_550 = &ppppuStack_4d0;
    _objc_retain(pcVar8);
    plVar12 = (long *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x23 = (char *)auStack_5a0;
      func_0x00010002b838(auStack_5a0,pcVar1);
      acStack_5c0[0] = '\0';
      acStack_5c0[1] = '\0';
      acStack_5c0[2] = '\0';
      acStack_5c0[3] = '\0';
      acStack_5c0[4] = '\0';
      acStack_5c0[5] = '\0';
      acStack_5c0[6] = '\0';
      acStack_5c0[7] = '\0';
      acStack_5c0[8] = '\0';
      acStack_5c0[9] = '\0';
      acStack_5c0[10] = '\0';
      acStack_5c0[0xb] = '\0';
      acStack_5c0[0xc] = '\0';
      acStack_5c0[0xd] = '\0';
      acStack_5c0[0xe] = '\0';
      acStack_5c0[0xf] = '\0';
      acStack_5c0[0x10] = '\0';
      acStack_5c0[0x11] = '\0';
      acStack_5c0[0x12] = '\0';
      acStack_5c0[0x13] = '\0';
      acStack_5c0[0x14] = '\0';
      acStack_5c0[0x15] = '\0';
      acStack_5c0[0x16] = '\0';
      acStack_5c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_5c0,auStack_5a0,&lStack_588,1);
      pcVar7 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aabd0,acStack_5c0,pcVar9);
      puStack_5a8 = acStack_5c0;
      func_0x00010007e5dc(&puStack_5a8);
      pcVar5 = pcVar10;
      pcVar1 = acStack_5c0;
      if (cStack_589 < '\0') {
        __ZdlPv(auStack_5a0[0]);
        pcVar5 = pcVar10;
        pcVar1 = acStack_5c0;
      }
    }
    pcVar6 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar3 = pcVar6;
      __Unwind_Resume();
      pcStack_5c8 = FUN_1056efedc;
      lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar7;
      pcStack_600 = pcVar4;
      pcStack_5f8 = unaff_x23;
      pcStack_5f0 = pcVar1;
      plStack_5e8 = plVar12;
      pcStack_5e0 = pcVar6;
      pcStack_5d8 = pcVar8;
      ppppuStack_5d0 = &ppppuStack_550;
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        plVar12 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_620,pcVar1);
        uStack_640 = 0;
        uStack_638 = 0;
        uStack_630 = 0;
        func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_608,1);
        pcVar2 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aac20,&uStack_640,pcVar5);
        puStack_628 = (undefined1 *)&uStack_640;
        func_0x00010007e5dc(&puStack_628);
        if (cStack_609 < '\0') {
          __ZdlPv(auStack_620[0]);
        }
      }
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        puStack_668 = (undefined1 *)&uStack_680;
        pcStack_648 = FUN_1056f0050;
        if (pcVar6 != (char *)0x0) {
          uStack_680 = 0;
          uStack_678 = 0;
          uStack_670 = 0;
          pcStack_660 = pcVar1;
          pcStack_658 = pcVar7;
          ppppuStack_650 = &ppppuStack_5d0;
          (**(code **)(**(long **)(pcVar6 + 8) + 0x18))
                    (*(long **)(pcVar6 + 8),&UNK_1108aac70,&uStack_680,pcVar2);
          func_0x00010007e5dc(&puStack_668);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056eee70; end: 1056ef09f;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056eee70(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  char *pcStack_560;
  char *pcStack_558;
  char *pcStack_550;
  long *plStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ****ppppuStack_530;
  code *pcStack_528;
  char acStack_520 [24];
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  char *pcStack_4d0;
  long *plStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  char acStack_4a0 [24];
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  char *pcStack_460;
  char *pcStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  char acStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_360 [24];
  undefined1 *puStack_348;
  char acStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  char acStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  char acStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar6 = acStack_120;
  pcStack_a8 = FUN_1056ef0a0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar7 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar6;
    pcVar4 = pcVar5;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar6;
      pcVar4 = pcVar5;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_1e0;
  pcStack_128 = FUN_1056ef214;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar2 = pcVar8;
  pcVar3 = pcVar4;
  pcVar6 = param_5;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar4);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_1c0,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1a8,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_190,pcVar1);
    acStack_1e0[0] = '\0';
    acStack_1e0[1] = '\0';
    acStack_1e0[2] = '\0';
    acStack_1e0[3] = '\0';
    acStack_1e0[4] = '\0';
    acStack_1e0[5] = '\0';
    acStack_1e0[6] = '\0';
    acStack_1e0[7] = '\0';
    acStack_1e0[8] = '\0';
    acStack_1e0[9] = '\0';
    acStack_1e0[10] = '\0';
    acStack_1e0[0xb] = '\0';
    acStack_1e0[0xc] = '\0';
    acStack_1e0[0xd] = '\0';
    acStack_1e0[0xe] = '\0';
    acStack_1e0[0xf] = '\0';
    acStack_1e0[0x10] = '\0';
    acStack_1e0[0x11] = '\0';
    acStack_1e0[0x12] = '\0';
    acStack_1e0[0x13] = '\0';
    acStack_1e0[0x14] = '\0';
    acStack_1e0[0x15] = '\0';
    acStack_1e0[0x16] = '\0';
    acStack_1e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1e0,acStack_1c0,&lStack_178,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1c8 = acStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    lVar11 = 0;
    pcVar2 = pcVar9;
    pcVar3 = param_5;
    do {
      if ((&cStack_179)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_1e0;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar4);
  pcVar5 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_1c0);
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar10 = acStack_2a0;
  pcStack_1e8 = FUN_1056ef48c;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar7 = pcVar2;
  pcVar8 = pcVar3;
  pcVar9 = pcVar6;
  pppuStack_1f0 = &ppuStack_130;
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_280,pcVar5);
    pcVar5 = "true";
    if ((int)pcVar2 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_268,pcVar5);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar5 = pcVar3;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_250,pcVar5);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,acStack_280,&lStack_238,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    lVar11 = 0;
    pcVar7 = pcVar10;
    pcVar8 = pcVar6;
    do {
      if ((&cStack_239)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_2a0;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_280);
  _objc_release(pcVar3);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar10 = acStack_360;
  pcStack_2a8 = FUN_1056ef704;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar2 = pcVar7;
  pcVar3 = pcVar8;
  pcVar6 = pcVar9;
  ppppuStack_2b0 = &pppuStack_1f0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(acStack_340,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_328,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_310,pcVar1);
    acStack_360[0] = '\0';
    acStack_360[1] = '\0';
    acStack_360[2] = '\0';
    acStack_360[3] = '\0';
    acStack_360[4] = '\0';
    acStack_360[5] = '\0';
    acStack_360[6] = '\0';
    acStack_360[7] = '\0';
    acStack_360[8] = '\0';
    acStack_360[9] = '\0';
    acStack_360[10] = '\0';
    acStack_360[0xb] = '\0';
    acStack_360[0xc] = '\0';
    acStack_360[0xd] = '\0';
    acStack_360[0xe] = '\0';
    acStack_360[0xf] = '\0';
    acStack_360[0x10] = '\0';
    acStack_360[0x11] = '\0';
    acStack_360[0x12] = '\0';
    acStack_360[0x13] = '\0';
    acStack_360[0x14] = '\0';
    acStack_360[0x15] = '\0';
    acStack_360[0x16] = '\0';
    acStack_360[0x17] = '\0';
    func_0x00010007e1e8(acStack_360,acStack_340,&lStack_2f8,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_348 = acStack_360;
    func_0x00010007e5dc(&puStack_348);
    lVar11 = 0;
    pcVar2 = pcVar10;
    pcVar3 = pcVar9;
    do {
      if ((&cStack_2f9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_360;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  pcVar5 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != acStack_340);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    __Unwind_Resume();
    pcVar8 = acStack_420;
    pcStack_368 = FUN_1056ef97c;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar1;
    pcVar7 = pcVar2;
    ppppuStack_370 = &ppppuStack_2b0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar3);
    if (pcVar5 != (char *)0x0) {
      plVar12 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_400,pcVar5);
      pcVar5 = "true";
      if ((int)pcVar2 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_3e8,pcVar5);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar2 = pcVar3;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_3d0,pcVar2);
      acStack_420[0] = '\0';
      acStack_420[1] = '\0';
      acStack_420[2] = '\0';
      acStack_420[3] = '\0';
      acStack_420[4] = '\0';
      acStack_420[5] = '\0';
      acStack_420[6] = '\0';
      acStack_420[7] = '\0';
      acStack_420[8] = '\0';
      acStack_420[9] = '\0';
      acStack_420[10] = '\0';
      acStack_420[0xb] = '\0';
      acStack_420[0xc] = '\0';
      acStack_420[0xd] = '\0';
      acStack_420[0xe] = '\0';
      acStack_420[0xf] = '\0';
      acStack_420[0x10] = '\0';
      acStack_420[0x11] = '\0';
      acStack_420[0x12] = '\0';
      acStack_420[0x13] = '\0';
      acStack_420[0x14] = '\0';
      acStack_420[0x15] = '\0';
      acStack_420[0x16] = '\0';
      acStack_420[0x17] = '\0';
      func_0x00010007e1e8(acStack_420,acStack_400,&lStack_3b8,3);
      pcVar4 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab30,acStack_420,pcVar6);
      puStack_408 = acStack_420;
      func_0x00010007e5dc(&puStack_408);
      lVar11 = 0;
      pcVar7 = pcVar8;
      do {
        if ((&cStack_3b9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x23 = acStack_420;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar3);
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != acStack_400);
    _objc_release(pcVar3);
    _objc_release(pcVar1);
    pcVar6 = pcVar5;
    __Unwind_Resume();
    pcVar10 = acStack_4a0;
    pcStack_428 = FUN_1056efbf4;
    lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar4;
    pcVar9 = pcVar7;
    pcStack_460 = pcVar2;
    pcStack_458 = unaff_x23;
    pcStack_450 = acStack_400;
    pcStack_448 = pcVar5;
    pcStack_440 = pcVar3;
    pcStack_438 = pcVar1;
    ppppuStack_430 = &ppppuStack_370;
    _objc_retain(pcVar4);
    plVar12 = (long *)0x0;
    pcVar1 = acStack_400;
    if (pcVar6 != (char *)0x0) {
      plVar12 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      unaff_x23 = (char *)auStack_480;
      func_0x00010002b838(auStack_480,pcVar1);
      acStack_4a0[0] = '\0';
      acStack_4a0[1] = '\0';
      acStack_4a0[2] = '\0';
      acStack_4a0[3] = '\0';
      acStack_4a0[4] = '\0';
      acStack_4a0[5] = '\0';
      acStack_4a0[6] = '\0';
      acStack_4a0[7] = '\0';
      acStack_4a0[8] = '\0';
      acStack_4a0[9] = '\0';
      acStack_4a0[10] = '\0';
      acStack_4a0[0xb] = '\0';
      acStack_4a0[0xc] = '\0';
      acStack_4a0[0xd] = '\0';
      acStack_4a0[0xe] = '\0';
      acStack_4a0[0xf] = '\0';
      acStack_4a0[0x10] = '\0';
      acStack_4a0[0x11] = '\0';
      acStack_4a0[0x12] = '\0';
      acStack_4a0[0x13] = '\0';
      acStack_4a0[0x14] = '\0';
      acStack_4a0[0x15] = '\0';
      acStack_4a0[0x16] = '\0';
      acStack_4a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4a0,auStack_480,&lStack_468,1);
      pcVar8 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab80,acStack_4a0,pcVar7);
      puStack_488 = acStack_4a0;
      func_0x00010007e5dc(&puStack_488);
      pcVar9 = pcVar10;
      pcVar1 = acStack_4a0;
      if (cStack_469 < '\0') {
        __ZdlPv(auStack_480[0]);
        pcVar9 = pcVar10;
        pcVar1 = acStack_4a0;
      }
    }
    pcVar5 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    _objc_release(pcVar4);
    pcVar3 = pcVar5;
    __Unwind_Resume();
    pcVar10 = acStack_520;
    pcStack_4a8 = FUN_1056efd68;
    lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar8;
    pcVar6 = pcVar9;
    pcStack_4e0 = pcVar2;
    pcStack_4d8 = unaff_x23;
    pcStack_4d0 = pcVar1;
    plStack_4c8 = plVar12;
    pcStack_4c0 = pcVar5;
    pcStack_4b8 = pcVar4;
    ppppuStack_4b0 = &ppppuStack_430;
    _objc_retain(pcVar8);
    plVar12 = (long *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x23 = (char *)auStack_500;
      func_0x00010002b838(auStack_500,pcVar1);
      acStack_520[0] = '\0';
      acStack_520[1] = '\0';
      acStack_520[2] = '\0';
      acStack_520[3] = '\0';
      acStack_520[4] = '\0';
      acStack_520[5] = '\0';
      acStack_520[6] = '\0';
      acStack_520[7] = '\0';
      acStack_520[8] = '\0';
      acStack_520[9] = '\0';
      acStack_520[10] = '\0';
      acStack_520[0xb] = '\0';
      acStack_520[0xc] = '\0';
      acStack_520[0xd] = '\0';
      acStack_520[0xe] = '\0';
      acStack_520[0xf] = '\0';
      acStack_520[0x10] = '\0';
      acStack_520[0x11] = '\0';
      acStack_520[0x12] = '\0';
      acStack_520[0x13] = '\0';
      acStack_520[0x14] = '\0';
      acStack_520[0x15] = '\0';
      acStack_520[0x16] = '\0';
      acStack_520[0x17] = '\0';
      func_0x00010007e1e8(acStack_520,auStack_500,&lStack_4e8,1);
      pcVar7 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aabd0,acStack_520,pcVar9);
      puStack_508 = acStack_520;
      func_0x00010007e5dc(&puStack_508);
      pcVar6 = pcVar10;
      pcVar1 = acStack_520;
      if (cStack_4e9 < '\0') {
        __ZdlPv(auStack_500[0]);
        pcVar6 = pcVar10;
        pcVar1 = acStack_520;
      }
    }
    pcVar5 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar3 = pcVar5;
      __Unwind_Resume();
      pcStack_528 = FUN_1056efedc;
      lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar7;
      pcStack_560 = pcVar2;
      pcStack_558 = unaff_x23;
      pcStack_550 = pcVar1;
      plStack_548 = plVar12;
      pcStack_540 = pcVar5;
      pcStack_538 = pcVar8;
      ppppuStack_530 = &ppppuStack_4b0;
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        plVar12 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_580,pcVar1);
        uStack_5a0 = 0;
        uStack_598 = 0;
        uStack_590 = 0;
        func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_568,1);
        pcVar4 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aac20,&uStack_5a0,pcVar6);
        puStack_588 = (undefined1 *)&uStack_5a0;
        func_0x00010007e5dc(&puStack_588);
        if (cStack_569 < '\0') {
          __ZdlPv(auStack_580[0]);
        }
      }
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        pcVar5 = pcVar1;
        __Unwind_Resume();
        puStack_5c8 = (undefined1 *)&uStack_5e0;
        pcStack_5a8 = FUN_1056f0050;
        if (pcVar5 != (char *)0x0) {
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          pcStack_5c0 = pcVar1;
          pcStack_5b8 = pcVar7;
          ppppuStack_5b0 = &ppppuStack_530;
          (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                    (*(long **)(pcVar5 + 8),&UNK_1108aac70,&uStack_5e0,pcVar4);
          func_0x00010007e5dc(&puStack_5c8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ef0a0; end: 1056ef213;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ef0a0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *unaff_x23;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  char *pcStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  char acStack_480 [24];
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  char *pcStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_140;
  pcStack_88 = FUN_1056ef214;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar4 = pcVar3;
  pcVar6 = param_4;
  pcVar8 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(param_4);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_108,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,pcVar3);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
    pcVar7 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar12 = 0;
    pcVar4 = pcVar5;
    pcVar6 = param_5;
    do {
      if ((&cStack_d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = acStack_140;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_120);
  _objc_release(param_4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_200;
  pcStack_148 = FUN_1056ef48c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar2 = pcVar4;
  pcVar5 = pcVar6;
  pcVar10 = pcVar8;
  ppuStack_150 = &puStack_90;
  _objc_retain(pcVar7);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1e0,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1b0,pcVar1);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_198,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar12 = 0;
    pcVar2 = pcVar9;
    pcVar5 = pcVar8;
    do {
      if ((&cStack_199)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = acStack_200;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_1e0);
  _objc_release(pcVar6);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar9 = acStack_2c0;
  pcStack_208 = FUN_1056ef704;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar4 = pcVar2;
  pcVar6 = pcVar5;
  pcVar8 = pcVar10;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2a0,pcVar3);
    pcVar3 = "true";
    if ((int)pcVar2 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_288,pcVar3);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_270,pcVar3);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_258,3);
    pcVar7 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar12 = 0;
    pcVar4 = pcVar9;
    pcVar6 = pcVar10;
    do {
      if ((&cStack_259)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = acStack_2c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_2a0);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar5 = acStack_380;
  pcStack_2c8 = FUN_1056ef97c;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar2 = pcVar4;
  pppuStack_2d0 = &pppuStack_210;
  _objc_retain(pcVar7);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_360,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_348,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar4 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_330,pcVar4);
    acStack_380[0] = '\0';
    acStack_380[1] = '\0';
    acStack_380[2] = '\0';
    acStack_380[3] = '\0';
    acStack_380[4] = '\0';
    acStack_380[5] = '\0';
    acStack_380[6] = '\0';
    acStack_380[7] = '\0';
    acStack_380[8] = '\0';
    acStack_380[9] = '\0';
    acStack_380[10] = '\0';
    acStack_380[0xb] = '\0';
    acStack_380[0xc] = '\0';
    acStack_380[0xd] = '\0';
    acStack_380[0xe] = '\0';
    acStack_380[0xf] = '\0';
    acStack_380[0x10] = '\0';
    acStack_380[0x11] = '\0';
    acStack_380[0x12] = '\0';
    acStack_380[0x13] = '\0';
    acStack_380[0x14] = '\0';
    acStack_380[0x15] = '\0';
    acStack_380[0x16] = '\0';
    acStack_380[0x17] = '\0';
    func_0x00010007e1e8(acStack_380,auStack_360,&lStack_318,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aab30,acStack_380,pcVar8);
    puStack_368 = acStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar12 = 0;
    pcVar2 = pcVar5;
    do {
      if ((&cStack_319)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = acStack_380;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      unaff_x23 = (char *)((long)unaff_x23 + -0x18);
    } while (unaff_x23 != (char *)auStack_360);
    _objc_release(pcVar6);
    _objc_release(pcVar7);
    pcVar5 = pcVar3;
    __Unwind_Resume();
    pcVar9 = acStack_400;
    pcStack_388 = FUN_1056efbf4;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar1;
    pcVar10 = pcVar2;
    pcStack_3c0 = pcVar4;
    puStack_3b8 = (undefined8 *)unaff_x23;
    puStack_3b0 = auStack_360;
    pcStack_3a8 = pcVar3;
    pcStack_3a0 = pcVar6;
    pcStack_398 = pcVar7;
    pppuStack_390 = &pppuStack_2d0;
    _objc_retain(pcVar1);
    plVar11 = (long *)0x0;
    pcVar3 = (char *)auStack_360;
    if (pcVar5 != (char *)0x0) {
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x23 = (char *)auStack_3e0;
      func_0x00010002b838(auStack_3e0,pcVar3);
      acStack_400[0] = '\0';
      acStack_400[1] = '\0';
      acStack_400[2] = '\0';
      acStack_400[3] = '\0';
      acStack_400[4] = '\0';
      acStack_400[5] = '\0';
      acStack_400[6] = '\0';
      acStack_400[7] = '\0';
      acStack_400[8] = '\0';
      acStack_400[9] = '\0';
      acStack_400[10] = '\0';
      acStack_400[0xb] = '\0';
      acStack_400[0xc] = '\0';
      acStack_400[0xd] = '\0';
      acStack_400[0xe] = '\0';
      acStack_400[0xf] = '\0';
      acStack_400[0x10] = '\0';
      acStack_400[0x11] = '\0';
      acStack_400[0x12] = '\0';
      acStack_400[0x13] = '\0';
      acStack_400[0x14] = '\0';
      acStack_400[0x15] = '\0';
      acStack_400[0x16] = '\0';
      acStack_400[0x17] = '\0';
      func_0x00010007e1e8(acStack_400,auStack_3e0,&lStack_3c8,1);
      pcVar8 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aab80,acStack_400,pcVar2);
      puStack_3e8 = acStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      pcVar10 = pcVar9;
      pcVar3 = acStack_400;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        pcVar10 = pcVar9;
        pcVar3 = acStack_400;
      }
    }
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar6 = pcVar2;
    __Unwind_Resume();
    pcVar9 = acStack_480;
    pcStack_408 = FUN_1056efd68;
    lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar8;
    pcVar5 = pcVar10;
    pcStack_440 = pcVar4;
    puStack_438 = (undefined8 *)unaff_x23;
    puStack_430 = (undefined8 *)pcVar3;
    plStack_428 = plVar11;
    pcStack_420 = pcVar2;
    pcStack_418 = pcVar1;
    pppuStack_410 = &pppuStack_390;
    _objc_retain(pcVar8);
    plVar11 = (long *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar11 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x23 = (char *)auStack_460;
      func_0x00010002b838(auStack_460,pcVar1);
      acStack_480[0] = '\0';
      acStack_480[1] = '\0';
      acStack_480[2] = '\0';
      acStack_480[3] = '\0';
      acStack_480[4] = '\0';
      acStack_480[5] = '\0';
      acStack_480[6] = '\0';
      acStack_480[7] = '\0';
      acStack_480[8] = '\0';
      acStack_480[9] = '\0';
      acStack_480[10] = '\0';
      acStack_480[0xb] = '\0';
      acStack_480[0xc] = '\0';
      acStack_480[0xd] = '\0';
      acStack_480[0xe] = '\0';
      acStack_480[0xf] = '\0';
      acStack_480[0x10] = '\0';
      acStack_480[0x11] = '\0';
      acStack_480[0x12] = '\0';
      acStack_480[0x13] = '\0';
      acStack_480[0x14] = '\0';
      acStack_480[0x15] = '\0';
      acStack_480[0x16] = '\0';
      acStack_480[0x17] = '\0';
      func_0x00010007e1e8(acStack_480,auStack_460,&lStack_448,1);
      pcVar7 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aabd0,acStack_480,pcVar10);
      puStack_468 = acStack_480;
      func_0x00010007e5dc(&puStack_468);
      pcVar5 = pcVar9;
      pcVar3 = acStack_480;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        pcVar5 = pcVar9;
        pcVar3 = acStack_480;
      }
    }
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_488 = FUN_1056efedc;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar7;
      pcStack_4c0 = pcVar4;
      puStack_4b8 = (undefined8 *)unaff_x23;
      puStack_4b0 = (undefined8 *)pcVar3;
      plStack_4a8 = plVar11;
      pcStack_4a0 = pcVar1;
      pcStack_498 = pcVar8;
      pppuStack_490 = &pppuStack_410;
      _objc_retain(pcVar7);
      if (pcVar6 != (char *)0x0) {
        plVar11 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_4e0,pcVar1);
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
        pcVar2 = "\x01";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aac20,&uStack_500,pcVar5);
        puStack_4e8 = (undefined1 *)&uStack_500;
        func_0x00010007e5dc(&puStack_4e8);
        if (cStack_4c9 < '\0') {
          __ZdlPv(auStack_4e0[0]);
        }
      }
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        puStack_528 = (undefined1 *)&uStack_540;
        pcStack_508 = FUN_1056f0050;
        if (pcVar3 != (char *)0x0) {
          uStack_540 = 0;
          uStack_538 = 0;
          uStack_530 = 0;
          pcStack_520 = pcVar1;
          pcStack_518 = pcVar7;
          pppuStack_510 = &pppuStack_490;
          (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                    (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_540,pcVar2);
          func_0x00010007e5dc(&puStack_528);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ef214; end: 1056ef48b;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ef214(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  char *pcStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char *pcStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  pcVar4 = param_4;
  pcVar8 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar3 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_1056ef48c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar6 = pcVar3;
  pcVar5 = pcVar4;
  pcVar10 = pcVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar3 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_130,pcVar3);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar7 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    pcVar6 = pcVar9;
    pcVar5 = pcVar8;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_160);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_188 = FUN_1056ef704;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar4 = pcVar6;
  pcVar8 = pcVar5;
  pcVar2 = pcVar10;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_220,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar11 = 0;
    pcVar4 = pcVar9;
    pcVar8 = pcVar10;
    do {
      if ((&cStack_1d9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_240;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar5);
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_220);
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar5 = acStack_300;
  pcStack_248 = FUN_1056ef97c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar6 = pcVar4;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2e0,pcVar3);
    pcVar3 = "true";
    if ((int)pcVar4 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar4 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_2b0,pcVar4);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,auStack_2e0,&lStack_298,3);
    pcVar7 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab30,acStack_300,pcVar2);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar11 = 0;
    pcVar6 = pcVar5;
    do {
      if ((&cStack_299)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_300;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_2e0);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcVar9 = acStack_380;
  pcStack_308 = FUN_1056efbf4;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar10 = pcVar6;
  pcStack_340 = pcVar4;
  puStack_338 = (undefined8 *)unaff_x23;
  puStack_330 = auStack_2e0;
  pcStack_328 = pcVar3;
  pcStack_320 = pcVar8;
  pcStack_318 = pcVar1;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar7);
  plVar12 = (long *)0x0;
  pcVar1 = (char *)auStack_2e0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_360;
    func_0x00010002b838(auStack_360,pcVar1);
    acStack_380[0] = '\0';
    acStack_380[1] = '\0';
    acStack_380[2] = '\0';
    acStack_380[3] = '\0';
    acStack_380[4] = '\0';
    acStack_380[5] = '\0';
    acStack_380[6] = '\0';
    acStack_380[7] = '\0';
    acStack_380[8] = '\0';
    acStack_380[9] = '\0';
    acStack_380[10] = '\0';
    acStack_380[0xb] = '\0';
    acStack_380[0xc] = '\0';
    acStack_380[0xd] = '\0';
    acStack_380[0xe] = '\0';
    acStack_380[0xf] = '\0';
    acStack_380[0x10] = '\0';
    acStack_380[0x11] = '\0';
    acStack_380[0x12] = '\0';
    acStack_380[0x13] = '\0';
    acStack_380[0x14] = '\0';
    acStack_380[0x15] = '\0';
    acStack_380[0x16] = '\0';
    acStack_380[0x17] = '\0';
    func_0x00010007e1e8(acStack_380,auStack_360,&lStack_348,1);
    pcVar2 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab80,acStack_380,pcVar6);
    puStack_368 = acStack_380;
    func_0x00010007e5dc(&puStack_368);
    pcVar10 = pcVar9;
    pcVar1 = acStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      pcVar10 = pcVar9;
      pcVar1 = acStack_380;
    }
  }
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar6 = pcVar3;
  __Unwind_Resume();
  pcVar9 = acStack_400;
  pcStack_388 = FUN_1056efd68;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar5 = pcVar10;
  pcStack_3c0 = pcVar4;
  puStack_3b8 = (undefined8 *)unaff_x23;
  puStack_3b0 = (undefined8 *)pcVar1;
  plStack_3a8 = plVar12;
  pcStack_3a0 = pcVar3;
  pcStack_398 = pcVar7;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(pcVar2);
  plVar12 = (long *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar12 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_3e0;
    func_0x00010002b838(auStack_3e0,pcVar1);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x00010007e1e8(acStack_400,auStack_3e0,&lStack_3c8,1);
    pcVar8 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aabd0,acStack_400,pcVar10);
    puStack_3e8 = acStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    pcVar5 = pcVar9;
    pcVar1 = acStack_400;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      pcVar5 = pcVar9;
      pcVar1 = acStack_400;
    }
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    pcVar6 = pcVar3;
    __Unwind_Resume();
    pcStack_408 = FUN_1056efedc;
    lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar8;
    pcStack_440 = pcVar4;
    puStack_438 = (undefined8 *)unaff_x23;
    puStack_430 = (undefined8 *)pcVar1;
    plStack_428 = plVar12;
    pcStack_420 = pcVar3;
    pcStack_418 = pcVar2;
    pppuStack_410 = &pppuStack_390;
    _objc_retain(pcVar8);
    if (pcVar6 != (char *)0x0) {
      plVar12 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_460,pcVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      pcVar7 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aac20,&uStack_480,pcVar5);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
      }
    }
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      pcVar3 = pcVar1;
      __Unwind_Resume();
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      pcStack_488 = FUN_1056f0050;
      if (pcVar3 != (char *)0x0) {
        uStack_4c0 = 0;
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        pcStack_4a0 = pcVar1;
        pcStack_498 = pcVar8;
        pppuStack_490 = &pppuStack_410;
        (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                  (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_4c0,pcVar7);
        func_0x00010007e5dc(&puStack_4a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ef48c; end: 1056ef703;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ef48c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  char *pcStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  pcVar5 = param_4;
  pcVar7 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar3 = pcVar2;
    pcVar5 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar8 = acStack_180;
  pcStack_c8 = FUN_1056ef704;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar4 = pcVar3;
  pcVar10 = pcVar5;
  pcVar9 = pcVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_130,pcVar3);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    pcVar4 = pcVar8;
    pcVar10 = pcVar7;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_160);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_240;
  pcStack_188 = FUN_1056ef97c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar5 = pcVar4;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_220,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar4 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar4);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab30,acStack_240,pcVar9);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar11 = 0;
    pcVar5 = pcVar7;
    do {
      if ((&cStack_1d9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_240;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar10);
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      unaff_x23 = (char *)((long)unaff_x23 + -0x18);
    } while (unaff_x23 != (char *)auStack_220);
    _objc_release(pcVar10);
    _objc_release(pcVar6);
    pcVar2 = pcVar3;
    __Unwind_Resume();
    pcVar8 = acStack_2c0;
    pcStack_248 = FUN_1056efbf4;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar1;
    pcVar9 = pcVar5;
    pcStack_280 = pcVar4;
    puStack_278 = (undefined8 *)unaff_x23;
    puStack_270 = auStack_220;
    pcStack_268 = pcVar3;
    pcStack_260 = pcVar10;
    pcStack_258 = pcVar6;
    pppuStack_250 = &ppuStack_190;
    _objc_retain(pcVar1);
    plVar12 = (long *)0x0;
    pcVar3 = (char *)auStack_220;
    if (pcVar2 != (char *)0x0) {
      plVar12 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x23 = (char *)auStack_2a0;
      func_0x00010002b838(auStack_2a0,pcVar3);
      acStack_2c0[0] = '\0';
      acStack_2c0[1] = '\0';
      acStack_2c0[2] = '\0';
      acStack_2c0[3] = '\0';
      acStack_2c0[4] = '\0';
      acStack_2c0[5] = '\0';
      acStack_2c0[6] = '\0';
      acStack_2c0[7] = '\0';
      acStack_2c0[8] = '\0';
      acStack_2c0[9] = '\0';
      acStack_2c0[10] = '\0';
      acStack_2c0[0xb] = '\0';
      acStack_2c0[0xc] = '\0';
      acStack_2c0[0xd] = '\0';
      acStack_2c0[0xe] = '\0';
      acStack_2c0[0xf] = '\0';
      acStack_2c0[0x10] = '\0';
      acStack_2c0[0x11] = '\0';
      acStack_2c0[0x12] = '\0';
      acStack_2c0[0x13] = '\0';
      acStack_2c0[0x14] = '\0';
      acStack_2c0[0x15] = '\0';
      acStack_2c0[0x16] = '\0';
      acStack_2c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
      pcVar7 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab80,acStack_2c0,pcVar5);
      puStack_2a8 = acStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      pcVar9 = pcVar8;
      pcVar3 = acStack_2c0;
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
        pcVar9 = pcVar8;
        pcVar3 = acStack_2c0;
      }
    }
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      pcVar6 = pcVar5;
      __Unwind_Resume();
      pcVar8 = acStack_340;
      pcStack_2c8 = FUN_1056efd68;
      lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar7;
      pcVar10 = pcVar9;
      pcStack_300 = pcVar4;
      puStack_2f8 = (undefined8 *)unaff_x23;
      puStack_2f0 = (undefined8 *)pcVar3;
      plStack_2e8 = plVar12;
      pcStack_2e0 = pcVar5;
      pcStack_2d8 = pcVar1;
      pppuStack_2d0 = &pppuStack_250;
      _objc_retain(pcVar7);
      plVar12 = (long *)0x0;
      if (pcVar6 != (char *)0x0) {
        plVar12 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        unaff_x23 = (char *)auStack_320;
        func_0x00010002b838(auStack_320,pcVar1);
        acStack_340[0] = '\0';
        acStack_340[1] = '\0';
        acStack_340[2] = '\0';
        acStack_340[3] = '\0';
        acStack_340[4] = '\0';
        acStack_340[5] = '\0';
        acStack_340[6] = '\0';
        acStack_340[7] = '\0';
        acStack_340[8] = '\0';
        acStack_340[9] = '\0';
        acStack_340[10] = '\0';
        acStack_340[0xb] = '\0';
        acStack_340[0xc] = '\0';
        acStack_340[0xd] = '\0';
        acStack_340[0xe] = '\0';
        acStack_340[0xf] = '\0';
        acStack_340[0x10] = '\0';
        acStack_340[0x11] = '\0';
        acStack_340[0x12] = '\0';
        acStack_340[0x13] = '\0';
        acStack_340[0x14] = '\0';
        acStack_340[0x15] = '\0';
        acStack_340[0x16] = '\0';
        acStack_340[0x17] = '\0';
        func_0x00010007e1e8(acStack_340,auStack_320,&lStack_308,1);
        pcVar2 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aabd0,acStack_340,pcVar9);
        puStack_328 = acStack_340;
        func_0x00010007e5dc(&puStack_328);
        pcVar10 = pcVar8;
        pcVar3 = acStack_340;
        if (cStack_309 < '\0') {
          __ZdlPv(auStack_320[0]);
          pcVar10 = pcVar8;
          pcVar3 = acStack_340;
        }
      }
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        pcStack_348 = FUN_1056efedc;
        lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar5 = pcVar2;
        pcStack_380 = pcVar4;
        puStack_378 = (undefined8 *)unaff_x23;
        puStack_370 = (undefined8 *)pcVar3;
        plStack_368 = plVar12;
        pcStack_360 = pcVar1;
        pcStack_358 = pcVar7;
        pppuStack_350 = &pppuStack_2d0;
        _objc_retain(pcVar2);
        if (pcVar6 != (char *)0x0) {
          plVar12 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_3a0,pcVar1);
          uStack_3c0 = 0;
          uStack_3b8 = 0;
          uStack_3b0 = 0;
          func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
          pcVar5 = "\x01";
          (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aac20,&uStack_3c0,pcVar10);
          puStack_3a8 = (undefined1 *)&uStack_3c0;
          func_0x00010007e5dc(&puStack_3a8);
          if (cStack_389 < '\0') {
            __ZdlPv(auStack_3a0[0]);
          }
        }
        pcVar1 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          _objc_release(pcVar2);
          pcVar3 = pcVar1;
          __Unwind_Resume();
          puStack_3e8 = (undefined1 *)&uStack_400;
          pcStack_3c8 = FUN_1056f0050;
          if (pcVar3 != (char *)0x0) {
            uStack_400 = 0;
            uStack_3f8 = 0;
            uStack_3f0 = 0;
            pcStack_3e0 = pcVar1;
            pcStack_3d8 = pcVar2;
            pppuStack_3d0 = &pppuStack_350;
            (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                      (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_400,pcVar5);
            func_0x00010007e5dc(&puStack_3e8);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ef704; end: 1056ef97b;  */

/* WARNING: Removing unreachable block (ram,0x0001056ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ef704(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  char *pcStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  long *plStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  long *plStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char *pcStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  pcVar6 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar3 = pcVar2;
    pcVar6 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_180;
  pcStack_c8 = FUN_1056ef97c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar7 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_130,pcVar3);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab30,acStack_180,pcVar4);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    pcVar7 = pcVar5;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      unaff_x23 = (char *)((long)unaff_x23 + -0x18);
    } while (unaff_x23 != (char *)auStack_160);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcVar10 = acStack_200;
    pcStack_188 = FUN_1056efbf4;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar8;
    pcVar9 = pcVar7;
    pcStack_1c0 = pcVar3;
    puStack_1b8 = (undefined8 *)unaff_x23;
    puStack_1b0 = auStack_160;
    pcStack_1a8 = pcVar4;
    pcStack_1a0 = pcVar6;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar8);
    plVar12 = (long *)0x0;
    pcVar1 = (char *)auStack_160;
    if (pcVar5 != (char *)0x0) {
      plVar12 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x23 = (char *)auStack_1e0;
      func_0x00010002b838(auStack_1e0,pcVar1);
      acStack_200[0] = '\0';
      acStack_200[1] = '\0';
      acStack_200[2] = '\0';
      acStack_200[3] = '\0';
      acStack_200[4] = '\0';
      acStack_200[5] = '\0';
      acStack_200[6] = '\0';
      acStack_200[7] = '\0';
      acStack_200[8] = '\0';
      acStack_200[9] = '\0';
      acStack_200[10] = '\0';
      acStack_200[0xb] = '\0';
      acStack_200[0xc] = '\0';
      acStack_200[0xd] = '\0';
      acStack_200[0xe] = '\0';
      acStack_200[0xf] = '\0';
      acStack_200[0x10] = '\0';
      acStack_200[0x11] = '\0';
      acStack_200[0x12] = '\0';
      acStack_200[0x13] = '\0';
      acStack_200[0x14] = '\0';
      acStack_200[0x15] = '\0';
      acStack_200[0x16] = '\0';
      acStack_200[0x17] = '\0';
      func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_1c8,1);
      pcVar2 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aab80,acStack_200,pcVar7);
      puStack_1e8 = acStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      pcVar9 = pcVar10;
      pcVar1 = acStack_200;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        pcVar9 = pcVar10;
        pcVar1 = acStack_200;
      }
    }
    pcVar6 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    _objc_release(pcVar8);
    pcVar7 = pcVar6;
    __Unwind_Resume();
    pcVar10 = acStack_280;
    pcStack_208 = FUN_1056efd68;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar2;
    pcVar5 = pcVar9;
    pcStack_240 = pcVar3;
    puStack_238 = (undefined8 *)unaff_x23;
    puStack_230 = (undefined8 *)pcVar1;
    plStack_228 = plVar12;
    pcStack_220 = pcVar6;
    pcStack_218 = pcVar8;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(pcVar2);
    plVar12 = (long *)0x0;
    if (pcVar7 != (char *)0x0) {
      plVar12 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x23 = (char *)auStack_260;
      func_0x00010002b838(auStack_260,pcVar1);
      acStack_280[0] = '\0';
      acStack_280[1] = '\0';
      acStack_280[2] = '\0';
      acStack_280[3] = '\0';
      acStack_280[4] = '\0';
      acStack_280[5] = '\0';
      acStack_280[6] = '\0';
      acStack_280[7] = '\0';
      acStack_280[8] = '\0';
      acStack_280[9] = '\0';
      acStack_280[10] = '\0';
      acStack_280[0xb] = '\0';
      acStack_280[0xc] = '\0';
      acStack_280[0xd] = '\0';
      acStack_280[0xe] = '\0';
      acStack_280[0xf] = '\0';
      acStack_280[0x10] = '\0';
      acStack_280[0x11] = '\0';
      acStack_280[0x12] = '\0';
      acStack_280[0x13] = '\0';
      acStack_280[0x14] = '\0';
      acStack_280[0x15] = '\0';
      acStack_280[0x16] = '\0';
      acStack_280[0x17] = '\0';
      func_0x00010007e1e8(acStack_280,auStack_260,&lStack_248,1);
      pcVar4 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aabd0,acStack_280,pcVar9);
      puStack_268 = acStack_280;
      func_0x00010007e5dc(&puStack_268);
      pcVar5 = pcVar10;
      pcVar1 = acStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        pcVar5 = pcVar10;
        pcVar1 = acStack_280;
      }
    }
    pcVar6 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      pcVar7 = pcVar6;
      __Unwind_Resume();
      pcStack_288 = FUN_1056efedc;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar4;
      pcStack_2c0 = pcVar3;
      puStack_2b8 = (undefined8 *)unaff_x23;
      puStack_2b0 = (undefined8 *)pcVar1;
      plStack_2a8 = plVar12;
      pcStack_2a0 = pcVar6;
      pcStack_298 = pcVar2;
      pppuStack_290 = &pppuStack_210;
      _objc_retain(pcVar4);
      if (pcVar7 != (char *)0x0) {
        plVar12 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar4;
          _objc_retainAutorelease(pcVar4);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_2e0,pcVar1);
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
        pcVar8 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108aac20,&uStack_300,pcVar5);
        puStack_2e8 = (undefined1 *)&uStack_300;
        func_0x00010007e5dc(&puStack_2e8);
        if (cStack_2c9 < '\0') {
          __ZdlPv(auStack_2e0[0]);
        }
      }
      pcVar1 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        _objc_release(pcVar4);
        _objc_release(pcVar4);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        puStack_328 = (undefined1 *)&uStack_340;
        pcStack_308 = FUN_1056f0050;
        if (pcVar3 != (char *)0x0) {
          uStack_340 = 0;
          uStack_338 = 0;
          uStack_330 = 0;
          pcStack_320 = pcVar1;
          pcStack_318 = pcVar4;
          pppuStack_310 = &pppuStack_290;
          (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                    (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_340,pcVar8);
          func_0x00010007e5dc(&puStack_328);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056ef97c; end: 1056efbf3;  */

/* WARNING: Removing unreachable block (ram,0x0001056efbc4) */

void FUN_1056ef97c(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x23;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  char *pcStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char *pcStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      param_3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aab30,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar4 = pcVar2;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar5 = acStack_140;
  pcStack_c8 = FUN_1056efbf4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar6 = pcVar4;
  pcStack_100 = param_3;
  puStack_f8 = (undefined8 *)unaff_x23;
  puStack_f0 = auStack_a0;
  pcStack_e8 = pcVar2;
  pcStack_e0 = param_4;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar11 = (long *)0x0;
  pcVar2 = (char *)auStack_a0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_120;
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,auStack_120,&lStack_108,1);
    pcVar7 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aab80,acStack_140,pcVar4);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    pcVar6 = pcVar5;
    pcVar2 = acStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      pcVar6 = pcVar5;
      pcVar2 = acStack_140;
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar9 = acStack_1c0;
  pcStack_148 = FUN_1056efd68;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar8 = pcVar6;
  pcStack_180 = param_3;
  puStack_178 = (undefined8 *)unaff_x23;
  puStack_170 = (undefined8 *)pcVar2;
  plStack_168 = plVar11;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(pcVar7);
  plVar11 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar11 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_1a0;
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    pcVar3 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aabd0,acStack_1c0,pcVar6);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar8 = pcVar9;
    pcVar2 = acStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar8 = pcVar9;
      pcVar2 = acStack_1c0;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_1c8 = FUN_1056efedc;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar3;
    pcStack_200 = param_3;
    puStack_1f8 = (undefined8 *)unaff_x23;
    puStack_1f0 = (undefined8 *)pcVar2;
    plStack_1e8 = plVar11;
    pcStack_1e0 = pcVar1;
    pcStack_1d8 = pcVar7;
    pppuStack_1d0 = &ppuStack_150;
    _objc_retain(pcVar3);
    if (pcVar6 != (char *)0x0) {
      plVar11 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_220,pcVar1);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
      pcVar4 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108aac20,&uStack_240,pcVar8);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      pcVar2 = pcVar1;
      __Unwind_Resume();
      puStack_268 = (undefined1 *)&uStack_280;
      pcStack_248 = FUN_1056f0050;
      if (pcVar2 != (char *)0x0) {
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        pcStack_260 = pcVar1;
        pcStack_258 = pcVar3;
        pppuStack_250 = &pppuStack_1d0;
        (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                  (*(long **)(pcVar2 + 8),&UNK_1108aac70,&uStack_280,pcVar4);
        func_0x00010007e5dc(&puStack_268);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056efbf4; end: 1056efd67;  */

void FUN_1056efbf4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108aab80,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_1056efd68;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108aabd0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1056efedc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108aac20,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_1056f0050;
  if (pcVar3 != (char *)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    pcStack_1a0 = pcVar2;
    pcStack_198 = pcVar4;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_1c0,pcVar1);
    func_0x00010007e5dc(&puStack_1a8);
  }
  return;
}



/* Entry: 1056efd68; end: 1056efedb;  */

void FUN_1056efd68(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108aabd0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1056efedc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108aac20,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1056f0050;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 1056efedc; end: 1056f004f;  */

void FUN_1056efedc(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aac20,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1056f0050;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108aac70,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1056f0050; end: 1056f00c7;  */

void FUN_1056f0050(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108aac70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056f00c8; end: 1056f02b3;  */

/* WARNING: Removing unreachable block (ram,0x0001056f09cc) */
/* WARNING: Removing unreachable block (ram,0x0001056f0c40) */

void FUN_1056f00c8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  char *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  char acStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  char acStack_2f0 [24];
  undefined1 *puStack_2d8;
  char acStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar12 = param_3;
  pcVar6 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    pcVar12 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    pcVar6 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar11 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_1056f02b4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar5 = pcVar12;
  pcVar7 = pcVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar12);
  if (pcVar11 != (char *)0x0) {
    plVar10 = *(long **)(pcVar11 + 8);
    pcVar11 = "true";
    if ((int)pcVar1 == 0) {
      pcVar11 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar11);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_100,pcVar1);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar3 = "";
    pcVar5 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    pcVar7 = pcVar6;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    _objc_release(pcVar12);
    __Unwind_Resume();
    pcVar11 = acStack_1c0;
    pcStack_148 = FUN_1056f04a0;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar3;
    pcVar6 = pcVar5;
    ppuStack_150 = &puStack_b0;
    _objc_retain(pcVar3);
    if (pcVar1 != (char *)0x0) {
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_1a0,pcVar1);
      acStack_1c0[0] = '\0';
      acStack_1c0[1] = '\0';
      acStack_1c0[2] = '\0';
      acStack_1c0[3] = '\0';
      acStack_1c0[4] = '\0';
      acStack_1c0[5] = '\0';
      acStack_1c0[6] = '\0';
      acStack_1c0[7] = '\0';
      acStack_1c0[8] = '\0';
      acStack_1c0[9] = '\0';
      acStack_1c0[10] = '\0';
      acStack_1c0[0xb] = '\0';
      acStack_1c0[0xc] = '\0';
      acStack_1c0[0xd] = '\0';
      acStack_1c0[0xe] = '\0';
      acStack_1c0[0xf] = '\0';
      acStack_1c0[0x10] = '\0';
      acStack_1c0[0x11] = '\0';
      acStack_1c0[0x12] = '\0';
      acStack_1c0[0x13] = '\0';
      acStack_1c0[0x14] = '\0';
      acStack_1c0[0x15] = '\0';
      acStack_1c0[0x16] = '\0';
      acStack_1c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
      pcVar12 = "";
      (**(code **)(*plVar10 + 0x18))(plVar10);
      puStack_1a8 = acStack_1c0;
      func_0x00010007e5dc(&puStack_1a8);
      pcVar6 = pcVar11;
      pcVar7 = pcVar5;
      if (cStack_189 < '\0') {
        __ZdlPv(auStack_1a0[0]);
        pcVar6 = pcVar11;
        pcVar7 = pcVar5;
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar5 = acStack_240;
    pcStack_1c8 = FUN_1056f0614;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar11 = pcVar12;
    pcVar3 = pcVar6;
    pppuStack_1d0 = &ppuStack_150;
    _objc_retain(pcVar12);
    if (pcVar1 != (char *)0x0) {
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_220,pcVar1);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
      pcVar11 = "";
      (**(code **)(*plVar10 + 0x18))(plVar10);
      puStack_228 = acStack_240;
      func_0x00010007e5dc(&puStack_228);
      pcVar3 = pcVar5;
      pcVar7 = pcVar6;
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
        pcVar3 = pcVar5;
        pcVar7 = pcVar6;
      }
    }
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      _objc_release(pcVar12);
      _objc_release(pcVar12);
      __Unwind_Resume();
      pcVar4 = acStack_2f0;
      pcStack_248 = FUN_1056f0788;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar12 = pcVar11;
      pcVar6 = pcVar3;
      pcVar5 = pcVar7;
      pcVar8 = param_5;
      pppuStack_250 = &pppuStack_1d0;
      _objc_retain(pcVar3);
      _objc_retain(pcVar7);
      if (pcVar1 != (char *)0x0) {
        plVar10 = *(long **)(pcVar1 + 8);
        pcVar1 = "true";
        if ((int)pcVar11 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(acStack_2d0,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520(pcVar3);
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_2b8,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          unaff_x24 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          unaff_x24 = pcVar7;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_2a0,unaff_x24);
        acStack_2f0[0] = '\0';
        acStack_2f0[1] = '\0';
        acStack_2f0[2] = '\0';
        acStack_2f0[3] = '\0';
        acStack_2f0[4] = '\0';
        acStack_2f0[5] = '\0';
        acStack_2f0[6] = '\0';
        acStack_2f0[7] = '\0';
        acStack_2f0[8] = '\0';
        acStack_2f0[9] = '\0';
        acStack_2f0[10] = '\0';
        acStack_2f0[0xb] = '\0';
        acStack_2f0[0xc] = '\0';
        acStack_2f0[0xd] = '\0';
        acStack_2f0[0xe] = '\0';
        acStack_2f0[0xf] = '\0';
        acStack_2f0[0x10] = '\0';
        acStack_2f0[0x11] = '\0';
        acStack_2f0[0x12] = '\0';
        acStack_2f0[0x13] = '\0';
        acStack_2f0[0x14] = '\0';
        acStack_2f0[0x15] = '\0';
        acStack_2f0[0x16] = '\0';
        acStack_2f0[0x17] = '\0';
        func_0x00010007e1e8(acStack_2f0,acStack_2d0,&lStack_288,3);
        pcVar12 = "";
        (**(code **)(*plVar10 + 0x18))(plVar10);
        puStack_2d8 = acStack_2f0;
        func_0x00010007e5dc(&puStack_2d8);
        lVar9 = 0;
        pcVar11 = acStack_2d0;
        pcVar6 = pcVar4;
        pcVar5 = param_5;
        do {
          if ((&cStack_289)[lVar9] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar9));
          }
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != -0x48);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_328 = acStack_2d0;
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != pcStack_328);
      _objc_release(pcVar7);
      _objc_release(pcVar3);
      pcVar2 = pcVar1;
      __Unwind_Resume();
      pcStack_2f8 = FUN_1056f09fc;
      lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar12;
      pcStack_330 = unaff_x24;
      pcStack_320 = pcVar11;
      pcStack_318 = pcVar1;
      pcStack_310 = pcVar7;
      pcStack_308 = pcVar3;
      pppuStack_300 = &pppuStack_250;
      _objc_retain(pcVar6);
      _objc_retain(pcVar5);
      if (pcVar2 != (char *)0x0) {
        plVar10 = *(long **)(pcVar2 + 8);
        pcVar1 = "true";
        if ((int)pcVar12 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(acStack_380,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_368,pcVar1);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar1 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_350,pcVar1);
        uStack_3a0 = 0;
        uStack_398 = 0;
        uStack_390 = 0;
        func_0x00010007e1e8(&uStack_3a0,acStack_380,&lStack_338,3);
        pcVar4 = "\x01";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108aae50,&uStack_3a0,pcVar8);
        puStack_388 = (undefined1 *)&uStack_3a0;
        func_0x00010007e5dc(&puStack_388);
        lVar9 = 0;
        pcVar12 = acStack_380;
        do {
          if ((&cStack_339)[lVar9] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar9));
          }
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != -0x48);
      }
      _objc_release(pcVar5);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        do {
          pcVar12 = pcVar12 + -0x18;
        } while (pcVar12 != acStack_380);
        _objc_release(pcVar5);
        _objc_release(pcVar6);
        __Unwind_Resume();
        puStack_3c8 = (undefined1 *)&uStack_3e0;
        pcStack_3a8 = FUN_1056f0c70;
        if (pcVar1 != (char *)0x0) {
          uStack_3e0 = 0;
          uStack_3d8 = 0;
          uStack_3d0 = 0;
          pcStack_3c0 = pcVar5;
          pcStack_3b8 = pcVar6;
          pppuStack_3b0 = &pppuStack_300;
          (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                    (*(long **)(pcVar1 + 8),&UNK_1108aaea0,&uStack_3e0,pcVar4);
          func_0x00010007e5dc(&puStack_3c8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056f02b4; end: 1056f049f;  */

/* WARNING: Removing unreachable block (ram,0x0001056f09cc) */
/* WARNING: Removing unreachable block (ram,0x0001056f0c40) */

void FUN_1056f02b4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  char *unaff_x24;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  char acStack_250 [24];
  undefined1 *puStack_238;
  char acStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = param_2;
  pcVar3 = param_3;
  pcVar2 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    pcVar11 = "true";
    if ((int)param_2 == 0) {
      pcVar11 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar11);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar11 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar11);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar11 = "";
    pcVar3 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    pcVar2 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = param_3;
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
  __Unwind_Resume();
  pcVar7 = acStack_120;
  pcStack_a8 = FUN_1056f04a0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar11;
  pcVar6 = pcVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar10 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar12 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar6 = pcVar7;
    pcVar2 = pcVar3;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar6 = pcVar7;
      pcVar2 = pcVar3;
    }
  }
  pcVar3 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  _objc_release(pcVar11);
  __Unwind_Resume();
  pcVar7 = acStack_1a0;
  pcStack_128 = FUN_1056f0614;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar12;
  pcVar1 = pcVar6;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_180,pcVar11);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar11 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar1 = pcVar7;
    pcVar2 = pcVar6;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar1 = pcVar7;
      pcVar2 = pcVar6;
    }
  }
  pcVar3 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  _objc_release(pcVar12);
  __Unwind_Resume();
  pcVar5 = acStack_250;
  pcStack_1a8 = FUN_1056f0788;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar11;
  pcVar6 = pcVar1;
  pcVar7 = pcVar2;
  pcVar8 = param_5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    pcVar3 = "true";
    if ((int)pcVar11 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(acStack_230,pcVar3);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar11 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_218,pcVar11);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      unaff_x24 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      unaff_x24 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_200,unaff_x24);
    acStack_250[0] = '\0';
    acStack_250[1] = '\0';
    acStack_250[2] = '\0';
    acStack_250[3] = '\0';
    acStack_250[4] = '\0';
    acStack_250[5] = '\0';
    acStack_250[6] = '\0';
    acStack_250[7] = '\0';
    acStack_250[8] = '\0';
    acStack_250[9] = '\0';
    acStack_250[10] = '\0';
    acStack_250[0xb] = '\0';
    acStack_250[0xc] = '\0';
    acStack_250[0xd] = '\0';
    acStack_250[0xe] = '\0';
    acStack_250[0xf] = '\0';
    acStack_250[0x10] = '\0';
    acStack_250[0x11] = '\0';
    acStack_250[0x12] = '\0';
    acStack_250[0x13] = '\0';
    acStack_250[0x14] = '\0';
    acStack_250[0x15] = '\0';
    acStack_250[0x16] = '\0';
    acStack_250[0x17] = '\0';
    func_0x00010007e1e8(acStack_250,acStack_230,&lStack_1e8,3);
    pcVar12 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_238 = acStack_250;
    func_0x00010007e5dc(&puStack_238);
    lVar9 = 0;
    pcVar11 = acStack_230;
    pcVar6 = pcVar5;
    pcVar7 = param_5;
    do {
      if ((&cStack_1e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x48);
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    pcStack_288 = acStack_230;
    do {
      pcVar11 = pcVar11 + -0x18;
    } while (pcVar11 != pcStack_288);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_258 = FUN_1056f09fc;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar12;
    pcStack_290 = unaff_x24;
    pcStack_280 = pcVar11;
    pcStack_278 = pcVar3;
    pcStack_270 = pcVar2;
    pcStack_268 = pcVar1;
    pppuStack_260 = &pppuStack_1b0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    if (pcVar4 != (char *)0x0) {
      plVar10 = *(long **)(pcVar4 + 8);
      pcVar11 = "true";
      if ((int)pcVar12 == 0) {
        pcVar11 = "false";
      }
      func_0x00010002b838(acStack_2e0,pcVar11);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar11 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar11 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_2c8,pcVar11);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar11 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar11 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_2b0,pcVar11);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,acStack_2e0,&lStack_298,3);
      pcVar5 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108aae50,&uStack_300,pcVar8);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar9 = 0;
      pcVar12 = acStack_2e0;
      do {
        if ((&cStack_299)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
    }
    _objc_release(pcVar7);
    pcVar11 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      do {
        pcVar12 = pcVar12 + -0x18;
      } while (pcVar12 != acStack_2e0);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      __Unwind_Resume();
      puStack_328 = (undefined1 *)&uStack_340;
      pcStack_308 = FUN_1056f0c70;
      if (pcVar11 != (char *)0x0) {
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0;
        pcStack_320 = pcVar7;
        pcStack_318 = pcVar6;
        pppuStack_310 = &pppuStack_260;
        (**(code **)(**(long **)(pcVar11 + 8) + 0x18))
                  (*(long **)(pcVar11 + 8),&UNK_1108aaea0,&uStack_340,pcVar5);
        func_0x00010007e5dc(&puStack_328);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056f04a0; end: 1056f0613;  */

/* WARNING: Removing unreachable block (ram,0x0001056f09cc) */
/* WARNING: Removing unreachable block (ram,0x0001056f0c40) */

void FUN_1056f04a0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  char *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  char acStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  char acStack_1b0 [24];
  undefined1 *puStack_198;
  char acStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar1 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = param_2;
  pcVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar11);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar11 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar2 = pcVar1;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar2 = pcVar1;
      param_4 = param_3;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1056f0614;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar11;
  pcVar5 = pcVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar8 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_e0,pcVar1);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar10 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar5 = pcVar6;
    param_4 = pcVar2;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar5 = pcVar6;
      param_4 = pcVar2;
    }
  }
  pcVar2 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  _objc_release(pcVar11);
  __Unwind_Resume();
  pcVar4 = acStack_1b0;
  pcStack_108 = FUN_1056f0788;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar10;
  pcVar1 = pcVar5;
  pcVar6 = param_4;
  pcVar7 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(param_4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    pcVar11 = "true";
    if ((int)pcVar10 == 0) {
      pcVar11 = "false";
    }
    func_0x00010002b838(acStack_190,pcVar11);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar11 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_178,pcVar11);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x24 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x24 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_160,unaff_x24);
    acStack_1b0[0] = '\0';
    acStack_1b0[1] = '\0';
    acStack_1b0[2] = '\0';
    acStack_1b0[3] = '\0';
    acStack_1b0[4] = '\0';
    acStack_1b0[5] = '\0';
    acStack_1b0[6] = '\0';
    acStack_1b0[7] = '\0';
    acStack_1b0[8] = '\0';
    acStack_1b0[9] = '\0';
    acStack_1b0[10] = '\0';
    acStack_1b0[0xb] = '\0';
    acStack_1b0[0xc] = '\0';
    acStack_1b0[0xd] = '\0';
    acStack_1b0[0xe] = '\0';
    acStack_1b0[0xf] = '\0';
    acStack_1b0[0x10] = '\0';
    acStack_1b0[0x11] = '\0';
    acStack_1b0[0x12] = '\0';
    acStack_1b0[0x13] = '\0';
    acStack_1b0[0x14] = '\0';
    acStack_1b0[0x15] = '\0';
    acStack_1b0[0x16] = '\0';
    acStack_1b0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b0,acStack_190,&lStack_148,3);
    pcVar11 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_198 = acStack_1b0;
    func_0x00010007e5dc(&puStack_198);
    lVar9 = 0;
    pcVar10 = acStack_190;
    pcVar1 = pcVar4;
    pcVar6 = param_5;
    do {
      if ((&cStack_149)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcStack_1e8 = acStack_190;
  do {
    pcVar10 = pcVar10 + -0x18;
  } while (pcVar10 != pcStack_1e8);
  _objc_release(param_4);
  _objc_release(pcVar5);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_1b8 = FUN_1056f09fc;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar11;
  pcStack_1f0 = unaff_x24;
  pcStack_1e0 = pcVar10;
  pcStack_1d8 = pcVar2;
  pcStack_1d0 = param_4;
  pcStack_1c8 = pcVar5;
  pppuStack_1c0 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if ((int)pcVar11 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(acStack_240,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar11 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_228,pcVar11);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar11 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar11 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_210,pcVar11);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,acStack_240,&lStack_1f8,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108aae50,&uStack_260,pcVar7);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    lVar9 = 0;
    pcVar11 = acStack_240;
    do {
      if ((&cStack_1f9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      pcVar11 = pcVar11 + -0x18;
    } while (pcVar11 != acStack_240);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    puStack_288 = (undefined1 *)&uStack_2a0;
    pcStack_268 = FUN_1056f0c70;
    if (pcVar2 != (char *)0x0) {
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      pcStack_280 = pcVar6;
      pcStack_278 = pcVar1;
      pppuStack_270 = &pppuStack_1c0;
      (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                (*(long **)(pcVar2 + 8),&UNK_1108aaea0,&uStack_2a0,pcVar4);
      func_0x00010007e5dc(&puStack_288);
    }
    return;
  }
  return;
}



/* Entry: 1056f0614; end: 1056f0787;  */

/* WARNING: Removing unreachable block (ram,0x0001056f09cc) */
/* WARNING: Removing unreachable block (ram,0x0001056f0c40) */

void FUN_1056f0614(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  char *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  char acStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  char acStack_130 [24];
  undefined1 *puStack_118;
  char acStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar1 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar10);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar10 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar1;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar1;
      param_4 = param_3;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar3 = acStack_130;
  pcStack_88 = FUN_1056f0788;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar10;
  pcVar5 = pcVar4;
  pcVar6 = param_4;
  pcVar7 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar4);
  _objc_retain(param_4);
  if (pcVar1 != (char *)0x0) {
    plVar8 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if ((int)pcVar10 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(acStack_110,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar10 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar10 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_f8,pcVar10);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x24 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x24 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_e0,unaff_x24);
    acStack_130[0] = '\0';
    acStack_130[1] = '\0';
    acStack_130[2] = '\0';
    acStack_130[3] = '\0';
    acStack_130[4] = '\0';
    acStack_130[5] = '\0';
    acStack_130[6] = '\0';
    acStack_130[7] = '\0';
    acStack_130[8] = '\0';
    acStack_130[9] = '\0';
    acStack_130[10] = '\0';
    acStack_130[0xb] = '\0';
    acStack_130[0xc] = '\0';
    acStack_130[0xd] = '\0';
    acStack_130[0xe] = '\0';
    acStack_130[0xf] = '\0';
    acStack_130[0x10] = '\0';
    acStack_130[0x11] = '\0';
    acStack_130[0x12] = '\0';
    acStack_130[0x13] = '\0';
    acStack_130[0x14] = '\0';
    acStack_130[0x15] = '\0';
    acStack_130[0x16] = '\0';
    acStack_130[0x17] = '\0';
    func_0x00010007e1e8(acStack_130,acStack_110,&lStack_c8,3);
    pcVar11 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_118 = acStack_130;
    func_0x00010007e5dc(&puStack_118);
    lVar9 = 0;
    pcVar10 = acStack_110;
    pcVar5 = pcVar3;
    pcVar6 = param_5;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    pcStack_168 = acStack_110;
    do {
      pcVar10 = pcVar10 + -0x18;
    } while (pcVar10 != pcStack_168);
    _objc_release(param_4);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcStack_138 = FUN_1056f09fc;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar11;
    pcStack_170 = unaff_x24;
    pcStack_160 = pcVar10;
    pcStack_158 = pcVar1;
    pcStack_150 = param_4;
    pcStack_148 = pcVar4;
    ppuStack_140 = &puStack_90;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    if (pcVar2 != (char *)0x0) {
      plVar8 = *(long **)(pcVar2 + 8);
      pcVar10 = "true";
      if ((int)pcVar11 == 0) {
        pcVar10 = "false";
      }
      func_0x00010002b838(acStack_1c0,pcVar10);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar10 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar10 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_1a8,pcVar10);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar10 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar10 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_190,pcVar10);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00010007e1e8(&uStack_1e0,acStack_1c0,&lStack_178,3);
      pcVar3 = "\x01";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108aae50,&uStack_1e0,pcVar7);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      lVar9 = 0;
      pcVar11 = acStack_1c0;
      do {
        if ((&cStack_179)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
    }
    _objc_release(pcVar6);
    pcVar10 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != acStack_1c0);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      __Unwind_Resume();
      puStack_208 = (undefined1 *)&uStack_220;
      pcStack_1e8 = FUN_1056f0c70;
      if (pcVar10 != (char *)0x0) {
        uStack_220 = 0;
        uStack_218 = 0;
        uStack_210 = 0;
        pcStack_200 = pcVar6;
        pcStack_1f8 = pcVar5;
        pppuStack_1f0 = &ppuStack_140;
        (**(code **)(**(long **)(pcVar10 + 8) + 0x18))
                  (*(long **)(pcVar10 + 8),&UNK_1108aaea0,&uStack_220,pcVar3);
        func_0x00010007e5dc(&puStack_208);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1056f0788; end: 1056f09fb;  */

/* WARNING: Removing unreachable block (ram,0x0001056f09cc) */
/* WARNING: Removing unreachable block (ram,0x0001056f0c40) */

void FUN_1056f0788(long param_1,undefined *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  char *unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_b0 [24];
  undefined1 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  pcVar1 = param_3;
  pcVar6 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_90,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x24 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x24 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,unaff_x24);
    acStack_b0[0] = '\0';
    acStack_b0[1] = '\0';
    acStack_b0[2] = '\0';
    acStack_b0[3] = '\0';
    acStack_b0[4] = '\0';
    acStack_b0[5] = '\0';
    acStack_b0[6] = '\0';
    acStack_b0[7] = '\0';
    acStack_b0[8] = '\0';
    acStack_b0[9] = '\0';
    acStack_b0[10] = '\0';
    acStack_b0[0xb] = '\0';
    acStack_b0[0xc] = '\0';
    acStack_b0[0xd] = '\0';
    acStack_b0[0xe] = '\0';
    acStack_b0[0xf] = '\0';
    acStack_b0[0x10] = '\0';
    acStack_b0[0x11] = '\0';
    acStack_b0[0x12] = '\0';
    acStack_b0[0x13] = '\0';
    acStack_b0[0x14] = '\0';
    acStack_b0[0x15] = '\0';
    acStack_b0[0x16] = '\0';
    acStack_b0[0x17] = '\0';
    func_0x00010007e1e8(acStack_b0,auStack_90,&lStack_48,3);
    puVar8 = &UNK_1108aae00;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_98 = acStack_b0;
    func_0x00010007e5dc(&puStack_98);
    lVar7 = 0;
    param_2 = auStack_90;
    pcVar1 = pcVar2;
    pcVar6 = param_5;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_e8 = auStack_90;
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != puStack_e8);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_b8 = FUN_1056f09fc;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  pcStack_f0 = unaff_x24;
  puStack_e0 = param_2;
  pcStack_d8 = pcVar2;
  pcStack_d0 = param_4;
  pcStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if ((int)puVar8 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_110,pcVar2);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar5 = &UNK_1108aae50;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108aae50,&uStack_160,pcVar4);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar7 = 0;
    puVar8 = auStack_140;
    do {
      if ((&cStack_f9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      puVar8 = puVar8 + -0x18;
    } while (puVar8 != auStack_140);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    puStack_188 = (undefined1 *)&uStack_1a0;
    pcStack_168 = FUN_1056f0c70;
    if (pcVar4 != (char *)0x0) {
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      pcStack_180 = pcVar6;
      pcStack_178 = pcVar1;
      ppuStack_170 = &puStack_c0;
      (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                (*(long **)(pcVar4 + 8),&UNK_1108aaea0,&uStack_1a0,puVar5);
      func_0x00010007e5dc(&puStack_188);
    }
    return;
  }
  return;
}



/* Entry: 1056f09fc; end: 1056f0c6f;  */

/* WARNING: Removing unreachable block (ram,0x0001056f0c40) */

void FUN_1056f09fc(long param_1,undefined *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_90,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x00010007e1e8(&uStack_b0,auStack_90,&lStack_48,3);
    puVar2 = &UNK_1108aae50;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aae50,&uStack_b0,param_5);
    puStack_98 = (undefined1 *)&uStack_b0;
    func_0x00010007e5dc(&puStack_98);
    lVar3 = 0;
    param_2 = auStack_90;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_2 = param_2 + -0x18;
    } while (param_2 != auStack_90);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    puStack_d8 = (undefined1 *)&uStack_f0;
    pcStack_b8 = FUN_1056f0c70;
    if (pcVar1 != (char *)0x0) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      pcStack_d0 = param_4;
      pcStack_c8 = param_3;
      puStack_c0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                (*(long **)(pcVar1 + 8),&UNK_1108aaea0,&uStack_f0,puVar2);
      func_0x00010007e5dc(&puStack_d8);
    }
    return;
  }
  return;
}



/* Entry: 1056f0c70; end: 1056f0ce7;  */

void FUN_1056f0c70(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108aaea0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056f0ce8; end: 1056f0d5f;  */

void FUN_1056f0ce8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108aaef0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056f0d60; end: 1056f0ed3;  */

void FUN_1056f0d60(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108aaf40,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_88 = FUN_1056f0ed4;
  if (pcVar3 != (char *)0x0) {
    plVar4 = *(long **)(pcVar3 + 8);
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar4 + 0x28))(plVar4,&UNK_1108aaf90);
    if ((int)plVar4 != 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                (*(long **)(pcVar3 + 8),&UNK_1108aaf90,&uStack_c0,(long)pcVar1 * 10);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x00010007e5dc(&puStack_a8);
    }
  }
  return;
}



/* Entry: 1056f0ed4; end: 1056f0f6f;  */

void FUN_1056f0ed4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108aaf90);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_1108aaf90,&uStack_40,param_2 * 10);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 1056f0f70; end: 1056f10e3;  */

char * FUN_1056f0f70(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  char *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  puVar9 = puVar7;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar6 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar9 = (undefined1 *)puVar8;
    param_4 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = (undefined1 *)puVar8;
      param_4 = puVar7;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar9;
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108ab080);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined1 *)puVar8;
    param_4 = puVar9;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined1 *)puVar8;
      param_4 = puVar9;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  ppcVar3 = &pcStack_1d0;
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_1c8 = PTR_PTR_1126e9ca0;
  pcStack_1d0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_1d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar7;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined1 **)((long)ppcVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined8 *)((long)ppcVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x28);
    *(undefined8 *)((long)ppcVar3 + 0x28) = param_7;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x30);
    *(undefined **)((long)ppcVar3 + 0x30) = puVar5;
    _objc_release(uVar4);
  }
  func_0x00010c24f7e0(ppcVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  return (char *)ppcVar3;
}



/* Entry: 1056f10e4; end: 1056f1257;  */

char * FUN_1056f10e4(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  char *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar6;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108ab080);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    param_4 = puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
      param_4 = puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar3 = &pcStack_150;
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_148 = PTR_PTR_1126e9ca0;
  pcStack_150 = pcVar2;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar8);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar8;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined1 **)((long)ppcVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined8 *)((long)ppcVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x28);
    *(undefined8 *)((long)ppcVar3 + 0x28) = param_7;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x30);
    *(undefined **)((long)ppcVar3 + 0x30) = puVar5;
    _objc_release(uVar4);
  }
  func_0x00010c24f7e0(ppcVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  return (char *)ppcVar3;
}



/* Entry: 1056f1258; end: 1056f13cb;  */

char * FUN_1056f1258(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108ab080);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_c8 = PTR_PTR_1126e9ca0;
  pcStack_d0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    _objc_retain(puVar5);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 8);
    *(undefined1 **)((long)ppcVar2 + 8) = puVar5;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x10);
    *(undefined1 **)((long)ppcVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x20);
    *(undefined8 *)((long)ppcVar2 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x18);
    *(undefined8 *)((long)ppcVar2 + 0x18) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x28);
    *(undefined8 *)((long)ppcVar2 + 0x28) = param_7;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x30);
    *(undefined **)((long)ppcVar2 + 0x30) = puVar4;
    _objc_release(uVar3);
  }
  func_0x00010c24f7e0(ppcVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (char *)ppcVar2;
}



/* Entry: 1056f13cc; end: 1056f1513; -[SCSponsoredLensMetadataLogger initWithBizzardLogger:scheduleNetworkUpdateProvider:sponsoredLensScheduleService:lensFetchTypeProvider:performer:] */

undefined1 *
FUN_1056f13cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9ca0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  func_0x00010c24f7e0(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056f1514; end: 1056f1517; -[SCSponsoredLensMetadataLogger startObserving] */

void FUN_1056f1514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be666f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeNetworkNamespaceData_112577358);
  return;
}



/* Entry: 1056f1518; end: 1056f165f; -[SCSponsoredLensMetadataLogger _observeNetworkNamespaceData] */

void FUN_1056f1518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c150040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1056f1660; end: 1056f16af;  */

void FUN_1056f1660(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be32ac0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056f16b0; end: 1056f19f7; -[SCSponsoredLensMetadataLogger _handleUpdatedNamespaceData:] */

void FUN_1056f16b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c150020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar1;
  func_0x00010c14ffc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4b900(uVar4,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if ((int)uVar5 != 0) {
    uVar3 = uVar1;
    func_0x00010bef0bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27d100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c089660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf38ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0cf080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf3d3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58e60(param_1,param_2,uVar3,uVar2,0,uVar5,uVar6,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c105c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27d100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c089660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf38ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0cf080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf3d3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58e60(param_1,param_2,uVar3,uVar2,1,uVar5,uVar6,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0da7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c089660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c14ffc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0cf080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf3d3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be56580(param_1,param_2,uVar3,uVar2,uVar6,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f19f8; end: 1056f19ff;  */

void FUN_1056f19f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_namespaceId_112612f10);
  return;
}



/* Entry: 1056f1a00; end: 1056f1e37; -[SCSponsoredLensMetadataLogger _logSponsoredLensMetadataEvents:cacheTtl:isPrecached:mixerRequestId:checksumLensIds:clientRequestId:] */

void FUN_1056f1a00(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  puVar9 = param_4;
  uVar10 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5e960();
    func_0x00010bf1cea0();
    _objc_release(uVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar14 = &uStack_130;
    puVar9 = auStack_f0;
    param_5 = 0x10;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar13 = *plStack_120;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          uVar12 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
          uVar3 = uVar12;
          func_0x00010c07f200();
          if ((int)uVar3 != 0) {
            uVar3 = uVar12;
            func_0x00010c094540(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(uVar3);
            puVar4 = PTR_PTR_1126bd4a0;
            _objc_opt_new();
            uVar3 = uVar12;
            func_0x00010c094540(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9940(puVar4);
            _objc_release(uVar3);
            func_0x00010c0b4ca0(param_4);
            func_0x00010c17cac0(puVar4);
            uVar3 = uVar12;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010bef2c20();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010b70473c();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163720(puVar4);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar3);
            uVar3 = uVar12;
            func_0x00010c2813a0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010bef4d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1644c0(puVar4);
            _objc_release(uVar5);
            _objc_release(uVar3);
            func_0x00010c1b3720(puVar4);
            puVar8 = PTR_PTR_1126bd498;
            func_0x00010c24ab20(uVar12);
            func_0x00010c24ab60(puVar8);
            func_0x00010c208420(puVar4);
            func_0x00010c1c87c0(puVar4);
            uVar3 = uVar12;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010bef4d20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c164480(puVar4);
            _objc_release(uVar5);
            _objc_release(uVar3);
            uVar3 = uVar12;
            func_0x00010c0d53e0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bc3e0(puVar4);
            _objc_release(uVar3);
            func_0x00010c1aff40(puVar4);
            func_0x00010c1bba60(puVar4);
            func_0x00010c17d040(puVar4);
            func_0x00010beec6c0(uVar12);
            func_0x00010c179900(puVar4);
            func_0x00010c1eaf80(puVar4);
            uVar3 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b2e60();
            _objc_release(uVar3);
            _objc_release(puVar4);
          }
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar2 != puVar14);
        puVar14 = &uStack_130;
        puVar9 = auStack_f0;
        param_5 = 0x10;
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  _objc_retain(uVar10);
  puVar2 = puVar14;
  func_0x00010bf529e0();
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(puVar14);
    puVar2 = puVar14;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar14);
        }
        uVar3 = *(undefined8 *)((long)puVar11 * 8);
        puVar8 = PTR_PTR_1126bd4a0;
        _objc_opt_new(PTR_PTR_1126bd4a0);
        func_0x00010c1bc3e0();
        func_0x00010bf32840(uVar3);
        func_0x00010c179900(puVar8);
        func_0x00010c15ed20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c164480(puVar8);
        _objc_release(uVar3);
        func_0x00010c1c87c0(puVar8);
        func_0x00010c17d040(puVar8);
        func_0x00010c1b2de0(puVar8);
        uVar3 = param_3[1];
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar3);
        _objc_release(puVar8);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar2 != puVar11);
      puVar2 = puVar14;
      func_0x00010bf52a60();
    }
    _objc_release(puVar14);
  }
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar14 + 6,0);
  _objc_storeStrong(puVar14 + 5,0);
  _objc_storeStrong(puVar14 + 4,0);
  _objc_storeStrong(puVar14 + 3,0);
  _objc_storeStrong(puVar14 + 2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar14 + 1,0);
  return;
}



/* Entry: 1056f1e38; end: 1056f2033; -[SCSponsoredLensMetadataLogger _logNoFillLensMetadataEvents:mixerRequestId:namespaceId:clientRequestId:] */

void FUN_1056f1e38(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lVar5 * 8);
        puVar3 = PTR_PTR_1126bd4a0;
        _objc_opt_new(PTR_PTR_1126bd4a0);
        func_0x00010c1bc3e0();
        func_0x00010bf32840(uVar6);
        func_0x00010c179900(puVar3);
        func_0x00010c15ed20(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c164480(puVar3);
        _objc_release(uVar6);
        func_0x00010c1c87c0(puVar3);
        func_0x00010c17d040(puVar3);
        func_0x00010c1b2de0(puVar3);
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar6);
        _objc_release(puVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1056f2034; end: 1056f2093; -[SCSponsoredLensMetadataLogger .cxx_destruct] */

void FUN_1056f2034(long param_1)

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



/* Entry: 1056f2094; end: 1056f20db; -[SCSponsoredLensMetadataLoggerEntryPoint begin] */

void FUN_1056f2094(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e9ca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_begin_1125a3840);
  func_0x00010bea9a60(param_1);
  return;
}



/* Entry: 1056f20dc; end: 1056f22ff; -[SCSponsoredLensMetadataLoggerEntryPoint _setUpSponsoredLensMetadataLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f20dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272803c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar8;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar8);
  lVar8 = lVar1;
  func_0x00010c0f9920(lVar1,param_2,&PTR____CFConstantStringClassReference_110df8378,3,0,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd4a8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112728030;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010c293fc0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112728034;
    _objc_loadWeakRetained(lVar11);
  }
  lVar4 = lVar11;
  func_0x00010c150060(lVar11);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112728040;
    _objc_loadWeakRetained(lVar12);
  }
  lVar5 = lVar12;
  func_0x00010c24a560(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112728038;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010c093f60(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8460(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar8);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112728024);
  *(undefined **)(param_1 + _DAT_112728024) = puVar2;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056f2300; end: 1056f2383; -[SCSponsoredLensMetadataLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f2300(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728040);
  _objc_destroyWeak(param_1 + _DAT_11272803c);
  _objc_destroyWeak(param_1 + _DAT_112728038);
  _objc_destroyWeak(param_1 + _DAT_112728034);
  _objc_destroyWeak(param_1 + _DAT_112728030);
  _objc_destroyWeak(param_1 + _DAT_11272802c);
  _objc_destroyWeak(param_1 + _DAT_112728028);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112728024,0);
  return;
}



/* Entry: 1056f2384; end: 1056f24bb; -[SCSponsoredLensAnalyticsAggregator initWithLensCarouselManager:sponsoredLensLogger:lensCarouselSessionLogger:performer:] */

undefined1 *
FUN_1056f2384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9cb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056f24bc; end: 1056f2513; -[SCSponsoredLensAnalyticsAggregator dealloc] */

void FUN_1056f24bc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010be55420(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
  }
  puStack_28 = PTR_PTR_1126e9cb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1056f2514; end: 1056f2547; -[SCSponsoredLensAnalyticsAggregator startObserving] */

void FUN_1056f2514(undefined8 param_1)

{
  func_0x00010be65da0();
  func_0x00010be65d60(param_1);
  func_0x00010be664e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be66510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeLensSessionId_1125772e0);
  return;
}



/* Entry: 1056f2548; end: 1056f268f; -[SCSponsoredLensAnalyticsAggregator _observeCarouselOrder] */

void FUN_1056f2548(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c095ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1056f2690; end: 1056f26ef;  */

void FUN_1056f2690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_2;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056f26f0; end: 1056f27fb; -[SCSponsoredLensAnalyticsAggregator _observeCarouselDismiss] */

void FUN_1056f26f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1056f27fc; end: 1056f2893;  */

void FUN_1056f27fc(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (uVar1 & 1) == 0)) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1056f2894; end: 1056f289f;  */

void FUN_1056f2894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__logLenses__112572ea8,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  return;
}



/* Entry: 1056f28a0; end: 1056f2907; -[SCSponsoredLensAnalyticsAggregator _logLenses:] */

void FUN_1056f28a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0a9840(uVar3,param_2,param_3,uVar2,uVar1);
  func_0x00010c0b0380(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f2908; end: 1056f2a4f; -[SCSponsoredLensAnalyticsAggregator _observeLensSelection] */

void FUN_1056f2908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c159b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1056f2a50; end: 1056f2abf;  */

void FUN_1056f2a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be6b8e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f2ac0; end: 1056f2c07; -[SCSponsoredLensAnalyticsAggregator _observeLensSessionId] */

void FUN_1056f2ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1056f2c08; end: 1056f2c4f;  */

void FUN_1056f2c08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f2c50; end: 1056f2cc7; -[SCSponsoredLensAnalyticsAggregator _onLensSessionChanged:] */

void FUN_1056f2c50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f2cc8; end: 1056f2d3b; -[SCSponsoredLensAnalyticsAggregator _onSponsoredLensSelected:] */

void FUN_1056f2cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_3;
  func_0x00010c07f200();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f2d3c; end: 1056f2db3; -[SCSponsoredLensAnalyticsAggregator .cxx_destruct] */

void FUN_1056f2d3c(long param_1)

{
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



/* Entry: 1056f2db4; end: 1056f2f17; -[SCSponsoredLensLogger initWithBlizzard:lensDownloadStatusProvider:countryCodeProvider:grapheneRegistry:sponsoredLensScheduleService:adConfigProvider:cameraType:placement:] */

undefined1 *
FUN_1056f2db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_1126e9cb8;
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056f2f18; end: 1056f326b; -[SCSponsoredLensLogger logLenses:lensSessionId:selectionCounts:] */

void FUN_1056f2f18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar11 = param_3;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07f200();
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 != 0) {
          puVar3 = PTR_PTR_1126bd4b0;
          _objc_opt_new(PTR_PTR_1126bd4b0);
          uVar2 = uVar1;
          func_0x00010c094540(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9940(puVar3,param_2,uVar2);
          _objc_release(uVar2);
          func_0x00010c1bcc00(puVar3,param_2,param_4);
          func_0x00010c177420(puVar3,param_2,*(undefined8 *)(param_1 + 0x38));
          uVar2 = uVar1;
          func_0x00010c2813a0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bef2c20();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010b70473c();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163720(puVar3,param_2,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar2);
          uVar2 = uVar1;
          func_0x00010c2813a0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bef4d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1644c0(puVar3,param_2,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar2);
          puVar7 = PTR_PTR_1126bd498;
          uVar2 = uVar1;
          func_0x00010c24ab20(uVar1);
          func_0x00010c24ab60(puVar7,param_2,uVar2);
          func_0x00010c208420(puVar3,param_2,puVar7);
          uVar2 = uVar1;
          func_0x00010c094540(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_5;
          func_0x00010bf52b00(param_5,param_2,uVar2);
          func_0x00010c1fb840(puVar3,param_2,uVar10);
          _objc_release(uVar2);
          func_0x00010c162f20(puVar3,param_2,uVar11);
          uVar2 = uVar1;
          func_0x00010beec6c0(uVar1);
          func_0x00010c1adda0(puVar3,param_2,uVar2 + 1);
          lVar8 = param_1;
          func_0x00010be4e880(param_1,param_2,uVar1);
          func_0x00010c1be880(puVar3,param_2,lVar8);
          uVar2 = uVar1;
          func_0x00010c0d53e0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bc3e0(puVar3,param_2,uVar2);
          lVar8 = param_1;
          func_0x00010be9b2a0(param_1,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c089660();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c87c0(puVar3,param_2,lVar9);
          _objc_release(lVar9);
          _objc_release(lVar8);
          uVar4 = uVar1;
          func_0x00010c2813a0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bef4d20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c164480(puVar3,param_2,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar4);
          uVar10 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b2e60();
          _objc_release(uVar10);
          _objc_release(uVar2);
          _objc_release(puVar3);
        }
      }
      _objc_release(uVar1);
      uVar11 = uVar11 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar11 < uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f326c; end: 1056f35a7; -[SCSponsoredLensLogger logSponsoredLensCarouselInfo:] */

void FUN_1056f326c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c090ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900(uVar2,param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar15 = 1;
    while( true ) {
      uVar5 = param_3;
      func_0x00010bf529e0();
      lVar6 = *(long *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c090aa0();
      _objc_release(lVar6);
      if (lVar7 + 1U <= uVar5) {
        uVar5 = lVar7 + 1;
      }
      if (uVar5 <= uVar15) break;
      uVar5 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010be9b2a0(param_1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c0da7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar6;
      func_0x00010c0ba200(lVar6,param_2,&PTR___NSConcreteGlobalBlock_1108ab5c0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010be4b640();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar9;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar8;
        func_0x00010c2ac460(lVar8,param_2,&PTR____CFConstantStringClassReference_110dae898,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(uVar2);
        _objc_release(uVar9);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar10;
        func_0x00010c2ac460(lVar10,param_2,&PTR____CFConstantStringClassReference_110daf598,puVar12)
        ;
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c07f200(uVar5);
        lVar10 = param_1;
        func_0x00010be4bfe0(param_1,param_2,puVar11,lVar7,uVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar8;
        func_0x00010c2ac460(lVar8,param_2,&PTR____CFConstantStringClassReference_110df8398,lVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar10);
        _objc_release(puVar11);
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar9;
        func_0x00010bef2aa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar2);
        _objc_release(uVar9);
        _objc_release(lVar14);
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uVar5);
      uVar15 = uVar15 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056f35a8; end: 1056f35d7;  */

void FUN_1056f35a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf32840(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 1056f35d8; end: 1056f362f; -[SCSponsoredLensLogger _lensMetricForPlacementType] */

void FUN_1056f35d8(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 2) {
    func_0x00010c090ac0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x40) == 1) {
    func_0x00010c090a80(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f3630; end: 1056f367b; -[SCSponsoredLensLogger _lensTypeForIndex:noFillsIndices:isSponsored:] */

undefined ** FUN_1056f3630(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int in_w3;
  int in_w4;
  
  func_0x00010bf4b900();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df83d8;
  if (in_w4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df83f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df83b8;
  if (in_w3 == 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1056f367c; end: 1056f36f7; -[SCSponsoredLensLogger _loadStatusForLens:] */

undefined8 FUN_1056f367c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf89040();
  _objc_release(param_3);
  _objc_release(uVar3);
  if (uVar1 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10ddbc298 + uVar1 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 1056f36f8; end: 1056f37c7; -[SCSponsoredLensLogger _scheduleNamespaceDataForLens:] */

void FUN_1056f36f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c073c60();
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      lVar3 = 0;
      goto LAB_1056f37ac;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf273c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0d53e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_1056f37ac:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1056f37c8; end: 1056f3827; -[SCSponsoredLensLogger .cxx_destruct] */

void FUN_1056f37c8(long param_1)

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



/* Entry: 1056f3828; end: 1056f3a07; -[SCSponsoredLensLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f3828(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e9cc0;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_begin_1125a3840);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127280b8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar1 = lVar9;
  func_0x00010c0f98e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar1 = lVar2;
  func_0x00010c0f9920(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd4b8;
  _objc_alloc();
  lVar9 = param_1 + _DAT_112728088;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bdf3ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127280a4;
    _objc_loadWeakRetained(lVar11);
  }
  lVar7 = lVar11;
  func_0x00010c091140(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0230e0();
  lVar10 = (long)_DAT_11272808c;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar3;
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  func_0x00010c24f7e0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 1056f3a08; end: 1056f3c47; -[SCSponsoredLensLoggerEntryPoint _createSponsoredLensLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f3a08(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bd4c0;
  _objc_alloc(PTR_PTR_1126bd4c0);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127280a0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127280a8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010c092880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127280ac;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127280b0;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127280b4;
    _objc_loadWeakRetained(lVar15);
  }
  lVar6 = lVar15;
  func_0x00010c24a560(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272809c;
    _objc_loadWeakRetained(lVar14);
  }
  lVar8 = lVar14;
  func_0x00010bef2520(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf2b540();
  func_0x00010c095c40();
  func_0x00010bff84e0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7,lVar8,lVar9,param_1);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056f3c48; end: 1056f3c9f; -[SCSponsoredLensLoggerEntryPoint lensPlacement] */

undefined8 FUN_1056f3c48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_1056f3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c150aa0();
  _objc_release(param_1);
  if (lVar1 - 1U < 9) {
    uVar2 = *(undefined8 *)(&UNK_10ddbc2b8 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1056f3ca0; end: 1056f3cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f3ca0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112728094);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f3cc4; end: 1056f3d17; -[SCSponsoredLensLoggerEntryPoint cameraType] */

undefined8 FUN_1056f3cc4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_1056f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150aa0();
  _objc_release(param_1);
  if (uVar1 < 0xe) {
    uVar2 = *(undefined8 *)(&UNK_10ddbc300 + uVar1 * 8);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1056f3d18; end: 1056f3dd7; -[SCSponsoredLensLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f3d18(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728088);
  _objc_destroyWeak(param_1 + _DAT_1127280b8);
  _objc_destroyWeak(param_1 + _DAT_1127280b4);
  _objc_destroyWeak(param_1 + _DAT_1127280b0);
  _objc_destroyWeak(param_1 + _DAT_1127280ac);
  _objc_destroyWeak(param_1 + _DAT_1127280a8);
  _objc_destroyWeak(param_1 + _DAT_1127280a4);
  _objc_destroyWeak(param_1 + _DAT_1127280a0);
  _objc_destroyWeak(param_1 + _DAT_11272809c);
  _objc_destroyWeak(param_1 + _DAT_112728098);
  _objc_destroyWeak(param_1 + _DAT_112728094);
  _objc_destroyWeak(param_1 + _DAT_112728090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272808c,0);
  return;
}



/* Entry: 1056f3dd8; end: 1056f400f; -[SCSponsoredLensEncryptedUserDataUpdaterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f3dd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e9cc8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_begin_1125a3840);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127280d4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f480();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_initWeak(auStack_68,param_1);
  FUN_1056f4010(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126b8dd8;
  func_0x00010c24a440(PTR_PTR_1126b8dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef22a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = (undefined1)lVar3;
  func_0x00010c2a1620(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1056f4010; end: 1056f4033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f4010(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127280d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056f4034; end: 1056f4067;  */

void FUN_1056f4034(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c251620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056f4068; end: 1056f41f7; -[SCSponsoredLensEncryptedUserDataUpdaterEntryPoint startUpdatingUsingSwift:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f4068(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar2 = param_1;
  FUN_1056f4010();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c0f9920(lVar3,param_2,&PTR____CFConstantStringClassReference_110df8438,2,0,0x10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127280c8;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010c150160(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127280cc;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010c1067a0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = 0;
  if (param_3 == 0) {
    lVar8 = 4;
  }
  ppuVar1 = &PTR_PTR_1126bd4c8;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1126bd4d0;
  }
  puVar6 = *ppuVar1;
  _objc_alloc();
  func_0x00010c025780();
  lVar8 = (long)*(int *)(&DAT_1127280bc + lVar8);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar6;
  _objc_release(uVar7);
  func_0x00010c24f7e0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1056f41f8; end: 1056f4273; -[SCSponsoredLensEncryptedUserDataUpdaterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056f41f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127280d4);
  _objc_destroyWeak(param_1 + _DAT_1127280d0);
  _objc_destroyWeak(param_1 + _DAT_1127280cc);
  _objc_destroyWeak(param_1 + _DAT_1127280c8);
  _objc_destroyWeak(param_1 + _DAT_1127280c4);
  _objc_storeStrong(param_1 + _DAT_1127280bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127280c0,0);
  return;
}



/* Entry: 1056f4274; end: 1056f435b; -[SCSponsoredLensEncryptedUserDataUpdater initWithLensScheduleServiceProvider:userPreferences:performer:] */

undefined1 *
FUN_1056f4274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9cd0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056f435c; end: 1056f4597; -[SCSponsoredLensEncryptedUserDataUpdater startObserving] */

void FUN_1056f435c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee7780(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15f740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0cae20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1056f4598;
  puStack_88 = &UNK_1108ab5e0;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar6 = uVar5;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1056f4598; end: 1056f461b;  */

void FUN_1056f4598(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_2);
  ppuVar2 = (undefined **)(param_1 + 0x20);
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010be0b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1056f461c; end: 1056f463b;  */

bool FUN_1056f461c(undefined8 param_1,long param_2)

{
  func_0x00010c08fa60(param_2);
  return param_2 != 0;
}


