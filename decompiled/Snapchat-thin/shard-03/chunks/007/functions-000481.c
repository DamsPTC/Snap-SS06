/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c0056c; end: 102c00647;  */

void FUN_102c0056c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10db310e0;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,2,&puStack_30,param_1 + 0x60);
  }
  return;
}



/* Entry: 102c00648; end: 102c0069b;  */

/* WARNING: Possible PIC construction at 0x000102c00684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c00688) */

void FUN_102c00648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102c00608(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c0069c; end: 102c006db;  */

void FUN_102c0069c(undefined8 param_1,undefined8 param_2)

{
  ulong *unaff_x20;
  
  (**(code **)(*(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x58) + 0x20))
            (param_1,param_2,
             *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  return;
}



/* Entry: 102c006dc; end: 102c00737;  */

void FUN_102c006dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102c0069c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c00738; end: 102c00753;  */

void FUN_102c00738(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("Inspector.Channel",0x11,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c00cb0);
  (*pcVar1)();
}



/* Entry: 102c00754; end: 102c00787;  */

void FUN_102c00754(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c00788; end: 102c007eb;  */

void FUN_102c00788(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar2 = *param_1;
  uVar3 = *(ulong *)PTR__swift_isaMask_11034f488;
  func_0x000107c61170(*(undefined8 *)((long)param_1 + *(long *)((uVar3 & uVar2) + 0x60)));
                    /* WARNING: Could not recover jumptable at 0x000102c007e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)((uVar3 & uVar2) + 0x50) + -8) + 8))
            ((long)param_1 + *(long *)((*(ulong *)puVar1 & *param_1) + 0x68));
  return;
}



/* Entry: 102c007ec; end: 102c007f7;  */

void FUN_102c007ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e71fc74);
  return;
}



/* Entry: 102c007f8; end: 102c00843;  */

void FUN_102c007f8(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = &UNK_10db310e0;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x60);
  return;
}



/* Entry: 102c00844; end: 102c008b3;  */

long FUN_102c00844(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c5eb50();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x18) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 102c008b4; end: 102c00aa3;  */

/* WARNING: Possible PIC construction at 0x000102c009ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c00a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c009b0) */
/* WARNING: Removing unreachable block (ram,0x000102c009e0) */
/* WARNING: Removing unreachable block (ram,0x000102c00a6c) */
/* WARNING: Removing unreachable block (ram,0x000102c00a88) */
/* WARNING: Removing unreachable block (ram,0x000102c00978) */

void FUN_102c008b4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  FUN_102c00844();
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x58);
  uVar3 = 0;
  func_0x000107c614b8(0,lVar4,uVar1,&UNK_10e71fedc,&UNK_10e71feec);
  func_0x000107c614b4(lVar4,uVar1,uVar3,&UNK_10e71fedc,&UNK_10e71fee4);
  func_0x000107c5eb4c(param_1,uVar3,*(undefined8 *)(lVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar2);
  return;
}



/* Entry: 102c00aa4; end: 102c00b23;  */

/* WARNING: Possible PIC construction at 0x000102c00b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c00b0c) */

void FUN_102c00aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)((long)*(ulong **)(param_1 + 0x10) +
                   *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(param_1 + 0x10))
                            + 0x60));
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c51d90(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c00b24; end: 102c00b4f;  */

void FUN_102c00b24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c00b50; end: 102c00b5b;  */

void FUN_102c00b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e71fcf0);
  return;
}



/* Entry: 102c00b5c; end: 102c00b7b;  */

void FUN_102c00b5c(void)

{
  FUN_102c008b4();
  return;
}



/* Entry: 102c00b7c; end: 102c00c0b;  */

void FUN_102c00b7c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar2 = *unaff_x20;
  uVar3 = *(ulong *)PTR__swift_isaMask_11034f488;
  *(undefined8 *)((long)unaff_x20 + *(long *)((uVar3 & uVar2) + 0x60)) = 0;
  (**(code **)(*(long *)(*(long *)((uVar3 & uVar2) + 0x50) + -8) + 0x10))
            ((long)unaff_x20 + *(long *)((*(ulong *)puVar1 & *unaff_x20) + 0x68),param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c00c0c; end: 102c00c5b;  */

void FUN_102c00c0c(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  unaff_x20[3] = 0;
  uVar1 = 0;
  FUN_102c007ec(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x58));
  func_0x000107c610f8();
  FUN_102c00b7c(param_1,uVar1);
  unaff_x20[2] = param_1;
  return;
}



/* Entry: 102c00c5c; end: 102c00c83;  */

/* WARNING: Possible PIC construction at 0x000102c00b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c00b0c) */

void FUN_102c00c5c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = *(ulong **)(*(long *)(unaff_x20 + 0x10) + 0x10);
  lVar2 = *(long *)((long)puVar4 +
                   *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x60));
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c5fadc(uVar1,uVar3);
    func_0x000107c51d90(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102c00c84; end: 102c00caf;  */

void FUN_102c00c84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("Inspector.Channel",0x11,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c00cb0);
  (*pcVar1)();
}



/* Entry: 102c00cb0; end: 102c00cb7;  */

void FUN_102c00cb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102c00cb8; end: 102c00d0f;  */

void FUN_102c00cb8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c498f8();
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c00d10; end: 102c00d7f; -[_TtC9InspectorP33_54E95AC736F533FECA1D4A136A0D886F15ManagerObserver onSecurityKeyChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c00d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x000107c5faec(param_3);
  pcVar1 = *(code **)(param_1 + _DAT_112efe5d8);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c00d80; end: 102c00dbf; -[_TtC9InspectorP33_54E95AC736F533FECA1D4A136A0D886F15ManagerObserver onConnectionEstablished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c00d80(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112efe5e0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c00dc0; end: 102c00dff; -[_TtC9InspectorP33_54E95AC736F533FECA1D4A136A0D886F15ManagerObserver onConnectionClosed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c00dc0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112efe5e8);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c00e00; end: 102c00e5f; -[_TtC9InspectorP33_54E95AC736F533FECA1D4A136A0D886F15ManagerObserver init] */

void FUN_102c00e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("Inspector.ManagerObserver",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c00e2c);
  (*pcVar1)();
}



/* Entry: 102c00e60; end: 102c00eb3; -[_TtC9InspectorP33_54E95AC736F533FECA1D4A136A0D886F15ManagerObserver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c00e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c00e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c00e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efe5d8 + 8));
  return;
}



/* Entry: 102c00eb4; end: 102c00ed3;  */

void FUN_102c00eb4(void)

{
  func_0x000107c61168(&PTR_PTR_112896328);
  return;
}



/* Entry: 102c00ed4; end: 102c00f1f;  */

void FUN_102c00ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c401e4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102c00f20; end: 102c00f83;  */

void FUN_102c00f20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  func_0x00010058ec44(0);
  uStack_28 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
  uStack_30 = 0x3ff0000000000000;
  uVar2 = uVar1;
  func_0x00010218a568();
  func_0x000107c5f16c(0x112efe6e0,&uStack_28,&uStack_30,uVar1,uVar2);
  return;
}



/* Entry: 102c00f84; end: 102c017bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c00f84(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  lVar11 = _DAT_112efe618;
  uVar3 = 0;
  FUN_102c02e18();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar11) = uVar3;
  lVar11 = _DAT_112efe620;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar11) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efe630);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efe638) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efe640) = 0;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + _DAT_112efe628) = puVar5;
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c61154(0,0,0,0,puVar6,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c3d89c(puVar6);
  lVar16 = _DAT_112efe618;
  func_0x000107c59c74(*(undefined8 *)(puVar6 + _DAT_112efe618));
  uVar3 = *(undefined8 *)(puVar6 + lVar16);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar3);
  puVar7 = puVar4;
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c5251c(*(undefined8 *)(puVar6 + lVar16));
  func_0x000107c5a100(*(undefined8 *)(puVar6 + lVar16));
  uVar3 = *(undefined8 *)(puVar6 + lVar16);
  func_0x000107c61174(uVar3);
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c3fdd0(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c52b50(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c5a050(*(undefined8 *)(puVar6 + lVar16));
  func_0x000107c5a378(*(undefined8 *)(puVar6 + lVar16));
  puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(puVar6);
  func_0x000107c56bb8(puVar7);
  func_0x000107c3d6fc(*(undefined8 *)(puVar6 + lVar16));
  puVar8 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c56bb8();
  func_0x000107c50474(puVar8);
  func_0x000107c3d6fc(*(undefined8 *)(puVar6 + lVar16));
  func_0x000107c3d89c(puVar5);
  lVar2 = _DAT_112efe620;
  func_0x000107c53840(*(undefined8 *)(puVar6 + _DAT_112efe620));
  uVar3 = *(undefined8 *)(puVar6 + lVar2);
  func_0x000107c4aba4(uVar3);
  func_0x000107c61180();
  func_0x000107c56190();
  func_0x000107c61170(uVar3);
  func_0x000107c5a050(*(undefined8 *)(puVar6 + lVar2));
  func_0x000107c550d8(*(undefined8 *)(puVar6 + lVar2));
  func_0x000107c3d89c(puVar5);
  FUN_102c017bc();
  func_0x000107c425c4(puVar6);
  puVar4 = &UNK_1105b0538;
  func_0x000107c613fc(&UNK_1105b0538,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar6);
  pcStack_80 = FUN_102c031d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102c021f4;
  puStack_88 = &UNK_1105b0550;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c542bc(puVar6);
  func_0x000107c60bd0(ppuVar9);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  lVar11 = 0x112d360b8;
  FUN_102c02e38(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x18) = 0x19;
  *(undefined8 *)(lVar11 + 0x10) = 0xc;
  puVar12 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar13 = puVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar4 = puVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar11 + 0x20) = puVar4;
  puVar12 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar13 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar4 = puVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar11 + 0x28) = puVar4;
  puVar4 = puVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar13 = puVar6;
  func_0x000107c3ec1c(puVar6);
  func_0x000107c61180();
  puVar12 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar11 + 0x30) = puVar12;
  puVar12 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar13 = puVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar4 = puVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar11 + 0x38) = puVar4;
  uVar14 = *(undefined8 *)(puVar6 + lVar16);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar11 + 0x40) = uVar3;
  uVar14 = *(undefined8 *)(puVar6 + lVar16);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar11 + 0x48) = uVar3;
  *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)(puVar6 + _DAT_112efe628);
  uVar14 = *(undefined8 *)(puVar6 + lVar2);
  func_0x000107c61174();
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40290(0x4071300000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  *(undefined8 *)(lVar11 + 0x58) = uVar3;
  uVar14 = *(undefined8 *)(puVar6 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(puVar6 + lVar16);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40284(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(lVar11 + 0x60) = uVar3;
  uVar14 = *(undefined8 *)(puVar6 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c4acb0(puVar5);
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar11 + 0x68) = uVar3;
  uVar14 = *(undefined8 *)(puVar6 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar11 + 0x70) = uVar3;
  uVar14 = *(undefined8 *)(puVar6 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar11 + 0x78) = uVar3;
  uVar3 = 0;
  func_0x000102c03230(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar16 = lVar11;
  func_0x000107c5fc48(lVar11,uVar3);
  func_0x000107c61574(lVar11);
  func_0x000107c3d048(puVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar16);
  return puVar6;
}



/* Entry: 102c017bc; end: 102c0201b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c017bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar5 = lVar4;
  FUN_102c02eb0();
  if (lVar5 != 0) {
    uVar6 = 0;
    FUN_102c02760();
    func_0x000107c610f8();
    func_0x000107c495e8();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c40784(lVar5);
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c615e8(lVar7);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,uVar6);
    lVar7 = lRam0000000112efe6d8;
    func_0x000107c61174();
    if (lVar7 != -1) {
      func_0x000107c61568(0x112efe6d8,FUN_102c00f20);
    }
    func_0x000107c5a738(uRam0000000112efe6e0,uVar6);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar9 = puVar8;
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(uVar6);
    func_0x000107c61170(puVar9);
    puVar9 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar10 = puVar9;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c0201c);
      (*pcVar2)();
    }
    func_0x000107c3fa94(puVar8);
    func_0x000107c61180();
    func_0x000107c52b50(puVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c57f18(uVar6);
    func_0x000107c550d8(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c3d89c(puVar10);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efe638);
    *(undefined8 *)(unaff_x20 + _DAT_112efe638) = uVar6;
    func_0x000107c61170(uVar11);
    puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168();
    func_0x000107c41570();
    func_0x000107c61180();
    uVar22 = (uint)*(undefined8 *)PTR__UISceneDidActivateNotification_110345d78;
    puVar13 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c61174();
    func_0x000107c4c188(puVar13);
    func_0x000107c61180();
    puVar8 = &UNK_1105b0588;
    func_0x000107c613fc(&UNK_1105b0588,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,uVar6);
    puVar14 = &UNK_1105b05b0;
    uVar21 = 0x20;
    func_0x000107c613fc(&UNK_1105b05b0,0x20,7);
    *(undefined **)(puVar14 + 0x10) = puVar8;
    *(long *)(puVar14 + 0x18) = lVar4;
    uStack_90 = 0x102c031fc;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100ef35e4;
    puStack_98 = &UNK_1105b05c8;
    ppuVar15 = &puStack_b0;
    puStack_88 = puVar14;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61574(puStack_88);
    puVar8 = puVar12;
    func_0x000107c3d7c4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar13);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112efe640);
    *(undefined **)(unaff_x20 + _DAT_112efe640) = puVar8;
    func_0x000107c615e8(uVar16);
    FUN_102c03054();
    bVar3 = (uVar22 & 0xff) != 1;
    uVar11 = 0x4069000000000000;
    if (bVar3) {
      uVar11 = uVar21;
    }
    uVar21 = 0x4049000000000000;
    if (bVar3) {
      uVar21 = uVar16;
    }
    lVar4 = unaff_x20;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar8 = puVar10;
    func_0x000107c5cbe4(puVar10);
    func_0x000107c61180();
    lVar17 = lVar4;
    func_0x000107c40284(uVar11);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61174();
    lVar4 = unaff_x20;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar8 = puVar10;
    func_0x000107c4acb0(puVar10);
    func_0x000107c61180();
    lVar18 = lVar4;
    func_0x000107c40284(uVar21);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar8);
    plVar1 = (long *)(unaff_x20 + _DAT_112efe630);
    lVar4 = *plVar1;
    lVar7 = plVar1[1];
    *plVar1 = lVar17;
    plVar1[1] = lVar18;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    FUN_102c03204(lVar4,lVar7);
    if ((*plVar1 != 0) && (func_0x000107c5784c(0x443b8000), *plVar1 != 0)) {
      func_0x000107c5784c(0x443b8000,plVar1[1]);
    }
    uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112efe618);
    func_0x000107c537fc(0x447a0000,uVar21);
    func_0x000107c537fc(0x447a0000,uVar21);
    puVar8 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c3d72c(puVar10);
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    lVar4 = 0x112d360b8;
    FUN_102c02e38(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0x15;
    *(undefined8 *)(lVar4 + 0x10) = 10;
    *(long *)(lVar4 + 0x20) = lVar17;
    *(long *)(lVar4 + 0x28) = lVar18;
    puVar12 = puVar8;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar13 = puVar10;
    func_0x000107c4acb0(puVar10);
    func_0x000107c61180();
    puVar19 = puVar12;
    func_0x000107c40284(0x4034000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar13);
    *(undefined **)(lVar4 + 0x30) = puVar19;
    puVar12 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar13 = puVar10;
    func_0x000107c5cbe4(puVar10);
    func_0x000107c61180();
    puVar19 = puVar12;
    func_0x000107c40284(0x4049000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar13);
    *(undefined **)(lVar4 + 0x38) = puVar19;
    puVar12 = puVar8;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar13 = puVar10;
    func_0x000107c5ce8c(puVar10);
    func_0x000107c61180();
    puVar19 = puVar12;
    func_0x000107c40284(0xc034000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar13);
    *(undefined **)(lVar4 + 0x40) = puVar19;
    puVar12 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar13 = puVar10;
    func_0x000107c3ec1c(puVar10);
    func_0x000107c61180();
    puVar19 = puVar12;
    func_0x000107c40284(0xc049000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar13);
    *(undefined **)(lVar4 + 0x48) = puVar19;
    lVar7 = unaff_x20;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar12 = puVar8;
    func_0x000107c4acb0(puVar8);
    func_0x000107c61180();
    lVar20 = lVar7;
    func_0x000107c40294();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar12);
    *(long *)(lVar4 + 0x50) = lVar20;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar12 = puVar8;
    func_0x000107c5cbe4(puVar8);
    func_0x000107c61180();
    lVar7 = unaff_x20;
    func_0x000107c40294();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(puVar12);
    *(long *)(lVar4 + 0x58) = lVar7;
    uVar11 = uVar21;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar12 = puVar8;
    func_0x000107c5ce8c(puVar8);
    func_0x000107c61180();
    uVar16 = uVar11;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar4 + 0x60) = uVar16;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar12 = puVar8;
    func_0x000107c3ec1c(puVar8);
    func_0x000107c61180();
    uVar11 = uVar21;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(uVar21);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar4 + 0x68) = uVar11;
    uVar11 = 0;
    func_0x000102c03230(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = lVar4;
    func_0x000107c5fc48(lVar4,uVar11);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar14);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar8);
  }
  return;
}



/* Entry: 102c0201c; end: 102c0206f;  */

void FUN_102c0201c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c02070();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c02070; end: 102c021f3;  */

/* WARNING: Possible PIC construction at 0x000102c020c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c020ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c021a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c021b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c021a8) */
/* WARNING: Removing unreachable block (ram,0x000102c020f0) */
/* WARNING: Removing unreachable block (ram,0x000102c020f8) */
/* WARNING: Removing unreachable block (ram,0x000102c0213c) */
/* WARNING: Removing unreachable block (ram,0x000102c02154) */
/* WARNING: Removing unreachable block (ram,0x000102c020c4) */
/* WARNING: Removing unreachable block (ram,0x000102c020cc) */
/* WARNING: Removing unreachable block (ram,0x000102c021b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c02070(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112efe630) != 0) {
    lVar1 = ((long *)(unaff_x20 + _DAT_112efe630))[1];
    func_0x000107c61174(lVar1);
    func_0x000107c438d4();
    func_0x000107c609c4();
    func_0x000107c5378c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c021f4; end: 102c02243;  */

void FUN_102c021f4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102c02244; end: 102c02263; -[_TtC9Inspector13InspectorView init] */

void FUN_102c02244(void)

{
  FUN_102c00f84();
  return;
}



/* Entry: 102c02264; end: 102c0228b; -[_TtC9Inspector13InspectorView initWithCoder:] */

void FUN_102c02264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102c03118();
  return;
}



/* Entry: 102c0228c; end: 102c0235b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0228c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112efe640);
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar3);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar1);
  }
  lVar3 = _DAT_112efe638;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112efe638) != 0) {
    func_0x000107c57f18();
    uVar2 = 0;
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      func_0x000107c550d8();
      uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    }
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c0235c; end: 102c0237f; -[_TtC9Inspector13InspectorView dealloc] */

void FUN_102c0235c(void)

{
  func_0x000107c61174();
  FUN_102c0228c();
  return;
}



/* Entry: 102c02380; end: 102c023fb; -[_TtC9Inspector13InspectorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c02380(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efe618));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efe620));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efe628));
  FUN_102c03204(*(undefined8 *)(param_1 + _DAT_112efe630),
                ((undefined8 *)(param_1 + _DAT_112efe630))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efe638));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112efe640));
  return;
}



/* Entry: 102c023fc; end: 102c02447; -[_TtC9Inspector13InspectorView initWithFrame:] */

void FUN_102c023fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("Inspector.InspectorView",0x17,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c02428);
  (*pcVar1)();
}



/* Entry: 102c02448; end: 102c025b7;  */

undefined1 * FUN_102c02448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,&stack0xffffffffffffffa0,PTR_s_hitTest_withEvent__1125d6850,
                      param_3);
  func_0x000107c61180();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000102c03230(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    puVar2 = puVar1;
    func_0x000107c61174();
    puVar3 = unaff_x20;
    func_0x000107c61174();
    puVar4 = puVar2;
    func_0x000107c60118(puVar2,puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    if (((ulong)puVar4 & 1) != 0) goto LAB_102c0258c;
  }
  func_0x000107c508f0();
  func_0x000107c61180();
  puVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
  }
  else {
    if (puVar3 == (undefined1 *)0x0) {
      return puVar1;
    }
    func_0x000102c03230(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    puVar2 = puVar1;
    func_0x000107c61174();
    puVar4 = puVar2;
    func_0x000107c60118();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      return puVar1;
    }
  }
LAB_102c0258c:
  func_0x000107c61170(puVar2);
  return (undefined1 *)0x0;
}



/* Entry: 102c025b8; end: 102c0262f; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4022InspectorOverlayWindow hitTest:withEvent:] */

void FUN_102c025b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102c02448(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 102c02630; end: 102c02673; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4022InspectorOverlayWindow initWithWindowScene:] */

void FUN_102c02630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithWindowScene__1125f66b8,param_3);
  return;
}



/* Entry: 102c02674; end: 102c026df; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4022InspectorOverlayWindow initWithFrame:] */

void FUN_102c02674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102c026e0; end: 102c0275f; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4022InspectorOverlayWindow initWithCoder:] */

undefined1 * FUN_102c026e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102c02760; end: 102c0277f;  */

void FUN_102c02760(void)

{
  func_0x000107c61168(&PTR_PTR_1128964d8);
  return;
}



/* Entry: 102c02780; end: 102c02827;  */

void FUN_102c02780(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = lRam0000000112efe6d8;
  if (param_2 != 0) {
    func_0x000107c61174();
    if (lVar1 != -1) {
      func_0x000107c61568(0x112efe6d8,FUN_102c00f20);
    }
    func_0x000107c5a738(uRam0000000112efe6e0);
    func_0x000107c61170(param_2);
    func_0x000107c550d8(param_2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c02828; end: 102c02aeb;  */

undefined * FUN_102c02828(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    func_0x000102c03230(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_102c02aa8:
        puStack_58 = (undefined *)0x0;
LAB_102c02aac:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      func_0x000102c03230(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102c02aec);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_102c02aa8;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_102c02aac;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 102c02aec; end: 102c02b9f; -[_TtC9Inspector13InspectorView labelDoubleTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c02aec(long param_1)

{
  *(byte *)(*(long *)(param_1 + _DAT_112efe618) + _DAT_112efe6a8) =
       (*(byte *)(*(long *)(param_1 + _DAT_112efe618) + _DAT_112efe6a8) ^ 0xff) & 1;
  func_0x000107c61174();
  FUN_102c02bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c02ba0; end: 102c02bc7; -[_TtC9Inspector13InspectorView labelTapped] */

void FUN_102c02ba0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102c02b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c02bc8; end: 102c02c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c02bc8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _DAT_112efe6a0;
  if (*(char *)(unaff_x20 + _DAT_112efe6a8) == '\x01') {
    lVar1 = _DAT_112efe698;
  }
  lVar2 = ((undefined8 *)(unaff_x20 + lVar1))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c59c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102c02c58; end: 102c02cf3; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4014InspectorLabel initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c02c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_5 + _DAT_112efe698);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112efe6a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_5 + _DAT_112efe6a8) = 1;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102c02cf4; end: 102c02da3; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4014InspectorLabel initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c02cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112efe698);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112efe6a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + _DAT_112efe6a8) = 1;
  puVar2 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61170(plVar4);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 102c02da4; end: 102c02dd7;  */

void FUN_102c02da4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c02dd8; end: 102c02e17; -[_TtC9InspectorP33_2CD289C9B63DA2AF5DEE496B3E052B4014InspectorLabel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c02df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c02dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c02dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112efe698 + 8))
  ;
  return;
}



/* Entry: 102c02e18; end: 102c02e37;  */

void FUN_102c02e18(void)

{
  func_0x000107c61168(&PTR_PTR_112896588);
  return;
}



/* Entry: 102c02e38; end: 102c02eaf;  */

void FUN_102c02e38(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102c03230(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102c02eb0; end: 102c03053;  */

ulong FUN_102c02eb0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar8;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uVar4 = 0;
  func_0x000102c03230(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar5 = uVar4;
  func_0x000100deaee4();
  puVar8 = puVar3;
  func_0x000107c5fe10(puVar3,uVar4,uVar5);
  func_0x000107c61170(puVar3);
  puVar3 = puVar8;
  FUN_102c02828();
  func_0x000107c6142c(puVar8);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar8 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar3);
    uVar6 = 0;
  }
  else {
    uVar9 = 0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102c02ffc);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(puVar3 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar9;
        func_0x0001012bfb38(uVar9,puVar3);
      }
      puVar1 = (undefined *)(uVar9 + 1);
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c02ff8);
        (*pcVar2)();
      }
      uVar7 = uVar6;
      func_0x000107c3d0e4();
      if (uVar7 == 0) goto LAB_102c02fe8;
      func_0x000107c61170(uVar6);
      uVar9 = uVar9 + 1;
    } while (puVar1 != puVar8);
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c03054);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(puVar3 + 0x20);
      func_0x000107c61174(uVar6);
    }
    else {
      uVar6 = 0;
      func_0x0001012bfb38(0,puVar3);
    }
LAB_102c02fe8:
    func_0x000107c6142c(puVar3);
  }
  return uVar6;
}



/* Entry: 102c03054; end: 102c03117;  */

undefined8 FUN_102c03054(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c5ba34();
  func_0x000107c61180();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0fdb20);
  puVar3 = puVar1;
  func_0x000107c5c1ac();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    func_0x000107c609a0(puVar3);
    func_0x000107c61170(puVar3);
  }
  return param_1;
}



/* Entry: 102c03118; end: 102c031d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c03118(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar2 = _DAT_112efe618;
  uVar4 = 0;
  FUN_102c02e18();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _DAT_112efe620;
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efe630);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efe638) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efe640) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "Inspector/InspectorView.swift",0x1d,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c031d8);
  (*pcVar3)();
}



/* Entry: 102c031d8; end: 102c03203;  */

void FUN_102c031d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102c02070();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102c03204; end: 102c0326f;  */

/* WARNING: Possible PIC construction at 0x000102c03218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0321c) */

void FUN_102c03204(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102c03270; end: 102c03293;  */

void FUN_102c03270(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102c03294; end: 102c0333f;  */

void FUN_102c03294(void)

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



/* Entry: 102c03340; end: 102c033bb;  */

void FUN_102c03340(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102c033bc; end: 102c033fb;  */

void FUN_102c033bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112efe6e8;
  func_0x0001000285a8(0x112efe6e8,&UNK_10db31228);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c033fc; end: 102c03417;  */

void FUN_102c033fc(undefined8 *param_1)

{
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428(0x112efe6f0,auStack_80,0x21,0);
  func_0x0001000285a8(0x112d7ecb0,&UNK_10d93cd50);
  func_0x0001040ac72c(&uStack_68);
  func_0x000107c614a8(auStack_80);
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[3] = uStack_50;
  param_1[2] = uStack_58;
  param_1[5] = uStack_40;
  param_1[4] = uStack_48;
  param_1[6] = uStack_38;
  return;
}



/* Entry: 102c03418; end: 102c0349b;  */

void FUN_102c03418(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_2,auStack_80,0x21,0);
  func_0x0001000285a8(param_3,param_4);
  func_0x0001040ac72c(&uStack_68);
  func_0x000107c614a8(auStack_80);
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[3] = uStack_50;
  param_1[2] = uStack_58;
  param_1[5] = uStack_40;
  param_1[4] = uStack_48;
  param_1[6] = uStack_38;
  return;
}



/* Entry: 102c0349c; end: 102c034d7; -[SCInspectorTweaks init] */

void FUN_102c0349c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c034d8; end: 102c0350b;  */

void FUN_102c034d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c0350c; end: 102c0350f; -[SCInspectorTweaks .cxx_destruct] */

void FUN_102c0350c(void)

{
  return;
}



/* Entry: 102c03510; end: 102c03557;  */

void FUN_102c03510(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efe6f0,auStack_38,0,0);
  uRam0000000113804ef8 = uRam0000000112efe6f0;
  return;
}



/* Entry: 102c03558; end: 102c035bf; +[SCInspectorTweaks isEnabled] */

undefined1 FUN_102c03558(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam0000000112efe730 != -1) {
    func_0x000107c61568(0x112efe730,FUN_102c03510);
  }
  func_0x000107c61428(0x113804ef8,auStack_38,0,0);
  return uRam0000000113804ef8;
}



/* Entry: 102c035c0; end: 102c0362b; +[SCInspectorTweaks setIsEnabled:] */

void FUN_102c035c0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  if (lRam0000000112efe730 != -1) {
    func_0x000107c61568(0x112efe730,FUN_102c03510);
  }
  func_0x000107c61428(0x113804ef8,auStack_38,1,0);
  uRam0000000113804ef8 = param_3;
  return;
}



/* Entry: 102c0362c; end: 102c0362f;  */

void FUN_102c0362c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31230;
  func_0x000107c61520(&UNK_10db31230,&UNK_1105b0710);
  puRam0000000112efe738 = puVar1;
  return;
}



/* Entry: 102c03630; end: 102c0366f;  */

void FUN_102c03630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31230;
  func_0x000107c61520(&UNK_10db31230,&UNK_1105b0710);
  puRam0000000112efe738 = puVar1;
  return;
}



/* Entry: 102c03670; end: 102c0369b;  */

void FUN_102c03670(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102c0369c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000102c036dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102c0369c; end: 102c0371b;  */

void FUN_102c0369c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db312f8;
  func_0x000107c61520(&UNK_10db312f8,&UNK_1105b0710);
  puRam0000000112efe740 = puVar1;
  return;
}



/* Entry: 102c0371c; end: 102c0371f;  */

void FUN_102c0371c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112efe750 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112efe758;
  func_0x00010002969c(0x112efe758,&UNK_10db312f0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112efe750 = puVar2;
  return;
}



/* Entry: 102c03720; end: 102c0376f;  */

void FUN_102c03720(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112efe750 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112efe758;
  func_0x00010002969c(0x112efe758,&UNK_10db312f0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112efe750 = puVar2;
  return;
}



/* Entry: 102c03770; end: 102c038d3;  */

int FUN_102c03770(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102c037ec;
        goto LAB_102c037d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102c037d0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102c037ec:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102c038d4; end: 102c038f3;  */

void FUN_102c038d4(void)

{
  func_0x000107c61168(&PTR_PTR_112896650);
  return;
}



/* Entry: 102c038f4; end: 102c03a57;  */

int FUN_102c038f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102c03970;
        goto LAB_102c03954;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102c03954:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102c03970:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102c03a58; end: 102c03c9b;  */

void FUN_102c03a58(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xea00000000006e6f;
  uVar3 = 0x495565766974616e;
  if (bVar2 != 2) {
    uVar3 = 0x6472617a7a696c62;
  }
  uVar4 = 0x697461676976616e;
  if (bVar2 != 0) {
    uVar5 = 0xe600000000000000;
    uVar4 = 0x736b61657774;
  }
  uVar1 = 0xe800000000000000;
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c03c9c; end: 102c03d1b;  */

void FUN_102c03c9c(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0xea00000000006e6f;
  uVar3 = 0x495565766974616e;
  if (bVar2 != 2) {
    uVar3 = 0x6472617a7a696c62;
  }
  uVar4 = 0x697461676976616e;
  if (bVar2 != 0) {
    uVar5 = 0xe600000000000000;
    uVar4 = 0x736b61657774;
  }
  uVar1 = 0xe800000000000000;
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 102c03d1c; end: 102c03eab;  */

void FUN_102c03d1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112efe7b8;
  func_0x0001000285a8(0x112efe7b8,&UNK_10db31420);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c03eac; end: 102c03eaf;  */

void FUN_102c03eac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31430;
  func_0x000107c61520(&UNK_10db31430,&UNK_1105b0948);
  puRam0000000112efe7c8 = puVar1;
  return;
}



/* Entry: 102c03eb0; end: 102c03f1b;  */

void FUN_102c03eb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31430;
  func_0x000107c61520(&UNK_10db31430,&UNK_1105b0948);
  puRam0000000112efe7c8 = puVar1;
  return;
}



/* Entry: 102c03f1c; end: 102c03f1f;  */

void FUN_102c03f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe7e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31510;
  func_0x000107c61520(&UNK_10db31510,&UNK_1105b08a0);
  puRam0000000112efe7e0 = puVar1;
  return;
}



/* Entry: 102c03f20; end: 102c03f8b;  */

void FUN_102c03f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe7e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31510;
  func_0x000107c61520(&UNK_10db31510,&UNK_1105b08a0);
  puRam0000000112efe7e0 = puVar1;
  return;
}



/* Entry: 102c03f8c; end: 102c03fcf;  */

void FUN_102c03f8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102c03fd0; end: 102c03fd3;  */

void FUN_102c03fd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31580;
  func_0x000107c61520(&UNK_10db31580,&UNK_1105b08a0);
  puRam0000000112efe7f8 = puVar1;
  return;
}



/* Entry: 102c03fd4; end: 102c04013;  */

void FUN_102c03fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31580;
  func_0x000107c61520(&UNK_10db31580,&UNK_1105b08a0);
  puRam0000000112efe7f8 = puVar1;
  return;
}



/* Entry: 102c04014; end: 102c04017;  */

void FUN_102c04014(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31538;
  func_0x000107c61520(&UNK_10db31538,&UNK_1105b08a0);
  puRam0000000112efe800 = puVar1;
  return;
}



/* Entry: 102c04018; end: 102c04057;  */

void FUN_102c04018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31538;
  func_0x000107c61520(&UNK_10db31538,&UNK_1105b08a0);
  puRam0000000112efe800 = puVar1;
  return;
}



/* Entry: 102c04058; end: 102c041b3;  */

int FUN_102c04058(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102c040d4;
        goto LAB_102c040b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102c040b8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102c040d4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102c041b4; end: 102c0421f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c041b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c045a8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efe920) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102c04220; end: 102c0428b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c04220(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efe920) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c0428c; end: 102c042eb; -[_TtC40OperaSessionScopedFactoryServiceProvider28SCOperaSessionScopedServices init] */

void FUN_102c0428c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaSessionScopedFactoryServiceProvider.SCOperaSessionScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c042b8);
  (*pcVar1)();
}



/* Entry: 102c042ec; end: 102c042fb; -[_TtC40OperaSessionScopedFactoryServiceProvider28SCOperaSessionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c042ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efe920));
  return;
}


