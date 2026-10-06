/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106884320; end: 10688439b; -[SCDeepLinkProcessingDelegateImpl logFinalOutcomeOnDestinationPageWithError:] */

void FUN_106884320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  func_0x00010be647c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10688439c; end: 106884423; -[SCDeepLinkProcessingDelegateImpl _notifyDestinationOutcomeWithError:] */

void FUN_10688439c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x22) = 1;
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf78de0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106884424; end: 10688448b; -[SCDeepLinkProcessingDelegateImpl endDeepLinkProcessingScopeWithError:] */

void FUN_106884424(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6300;
  if (param_3 == 0) {
    func_0x00010bfd31e0(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9ff00();
    _objc_retainAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf946e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10688448c; end: 1068844f7; -[SCDeepLinkProcessingDelegateImpl endDeepLinkProcessingScope] */

void FUN_10688448c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6300;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010bfd31e0(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9ff00();
    _objc_retainAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf946e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068844f8; end: 10688452f; -[SCDeepLinkProcessingDelegateImpl deeplinkHandlingId] */

long FUN_1068844f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf68600();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106884530; end: 106884563; -[SCDeepLinkProcessingDelegateImpl .cxx_destruct] */

void FUN_106884530(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106884564; end: 1068845d7; -[SCLegacyDeepLinkProcessorServices initWithLegacyDeepLinkProcessor:] */

undefined1 * FUN_106884564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3960;
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



/* Entry: 1068845d8; end: 1068845df; -[SCLegacyDeepLinkProcessorServices legacyDeepLinkProcessor] */

undefined8 FUN_1068845d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068845e0; end: 1068845eb; -[SCLegacyDeepLinkProcessorServices .cxx_destruct] */

void FUN_1068845e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068845ec; end: 106884663; -[SCNDeepLinkResolutionDeepLinkResolver initWithCpp:] */

undefined1 * FUN_1068845ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f3968;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_106884a08();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1068849dc(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106884664; end: 10688473b; +[SCNDeepLinkResolutionDeepLinkResolver create] */

void FUN_106884664(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  FUN_106884a3c(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110945640;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_106884a08();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,FUN_106884968);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106884a24();
  }
  FUN_1068849dc(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10688473c; end: 1068848a7; -[SCNDeepLinkResolutionDeepLinkResolver parseURL:resyncConfigs:] */

void FUN_10688473c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [64];
  char cStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_90,param_3);
  (**(code **)(*plVar2 + 0x10))(auStack_78,plVar2,auStack_90,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  puVar1 = PTR_PTR_1126b9638;
  if (cStack_38 == '\x01') {
    func_0x000100101220(auStack_78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8(auStack_78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106884a18();
  FUN_106884940(auStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068848a8; end: 1068848fb; -[SCNDeepLinkResolutionDeepLinkResolver .cxx_destruct] */

void FUN_1068848a8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110945640;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1068849dc((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1068848fc; end: 10688493f; -[SCNDeepLinkResolutionDeepLinkResolver .cxx_construct] */

undefined8 * FUN_1068848fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_106884a08();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106884940; end: 106884967;  */

void FUN_106884940(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000100100fec();
  }
  else {
    func_0x0001052a03ac();
  }
  return;
}



/* Entry: 106884968; end: 1068849db;  */

void FUN_106884968(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b6388;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_106884a08();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1068849dc(&uStack_30);
  return;
}



/* Entry: 1068849dc; end: 106884a07;  */

long FUN_1068849dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 106884a08; end: 106884a3b;  */

void FUN_106884a08(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 106884a3c; end: 106884a83;  */

void FUN_106884a3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_106890f34();
  uStack_38 = param_2;
  FUN_106884a84(&uStack_30,&uStack_38);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1068874d8(&uStack_30);
  return;
}



/* Entry: 106884a84; end: 106884aa3;  */

void FUN_106884a84(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_106887374(&uStack_11,param_1);
  return;
}



/* Entry: 106884aa4; end: 106884b17;  */

undefined8 * FUN_106884aa4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110945660;
  param_1[1] = param_2;
  param_1[2] = 0x32aaaba7;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  FUN_106884b18();
  return param_1;
}



/* Entry: 106884b18; end: 106884d37;  */

void FUN_106884b18(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  
  ppuStack_78 = &ppuStack_78;
  uStack_68 = 0;
  ppuStack_70 = ppuStack_78;
  func_0x00010028fb10(&plStack_80,0x8d);
  if (plStack_80 != (long *)0x0) {
    lVar4 = plStack_80[1];
    for (lVar7 = *plStack_80; lVar7 != lVar4; lVar7 = lVar7 + 0x20) {
      lVar9 = lVar7;
      func_0x0001002a23a8();
      if ((int)lVar9 != 0) {
        ppuStack_b0 = &PTR_DAT_110d09490;
        uStack_a8 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        func_0x0001002a25dc(&ppuStack_c8,lVar7);
        uVar2 = uStack_c0;
        pppuVar8 = (undefined8 ***)ppuStack_c8;
        if (-1 < (char)bStack_b1) {
          uVar2 = (ulong)bStack_b1;
          pppuVar8 = &ppuStack_c8;
        }
        pppuVar5 = &ppuStack_b0;
        func_0x0001001a3c94(pppuVar5,pppuVar8,uVar2);
        func_0x00010688e514();
        if ((int)pppuVar5 != 0) {
          puVar3 = &uStack_a0;
          if ((uStack_a0 & 1) != 0) {
            puVar3 = (ulong *)(uStack_a0 + 7);
          }
          for (lVar9 = (long)(int)uStack_98 << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
            FUN_106884d38(&ppuStack_78,*puVar3);
            puVar3 = puVar3 + 1;
          }
        }
        func_0x00010b566c54(&ppuStack_b0);
      }
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  FUN_106890e3c(puVar6,plStack_80 != (long *)0x0,1);
  func_0x00010688e56c();
  *puVar6 = &PTR_FUN_110945700;
  puVar6[1] = 0;
  puVar1 = puVar6 + 3;
  puVar6[2] = 0;
  puVar6[3] = puVar1;
  puVar6[4] = puVar1;
  puVar6[5] = 0;
  pppuVar8 = &ppuStack_78;
  while (pppuVar8 = (undefined8 ***)pppuVar8[1], pppuVar8 != &ppuStack_78) {
    FUN_106884d38(puVar1,pppuVar8 + 2);
  }
  puStack_d8 = puVar1;
  puStack_d0 = puVar6;
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  puStack_d8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_a8 = *(undefined8 *)(param_1 + 0x58);
  ppuStack_b0 = *(undefined ***)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  *(undefined8 **)(param_1 + 0x58) = puVar6;
  func_0x0001068874fc(&ppuStack_b0);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x10);
  func_0x0001068874fc(&puStack_d8);
  func_0x0001002acc14(&plStack_80);
  FUN_106886830(&ppuStack_78);
  return;
}



/* Entry: 106884d38; end: 106884d93;  */

void FUN_106884d38(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x00010688e5fc();
  plVar1 = (long *)0x58;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x00010b568258(plVar1 + 2,0);
  lVar2 = *unaff_x19;
  *plVar1 = lVar2;
  plVar1[1] = (long)unaff_x19;
  *(long **)(lVar2 + 8) = plVar1;
  *unaff_x19 = (long)plVar1;
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 106884d94; end: 10688631b;  */

/* WARNING: Removing unreachable block (ram,0x000106885d3c) */
/* WARNING: Removing unreachable block (ram,0x000106885d54) */
/* WARNING: Removing unreachable block (ram,0x000106885d64) */
/* WARNING: Removing unreachable block (ram,0x000106885d78) */
/* WARNING: Removing unreachable block (ram,0x000106885d84) */

void FUN_106884d94(long *param_1,long param_2,undefined ****param_3,int param_4)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  code *pcVar7;
  undefined1 in_ZR;
  int iVar8;
  char *pcVar9;
  undefined ****ppppuVar10;
  undefined1 *puVar11;
  undefined *****pppppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined ****ppppuVar16;
  undefined *puVar17;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  char *****pppppcVar18;
  ulong *puVar19;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **extraout_x9_02;
  undefined **extraout_x9_03;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined **extraout_x9_04;
  undefined **ppuVar22;
  undefined ****ppppuVar23;
  char *****pppppcVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  undefined ****ppppuVar31;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  undefined1 auStack_510 [24];
  long lStack_4f8;
  undefined ***apppuStack_4f0 [3];
  undefined ***apppuStack_4d8 [3];
  undefined **appuStack_4c0 [3];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [8];
  ulong uStack_488;
  byte bStack_479;
  undefined1 auStack_478 [48];
  byte bStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined1 uStack_430;
  undefined ***apppuStack_428 [3];
  char ****ppppcStack_410;
  char ****ppppcStack_408;
  ulong uStack_400;
  undefined **ppuStack_3f8;
  undefined *puStack_3f0;
  ulong uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [32];
  undefined ***pppuStack_380;
  undefined ****ppppuStack_378;
  long lStack_370;
  ulong uStack_360;
  long lStack_358;
  undefined ***pppuStack_330;
  undefined ****ppppuStack_328;
  long lStack_320;
  long lStack_318;
  undefined4 uStack_310;
  undefined8 auStack_2d8 [4];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined ***pppuStack_290;
  undefined ****ppppuStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined ****ppppuStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined ***pppuStack_218;
  undefined ****ppppuStack_210;
  long lStack_208;
  undefined ****ppppuStack_1f8;
  undefined ****ppppuStack_1f0;
  undefined ****ppppuStack_1e8;
  undefined ****ppppuStack_1e0;
  undefined1 uStack_1d8;
  undefined *puStack_1d0;
  undefined ****ppppuStack_1c8;
  undefined8 uStack_1c0;
  char ****ppppcStack_1b0;
  char ****ppppcStack_1a8;
  ulong uStack_1a0;
  undefined ****ppppuStack_190;
  undefined ****ppppuStack_188;
  undefined *puStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  long lStack_160;
  ulong uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_78;
  
  lVar26 = param_2;
  func_0x00010688e300();
  uStack_440 = 0;
  uStack_78 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_430 = 1;
  lStack_438 = lVar26;
  if (param_4 != 0) {
    FUN_106884b18(param_2);
  }
  ppppuVar16 = param_3;
  FUN_10688ee00(appuStack_4c0);
  if ((bStack_448 & 1) == 0) {
    uVar25 = *(undefined8 *)(param_2 + 8);
    func_0x00010002b838(apppuStack_4d8,&UNK_10f39e2cd);
    pppppuVar12 = (undefined *****)apppuStack_4d8;
    func_0x00010688e598(uVar25);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_4d8);
    func_0x00010688e4bc();
    func_0x0001005d466c();
    pppuStack_330 = (undefined ***)param_3;
    ppppuStack_328 = (undefined ****)pppppuVar12;
    func_0x0001003a91d4(&UNK_10f39e34a);
    func_0x00010688e8a0();
    func_0x00010688e698();
    func_0x00010688e998();
    uStack_278 = 1;
    plStack_280 = extraout_x9;
    func_0x00010688e53c();
    func_0x00010688e5d4();
    func_0x00010688e734();
    func_0x00010688e51c();
    uStack_178 = 1;
    uStack_177 = 0;
    puStack_180 = extraout_x8_00;
    func_0x00010688e6ec();
LAB_106885444:
    uStack_158 = CONCAT71(uStack_158._1_7_,1);
    func_0x00010688ebb4();
    func_0x0001052a03ac(&ppppuStack_190);
    func_0x0001052a03ac(&pppuStack_290);
LAB_106885efc:
    func_0x0001068868cc(appuStack_4c0);
    func_0x00010688e240(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010688e8d0();
    iVar8 = (int)ppppuVar16;
    if (((ulong)ppppuVar16 & 1) == 0) {
      func_0x00010688e8d0();
      iVar8 = (int)ppppuVar16;
      if (((ulong)ppppuVar16 & 1) == 0) {
        func_0x00010688e8d0();
        iVar8 = (int)ppppuVar16;
        if (((ulong)ppppuVar16 & 1) == 0) {
          uVar25 = *(undefined8 *)(param_2 + 8);
          func_0x00010002b838(apppuStack_4f0,&UNK_10f39e2dd);
          pppppuVar12 = (undefined *****)apppuStack_4f0;
          func_0x00010688e598(uVar25);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_4f0);
          func_0x00010688e4bc();
          ppppuVar16 = (undefined ****)appuStack_4c0;
          func_0x0001005d466c();
          pppuStack_330 = (undefined ***)ppppuVar16;
          ppppuStack_328 = (undefined ****)pppppuVar12;
          func_0x0001003a91d4(&UNK_10f39e35e);
          func_0x00010688e8a0();
          func_0x00010688e698();
          func_0x00010688e998();
          uStack_278 = 2;
          plStack_280 = extraout_x9_00;
          func_0x00010688e53c();
          func_0x00010688e5d4();
          func_0x00010688e734();
          func_0x00010688e51c();
          uStack_178 = 2;
          uStack_177 = 0;
          puStack_180 = extraout_x8_02;
          func_0x00010688e6ec();
          goto LAB_106885444;
        }
      }
    }
    pcVar15 = &UNK_10dde1b97;
    func_0x00010688e8d0();
    if (iVar8 != 0) {
      func_0x00010598789c(&ppppuStack_190,auStack_4a8,auStack_490);
      func_0x0001003a91d4(&UNK_10f39e2ec);
      func_0x00010688e5f0(&pppuStack_290);
      func_0x000100066230(auStack_490,&pppuStack_290);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_290);
      pcVar15 = &UNK_10dde1b97;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(auStack_4a8);
    }
    if (-1 < (char)bStack_479) {
      uStack_488 = (ulong)bStack_479;
    }
    if (uStack_488 == 0) {
      pcVar15 = "/";
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(auStack_490);
    }
    if ((bStack_448 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(param_2 + 0x10);
      lVar26 = *(long *)(param_2 + 0x50);
      lStack_528 = *(long *)(param_2 + 0x58);
      if (lStack_528 != 0) {
        plVar28 = (long *)(lStack_528 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar3) {
            *plVar28 = *plVar28 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_530 = lVar26;
      __ZNSt3__15mutex6unlockEv(param_2 + 0x10);
      ppppuStack_288 = (undefined ****)0x0;
      pppuStack_290 = (undefined ***)&PTR_DAT_110d09440;
      plStack_280 = (long *)0x0;
      uStack_278 = 0;
      uStack_270 = (undefined ****)((ulong)uStack_270._4_4_ << 0x20);
      ppppuStack_268 = (undefined ****)&DAT_11383d918;
      uStack_250 = 0;
      uStack_260 = (ulong)uStack_260._4_4_ << 0x20;
      if (lVar26 == 0) {
        func_0x00010688ec68();
      }
      else {
        iVar8 = (int)auStack_4a8;
        FUN_10688f098();
        FUN_10688f250(auStack_2d8);
        lVar26 = lStack_530;
        lVar27 = lStack_530;
        while (lVar27 = *(long *)(lVar27 + 8), lVar27 != lVar26) {
          bVar3 = false;
          ppuStack_3f8 = (undefined **)0x0;
          puStack_3f0 = (undefined *)0x0;
          uStack_3e8 = 0;
          piVar4 = *(int **)(lVar27 + 0x28);
          for (lVar29 = (long)*(int *)(lVar27 + 0x20) << 2; lVar29 != 0; lVar29 = lVar29 + -4) {
            puVar21 = puStack_3f0;
            if (-1 < (long)uStack_3e8) {
              puVar21 = (undefined *)(uStack_3e8 >> 0x38);
            }
            if (puVar21 != (undefined *)0x0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                        (&ppuStack_3f8,&DAT_10f68e8ee);
            }
            FUN_10688f250(&ppppuStack_190,*piVar4);
            __ZNSt3__19to_stringEi(&ppppcStack_1b0,*piVar4);
            func_0x00010048a6c8(&pppuStack_218,&ppppcStack_1b0,&UNK_10f39e300);
            func_0x000100610910(&pppuStack_380,&pppuStack_218,&ppppuStack_190);
            func_0x00010048a6c8(&pppuStack_330,&pppuStack_380,&UNK_10f39e303);
            pcVar15 = (char *)&pppuStack_330;
            func_0x0001004c3ca0(&ppuStack_3f8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_330);
            func_0x00010688e734();
            func_0x00010688e5d4();
            func_0x00010688e5dc();
            bVar3 = (bool)(iVar8 == *piVar4 | bVar3);
            func_0x00010688ebd8();
            piVar4 = piVar4 + 1;
          }
          if (bVar3) {
            uVar30 = *(ulong *)(lVar27 + 0x38);
            pcVar9 = "%s";
            func_0x00010688758c();
            puVar21 = &UNK_10f39e306;
            pppuStack_218 = (undefined ***)pcVar9;
            ppppuStack_210 = (undefined ****)pcVar15;
            func_0x000100687098();
            ppppuVar31 = (undefined ****)(uVar30 & 0xfffffffffffffffc);
            ppppuStack_378 = ppppuStack_210;
            pppuStack_380 = pppuStack_218;
            lStack_370 = lStack_208;
            cVar2 = *(char *)((long)ppppuVar31 + 0x17);
            ppppuVar16 = (undefined ****)*ppppuVar31;
            if (-1 < (long)cVar2) {
              ppppuVar16 = ppppuVar31;
            }
            pppuVar13 = ppppuVar31[1];
            if (-1 < cVar2) {
              pppuVar13 = (undefined ***)(long)cVar2;
            }
            ppppuVar10 = &pppuStack_218;
            func_0x000105642f24(ppppuVar10,ppppuVar16,(long)ppppuVar16 + (long)pppuVar13);
            if (ppppuVar10 == ppppuVar16) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&ppppcStack_1b0,ppppuVar31);
            }
            else {
              ppppuStack_328 = ppppuStack_378;
              pppuStack_330 = pppuStack_380;
              lStack_320 = lStack_370;
              uStack_178 = SUB81(pcVar15,0);
              uStack_177 = (undefined7)((ulong)pcVar15 >> 8);
              uStack_170 = SUB81(&puStack_1d0,0);
              uStack_16f = (undefined7)((ulong)&puStack_1d0 >> 8);
              ppppuVar23 = (undefined ****)*ppppuVar31;
              if (-1 < *(char *)((long)ppppuVar31 + 0x17)) {
                ppppuVar23 = ppppuVar31;
              }
              ppppcStack_1b0 = (char ****)0x0;
              ppppcStack_1a8 = (char ****)0x0;
              uStack_1a0 = 0;
              puStack_1d0 = puVar21;
              ppppuStack_1c8 = (undefined ****)pcVar15;
              ppppuStack_190 = ppppuVar10;
              ppppuStack_188 = ppppuVar16;
              puStack_180 = puVar21;
              while( true ) {
                pppppcVar24 = (char *****)ppppcStack_1a8;
                pppppcVar18 = (char *****)ppppcStack_1b0;
                if (-1 < (long)uStack_1a0) {
                  pppppcVar24 = (char *****)(uStack_1a0 >> 0x38);
                  pppppcVar18 = &ppppcStack_1b0;
                }
                if (ppppuStack_190 == ppppuStack_188) break;
                func_0x000100602dbc(&ppppcStack_1b0,(char *)((long)pppppcVar18 + (long)pppppcVar24),
                                    ppppuVar23);
                pppppcVar24 = (char *****)ppppcStack_1a8;
                pppppcVar18 = (char *****)ppppcStack_1b0;
                if (-1 < (long)uStack_1a0) {
                  pppppcVar24 = (char *****)(uStack_1a0 >> 0x38);
                  pppppcVar18 = &ppppcStack_1b0;
                }
                func_0x000106887580(&ppppcStack_1b0,(char *)((long)pppppcVar18 + (long)pppppcVar24),
                                    &puStack_180);
                ppppuVar23 = ppppuStack_188;
                pppuVar13 = ppppuVar31[1];
                ppppuVar16 = (undefined ****)*ppppuVar31;
                if (-1 < (char)*(byte *)((long)ppppuVar31 + 0x17)) {
                  pppuVar13 = (undefined ***)(ulong)*(byte *)((long)ppppuVar31 + 0x17);
                  ppppuVar16 = ppppuVar31;
                }
                ppppuVar10 = &pppuStack_330;
                func_0x000105642f24(ppppuVar10,ppppuStack_188,(long)ppppuVar16 + (long)pppuVar13);
                ppppuStack_190 = ppppuVar10;
                if (ppppuVar10 != ppppuStack_188) {
                  uVar25 = ((undefined8 *)CONCAT71(uStack_16f,uStack_170))[1];
                  puStack_180 = *(undefined **)CONCAT71(uStack_16f,uStack_170);
                  uStack_178 = (undefined1)uVar25;
                  uStack_177 = (undefined7)((ulong)uVar25 >> 8);
                }
              }
              pppuVar13 = ppppuVar31[1];
              ppppuVar16 = (undefined ****)*ppppuVar31;
              if (-1 < (char)*(byte *)((long)ppppuVar31 + 0x17)) {
                pppuVar13 = (undefined ***)(ulong)*(byte *)((long)ppppuVar31 + 0x17);
                ppppuVar16 = ppppuVar31;
              }
              func_0x000100602dbc(&ppppcStack_1b0,(char *)((long)pppppcVar18 + (long)pppppcVar24),
                                  ppppuVar23,(long)ppppuVar16 + (long)pppuVar13);
            }
            FUN_106887594(&pppuStack_330,&ppppcStack_1b0,0);
            lStack_160 = 0;
            uStack_158 = 0;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            ppppuStack_188 = (undefined ****)0x0;
            ppppuStack_190 = (undefined ****)0x0;
            uStack_178 = 0;
            puStack_180 = (undefined *)0x0;
            uStack_16f = 0;
            uStack_168 = 0;
            uStack_177 = 0;
            uStack_170 = 0;
            puVar11 = auStack_490;
            pcVar15 = (char *)&ppppuStack_190;
            func_0x0001001534c8(puVar11,pcVar15,&pppuStack_330,0);
            if ((int)puVar11 != 0) {
              cVar2 = *(char *)(((ulong)ppppuStack_268 & 0xfffffffffffffffc) + 0x17);
              if (cVar2 < '\0') {
                if (*(long *)(((ulong)ppppuStack_268 & 0xfffffffffffffffc) + 8) == 0)
                goto LAB_106885374;
              }
              else if (cVar2 == '\0') {
LAB_106885374:
                func_0x00010688ebcc();
                goto LAB_1068853a4;
              }
              ppppuStack_1c8 = (undefined ****)0x0;
              puStack_1d0 = (undefined *)0x0;
              uStack_1c0 = 0;
              uStack_238 = 0;
              uStack_240 = 0;
              uStack_230 = 0;
              uVar30 = *(ulong *)(lVar27 + 0x38);
              func_0x00010688eb74(auStack_3a0);
              func_0x00010688eb6c(&puStack_1d0,uVar30 & 0xfffffffffffffffc,auStack_3a0);
              func_0x00010688eb58();
              ppppuVar16 = ppppuStack_268;
              func_0x00010688eb74(auStack_3b8);
              func_0x00010688eb6c(&uStack_240,(ulong)ppppuVar16 & 0xfffffffffffffffc,auStack_3b8);
              func_0x00010688eb3c();
              func_0x00010015bc98(&ppppcStack_410,&puStack_1d0);
              func_0x00010688eb30(&pppuStack_218);
              FUN_106886454(&pppuStack_380,&ppppcStack_410,&pppuStack_218);
              func_0x00010688e5d4();
              func_0x00010688e828();
              func_0x00010015bc98(apppuStack_428,&uStack_240);
              func_0x00010688eb30(auStack_3d0);
              pcVar15 = (char *)apppuStack_428;
              FUN_106886454(&pppuStack_218,pcVar15,auStack_3d0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d0);
              func_0x0001000e30f4(apppuStack_428);
              while (ppppuStack_1f0 != (undefined ****)0x0) {
                if (lStack_358 == 0) {
LAB_106885380:
                  func_0x00010688ebcc();
                  break;
                }
                if (ppppuStack_378[uStack_360 >> 9][uStack_360 & 0x1ff] !=
                    ppppuStack_210[(ulong)ppppuStack_1f8 >> 9][(ulong)ppppuStack_1f8 & 0x1ff]) {
                  if (ppppuStack_210[(ulong)ppppuStack_1f8 >> 9][(ulong)ppppuStack_1f8 & 0x1ff] <=
                      ppppuStack_378[uStack_360 >> 9][uStack_360 & 0x1ff]) goto LAB_106885380;
                  break;
                }
                FUN_1068864d4(&pppuStack_380);
                FUN_1068864d4(&pppuStack_218);
              }
              FUN_10688729c(&pppuStack_218);
              FUN_10688729c(&pppuStack_380);
              func_0x0001000e30f4(&uStack_240);
              func_0x0001000e30f4(&puStack_1d0);
            }
LAB_1068853a4:
            func_0x00010015b3ec(&ppppuStack_190);
            func_0x00010015b424(&pppuStack_330);
            func_0x00010688e5dc();
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3f8);
        }
        func_0x00010688ec68();
        func_0x00010688e960();
      }
      func_0x00010b568318(&pppuStack_290);
      func_0x0001068874fc(&lStack_530);
      uVar30 = *(ulong *)(lStack_4f8 + 0x28) & 0xfffffffffffffffc;
      cVar2 = *(char *)(uVar30 + 0x17);
      if (cVar2 < '\0') {
        if (*(long *)(uVar30 + 8) == 0) goto LAB_106885504;
LAB_106885494:
        if ((bStack_448 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_106885f40;
        }
        ppuStack_3f8 = &PTR_DAT_110d08ca0;
        puStack_3f0 = (undefined *)0x0;
        uStack_3d8 = 0;
        uStack_3e8 = CONCAT44(uStack_3e8._4_4_,*(undefined4 *)(lStack_4f8 + 0x30));
        switch(*(undefined4 *)(lStack_4f8 + 0x30)) {
        case 1:
          func_0x00010688e8b0();
          uStack_3d8 = CONCAT44(2,(undefined4)uStack_3d8);
          puVar21 = puStack_3f0;
          if (((ulong)puStack_3f0 & 1) != 0) {
            func_0x00010688e618();
          }
          func_0x000106886e78();
          puStack_3e0 = puVar21;
          break;
        case 2:
          func_0x000106886eb4(&ppuStack_3f8);
          break;
        case 3:
          func_0x000106886f38(&ppuStack_3f8);
          break;
        case 4:
          func_0x00010688e8b0();
          uStack_3d8 = CONCAT44(5,(undefined4)uStack_3d8);
          puVar21 = puStack_3f0;
          if (((ulong)puStack_3f0 & 1) != 0) {
            func_0x00010688e618();
          }
          func_0x000106886fbc();
          puStack_3e0 = puVar21;
          break;
        case 5:
          func_0x000106886ff8(&ppuStack_3f8);
          break;
        case 6:
          func_0x000106887078(&ppuStack_3f8);
          break;
        case 7:
          func_0x0001068870f8(&ppuStack_3f8);
          break;
        case 8:
          func_0x000106887178(&ppuStack_3f8);
          break;
        case 9:
          func_0x00010688e8b0();
          uStack_3d8 = CONCAT44(0xb,(undefined4)uStack_3d8);
          puVar21 = puStack_3f0;
          if (((ulong)puStack_3f0 & 1) != 0) {
            func_0x00010688e618();
          }
          func_0x000106887210();
          puStack_3e0 = puVar21;
        }
        ppppcStack_410 = (char ****)0x0;
        ppppcStack_408 = (char ****)0x0;
        uStack_400 = 0;
        func_0x0001000e1048(apppuStack_428,auStack_490,1,0xffffffffffffffff);
        FUN_106886424(auStack_3d0,"/");
        FUN_10688d7f0(auStack_3b8,auStack_3d0);
        ppppuVar31 = (undefined ****)0x1;
        FUN_10688cbd4(auStack_3a0,auStack_3b8);
        ppppuVar16 = apppuStack_428;
        FUN_10688d848();
        FUN_10688cca4(&uStack_240,auStack_3a0);
        FUN_10688cca4(&puStack_1d0,&uStack_240);
        FUN_10688cca4(&ppppcStack_1b0,&puStack_1d0);
        pppuStack_218 = (undefined ***)0x0;
        FUN_10688cca4(auStack_2d8,&ppppcStack_1b0);
        FUN_10688cca4(&pppuStack_380,auStack_2d8);
        FUN_10688cca4(&pppuStack_330,&pppuStack_380);
        pppppuVar12 = (undefined *****)&pppuStack_290;
        FUN_10688cca4(pppppuVar12,&pppuStack_330);
        func_0x0001001522c4();
        FUN_10688cca4();
        ppppuStack_210 = (undefined ****)pppppuVar12;
        FUN_10688c9f8(&pppuStack_290);
        FUN_10688c9f8(&pppuStack_330);
        FUN_10688c9f8(&pppuStack_380);
        pppuStack_218 = (undefined ***)&PTR_FUN_110945860;
        FUN_10688c9f8(auStack_2d8);
        FUN_10688c9f8(&ppppcStack_1b0);
        FUN_10688c9f8(&puStack_1d0);
        uStack_1d8 = 0;
        ppppuStack_1f8 = ppppuVar16;
        ppppuStack_1f0 = ppppuVar16;
        ppppuStack_1e8 = ppppuVar16;
        ppppuStack_1e0 = ppppuVar31;
        if (ppppuVar16 != ppppuVar31) {
          FUN_10688d8c0(&pppuStack_218);
        }
        FUN_10688d85c(&ppppuStack_190,&pppuStack_218);
        FUN_10688da54(&pppuStack_218);
        FUN_10688c9f8(&uStack_240);
        auStack_2d8[0] = 0;
        uStack_2b0 = 0;
        uStack_2b8 = 0;
        uStack_2a0 = 0;
        uStack_2a8 = 0;
        uStack_298 = 1;
        FUN_10688d85c(&pppuStack_290,auStack_2d8);
        FUN_10688da54(auStack_2d8);
        FUN_10688d85c(&pppuStack_330,&ppppuStack_190);
        FUN_10688d85c(&pppuStack_380,&pppuStack_290);
        FUN_10688dab0(&ppppcStack_1b0,&pppuStack_330,&pppuStack_380);
        FUN_10688da54(&pppuStack_380);
        FUN_10688da54(&pppuStack_330);
        uVar30 = uStack_400;
        ppppcVar6 = ppppcStack_408;
        ppppcVar5 = ppppcStack_410;
        ppppcStack_408 = ppppcStack_1a8;
        ppppcStack_410 = ppppcStack_1b0;
        ppppcStack_1a8 = ppppcVar6;
        ppppcStack_1b0 = ppppcVar5;
        uStack_400 = uStack_1a0;
        uStack_1a0 = uVar30;
        func_0x0001000e30f4(&ppppcStack_1b0);
        FUN_10688da54(&pppuStack_290);
        FUN_10688da54(&ppppuStack_190);
        func_0x00010688eb58();
        func_0x00010688eb3c();
        FUN_10688c9f8(auStack_3d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_428);
        ppppuVar16 = (undefined ****)&UNK_10f39e30c;
        uVar30 = *(ulong *)(lStack_4f8 + 0x28) & 0xfffffffffffffffc;
        func_0x0001005d480c(uVar30,&UNK_10f39e30c,0);
        ppppcVar5 = ppppcStack_408;
        pppppcVar24 = (char *****)ppppcStack_410;
        if (uVar30 != 0xffffffffffffffff) {
          for (; pppppcVar24 != (char *****)ppppcVar5; pppppcVar24 = pppppcVar24 + 3) {
            if (*(char *)((long)pppppcVar24 + 0x17) < '\0') {
              if (pppppcVar24[1] != (char ****)0x0) {
                pppppcVar18 = (char *****)*pppppcVar24;
                goto LAB_10688595c;
              }
            }
            else {
              pppppcVar18 = pppppcVar24;
              if (*(char *)((long)pppppcVar24 + 0x17) != '\0') {
LAB_10688595c:
                if (*(char *)pppppcVar18 == '@') {
                  ppppuVar16 = (undefined ****)0x0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                            (pppppcVar24,0,1);
                }
              }
            }
          }
        }
        pppuStack_380 = (undefined ***)0x0;
        ppppuStack_378 = (undefined ****)0x0;
        lStack_370 = 0;
        ppppuStack_288 = (undefined ****)0x0;
        pppuStack_290 = (undefined ***)0x0;
        uStack_278 = 0;
        plStack_280 = (long *)0x0;
        uStack_270 = (undefined ****)CONCAT44(uStack_270._4_4_,0x3f800000);
        ppppuVar31 = (undefined ****)&DAT_10f39e310;
        func_0x00010688758c();
        ppppuStack_190 = ppppuVar31;
        ppppuStack_188 = ppppuVar16;
        FUN_10688c948(&pppuStack_218,&ppppuStack_190);
        func_0x00010688eb6c(&pppuStack_380,auStack_478,&pppuStack_218);
        FUN_10688c9f8(&pppuStack_218);
        lVar26 = 0;
        for (uVar30 = 0; uVar30 < ((long)ppppuStack_378 - (long)pppuStack_380) / 0x18 - 1U;
            uVar30 = uVar30 + 2) {
          func_0x00010060413c(&pppuStack_290,(char *)((long)pppuStack_380 + lVar26));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
          lVar26 = lVar26 + 0x30;
        }
        func_0x00010688ea74();
        ppuVar1 = extraout_x9_01;
        if (extraout_w8 != 5) {
          ppuVar1 = &PTR_PTR_113399ae8;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_2d8,(ulong)ppuVar1[8] & 0xfffffffffffffffc);
        ppppuStack_328 = (undefined ****)0x0;
        pppuStack_330 = (undefined ***)0x0;
        lStack_318 = 0;
        lStack_320 = 0;
        uStack_310 = 0x3f800000;
        if (*(int *)(lStack_4f8 + 0x44) == 4) {
          func_0x00010688ea50();
          ppuVar1 = &PTR_PTR_113399ae8;
          for (; uVar30 != 0; uVar30 = uVar30 - 8) {
            ppuVar22 = *(undefined ***)(*ppuVar1 + 0x18);
            ppuVar20 = &PTR_PTR_113399ac8;
            if (ppuVar22 != (undefined **)0x0) {
              ppuVar20 = ppuVar22;
            }
            func_0x000106886528(&ppuStack_3f8,*(undefined4 *)(ppuVar20 + 2),
                                *(undefined4 *)(ppuVar20 + 3),
                                ppppcStack_410 + (long)*(int *)(*ppuVar1 + 0x20) * 3);
            ppuVar1 = ppuVar1 + 1;
          }
          func_0x00010688ea74();
          func_0x00010688ea50();
        }
        else if (*(int *)(lStack_4f8 + 0x44) == 5) {
          puVar19 = (ulong *)(*(long *)(lStack_4f8 + 0x38) + 0x10);
          uVar30 = *puVar19;
          if ((uVar30 & 1) != 0) {
            puVar19 = (ulong *)(uVar30 + 7);
          }
          for (lVar26 = (long)*(int *)(*(long *)(lStack_4f8 + 0x38) + 0x18) << 3; lVar26 != 0;
              lVar26 = lVar26 + -8) {
            uVar30 = *puVar19;
            if (*(int *)(uVar30 + 0x24) == 2) {
              uStack_240 = (ulong)*(uint *)(uVar30 + 0x18);
              uStack_238 = 0;
              func_0x0001003a91d4(&UNK_10f39e313);
              func_0x00010688e874();
              func_0x00010688e8c0();
              func_0x00010688e890();
              func_0x00010688ec5c();
              func_0x00010688e5dc();
              func_0x00010688ebe0();
              func_0x00010688e830();
            }
            else if (*(int *)(uVar30 + 0x24) == 3) {
              func_0x00010060413c(&pppuStack_330,*(ulong *)(uVar30 + 0x18) & 0xfffffffffffffffc);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            }
            puVar19 = puVar19 + 1;
          }
          func_0x00010688ea74();
          ppuVar1 = extraout_x9_02;
          if (extraout_w8_00 != 5) {
            ppuVar1 = &PTR_PTR_113399ae8;
          }
          ppuVar20 = extraout_x9_02;
          iVar8 = extraout_w8_00;
          plVar28 = plStack_280;
          if ((*(byte *)((long)ppuVar1 + 0x4c) & 1) != 0) {
            for (; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
              func_0x00010060413c(&pppuStack_330,plVar28 + 2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            }
            func_0x00010688ea74();
            ppuVar20 = extraout_x9_03;
            iVar8 = extraout_w8_01;
          }
          if (iVar8 != 5) {
            ppuVar20 = &PTR_PTR_113399ae8;
          }
          puVar21 = ppuVar20[5];
          ppuVar1 = ppuVar20 + 5;
          if (((ulong)puVar21 & 1) != 0) {
            ppuVar1 = (undefined **)(puVar21 + 7);
          }
          for (lVar26 = (long)*(int *)(ppuVar20 + 6) << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
            puVar21 = *ppuVar1;
            if (*(int *)(puVar21 + 0x24) == 2) {
              uStack_240 = (ulong)*(uint *)(puVar21 + 0x18);
              uStack_238 = 0;
              func_0x0001003a91d4(&UNK_10f39e313);
              func_0x00010688e874();
              func_0x00010688e8c0();
              func_0x00010688e5e4(*(undefined8 *)(puVar21 + 0x10));
              func_0x00010688e890();
              func_0x00010688ec5c();
              func_0x00010688e5dc();
              func_0x00010688ebe0();
              func_0x00010688e830();
            }
            else if (*(int *)(puVar21 + 0x24) == 3) {
              func_0x00010688e5e4(*(undefined8 *)(puVar21 + 0x10));
              puVar17 = &DAT_11383d918;
              if (*(int *)(puVar21 + 0x24) == 3) {
                puVar17 = (undefined *)(*(ulong *)(puVar21 + 0x18) & 0xfffffffffffffffc);
              }
              func_0x00010060413c(&pppuStack_330,puVar17);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            }
            ppuVar1 = ppuVar1 + 1;
          }
          func_0x00010688ea74();
          ppuVar1 = extraout_x9_04;
          if (extraout_w8_02 != 5) {
            ppuVar1 = &PTR_PTR_113399ae8;
          }
          FUN_10688f250(&puStack_1d0,*(undefined4 *)(ppuVar1 + 9));
          func_0x00010598789c(&ppppuStack_190,&puStack_1d0,auStack_2d8);
          func_0x0001003a91d4(&UNK_10f39e31a);
          func_0x00010688e5f0(&ppppcStack_1b0);
          func_0x00010688e830();
          if (lStack_318 != 0) {
            func_0x000105680760(&ppppuStack_190);
            plVar28 = &lStack_320;
            lVar26 = lStack_318;
            while( true ) {
              lVar26 = lVar26 + -1;
              plVar28 = (long *)*plVar28;
              if (plVar28 == (long *)0x0) break;
              func_0x0001006282fc(&puStack_180,plVar28 + 2);
              func_0x00010549023c();
              func_0x0001006282fc();
              if (lVar26 != 0) {
                func_0x00010549023c(&puStack_180,&DAT_10f2e8297);
              }
            }
            func_0x000105491b64(&uStack_240,&uStack_178);
            func_0x000105673d7c(&ppppuStack_190);
            func_0x00010598789c(&ppppuStack_190,&ppppcStack_1b0,&uStack_240);
            func_0x0001003a91d4(&UNK_10f39e327);
            func_0x00010688e5f0(&puStack_1d0);
            func_0x000100066230(&ppppcStack_1b0,&puStack_1d0);
            func_0x00010688e830();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_240);
          }
          if (uStack_3d8._4_4_ != 9) {
            func_0x00010688e8b0();
            uStack_3d8 = CONCAT44(9,(undefined4)uStack_3d8);
            puStack_3e0 = &DAT_11383d918;
          }
          puVar21 = puStack_3f0;
          if (((ulong)puStack_3f0 & 1) != 0) {
            puVar21 = *(undefined **)((ulong)puStack_3f0 & 0xfffffffffffffffe);
          }
          func_0x0001001a53d4(&puStack_3e0,&ppppcStack_1b0,puVar21);
          func_0x00010688e5dc();
        }
        pppuVar13 = &ppuStack_3f8;
        func_0x00010b56510c(pppuVar13);
        func_0x000100291d50(&lStack_530,pppuVar13);
        func_0x00010b4d1758(&ppuStack_3f8,lStack_530,(int)lStack_528 - (int)lStack_530);
        in_ZR = *(int *)(lStack_4f8 + 0x44) == 5;
        puVar21 = &UNK_10f39e32d;
        if (!(bool)in_ZR) {
          puVar21 = &UNK_10f39e33a;
        }
        uVar25 = *(undefined8 *)(param_2 + 8);
        func_0x00010002b838(&ppppuStack_190,puVar21);
        FUN_106890d50(uVar25,&ppppuStack_190,1,1);
        func_0x00010688ebd8();
        uVar25 = *(undefined8 *)(param_2 + 8);
        puVar14 = &uStack_440;
        func_0x0001002acb3c(puVar14);
        FUN_106890ed8(uVar25,puVar14);
        func_0x00010028ad98(&pppuStack_330);
        func_0x00010688e960();
        func_0x00010028ad98(&pppuStack_290);
        func_0x0001000e30f4(&pppuStack_380);
        func_0x00010688e828();
        func_0x00010b564ecc(&ppuStack_3f8);
        param_1[1] = lStack_528;
        *param_1 = lStack_530;
        param_1[2] = lStack_520;
        lStack_530 = 0;
        lStack_528 = 0;
        lStack_520 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        func_0x000100100fec(&lStack_530);
      }
      else {
        if (cVar2 != '\0') goto LAB_106885494;
LAB_106885504:
        uVar25 = *(undefined8 *)(param_2 + 8);
        func_0x00010002b838(auStack_510,&UNK_10f39e2f2);
        func_0x00010688e598(uVar25,auStack_510);
        func_0x00010688ec40();
        func_0x00010688e4bc();
        func_0x0001068868b0(&pppuStack_330,&UNK_10f39e384);
        plStack_280 = (long *)lStack_370;
        ppppuStack_288 = ppppuStack_378;
        pppuStack_290 = pppuStack_380;
        ppppuStack_378 = (undefined ****)0x0;
        lStack_370 = 0;
        pppuStack_380 = (undefined ***)0x0;
        uStack_278 = 3;
        uStack_270 = (undefined ****)((ulong)uStack_270 & 0xffffffffffffff00);
        cVar2 = (char)lStack_318;
        in_ZR = (char)lStack_318 == '\x01';
        if ((bool)in_ZR) {
          ppppuStack_268 = ppppuStack_328;
          uStack_270 = (undefined ****)pppuStack_330;
          uStack_260 = lStack_320;
          lStack_320 = 0;
          pppuStack_330 = (undefined ***)0x0;
          ppppuStack_328 = (undefined ****)0x0;
        }
        uStack_258 = in_ZR;
        func_0x0001001148fc(&pppuStack_330);
        func_0x00010688e734();
        func_0x00010688e51c();
        plStack_280 = (long *)0x0;
        uStack_178 = 3;
        uStack_177 = 0;
        uStack_170 = 0;
        uVar30 = uStack_158 >> 8;
        uStack_158 = uStack_158 & 0xffffffffffffff00;
        if (cVar2 != '\0') {
          uStack_168 = SUB81(ppppuStack_268,0);
          uStack_167 = (undefined7)((ulong)ppppuStack_268 >> 8);
          uStack_170 = SUB81(uStack_270,0);
          uStack_16f = (undefined7)((ulong)uStack_270 >> 8);
          lStack_160 = uStack_260;
          ppppuStack_268 = (undefined ****)0x0;
          uStack_260 = 0;
          uStack_270 = (undefined ****)0x0;
          uStack_158 = CONCAT71((int7)uVar30,1);
        }
        puStack_180 = extraout_x8_01;
        func_0x00010688ebb4();
        func_0x0001052a03ac(&ppppuStack_190);
        func_0x0001052a03ac(&pppuStack_290);
      }
      FUN_106887554(&lStack_4f8);
      goto LAB_106885efc;
    }
  }
  func_0x000104bdc2c8();
LAB_106885f40:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x106885f44);
  (*pcVar7)();
}



/* Entry: 10688631c; end: 106886397;  */

void FUN_10688631c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x21;
  
  func_0x00010688e5fc();
  lVar1 = 0x48;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010b568220();
  if (lVar2 != unaff_x21) {
    uVar3 = *(ulong *)(lVar1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar4 = *(ulong *)(unaff_x21 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar4) {
      func_0x00010015388c();
      func_0x00010b5687dc();
    }
    else {
      func_0x00010015388c();
      func_0x00010b5687a8();
    }
  }
  *unaff_x19 = lVar1;
  return;
}



/* Entry: 106886398; end: 106886423;  */

void FUN_106886398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  puVar1 = auStack_70;
  func_0x000100152260();
  func_0x00010688e300();
  uStack_38 = extraout_x8;
  FUN_10688d7f0(auStack_70,param_3);
  FUN_10688cbd4(auStack_58);
  func_0x00010688e954();
  FUN_10688ca2c();
  func_0x00010688eccc();
  func_0x00010688e534();
  func_0x00010688e240(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010688eccc();
  func_0x00010688e534();
  func_0x00010688e3cc();
  func_0x00010538fd7c();
  puStack_a0 = puVar1;
  uStack_98 = param_4;
  FUN_10688c948(extraout_x8_00,&puStack_a0);
  return;
}



/* Entry: 106886424; end: 106886453;  */

void FUN_106886424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010538fd7c();
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10688c948(param_1,&uStack_30);
  return;
}



/* Entry: 106886454; end: 1068864d3;  */

void FUN_106886454(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x21;
  
  func_0x000100154268();
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)((unaff_x21[1] - *unaff_x21) / 0x18); uVar2 = uVar2 + 1) {
    iVar1 = (int)*unaff_x21 + (int)uVar2 * 0x18;
    func_0x0001000e107c();
    if (iVar1 != 0) {
      func_0x000100153e64();
      func_0x00010688692c();
    }
  }
  return;
}



/* Entry: 1068864d4; end: 106886673;  */

void FUN_1068864d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x3ff < uVar1) {
    func_0x00010688ec48(*(undefined8 *)(param_1 + 8));
    func_0x00010688e9d0();
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
  }
  return;
}



/* Entry: 106886674; end: 10688668f;  */

bool FUN_106886674(long param_1)

{
  func_0x000100ab9b18();
  return param_1 != 0;
}



/* Entry: 106886690; end: 106886817;  */

void FUN_106886690(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [48];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puVar4;
  
  func_0x00010015aa90(param_3);
  uVar6 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  puVar4 = auStack_f0;
  FUN_10688dfac(puVar4,puVar2,(long)puVar2 + uVar6,extraout_x8,0);
  iVar3 = (int)puVar4;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_13f = 0;
  uStack_147 = 0;
  uStack_140 = 0;
  func_0x00010688ebe8();
  if (iVar3 == 0) {
    plVar5 = plVar1;
    _strlen();
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = (ulong)plVar5;
    while (func_0x00010688ebe8(), (uVar6 & 1) == 0) {
      uVar8 = uStack_a0;
      FUN_10688e114(uStack_a0,uStack_98,param_1);
      param_1 = auStack_d0;
      FUN_10688dd10(param_1,uVar8,plVar1,(long)plVar1 + (long)plVar5,0);
      uVar7 = uStack_80;
      uVar8 = uStack_88;
      uVar6 = 0;
      FUN_10688ded8();
    }
    FUN_10688e114(uVar8,uVar7,param_1);
  }
  else {
    FUN_10688e114(puVar2,(long)puVar2 + uVar6,param_1);
  }
  func_0x00010015b3ec(&uStack_160);
  func_0x00010688ebf4();
  return;
}



/* Entry: 106886818; end: 10688681b;  */

undefined8 * FUN_106886818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110945660;
  func_0x0001068874fc(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 10688681c; end: 10688682f;  */

void FUN_10688681c(void)

{
  func_0x000106887260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106886830; end: 106886897;  */

void FUN_106886830(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar1 = (long *)plVar3[1];
      func_0x00010b568318(plVar3 + 2);
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  return;
}



/* Entry: 106886898; end: 1068868eb;  */

void FUN_106886898(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1068868ec; end: 10688698f;  */

void FUN_1068868ec(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 106886990; end: 106886abf;  */

void FUN_106886990(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x200) {
    plStack_30 = param_1 + 3;
    lVar3 = *plStack_30;
    uVar4 = lVar3 - *param_1;
    if (uVar4 <= (ulong)(param_1[2] - param_1[1])) {
      lVar2 = (long)uVar4 >> 2;
      if (lVar3 == *param_1) {
        lVar2 = 1;
      }
      FUN_106886de0(lVar2);
      func_0x00010688eda0();
      uVar1 = 0x1000;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x200;
      uStack_70 = uVar1;
      uStack_68 = uVar1;
      FUN_106886c90(auStack_50,&uStack_70);
      uStack_68 = 0;
      lVar3 = param_1[2];
      while (lVar3 != param_1[1]) {
        lVar3 = lVar3 + -8;
        FUN_106886d18(auStack_50,lVar3);
      }
      func_0x00010688e7e8();
      func_0x000106886e10();
      func_0x000106886e38(auStack_50);
      return;
    }
    if (lVar3 != param_1[2]) {
      __Znwm(0x1000);
      func_0x00010688e438();
      FUN_106886b74();
      return;
    }
    __Znwm(0x1000);
    func_0x00010688e438();
    FUN_106886bf8();
  }
  else {
    param_1[4] = param_1[4] - 0x200;
  }
  auStack_50[0] = *(undefined8 *)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  func_0x00010688e58c();
  FUN_106886af0();
  return;
}



/* Entry: 106886ac0; end: 106886aef;  */

long FUN_106886ac0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8;
  }
  return 0;
}



/* Entry: 106886af0; end: 106886b73;  */

void FUN_106886af0(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong *unaff_x19;
  
  func_0x000100154188();
  func_0x000100153c68();
  func_0x00010688e9e0();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x00010688e2a8();
      if (!bVar2) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
    else {
      func_0x00010688ec10((long)(extraout_x8 - uVar1) >> 2);
      func_0x00010688e254();
      func_0x00010688e710();
      func_0x00010688e228();
      func_0x000106886e38();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 106886b74; end: 106886bf7;  */

void FUN_106886b74(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong *unaff_x19;
  
  func_0x000100154188();
  func_0x000100153c68();
  func_0x00010688e9e0();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x00010688e2a8();
      if (!bVar2) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
    else {
      func_0x00010688ec10((long)(extraout_x8 - uVar1) >> 2);
      func_0x00010688e254();
      func_0x00010688e710();
      func_0x00010688e228();
      func_0x000106886e38();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 106886bf8; end: 106886c8f;  */

void FUN_106886bf8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x10;
  long lVar2;
  
  func_0x00010688e38c();
  if ((bool)in_ZR) {
    func_0x00010688e9e0();
    if ((bool)in_CY) {
      lVar1 = extraout_x10 - param_2 >> 2;
      if (extraout_x10 - param_2 == 0) {
        lVar1 = 1;
      }
      lVar2 = lVar1 * 2;
      FUN_106886de0(lVar1);
      func_0x00010688e294(lVar1 + (lVar2 + 6U & 0xfffffffffffffff8));
      func_0x00010688e710();
      func_0x00010688e228();
      func_0x000106886e38();
    }
    else {
      func_0x00010688e270();
      if (!(bool)in_ZR) {
        func_0x00010688e63c();
      }
      func_0x00010688ea68();
    }
  }
  func_0x00010688e504();
  return;
}



/* Entry: 106886c90; end: 106886d17;  */

void FUN_106886c90(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 extraout_x8;
  
  func_0x000100154188();
  func_0x000100153c68();
  bVar2 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar3 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar3) {
    func_0x00010688ea44();
    if (!bVar2 || bVar3) {
      func_0x00010688ea20();
      uVar1 = extraout_x8;
      if (bVar3) {
        uVar1 = 1;
      }
      FUN_106886de0(uVar1);
      func_0x00010688e254();
      func_0x00010688e710();
      func_0x00010688e228();
      func_0x000106886e38();
    }
    else {
      func_0x00010688e2a8();
      if (!bVar3) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 106886d18; end: 106886daf;  */

void FUN_106886d18(void)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  long lVar3;
  
  func_0x00010688e38c();
  if ((bool)in_ZR) {
    bVar1 = *(ulong *)(unaff_x19 + 0x10) == *(ulong *)(unaff_x19 + 0x18);
    if (*(ulong *)(unaff_x19 + 0x10) < *(ulong *)(unaff_x19 + 0x18)) {
      func_0x00010688e270();
      if (!bVar1) {
        func_0x00010688e63c();
      }
      func_0x00010688ea68();
    }
    else {
      func_0x00010688ed88();
      lVar2 = extraout_x8;
      if (bVar1) {
        lVar2 = 1;
      }
      lVar3 = lVar2 * 2;
      FUN_106886de0(lVar2);
      func_0x00010688e294(lVar2 + (lVar3 + 6U & 0xfffffffffffffff8));
      func_0x00010688e710();
      func_0x00010688e228();
      func_0x000106886e38();
    }
  }
  func_0x00010688e504();
  return;
}



/* Entry: 106886db0; end: 106886ddf;  */

void FUN_106886db0(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 106886de0; end: 10688729b;  */

void FUN_106886de0(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010015385c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10688729c; end: 1068872df;  */

long * FUN_10688729c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_1068872e0();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar3 = (undefined8 *)param_1[1]; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = param_1[2];
  while (lVar2 != param_1[1]) {
    lVar2 = lVar2 + -8;
    param_1[2] = lVar2;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1068872e0; end: 106887373;  */

void FUN_1068872e0(long param_1)

{
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (func_0x00010688ed48(), (bool)in_CY) {
    func_0x00010688ec48();
    func_0x00010688e9d0();
  }
  if (extraout_x9 == 1) {
    uVar1 = 0x100;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar1 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 106887374; end: 1068873f3;  */

undefined1 * FUN_106887374(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010688e300();
  uStack_28 = extraout_x8;
  FUN_1068873f4(auStack_40,1);
  FUN_106887448(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001068874c8();
  func_0x00010688e240(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010015221c();
  func_0x0001068874c8();
  func_0x00010688e3cc();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_10688741c();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1068873f4; end: 10688741b;  */

long FUN_1068873f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10688741c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10688741c; end: 106887447;  */

undefined8 * FUN_10688741c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x222222222222223) {
    puVar1 = (undefined8 *)(param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109456b0;
  func_0x0001068874b0(param_1 + 3);
  return param_1;
}



/* Entry: 106887448; end: 106887487;  */

undefined8 * FUN_106887448(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109456b0;
  func_0x0001068874b0(param_1 + 3);
  return param_1;
}



/* Entry: 106887488; end: 10688748b;  */

void FUN_106887488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109456b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10688748c; end: 10688749f;  */

void FUN_10688748c(void)

{
  func_0x0001068874b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1068874a0; end: 1068874d7;  */

void FUN_1068874a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068874a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1068874d8; end: 10688751f;  */

void FUN_1068874d8(long param_1)

{
  func_0x0001001522cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 106887520; end: 106887523;  */

void FUN_106887520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110945700;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106887524; end: 106887537;  */

void FUN_106887524(void)

{
  func_0x000106887544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106887538; end: 106887553;  */

void FUN_106887538(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    while (plVar3 != (long *)(param_1 + 0x18)) {
      plVar1 = (long *)plVar3[1];
      func_0x00010b568318(plVar3 + 2);
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  return;
}



/* Entry: 106887554; end: 10688757f;  */

void FUN_106887554(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010015385c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010b568318();
    __ZdlPv();
  }
  return;
}



/* Entry: 106887580; end: 106887593;  */

long FUN_106887580(undefined8 *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x9;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar7;
  
  lVar2 = *param_3;
  plVar3 = (long *)param_3[1];
  lVar4 = (long)plVar3 - lVar2;
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar5 = (long *)*unaff_x21;
    lVar6 = param_2 - (long)plVar5;
    if (unaff_x20 == 0) goto code_r0x0001056431d4;
    lVar1 = unaff_x21[1];
    unaff_x21 = plVar5;
  }
  else {
    lVar6 = param_2 - (long)unaff_x21;
    plVar5 = unaff_x21;
    lVar1 = extraout_x9;
    if (unaff_x20 == 0) {
code_r0x0001056431d4:
      return lVar6 + (long)plVar5;
    }
  }
  if (unaff_x21 <= plVar3 && plVar3 < (long *)((long)unaff_x21 + lVar1 + 1)) {
    func_0x0001056433f4();
    func_0x0001056432f4();
    func_0x0001056433ac();
    func_0x000100602e84();
    func_0x000100602e94();
    func_0x000105643378();
    return lVar6;
  }
  func_0x000100602e84();
  lVar6 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar6 < 0) {
    lVar6 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar6) < param_2) goto code_r0x000105643250;
    puVar7 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar7 = param_1;
    if (0x16U - lVar6 < param_2) {
code_r0x000105643250:
      func_0x0001000644b8(param_1,lVar1,(param_2 - lVar1) + lVar6,lVar6,lVar2,0,param_2);
      puVar7 = (undefined8 *)*param_1;
      lVar1 = lVar6;
      goto code_r0x000105643298;
    }
  }
  lVar1 = lVar2;
  if (lVar6 - lVar2 != 0) {
    _memmove((long)puVar7 + lVar2 + param_2,(long)puVar7 + lVar2,lVar6 - lVar2);
    lVar1 = lVar6;
  }
code_r0x000105643298:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar7 + lVar1) = 0;
  if (lVar4 - (long)plVar3 != 0) {
    _memmove((long)puVar7 + lVar2,plVar3,lVar4 - (long)plVar3);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return lVar2 + (long)param_1;
}



/* Entry: 106887594; end: 106887607;  */

void FUN_106887594(long param_1,undefined8 param_2,undefined4 param_3)

{
  func_0x00010688e5fc();
  func_0x000100151d80();
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_106887608();
  return;
}



/* Entry: 106887608; end: 10688762f;  */

long * FUN_106887608(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *******pppppppuVar9;
  code *pcVar10;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  undefined8 ******ppppppuStack_30;
  code *pcStack_28;
  
  plVar8 = param_3;
  FUN_106887630();
  if (param_3 == param_1) {
    return param_1;
  }
  FUN_106887738();
  pcStack_28 = FUN_106887630;
  ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
  func_0x000100153eb4();
  plVar5 = (long *)0x8;
  __Znwm();
  plVar6 = plVar5;
  func_0x00010015b518(&UNK_110945870);
  func_0x000100152f48();
  *plVar6 = (long)&PTR_FUN_110945950;
  plVar6[1] = (long)plVar5;
  plVar7 = unaff_x21 + 5;
  func_0x000100152228();
  unaff_x21[7] = unaff_x21[5];
  uVar1 = *(uint *)(unaff_x21 + 3) & 0x1f0;
  if (uVar1 == 0) {
    func_0x000100153f48();
    puVar2 = &stack0xffffffffffffffe0;
    pppppppuVar9 = (undefined8 *******)ppppppuStack_30;
    pcVar10 = pcStack_28;
code_r0x000106887760:
    *(long **)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = param_3;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar9;
    *(code **)(puVar2 + -8) = pcVar10;
    func_0x00010688e464();
    FUN_106887a8c();
    plVar8 = plVar7;
    if (unaff_x23 == plVar7) {
      func_0x00010688e644();
    }
    while( true ) {
      plVar6 = plVar8;
      if (plVar7 == param_3) {
        return param_3;
      }
      if ((char)*plVar7 != '|') break;
      func_0x00010688eac8();
      FUN_106887a8c();
      plVar8 = plVar6;
      if (unaff_x24 == plVar6) {
        func_0x00010688e644();
      }
      func_0x00010015388c();
      FUN_106887af4();
      plVar7 = plVar6;
    }
    return plVar7;
  }
  if (uVar1 == 0x10) {
    func_0x000100153f48();
    puVar3 = &stack0xffffffffffffffb0;
    pppppppuVar9 = &ppppppuStack_30;
    if (plVar6 == plVar8) {
      return plVar6;
    }
    func_0x00010688e9b4();
    if ((char)*plVar6 == '^') {
      plVar7 = unaff_x20;
      FUN_10688816c();
      plVar6 = (long *)((long)plVar6 + 1);
    }
    if (plVar6 == param_3) {
      return param_3;
    }
    func_0x00010015ae88();
    FUN_10688ad5c();
    if (param_3 == plVar7) {
      return param_3;
    }
    if (((long *)((long)plVar7 + 1) == param_3) && ((char)*plVar7 == '$')) {
      func_0x000106888194(unaff_x20);
      return param_3;
    }
    pcVar10 = FUN_106887860;
    FUN_10688ad94();
  }
  else {
    if ((uVar1 != 0x20) && (uVar1 != 0x40)) {
      if (uVar1 != 0x80) {
        if (uVar1 == 0x100) {
          func_0x000100153f48();
          func_0x00010688ede8();
          func_0x00010688e464();
          func_0x00010688e5bc();
          plVar8 = plVar7;
          if (unaff_x23 == plVar7) {
            func_0x00010688e644();
          }
          else {
            func_0x00010688e64c();
            FUN_106887860();
          }
          while( true ) {
            plVar6 = plVar8;
            if (param_3 != plVar7) {
              plVar7 = (long *)((long)plVar7 + 1);
            }
            if (plVar7 == param_3) break;
            func_0x00010688e778();
            plVar8 = plVar6;
            if (plVar7 == plVar6) {
              func_0x00010688e644();
            }
            else {
              func_0x00010688e64c();
              FUN_106887860();
            }
            func_0x00010015388c();
            FUN_106887af4();
            plVar7 = plVar6;
          }
          return param_3;
        }
        FUN_1068879ec();
        param_3 = plVar5;
        (**(code **)(*plVar5 + 8))();
        func_0x00010688e3cc();
        puVar2 = &stack0xffffffffffffff90;
        pcStack_58 = FUN_106887738;
        ppppppuStack_60 = &ppppppuStack_30;
        func_0x00010688e480();
        plVar7 = param_3;
        __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
        func_0x00010688e210();
        func_0x00010688e2c0();
        func_0x00010688e418();
        unaff_x22 = plVar5;
        pppppppuVar9 = &ppppppuStack_60;
        pcVar10 = FUN_106887760;
        goto code_r0x000106887760;
      }
      func_0x000100153f48();
      puVar4 = &stack0xffffffffffffffe0;
      pppppppuVar9 = (undefined8 *******)ppppppuStack_30;
      pcVar10 = pcStack_28;
      goto code_r0x0001068878d4;
    }
    func_0x000100153f48();
    puVar3 = &stack0xffffffffffffffe0;
    plVar6 = unaff_x21;
    pppppppuVar9 = (undefined8 *******)ppppppuStack_30;
    pcVar10 = pcStack_28;
  }
  puVar4 = puVar3 + -0x40;
  *(long **)(puVar3 + -0x40) = unaff_x24;
  *(long **)(puVar3 + -0x38) = unaff_x23;
  *(long **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = plVar6;
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(long **)(puVar3 + -0x18) = param_3;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar9;
  *(code **)(puVar3 + -8) = pcVar10;
  pppppppuVar9 = (undefined8 *******)(puVar3 + -0x10);
  func_0x00010688e464();
  FUN_10688b354();
  plVar8 = plVar7;
  plVar6 = plVar7;
  if (unaff_x23 != plVar7) {
    while( true ) {
      plVar7 = plVar8;
      plVar8 = param_3;
      if ((plVar6 == param_3) || (plVar8 = plVar6, (char)*plVar6 != '|')) {
        return plVar8;
      }
      func_0x00010688eac8();
      FUN_10688b354();
      if (unaff_x24 == plVar7) break;
      plVar8 = plVar7;
      func_0x00010015388c();
      FUN_106887af4();
      plVar6 = plVar7;
    }
  }
  pcVar10 = FUN_1068878d4;
  FUN_10688ad94();
code_r0x0001068878d4:
  func_0x00010688ede8();
  *(undefined8 ********)(puVar4 + 0x50) = pppppppuVar9;
  *(code **)(puVar4 + 0x58) = pcVar10;
  func_0x00010688e464();
  func_0x00010688e5bc();
  plVar8 = plVar7;
  if (unaff_x23 == plVar7) {
    func_0x00010688e644();
  }
  else {
    func_0x00010688e64c();
    FUN_1068877d8();
  }
  while( true ) {
    plVar6 = plVar8;
    if (param_3 != plVar7) {
      plVar7 = (long *)((long)plVar7 + 1);
    }
    if (plVar7 == param_3) break;
    func_0x00010688e778();
    plVar8 = plVar6;
    if (plVar7 == plVar6) {
      func_0x00010688e644();
    }
    else {
      func_0x00010688e64c();
      FUN_1068877d8();
    }
    func_0x00010015388c();
    FUN_106887af4();
    plVar7 = plVar6;
  }
  return param_3;
}



/* Entry: 106887630; end: 106887737;  */

long * FUN_106887630(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x000100153eb4();
  plVar3 = (long *)0x8;
  __Znwm();
  plVar4 = plVar3;
  func_0x00010015b518(&UNK_110945870);
  func_0x000100152f48();
  *plVar4 = (long)&PTR_FUN_110945950;
  plVar4[1] = (long)plVar3;
  plVar5 = unaff_x21 + 5;
  func_0x000100152228();
  unaff_x21[7] = unaff_x21[5];
  uVar1 = *(uint *)(unaff_x21 + 3) & 0x1f0;
  if (uVar1 == 0) {
    func_0x000100153f48();
code_r0x000106887760:
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010688e464();
    FUN_106887a8c();
    plVar4 = plVar5;
    if (unaff_x23 == plVar5) {
      func_0x00010688e644();
    }
    while( true ) {
      plVar3 = plVar4;
      if (plVar5 == unaff_x19) {
        return unaff_x19;
      }
      if ((char)*plVar5 != '|') break;
      func_0x00010688eac8();
      FUN_106887a8c();
      plVar4 = plVar3;
      if (unaff_x24 == plVar3) {
        func_0x00010688e644();
      }
      func_0x00010015388c();
      FUN_106887af4();
      plVar5 = plVar3;
    }
    return plVar5;
  }
  if (uVar1 == 0x10) {
    func_0x000100153f48();
    puVar2 = &stack0xffffffffffffffd0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    if (plVar4 == param_3) {
      return plVar4;
    }
    func_0x00010688e9b4();
    if ((char)*plVar4 == '^') {
      plVar5 = unaff_x20;
      FUN_10688816c();
      plVar4 = (long *)((long)plVar4 + 1);
    }
    if (plVar4 == unaff_x19) {
      return unaff_x19;
    }
    func_0x00010015ae88();
    FUN_10688ad5c();
    if (unaff_x19 == plVar5) {
      return unaff_x19;
    }
    if (((long *)((long)plVar5 + 1) == unaff_x19) && ((char)*plVar5 == '$')) {
      func_0x000106888194(unaff_x20);
      return unaff_x19;
    }
    unaff_x30 = FUN_106887860;
    FUN_10688ad94();
  }
  else {
    if ((uVar1 != 0x20) && (uVar1 != 0x40)) {
      if (uVar1 != 0x80) {
        if (uVar1 == 0x100) {
          func_0x000100153f48();
          func_0x00010688ede8();
          func_0x00010688e464();
          func_0x00010688e5bc();
          plVar4 = plVar5;
          if (unaff_x23 == plVar5) {
            func_0x00010688e644();
          }
          else {
            func_0x00010688e64c();
            FUN_106887860();
          }
          while( true ) {
            plVar3 = plVar4;
            if (unaff_x19 != plVar5) {
              plVar5 = (long *)((long)plVar5 + 1);
            }
            if (plVar5 == unaff_x19) break;
            func_0x00010688e778();
            plVar4 = plVar3;
            if (plVar5 == plVar3) {
              func_0x00010688e644();
            }
            else {
              func_0x00010688e64c();
              FUN_106887860();
            }
            func_0x00010015388c();
            FUN_106887af4();
            plVar5 = plVar3;
          }
          return unaff_x19;
        }
        FUN_1068879ec();
        unaff_x19 = plVar3;
        (**(code **)(*plVar3 + 8))();
        func_0x00010688e3cc();
        pcStack_38 = FUN_106887738;
        unaff_x29 = &puStack_40;
        puStack_40 = &stack0xfffffffffffffff0;
        func_0x00010688e480();
        plVar5 = unaff_x19;
        __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
        func_0x00010688e210();
        func_0x00010688e2c0();
        unaff_x30 = FUN_106887760;
        func_0x00010688e418();
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        unaff_x22 = plVar3;
        goto code_r0x000106887760;
      }
      func_0x000100153f48();
      goto code_r0x0001068878d4;
    }
    func_0x000100153f48();
    puVar2 = (undefined1 *)register0x00000008;
    plVar4 = unaff_x21;
  }
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x40);
  *(long **)(puVar2 + -0x40) = unaff_x24;
  *(long **)(puVar2 + -0x38) = unaff_x23;
  *(long **)(puVar2 + -0x30) = unaff_x22;
  *(long **)(puVar2 + -0x28) = plVar4;
  *(long **)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = unaff_x29;
  *(code **)(puVar2 + -8) = unaff_x30;
  unaff_x29 = (undefined1 **)(puVar2 + -0x10);
  func_0x00010688e464();
  FUN_10688b354();
  plVar4 = plVar5;
  plVar3 = plVar5;
  if (unaff_x23 != plVar5) {
    while( true ) {
      plVar5 = plVar4;
      plVar4 = unaff_x19;
      if ((plVar3 == unaff_x19) || (plVar4 = plVar3, (char)*plVar3 != '|')) {
        return plVar4;
      }
      func_0x00010688eac8();
      FUN_10688b354();
      if (unaff_x24 == plVar5) break;
      plVar4 = plVar5;
      func_0x00010015388c();
      FUN_106887af4();
      plVar3 = plVar5;
    }
  }
  unaff_x30 = FUN_1068878d4;
  FUN_10688ad94();
code_r0x0001068878d4:
  func_0x00010688ede8();
  *(undefined1 ***)((long)register0x00000008 + 0x50) = unaff_x29;
  *(code **)((long)register0x00000008 + 0x58) = unaff_x30;
  func_0x00010688e464();
  func_0x00010688e5bc();
  plVar4 = plVar5;
  if (unaff_x23 == plVar5) {
    func_0x00010688e644();
  }
  else {
    func_0x00010688e64c();
    FUN_1068877d8();
  }
  while( true ) {
    plVar3 = plVar4;
    if (unaff_x19 != plVar5) {
      plVar5 = (long *)((long)plVar5 + 1);
    }
    if (plVar5 == unaff_x19) break;
    func_0x00010688e778();
    plVar4 = plVar3;
    if (plVar5 == plVar3) {
      func_0x00010688e644();
    }
    else {
      func_0x00010688e64c();
      FUN_1068877d8();
    }
    func_0x00010015388c();
    FUN_106887af4();
    plVar5 = plVar3;
  }
  return unaff_x19;
}



/* Entry: 106887738; end: 10688775f;  */

char * FUN_106887738(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *unaff_x23;
  char *unaff_x24;
  
  func_0x00010688e480();
  pcVar1 = param_1;
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e464();
  FUN_106887a8c();
  pcVar2 = pcVar1;
  if (unaff_x23 == pcVar1) {
    func_0x00010688e644();
  }
  while ((pcVar3 = pcVar2, pcVar2 = param_1, pcVar1 != param_1 && (pcVar2 = pcVar1, *pcVar1 == '|'))
        ) {
    func_0x00010688eac8();
    FUN_106887a8c();
    pcVar2 = pcVar3;
    if (unaff_x24 == pcVar3) {
      func_0x00010688e644();
    }
    func_0x00010015388c();
    FUN_106887af4();
    pcVar1 = pcVar3;
  }
  return pcVar2;
}



/* Entry: 106887760; end: 1068877d7;  */

char * FUN_106887760(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_x19;
  char *unaff_x23;
  char *unaff_x24;
  
  func_0x00010688e464();
  FUN_106887a8c();
  pcVar1 = param_1;
  if (unaff_x23 == param_1) {
    func_0x00010688e644();
  }
  while ((pcVar2 = pcVar1, pcVar1 = unaff_x19, param_1 != unaff_x19 &&
         (pcVar1 = param_1, *param_1 == '|'))) {
    func_0x00010688eac8();
    FUN_106887a8c();
    pcVar1 = pcVar2;
    if (unaff_x24 == pcVar2) {
      func_0x00010688e644();
    }
    func_0x00010015388c();
    FUN_106887af4();
    param_1 = pcVar2;
  }
  return pcVar1;
}



/* Entry: 1068877d8; end: 10688785f;  */

char * FUN_1068877d8(char *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *unaff_x19;
  char *unaff_x20;
  char *unaff_x23;
  char *unaff_x24;
  
  if (param_2 != param_3) {
    func_0x00010688e9b4();
    if (*param_2 == '^') {
      FUN_10688816c();
      param_2 = param_2 + 1;
      param_1 = unaff_x20;
    }
    bVar1 = param_2 != unaff_x19;
    param_2 = unaff_x19;
    if (bVar1) {
      func_0x00010015ae88();
      FUN_10688ad5c();
      if (unaff_x19 != param_1) {
        if ((param_1 + 1 != unaff_x19) || (*param_1 != '$')) {
          FUN_10688ad94();
          func_0x00010688e464();
          FUN_10688b354();
          pcVar2 = param_1;
          pcVar3 = param_1;
          if (unaff_x23 != param_1) {
            while( true ) {
              param_1 = pcVar2;
              pcVar2 = unaff_x19;
              if ((pcVar3 == unaff_x19) || (pcVar2 = pcVar3, *pcVar3 != '|')) {
                return pcVar2;
              }
              func_0x00010688eac8();
              FUN_10688b354();
              if (unaff_x24 == param_1) break;
              pcVar2 = param_1;
              func_0x00010015388c();
              FUN_106887af4();
              pcVar3 = param_1;
            }
          }
          FUN_10688ad94();
          func_0x00010688ede8();
          func_0x00010688e464();
          func_0x00010688e5bc();
          pcVar2 = param_1;
          if (unaff_x23 == param_1) {
            func_0x00010688e644();
          }
          else {
            func_0x00010688e64c();
            FUN_1068877d8();
          }
          while( true ) {
            pcVar3 = pcVar2;
            if (unaff_x19 != param_1) {
              param_1 = param_1 + 1;
            }
            if (param_1 == unaff_x19) break;
            func_0x00010688e778();
            pcVar2 = pcVar3;
            if (param_1 == pcVar3) {
              func_0x00010688e644();
            }
            else {
              func_0x00010688e64c();
              FUN_1068877d8();
            }
            func_0x00010015388c();
            FUN_106887af4();
            param_1 = pcVar3;
          }
          return unaff_x19;
        }
        func_0x000106888194();
      }
    }
  }
  return param_2;
}



/* Entry: 106887860; end: 1068878d3;  */

char * FUN_106887860(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_x19;
  char *unaff_x23;
  char *unaff_x24;
  
  func_0x00010688e464();
  FUN_10688b354();
  pcVar1 = param_1;
  pcVar2 = param_1;
  if (unaff_x23 != param_1) {
    while( true ) {
      param_1 = pcVar1;
      pcVar1 = unaff_x19;
      if ((pcVar2 == unaff_x19) || (pcVar1 = pcVar2, *pcVar2 != '|')) {
        return pcVar1;
      }
      func_0x00010688eac8();
      FUN_10688b354();
      if (unaff_x24 == param_1) break;
      pcVar1 = param_1;
      func_0x00010015388c();
      FUN_106887af4();
      pcVar2 = param_1;
    }
  }
  FUN_10688ad94();
  func_0x00010688ede8();
  func_0x00010688e464();
  func_0x00010688e5bc();
  pcVar1 = param_1;
  if (unaff_x23 == param_1) {
    func_0x00010688e644();
  }
  else {
    func_0x00010688e64c();
    FUN_1068877d8();
  }
  while( true ) {
    pcVar2 = pcVar1;
    if (unaff_x19 != param_1) {
      param_1 = param_1 + 1;
    }
    if (param_1 == unaff_x19) break;
    func_0x00010688e778();
    pcVar1 = pcVar2;
    if (param_1 == pcVar2) {
      func_0x00010688e644();
    }
    else {
      func_0x00010688e64c();
      FUN_1068877d8();
    }
    func_0x00010015388c();
    FUN_106887af4();
    param_1 = pcVar2;
  }
  return unaff_x19;
}



/* Entry: 1068878d4; end: 1068879eb;  */

void FUN_1068878d4(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x23;
  
  func_0x00010688ede8();
  func_0x00010688e464();
  func_0x00010688e5bc();
  lVar1 = param_1;
  if (unaff_x23 == param_1) {
    func_0x00010688e644();
  }
  else {
    func_0x00010688e64c();
    FUN_1068877d8();
  }
  while( true ) {
    lVar2 = lVar1;
    if (unaff_x19 != param_1) {
      param_1 = param_1 + 1;
    }
    if (param_1 == unaff_x19) break;
    func_0x00010688e778();
    lVar1 = lVar2;
    if (param_1 == lVar2) {
      func_0x00010688e644();
    }
    else {
      func_0x00010688e64c();
      FUN_1068877d8();
    }
    func_0x00010015388c();
    FUN_106887af4();
    param_1 = lVar2;
  }
  return;
}



/* Entry: 1068879ec; end: 106887a13;  */

void FUN_1068879ec(void)

{
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  return;
}



/* Entry: 106887a14; end: 106887a23;  */

void FUN_106887a14(void)

{
  return;
}



/* Entry: 106887a24; end: 106887a37;  */

void FUN_106887a24(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106887a38; end: 106887a6f;  */

long FUN_106887a38(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110945918);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106887a70; end: 106887a77;  */

long FUN_106887a70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106887a78; end: 106887a8b;  */

void FUN_106887a78(void)

{
  func_0x00010015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106887a8c; end: 106887ac3;  */

long FUN_106887a8c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010688e9b4();
  do {
    lVar1 = param_2;
    func_0x00010688e948();
    FUN_106887b80();
    param_2 = param_1;
  } while (lVar1 != param_1);
  return lVar1;
}



/* Entry: 106887ac4; end: 106887af3;  */

void FUN_106887ac4(long param_1)

{
  func_0x000100152f48();
  func_0x0001001534ac(*(undefined8 *)(param_1 + 0x38));
  func_0x00010015312c();
  return;
}



/* Entry: 106887af4; end: 106887b7f;  */

void FUN_106887af4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x21;
  
  func_0x000100153eb4();
  func_0x0001001534a4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[1] = *(undefined8 *)(unaff_x20 + 8);
  param_1[2] = uVar1;
  *param_1 = &PTR_DAT_110945ec0;
  *(undefined8 **)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x19 + 8) = 0;
  func_0x000100152f48();
  lVar2 = *(long *)(unaff_x21 + 0x38);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  *param_1 = &PTR_FUN_110945950;
  param_1[1] = uVar1;
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000100152f48();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110945f08;
  param_1[1] = uVar1;
  *(undefined8 **)(lVar2 + 8) = param_1;
  *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x19 + 8);
  return;
}



/* Entry: 106887b80; end: 106887be3;  */

void FUN_106887b80(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_106887be4();
  if ((param_2 == lVar1) && (FUN_106887d7c(param_1,param_2,param_3), param_2 != param_1)) {
    func_0x00010688e904(param_2);
    FUN_106887efc();
  }
  return;
}



/* Entry: 106887be4; end: 106887d7b;  */

char * FUN_106887be4(long param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *unaff_x19;
  char acStack_70 [24];
  undefined4 uStack_58;
  
  pcVar4 = acStack_70;
  pcVar5 = acStack_70;
  func_0x00010688e580();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  cVar1 = *unaff_x19;
  if (cVar1 == '$') {
    func_0x000106888194(param_1);
  }
  else {
    if (cVar1 == '(') {
      if (unaff_x19 + 1 == param_3) {
        return unaff_x19;
      }
      if (unaff_x19[1] != '?' || unaff_x19 + 2 == param_3) {
        return unaff_x19;
      }
      cVar1 = unaff_x19[2];
      uVar3 = cVar1 == '!';
      if ((bool)uVar3) {
        FUN_1068884d0();
        uStack_58 = *(undefined4 *)(param_1 + 0x18);
        func_0x00010688e818();
        func_0x00010688ed28();
        FUN_1068881f4();
        func_0x00010688edb4();
        if (((bool)uVar3) || (*pcVar5 != ')')) {
          FUN_106888248();
          goto LAB_106887d60;
        }
      }
      else {
        uVar3 = cVar1 == '=';
        if (!(bool)uVar3) {
          return unaff_x19;
        }
        FUN_1068884d0();
        uStack_58 = *(undefined4 *)(param_1 + 0x18);
        func_0x00010688e818();
        func_0x00010688ed28();
        FUN_1068881f4();
        func_0x00010688edb4();
        if (((bool)uVar3) || (pcVar5 = pcVar4, *pcVar4 != ')')) {
          FUN_106888248();
LAB_106887d60:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x106887d64);
          (*pcVar2)();
        }
      }
      func_0x00010015b424(acStack_70);
      return pcVar5 + 1;
    }
    if (cVar1 == '\\') {
      if (unaff_x19 + 1 == param_3) {
        return unaff_x19;
      }
      cVar1 = unaff_x19[1];
      if (cVar1 == 'B') {
        uVar6 = 1;
      }
      else {
        if (cVar1 != 'b') {
          return unaff_x19;
        }
        uVar6 = 0;
      }
      FUN_1068881bc(param_1,uVar6);
      return unaff_x19 + 2;
    }
    if (cVar1 != '^') {
      return unaff_x19;
    }
    FUN_10688816c(param_1);
  }
  return unaff_x19 + 1;
}



/* Entry: 106887d7c; end: 106887efb;  */

byte * FUN_106887d7c(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  long unaff_x21;
  byte *pbVar8;
  int iVar9;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar2 = *param_2;
  if (bVar2 == 0x28) {
    pbVar4 = param_2 + 1;
    pbVar8 = param_1;
    pbVar6 = param_3;
    if (pbVar4 != param_3) {
      if (((param_2 + 2 == param_3) || (*pbVar4 != 0x3f)) || (param_2[2] != 0x3a)) {
        func_0x0001001527ac(param_1);
        uVar1 = *(undefined4 *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        FUN_106887760();
        param_2 = pbVar4;
        if ((param_3 != pbVar8) && (*pbVar8 == 0x29)) {
          func_0x0001001530e4(param_1,uVar1);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          return pbVar8 + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        param_2 = param_2 + 3;
        FUN_106887760();
        if ((param_3 != pbVar8) && (*pbVar8 == 0x29)) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          return pbVar8 + 1;
        }
      }
    }
  }
  else {
    if (bVar2 == 0x2e) {
      FUN_1068887d0(param_1);
      return param_2 + 1;
    }
    uVar7 = (uint)bVar2;
    if (uVar7 == 0x5b) {
      func_0x0001001549d4();
      func_0x00010688888c();
      return param_1;
    }
    if (uVar7 == 0x5c) {
      func_0x0001001549d4();
      FUN_106888800();
      return param_1;
    }
    if (((1 < uVar7 - 0x2a) && (uVar7 != 0x3f)) && (bVar2 != 0x7b)) {
      func_0x0001001549d4();
      FUN_1068889a0();
      return param_1;
    }
    FUN_106888978();
    pbVar8 = param_1;
    pbVar6 = param_3;
  }
  FUN_106888248();
  func_0x00010688ede8();
  if (param_2 == pbVar6) {
    return param_2;
  }
  uVar7 = *(uint *)(pbVar8 + 0x18) & 0x1f0;
  bVar2 = *param_2;
  if (bVar2 != 0x7b) {
    if (bVar2 == 0x2b) {
      pbVar4 = param_2 + 1;
      bVar3 = uVar7 != 0 || pbVar4 == pbVar6;
      if ((bVar3) || (func_0x00010688eabc(), !bVar3)) {
        lVar5 = 1;
LAB_106888064:
        func_0x000100152f28(pbVar8,lVar5,param_4,param_5,param_6);
        return pbVar4;
      }
      param_2 = param_2 + 2;
      lVar5 = 1;
LAB_106887fac:
      func_0x00010688abec(pbVar8,lVar5,param_4,param_5,param_6);
      return param_2;
    }
    if (bVar2 != 0x3f) {
      if (bVar2 != 0x2a) {
        return param_2;
      }
      pbVar4 = param_2 + 1;
      if (((uVar7 != 0) || (bVar3 = pbVar4 == pbVar6, bVar3)) || (func_0x00010688eabc(), !bVar3)) {
        lVar5 = 0;
        goto LAB_106888064;
      }
      param_2 = param_2 + 2;
      lVar5 = 0;
      goto LAB_106887fac;
    }
    pbVar8 = param_2 + 1;
    if (((uVar7 != 0) || (bVar3 = pbVar8 == pbVar6, bVar3)) || (func_0x00010688eabc(), !bVar3)) {
      func_0x00010688e4e4();
      goto LAB_1068880dc;
    }
    func_0x00010688e4e4();
LAB_106888044:
    pbVar8 = param_2 + 2;
LAB_1068880dc:
    func_0x000100152f50();
    return pbVar8;
  }
  pbVar4 = param_2 + 1;
  param_2 = pbVar8;
  func_0x00010688e8e4();
  if (pbVar4 != param_2) {
    if (pbVar6 == param_2) goto LAB_106888168;
    if (*param_2 == 0x2c) {
      pbVar4 = param_2 + 1;
      if (pbVar4 != pbVar6) {
        iVar9 = (int)((ulong)unaff_x21 >> 0x20);
        if (*pbVar4 == 0x7d) {
          pbVar4 = param_2 + 2;
          if (((uVar7 != 0) || (bVar3 = pbVar4 == pbVar6, bVar3)) || (func_0x00010688eabc(), !bVar3)
             ) {
            lVar5 = (long)iVar9;
            goto LAB_106888064;
          }
          param_2 = param_2 + 3;
          lVar5 = (long)iVar9;
          goto LAB_106887fac;
        }
        func_0x00010688e8e4();
        if (((pbVar4 == param_2) || (pbVar6 == param_2)) || (*param_2 != 0x7d)) goto LAB_106888168;
        if (unaff_x21 < 0) {
          pbVar8 = param_2 + 1;
          if (((uVar7 == 0) && (pbVar8 != pbVar6)) && (param_2[1] == 0x3f)) {
            pbVar8 = param_2 + 2;
          }
          func_0x00010688e4e4();
          goto LAB_1068880dc;
        }
      }
    }
    else if (*param_2 == 0x7d) {
      pbVar8 = param_2 + 1;
      if (((uVar7 != 0) || (bVar3 = pbVar8 == pbVar6, bVar3)) || (func_0x00010688eabc(), !bVar3)) {
        func_0x00010688e4e4();
        goto LAB_1068880dc;
      }
      func_0x00010688e4e4();
      goto LAB_106888044;
    }
  }
  FUN_10688ac98();
LAB_106888168:
  FUN_10688acc0();
  func_0x0001001527a0();
  func_0x00010688e7c8();
  func_0x00010688ea2c();
  return param_2;
}



/* Entry: 106887efc; end: 10688816b;  */

char * FUN_106887efc(char *param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  int in_stack_0000000c;
  
  func_0x00010688ede8();
  if (param_2 == param_3) {
    return param_2;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  cVar2 = *param_2;
  if (cVar2 != '{') {
    if (cVar2 == '+') {
      pcVar5 = param_2 + 1;
      bVar3 = uVar1 != 0 || pcVar5 == param_3;
      if ((bVar3) || (func_0x00010688eabc(), !bVar3)) {
        lVar4 = 1;
LAB_106888064:
        func_0x000100152f28(param_1,lVar4,param_4,param_5,param_6);
        return pcVar5;
      }
      param_2 = param_2 + 2;
      lVar4 = 1;
LAB_106887fac:
      func_0x00010688abec(param_1,lVar4,param_4,param_5,param_6);
      return param_2;
    }
    if (cVar2 != '?') {
      if (cVar2 != '*') {
        return param_2;
      }
      pcVar5 = param_2 + 1;
      if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (func_0x00010688eabc(), !bVar3)) {
        lVar4 = 0;
        goto LAB_106888064;
      }
      param_2 = param_2 + 2;
      lVar4 = 0;
      goto LAB_106887fac;
    }
    pcVar5 = param_2 + 1;
    if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (func_0x00010688eabc(), !bVar3)) {
      func_0x00010688e4e4();
      goto LAB_1068880dc;
    }
    func_0x00010688e4e4();
LAB_106888044:
    pcVar5 = param_2 + 2;
LAB_1068880dc:
    func_0x000100152f50();
    return pcVar5;
  }
  pcVar5 = param_2 + 1;
  param_2 = param_1;
  func_0x00010688e8e4();
  if (pcVar5 != param_2) {
    if (param_3 == param_2) goto LAB_106888168;
    if (*param_2 == ',') {
      pcVar5 = param_2 + 1;
      if (pcVar5 != param_3) {
        if (*pcVar5 == '}') {
          pcVar5 = param_2 + 2;
          if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) ||
             (func_0x00010688eabc(), !bVar3)) {
            lVar4 = (long)in_stack_0000000c;
            goto LAB_106888064;
          }
          param_2 = param_2 + 3;
          lVar4 = (long)in_stack_0000000c;
          goto LAB_106887fac;
        }
        func_0x00010688e8e4();
        if (((pcVar5 == param_2) || (param_3 == param_2)) || (*param_2 != '}')) goto LAB_106888168;
        if (in_stack_0000000c < 0) {
          pcVar5 = param_2 + 1;
          if (((uVar1 == 0) && (pcVar5 != param_3)) && (param_2[1] == '?')) {
            pcVar5 = param_2 + 2;
          }
          func_0x00010688e4e4();
          goto LAB_1068880dc;
        }
      }
    }
    else if (*param_2 == '}') {
      pcVar5 = param_2 + 1;
      if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (func_0x00010688eabc(), !bVar3)) {
        func_0x00010688e4e4();
        goto LAB_1068880dc;
      }
      func_0x00010688e4e4();
      goto LAB_106888044;
    }
  }
  FUN_10688ac98();
LAB_106888168:
  FUN_10688acc0();
  func_0x0001001527a0();
  func_0x00010688e7c8();
  func_0x00010688ea2c();
  return param_2;
}



/* Entry: 10688816c; end: 1068881bb;  */

void FUN_10688816c(void)

{
  func_0x0001001527a0();
  func_0x00010688e7c8();
  func_0x00010688ea2c();
  return;
}



/* Entry: 1068881bc; end: 1068881f3;  */

void FUN_1068881bc(void)

{
  func_0x000100152a24();
  func_0x00010688e56c();
  func_0x00010688e448();
  func_0x00010688e9f0();
  FUN_106888354();
  func_0x000100152c40();
  return;
}



/* Entry: 1068881f4; end: 106888247;  */

void FUN_1068881f4(void)

{
  __Znwm(0x58);
  func_0x00010688e448();
  FUN_1068884f4();
  func_0x000100152c40();
  return;
}



/* Entry: 106888248; end: 10688826f;  */

long FUN_106888248(long param_1)

{
  long lVar1;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106888270; end: 106888273;  */

long FUN_106888270(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106888274; end: 106888287;  */

void FUN_106888274(void)

{
  func_0x00010015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106888288; end: 1068882ef;  */

void FUN_106888288(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x17) == '\x01') {
    if ((*(long *)(param_2 + 4) == *(long *)(param_2 + 2)) && ((*(byte *)(param_2 + 0x16) & 1) == 0)
       ) {
LAB_1068882cc:
      *param_2 = 0xfffffc1e;
      uVar1 = *(undefined8 *)(param_1 + 8);
      goto LAB_1068882e8;
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (*(char *)(*(long *)(param_2 + 4) + -1) == '\r' ||
           *(char *)(*(long *)(param_2 + 4) + -1) == '\n')) goto LAB_1068882cc;
  uVar1 = 0;
  *param_2 = 0xfffffc1f;
LAB_1068882e8:
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}



/* Entry: 1068882f0; end: 106888303;  */

void FUN_1068882f0(void)

{
  func_0x00010015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106888304; end: 106888353;  */

void FUN_106888304(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(char **)(param_2 + 4) == *(char **)(param_2 + 6)) &&
      ((*(byte *)(param_2 + 0x16) >> 1 & 1) == 0)) ||
     ((*(char *)(param_1 + 0x10) == '\x01' &&
      (cVar1 = **(char **)(param_2 + 4), cVar1 == '\r' || cVar1 == '\n')))) {
    *param_2 = 0xfffffc1e;
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar2 = 0;
    *param_2 = 0xfffffc1f;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar2;
  return;
}



/* Entry: 106888354; end: 10688837f;  */

void FUN_106888354(void)

{
  undefined1 unaff_w19;
  long unaff_x20;
  
  func_0x00010688ed70();
  func_0x00010688e40c(&UNK_110945a78);
  *(undefined1 *)(unaff_x20 + 0x28) = unaff_w19;
  return;
}



/* Entry: 106888380; end: 106888383;  */

long FUN_106888380(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945a78);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106888384; end: 106888397;  */

void FUN_106888384(void)

{
  FUN_1068884a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106888398; end: 1068884a7;  */

void FUN_106888398(long param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(byte **)(param_2 + 2) != *(byte **)(param_2 + 6)) {
    pbVar5 = *(byte **)(param_2 + 4);
    if (pbVar5 == *(byte **)(param_2 + 6)) {
      if ((*(byte *)(param_2 + 0x16) >> 3 & 1) == 0) {
        bVar1 = pbVar5[-1];
LAB_106888410:
        if (((ulong)bVar1 == 0x5f) ||
           ((-1 < (char)bVar1 &&
            ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)bVar1 * 4) & 0x500) !=
             0)))) {
          bVar3 = true;
          goto LAB_106888480;
        }
      }
    }
    else {
      if ((pbVar5 != *(byte **)(param_2 + 2)) || (((uint)param_2[0x16] >> 7 & 1) != 0)) {
        bVar2 = pbVar5[-1];
        bVar1 = *pbVar5;
        if (((ulong)bVar2 == 0x5f) ||
           ((-1 < (char)bVar2 &&
            ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)bVar2 * 4) & 0x500) !=
             0)))) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
        if ((bVar1 == 0x5f) ||
           ((-1 < (char)bVar1 &&
            ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)bVar1 * 4) & 0x500) !=
             0)))) {
          iVar4 = 1;
        }
        else {
          iVar4 = 0;
        }
        bVar3 = iVar7 != iVar4;
        goto LAB_106888480;
      }
      if (((uint)param_2[0x16] >> 2 & 1) == 0) {
        bVar1 = *pbVar5;
        goto LAB_106888410;
      }
    }
  }
  bVar3 = false;
LAB_106888480:
  if ((bool)*(char *)(param_1 + 0x28) == bVar3) {
    uVar6 = 0;
    uVar8 = 0xfffffc1f;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar8 = 0xfffffc1e;
  }
  *param_2 = uVar8;
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  return;
}



/* Entry: 1068884a8; end: 1068884cf;  */

long FUN_1068884a8(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945a78);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 1068884d0; end: 1068884f3;  */

void FUN_1068884d0(long param_1)

{
  func_0x000100151d80();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1068884f4; end: 106888537;  */

undefined8 *
FUN_1068884f4(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined4 param_5)

{
  *param_1 = &PTR_FUN_110945ad0;
  param_1[1] = param_4;
  FUN_106888648(param_1 + 2);
  *(undefined4 *)(param_1 + 10) = param_5;
  *(undefined1 *)((long)param_1 + 0x54) = param_3;
  return param_1;
}



/* Entry: 106888538; end: 10688853b;  */

undefined8 * FUN_106888538(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110945ad0;
  func_0x00010015b424(param_1 + 2);
  puVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (puVar1[1] != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688853c; end: 10688854f;  */

void FUN_10688853c(void)

{
  func_0x000106888698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106888550; end: 106888647;  */

void FUN_106888550(long param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uVar7;
  long lStack_90;
  long lStack_88;
  
  func_0x000100153c68();
  func_0x0001001534f4();
  func_0x0001001536a8(&lStack_90,*(int *)(param_1 + 0x2c) + 1,*(undefined8 *)(param_2 + 0x10),
                      *(undefined8 *)(param_2 + 0x18),0);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 4) == *(long *)(unaff_x20 + 2)) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x17);
  }
  lVar5 = unaff_x19 + 0x10;
  func_0x000100153a0c(lVar5,*(long *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),&lStack_90,
                      unaff_x20[0x16] & 0xfff | 0x40,uVar1);
  if ((uint)*(byte *)(unaff_x19 + 0x54) == (uint)lVar5) {
    *unaff_x20 = 0xfffffc1f;
    *(undefined8 *)(unaff_x20 + 0x14) = 0;
  }
  else {
    uVar3 = 0;
    *unaff_x20 = 0xfffffc1e;
    *(undefined8 *)(unaff_x20 + 0x14) = *(undefined8 *)(unaff_x19 + 8);
    lVar5 = *(long *)(unaff_x20 + 8);
    while( true ) {
      iVar2 = (int)uVar3;
      uVar3 = (ulong)(iVar2 + 1);
      if ((ulong)((lStack_88 - lStack_90) / 0x18) <= uVar3) break;
      puVar6 = (undefined8 *)(lStack_90 + uVar3 * 0x18);
      puVar4 = (undefined8 *)(lVar5 + (ulong)(uint)(iVar2 + *(int *)(unaff_x19 + 0x50)) * 0x18);
      uVar7 = *puVar6;
      puVar4[1] = puVar6[1];
      *puVar4 = uVar7;
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar6 + 2);
    }
  }
  func_0x000100154104(&lStack_90);
  return;
}


