/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013f18f0; end: 1013f1977; -[_TtC15COSServicesImpl30COSNativeChallengeScaffoldView onSecondaryActionTapped:] */

/* WARNING: Possible PIC construction at 0x0001013f1950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f1954) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f18f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112d7bf88;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c5c6a4(param_3);
    FUN_1013f43bc();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1013f1978; end: 1013f19ab;  */

void FUN_1013f1978(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013f19ac; end: 1013f1a63; -[_TtC15COSServicesImpl30COSNativeChallengeScaffoldView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f19ac(long param_1)

{
  func_0x0001013f1d98(param_1 + _DAT_112d7bf88);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bf90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bf98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bfa0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bfa8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bfb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bfb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bfc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7bfc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7bfd0));
  return;
}



/* Entry: 1013f1a64; end: 1013f1a83;  */

void FUN_1013f1a64(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1b28);
  return;
}



/* Entry: 1013f1a84; end: 1013f1ad3;  */

/* WARNING: Removing unreachable block (ram,0x000101136c6c) */
/* WARNING: Removing unreachable block (ram,0x000101136c90) */
/* WARNING: Removing unreachable block (ram,0x000101136c74) */
/* WARNING: Removing unreachable block (ram,0x000101136d6c) */
/* WARNING: Removing unreachable block (ram,0x000101136c80) */
/* WARNING: Removing unreachable block (ram,0x000101136c88) */
/* WARNING: Removing unreachable block (ram,0x000101136ccc) */
/* WARNING: Removing unreachable block (ram,0x000101136ce0) */
/* WARNING: Removing unreachable block (ram,0x000101136cec) */
/* WARNING: Removing unreachable block (ram,0x000101136cf4) */

ulong FUN_1013f1a84(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  (*(code *)0x101145650)(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    (*(code *)0x1011372ec)
              (0,uVar4,uVar2 + 0x20,param_1,0x112d5eca0,&PTR__OBJC_CLASS___UIButton_1126aec48);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101136d6c);
  (*pcVar1)();
}



/* Entry: 1013f1ad4; end: 1013f1be3;  */

/* WARNING: Possible PIC construction at 0x0001013f1b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f1b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f1b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f1bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f1b6c) */
/* WARNING: Removing unreachable block (ram,0x0001013f1bd4) */
/* WARNING: Removing unreachable block (ram,0x0001013f1b80) */
/* WARNING: Removing unreachable block (ram,0x0001013f1b48) */
/* WARNING: Removing unreachable block (ram,0x0001013f1b1c) */
/* WARNING: Removing unreachable block (ram,0x0001013f1bc0) */

void FUN_1013f1ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c4a954();
  func_0x000107c61180();
  func_0x000107c52b50(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013f1be4; end: 1013f1d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f1be4(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d7bf88;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112d7bf90;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bf98;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bfa0;
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d7bfa8;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d7bfb0;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d7bfb8;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d7bfc0;
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7bfc8;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112d7bfd0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSNativeChallengeScaffoldView.swift",0x34,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013f1d58);
  (*pcVar2)();
}



/* Entry: 1013f1d58; end: 1013f1e2f;  */

void FUN_1013f1d58(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1013f1e30; end: 1013f1ec3;  */

undefined8 * FUN_1013f1e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar5 = param_2[0xb];
  param_1[0xb] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 1013f1ec4; end: 1013f1faf;  */

undefined8 * FUN_1013f1ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1013f1fb0; end: 1013f203b;  */

undefined8 * FUN_1013f1fb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1013f203c; end: 1013f20eb;  */

int FUN_1013f203c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1013f20ec; end: 1013f2313;  */

void FUN_1013f20ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f83c();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar11 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 != 0) {
    func_0x000107c6157c(lVar6);
    func_0x000107c5f848();
    func_0x000107c61574(lVar6);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103b1508;
  ppuVar3 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar4 = ppuVar3;
  func_0x0001001c7eec();
  func_0x000107c6157c(param_2);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar5 = uVar7;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar11,&puStack_98,uVar7,uVar5,lVar2,ppuVar4);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(lVar11,ppuVar3);
  func_0x000107c61574(uStack_68);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  *(long *)(unaff_x20 + 0x18) = lVar11;
  func_0x000107c6157c(lVar11);
  func_0x000107c61574(uVar7);
  func_0x000107c5f830(lVar10);
  func_0x000107c5f85c(lVar8,0x3fb999999999999a,lVar10);
  pcVar9 = *(code **)(lStack_a0 + 8);
  (*pcVar9)(lVar10,lVar1);
  func_0x000107c5ffcc(lVar8,lVar11);
  func_0x000107c61574(lVar11);
  (*pcVar9)(lVar8,lVar1);
  return;
}



/* Entry: 1013f2314; end: 1013f235f;  */

void FUN_1013f2314(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013f2360; end: 1013f237b;  */

void FUN_1013f2360(long param_1,long param_2)

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



/* Entry: 1013f237c; end: 1013f248b;  */

/* WARNING: Possible PIC construction at 0x0001013f23e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f23e8) */

void FUN_1013f237c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(uVar3);
    (*pcVar2)(param_1,param_2);
    FUN_100cb04c4(pcVar2,uVar3);
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1013f248c; end: 1013f2503;  */

/* WARNING: Possible PIC construction at 0x0001013f24dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f24e0) */

void FUN_1013f248c(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(unaff_x20 + 0x40);
  if (pcVar3 == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    FUN_100cb04c4(pcVar3,uVar2);
    lVar1 = *(long *)(unaff_x20 + 0x40);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1013f2504; end: 1013f255f;  */

void FUN_1013f2504(void)

{
  long unaff_x20;
  
  FUN_100cb04c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100cb04c8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100cb04c8(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100cb04c8(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013f2560; end: 1013f261f;  */

void FUN_1013f2560(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_100cb04c4(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1013f2620; end: 1013f268f;  */

/* WARNING: Possible PIC construction at 0x0001013f2644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f2670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f2648) */
/* WARNING: Removing unreachable block (ram,0x0001013f2654) */
/* WARNING: Removing unreachable block (ram,0x0001013f2674) */
/* WARNING: Removing unreachable block (ram,0x0001013f267c) */

void FUN_1013f2620(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013f2690; end: 1013f2b83;  */

undefined * FUN_1013f2690(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0x7461745377656976;
  func_0x000107c5fadc(0x7461745377656976,0xe900000000000065);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar1 = 0;
    FUN_1013f35b8(0,0x112d7c250,&PTR_PTR_1126a6cf0);
    ppuVar2 = &puStack_88;
    func_0x000107c6147c(ppuVar2,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)ppuVar2 & 1) != 0) {
      return puStack_88;
    }
  }
  puVar3 = PTR_PTR_1126a6cf0;
  func_0x000107c610f8(PTR_PTR_1126a6cf0);
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  uVar1 = 0x74696769446d756e;
  func_0x000107c5fadc(0x74696769446d756e,0xe900000000000073);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3d040);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3d060);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f63207265746e45;
  func_0x000107c5fadc(0x6f63207265746e45,0xea00000000006564);
  uVar5 = 0x656c746974;
  func_0x000107c5fadc(0x656c746974,0xe500000000000000);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0x656c746974627573;
  func_0x000107c5fadc(0x656c746974627573,0xe800000000000000);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0x65646f63;
  func_0x000107c5fadc(0x65646f63,0xe400000000000000);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  uVar1 = 0x73654d726f727265;
  func_0x000107c5fadc(0x73654d726f727265,0xec00000065676173);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f69746341706f74;
  func_0x000107c5fadc(0x6f69746341706f74,0xee00656c7469546e);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  uVar5 = 0x65756e69746e6f43;
  func_0x000107c5fadc(0x65756e69746e6f43,0xe800000000000000);
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef3d080);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3d0a0);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  uVar1 = 0x6320646e65736552;
  func_0x000107c5fadc(0x6320646e65736552,0xeb0000000065646f);
  uVar5 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3d0c0);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3d0e0);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  uVar1 = 0x6261686374697773;
  func_0x000107c5fadc(0x6261686374697773,0xea0000000000656c);
  func_0x000107c5a4a0(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  return puVar3;
}



/* Entry: 1013f2b84; end: 1013f2e97;  */

bool FUN_1013f2b84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61174(uVar3);
  uVar4 = 0x65646f63;
  lVar6 = -0x1c00000000000000;
  FUN_1013f3454();
  func_0x000107c61170(uVar3);
  uStack_60 = 0;
  if (lVar6 != 0) {
    uStack_60 = uVar4;
  }
  lVar1 = -0x2000000000000000;
  if (lVar6 != 0) {
    lVar1 = lVar6;
  }
  lStack_58 = lVar1;
  func_0x000107c5eb88(lVar8);
  FUN_100e8b654();
  lVar6 = lVar8;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar8,PTR___sSSN_11034da80,uVar3);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  func_0x000107c6142c(lVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61174(uVar4);
  uVar5 = 0;
  func_0x0001013f3368(0xd000000000000014,0x800000010ef3d0a0);
  func_0x000107c61170(uVar4);
  if ((uVar5 & 1) != 0) {
    lVar8 = 0x74696769446d756e;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61174(uVar4);
    lVar2 = lVar8;
    func_0x0001013f327c(0x74696769446d756e,0xe900000000000073);
    func_0x000107c61170(uVar4);
    if (0 < lVar2) {
      func_0x000107c5fb5c(lVar6,puVar7);
      func_0x000107c6142c(puVar7);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
      func_0x000107c61174(uVar4);
      func_0x0001013f327c(0x74696769446d756e,0xe900000000000073);
      func_0x000107c61170(uVar4);
      return lVar8 <= lVar6;
    }
  }
  func_0x000107c6142c(puVar7);
  return false;
}



/* Entry: 1013f2e98; end: 1013f2fa3;  */

undefined1  [16] FUN_1013f2e98(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0x6f69746341706f74;
  func_0x000107c5fadc(0x6f69746341706f74,0xe90000000000006e);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0;
    FUN_1013f35b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = uStack_78;
      func_0x000107c49820(uStack_78);
      func_0x000107c61170(uStack_78);
      uVar3 = 0;
      goto LAB_1013f2f90;
    }
  }
  uVar1 = 0;
  uVar3 = 1;
LAB_1013f2f90:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 1013f2fa4; end: 1013f30ef;  */

/* WARNING: Possible PIC construction at 0x0001013f2fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f3050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f30a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f3054) */
/* WARNING: Removing unreachable block (ram,0x0001013f2fe8) */
/* WARNING: Removing unreachable block (ram,0x0001013f2fec) */
/* WARNING: Removing unreachable block (ram,0x0001013f2ff4) */
/* WARNING: Removing unreachable block (ram,0x0001013f30a4) */
/* WARNING: Removing unreachable block (ram,0x0001013f30b4) */
/* WARNING: Removing unreachable block (ram,0x0001013f30d8) */

void FUN_1013f2fa4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61174(uVar1);
  FUN_1013f3454(0x65646f63,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013f30f0; end: 1013f321f;  */

undefined8 FUN_1013f30f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = 0x6465526574617473;
  func_0x000107c5fadc(0x6465526574617473,0xec00000072656375);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar2 = 0x112d7c258;
    func_0x0001000285a8(0x112d7c258,&UNK_10d93b360);
    puVar3 = &uStack_78;
    func_0x000107c6147c(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      return uStack_78;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000019,0x800000010ef3d130,
                      "COSServicesImpl/COSOTPNativeController.swift",0x2c,2,0x78,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f3220);
  (*pcVar1)();
}



/* Entry: 1013f3220; end: 1013f327b;  */

void FUN_1013f3220(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61610(unaff_x20 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013f327c; end: 1013f3453;  */

undefined8 FUN_1013f327c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c5fadc();
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0;
    FUN_1013f35b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = uStack_78;
      func_0x000107c49820(uStack_78);
      func_0x000107c61170(uStack_78);
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1013f3454; end: 1013f35b7;  */

undefined1  [16] FUN_1013f3454(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (unaff_x20 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    puVar2 = &uStack_90;
    func_0x000107c6147c(puVar2,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar2 & 1) != 0) {
      uStack_60 = uStack_90;
      uStack_58 = uStack_88;
      func_0x000107c5eb88(lVar5);
      FUN_100e8b654();
      lVar3 = lVar5;
      puVar4 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar5,PTR___sSSN_11034da80,puVar2);
      (**(code **)(lVar6 + 8))(lVar5,lVar1);
      func_0x000107c6142c(uStack_88);
      goto LAB_1013f35a0;
    }
  }
  lVar3 = 0;
  puVar4 = (undefined *)0x0;
LAB_1013f35a0:
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Entry: 1013f35b8; end: 1013f35f7;  */

void FUN_1013f35b8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1013f35f8; end: 1013f374b;  */

undefined * FUN_1013f35f8(undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126a6cf8;
  func_0x000107c610f8(PTR_PTR_1126a6cf8);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  uVar3 = 0x6e6f69746361;
  func_0x000107c5fadc(0x6e6f69746361,0xe600000000000000);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar3 = param_2;
  }
  uVar4 = 0x65756c6176;
  func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  if (param_4 != '\x02') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    uVar3 = 0x69466f7475417369;
    func_0x000107c5fadc(0x69466f7475417369,0xea00000000006c6c);
    func_0x000107c5a4a0(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
  }
  return puVar1;
}



/* Entry: 1013f374c; end: 1013f3a33;  */

undefined * FUN_1013f374c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126a6d08;
  func_0x000107c610f8(PTR_PTR_1126a6d08);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  uVar3 = 0x65707974;
  func_0x000107c5fadc(0x65707974,0xe400000000000000);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(param_2,param_3);
  uVar3 = 0x65756c6176;
  func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 1013f3a34; end: 1013f3d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f3a34(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  uVar15 = 0xec00000065676173;
  uVar14 = 0x73654d726f727265;
  uVar5 = 0x6f69746341706f74;
  uVar11 = 0xee00656c7469546e;
  FUN_1013f3454();
  uVar6 = 0x656c746974;
  lVar12 = -0x1b00000000000000;
  FUN_1013f3454();
  uVar8 = 0x6f63207265746e45;
  if (lVar12 != 0) {
    uVar8 = uVar6;
  }
  lVar3 = -0x15ffffffffff9a9c;
  if (lVar12 != 0) {
    lVar3 = lVar12;
  }
  uVar7 = 0x656c746974627573;
  lVar12 = -0x1800000000000000;
  FUN_1013f3454();
  uVar6 = 0;
  if (lVar12 != 0) {
    uVar6 = uVar7;
  }
  lVar1 = -0x2000000000000000;
  if (lVar12 != 0) {
    lVar1 = lVar12;
  }
  FUN_1013f3454();
  lVar12 = -0x7ffffffef10c2f80;
  uVar7 = 0xd000000000000012;
  FUN_1013f3454();
  uStack_80 = 0x65756e69746e6f43;
  if (lVar12 != 0) {
    uStack_80 = uVar7;
  }
  lVar2 = -0x1800000000000000;
  if (lVar12 != 0) {
    lVar2 = lVar12;
  }
  bVar4 = 0;
  func_0x0001013f3368(0xd000000000000014,0x800000010ef3d0a0);
  FUN_1013f45ac();
  bStack_70 = bVar4 & 1;
  lVar13 = -0x13ffffff9a989e8d;
  uStack_c0 = uVar5;
  uStack_b8 = uVar11;
  uStack_b0 = uVar8;
  lStack_a8 = lVar3;
  uStack_a0 = uVar6;
  lStack_98 = lVar1;
  uStack_90 = uVar14;
  uStack_88 = uVar15;
  lStack_78 = lVar2;
  uStack_68 = param_1;
  FUN_1013f10d4(&uStack_c0);
  FUN_1013f47a4(&uStack_c0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7c270);
  uVar5 = 0x65646f63;
  lVar12 = -0x1c00000000000000;
  FUN_1013f3454(0x65646f63);
  uVar8 = 0;
  if (lVar12 != 0) {
    uVar8 = uVar5;
  }
  lVar3 = -0x2000000000000000;
  if (lVar12 != 0) {
    lVar3 = lVar12;
  }
  FUN_1013f46c4(uVar6,uVar8,lVar3);
  func_0x000107c6142c(lVar3);
  lVar12 = 0x74696769446d756e;
  func_0x0001013f327c(0x74696769446d756e,0xe900000000000073);
  if (lVar12 < 2) {
    lVar12 = 1;
  }
  uVar8 = 0x30;
  uVar5 = 0xe100000000000000;
  func_0x000107c5fbc0(0x30,0xe100000000000000,lVar12);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c57420(uVar6);
  func_0x000107c61170(uVar8);
  uVar8 = uVar6;
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  lVar12 = lVar13;
  FUN_1013f3454(0x73654d726f727265);
  if (lVar12 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c6142c(lVar12);
    uVar5 = 0x3ff0000000000000;
  }
  func_0x000107c52e0c(uVar5,uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  FUN_1013f3454(0x73654d726f727265);
  if (lVar13 == 0) {
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
  }
  else {
    func_0x000107c6142c(lVar13);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5c630();
  }
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c52df8(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 1013f3d90; end: 1013f3e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013f3d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112d7c260;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112d7c268;
  uVar2 = 0;
  FUN_1013f1a64();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112d7c270;
  puVar3 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1013f3e78();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1013f3e78; end: 1013f4157;  */

/* WARNING: Possible PIC construction at 0x0001013f3f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f4004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f4058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f40ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f4100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f40b0) */
/* WARNING: Removing unreachable block (ram,0x0001013f405c) */
/* WARNING: Removing unreachable block (ram,0x0001013f4008) */
/* WARNING: Removing unreachable block (ram,0x0001013f3f44) */
/* WARNING: Removing unreachable block (ram,0x0001013f4104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f3e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7c268);
  func_0x000107c5a050(lVar2,param_2,0);
  *(undefined ***)(lVar2 + _DAT_112d7bf88 + 8) = &PTR_DAT_1103b1590;
  func_0x000107c61604();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7c270);
  func_0x000107c52e04(uVar3);
  func_0x000107c559c0(uVar3);
  func_0x000107c59c80(uVar3);
  func_0x000107c52a88(uVar3);
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3ca00);
  func_0x000107c520f4(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013f4158; end: 1013f4177; -[_TtC15COSServicesImpl16COSOTPNativeView initWithFrame:] */

void FUN_1013f4158(void)

{
  FUN_1013f3d90();
  return;
}



/* Entry: 1013f4178; end: 1013f419f; -[_TtC15COSServicesImpl16COSOTPNativeView initWithCoder:] */

void FUN_1013f4178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001013f47d8();
  return;
}



/* Entry: 1013f41a0; end: 1013f4253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f41a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  
  lVar1 = unaff_x20 + _DAT_112d7c260;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112d7c270);
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar2 == 0) {
      uVar3 = 0;
      param_2 = 0xe000000000000000;
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
    }
    func_0x0001013f382c(uVar3,param_2);
    FUN_1013f2620();
    FUN_1013f2b84();
    if ((uVar3 & 1) != 0) {
      func_0x0001013f2d4c();
    }
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1013f4254; end: 1013f427b; -[_TtC15COSServicesImpl16COSOTPNativeView onCodeChanged] */

void FUN_1013f4254(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013f41a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013f427c; end: 1013f43bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f427c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112d7c260;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174(uVar3);
    FUN_1013f2e98();
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126a6cf8;
    func_0x000107c610f8(PTR_PTR_1126a6cf8);
    func_0x000107c453e4();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    uVar3 = 0x6e6f69746361;
    func_0x000107c5fadc(0x6e6f69746361,0xe600000000000000);
    func_0x000107c5a4a0(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar3);
    uVar3 = 0x65756c6176;
    func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
    func_0x000107c5a4a0(puVar4);
    func_0x000107c61170(uVar3);
    if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
      *(undefined1 *)(lVar2 + 0x30) = 1;
      pcVar1 = *(code **)(lVar2 + 0x18);
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      func_0x000107c6157c(uVar3);
      (*pcVar1)(puVar4);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1013f43bc; end: 1013f450f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f43bc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  if (param_1 == 1) {
    lVar2 = unaff_x20 + _DAT_112d7c260;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126a6cf8;
      func_0x000107c610f8(PTR_PTR_1126a6cf8);
      func_0x000107c453e4();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      uVar5 = 0x6e6f69746361;
      func_0x000107c5fadc(0x6e6f69746361,0xe600000000000000);
      func_0x000107c5a4a0(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
      uVar5 = 0x65756c6176;
      func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
      func_0x000107c5a4a0(puVar3);
      func_0x000107c61170(uVar5);
      if (*(char *)(lVar2 + 0x30) != '\x01') {
        *(undefined1 *)(lVar2 + 0x30) = 1;
        pcVar1 = *(code **)(lVar2 + 0x18);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        func_0x000107c6157c(uVar5);
        (*pcVar1)(puVar3);
        func_0x000107c61574(uVar5);
      }
      func_0x000107c61170(puVar3);
LAB_1013f44e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  else if (param_1 == 0) {
    lVar2 = unaff_x20 + _DAT_112d7c260;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_1013f2fa4();
      goto LAB_1013f44e4;
    }
  }
  return;
}



/* Entry: 1013f4510; end: 1013f4543;  */

void FUN_1013f4510(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013f4544; end: 1013f458b; -[_TtC15COSServicesImpl16COSOTPNativeView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013f4570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f4574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f4544(long param_1)

{
  func_0x0001013f4888(param_1 + _DAT_112d7c260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7c268));
  return;
}



/* Entry: 1013f458c; end: 1013f45ab;  */

void FUN_1013f458c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1c28);
  return;
}



/* Entry: 1013f45ac; end: 1013f46c3;  */

long FUN_1013f45ac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar6 = -0x7ffffffef10c2f40;
  uVar2 = 0xd000000000000011;
  FUN_1013f3454();
  uVar3 = 0x6320646e65736552;
  if (lVar6 != 0) {
    uVar3 = uVar2;
  }
  lVar5 = -0x14ffffffff9a9b91;
  if (lVar6 != 0) {
    lVar5 = lVar6;
  }
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(long *)(lVar1 + 0x28) = lVar5;
  lVar6 = -0x7ffffffef10c2f20;
  uVar3 = 0xd000000000000011;
  FUN_1013f3454();
  if (lVar6 != 0) {
    uVar4 = 0x6261686374697773;
    func_0x0001013f3368(0x6261686374697773,0xea0000000000656c);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar6);
    }
    else {
      lVar5 = 1;
      func_0x0001000d182c(1,2,1,lVar1);
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x30) = uVar3;
      *(long *)(lVar5 + 0x38) = lVar6;
      lVar1 = lVar5;
    }
  }
  return lVar1;
}



/* Entry: 1013f46c4; end: 1013f47a3;  */

/* WARNING: Possible PIC construction at 0x0001013f4708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f4754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f470c) */
/* WARNING: Removing unreachable block (ram,0x0001013f4714) */
/* WARNING: Removing unreachable block (ram,0x0001013f4734) */
/* WARNING: Removing unreachable block (ram,0x0001013f471c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001013f4758) */
/* WARNING: Removing unreachable block (ram,0x0001013f475c) */

void FUN_1013f46c4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c59c6c(param_1);
  }
  else {
    func_0x000107c5faec();
    param_2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1013f47a4; end: 1013f48ab;  */

undefined8 FUN_1013f47a4(undefined8 param_1)

{
  (*(code *)(undefined *)0x1013f1de8)();
  return param_1;
}



/* Entry: 1013f48ac; end: 1013f4903; -[_TtC15COSServicesImpl26COSOTPNativeViewController initWithCoder:] */

void FUN_1013f48ac(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSOTPNativeViewController.swift",0x30,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f4904);
  (*pcVar1)();
}



/* Entry: 1013f4904; end: 1013f4a63; -[_TtC15COSServicesImpl26COSOTPNativeViewController loadView] */

/* WARNING: Possible PIC construction at 0x0001013f4950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f4998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f4954) */
/* WARNING: Removing unreachable block (ram,0x0001013f49b8) */
/* WARNING: Removing unreachable block (ram,0x0001013f4968) */
/* WARNING: Removing unreachable block (ram,0x0001013f499c) */

void FUN_1013f4904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013f4a64; end: 1013f4aff; -[_TtC15COSServicesImpl26COSOTPNativeViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f4a64(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c5676c(param_1);
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001013f49bc();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013f4b00);
  (*pcVar2)();
}



/* Entry: 1013f4b00; end: 1013f4d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f4b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar13 = _DAT_112d7c2d0;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d7c2d0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7c2d0) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar15);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7c2f0);
  uVar15 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar15);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar13);
  func_0x000107c61174(uVar4);
  uVar15 = uVar4;
  FUN_1013f2690();
  func_0x000107c61170(uVar4);
  uVar4 = 0x65646f63;
  lVar13 = -0x1c00000000000000;
  FUN_1013f3454();
  func_0x000107c61170(uVar15);
  uVar15 = 0;
  if (lVar13 != 0) {
    uVar15 = uVar4;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7c320);
  uVar4 = puVar1[1];
  lVar5 = -0x2000000000000000;
  if (lVar13 != 0) {
    lVar5 = lVar13;
  }
  *puVar1 = uVar15;
  puVar1[1] = lVar5;
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(unaff_x20 + _DAT_112d7c310) = 0;
  lVar13 = _DAT_112d7c318;
  ppuVar12 = &puStack_d0;
  if ((*(byte *)(unaff_x20 + _DAT_112d7c318) & 1) == 0) {
    lVar5 = unaff_x20 + _DAT_112d7c2f8;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar14 = *(long *)(unaff_x20 + _DAT_112d7c2d8);
      lVar6 = lVar14;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar14);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      puVar9 = &UNK_1103b15c8;
      puVar7 = puVar9;
      func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,unaff_x20);
      puVar8 = &UNK_1103b15f0;
      func_0x000107c613fc(&UNK_1103b15f0,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar5;
      func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,unaff_x20);
      puVar10 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_1013f69b8;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x100e1779c;
      puStack_88 = &UNK_1103b1608;
      ppuVar11 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      uStack_b0 = 0x1013f69c0;
      puStack_d0 = puVar3;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x100e17304;
      puStack_b8 = &UNK_1103b1630;
      puStack_a8 = puVar9;
      func_0x000107c60bc4(&puStack_d0);
      func_0x000107c6157c(puVar7);
      func_0x000107c61174(lVar5);
      func_0x000107c6157c(puVar9);
      func_0x000107c47be0(puVar10);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61574(puStack_a8);
      puVar8 = puStack_78;
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar8);
      pcVar2 = *(code **)(unaff_x20 + _DAT_112d7c2e0);
      func_0x000107c61174(puVar10);
      puVar9 = puVar10;
      FUN_1013f6510();
      puVar8 = puVar10;
      (*pcVar2)(puVar10,puVar9,1,unaff_x20,unaff_x20);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c42c1c(lVar14);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar5);
      *(undefined1 *)(unaff_x20 + lVar13) = 1;
    }
  }
  return;
}



/* Entry: 1013f4d50; end: 1013f4dcf; -[_TtC15COSServicesImpl26COSOTPNativeViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f4d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  uVar2 = param_1;
  func_0x000107c49aa0();
  if ((int)uVar2 != 0) {
    func_0x0001013f4be8();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013f4dd0; end: 1013f4dfb; -[_TtC15COSServicesImpl26COSOTPNativeViewController initWithNibName:bundle:] */

void FUN_1013f4dd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSOTPNativeViewController",0x2a,"init(nibName:bundle:)",0x15
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f4dfc);
  (*pcVar1)();
}



/* Entry: 1013f4dfc; end: 1013f4dff;  */

void FUN_1013f4dfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013f4e00; end: 1013f4e0f; -[_TtC15COSServicesImpl26COSOTPNativeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f4e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7c2a0));
  return;
}



/* Entry: 1013f4e10; end: 1013f4e2f;  */

void FUN_1013f4e10(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1cf0);
  return;
}



/* Entry: 1013f4e30; end: 1013f50ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f4e30(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = _DAT_112d7c318;
  ppuVar11 = &puStack_d0;
  if ((*(byte *)(unaff_x20 + _DAT_112d7c318) & 1) == 0) {
    lVar4 = unaff_x20 + _DAT_112d7c2f8;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_112d7c2d8);
      lVar5 = lVar12;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar12);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      puVar8 = &UNK_1103b15c8;
      puVar6 = puVar8;
      func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_1103b15f0;
      func_0x000107c613fc(&UNK_1103b15f0,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(long *)(puVar7 + 0x18) = lVar4;
      func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar9 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_1013f69b8;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x100e1779c;
      puStack_88 = &UNK_1103b1608;
      ppuVar10 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar10);
      uStack_b0 = 0x1013f69c0;
      puStack_d0 = puVar2;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x100e17304;
      puStack_b8 = &UNK_1103b1630;
      puStack_a8 = puVar8;
      func_0x000107c60bc4(&puStack_d0);
      func_0x000107c6157c(puVar6);
      func_0x000107c61174(lVar4);
      func_0x000107c6157c(puVar8);
      func_0x000107c47be0(puVar9);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(puStack_a8);
      puVar7 = puStack_78;
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar7);
      pcVar1 = *(code **)(unaff_x20 + _DAT_112d7c2e0);
      func_0x000107c61174(puVar9);
      puVar8 = puVar9;
      FUN_1013f6510();
      puVar7 = puVar9;
      (*pcVar1)(puVar9,puVar8,1);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c42c1c(lVar12);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(lVar4);
      *(undefined1 *)(unaff_x20 + lVar3) = 1;
    }
  }
  return;
}



/* Entry: 1013f50ac; end: 1013f5387;  */

/* WARNING: Possible PIC construction at 0x0001013f51b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f51d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f51b8) */
/* WARNING: Removing unreachable block (ram,0x0001013f51d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f50ac(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112d7c318;
  if (*(char *)(unaff_x20 + _DAT_112d7c318) != '\x01') {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7c2d8);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7c308);
  *(undefined8 *)(unaff_x20 + _DAT_112d7c308) = 0;
  func_0x000107c61170(uVar3);
  if (param_1 != (code *)0x0) {
    if (lVar2 == 0) {
      return;
    }
    puVar4 = &UNK_1103b16b8;
    func_0x000107c613fc(&UNK_1103b16b8,0x20,7);
    *(code **)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    pcStack_50 = FUN_1013f6a20;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1103b16d0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000100b64c10(param_1,param_2);
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c615f0(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c5e2a4(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1013f5388; end: 1013f54d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f5388(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112d7c310) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112d7c310) = 1;
      pcVar1 = *(code **)(param_1 + _DAT_112d7c2f0);
      uVar2 = ((undefined8 *)(param_1 + _DAT_112d7c2f0))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)(param_2);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1013f54d8; end: 1013f5623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f54d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar10 = *(long *)(lVar4 + -8);
  lVar8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c5eb88(lVar9);
  FUN_100e8b654();
  lVar5 = lVar9;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar9,PTR___sSSN_11034da80,lVar8);
  (**(code **)(lVar10 + 8))(lVar9,lVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_112d7c320);
  lVar8 = plVar1[1];
  *plVar1 = lVar5;
  plVar1[1] = (long)puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c6142c(lVar8);
  uVar6 = 5;
  FUN_1013f35f8(5,lVar5,puVar7,param_3 & 1);
  func_0x000107c6142c(puVar7);
  if ((*(byte *)(unaff_x20 + _DAT_112d7c310) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d7c310) = 1;
    pcVar2 = *(code **)(unaff_x20 + _DAT_112d7c2f0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d7c2f0))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)(uVar6);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1013f5624; end: 1013f56ef;  */

/* WARNING: Possible PIC construction at 0x0001013f56c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f5678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f56c8) */
/* WARNING: Removing unreachable block (ram,0x0001013f567c) */

void FUN_1013f5624(long param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001052198e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
    param_1 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126af128);
  func_0x000107c50838();
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013f56f0; end: 1013f5813; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController requestCodeResendWithSuccessBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f56f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103b17f8;
  func_0x000107c613fc(&UNK_1103b17f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174();
  func_0x0001013f5424();
  (**(code **)(param_3 + 0x10))(param_3);
  lVar3 = param_1 + _DAT_112d7c2e8;
  lVar2 = lVar3;
  func_0x000107c61618();
  puVar4 = puVar1;
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar3 + 8);
    lVar3 = lVar2;
    func_0x000107c614f0();
    puVar4 = &UNK_1103b1820;
    func_0x000107c613fc(&UNK_1103b1820,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x1013f6aa4;
    *(undefined **)(puVar4 + 0x18) = puVar1;
    pcVar6 = *(code **)(lVar5 + 8);
    func_0x000107c6157c(puVar1);
    (*pcVar6)(0x1013f6aac,puVar4,lVar3,lVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61574(puVar4);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013f5814; end: 1013f5a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f5814(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &UNK_1103b15c8;
  func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_70 = 0x1013f6a50;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103b1748;
  ppuVar2 = &puStack_90;
  puStack_68 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c61574(puStack_68);
  func_0x0001000d76cc("COS Start Verify OTP",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  lVar5 = unaff_x20 + _DAT_112d7c2e8;
  lVar3 = lVar5;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar8 = *(long *)(lVar5 + 8);
    lVar6 = lVar3;
    func_0x000107c614f0();
    puVar1 = &UNK_1103b15c8;
    func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar4 = &UNK_1103b1780;
    func_0x000107c613fc(&UNK_1103b1780,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    pcVar7 = *(code **)(lVar8 + 0x20);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(puVar1);
    (*pcVar7)(0x1013f6a58,puVar4,lVar6,lVar8);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(puVar4);
  }
  lVar3 = lVar5;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar5 + 8);
    lVar5 = lVar3;
    func_0x000107c614f0();
    puVar1 = &UNK_1103b15c8;
    func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar4 = &UNK_1103b17a8;
    func_0x000107c613fc(&UNK_1103b17a8,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_7;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c6157c();
    func_0x000107c6157c(puVar1);
    (*pcVar7)(FUN_1013f6a90,puVar4,lVar5,lVar6);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(puVar4);
  }
  FUN_1013f54d8(param_1,param_2,param_3 & 1);
  return;
}



/* Entry: 1013f5a74; end: 1013f5b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f5a74(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_PTR_1126af130;
  func_0x000107c610f8(PTR_PTR_1126af130);
  func_0x000107c483d0();
  (*param_1)();
  func_0x000107c61170(puVar2);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d7c318;
  if (param_3 != 0) {
    if (*(char *)(param_3 + _DAT_112d7c318) == '\x01') {
      uVar3 = *(undefined8 *)(param_3 + _DAT_112d7c2d8);
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      *(undefined1 *)(param_3 + lVar1) = 0;
      *(undefined8 *)(param_3 + _DAT_112d7c308) = 0;
      func_0x000107c61170(param_3);
      func_0x000107c615e8(uVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1013f5b54; end: 1013f5ceb;  */

void FUN_1013f5b54(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_2;
  if (param_2 == 0) {
    func_0x0001052198e8();
    func_0x000107c61180();
    if (param_1 == 0) {
      param_1 = 0;
      goto LAB_1013f5bdc;
    }
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    param_1 = lVar1;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,lVar4);
  func_0x000107c6142c(lVar4);
LAB_1013f5bdc:
  puVar2 = PTR_PTR_1126af138;
  func_0x000107c61168(PTR_PTR_1126af138);
  func_0x000107c50838();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  (*param_3)(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    puVar2 = &UNK_1103b15c8;
    func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_5);
    uStack_78 = 0x1013f6a9c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b17c0;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_70);
    func_0x0001000d76cc("COS Verify OTP Failed",ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 1013f5cec; end: 1013f5ddf; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013f5dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f5dc4) */

void FUN_1013f5cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103b1708;
  func_0x000107c613fc(&UNK_1103b1708,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1103b1730;
  func_0x000107c613fc(&UNK_1103b1730,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_1013f5814(param_3,param_2,param_4,FUN_1013f6a40,puVar1,0x1013f6a48,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013f5de0; end: 1013f5e33; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController codeVerificationFinished:] */

void FUN_1013f5de0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1013f5e34; end: 1013f5e37; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController codeVerificationExited] */

void FUN_1013f5e34(void)

{
  return;
}



/* Entry: 1013f5e38; end: 1013f5e3b; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController codeVerificationExitedWithUnretryableError] */

void FUN_1013f5e38(void)

{
  return;
}



/* Entry: 1013f5e3c; end: 1013f5edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013f5e3c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7c2d0);
  func_0x000107c61174(uVar2);
  uVar4 = uVar2;
  FUN_1013f2690();
  func_0x000107c61170(uVar2);
  lVar3 = -0x2fffffffffffffec;
  FUN_1013f327c(0xd000000000000014,0x800000010ef3d060);
  func_0x000107c61170(uVar4);
  if (lVar3 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f5edc);
    (*pcVar1)();
  }
  if (lVar3 < 0x80000000) {
    uVar4 = 0x403e000000000000;
    if (lVar3 != 6) {
      uVar4 = 0x404e000000000000;
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f5ee0);
  (*pcVar1)();
}



/* Entry: 1013f5ee0; end: 1013f5f1b; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController codeVerificationCoolDownInterval] */

undefined8 FUN_1013f5ee0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1013f5e3c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1013f5f1c; end: 1013f61af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f5f1c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112d7c308);
      *(long *)(param_2 + _DAT_112d7c308) = param_1;
      func_0x000107c61170(uVar2);
      func_0x000107c61174(param_1);
      func_0x000107c5a050(lVar1);
      func_0x000107c3d89c(param_3);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar4 = puVar3;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 9;
      *(undefined8 *)(puVar4 + 0x10) = 4;
      lVar5 = lVar1;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c4acb0(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar2);
      *(long *)(puVar4 + 0x20) = lVar6;
      lVar5 = lVar1;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c5ce8c(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar2);
      *(long *)(puVar4 + 0x28) = lVar6;
      lVar5 = lVar1;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c5cbe4(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar2);
      *(long *)(puVar4 + 0x30) = lVar6;
      lVar5 = lVar1;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c3ec1c(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar2);
      *(long *)(puVar4 + 0x38) = lVar6;
      uVar2 = 0;
      func_0x000100847984(0);
      puVar7 = puVar4;
      func_0x000107c5fc48(puVar4,uVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(puVar7);
      FUN_1013f61b0(param_3);
      func_0x000107c61170(param_2);
      param_2 = lVar1;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013f61b0; end: 1013f6497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f61b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112d7c300;
  ppuVar6 = &puStack_90;
  lVar2 = unaff_x20 + _DAT_112d7c300;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar2);
  }
  puVar3 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c45098(0x4039000000000000,0x4039000000000000,puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c55260(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = &UNK_1103b15c8;
  func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_70 = 0x1013f69e4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103b1658;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56ea0(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c(param_1);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 5;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar7 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar9 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c40284(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar9);
  *(undefined **)(puVar5 + 0x20) = puVar8;
  puVar7 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c40284(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_1);
  *(undefined **)(puVar5 + 0x28) = puVar8;
  uVar9 = 0;
  func_0x000100847984(0);
  puVar7 = puVar5;
  func_0x000107c5fc48(puVar5,uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61604(unaff_x20 + lVar1,puVar3);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1013f6498; end: 1013f650f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f6498(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112d7c308);
    *(undefined8 *)(param_3 + _DAT_112d7c308) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1013f6510; end: 1013f667f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013f6510(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  
  lVar6 = _DAT_112d7c2d0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7c2d0);
  func_0x000107c61174(uVar3);
  uVar4 = uVar3;
  FUN_1013f2690();
  func_0x000107c61170(uVar3);
  lVar8 = -0x7ffffffef10c2fc0;
  uVar3 = 0xd000000000000011;
  FUN_1013f3454(0xd000000000000011);
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  if (lVar8 != 0) {
    uVar4 = uVar3;
  }
  lVar1 = -0x2000000000000000;
  if (lVar8 != 0) {
    lVar1 = lVar8;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c61174(uVar5);
  uVar3 = uVar5;
  FUN_1013f2690();
  func_0x000107c61170(uVar5);
  lVar6 = -0x2fffffffffffffec;
  FUN_1013f327c(0xd000000000000014,0x800000010ef3d060);
  func_0x000107c61170(uVar3);
  if (-0x80000001 < lVar6) {
    if (lVar6 < 0x80000000) {
      puVar7 = PTR_PTR_1126af120;
      func_0x000107c61168(PTR_PTR_1126af120);
      func_0x000107c5fadc(uVar4,lVar1);
      func_0x000107c6142c(lVar1);
      if (lVar6 == 6) {
        func_0x000107c5e2a0(puVar7);
      }
      else if (lVar6 == 2) {
        func_0x000107c424a8();
      }
      else {
        func_0x000107c4e6e0();
      }
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013f6680);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013f667c);
  (*pcVar2)();
}



/* Entry: 1013f6680; end: 1013f66d3;  */

void FUN_1013f6680(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001013f5218();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013f66d4; end: 1013f6883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f66d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d7c300;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c54514(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d7c300;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c526c0(0,lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1013f6884; end: 1013f68e3; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController init] */

void FUN_1013f6884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSOTPLegacyNativeController",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f68b0);
  (*pcVar1)();
}



/* Entry: 1013f68e4; end: 1013f6997; -[_TtC15COSServicesImpl28COSOTPLegacyNativeController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f68e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c2d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c2d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7c2e0 + 8));
  FUN_1013f6ab4(param_1 + _DAT_112d7c2e8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7c2f0 + 8));
  func_0x000107c61610(param_1 + _DAT_112d7c2f8);
  func_0x000107c61610(param_1 + _DAT_112d7c300);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c308));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7c320 + 8))
  ;
  return;
}



/* Entry: 1013f6998; end: 1013f69b7;  */

void FUN_1013f6998(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1db0);
  return;
}



/* Entry: 1013f69b8; end: 1013f69eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f69b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112d7c308);
      *(long *)(lVar2 + _DAT_112d7c308) = param_1;
      func_0x000107c61170(uVar4);
      func_0x000107c61174(param_1);
      func_0x000107c5a050(lVar3);
      func_0x000107c3d89c(uVar1);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar6 = puVar5;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar6 + 0x18) = 9;
      *(undefined8 *)(puVar6 + 0x10) = 4;
      lVar7 = lVar3;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar4 = uVar1;
      func_0x000107c4acb0(uVar1);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar4);
      *(long *)(puVar6 + 0x20) = lVar8;
      lVar7 = lVar3;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar4 = uVar1;
      func_0x000107c5ce8c(uVar1);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar4);
      *(long *)(puVar6 + 0x28) = lVar8;
      lVar7 = lVar3;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar4 = uVar1;
      func_0x000107c5cbe4(uVar1);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar4);
      *(long *)(puVar6 + 0x30) = lVar8;
      lVar7 = lVar3;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar4 = uVar1;
      func_0x000107c3ec1c(uVar1);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar4);
      *(long *)(puVar6 + 0x38) = lVar8;
      uVar4 = 0;
      func_0x000100847984(0);
      puVar9 = puVar6;
      func_0x000107c5fc48(puVar6,uVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(puVar9);
      FUN_1013f61b0(uVar1);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013f69ec; end: 1013f6a17;  */

void FUN_1013f69ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013f6a18; end: 1013f6a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f6a18(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + _DAT_112d7c310) & 1) == 0) {
      *(undefined1 *)(lVar4 + _DAT_112d7c310) = 1;
      pcVar1 = *(code **)(lVar4 + _DAT_112d7c2f0);
      uVar2 = ((undefined8 *)(lVar4 + _DAT_112d7c2f0))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)(uVar3);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1013f6a20; end: 1013f6a3f;  */

void FUN_1013f6a20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1013f6a40; end: 1013f6a63;  */

void FUN_1013f6a40(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100cb0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1013f6a64; end: 1013f6a8f;  */

void FUN_1013f6a64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013f6a90; end: 1013f6ab3;  */

void FUN_1013f6a90(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar5 = param_2;
  if (param_2 == 0) {
    func_0x0001052198e8();
    func_0x000107c61180();
    if (param_1 == 0) {
      param_1 = 0;
      goto LAB_1013f5bdc;
    }
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    param_1 = lVar2;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,lVar5);
  func_0x000107c6142c(lVar5);
LAB_1013f5bdc:
  puVar3 = PTR_PTR_1126af138;
  func_0x000107c61168(PTR_PTR_1126af138);
  func_0x000107c50838();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  (*pcVar1)(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar3 = &UNK_1103b15c8;
    func_0x000107c613fc(&UNK_1103b15c8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar6);
    uStack_78 = 0x1013f6a9c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b17c0;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_70);
    func_0x0001000d76cc("COS Verify OTP Failed",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1013f6ab4; end: 1013f6ad7;  */

undefined8 FUN_1013f6ab4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013f6ad8; end: 1013f6b17;  */

void FUN_1013f6ad8(long param_1,long param_2)

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



/* Entry: 1013f6b18; end: 1013f6bbf;  */

void FUN_1013f6b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61614(unaff_x20 + 0x58,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  uVar1 = 0;
  FUN_1013f9db8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  lVar2 = 0;
  func_0x0001013f2340();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x3fb999999999999a;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(long *)(unaff_x20 + 0x28) = lVar2;
  return;
}



/* Entry: 1013f6bc0; end: 1013f6e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1013f6bc0(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
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
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = 0;
  FUN_1013f9b24();
  lVar8 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112d7c570) = 0;
  *(undefined8 *)(lVar8 + _DAT_112d7c578) = 0;
  puVar1 = (undefined4 *)(lVar8 + _DAT_112d7c580);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar8 + _DAT_112d7c588);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar6 = lVar8 + _DAT_112d7c590;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  *(undefined ***)(lVar6 + 8) = &PTR_DAT_1103b1838;
  func_0x000107c61604();
  *(undefined8 *)(lVar8 + _DAT_112d7c598) = uVar9;
  puVar4 = PTR_s_init_1125d9248;
  lStack_90 = lVar8;
  lStack_88 = lVar5;
  func_0x000107c61174();
  plVar7 = &lStack_90;
  func_0x000107c61154(plVar7,puVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  lVar8 = 0;
  FUN_1013f9104();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d7c4f0) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c4f8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c500) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c508) = 0;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c510);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined4 *)(lVar6 + _DAT_112d7c518);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c520);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar6 + _DAT_112d7c528) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c530) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c538) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c540) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c4c8) = uVar9;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c4d0);
  puVar2[1] = uVar14;
  *puVar2 = uVar13;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c4e0);
  *puVar2 = uVar10;
  puVar2[1] = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d7c4e8) = uVar11;
  *(long **)(lVar6 + _DAT_112d7c4d8) = plVar7;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar9);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(uVar12);
  plVar7 = &lStack_a0;
  func_0x000107c61154(uVar15,uVar16,uVar17,uVar18,plVar7,puVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(long **)(param_1 + 0x48) = plVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  return plVar7;
}



/* Entry: 1013f6e54; end: 1013f7587;  */

void FUN_1013f6e54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_a0;
    ppuVar4 = &puStack_a0;
    ppuVar5 = &puStack_a0;
    ppuVar6 = &puStack_a0;
    ppuVar7 = &puStack_a0;
    ppuVar8 = &puStack_a0;
    ppuVar9 = &puStack_a0;
    ppuVar10 = &puStack_a0;
    ppuVar11 = &puStack_a0;
    ppuVar12 = &puStack_a0;
    ppuVar13 = &puStack_a0;
    ppuVar14 = &puStack_a0;
    ppuVar15 = &puStack_a0;
    ppuVar16 = &puStack_a0;
    ppuVar17 = &puStack_a0;
    ppuVar18 = &puStack_a0;
    ppuVar20 = &puStack_a0;
    ppuVar21 = &puStack_a0;
    func_0x000107c615f0();
    uVar2 = 0x7365527061546e6f;
    func_0x000107c5fadc(0x7365527061546e6f,0xef65646f43646e65);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x1013f9b44;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b1860;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7588;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b1888;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0x62755350544f6e6f;
    func_0x000107c5fadc(0x62755350544f6e6f,0xeb0000000074696d);
    pcStack_80 = FUN_1013f9b80;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b18b0;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7614;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b18d8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    uVar2 = 0x74696769446d756e;
    func_0x000107c5fadc(0x74696769446d756e,0xe900000000000073);
    pcStack_80 = FUN_1013f9ba0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b1900;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f76c4;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b1928;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef3d260);
    pcStack_80 = (code *)0x1013f9ba8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c454;
    puStack_88 = &UNK_1103b1950;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7754;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b1978;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8f4(param_1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef3d280);
    pcStack_80 = (code *)0x1013f9bb0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c454;
    puStack_88 = &UNK_1103b19a0;
    uStack_78 = param_2;
    func_0x000107c60bc4();
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7818;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b19c8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8f4(param_1);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3d040);
    pcStack_80 = (code *)0x1013f9bb8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b19f0;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7920;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b1a18;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef3d060);
    pcStack_80 = (code *)0x1013f9bc0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b1a40;
    uStack_78 = param_2;
    func_0x000107c60bc4();
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7a0c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b1a68;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6978457061546e6f;
    func_0x000107c5fadc(0x6978457061546e6f,0xe900000000000074);
    pcStack_80 = (code *)0x1013f9bc8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b1a90;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar19 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar19);
    pcStack_80 = FUN_1013f7ae8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b1ab8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(uVar2);
    uVar19 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010ef3d2a0);
    pcStack_80 = (code *)0x1013f7aec;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b1ae0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013f7af0;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b1b08;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar19);
  }
  return;
}



/* Entry: 1013f7588; end: 1013f758b;  */

void FUN_1013f7588(void)

{
  return;
}



/* Entry: 1013f758c; end: 1013f7613;  */

void FUN_1013f758c(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_1013f9104(0);
  func_0x000107c61480(param_1,uVar1);
  if ((param_1 != 0) && (lVar2 = *(long *)(param_3 + 0x50), lVar2 != 0)) {
    uVar1 = *(undefined8 *)(lVar2 + *param_4);
    *(undefined8 *)(lVar2 + *param_4) = param_2;
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013f7614; end: 1013f7617;  */

void FUN_1013f7614(void)

{
  return;
}



/* Entry: 1013f7618; end: 1013f76c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013f7618(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar2 = 0;
  FUN_1013f9104(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d7c510);
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar4 = &UNK_1103b1c08;
    func_0x000107c613fc(&UNK_1103b1c08,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(0x1013f9ebc,puVar4);
    func_0x000107c61574(puVar4);
  }
  return lVar3 != 0;
}



/* Entry: 1013f76c4; end: 1013f76c7;  */

void FUN_1013f76c4(void)

{
  return;
}



/* Entry: 1013f76c8; end: 1013f7753;  */

bool FUN_1013f76c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_1013f9104(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    puVar3 = &UNK_1103b1be0;
    func_0x000107c613fc(&UNK_1103b1be0,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(0x1013f9eb8,puVar3);
    func_0x000107c61574(puVar3);
  }
  return lVar2 != 0;
}



/* Entry: 1013f7754; end: 1013f7757;  */

void FUN_1013f7754(void)

{
  return;
}



/* Entry: 1013f7758; end: 1013f7817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013f7758(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_1013f9104(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + _DAT_112d7c528) = param_2 & 1;
    func_0x000107c61174(param_1);
    FUN_1013f7d14();
    puVar3 = &UNK_1103b1bb8;
    func_0x000107c613fc(&UNK_1103b1bb8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(0x1013f9eb4,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_1);
  }
  return lVar2 != 0;
}



/* Entry: 1013f7818; end: 1013f781b;  */

void FUN_1013f7818(void)

{
  return;
}


