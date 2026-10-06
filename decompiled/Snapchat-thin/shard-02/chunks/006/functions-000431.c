/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fbcdb4; end: 101fbcf2b;  */

void FUN_101fbcdb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b3208;
  func_0x000107c613fc(&UNK_1104b3208,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fbcf2c,puVar1);
  return;
}



/* Entry: 101fbcf2c; end: 101fbcf33;  */

void FUN_101fbcf2c(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4b450,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4b450,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b32e0;
  func_0x000107c613fc(&UNK_1104b32e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fbd000;
  func_0x00010058fa64(0x101fbd000,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fbcf34; end: 101fbcf8f;  */

void FUN_101fbcf34(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4b450,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4b450,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fbcf90; end: 101fbd007;  */

undefined ** FUN_101fbcf90(void)

{
  return &PTR_DAT_113066838;
}



/* Entry: 101fbd008; end: 101fbd04f; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd008(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b4b8;
  func_0x000107c61428(param_1 + _DAT_112e4b4b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fbd050; end: 101fbd0a7; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd050(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b4b8;
  func_0x000107c61428(param_1 + _DAT_112e4b4b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fbd0a8; end: 101fbd0ef; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint sCPreviewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd0a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b4c0;
  func_0x000107c61428(param_1 + _DAT_112e4b4c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fbd0f0; end: 101fbd0fb; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint setSCPreviewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b4c0;
  func_0x000107c61428(param_1 + _DAT_112e4b4c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fbd0fc; end: 101fbd143; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint bitmojiOutfitSharingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd0fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b4c8;
  func_0x000107c61428(param_1 + _DAT_112e4b4c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fbd144; end: 101fbd14f; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint setBitmojiOutfitSharingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd144(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b4c8;
  func_0x000107c61428(param_1 + _DAT_112e4b4c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fbd150; end: 101fbd1af;  */

void FUN_101fbd150(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101fbd1b0; end: 101fbd36b;  */

/* WARNING: Possible PIC construction at 0x000101fbd2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbd2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbd2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbd340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fbd300) */
/* WARNING: Removing unreachable block (ram,0x000101fbd2f0) */
/* WARNING: Removing unreachable block (ram,0x000101fbd2cc) */
/* WARNING: Removing unreachable block (ram,0x000101fbd344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd1b0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c511cc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3ea00();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101fbc7cc();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101fbca44();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbd36c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e4b3e0) = lVar5;
      *(long *)(lVar3 + _DAT_112e4b3e8) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101fbd36c; end: 101fbd393; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101fbd36c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fbd1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fbd394; end: 101fbd3d7; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint end] */

void FUN_101fbd394(undefined8 param_1)

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



/* Entry: 101fbd3d8; end: 101fbd5db;  */

void FUN_101fbd3d8(long param_1,long param_2,long param_3)

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
  }
  else {
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0fb08b0)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010f04f750,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000033;
        if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0fb0890)) &&
           (func_0x000107c605b8(0xd000000000000033,0x800000010f04f770,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BitmojiOutfitSharingScopeGraphBridge/SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x60,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbd5dc);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52d20();
        goto LAB_101fbd464;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58774();
  }
LAB_101fbd464:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fbd5dc; end: 101fbd687; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101fbd5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fbd3d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fbd688; end: 101fbd6ff; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd688(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4b4b8,0);
  *(undefined8 *)(param_1 + _DAT_112e4b4c0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4b4c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4b4d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fbd700; end: 101fbd733;  */

void FUN_101fbd700(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fbd734; end: 101fbd78b; -[SCBitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fbd760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fbd764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd734(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4b4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b4c0));
  return;
}



/* Entry: 101fbd78c; end: 101fbd7ab;  */

void FUN_101fbd78c(void)

{
  func_0x000107c61168(&PTR_PTR_112811cc0);
  return;
}



/* Entry: 101fbd7ac; end: 101fbd7f3; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd7ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b500;
  func_0x000107c61428(param_1 + _DAT_112e4b500,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fbd7f4; end: 101fbd84b; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b500;
  func_0x000107c61428(param_1 + _DAT_112e4b500,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fbd84c; end: 101fbd923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd84c(undefined8 param_1,long param_2)

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
    FUN_101fbca24();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4b418) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fbd924);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4b420);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4b508);
    *(long **)(unaff_x20 + _DAT_112e4b508) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101fbd924; end: 101fbd94b; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint begin] */

void FUN_101fbd924(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fbd84c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fbd94c; end: 101fbdac3;  */

/* WARNING: Possible PIC construction at 0x000101fbd9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbda4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fbd9b8) */
/* WARNING: Removing unreachable block (ram,0x000101fbda50) */
/* WARNING: Removing unreachable block (ram,0x000101fbda68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbd94c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4b508);
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



/* Entry: 101fbdac4; end: 101fbdacb;  */

void FUN_101fbdac4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fbdacc; end: 101fbdaff; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint end] */

void FUN_101fbdacc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fbd94c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fbdb00; end: 101fbdc1f;  */

void FUN_101fbdb00(long param_1,long param_2,long param_3)

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
                        "BitmojiOutfitSharingScopeGraphBridge/SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbdc20);
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



/* Entry: 101fbdc20; end: 101fbdccb; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fbdc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fbdb00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fbdccc; end: 101fbdd2b; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbdccc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4b500,0);
  *(undefined8 *)(param_1 + _DAT_112e4b508) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fbdd2c; end: 101fbdd5f;  */

void FUN_101fbdd2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fbdd60; end: 101fbdd97; -[SCSCBitmojiOutfitSharingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbdd60(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4b500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b508));
  return;
}



/* Entry: 101fbdd98; end: 101fbddb7;  */

void FUN_101fbdd98(void)

{
  func_0x000107c61168(&PTR_PTR_112811d90);
  return;
}



/* Entry: 101fbddb8; end: 101fbde23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbddb8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fbe1ac();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4b540) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fbde24; end: 101fbde8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbde24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4b540) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fbde90; end: 101fbdeef; -[_TtC38CaaSCameraScopedFactoryServiceProvider26SCCaaSCameraScopedServices init] */

void FUN_101fbde90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopedFactoryServiceProvider.SCCaaSCameraScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbdebc);
  (*pcVar1)();
}



/* Entry: 101fbdef0; end: 101fbdeff; -[_TtC38CaaSCameraScopedFactoryServiceProvider26SCCaaSCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbdef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4b540));
  return;
}



/* Entry: 101fbdf00; end: 101fbdf6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbdf00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b3500;
  func_0x000107c613fc(&UNK_1104b3500,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fbe288,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fbdf6c; end: 101fbe007;  */

void FUN_101fbdf6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b3410;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b3410;
  return;
}



/* Entry: 101fbe008; end: 101fbe03f;  */

void FUN_101fbe008(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101fbe040; end: 101fbe047;  */

undefined8 FUN_101fbe040(void)

{
  return 0x1b;
}



/* Entry: 101fbe048; end: 101fbe17b;  */

void FUN_101fbe048(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b3528;
  func_0x000107c613fc(&UNK_1104b3528,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fbe260;
  func_0x00010058fa64(FUN_101fbe260,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fbe17c; end: 101fbe1ab;  */

undefined ** FUN_101fbe17c(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fbe1ac; end: 101fbe1cb;  */

void FUN_101fbe1ac(void)

{
  func_0x000107c61168(&PTR_PTR_112811e50);
  return;
}



/* Entry: 101fbe1cc; end: 101fbe21b;  */

undefined1  [16] FUN_101fbe1cc(void)

{
  return ZEXT816(0x1104b3460);
}



/* Entry: 101fbe21c; end: 101fbe25f;  */

void FUN_101fbe21c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4b5a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9ce8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e4b5a8 = puVar1;
  return;
}



/* Entry: 101fbe260; end: 101fbe287;  */

void FUN_101fbe260(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fbe288; end: 101fbe28b;  */

void FUN_101fbe288(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fbe28c; end: 101fbe3d3;  */

/* WARNING: Possible PIC construction at 0x000101fbe364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbe374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbe384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbe394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbe3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fbe398) */
/* WARNING: Removing unreachable block (ram,0x000101fbe388) */
/* WARNING: Removing unreachable block (ram,0x000101fbe378) */
/* WARNING: Removing unreachable block (ram,0x000101fbe368) */
/* WARNING: Removing unreachable block (ram,0x000101fbe3a8) */

void FUN_101fbe28c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104b35b0;
  func_0x000107c613fc(&UNK_1104b35b0,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  uVar2 = 0x112e4b5b8;
  func_0x0001000285a8(0x112e4b5b8,&UNK_10da448d0);
  func_0x000107c613fc();
  uVar3 = 0x101fbef28;
  func_0x0001000841fc(0x101fbef28,puVar1,uVar2);
  func_0x000100084214(&UNK_10da448a0,0x28,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fbe3d4; end: 101fbe40f;  */

void FUN_101fbe3d4(void)

{
  long unaff_x20;
  
  FUN_101fbe28c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101fbe410; end: 101fbe41f;  */

undefined1  [16] FUN_101fbe410(void)

{
  return ZEXT816(0x1104b3590);
}



/* Entry: 101fbe420; end: 101fbeeb3;  */

void FUN_101fbe420(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  char *pcVar8;
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
  code *pcVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 auStack_70 [2];
  
  uVar29 = *param_2;
  func_0x0001000285a8(0x112e4b5c0,&UNK_10da448d8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar29;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101fc27fc();
  pcVar3 = "SCCameraUIScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  FUN_101fc286c();
  func_0x000100082720("SCARBarPluginScopeExposerSubjectServiceProvider",0x2f,2);
  puVar4 = puVar2;
  func_0x000101fc2850();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101fbe008;
  func_0x0001000823a8(FUN_101fbe008,0);
  func_0x000100082720("SCCaaSCameraScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e4b5c8,&UNK_10da45010);
  puVar6 = &UNK_1104b35d8;
  func_0x000107c613fc(&UNK_1104b35d8,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar4);
  pcVar7 = FUN_101fbef64;
  func_0x0001000823a8(FUN_101fbef64,puVar6);
  func_0x000100082720("CaaSCameraUIEntryPointWrapperServiceProvider",0x2c,2);
  pcVar8 = pcVar3;
  FUN_101fc28fc();
  func_0x000100082720("SCARBarPluginScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e4b5d0,&UNK_10da448e0);
  func_0x000107c6157c(pcVar7);
  uVar29 = 0x101fbef70;
  func_0x0001000823a8(0x101fbef70,pcVar7);
  func_0x000100082720("CaaSCameraCameraUIServiceServiceProvider",0x28,2);
  uVar9 = uVar29;
  func_0x0001033694f0();
  func_0x000100082720("SCCaaSCameraScopedARBarTabInfoProvidingServicesServiceProvider",0x3e,2);
  uVar10 = uVar29;
  func_0x000103368770();
  func_0x000100082720("SCCaaSCameraScopedCameraFeatureServicesServiceProvider",0x36,2);
  uVar11 = uVar29;
  func_0x0001033686d8();
  func_0x000100082720("SCCaaSCameraScopedCameraUIServicesServiceProvider",0x31,2);
  uVar12 = uVar29;
  func_0x000103369458();
  func_0x000100082720("SCCaaSCameraScopedLensCarouselDataProvidingServicesServiceProvider",0x42,2);
  uVar13 = uVar29;
  func_0x0001033693c8();
  func_0x000100082720("SCCaaSCameraScopedLensCarouselFeatureServicesServiceProvider",0x3c,2);
  uVar14 = uVar29;
  func_0x00010336940c();
  func_0x000100082720("SCCaaSCameraScopedLensCarouselResetServicesServiceProvider",0x3a,2);
  uVar15 = uVar29;
  func_0x0001033694a4();
  func_0x000100082720("SCCaaSCameraScopedLensCarouselSessionServicesServiceProvider",0x3c,2);
  uVar16 = uVar29;
  func_0x000103368724();
  func_0x000100082720("SCCaaSCameraScopedMiniCameraActivationStateServicesServiceProvider",0x42,2);
  uVar17 = uVar29;
  func_0x0001033687bc();
  func_0x000100082720("SCCaaSCameraScopedMiniCameraTrayNavigationServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4b5d8,&UNK_10da44ae0);
  puVar6 = &UNK_1104b3600;
  func_0x000107c613fc(&UNK_1104b3600,0x60,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar10;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(undefined8 *)(puVar6 + 0x28) = param_4;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  *(undefined8 *)(puVar6 + 0x40) = param_7;
  *(undefined8 *)(puVar6 + 0x48) = uVar14;
  *(undefined8 *)(puVar6 + 0x50) = uVar13;
  *(char **)(puVar6 + 0x58) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar8);
  uVar18 = 0x101fbef78;
  func_0x0001000823a8(0x101fbef78,puVar6);
  func_0x000100082720("ARBarCaaSCameraIntegrationEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e4b5e0,&UNK_10da448f0);
  puVar6 = &UNK_1104b3628;
  func_0x000107c613fc(&UNK_1104b3628,0x48,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar11;
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  *(undefined8 *)(puVar6 + 0x28) = uVar16;
  *(undefined8 *)(puVar6 + 0x30) = param_8;
  *(undefined8 *)(puVar6 + 0x38) = param_4;
  *(undefined8 *)(puVar6 + 0x40) = param_9;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar19 = 0x101fbef84;
  func_0x0001000823a8(0x101fbef84,puVar6);
  func_0x000100082720("ARBarCaaSMiniCameraLensIconEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e4b5e8,&UNK_10da448f8);
  func_0x000107c6157c(uVar18);
  uVar20 = 0x101fbef98;
  func_0x0001000823a8(0x101fbef98,uVar18);
  func_0x000100082720("SCCaaSCameraScopedARBarReplyIntegrationServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e4b5f0,&UNK_10da44900);
  func_0x000107c6157c(uVar18);
  uVar21 = 0x101fbefa0;
  func_0x0001000823a8(0x101fbefa0,uVar18);
  func_0x000100082720("SCCaaSCameraScopedARBarReplyServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4b5f8,&UNK_10da44930);
  puVar6 = &UNK_1104b3650;
  func_0x000107c613fc(&UNK_1104b3650,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar21;
  *(undefined8 *)(puVar6 + 0x20) = param_10;
  *(undefined8 *)(puVar6 + 0x28) = uVar20;
  *(undefined8 *)(puVar6 + 0x30) = param_7;
  func_0x000107c6157c();
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(uVar20);
  uVar22 = 0x101fbefa8;
  func_0x0001000823a8(0x101fbefa8,puVar6);
  func_0x000100082720("ARBarCaaSCameraAdapterEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4b600,&UNK_10da44910);
  puVar6 = &UNK_1104b3678;
  func_0x000107c613fc(&UNK_1104b3678,0x60,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar21;
  *(undefined8 *)(puVar6 + 0x20) = param_11;
  *(undefined8 *)(puVar6 + 0x28) = param_6;
  *(undefined8 *)(puVar6 + 0x30) = param_4;
  *(undefined8 *)(puVar6 + 0x38) = param_12;
  *(undefined8 *)(puVar6 + 0x40) = param_7;
  *(undefined8 *)(puVar6 + 0x48) = param_13;
  *(undefined8 *)(puVar6 + 0x50) = uVar15;
  *(undefined8 *)(puVar6 + 0x58) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar9);
  pcVar23 = FUN_101fbf024;
  func_0x0001000823a8(FUN_101fbf024,puVar6);
  func_0x000100082720("ARBarCaaSCameraLoggingEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4b608,&UNK_10da44918);
  func_0x000107c6157c(uVar22);
  pcVar24 = FUN_101fbf068;
  func_0x0001000823a8(FUN_101fbf068,uVar22);
  func_0x000100082720("SCCaaSCameraScopedARBarReplyAdapterServicesServiceProvider",0x3a,2);
  uVar25 = uVar29;
  FUN_101fc2388(uVar29,pcVar3,pcVar24,uVar20,uVar21,uVar12,uVar13,uVar17,puVar2);
  func_0x000100082720("CaaSCameraScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e4b610,&UNK_10da44920);
  puVar6 = &UNK_1104b36a0;
  func_0x000107c613fc(&UNK_1104b36a0,0x50,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar22;
  *(undefined8 *)(puVar6 + 0x18) = uVar18;
  *(code **)(puVar6 + 0x20) = pcVar23;
  *(undefined8 *)(puVar6 + 0x28) = uVar19;
  *(undefined8 **)(puVar6 + 0x30) = puVar1;
  *(undefined8 *)(puVar6 + 0x38) = uVar25;
  *(code **)(puVar6 + 0x40) = pcVar7;
  *(code **)(puVar6 + 0x48) = pcVar5;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(pcVar23);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(pcVar5);
  uVar26 = 0x101fbf070;
  func_0x0001000823a8(0x101fbf070,puVar6);
  func_0x000100082720("SCCaaSCameraScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e4b548,&UNK_10da446a0);
  func_0x000107c6157c(uVar26);
  uVar27 = 0x101fbf084;
  func_0x0001000823a8(0x101fbf084,uVar26);
  func_0x000100082720("SCCaaSCameraScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e4b538,&UNK_10da44690);
  func_0x000107c6157c(uVar27);
  uVar28 = 0x101fbf08c;
  func_0x0001000823a8(0x101fbf08c,uVar27);
  func_0x000100082720("SCCaaSCameraScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104b36c8;
  func_0x000107c613fc(&UNK_1104b36c8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar28;
  *(code **)(puVar6 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar28 = 0x101fbf094;
  func_0x0001000823a8(0x101fbf094,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar27);
  func_0x000100082720("SCCaaSCameraScopeEntryPointProvider",0x23,2);
  *param_1 = uVar28;
  return;
}



/* Entry: 101fbeeb4; end: 101fbef63;  */

void FUN_101fbeeb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fbef64; end: 101fbefb7;  */

void FUN_101fbef64(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101fc0d20();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101fc0bc4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbefb8; end: 101fbf023;  */

void FUN_101fbefb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fbf024; end: 101fbf02f;  */

void FUN_101fbf024(void)

{
  long unaff_x20;
  
  FUN_101fbfe24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101fbf030; end: 101fbf067;  */

void FUN_101fbf030(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101fbf068; end: 101fbf09b;  */

void FUN_101fbf068(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbf09c; end: 101fbf293;  */

/* WARNING: Possible PIC construction at 0x000101fbf154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fbf16c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fbf158) */
/* WARNING: Removing unreachable block (ram,0x000101fbf170) */

void FUN_101fbf09c(long param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000100083b20(auStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_101fbf3f0();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = uStack_68;
  *(undefined8 *)(param_1 + 0x28) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = uStack_78;
  func_0x000103829438(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_60);
  return;
}



/* Entry: 101fbf294; end: 101fbf2df;  */

void FUN_101fbf294(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fbf2e0; end: 101fbf333;  */

void FUN_101fbf2e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbf334; end: 101fbf33b;  */

undefined8 FUN_101fbf334(void)

{
  return 0x1b;
}



/* Entry: 101fbf33c; end: 101fbf3bf;  */

void FUN_101fbf33c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fbf440,param_2,FUN_101fbf444,param_2,0x101fbf46c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fbf3c0; end: 101fbf3ef;  */

undefined ** FUN_101fbf3c0(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fbf3f0; end: 101fbf40f;  */

void FUN_101fbf3f0(void)

{
  func_0x000107c61168(&PTR_PTR_112e4b680);
  return;
}



/* Entry: 101fbf410; end: 101fbf443;  */

undefined1  [16] FUN_101fbf410(void)

{
  return ZEXT816(0x1104b3720);
}



/* Entry: 101fbf444; end: 101fbf497;  */

void FUN_101fbf444(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fbf498; end: 101fbfb63;  */

void FUN_101fbf498(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  FUN_101fbfd6c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  func_0x0001000285a8(0x112e4b708,&UNK_10da44ae8);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010025a71c();
  puVar11 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar12;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar13;
  func_0x00010382b0bc();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = uVar10;
  func_0x000103829648(uVar10,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,puVar12,puVar13,puVar11
                     );
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  func_0x000107c6157c();
  func_0x0001038298ac();
  func_0x000107c61574(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbf85c);
    (*pcVar1)();
  }
  *(undefined **)(param_2 + 0x70) = puVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar13 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uStack_b8);
    *(undefined **)(param_2 + 0x78) = puVar13;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbf860);
  (*pcVar1)();
}



/* Entry: 101fbfb64; end: 101fbfc07;  */

void FUN_101fbfb64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101fbfc08; end: 101fbfcaf;  */

void FUN_101fbfc08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbfcb0; end: 101fbfcb7;  */

undefined8 FUN_101fbfcb0(void)

{
  return 0x1b;
}



/* Entry: 101fbfcb8; end: 101fbfd3b;  */

void FUN_101fbfcb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fbfdcc,param_2,FUN_101fbfdd0,param_2,0x101fbfdf8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fbfd3c; end: 101fbfd6b;  */

undefined ** FUN_101fbfd3c(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fbfd6c; end: 101fbfd8b;  */

void FUN_101fbfd6c(void)

{
  func_0x000107c61168(&PTR_PTR_112e4b778);
  return;
}



/* Entry: 101fbfd8c; end: 101fbfdcf;  */

undefined1  [16] FUN_101fbfd8c(void)

{
  return ZEXT816(0x1104b37c0);
}



/* Entry: 101fbfdd0; end: 101fbfe23;  */

void FUN_101fbfdd0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fbfe24; end: 101fc035f;  */

void FUN_101fbfe24(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  FUN_101fc04a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  func_0x00010382dd10();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = uVar10;
  func_0x00010382d4d8();
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  func_0x000107c6157c();
  func_0x00010382dc34();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar11);
  *param_1 = param_2;
  return;
}



/* Entry: 101fc0360; end: 101fc03e3;  */

void FUN_101fc0360(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101fc03e4; end: 101fc03eb;  */

undefined8 FUN_101fc03e4(void)

{
  return 0x1b;
}



/* Entry: 101fc03ec; end: 101fc046f;  */

void FUN_101fc03ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fc04e0,param_2,FUN_101fc04e4,param_2,0x101fc050c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fc0470; end: 101fc049f;  */

undefined ** FUN_101fc0470(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fc04a0; end: 101fc04bf;  */

void FUN_101fc04a0(void)

{
  func_0x000107c61168(&PTR_PTR_112e4b8a8);
  return;
}



/* Entry: 101fc04c0; end: 101fc04e3;  */

undefined1  [16] FUN_101fc04c0(void)

{
  return ZEXT816(0x1104b3880);
}



/* Entry: 101fc04e4; end: 101fc0537;  */

void FUN_101fc04e4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fc0538; end: 101fc07ab;  */

void FUN_101fc0538(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_101fc08d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  func_0x00010382f030(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uStack_98);
  func_0x00010382e960(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uStack_98);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 101fc07ac; end: 101fc0817;  */

void FUN_101fc07ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101fc0818; end: 101fc081f;  */

undefined8 FUN_101fc0818(void)

{
  return 0x1b;
}



/* Entry: 101fc0820; end: 101fc08a3;  */

void FUN_101fc0820(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fc0914,param_2,FUN_101fc0918,param_2,0x101fc0940,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fc08a4; end: 101fc08d3;  */

undefined ** FUN_101fc08a4(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fc08d4; end: 101fc08f3;  */

void FUN_101fc08d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e4b9b8);
  return;
}



/* Entry: 101fc08f4; end: 101fc0917;  */

undefined1  [16] FUN_101fc08f4(void)

{
  return ZEXT816(0x1104b3900);
}



/* Entry: 101fc0918; end: 101fc096b;  */

void FUN_101fc0918(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fc096c; end: 101fc0a1b;  */

void FUN_101fc096c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101fc0d20();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101fc0bc4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc0a1c; end: 101fc0a8b;  */

undefined8 FUN_101fc0a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101fc0bc4(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 101fc0a8c; end: 101fc0acf;  */

void FUN_101fc0a8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fc0ad0; end: 101fc0b23;  */

void FUN_101fc0ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc0b24; end: 101fc0b2b;  */

undefined8 FUN_101fc0b24(void)

{
  return 0x1b;
}



/* Entry: 101fc0b2c; end: 101fc0baf;  */

void FUN_101fc0b2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fc0d70,param_2,FUN_101fc0d74,param_2,0x101fc0d9c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fc0bb0; end: 101fc0bc3;  */

void FUN_101fc0bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104b3940;
  return;
}



/* Entry: 101fc0bc4; end: 101fc0d03;  */

void FUN_101fc0bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010336d180(0);
  func_0x000107c613fc();
  uVar3 = param_1;
  func_0x00010336c3c0(param_1,param_2,puVar2,uVar5);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x00010336c3d0();
  func_0x000107c61574(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc0d04);
  (*pcVar1)();
}


