/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024777cc; end: 10247783f;  */

void FUN_1024777cc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102477840; end: 10247784b;  */

void FUN_102477840(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102477c68,param_1);
  return;
}



/* Entry: 10247784c; end: 10247788b;  */

void FUN_10247784c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102477c80,0);
  return;
}



/* Entry: 10247788c; end: 102477897;  */

void FUN_10247788c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102477c6c,param_1);
  return;
}



/* Entry: 102477898; end: 102477923;  */

void FUN_102477898(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102477c84,0);
  return;
}



/* Entry: 102477924; end: 10247792f;  */

void FUN_102477924(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102477c70,param_1);
  return;
}



/* Entry: 102477930; end: 102477987;  */

void FUN_102477930(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102477988; end: 10247798f;  */

undefined8 FUN_102477988(void)

{
  return 0x1b;
}



/* Entry: 102477990; end: 102477b07;  */

void FUN_102477990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050e2b8;
  func_0x000107c613fc(&UNK_11050e2b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102477b08,puVar1);
  return;
}



/* Entry: 102477b08; end: 102477b0f;  */

void FUN_102477b08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e9ce58,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9ce58,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11050e490;
  func_0x000107c613fc(&UNK_11050e490,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102477c5c;
  func_0x00010058fa64(0x102477c5c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102477b10; end: 102477b6b;  */

void FUN_102477b10(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9ce58,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9ce58,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102477b6c; end: 102477c87;  */

undefined ** FUN_102477b6c(void)

{
  return &PTR_DAT_1130665c8;
}



/* Entry: 102477c88; end: 102477ccf; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477c88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cee0;
  func_0x000107c61428(param_1 + _DAT_112e9cee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102477cd0; end: 102477d27; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cee0;
  func_0x000107c61428(param_1 + _DAT_112e9cee0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102477d28; end: 102477d6f; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint memoriesQuickCutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477d28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cee8;
  func_0x000107c61428(param_1 + _DAT_112e9cee8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102477d70; end: 102477d7b; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setMemoriesQuickCutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cee8;
  func_0x000107c61428(param_1 + _DAT_112e9cee8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102477d7c; end: 102477dc3; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint sCCaaSCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477d7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cef0;
  func_0x000107c61428(param_1 + _DAT_112e9cef0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102477dc4; end: 102477dcf; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setSCCaaSCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cef0;
  func_0x000107c61428(param_1 + _DAT_112e9cef0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102477dd0; end: 102477e17; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint sCDirectorModeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477dd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cef8;
  func_0x000107c61428(param_1 + _DAT_112e9cef8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102477e18; end: 102477e23; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setSCDirectorModeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cef8;
  func_0x000107c61428(param_1 + _DAT_112e9cef8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102477e24; end: 102477e6b; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint sCMemoriesPickerV2ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477e24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cf00;
  func_0x000107c61428(param_1 + _DAT_112e9cf00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102477e6c; end: 102477e77; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setSCMemoriesPickerV2ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cf00;
  func_0x000107c61428(param_1 + _DAT_112e9cf00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102477e78; end: 102477ebf; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint sCSnapEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477e78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cf08;
  func_0x000107c61428(param_1 + _DAT_112e9cf08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102477ec0; end: 102477ecb; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setSCSnapEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cf08;
  func_0x000107c61428(param_1 + _DAT_112e9cf08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102477ecc; end: 102477f13; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint creatorsSpotlightSubmissionV2ScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477ecc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cf10;
  func_0x000107c61428(param_1 + _DAT_112e9cf10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102477f14; end: 102477f1f; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setCreatorsSpotlightSubmissionV2ScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cf10;
  func_0x000107c61428(param_1 + _DAT_112e9cf10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102477f20; end: 102477f7f;  */

void FUN_102477f20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102477f80; end: 10247836f;  */

/* WARNING: Possible PIC construction at 0x0001024781f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024782e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024782c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024782b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024782c8) */
/* WARNING: Removing unreachable block (ram,0x0001024782e8) */
/* WARNING: Removing unreachable block (ram,0x000102478318) */
/* WARNING: Removing unreachable block (ram,0x000102478308) */
/* WARNING: Removing unreachable block (ram,0x000102478348) */
/* WARNING: Removing unreachable block (ram,0x000102478338) */
/* WARNING: Removing unreachable block (ram,0x000102478328) */
/* WARNING: Removing unreachable block (ram,0x000102478274) */
/* WARNING: Removing unreachable block (ram,0x000102478264) */
/* WARNING: Removing unreachable block (ram,0x000102478254) */
/* WARNING: Removing unreachable block (ram,0x000102478244) */
/* WARNING: Removing unreachable block (ram,0x00010247821c) */
/* WARNING: Removing unreachable block (ram,0x00010247820c) */
/* WARNING: Removing unreachable block (ram,0x0001024781fc) */
/* WARNING: Removing unreachable block (ram,0x0001024782b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477f80(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4cc50();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50b04();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50d1c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5104c();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c512e4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            func_0x000107c40d54();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1024770c0();
              lVar4 = lVar6;
              func_0x000107c610f8();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              lVar5 = lVar3;
              FUN_102477338();
              if (lVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102478370);
                (*pcVar2)();
              }
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uStack_68);
              *(long *)(lVar4 + _DAT_112e9cde8) = lVar5;
              *(long *)(lVar4 + _DAT_112e9cdf0) = unaff_x20;
              lStack_80 = lVar4;
              lStack_78 = lVar6;
              func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102478370; end: 102478397; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102478370(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102477f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102478398; end: 1024783db; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint end] */

void FUN_102478398(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024783dc; end: 10247878f;  */

void FUN_1024783dc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_102478468;
  }
  if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f8a4c0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd00000000000001c,0x800000010f075b40,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0f8a0d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000018,0x800000010f075f30,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0f89ae0)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010f076520,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c582c4();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0f89400)) ||
               (func_0x000107c605b8(0xd00000000000001e,0x800000010f076c00,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c585f4();
            }
            else {
              if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0f97270)) {
                uVar2 = 0;
                func_0x000107c605b8(0xd000000000000018,0x800000010f068d90,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffc4) || (param_3 != -0x7ffffffef0f5f760)) &&
                     (func_0x000107c605b8(0xd00000000000003c,0x800000010f0a08a0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "CreatorsSpotlightSubmissionV2ScopeGraphBridge/SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint.swift"
                                        ,0x72,2,0x57,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102478790);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c53b40();
                  goto LAB_102478468;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5888c();
            }
          }
          goto LAB_102478468;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c580ac();
      goto LAB_102478468;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c565b0();
LAB_102478468:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102478790; end: 10247883b; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102478790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1024783dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10247883c; end: 1024788e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247883c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e9cee0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9cee8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9cef0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9cef8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9cf00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9cf08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9cf10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9cf18) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024788e4; end: 102478903; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024788e4(void)

{
  FUN_10247883c();
  return;
}



/* Entry: 102478904; end: 102478937;  */

void FUN_102478904(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102478938; end: 1024789cf; -[SCCreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102478964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024789a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102478988) */
/* WARNING: Removing unreachable block (ram,0x000102478968) */
/* WARNING: Removing unreachable block (ram,0x0001024789a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478938(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9cee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9cee8));
  return;
}



/* Entry: 1024789d0; end: 1024789ef;  */

void FUN_1024789d0(void)

{
  func_0x000107c61168(&PTR_PTR_112844208);
  return;
}



/* Entry: 1024789f0; end: 102478a37; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024789f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cf48;
  func_0x000107c61428(param_1 + _DAT_112e9cf48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102478a38; end: 102478a8f; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cf48;
  func_0x000107c61428(param_1 + _DAT_112e9cf48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102478a90; end: 102478b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478a90(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102477318();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9ce20) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102478b68);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9ce28);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9cf50);
    *(long **)(unaff_x20 + _DAT_112e9cf50) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102478b68; end: 102478b8f; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint begin] */

void FUN_102478b68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102478a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102478b90; end: 102478d07;  */

/* WARNING: Possible PIC construction at 0x000102478bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102478c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102478bfc) */
/* WARNING: Removing unreachable block (ram,0x000102478c94) */
/* WARNING: Removing unreachable block (ram,0x000102478cac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478b90(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9cf50);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102478d08; end: 102478d0f;  */

void FUN_102478d08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102478d10; end: 102478d43; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint end] */

void FUN_102478d10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102478b90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102478d44; end: 102478e63;  */

void FUN_102478d44(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "CreatorsSpotlightSubmissionV2ScopeGraphBridge/SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint.swift"
                        ,0x70,2,0x3f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102478e64);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102478e64; end: 102478f0f; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102478e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102478d44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102478f10; end: 102478f6f; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478f10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9cf48,0);
  *(undefined8 *)(param_1 + _DAT_112e9cf50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102478f70; end: 102478fa3;  */

void FUN_102478f70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102478fa4; end: 102478fdb; -[SCCreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478fa4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9cf48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9cf50));
  return;
}



/* Entry: 102478fdc; end: 102478ffb;  */

void FUN_102478fdc(void)

{
  func_0x000107c61168(&PTR_PTR_1128442f8);
  return;
}



/* Entry: 102478ffc; end: 10247a0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102478ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,long param_12,
                  undefined8 param_13,long param_14,long param_15,long param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x20;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  lVar6 = _DAT_11306dee8;
  uVar25 = *(undefined8 *)(param_16 + _DAT_1130806b8);
  uVar27 = *(undefined8 *)(param_1 + _DAT_11306ded8);
  func_0x000107c61428(param_1 + _DAT_11306dee8,auStack_80,0,0);
  lVar6 = param_1 + lVar6;
  func_0x000107c61618();
  lVar14 = _DAT_11306df10;
  uVar24 = *(undefined8 *)(param_1 + _DAT_11306def0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306dee0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11306dee0))[1];
  uVar29 = *(undefined8 *)(param_1 + _DAT_11306def8);
  uVar22 = *(undefined8 *)(param_1 + _DAT_11306df08);
  func_0x000107c61428(param_1 + _DAT_11306df10,auStack_98,0,0);
  lVar18 = _DAT_11306df18;
  uVar4 = *(undefined1 *)(param_1 + lVar14);
  func_0x000107c61428(param_1 + _DAT_11306df18,auStack_b0,0,0);
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uVar8 = uVar7;
  func_0x000107c61174();
  func_0x000107c6157c(uVar25);
  func_0x000107c615f0(uVar27);
  func_0x000107c61434(uVar3);
  uVar9 = uVar29;
  func_0x000107c61174();
  uVar10 = param_4;
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51770,&UNK_10d918bd0);
  uVar11 = param_10;
  func_0x000107c5b900();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  func_0x0001000285a8(0x112e9cf80,&UNK_10daaba88);
  uVar13 = *(undefined8 *)(param_11 + _DAT_112ea0558);
  func_0x000107c61174();
  uVar11 = uVar13;
  func_0x0001000bda74();
  func_0x000107c61170(uVar13);
  uVar28 = *(undefined8 *)(param_1 + _DAT_11306df00);
  uVar26 = *(undefined8 *)(param_12 + _DAT_11302e640);
  uVar13 = uVar28;
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar14 = param_15;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x0001000285a8(0x112d53a80,&UNK_10daaba90);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar25);
    pcVar5 = FUN_10247a0b4;
    func_0x0001000bdd8c(FUN_10247a0b4,uVar25);
    uVar23 = *(undefined8 *)(param_14 + _DAT_113083e08);
    lVar15 = 0;
    FUN_102480ad0();
    lVar16 = lVar15;
    func_0x000107c610f8();
    lVar18 = _DAT_112e9d030;
    func_0x000107c61614(lVar16 + _DAT_112e9d030,0);
    func_0x000107c61614(lVar16 + _DAT_112e9d038,0);
    *(undefined8 *)(lVar16 + _DAT_112e9d040) = 0;
    *(undefined8 *)(lVar16 + _DAT_112e9d048) = 0;
    func_0x000107c61614(lVar16 + _DAT_112e9d050,0);
    *(undefined8 *)(lVar16 + _DAT_112e9d058) = 0;
    *(undefined1 *)(lVar16 + _DAT_112e9d060) = 0;
    *(undefined1 *)(lVar16 + _DAT_112e9d068) = 0;
    *(undefined8 *)(lVar16 + _DAT_112e9d070) = 0;
    *(undefined8 *)(lVar16 + _DAT_112e9d078) = 0;
    *(undefined8 *)(lVar16 + _DAT_112e9d080) = uVar27;
    func_0x000107c61604(lVar16 + lVar18,lVar6);
    puVar1 = (undefined8 *)(lVar16 + _DAT_112e9d088);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar16 + _DAT_112e9d090) = uVar24;
    *(undefined8 *)(lVar16 + _DAT_112e9d098) = uVar22;
    *(undefined1 *)(lVar16 + _DAT_112e9d0a0) = uVar4;
    *(undefined8 *)(lVar16 + _DAT_112e9d0a8) = uVar7;
    *(undefined8 *)(lVar16 + _DAT_112e9d0b0) = param_17;
    *(undefined8 *)(lVar16 + _DAT_112e9d0b8) = param_2;
    *(undefined8 *)(lVar16 + _DAT_112e9d0c0) = param_18;
    *(undefined8 *)(lVar16 + _DAT_112e9d0c8) = param_3;
    *(undefined8 *)(lVar16 + _DAT_112e9d0d0) = param_19;
    *(undefined8 *)(lVar16 + _DAT_112e9d0d8) = uVar10;
    *(undefined8 *)(lVar16 + _DAT_112e9d0e0) = param_5;
    *(undefined8 *)(lVar16 + _DAT_112e9d0e8) = param_6;
    *(undefined8 *)(lVar16 + _DAT_112e9d0f0) = param_7;
    *(undefined8 *)(lVar16 + _DAT_112e9d0f8) = param_20;
    *(undefined8 *)(lVar16 + _DAT_112e9d100) = param_8;
    *(undefined8 *)(lVar16 + _DAT_112e9d108) = param_21;
    *(undefined8 *)(lVar16 + _DAT_112e9d110) = param_9;
    *(undefined8 *)(lVar16 + _DAT_112e9d118) = uVar29;
    *(undefined8 *)(lVar16 + _DAT_112e9d120) = uVar12;
    *(undefined8 *)(lVar16 + _DAT_112e9d128) = uVar11;
    *(undefined8 *)(lVar16 + _DAT_112e9d130) = uVar28;
    *(undefined8 *)(lVar16 + _DAT_112e9d138) = uVar26;
    *(undefined8 *)(lVar16 + _DAT_112e9d140) = param_13;
    *(long *)(lVar16 + _DAT_112e9d148) = lVar14;
    *(code **)(lVar16 + _DAT_112e9d150) = pcVar5;
    puVar17 = &UNK_11050e5c8;
    func_0x000107c613fc(&UNK_11050e5c8,0x18,7);
    *(undefined8 *)(puVar17 + 0x10) = uVar26;
    lVar18 = 0;
    func_0x000102481ea0();
    func_0x000107c613fc();
    func_0x000107c61580(uVar23,2);
    func_0x000107c615f4(uVar26,2);
    func_0x000107c615f0(uVar27);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(uVar10);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar12);
    func_0x000107c6157c(uVar11);
    func_0x000107c61174();
    func_0x000107c615f0(lVar14);
    func_0x000107c6157c(pcVar5);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
    puStack_b8 = puVar19;
    func_0x0001000285a8(0x112dd29d8,&UNK_10d994ed0);
    func_0x000107c613fc();
    ppuVar20 = &puStack_b8;
    func_0x00010006c248();
    *(undefined8 *)(lVar18 + 0x10) = uVar23;
    *(undefined8 *)(lVar18 + 0x18) = 0x10247a1a8;
    *(undefined **)(lVar18 + 0x20) = puVar17;
    *(undefined ***)(lVar18 + 0x28) = ppuVar20;
    *(long *)(lVar16 + _DAT_112e9d158) = lVar18;
    plVar21 = &lStack_c8;
    lStack_c8 = lVar16;
    lStack_c0 = lVar15;
    func_0x000107c61154(plVar21,PTR_s_init_1125d9248);
    func_0x000107c615e8(uVar27);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_19);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_9);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(uVar11);
    func_0x000107c61170(uVar13);
    func_0x000107c615e8(uVar26);
    func_0x000107c61170(param_13);
    func_0x000107c615e8(lVar14);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(uVar23);
    func_0x000107c61574(uVar25);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_15);
    *(long **)(unaff_x20 + 0x10) = plVar21;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10247985c);
  (*pcVar5)();
}



/* Entry: 10247a0b4; end: 10247a0b7;  */

void FUN_10247a0b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 0x20);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10247a0b8; end: 10247a117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247a0b8(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e9d0b0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  FUN_10247a8fc();
  if ((uVar1 & 1) == 0) {
    FUN_10247abb8(2,0);
  }
  else {
    FUN_10247bd44();
  }
  return;
}



/* Entry: 10247a118; end: 10247a13b;  */

void FUN_10247a118(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10247a13c; end: 10247a19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247a13c(void)

{
  ulong uVar1;
  long *unaff_x20;
  
  uVar1 = *(ulong *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112e9d0b0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  FUN_10247a8fc();
  if ((uVar1 & 1) == 0) {
    FUN_10247abb8(2,0);
  }
  else {
    FUN_10247bd44();
  }
  return;
}



/* Entry: 10247a1a0; end: 10247a1bf;  */

undefined8 FUN_10247a1a0(void)

{
  return 0;
}



/* Entry: 10247a1c0; end: 10247a20b;  */

void FUN_10247a1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 0x20);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10247a20c; end: 10247a22b;  */

void FUN_10247a20c(void)

{
  func_0x000107c61168(&PTR_PTR_112e9cfc8);
  return;
}



/* Entry: 10247a22c; end: 10247a23f;  */

void FUN_10247a22c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050e630;
  if (lRam0000000112e9d028 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e9d028 = param_1;
  }
  return;
}



/* Entry: 10247a240; end: 10247a283;  */

void FUN_10247a240(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10247a284; end: 10247a28b;  */

void FUN_10247a284(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c5b92c();
  }
  return;
}



/* Entry: 10247a28c; end: 10247a82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10247a28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined *apuStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112e9d030;
  func_0x000107c61614(unaff_x20 + _DAT_112e9d030,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e9d038,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9d040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d048) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e9d050,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9d058) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e9d060) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e9d068) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d070) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d078) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d080) = param_1;
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9d088);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d090) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d098) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112e9d0a0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0a8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0b0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0b8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0c0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0c8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0d0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0d8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0e0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0e8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0f0) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d0f8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d100) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d108) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d110) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d118) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d120) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d128) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d130) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d138) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d140) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d148) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_112e9d150) = param_29;
  puVar2 = &UNK_11050e668;
  func_0x000107c613fc(&UNK_11050e668,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_26;
  lVar3 = 0;
  func_0x000102481ea0();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c615f4(param_26,2);
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  apuStack_70[0] = puVar4;
  func_0x0001000285a8(0x112dd29d8,&UNK_10d994ed0);
  func_0x000107c613fc();
  ppuVar5 = apuStack_70;
  func_0x00010006c248();
  *(undefined8 *)(lVar3 + 0x10) = param_30;
  *(undefined8 *)(lVar3 + 0x18) = 0x10247ab50;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  *(undefined ***)(lVar3 + 0x28) = ppuVar5;
  *(long *)(unaff_x20 + _DAT_112e9d158) = lVar3;
  puVar6 = auStack_80;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c615e8(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61574(param_23);
  func_0x000107c61574(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c615e8(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c615e8(param_28);
  func_0x000107c61574(param_29);
  func_0x000107c61574(param_30);
  return puVar6;
}



/* Entry: 10247a82c; end: 10247a83f;  */

bool FUN_10247a82c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10247a840; end: 10247a8eb;  */

void FUN_10247a840(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10247a8ec; end: 10247a8fb;  */

void FUN_10247a8ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10247a8fc; end: 10247a993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10247a8fc(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e9d108);
  func_0x000107c49cd8();
  if (iVar1 == 0) {
LAB_10247a95c:
    uVar2 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112e9d090) == 0x5c) {
      uVar3 = 0;
      func_0x000103aff278(0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9d148);
      func_0x000103afec0c(uVar4,uVar3);
      uVar2 = (uint)uVar4;
    }
    else {
      if (*(long *)(unaff_x20 + _DAT_112e9d090) != 0xe) goto LAB_10247a95c;
      uVar3 = 0;
      func_0x000103aff278(0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9d148);
      func_0x000103afea38(uVar4,uVar3);
      uVar2 = (uint)uVar4;
    }
    uVar2 = uVar2 & 1;
  }
  return uVar2;
}



/* Entry: 10247a994; end: 10247aac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10247a994(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112e9d070;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e9d070);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0a0a70);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 10247aac8; end: 10247ab37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10247aac8(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e9d078;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112e9d078);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainPerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 10247ab38; end: 10247abb7;  */

void FUN_10247ab38(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c5b92c();
  }
  return;
}



/* Entry: 10247abb8; end: 10247b337;  */

/* WARNING: Possible PIC construction at 0x00010247ada4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247af2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247aff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247b064) */
/* WARNING: Removing unreachable block (ram,0x00010247b08c) */
/* WARNING: Removing unreachable block (ram,0x00010247b070) */
/* WARNING: Removing unreachable block (ram,0x00010247b30c) */
/* WARNING: Removing unreachable block (ram,0x00010247b2fc) */
/* WARNING: Removing unreachable block (ram,0x00010247b26c) */
/* WARNING: Removing unreachable block (ram,0x00010247b2cc) */
/* WARNING: Removing unreachable block (ram,0x00010247b2f4) */
/* WARNING: Removing unreachable block (ram,0x00010247b218) */
/* WARNING: Removing unreachable block (ram,0x00010247b208) */
/* WARNING: Removing unreachable block (ram,0x00010247b018) */
/* WARNING: Removing unreachable block (ram,0x00010247aff4) */
/* WARNING: Removing unreachable block (ram,0x00010247b0cc) */
/* WARNING: Removing unreachable block (ram,0x00010247b0d4) */
/* WARNING: Removing unreachable block (ram,0x00010247b000) */
/* WARNING: Removing unreachable block (ram,0x00010247af30) */
/* WARNING: Removing unreachable block (ram,0x00010247af64) */
/* WARNING: Removing unreachable block (ram,0x00010247af70) */
/* WARNING: Removing unreachable block (ram,0x00010247af8c) */
/* WARNING: Removing unreachable block (ram,0x00010247b01c) */
/* WARNING: Removing unreachable block (ram,0x00010247afa0) */
/* WARNING: Removing unreachable block (ram,0x00010247ada8) */
/* WARNING: Removing unreachable block (ram,0x00010247b088) */
/* WARNING: Removing unreachable block (ram,0x00010247b094) */
/* WARNING: Removing unreachable block (ram,0x00010247b0e4) */
/* WARNING: Removing unreachable block (ram,0x00010247b13c) */
/* WARNING: Removing unreachable block (ram,0x00010247b0f0) */
/* WARNING: Removing unreachable block (ram,0x00010247b140) */
/* WARNING: Removing unreachable block (ram,0x00010247b0a8) */
/* WARNING: Removing unreachable block (ram,0x00010247b154) */
/* WARNING: Removing unreachable block (ram,0x00010247b0b8) */
/* WARNING: Removing unreachable block (ram,0x00010247b178) */
/* WARNING: Removing unreachable block (ram,0x00010247b0c8) */
/* WARNING: Removing unreachable block (ram,0x00010247b188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247abb8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112e9d0b0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar10 == 0) {
    if (param_2 == 0) {
      puVar6 = &UNK_11050e690;
      puVar5 = puVar6;
      func_0x000107c613fc(&UNK_11050e690,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      func_0x000107c613fc(&UNK_11050e690,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_1024817ac;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100e1779c;
      puStack_90 = &UNK_11050edb0;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      pcStack_b8 = (code *)0x1024817b4;
      puStack_d8 = puVar3;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_100e17304;
      puStack_c0 = &UNK_11050edd8;
      ppuVar9 = &puStack_d8;
      puStack_b0 = puVar6;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar6);
      func_0x000107c47be0();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_b0);
      puVar3 = puStack_80;
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar3);
      *(undefined **)(unaff_x20 + _DAT_112e9d040) = puVar7;
      func_0x000107c61174(puVar7);
      func_0x000107c61174();
    }
    else {
      puVar1 = PTR_PTR_1126aff58;
      func_0x000107c610f8();
      func_0x000107c61174(param_2);
      func_0x000107c48080();
      puVar6 = &UNK_11050e690;
      puVar2 = puVar6;
      func_0x000107c613fc(&UNK_11050e690,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_11050ee10;
      func_0x000107c613fc(&UNK_11050ee10,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      func_0x000107c613fc(&UNK_11050e690,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar5 = &UNK_11050ee38;
      func_0x000107c613fc(&UNK_11050ee38,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar6;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      puVar4 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x1024817bc;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100e1779c;
      puStack_90 = &UNK_11050ee50;
      puStack_80 = puVar3;
      func_0x000107c60bc4(&puStack_a8);
      pcStack_b8 = FUN_1024817f0;
      puStack_d8 = puVar7;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_100e17304;
      puStack_c0 = &UNK_11050ee78;
      puStack_b0 = puVar5;
      func_0x000107c60bc4(&puStack_d8);
      func_0x000107c6157c(puVar2);
      func_0x000107c61174(puVar1);
      func_0x000107c6157c(puVar6);
      func_0x000107c47be0(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10247b338; end: 10247b563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247b338(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61604(param_2 + _DAT_112e9d038,param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c3e2c0(param_3);
  return;
}



/* Entry: 10247b564; end: 10247b73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247b564(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112e9d0f8;
  if (param_3 == 0) {
    if (param_1 == (code *)0x0) {
      return;
    }
    (*param_1)();
    return;
  }
  uVar3 = *(ulong *)(param_3 + _DAT_112e9d0f8);
  func_0x000107c49cd8();
  if ((uVar3 & 1) == 0) {
    puVar5 = (ulong *)(param_3 + _DAT_112e9d108);
    iVar2 = (int)*puVar5;
    func_0x000107c49cd8();
    if (iVar2 == 0) goto LAB_10247b670;
LAB_10247b638:
    bVar7 = false;
  }
  else {
    lVar4 = *(long *)(param_3 + lVar4);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      puVar5 = (ulong *)(param_3 + _DAT_112e9d108);
      uVar3 = *puVar5;
      func_0x000107c49cd8();
      if ((uVar3 & 1) == 0) goto LAB_10247b670;
      goto LAB_10247b638;
    }
    func_0x000107c61170();
    puVar5 = (ulong *)(param_3 + _DAT_112e9d108);
    uVar3 = *puVar5;
    func_0x000107c49cd8();
    if ((uVar3 & 1) == 0) goto LAB_10247b65c;
    bVar7 = true;
  }
  uVar3 = *puVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar3 == 0) {
    if (!bVar7) {
LAB_10247b670:
      func_0x000107c61604(param_3 + _DAT_112e9d038,0);
      uVar6 = *(undefined8 *)(param_3 + _DAT_112e9d080);
      if (param_1 == (code *)0x0) {
        func_0x000107c615f0(uVar6);
        ppuVar8 = (undefined **)0x0;
      }
      else {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000b0c7c;
        puStack_70 = &UNK_11050eec8;
        ppuVar8 = &puStack_88;
        pcStack_68 = param_1;
        uStack_60 = param_2;
        func_0x000107c60bc4(ppuVar8);
        uVar1 = uStack_60;
        func_0x000107c615f0(uVar6);
        func_0x000100b64c10(param_1,param_2);
        func_0x000107c61574(uVar1);
      }
      func_0x000107c41864(uVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(uVar6);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
LAB_10247b65c:
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10247b73c; end: 10247b82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247b73c(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long alStack_50 [2];
  long lStack_40;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e9d0b0);
  uVar1 = uVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  uVar2 = 0;
  if (uVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c615e8();
    uVar2 = uVar3;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112e9d158);
  (**(code **)(lVar5 + 0x18))();
  if ((uVar2 & 1) != 0) {
    func_0x0001000d224c(alStack_50);
    if (alStack_50[0] != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      lStack_40 = alStack_50[0];
      func_0x000107c6157c(uVar4);
      func_0x000100075034(0x102481ac0,alStack_50,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(alStack_50[0]);
      func_0x000107c61574(uVar4);
    }
  }
  lVar5 = unaff_x20 + _DAT_112e9d030;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c40d4c();
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 10247b830; end: 10247bc5b;  */

/* WARNING: Possible PIC construction at 0x00010247b884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247ba2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247ba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bb28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bc10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247bc04) */
/* WARNING: Removing unreachable block (ram,0x00010247bbf4) */
/* WARNING: Removing unreachable block (ram,0x00010247bbd8) */
/* WARNING: Removing unreachable block (ram,0x00010247bb88) */
/* WARNING: Removing unreachable block (ram,0x00010247bb54) */
/* WARNING: Removing unreachable block (ram,0x00010247bb2c) */
/* WARNING: Removing unreachable block (ram,0x00010247bad8) */
/* WARNING: Removing unreachable block (ram,0x00010247ba84) */
/* WARNING: Removing unreachable block (ram,0x00010247ba30) */
/* WARNING: Removing unreachable block (ram,0x00010247b9dc) */
/* WARNING: Removing unreachable block (ram,0x00010247b8f0) */
/* WARNING: Removing unreachable block (ram,0x00010247bc14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247b830(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = (undefined *)(unaff_x20 + _DAT_112e9d038);
  func_0x000107c61618();
  lVar1 = _DAT_112e9d058;
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112e9d058) == 0) {
    puVar3 = puVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c453e4();
      func_0x000107c5a050();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(puVar3,param_2,puVar2);
    }
  }
  else {
    func_0x000107c4ff34();
    puVar2 = *(undefined **)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10247bc5c; end: 10247bd43;  */

/* WARNING: Possible PIC construction at 0x00010247bd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247bd18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247bc5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9d0f8);
  lVar1 = lVar3;
  func_0x000107c49cd8();
  if ((int)lVar1 == 0) {
    return;
  }
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c610f8();
    func_0x000107c458b0();
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e9d100);
    func_0x000107c3ed70(uVar2,param_2,*(undefined8 *)(unaff_x20 + _DAT_112e9d080),
                        *(undefined8 *)(unaff_x20 + _DAT_112e9d090),8,0);
    func_0x000107c61180();
    func_0x000107c42c1c(lVar3,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10247bd44; end: 10247bf33;  */

/* WARNING: Possible PIC construction at 0x00010247be48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247be6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247bedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247beec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247bee0) */
/* WARNING: Removing unreachable block (ram,0x00010247be70) */
/* WARNING: Removing unreachable block (ram,0x00010247be4c) */
/* WARNING: Removing unreachable block (ram,0x00010247bef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247bd44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e9d108);
  lVar1 = lVar4;
  func_0x000107c49cd8();
  if ((int)lVar1 != 0) {
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c610f8(PTR_PTR_1126ae6d0);
      func_0x000107c4831c();
      func_0x000107c61168(PTR_PTR_1126b1bb0);
      func_0x000107c3e6c4();
      func_0x000107c61180();
      puVar2 = PTR_PTR_1126b20d8;
      func_0x000107c61168(PTR_PTR_1126b20d8);
      func_0x000107c3eec8();
      func_0x000107c61180();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5e630(puVar2,param_2,puVar3);
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10247bf34; end: 10247c113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10247bf34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_c0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e9d080);
  puVar4 = &UNK_11050e690;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_11050e690,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11050e938;
  func_0x000107c613fc(&UNK_11050e938,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  func_0x000107c613fc(&UNK_11050e690,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11050e960;
  func_0x000107c613fc(&UNK_11050e960,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1024815c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e1779c;
  puStack_78 = &UNK_11050e978;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  uStack_a0 = 0x1024815c8;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100e17304;
  puStack_a8 = &UNK_11050e9a0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c615f4(uVar9,2);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_98);
  puVar3 = puStack_68;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e9d048);
  *(undefined **)(unaff_x20 + _DAT_112e9d048) = puVar6;
  func_0x000107c61174(puVar6);
  func_0x000107c61170(uVar9);
  return puVar6;
}



/* Entry: 10247c114; end: 10247c19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247c114(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c5677c(param_1,param_2,0);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61604(param_2 + _DAT_112e9d050,param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c3e2c0(param_3);
  return;
}



/* Entry: 10247c19c; end: 10247c493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247c19c(code *param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    ppuVar3 = (undefined **)0x0;
    if (param_1 != (code *)0x0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_11050e9c8;
      ppuVar3 = &puStack_88;
      pcStack_68 = param_1;
      puStack_60 = param_2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar1);
    }
    func_0x000107c41864(param_4);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    lVar4 = *(long *)(param_3 + _DAT_112e9d048);
    if (lVar4 == 0) {
      if (param_1 != (code *)0x0) {
        (*param_1)();
      }
    }
    else {
      *(undefined8 *)(param_3 + _DAT_112e9d048) = 0;
      func_0x000107c61170(lVar4);
      func_0x000107c61604(param_3 + _DAT_112e9d050,0);
      puVar1 = &UNK_11050e690;
      func_0x000107c613fc(&UNK_11050e690,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_3);
      puVar2 = &UNK_11050ea00;
      func_0x000107c613fc(&UNK_11050ea00,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(code **)(puVar2 + 0x18) = param_1;
      *(undefined **)(puVar2 + 0x20) = param_2;
      pcStack_68 = (code *)0x1024815d0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_11050ea18;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(param_4);
      func_0x000107c60bd0(ppuVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10247c494; end: 10247c617;  */

/* WARNING: Possible PIC construction at 0x00010247c4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247c59c) */
/* WARNING: Removing unreachable block (ram,0x00010247c5a0) */
/* WARNING: Removing unreachable block (ram,0x00010247c5ac) */
/* WARNING: Removing unreachable block (ram,0x00010247c4d4) */
/* WARNING: Removing unreachable block (ram,0x00010247c530) */
/* WARNING: Removing unreachable block (ram,0x00010247c4e8) */
/* WARNING: Removing unreachable block (ram,0x00010247c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010247c55c) */
/* WARNING: Removing unreachable block (ram,0x00010247c570) */
/* WARNING: Removing unreachable block (ram,0x00010247c51c) */
/* WARNING: Removing unreachable block (ram,0x00010247c5e8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x00010247c5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247c494(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9d108);
  lVar1 = lVar2;
  func_0x000107c49cd8();
  if ((int)lVar1 != 0) {
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 10247c618; end: 10247cdcf;  */

/* WARNING: Possible PIC construction at 0x00010247c658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247ca1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247ca58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247caa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cd8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247cdac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247c8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247c8ec) */
/* WARNING: Removing unreachable block (ram,0x00010247c8d4) */
/* WARNING: Removing unreachable block (ram,0x00010247cda0) */
/* WARNING: Removing unreachable block (ram,0x00010247cd90) */
/* WARNING: Removing unreachable block (ram,0x00010247cd80) */
/* WARNING: Removing unreachable block (ram,0x00010247cd70) */
/* WARNING: Removing unreachable block (ram,0x00010247cd58) */
/* WARNING: Removing unreachable block (ram,0x00010247cce0) */
/* WARNING: Removing unreachable block (ram,0x00010247cc38) */
/* WARNING: Removing unreachable block (ram,0x00010247caa4) */
/* WARNING: Removing unreachable block (ram,0x00010247ca5c) */
/* WARNING: Removing unreachable block (ram,0x00010247caac) */
/* WARNING: Removing unreachable block (ram,0x00010247ca70) */
/* WARNING: Removing unreachable block (ram,0x00010247ca20) */
/* WARNING: Removing unreachable block (ram,0x00010247c9f0) */
/* WARNING: Removing unreachable block (ram,0x00010247c9b4) */
/* WARNING: Removing unreachable block (ram,0x00010247c9d8) */
/* WARNING: Removing unreachable block (ram,0x00010247c9c0) */
/* WARNING: Removing unreachable block (ram,0x00010247c9dc) */
/* WARNING: Removing unreachable block (ram,0x00010247c850) */
/* WARNING: Removing unreachable block (ram,0x00010247ca2c) */
/* WARNING: Removing unreachable block (ram,0x00010247c874) */
/* WARNING: Removing unreachable block (ram,0x00010247c990) */
/* WARNING: Removing unreachable block (ram,0x00010247c88c) */
/* WARNING: Removing unreachable block (ram,0x00010247c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010247c77c) */
/* WARNING: Removing unreachable block (ram,0x00010247c704) */
/* WARNING: Removing unreachable block (ram,0x00010247c8c0) */
/* WARNING: Removing unreachable block (ram,0x00010247c708) */
/* WARNING: Removing unreachable block (ram,0x00010247c8cc) */
/* WARNING: Removing unreachable block (ram,0x00010247c720) */
/* WARNING: Removing unreachable block (ram,0x00010247c8c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247c618(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long alStack_80 [2];
  long lStack_70;
  
  lVar4 = _DAT_112e9d058;
  if (*(long *)(unaff_x20 + _DAT_112e9d058) == 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e9d0c0);
    func_0x000107c5194c();
    func_0x000107c61180();
    lVar4 = _DAT_112e9d038;
    if (lVar5 == 0) {
      lVar5 = unaff_x20 + _DAT_112e9d038;
      func_0x000107c61618();
      if (lVar5 == 0) {
        uVar2 = unaff_x20 + lVar4;
        func_0x000107c61618();
        if (uVar2 == 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_112e9d158);
          (**(code **)(lVar4 + 0x18))();
          if (((uVar2 & 1) != 0) && (func_0x0001000d224c(alStack_80), alStack_80[0] != 0)) {
            uVar3 = *(undefined8 *)(lVar4 + 0x28);
            lStack_70 = alStack_80[0];
            func_0x000107c6157c(uVar3);
            func_0x000100075034(0x102481a98,alStack_80,PTR___sytN_11034f1b0 + 8);
            func_0x000107c615e8(alStack_80[0]);
            func_0x000107c61574(uVar3);
          }
          return;
        }
      }
      else {
        uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e9d0e0);
        func_0x000107c4141c(uVar1);
        func_0x000107c61180();
        uVar3 = uVar1;
        func_0x000107c41414();
        func_0x000107c61180();
        func_0x000107c615e8(uVar1);
        func_0x000107c5c734(uVar3);
        func_0x000107c61180();
      }
    }
  }
  else {
    func_0x000107c4ff34();
    *(undefined8 *)(unaff_x20 + lVar4) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10247cdd0; end: 10247cecf;  */

void FUN_10247cdd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  uVar1 = unaff_x20;
  FUN_10247b830();
  FUN_10247a994();
  puVar2 = &UNK_11050e690;
  func_0x000107c613fc(&UNK_11050e690,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11050ea50;
  func_0x000107c613fc(&UNK_11050ea50,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  pcStack_50 = FUN_102481600;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11050ea68;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10247ced0; end: 10247d19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247ced0(long param_1,undefined *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102480b30();
    uVar9 = *(undefined8 *)(param_1 + _DAT_112e9d158);
    func_0x000107c6157c(uVar9);
    func_0x000107c61434(param_2);
    FUN_102481b08(0xd000000000000012,0x800000010f0a0aa0,param_2,0);
    func_0x000107c61574(uVar9);
    puVar3 = param_2;
    func_0x000107c6142c(param_2);
    puVar12 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((ulong)param_2 >> 0x3e == 0) {
      puVar6 = *(undefined **)(puVar12 + 0x10);
    }
    else {
      puVar3 = puVar12;
      if ((undefined *)0x7fffffffffffffff < param_2) {
        puVar3 = param_2;
      }
      func_0x000107c60480();
      puVar6 = puVar3;
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar5 = (undefined *)0x0;
    while (puVar6 != puVar5) {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar12 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10247d18c);
          (*pcVar2)();
        }
        puVar3 = *(undefined **)(param_2 + (long)puVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar5;
        func_0x000102480754(puVar5,param_2,&PTR_PTR_1126aff40,0x112d62390);
      }
      if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10247d188);
        (*pcVar2)();
      }
      puVar11 = puVar5 + 1;
      puVar4 = puVar3;
      func_0x00010247e660();
      func_0x000107c61170();
      puVar5 = puVar5 + 1;
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar3 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar5 = puVar10;
            }
            func_0x000107c60480(puVar5);
          }
          puVar3 = (undefined *)0x0;
          func_0x000100fb4ec0(0,puVar5 + 1,1,puVar10);
          puVar10 = puVar3;
        }
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          func_0x000100fb4ec0(puVar3,uVar1 + 1,1,puVar10);
          uVar8 = (ulong)puVar3 & 0xffffffffffffff8;
          puVar10 = puVar3;
        }
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(undefined **)(uVar8 + uVar1 * 8 + 0x20) = puVar4;
        puVar5 = puVar11;
      }
    }
    FUN_10247aac8();
    puVar12 = &UNK_11050e690;
    func_0x000107c613fc(&UNK_11050e690,0x18,7);
    func_0x000107c61614(puVar12 + 0x10,param_1);
    puVar6 = &UNK_11050eaa0;
    func_0x000107c613fc(&UNK_11050eaa0,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar12;
    *(undefined **)(puVar6 + 0x18) = puVar10;
    *(undefined **)(puVar6 + 0x20) = param_2;
    uStack_88 = 0x10248160c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11050eab8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_80);
    func_0x000107c4e524(puVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(puVar3);
  }
  return;
}



/* Entry: 10247d1a0; end: 10247d30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247d1a0(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long alStack_60 [2];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (param_2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    lVar4 = _DAT_112e9d058;
  }
  else {
    uVar1 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar1 = param_2;
    }
    func_0x000107c60480();
    lVar4 = _DAT_112e9d058;
  }
  _DAT_112e9d058 = lVar4;
  if (uVar1 == 0) {
    uVar1 = 0;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x000107c4ff34();
      uVar1 = *(ulong *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      func_0x000107c61170();
    }
    lVar4 = *(long *)(param_1 + _DAT_112e9d158);
    (**(code **)(lVar4 + 0x18))();
    if (((uVar1 & 1) != 0) && (func_0x0001000d224c(alStack_60), alStack_60[0] != 0)) {
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      lStack_50 = alStack_60[0];
      func_0x000107c6157c(uVar3);
      func_0x000100075034(0x102481ad4,alStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(alStack_60[0]);
      func_0x000107c61574(uVar3);
    }
    lVar4 = _DAT_112e9d0b0;
    lVar2 = *(long *)(param_1 + _DAT_112e9d0b0);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar3);
      return;
    }
  }
  else {
    FUN_10247d30c(param_3,param_2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10247d30c; end: 10247d82b;  */

/* WARNING: Possible PIC construction at 0x00010247d350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247d3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247d588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247d3ec) */
/* WARNING: Removing unreachable block (ram,0x00010247d58c) */
/* WARNING: Removing unreachable block (ram,0x00010247d4c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247d30c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long alStack_80 [2];
  long lStack_70;
  
  lVar7 = _DAT_112e9d058;
  if (*(long *)(unaff_x20 + _DAT_112e9d058) == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112e9d0d0);
    lVar7 = lVar6;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 == 0) {
      uVar1 = unaff_x20 + _DAT_112e9d038;
      func_0x000107c61618();
      if (uVar1 == 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_112e9d158);
        (**(code **)(lVar7 + 0x18))();
        if (((uVar1 & 1) != 0) && (func_0x0001000d224c(alStack_80), alStack_80[0] != 0)) {
          uVar5 = *(undefined8 *)(lVar7 + 0x28);
          lStack_70 = alStack_80[0];
          func_0x000107c6157c(uVar5);
          func_0x000100075034(0x102481a84,alStack_80,PTR___sytN_11034f1b0 + 8);
          func_0x000107c615e8(alStack_80[0]);
          func_0x000107c61574(uVar5);
        }
        return;
      }
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      if (*(long *)(unaff_x20 + _DAT_112e9d0a8) == 0) {
        puVar3 = &UNK_11050e690;
        func_0x000107c613fc(&UNK_11050e690,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        puVar4 = &UNK_11050e910;
        func_0x000107c613fc(&UNK_11050e910,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined8 *)(puVar4 + 0x18) = param_1;
        func_0x0001038e0838(0);
        func_0x000107c610f8();
        func_0x000107c61434(param_1);
        func_0x000107c6157c(puVar4);
        func_0x000107c61434(param_2);
        func_0x000107c61174();
        func_0x000107c61174(puVar2);
        func_0x0001038dea38(param_2,0x2000000000000000,puVar2,unaff_x20,5,0,0,0);
        func_0x000107c42c1c(lVar6);
      }
      else {
        func_0x000107c51cc8();
        func_0x000107c61180();
        func_0x000107c5cda4();
      }
    }
  }
  else {
    func_0x000107c4ff34();
    *(undefined8 *)(unaff_x20 + lVar7) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10247d82c; end: 10247d897;  */

void FUN_10247d82c(long param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_3)(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10247d898; end: 10247d9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247d898(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  FUN_10247b830();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9d138);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5b92c();
    lVar6 = lVar2;
  }
  FUN_10247a994();
  puVar3 = &UNK_11050e690;
  func_0x000107c613fc(&UNK_11050e690,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11050eaf0;
  func_0x000107c613fc(&UNK_11050eaf0,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)lVar6;
  *(long *)(puVar4 + 0x28) = lVar1;
  uStack_50 = 0x10248166c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11050eb08;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(lVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10247d9bc; end: 10247dbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247d9bc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102480b30();
    lVar1 = _DAT_112e9d158;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112e9d158);
    func_0x000107c6157c(uVar6);
    FUN_102481b08(0xd000000000000011,0x800000010f0a0ac0,param_2,0);
    func_0x000107c61574(uVar6);
    uVar6 = param_2;
    if ((param_3 & 1) == 0) {
      func_0x00010247df40();
    }
    else {
      func_0x000107c60a44(&puStack_98,0x4014000000000000,1000);
      FUN_10247dbe0(param_2,puStack_98,uStack_90,puStack_88,0);
    }
    func_0x000107c6142c(param_2);
    func_0x000107c615f0(uVar6);
    FUN_10247e2cc();
    uVar7 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c6157c(uVar7);
    uVar2 = uVar6;
    func_0x000107c5b198(uVar6);
    func_0x000107c61180();
    FUN_102481b08(0xd000000000000015,0x800000010f0a0ae0,0,uVar2);
    func_0x000107c61574(uVar7);
    func_0x000107c61170(uVar2);
    FUN_10247aac8();
    puVar3 = &UNK_11050e690;
    func_0x000107c613fc(&UNK_11050e690,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_11050eb40;
    func_0x000107c613fc(&UNK_11050eb40,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    pcStack_78 = FUN_1024816c4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11050eb58;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_70);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 10247dbe0; end: 10247e0ef;  */

/* WARNING: Removing unreachable block (ram,0x00010247dd44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10247dbe0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) != 1) goto LAB_10247dd50;
LAB_10247dc2c:
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10247df1c);
        (*pcVar1)();
      }
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar3 = 0;
      func_0x000102480754(0,param_1,&PTR_PTR_1126aff40,0x112d62390);
    }
    lVar10 = lVar3;
    FUN_102480f40();
    func_0x000107c61170(lVar3);
    if (lVar10 != 0) {
      return lVar10;
    }
    if (param_1 >> 0x3e != 0) goto LAB_10247dc98;
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    uVar5 = uVar4;
    func_0x000107c60480();
    if (uVar5 != 1) goto LAB_10247dd50;
    func_0x000107c60480();
    if (uVar4 != 0) goto LAB_10247dc2c;
LAB_10247dc98:
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10247df40);
        (*pcVar1)();
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = 0;
      func_0x000102480754(0,param_1,&PTR_PTR_1126aff40,0x112d62390);
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9d0d8);
    puVar6 = PTR_PTR_1126b25c0;
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x000107c453e4();
    func_0x000107c42428(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000103912238(0);
    uVar7 = uVar8;
    func_0x000103910600(uVar8,lVar3,param_2,param_3,param_4,param_5);
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    uVar9 = uVar7;
    func_0x000100759c94(uVar7,0);
    func_0x0001048886ac(&uStack_78);
    func_0x000107c61574(uVar9);
    if (cStack_70 == '\x01') {
      uStack_80 = uStack_78;
      iVar2 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar2 != 0) {
        uVar9 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(&uStack_80,uVar9,PTR___ss5ErrorWS_11034ee10);
      }
      cStack_70 = '\x01';
    }
    func_0x000100cf397c(uStack_78,cStack_70);
    iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e9d148);
    uVar9 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f0a0b00);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar9);
    if (iVar2 != 0) {
      func_0x000103910bec(lVar3);
    }
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    return lVar3;
  }
LAB_10247dd50:
  lVar10 = *(long *)(unaff_x20 + _DAT_112e9d0d8);
  puVar6 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x000107c453e4();
  lVar3 = lVar10;
  func_0x000107c42428(lVar10);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar8 = 0;
  func_0x000103912238(0);
  func_0x00010390e310(param_1,lVar3,lVar10,param_2,param_3,param_4,param_5,uVar8);
  return lVar3;
}



/* Entry: 10247e0f0; end: 10247e2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247e0f0(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long alStack_60 [2];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar5 = param_2;
  func_0x000107c5b198();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c44a2c();
  func_0x000107c61170(lVar5);
  if ((int)lVar3 != 0) {
    lVar5 = param_2;
    func_0x000107c5b198();
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10247e2c8);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10247e2cc);
      (*pcVar1)();
    }
    lVar3 = lVar5;
    func_0x000107c40808();
    func_0x000107c61170(lVar5);
    if (0 < lVar3) {
      FUN_10247c618(param_2);
      goto LAB_10247e2a8;
    }
  }
  lVar5 = _DAT_112e9d058;
  uVar2 = 0;
  if (*(long *)(param_1 + _DAT_112e9d058) != 0) {
    func_0x000107c4ff34();
    uVar2 = *(ulong *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    func_0x000107c61170();
  }
  lVar5 = *(long *)(param_1 + _DAT_112e9d158);
  (**(code **)(lVar5 + 0x18))();
  if (((uVar2 & 1) != 0) && (func_0x0001000d224c(alStack_60), alStack_60[0] != 0)) {
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    lStack_50 = alStack_60[0];
    func_0x000107c6157c(uVar4);
    func_0x000100075034(0x102481ae8,alStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(alStack_60[0]);
    func_0x000107c61574(uVar4);
  }
  lVar5 = _DAT_112e9d0b0;
  lVar3 = *(long *)(param_1 + _DAT_112e9d0b0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c4ffe8(uVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar4);
    return;
  }
LAB_10247e2a8:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10247e2cc; end: 10247ea23;  */

/* WARNING: Possible PIC construction at 0x00010247e340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247e5f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247e5d0) */
/* WARNING: Removing unreachable block (ram,0x00010247e5b8) */
/* WARNING: Removing unreachable block (ram,0x00010247e550) */
/* WARNING: Removing unreachable block (ram,0x00010247e538) */
/* WARNING: Removing unreachable block (ram,0x00010247e50c) */
/* WARNING: Removing unreachable block (ram,0x00010247e4f4) */
/* WARNING: Removing unreachable block (ram,0x00010247e4c8) */
/* WARNING: Removing unreachable block (ram,0x00010247e434) */
/* WARNING: Removing unreachable block (ram,0x00010247e458) */
/* WARNING: Removing unreachable block (ram,0x00010247e45c) */
/* WARNING: Removing unreachable block (ram,0x00010247e460) */
/* WARNING: Removing unreachable block (ram,0x00010247e464) */
/* WARNING: Removing unreachable block (ram,0x00010247e65c) */
/* WARNING: Removing unreachable block (ram,0x00010247e478) */
/* WARNING: Removing unreachable block (ram,0x00010247e47c) */
/* WARNING: Removing unreachable block (ram,0x00010247e480) */
/* WARNING: Removing unreachable block (ram,0x00010247e654) */
/* WARNING: Removing unreachable block (ram,0x00010247e484) */
/* WARNING: Removing unreachable block (ram,0x00010247e48c) */
/* WARNING: Removing unreachable block (ram,0x00010247e490) */
/* WARNING: Removing unreachable block (ram,0x00010247e658) */
/* WARNING: Removing unreachable block (ram,0x00010247e3ec) */
/* WARNING: Removing unreachable block (ram,0x00010247e494) */
/* WARNING: Removing unreachable block (ram,0x00010247e404) */
/* WARNING: Removing unreachable block (ram,0x00010247e35c) */
/* WARNING: Removing unreachable block (ram,0x00010247e388) */
/* WARNING: Removing unreachable block (ram,0x00010247e624) */
/* WARNING: Removing unreachable block (ram,0x00010247e390) */
/* WARNING: Removing unreachable block (ram,0x00010247e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010247e36c) */
/* WARNING: Removing unreachable block (ram,0x00010247e3a8) */
/* WARNING: Removing unreachable block (ram,0x00010247e370) */
/* WARNING: Removing unreachable block (ram,0x00010247e3c0) */
/* WARNING: Removing unreachable block (ram,0x00010247e384) */
/* WARNING: Removing unreachable block (ram,0x00010247e62c) */
/* WARNING: Removing unreachable block (ram,0x00010247e344) */
/* WARNING: Removing unreachable block (ram,0x00010247e5f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247e2cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112e9d0a8) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9d0a8) + _DAT_11306dea0);
    func_0x000107c61174(uVar1);
    func_0x000107c51cc8();
    func_0x000107c61180();
    func_0x000107c3e3b4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10247ea24; end: 10247ebd7;  */

/* WARNING: Possible PIC construction at 0x00010247eaa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247eaa8) */

void FUN_10247ea24(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x000107c453e4();
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar2 = param_2;
  func_0x000102481088(param_2,param_1,0);
  if ((uVar2 & 1) != 0) {
    func_0x000107c5b198(param_2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10247ebd8; end: 10247ec2b;  */

void FUN_10247ebd8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c5b198();
  func_0x000107c61180();
  func_0x000107c61428(param_2,auStack_38,1,0);
  uVar1 = *param_2;
  *param_2 = param_1;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10247ec2c; end: 10247ec57;  */

void FUN_10247ec2c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 10247ec58; end: 10247eca3;  */

void FUN_10247ec58(void)

{
  undefined8 uStack_28;
  
  func_0x0001000285a8(0x112e9d188,&UNK_10daabbb0);
  uStack_28 = 0;
  func_0x000104888f7c(&uStack_28);
  return;
}



/* Entry: 10247eca4; end: 10247ecff; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow init] */

void FUN_10247eca4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionV2.CreatorsSpotlightSubmissionWorkflow",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10247ecd0);
  (*pcVar1)();
}



/* Entry: 10247ed00; end: 10247efaf; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010247ed1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247edb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247eee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247eec4) */
/* WARNING: Removing unreachable block (ram,0x00010247edb4) */
/* WARNING: Removing unreachable block (ram,0x00010247ed20) */
/* WARNING: Removing unreachable block (ram,0x00010247eee4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247ed00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e9d080));
  return;
}



/* Entry: 10247efb0; end: 10247f013; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_10247efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d74dc8;
  func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  func_0x00010247ef2c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10247f014; end: 10247f383;  */

void FUN_10247f014(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = *param_1;
  lStack_68 = 0;
  uStack_70 = 0;
  func_0x000107c45218();
  func_0x000107c61180();
  puVar4 = &UNK_11050ec08;
  func_0x000107c613fc(&UNK_11050ec08,0x20,7);
  *(long **)(puVar4 + 0x10) = &lStack_68;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  puVar5 = &UNK_11050ec30;
  func_0x000107c613fc(&UNK_11050ec30,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1024816f8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102481a64;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1019fdb4c;
  puStack_88 = &UNK_11050ec48;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11050ec80;
  func_0x000107c613fc(&UNK_11050ec80,0x18,7);
  *(long **)(puVar7 + 0x10) = &lStack_68;
  puVar8 = &UNK_11050eca8;
  func_0x000107c613fc(&UNK_11050eca8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x102481700;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puStack_a0 = puVar1;
  uStack_80 = 0x102481a68;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101a36974;
  puStack_88 = &UNK_11050ecc0;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11050ecf8;
  func_0x000107c613fc(&UNK_11050ecf8,0x28,7);
  *(undefined8 *)(puVar10 + 0x10) = param_2;
  *(long **)(puVar10 + 0x18) = &lStack_68;
  *(undefined8 **)(puVar10 + 0x20) = &uStack_70;
  puVar11 = &UNK_11050ed20;
  func_0x000107c613fc(&UNK_11050ed20,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x102481708;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_80 = 0x102481a6c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101382510;
  puStack_88 = &UNK_11050ed38;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar1 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar1);
  func_0x000107c4c668(uVar3);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  lVar13 = lStack_68;
  uVar3 = uStack_70;
  if (lStack_68 != 0) {
    func_0x000107c61434(uStack_70);
    func_0x000107c61174(lVar13);
    func_0x000102481088(param_3,lVar13,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(lVar13);
  }
  func_0x000107c6142c(uStack_70);
  lVar13 = lStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(lVar13);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6d,0x35d,0x11,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10247f37c);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x6d,0x360,0x18,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10247f380);
    (*pcVar2)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x6d,0x363,0x20,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10247f384);
  (*pcVar2)();
}



/* Entry: 10247f384; end: 10247f40f;  */

void FUN_10247f384(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  func_0x000107c60a44(auStack_48,0x4014000000000000,1000);
  func_0x000107c5d19c();
  func_0x000107c61180();
  uVar2 = *param_2;
  *param_2 = puVar1;
  func_0x000107c61170(uVar2);
  return;
}


