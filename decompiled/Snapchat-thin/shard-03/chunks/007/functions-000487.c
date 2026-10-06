/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c1e5fc; end: 102c1e6cf; -[SensitiveContentWarningOperaLayer initWithMediaID:imageKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c1e5fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar5 = param_2;
  func_0x000107c5faec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112effe48);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112effe50);
  *puVar1 = param_4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112effe58);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  lVar2 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,lVar2,0x38,7);
  return (undefined1 *)plVar4;
}



/* Entry: 102c1e6d0; end: 102c1e887; -[SensitiveContentWarningOperaLayer initWithMediaID:imageKey:videoURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102c1e6d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_78 = param_1;
  func_0x000107c614f0();
  lVar2 = 0;
  lStack_80 = param_1;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = auStack_90 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar12 - extraout_x12;
  func_0x000107c5faec();
  uVar6 = param_2;
  uStack_88 = param_3;
  func_0x000107c5faec();
  func_0x000107c5edb4(lVar9,param_5);
  (**(code **)(lVar8 + 0x10))(puVar12,lVar9,lVar2);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar10 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1105b34e8;
  func_0x000107c613fc(&UNK_1105b34e8,uVar10 + lVar11,uVar7 | 7);
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar10,puVar12,lVar2);
  lVar11 = lStack_80;
  lVar4 = lStack_80;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112effe48);
  *puVar1 = uStack_88;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112effe50);
  *puVar1 = param_4;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112effe58);
  *puVar1 = FUN_102c1ec54;
  puVar1[1] = puVar3;
  lStack_68 = lVar11;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  (**(code **)(lVar8 + 8))(lVar9,lVar2);
  lVar11 = lStack_78;
  lVar4 = lStack_78;
  func_0x000107c614f0(lStack_78);
  func_0x000107c61464(lVar11,lVar4,0x38,7);
  return plVar5;
}



/* Entry: 102c1e888; end: 102c1e923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effe48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effe50);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effe58);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c1e924; end: 102c1e927;  */

void FUN_102c1e924(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))
            (param_1,unaff_x20 +
                     ((ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
                     ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102c1ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_1,0,1,lVar1);
  return;
}



/* Entry: 102c1e928; end: 102c1e92f; -[SensitiveContentWarningOperaLayer type] */

undefined8 FUN_102c1e928(void)

{
  return 0x19;
}



/* Entry: 102c1e930; end: 102c1e937; -[SensitiveContentWarningOperaLayer layerContentType] */

undefined8 FUN_102c1e930(void)

{
  return 3;
}



/* Entry: 102c1e938; end: 102c1ea07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c1e938(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112effe48);
      if (lVar1 == *(long *)(lStack_58 + _DAT_112effe48) &&
          ((long *)(unaff_x20 + _DAT_112effe48))[1] == ((long *)(lStack_58 + _DAT_112effe48))[1]) {
        func_0x000107c61170(lStack_58);
        uVar3 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar3 = (uint)lVar1;
        func_0x000107c61170(lStack_58);
      }
      goto LAB_102c1e9e0;
    }
  }
  uVar3 = 0;
LAB_102c1e9e0:
  return uVar3 & 1;
}



/* Entry: 102c1ea08; end: 102c1ea87; -[SensitiveContentWarningOperaLayer isEqual:] */

uint FUN_102c1ea08(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102c1e938(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102c1ea88; end: 102c1eadb; -[SensitiveContentWarningOperaLayer hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c1ea88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112effe48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112effe48))[1];
  func_0x000107c61174();
  func_0x000107c5fbbc(uVar2,uVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 102c1eadc; end: 102c1eb0f;  */

void FUN_102c1eadc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c1eb10; end: 102c1eb63; -[SensitiveContentWarningOperaLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1eb10(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112effe48 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112effe50 + 8));
  if (*(long *)(param_1 + _DAT_112effe58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112effe58))[1]);
    return;
  }
  return;
}



/* Entry: 102c1eb64; end: 102c1eb73;  */

void FUN_102c1eb64(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c1eb74; end: 102c1eb93;  */

void FUN_102c1eb74(void)

{
  func_0x000107c61168(&PTR_PTR_112897a48);
  return;
}



/* Entry: 102c1eb94; end: 102c1ec53;  */

void FUN_102c1eb94(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c1ec54; end: 102c1ec57;  */

void FUN_102c1ec54(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))
            (param_1,unaff_x20 +
                     ((ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
                     ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102c1ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_1,0,1,lVar1);
  return;
}



/* Entry: 102c1ec58; end: 102c1ed6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c1ec58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102c1f684();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112effe88) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112effe90) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1ed70);
  (*pcVar2)();
}



/* Entry: 102c1ed70; end: 102c1edcf; -[_TtC28OperaSessionScopeGraphBridge43OperaSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_102c1ed70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaSessionScopeGraphBridge.OperaSessionScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1ed9c);
  (*pcVar1)();
}



/* Entry: 102c1edd0; end: 102c1ee07; -[_TtC28OperaSessionScopeGraphBridge43OperaSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c1edec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1edf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1edd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112effe88));
  return;
}



/* Entry: 102c1ee08; end: 102c1ee2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1ee08(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112effe90),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112effe88));
  return;
}



/* Entry: 102c1ee30; end: 102c1ee4f;  */

void FUN_102c1ee30(void)

{
  func_0x000107c61168(&PTR_PTR_112897b18);
  return;
}



/* Entry: 102c1ee50; end: 102c1eeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1ee50(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f00320);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c1eeb4; end: 102c1eebb;  */

void FUN_102c1eeb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c1eebc; end: 102c1ef5b;  */

void FUN_102c1eebc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c1ef5c; end: 102c1ef7b;  */

void FUN_102c1ef5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c1ef7c; end: 102c1efdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1ef7c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f00328);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c1efe0; end: 102c1efe7;  */

void FUN_102c1efe0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c1efe8; end: 102c1f087;  */

void FUN_102c1efe8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c1f088; end: 102c1f0a7;  */

void FUN_102c1f088(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c1f0a8; end: 102c1f10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1f0a8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f00330);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c1f10c; end: 102c1f113;  */

void FUN_102c1f10c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c1f114; end: 102c1f1b3;  */

void FUN_102c1f114(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c1f1b4; end: 102c1f1d3;  */

void FUN_102c1f1b4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c1f1d4; end: 102c1f237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1f1d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f00338);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c1f238; end: 102c1f23f;  */

void FUN_102c1f238(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c1f240; end: 102c1f2df;  */

void FUN_102c1f240(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c1f2e0; end: 102c1f2ff;  */

void FUN_102c1f2e0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c1f300; end: 102c1f363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1f300(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f00340);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c1f364; end: 102c1f36b;  */

void FUN_102c1f364(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c1f36c; end: 102c1f40b;  */

void FUN_102c1f36c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c1f40c; end: 102c1f42b;  */

void FUN_102c1f40c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c1f42c; end: 102c1f4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c1f42c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f002d0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f002d8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1f4b4);
  (*pcVar2)();
}



/* Entry: 102c1f4b4; end: 102c1f59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c1f4b4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f002d0);
  *(undefined **)(unaff_x20 + _DAT_112f002d0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f002d8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f002d8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105b3688;
  func_0x000107c613fc(&UNK_1105b3688,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102c1f5a0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102c1f59c; end: 102c1f5a7;  */

void FUN_102c1f59c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c1f5a8; end: 102c1f607; -[_TtC28OperaSessionScopeGraphBridge43SCOperaSessionScopedServicesSaberEntryPoint init] */

void FUN_102c1f5a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaSessionScopeGraphBridge.SCOperaSessionScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1f5d4);
  (*pcVar1)();
}



/* Entry: 102c1f608; end: 102c1f63f; -[_TtC28OperaSessionScopeGraphBridge43SCOperaSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1f608(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f002d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f002d0));
  return;
}



/* Entry: 102c1f640; end: 102c1f643;  */

void FUN_102c1f640(void)

{
  return;
}



/* Entry: 102c1f644; end: 102c1f663;  */

void FUN_102c1f644(void)

{
  FUN_102c1f4b4();
  return;
}



/* Entry: 102c1f664; end: 102c1f683;  */

void FUN_102c1f664(void)

{
  func_0x000107c61168(&PTR_PTR_112897be0);
  return;
}



/* Entry: 102c1f684; end: 102c1f753;  */

undefined8 FUN_102c1f684(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f00308,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102c1f754();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102c1f754; end: 102c1f773;  */

void FUN_102c1f754(void)

{
  func_0x000107c61168(&PTR_PTR_112897ca8);
  return;
}



/* Entry: 102c1f774; end: 102c1f967;  */

void FUN_102c1f774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f00310,&UNK_10db337a8);
  puVar1 = &UNK_1105b36d0;
  func_0x000107c613fc(&UNK_1105b36d0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_102c1f968,puVar1);
  return;
}



/* Entry: 102c1f968; end: 102c1f97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1f968(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_102c1f754();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112f00318) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112f00320) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f00328) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112f00330) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f00338) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f00340) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f00348) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102c1f97c; end: 102c1fa3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1f97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f00318) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f00320) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f00328) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f00330) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f00338) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f00340) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f00348) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c1fa40; end: 102c1fa9f; -[_TtC28OperaSessionScopeGraphBridge36OperaSessionScopeGraphBridgeServices init] */

void FUN_102c1fa40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaSessionScopeGraphBridge.OperaSessionScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1fa6c);
  (*pcVar1)();
}



/* Entry: 102c1faa0; end: 102c1fb67; -[_TtC28OperaSessionScopeGraphBridge36OperaSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c1fabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1fadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1fafc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1fae0) */
/* WARNING: Removing unreachable block (ram,0x000102c1fac0) */
/* WARNING: Removing unreachable block (ram,0x000102c1fb00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1faa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00320));
  return;
}



/* Entry: 102c1fb68; end: 102c1fb73;  */

void FUN_102c1fb68(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c1ff14,param_1);
  return;
}



/* Entry: 102c1fb74; end: 102c1fbff;  */

void FUN_102c1fb74(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c1ff1c,0);
  return;
}



/* Entry: 102c1fc00; end: 102c1fc0b;  */

void FUN_102c1fc00(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c1fc64,param_1);
  return;
}



/* Entry: 102c1fc0c; end: 102c1fc63;  */

void FUN_102c1fc0c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102c1fc64; end: 102c1fc97;  */

void FUN_102c1fc64(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102c1fc98; end: 102c1fc9f;  */

undefined8 FUN_102c1fc98(void)

{
  return 0x1b;
}



/* Entry: 102c1fca0; end: 102c1fe17;  */

void FUN_102c1fca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105b36f8;
  func_0x000107c613fc(&UNK_1105b36f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102c1fe18,puVar1);
  return;
}



/* Entry: 102c1fe18; end: 102c1fe1f;  */

void FUN_102c1fe18(undefined8 *param_1)

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
  func_0x000107c61428(0x112f00308,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f00308,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105b3810;
  func_0x000107c613fc(&UNK_1105b3810,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102c1ff0c;
  func_0x00010058fa64(0x102c1ff0c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c1fe20; end: 102c1fe7b;  */

void FUN_102c1fe20(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f00308,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f00308,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102c1fe7c; end: 102c1ff1f;  */

undefined ** FUN_102c1fe7c(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c1ff20; end: 102c1ff67; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1ff20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f003a0;
  func_0x000107c61428(param_1 + _DAT_112f003a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c1ff68; end: 102c1ffbf; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1ff68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f003a0;
  func_0x000107c61428(param_1 + _DAT_112f003a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c1ffc0; end: 102c20007; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint activeOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1ffc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f003a8;
  func_0x000107c61428(param_1 + _DAT_112f003a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c20008; end: 102c20013; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint setActiveOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f003a8;
  func_0x000107c61428(param_1 + _DAT_112f003a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c20014; end: 102c2005b; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint sCWDescriptiveRevealScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20014(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f003b0;
  func_0x000107c61428(param_1 + _DAT_112f003b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c2005c; end: 102c20067; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint setSCWDescriptiveRevealScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2005c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f003b0;
  func_0x000107c61428(param_1 + _DAT_112f003b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c20068; end: 102c200af; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint operaSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20068(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f003b8;
  func_0x000107c61428(param_1 + _DAT_112f003b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c200b0; end: 102c200bb; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint setOperaSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c200b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f003b8;
  func_0x000107c61428(param_1 + _DAT_112f003b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c200bc; end: 102c2011b;  */

void FUN_102c200bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102c2011c; end: 102c20353;  */

/* WARNING: Possible PIC construction at 0x000102c20288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c20298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c202b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c202c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c202e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c20328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c202c8) */
/* WARNING: Removing unreachable block (ram,0x000102c202b8) */
/* WARNING: Removing unreachable block (ram,0x000102c2029c) */
/* WARNING: Removing unreachable block (ram,0x000102c2028c) */
/* WARNING: Removing unreachable block (ram,0x000102c2032c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2011c(void)

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
  func_0x000107c3d16c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51588();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4df64();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102c1ee30();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102c1f684();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102c20354);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112effe88) = lVar5;
        *(long *)(lVar4 + _DAT_112effe90) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102c20354; end: 102c2037b; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102c20354(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c2011c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c2037c; end: 102c203bf; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_102c2037c(undefined8 param_1)

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



/* Entry: 102c203c0; end: 102c2062f;  */

void FUN_102c203c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0f01c40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f0fe3c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0f3ed40)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010f0c12c0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58b30();
        }
        else {
          uVar2 = 0xd00000000000002b;
          if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f00720)) &&
             (func_0x000107c605b8(0xd00000000000002b,0x800000010f0ff8e0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "OperaSessionScopeGraphBridge/SCOperaSessionScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x50,2,0x41,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c20630);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57028();
        }
        goto LAB_102c2044c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52208();
  }
LAB_102c2044c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c20630; end: 102c206db; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102c20630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c203c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c206dc; end: 102c2075f; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c206dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f003a0,0);
  *(undefined8 *)(param_1 + _DAT_112f003a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f003b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f003b8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f003c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c20760; end: 102c20793;  */

void FUN_102c20760(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c20794; end: 102c207fb; -[SCOperaSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c207c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c207e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c207c4) */
/* WARNING: Removing unreachable block (ram,0x000102c207e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20794(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f003a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f003a8));
  return;
}



/* Entry: 102c207fc; end: 102c2081b;  */

void FUN_102c207fc(void)

{
  func_0x000107c61168(&PTR_PTR_112897d98);
  return;
}



/* Entry: 102c2081c; end: 102c20827; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2081c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f003f0;
  func_0x000107c61428(param_1 + _DAT_112f003f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c20828; end: 102c20833; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f003f0;
  func_0x000107c61428(param_1 + _DAT_112f003f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c20834; end: 102c2083f; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider operaSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20834(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f003f8;
  func_0x000107c61428(param_1 + _DAT_112f003f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c20840; end: 102c20883;  */

void FUN_102c20840(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c20884; end: 102c2088f; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider setOperaSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f003f8;
  func_0x000107c61428(param_1 + _DAT_112f003f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c20890; end: 102c208e3;  */

void FUN_102c20890(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c208e4; end: 102c20af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c208e4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4df60();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c1eee0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f00320);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f00400);
      *(long *)(unaff_x20 + _DAT_112f00400) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "OperaSessionScopeGraphBridge/SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c20a10);
  (*pcVar1)();
}



/* Entry: 102c20af8; end: 102c20b2b; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider provide] */

void FUN_102c20af8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c208e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c20b2c; end: 102c20b5f; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider __safeProvide] */

void FUN_102c20b2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c20a10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c20b60; end: 102c20ba3; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider end] */

void FUN_102c20b60(undefined8 param_1)

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



/* Entry: 102c20ba4; end: 102c20d3b;  */

void FUN_102c20ba4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f00630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f0ff9d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaSessionScopeGraphBridge/SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c20d3c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57024();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c20d3c; end: 102c20de7; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102c20d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c20ba4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c20de8; end: 102c20e5b; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20de8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f003f0,0);
  func_0x000107c61614(param_1 + _DAT_112f003f8,0);
  *(undefined8 *)(param_1 + _DAT_112f00400) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c20e5c; end: 102c20e8f;  */

void FUN_102c20e5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c20e90; end: 102c20ed7; -[SCSCAdUnifiedEventObservableBusServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20e90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f003f0);
  func_0x000107c61610(param_1 + _DAT_112f003f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00400));
  return;
}



/* Entry: 102c20ed8; end: 102c20ef7;  */

void FUN_102c20ed8(void)

{
  func_0x000107c61168(&PTR_PTR_112f00448);
  return;
}



/* Entry: 102c20ef8; end: 102c20f03; -[SCSCOperaDebugServicesWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20ef8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f004b0;
  func_0x000107c61428(param_1 + _DAT_112f004b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


