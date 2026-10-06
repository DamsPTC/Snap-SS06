/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020b728c; end: 1020b7363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020b728c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e56600;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e56600);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c5a100(puVar3,param_2,0x16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174();
    func_0x000107c5af88(puVar2,param_2,0xc6);
    func_0x000107c61180();
    func_0x000107c59c78(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1020b7364; end: 1020b7663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1020b7364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e56600) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  FUN_1020b728c();
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = 0x112d360b8;
  FUN_1020b7838(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  lVar7 = _DAT_112e56600;
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112e56600);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar6 = uVar5;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + lVar7);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar6 = uVar5;
  func_0x000107c402a8(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + lVar7);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar6 = uVar5;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + lVar7);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar6 = uVar5;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar4 + 0x38) = uVar6;
  uVar6 = 0;
  FUN_1020b78d4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar4;
  func_0x000107c5fc48(lVar4,uVar6);
  func_0x000107c61574(lVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar7);
  return puVar1;
}



/* Entry: 1020b7664; end: 1020b7683; -[_TtC18GamesFriendsFeedUI33GamesFriendsFeedSectionHeaderView initWithFrame:] */

void FUN_1020b7664(void)

{
  FUN_1020b7364();
  return;
}



/* Entry: 1020b7684; end: 1020b76e7; -[_TtC18GamesFriendsFeedUI33GamesFriendsFeedSectionHeaderView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b7684(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112e56600) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "GamesFriendsFeedUI/GamesFriendsFeedSectionHeaderView.swift",0x3a,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b76e8);
  (*pcVar1)();
}



/* Entry: 1020b76e8; end: 1020b773f;  */

/* WARNING: Possible PIC construction at 0x0001020b7728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b772c) */

void FUN_1020b76e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1020b728c();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59c6c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1020b7740; end: 1020b77af; -[_TtC18GamesFriendsFeedUI33GamesFriendsFeedSectionHeaderView prepareForReuse] */

void FUN_1020b7740(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_prepareForReuse_112620008;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1020b728c();
  func_0x000107c59c6c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020b77b0; end: 1020b77e3;  */

void FUN_1020b77b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020b77e4; end: 1020b77f3; -[_TtC18GamesFriendsFeedUI33GamesFriendsFeedSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b77e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56600));
  return;
}



/* Entry: 1020b77f4; end: 1020b7813;  */

void FUN_1020b77f4(void)

{
  func_0x000107c61168(&PTR_PTR_11281d198);
  return;
}



/* Entry: 1020b7814; end: 1020b7837;  */

void FUN_1020b7814(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e56638;
  plVar5 = (long *)&UNK_10db75e30;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1020b78d4(0,0x112e56500,&PTR__OBJC_CLASS___UIImageView_1126aec28);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1020b7838; end: 1020b78af;  */

void FUN_1020b7838(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1020b78d4(0,param_1,param_2);
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



/* Entry: 1020b78b0; end: 1020b78d3;  */

void FUN_1020b78b0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e56630;
  plVar5 = (long *)&UNK_10db2aca0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1020b78d4(0,0x112e564e8,&PTR_PTR_1126b5978);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1020b78d4; end: 1020b7913;  */

void FUN_1020b78d4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020b7914; end: 1020b7a33;  */

undefined * FUN_1020b7914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x401c000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0x4000000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c5af88(puVar2,param_2,0x3e);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52df8(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1020b7a34; end: 1020b7bbb;  */

undefined * FUN_1020b7a34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4ca98(0x4031000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c52518(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c55f80(puVar1,param_2,4);
  return puVar1;
}



/* Entry: 1020b7bbc; end: 1020b7d7b;  */

undefined * FUN_1020b7bbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  func_0x000107c55258(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x447a0000,puVar1);
  func_0x000107c537fc(0x447a0000,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x402e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar5 = puVar4;
  func_0x000107c40290(0x402e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  uVar6 = 0;
  FUN_1020ba750(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1020b7d7c; end: 1020b7e8b;  */

undefined * FUN_1020b7d7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = &DAT_112e56688;
  FUN_1020b7f64(&DAT_112e56688,FUN_1020b7bbc);
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = &DAT_112e56680;
  FUN_1020b7f64(&DAT_112e56680,0x1020b7af8);
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar2 = 0;
  FUN_1020ba750(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = param_1;
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c52b2c(puVar1);
  func_0x000107c52610(puVar1);
  func_0x000107c59594(0x4010000000000000,puVar1);
  return puVar1;
}



/* Entry: 1020b7e8c; end: 1020b7f63;  */

undefined * FUN_1020b7e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1,param_2,2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4030800000000000);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1020b7f64; end: 1020b7fbf;  */

long FUN_1020b7f64(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1020b7fc0; end: 1020b8067;  */

undefined * FUN_1020b7fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1,param_2,0x18);
  func_0x000107c61174(puVar1);
  func_0x000107c59c74();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c537fc(0x447a0000,puVar1,param_2,0);
  return puVar1;
}



/* Entry: 1020b8068; end: 1020b82e7;  */

undefined * FUN_1020b8068(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = &DAT_112e56698;
  FUN_1020b7f64(&DAT_112e56698,FUN_1020b7e8c);
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = &DAT_112e566a0;
  FUN_1020b7f64(&DAT_112e566a0,FUN_1020b7fc0);
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar2 = 0;
  FUN_1020ba750(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = param_1;
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c52b2c(puVar1);
  func_0x000107c52610(puVar1);
  func_0x000107c59594(0x4010000000000000,puVar1);
  return puVar1;
}



/* Entry: 1020b82e8; end: 1020b8583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1020b82e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = _DAT_112e56650;
  puVar2 = PTR_PTR_1126b0870;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e56640) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56648) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56658) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56660) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56668) = 0;
  puVar2 = &DAT_112e56670;
  *(undefined8 *)(unaff_x20 + _DAT_112e56670) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56678) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56680) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56688) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e566a0) = 0;
  puVar6 = &DAT_112e566a8;
  *(undefined8 *)(unaff_x20 + _DAT_112e566a8) = 0;
  puVar5 = &DAT_112e566b0;
  *(undefined8 *)(unaff_x20 + _DAT_112e566b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e566b8) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112e56650;
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112e56650);
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5a050(uVar7);
  func_0x000107c5a378(*(undefined8 *)(puVar3 + lVar1));
  puVar3 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  FUN_1020b7f64(&DAT_112e56670,FUN_1020b7914);
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar3 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x0001020b8178(&DAT_112e566b0,0x1020b81d8);
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  puVar3 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x0001020b8178(&DAT_112e566a8,0x1020b8068);
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  FUN_1020b8584();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1020b8584; end: 1020b8eab;  */

/* WARNING: Possible PIC construction at 0x0001020b8630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b86a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b86c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b877c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b87a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b87e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b881c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b88e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b891c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b89b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b89ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b8e64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b8e34) */
/* WARNING: Removing unreachable block (ram,0x0001020b8de8) */
/* WARNING: Removing unreachable block (ram,0x0001020b8d90) */
/* WARNING: Removing unreachable block (ram,0x0001020b8d6c) */
/* WARNING: Removing unreachable block (ram,0x0001020b8d20) */
/* WARNING: Removing unreachable block (ram,0x0001020b8cfc) */
/* WARNING: Removing unreachable block (ram,0x0001020b8cb0) */
/* WARNING: Removing unreachable block (ram,0x0001020b8c90) */
/* WARNING: Removing unreachable block (ram,0x0001020b8c40) */
/* WARNING: Removing unreachable block (ram,0x0001020b8c08) */
/* WARNING: Removing unreachable block (ram,0x0001020b8bc8) */
/* WARNING: Removing unreachable block (ram,0x0001020b8ba4) */
/* WARNING: Removing unreachable block (ram,0x0001020b8b58) */
/* WARNING: Removing unreachable block (ram,0x0001020b8b34) */
/* WARNING: Removing unreachable block (ram,0x0001020b8ae8) */
/* WARNING: Removing unreachable block (ram,0x0001020b8ac8) */
/* WARNING: Removing unreachable block (ram,0x0001020b8a78) */
/* WARNING: Removing unreachable block (ram,0x0001020b8a54) */
/* WARNING: Removing unreachable block (ram,0x0001020b8a28) */
/* WARNING: Removing unreachable block (ram,0x0001020b89f0) */
/* WARNING: Removing unreachable block (ram,0x0001020b89b8) */
/* WARNING: Removing unreachable block (ram,0x0001020b898c) */
/* WARNING: Removing unreachable block (ram,0x0001020b8954) */
/* WARNING: Removing unreachable block (ram,0x0001020b8920) */
/* WARNING: Removing unreachable block (ram,0x0001020b88e4) */
/* WARNING: Removing unreachable block (ram,0x0001020b888c) */
/* WARNING: Removing unreachable block (ram,0x0001020b8858) */
/* WARNING: Removing unreachable block (ram,0x0001020b8820) */
/* WARNING: Removing unreachable block (ram,0x0001020b87ec) */
/* WARNING: Removing unreachable block (ram,0x0001020b87a4) */
/* WARNING: Removing unreachable block (ram,0x0001020b8780) */
/* WARNING: Removing unreachable block (ram,0x0001020b8734) */
/* WARNING: Removing unreachable block (ram,0x0001020b8710) */
/* WARNING: Removing unreachable block (ram,0x0001020b86c4) */
/* WARNING: Removing unreachable block (ram,0x0001020b86a4) */
/* WARNING: Removing unreachable block (ram,0x0001020b8658) */
/* WARNING: Removing unreachable block (ram,0x0001020b8634) */
/* WARNING: Removing unreachable block (ram,0x0001020b8e68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b8584(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0x2b;
  *(undefined8 *)(puVar1 + 0x10) = 0x15;
  func_0x000107c4acb0(*(undefined8 *)(unaff_x20 + _DAT_112e56650));
  func_0x000107c61180();
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1020b8eac; end: 1020b8ecb; -[_TtC18GamesFriendsFeedUI22GamesInProgressRowCell initWithFrame:] */

void FUN_1020b8eac(void)

{
  FUN_1020b82e8();
  return;
}



/* Entry: 1020b8ecc; end: 1020b8ef3; -[_TtC18GamesFriendsFeedUI22GamesInProgressRowCell initWithCoder:] */

void FUN_1020b8ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001020ba5c8();
  return;
}



/* Entry: 1020b8ef4; end: 1020b93db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b8ef4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_b8;
  long alStack_b0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  code *pcStack_68;
  
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61434(uVar11);
  FUN_1020b93dc(uVar17,uVar11);
  uVar19 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x000107c61434(uVar2);
  FUN_1020b9628(uVar19,uVar2);
  uVar18 = uVar19 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar18 = uVar2 >> 0x38 & 0xf;
  }
  cVar4 = *(char *)(param_1 + 0x38);
  FUN_1020b9880(cVar4,uVar2 != 0 && uVar18 != 0);
  puVar10 = &DAT_112e566a0;
  pcVar5 = FUN_1020b7fc0;
  FUN_1020b7f64(&DAT_112e566a0,FUN_1020b7fc0);
  puVar6 = puVar10;
  if (cVar4 == '\x01') {
    func_0x0001020baf54();
  }
  else {
    func_0x0001020bae84();
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(pcVar5);
  func_0x000107c59c6c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
  puVar10 = &DAT_112e56670;
  pcVar5 = FUN_1020b7914;
  FUN_1020b7f64(&DAT_112e56670);
  func_0x000107c550d8(puVar10);
  func_0x000107c61170(puVar10);
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c55528();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c52100();
  func_0x000107c61170(lVar7);
  lVar7 = unaff_x20;
  func_0x000107c40510();
  func_0x000107c61180();
  lVar8 = lVar7;
  uStack_90 = uVar17;
  uStack_88 = uVar11;
  uStack_80 = uVar19;
  uStack_78 = uVar2;
  if (cVar4 == '\x01') {
    func_0x0001020baf54();
  }
  else {
    func_0x0001020bae84();
  }
  uVar18 = 0;
  lStack_70 = lVar8;
  pcStack_68 = pcVar5;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar19 = uVar18;
    if (uVar18 < 4) {
      uVar19 = 3;
    }
    lVar8 = uVar18 * 0x10 + 0x28;
    do {
      lVar15 = lVar8;
      if (uVar18 == 3) {
        uVar17 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000107c61408(&uStack_90,3,uVar17);
        uVar18 = 0;
        uVar19 = *(ulong *)(puVar10 + 0x10);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        goto LAB_1020b91a8;
      }
      uVar18 = uVar18 + 1;
      if (uVar19 + 1 == uVar18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020b93d8);
        (*pcVar5)();
      }
      lVar16 = *(long *)((long)alStack_b0 + lVar15);
      lVar8 = lVar15 + 0x10;
    } while (lVar16 == 0);
    uVar17 = *(undefined8 *)((long)alStack_b0 + lVar15 + -8);
    func_0x000107c61434(lVar16);
    puVar6 = puVar10;
    func_0x000107c61558();
    puVar9 = puVar10;
    if (((ulong)puVar6 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
    }
    uVar19 = *(ulong *)(puVar9 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      func_0x0001000d182c(puVar10,uVar19 + 1,1,puVar9);
    }
    *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
    *(undefined8 *)(puVar10 + uVar19 * 0x10 + 0x20) = uVar17;
    *(long *)(puVar10 + uVar19 * 0x10 + 0x28) = lVar16;
  } while( true );
LAB_1020b91a8:
  puVar14 = (ulong *)(puVar10 + uVar18 * 0x10 + 0x28);
  do {
    if (uVar19 == uVar18) {
      func_0x000107c6142c(puVar10);
      uVar17 = 0x112d38270;
      puStack_b8 = puVar6;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar11 = uVar17;
      func_0x00010011d734();
      uVar12 = 0x202e;
      uVar13 = 0xe200000000000000;
      func_0x000107c5fa80(0x202e,0xe200000000000000,uVar17,uVar11);
      func_0x000107c61574(puVar6);
      func_0x000107c5fadc(uVar12,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x000107c520fc(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar12);
      FUN_1020b9a38(*(undefined8 *)(param_1 + 0x40),cVar4);
      lVar7 = _DAT_112e566b8;
      uVar18 = *(ulong *)(unaff_x20 + _DAT_112e566b8);
      puVar10 = *(undefined **)(param_1 + 0x30);
      if (uVar18 == 0) {
        if (puVar10 == (undefined *)0x0) {
          return;
        }
        func_0x000107c61174(puVar10);
        uVar18 = 0;
      }
      else if (puVar10 != (undefined *)0x0) {
        FUN_1020ba750(0,0x112e56538,&PTR_PTR_1126b5928);
        puVar6 = puVar10;
        func_0x000107c61174(puVar10);
        func_0x000107c61174();
        func_0x000107c61174();
        uVar19 = uVar18;
        func_0x000107c60118();
        func_0x000107c61170(uVar18);
        func_0x000107c61170(puVar6);
        if ((uVar19 & 1) != 0) goto LAB_1020b93ac;
        uVar18 = *(ulong *)(unaff_x20 + lVar7);
      }
      *(undefined **)(unaff_x20 + lVar7) = puVar10;
      func_0x000107c61170(uVar18);
      puVar6 = &DAT_112e56698;
      FUN_1020b7f64(&DAT_112e56698,FUN_1020b7e8c);
      func_0x000107c55258();
LAB_1020b93ac:
      func_0x000107c61170(puVar6);
      return;
    }
    if (*(ulong *)(puVar10 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1020b93dc);
      (*pcVar5)();
    }
    uVar1 = puVar14[-1];
    uVar3 = *puVar14;
    puVar14 = puVar14 + 2;
    uVar18 = uVar18 + 1;
    uVar2 = uVar1 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
  } while (uVar2 == 0);
  func_0x000107c61434(uVar3);
  puVar9 = puVar6;
  func_0x000107c61558();
  puStack_b8 = puVar6;
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100403514(0,*(long *)(puVar6 + 0x10) + 1,1);
  }
  uVar2 = *(ulong *)(puStack_b8 + 0x10);
  if (*(ulong *)(puStack_b8 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puStack_b8 + 0x18),uVar2 + 1,1);
  }
  *(ulong *)(puStack_b8 + 0x10) = uVar2 + 1;
  *(ulong *)(puStack_b8 + uVar2 * 0x10 + 0x20) = uVar1;
  *(ulong *)(puStack_b8 + uVar2 * 0x10 + 0x28) = uVar3;
  puVar6 = puStack_b8;
  goto LAB_1020b91a8;
}



/* Entry: 1020b93dc; end: 1020b9627;  */

/* WARNING: Possible PIC construction at 0x0001020b942c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b946c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b95ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b9608) */
/* WARNING: Removing unreachable block (ram,0x0001020b9470) */
/* WARNING: Removing unreachable block (ram,0x0001020b94dc) */
/* WARNING: Removing unreachable block (ram,0x0001020b9474) */
/* WARNING: Removing unreachable block (ram,0x0001020b9478) */
/* WARNING: Removing unreachable block (ram,0x0001020b947c) */
/* WARNING: Removing unreachable block (ram,0x0001020b95cc) */
/* WARNING: Removing unreachable block (ram,0x0001020b9480) */
/* WARNING: Removing unreachable block (ram,0x0001020b94a8) */
/* WARNING: Removing unreachable block (ram,0x0001020b95d4) */
/* WARNING: Removing unreachable block (ram,0x0001020b9430) */
/* WARNING: Removing unreachable block (ram,0x0001020b94ac) */
/* WARNING: Removing unreachable block (ram,0x0001020b95dc) */
/* WARNING: Removing unreachable block (ram,0x0001020b94bc) */
/* WARNING: Removing unreachable block (ram,0x0001020b9434) */
/* WARNING: Removing unreachable block (ram,0x0001020b94c0) */
/* WARNING: Removing unreachable block (ram,0x0001020b94e4) */
/* WARNING: Removing unreachable block (ram,0x0001020b94c4) */
/* WARNING: Removing unreachable block (ram,0x0001020b94cc) */
/* WARNING: Removing unreachable block (ram,0x0001020b95f4) */
/* WARNING: Removing unreachable block (ram,0x0001020b9458) */
/* WARNING: Removing unreachable block (ram,0x0001020b95b0) */

void FUN_1020b93dc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112e56678;
  FUN_1020b7f64(&DAT_112e56678,FUN_1020b7a34);
  func_0x000107c5c82c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020b9628; end: 1020b987f;  */

/* WARNING: Possible PIC construction at 0x0001020b9674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b9750) */
/* WARNING: Removing unreachable block (ram,0x0001020b9694) */
/* WARNING: Removing unreachable block (ram,0x0001020b96a0) */
/* WARNING: Removing unreachable block (ram,0x0001020b96e8) */
/* WARNING: Removing unreachable block (ram,0x0001020b96a8) */
/* WARNING: Removing unreachable block (ram,0x0001020b971c) */
/* WARNING: Removing unreachable block (ram,0x0001020b96ac) */
/* WARNING: Removing unreachable block (ram,0x0001020b96b8) */
/* WARNING: Removing unreachable block (ram,0x0001020b96c0) */
/* WARNING: Removing unreachable block (ram,0x0001020b96c8) */
/* WARNING: Removing unreachable block (ram,0x0001020b976c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9794) */
/* WARNING: Removing unreachable block (ram,0x0001020b96d0) */
/* WARNING: Removing unreachable block (ram,0x0001020b96d8) */
/* WARNING: Removing unreachable block (ram,0x0001020b9678) */
/* WARNING: Removing unreachable block (ram,0x0001020b96f0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9730) */
/* WARNING: Removing unreachable block (ram,0x0001020b9700) */
/* WARNING: Removing unreachable block (ram,0x0001020b973c) */
/* WARNING: Removing unreachable block (ram,0x0001020b967c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9868) */

void FUN_1020b9628(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112e56680;
  FUN_1020b7f64(&DAT_112e56680,0x1020b7af8);
  func_0x000107c5c82c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020b9880; end: 1020b9a37;  */

/* WARNING: Possible PIC construction at 0x0001020b98c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b99c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b99c8) */
/* WARNING: Removing unreachable block (ram,0x0001020b9924) */
/* WARNING: Removing unreachable block (ram,0x0001020b9984) */
/* WARNING: Removing unreachable block (ram,0x0001020b994c) */
/* WARNING: Removing unreachable block (ram,0x0001020b99b4) */
/* WARNING: Removing unreachable block (ram,0x0001020b98c4) */
/* WARNING: Removing unreachable block (ram,0x0001020b98e4) */
/* WARNING: Removing unreachable block (ram,0x0001020b9a24) */

void FUN_1020b9880(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112e56690;
  func_0x0001020b8178(&DAT_112e56690,FUN_1020b7d7c);
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020b9a38; end: 1020ba077;  */

/* WARNING: Possible PIC construction at 0x0001020b9b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b9ca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b9ff8) */
/* WARNING: Removing unreachable block (ram,0x0001020ba070) */
/* WARNING: Removing unreachable block (ram,0x0001020ba060) */
/* WARNING: Removing unreachable block (ram,0x0001020ba050) */
/* WARNING: Removing unreachable block (ram,0x0001020ba040) */
/* WARNING: Removing unreachable block (ram,0x0001020b9fcc) */
/* WARNING: Removing unreachable block (ram,0x0001020b9fbc) */
/* WARNING: Removing unreachable block (ram,0x0001020b9fac) */
/* WARNING: Removing unreachable block (ram,0x0001020b9f9c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9f8c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9f7c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9f68) */
/* WARNING: Removing unreachable block (ram,0x0001020b9ef0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9eb0) */
/* WARNING: Removing unreachable block (ram,0x0001020ba038) */
/* WARNING: Removing unreachable block (ram,0x0001020b9eb4) */
/* WARNING: Removing unreachable block (ram,0x0001020b9de0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9dd0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9dc0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9d78) */
/* WARNING: Removing unreachable block (ram,0x0001020b9e04) */
/* WARNING: Removing unreachable block (ram,0x0001020b9e28) */
/* WARNING: Removing unreachable block (ram,0x0001020b9fe8) */
/* WARNING: Removing unreachable block (ram,0x0001020b9e4c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9db0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9d44) */
/* WARNING: Removing unreachable block (ram,0x0001020b9b40) */
/* WARNING: Removing unreachable block (ram,0x0001020b9b78) */
/* WARNING: Removing unreachable block (ram,0x0001020b9b5c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9b74) */
/* WARNING: Removing unreachable block (ram,0x0001020b9b98) */
/* WARNING: Removing unreachable block (ram,0x0001020b9bc8) */
/* WARNING: Removing unreachable block (ram,0x0001020b9bf0) */
/* WARNING: Removing unreachable block (ram,0x0001020b9c2c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9c10) */
/* WARNING: Removing unreachable block (ram,0x0001020b9c28) */
/* WARNING: Removing unreachable block (ram,0x0001020b9c4c) */
/* WARNING: Removing unreachable block (ram,0x0001020b9ba4) */
/* WARNING: Removing unreachable block (ram,0x0001020ba008) */
/* WARNING: Removing unreachable block (ram,0x0001020ba014) */

void FUN_1020b9a38(long param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar5 = puVar3;
    if (param_2 == '\0') {
      puVar4 = PTR_PTR_1126df338;
      func_0x000107c61168(PTR_PTR_1126df338);
      func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar3);
      func_0x000107c43d14(puVar4);
      func_0x000107c61180();
    }
    else {
      func_0x000107c5af88(puVar4);
      func_0x000107c61180();
      func_0x000107c61168(PTR_PTR_1126c96b8);
      func_0x000107c5b584(0);
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126c93b0;
      func_0x000107c61168(PTR_PTR_1126c93b0);
      uVar6 = 0;
      FUN_1020ba750(0,0x112e564e8,&PTR_PTR_1126b5978);
      func_0x000107c5fc48(puVar3,uVar6);
      func_0x000107c6142c(puVar3);
      func_0x000107c4e3a8(puVar4);
      func_0x000107c61180();
    }
  }
  else {
    func_0x0001020b1288(0,*(long *)(param_1 + 0x10),0);
    puVar5 = *(undefined **)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(puVar5,uVar1);
    func_0x000107c6142c(uVar1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar6,lVar2);
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c610f8(PTR_PTR_1126b5978);
    func_0x000107c491dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1020ba078; end: 1020ba0e7;  */

/* WARNING: Possible PIC construction at 0x0001020ba0d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ba0d4) */

void FUN_1020ba078(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1020b7f64(param_4,param_5);
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
  }
  func_0x000107c59c6c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1020ba0e8; end: 1020ba1c3;  */

/* WARNING: Possible PIC construction at 0x0001020ba164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ba168) */
/* WARNING: Removing unreachable block (ram,0x0001020ba174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ba0e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e566b8);
  if (lVar1 != 0) {
    FUN_1020ba750(0,0x112e56538,&PTR_PTR_1126b5928);
    func_0x000107c61174(param_2);
    func_0x000107c61174(lVar1);
    func_0x000107c60118(param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1020ba1c4; end: 1020ba2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ba1c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_prepareForReuse_112620008);
  puVar1 = &DAT_112e56698;
  FUN_1020b7f64(&DAT_112e56698,FUN_1020b7e8c);
  func_0x000107c55258();
  func_0x000107c61170(puVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e566b8);
  *(undefined8 *)(unaff_x20 + _DAT_112e566b8) = 0;
  func_0x000107c61170(uVar2);
  puVar1 = &DAT_112e56670;
  FUN_1020b7f64(&DAT_112e56670,FUN_1020b7914);
  func_0x000107c550d8();
  func_0x000107c61170(puVar1);
  puVar1 = &DAT_112e56678;
  FUN_1020b7f64(&DAT_112e56678,FUN_1020b7a34);
  func_0x000107c59c6c();
  func_0x000107c61170(puVar1);
  puVar1 = &DAT_112e56680;
  FUN_1020b7f64(&DAT_112e56680,0x1020b7af8);
  func_0x000107c59c6c();
  func_0x000107c61170(puVar1);
  puVar1 = &DAT_112e56690;
  func_0x0001020b8178(&DAT_112e56690,FUN_1020b7d7c);
  func_0x000107c550d8();
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1020ba2dc; end: 1020ba303; -[_TtC18GamesFriendsFeedUI22GamesInProgressRowCell prepareForReuse] */

void FUN_1020ba2dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020ba1c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020ba304; end: 1020ba48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ba304(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  func_0x000107c614f0();
  lVar2 = _DAT_112e56668;
  lVar1 = _DAT_112e56660;
  lVar8 = *(long *)(unaff_x20 + _DAT_112e56660);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e56668);
  if (lVar8 != 0 && lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar4 = "deinit";
    func_0x0001000c10c0("deinit");
    func_0x000107c61180();
    puVar5 = &UNK_1104c7498;
    func_0x000107c613fc(&UNK_1104c7498,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    *(long *)(puVar5 + 0x18) = lVar8;
    pcStack_80 = FUN_1020ba6f4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1104c74b0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c4e590(pcVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(pcVar4);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e56658);
  *(undefined8 *)(unaff_x20 + _DAT_112e56658) = 0;
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar7);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020ba48c; end: 1020ba4af; -[_TtC18GamesFriendsFeedUI22GamesInProgressRowCell dealloc] */

void FUN_1020ba48c(void)

{
  func_0x000107c61174();
  FUN_1020ba304();
  return;
}



/* Entry: 1020ba4b0; end: 1020ba6f3; -[_TtC18GamesFriendsFeedUI22GamesInProgressRowCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020ba4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020ba5ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ba590) */
/* WARNING: Removing unreachable block (ram,0x0001020ba570) */
/* WARNING: Removing unreachable block (ram,0x0001020ba550) */
/* WARNING: Removing unreachable block (ram,0x0001020ba530) */
/* WARNING: Removing unreachable block (ram,0x0001020ba510) */
/* WARNING: Removing unreachable block (ram,0x0001020ba4f0) */
/* WARNING: Removing unreachable block (ram,0x0001020ba4d0) */
/* WARNING: Removing unreachable block (ram,0x0001020ba5b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ba4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56650));
  return;
}



/* Entry: 1020ba6f4; end: 1020ba713;  */

void FUN_1020ba6f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c4ffec(*(undefined8 *)(unaff_x20 + 0x10),param_2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1020ba714; end: 1020ba72f;  */

void FUN_1020ba714(long param_1,long param_2)

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



/* Entry: 1020ba730; end: 1020ba74f;  */

void FUN_1020ba730(void)

{
  func_0x000107c61168(&PTR_PTR_11281d250);
  return;
}



/* Entry: 1020ba750; end: 1020ba78f;  */

void FUN_1020ba750(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1020ba790; end: 1020ba813;  */

void FUN_1020ba790(void)

{
  long unaff_x20;
  
  FUN_1020ba078(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_112e56680,0x1020b7af8);
  return;
}



/* Entry: 1020ba814; end: 1020ba823;  */

void FUN_1020ba814(long param_1,long param_2)

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



/* Entry: 1020ba824; end: 1020bb01f;  */

undefined1  [16] FUN_1020ba824(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f061210);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010da595c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020ba8f0);
  (*pcVar1)();
}



/* Entry: 1020bb020; end: 1020bb02f;  */

undefined1  [16] FUN_1020bb020(void)

{
  return ZEXT816(0x1104c7588);
}



/* Entry: 1020bb030; end: 1020bb07b;  */

void FUN_1020bb030(undefined8 param_1)

{
  func_0x0001000285a8(0x112e566e8,&UNK_10da59620);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020bb0e8,param_1);
  return;
}



/* Entry: 1020bb07c; end: 1020bb0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb07c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020bb244();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e566f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1020bb0e8; end: 1020bb0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb0e8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020bb244();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e566f0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1020bb0f0; end: 1020bb13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb0f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e566f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020bb13c; end: 1020bb1c3; -[_TtC31GamesFriendsFeedFactoryServices31GamesFriendsFeedFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1020bb1c4; end: 1020bb223; -[_TtC31GamesFriendsFeedFactoryServices31GamesFriendsFeedFactoryServices init] */

void FUN_1020bb1c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedFactoryServices.GamesFriendsFeedFactoryServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bb1f0);
  (*pcVar1)();
}



/* Entry: 1020bb224; end: 1020bb243; -[_TtC31GamesFriendsFeedFactoryServices31GamesFriendsFeedFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e566f0));
  return;
}



/* Entry: 1020bb244; end: 1020bb263;  */

void FUN_1020bb244(void)

{
  func_0x000107c61168(&PTR_PTR_11281d380);
  return;
}



/* Entry: 1020bb264; end: 1020bb2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb264(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e56728;
  func_0x000107c61428(unaff_x20 + _DAT_112e56728,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1020bb2a8; end: 1020bb3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb2a8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e56728;
  func_0x000107c61428(unaff_x20 + _DAT_112e56728,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020bb3f4; end: 1020bb4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020bb3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e56728;
  func_0x000107c61614(unaff_x20 + _DAT_112e56728,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e56720) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112e56730) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar3;
}



/* Entry: 1020bb4c4; end: 1020bb4e3;  */

void FUN_1020bb4c4(void)

{
  func_0x000107c61168(&PTR_PTR_11281d440);
  return;
}



/* Entry: 1020bb4e4; end: 1020bb59b; -[_TtC31GamesFriendsFeedFactoryServices21GamesFriendsFeedScope initWithUiContainer:presentingViewController:uberAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112e56728;
  func_0x000107c61614(param_1 + _DAT_112e56728,0);
  *(undefined8 *)(param_1 + _DAT_112e56720) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112e56730) = param_5;
  FUN_1020bb4c4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1020bb59c; end: 1020bb5f7; -[_TtC31GamesFriendsFeedFactoryServices21GamesFriendsFeedScope init] */

void FUN_1020bb59c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedFactoryServices.GamesFriendsFeedScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bb5c8);
  (*pcVar1)();
}



/* Entry: 1020bb5f8; end: 1020bb63f; -[_TtC31GamesFriendsFeedFactoryServices21GamesFriendsFeedScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020bb614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bb618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56720));
  return;
}



/* Entry: 1020bb640; end: 1020bb6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb640(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020bba34();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e56768) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1020bb6ac; end: 1020bb717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb6ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e56768) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020bb718; end: 1020bb777; -[_TtC58FriendsFeedGamesPresenceButtonScopedFactoryServiceProvider44FriendsFeedGamesPresenceButtonScopedServices init] */

void FUN_1020bb718(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedGamesPresenceButtonScopedFactoryServiceProvider.FriendsFeedGamesPresenceButtonScopedServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bb744);
  (*pcVar1)();
}



/* Entry: 1020bb778; end: 1020bb787; -[_TtC58FriendsFeedGamesPresenceButtonScopedFactoryServiceProvider44FriendsFeedGamesPresenceButtonScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e56768));
  return;
}



/* Entry: 1020bb788; end: 1020bb7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bb788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c7818;
  func_0x000107c613fc(&UNK_1104c7818,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1020bbacc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1020bb7f4; end: 1020bb88f;  */

void FUN_1020bb7f4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104c7728;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104c7728;
  return;
}



/* Entry: 1020bb890; end: 1020bb8c7;  */

void FUN_1020bb890(long *param_1)

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



/* Entry: 1020bb8c8; end: 1020bb8cf;  */

undefined8 FUN_1020bb8c8(void)

{
  return 0x1b;
}



/* Entry: 1020bb8d0; end: 1020bba03;  */

void FUN_1020bb8d0(undefined8 *param_1)

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
  puVar1 = &UNK_1104c7840;
  func_0x000107c613fc(&UNK_1104c7840,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020bbaa4;
  func_0x00010058fa64(FUN_1020bbaa4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020bba04; end: 1020bba33;  */

undefined ** FUN_1020bba04(void)

{
  return &PTR_DAT_113066610;
}



/* Entry: 1020bba34; end: 1020bba53;  */

void FUN_1020bba34(void)

{
  func_0x000107c61168(&PTR_PTR_11281d528);
  return;
}



/* Entry: 1020bba54; end: 1020bbaa3;  */

undefined1  [16] FUN_1020bba54(void)

{
  return ZEXT816(0x1104c7778);
}



/* Entry: 1020bbaa4; end: 1020bbacb;  */

void FUN_1020bbaa4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1020bbacc; end: 1020bbacf;  */

void FUN_1020bbacc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020bbad0; end: 1020bbc3f;  */

void FUN_1020bbad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e567d0,&UNK_10da59930);
  puVar1 = &UNK_1104c7880;
  func_0x000107c613fc(&UNK_1104c7880,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1020bbc40,puVar1);
  return;
}



/* Entry: 1020bbc40; end: 1020bbc5b;  */

/* WARNING: Possible PIC construction at 0x0001020bbc14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bbc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bbc18) */
/* WARNING: Removing unreachable block (ram,0x0001020bbc28) */

void FUN_1020bbc40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1104c78c8;
  func_0x000107c613fc(&UNK_1104c78c8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e567d8;
  func_0x0001000285a8(0x112e567d8,&UNK_10da59980);
  func_0x000107c613fc();
  pcVar6 = FUN_1020bbf84;
  func_0x0001000841fc(FUN_1020bbf84,puVar4,uVar5);
  func_0x000100084214(&UNK_10da59940,0x3a,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1020bbc5c; end: 1020bbf83;  */

void FUN_1020bbc5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e567e0,&UNK_10da59988);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1020bccf8();
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e567e8,&UNK_10da59990);
  puVar3 = &UNK_1104c78f0;
  func_0x000107c613fc(&UNK_1104c78f0,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x1020bbf90;
  func_0x0001000823a8(0x1020bbf90,puVar3);
  func_0x000100082720("FriendsFeedGamesPresenceEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1020bb890;
  func_0x0001000823a8(FUN_1020bb890,0);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e567f0,&UNK_10da599a0);
  puVar3 = &UNK_1104c7918;
  func_0x000107c613fc(&UNK_1104c7918,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar8);
  pcVar5 = FUN_1020bbfdc;
  func_0x0001000823a8(FUN_1020bbfdc,puVar3);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112e56770,&UNK_10da596c0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1020bbfe8;
  func_0x0001000823a8(0x1020bbfe8,pcVar5);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e56760,&UNK_10da596b0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1020bbff0;
  func_0x0001000823a8(0x1020bbff0,uVar6);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104c7940;
  func_0x000107c613fc(&UNK_1104c7940,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1020bbff8;
  func_0x0001000823a8(0x1020bbff8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeEntryPointProvider",0x35,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1020bbf84; end: 1020bbf9f;  */

void FUN_1020bbf84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e567e0,&UNK_10da59988);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_1020bccf8();
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e567e8,&UNK_10da59990);
  puVar4 = &UNK_1104c78f0;
  func_0x000107c613fc(&UNK_1104c78f0,0x38,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar5 = 0x1020bbf90;
  func_0x0001000823a8(0x1020bbf90,puVar4);
  func_0x000100082720("FriendsFeedGamesPresenceEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1020bb890;
  func_0x0001000823a8(FUN_1020bb890,0);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e567f0,&UNK_10da599a0);
  puVar4 = &UNK_1104c7918;
  func_0x000107c613fc(&UNK_1104c7918,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 **)(puVar4 + 0x18) = puVar3;
  *(code **)(puVar4 + 0x20) = pcVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar5;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar5);
  pcVar7 = FUN_1020bbfdc;
  func_0x0001000823a8(FUN_1020bbfdc,puVar4);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112e56770,&UNK_10da596c0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1020bbfe8;
  func_0x0001000823a8(0x1020bbfe8,pcVar7);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e56760,&UNK_10da596b0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1020bbff0;
  func_0x0001000823a8(0x1020bbff0,uVar8);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1104c7940;
  func_0x000107c613fc(&UNK_1104c7940,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(code **)(puVar4 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x1020bbff8;
  func_0x0001000823a8(0x1020bbff8,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeEntryPointProvider",0x35,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1020bbfa0; end: 1020bbfdb;  */

void FUN_1020bbfa0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020bbfdc; end: 1020bbfff;  */

void FUN_1020bbfdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1020bc4b4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("FriendsFeedGamesPresenceButtonScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020bc000; end: 1020bc2df;  */

void FUN_1020bc000(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_1020bc3e0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1020bf670(0);
  func_0x000107c613fc();
  uVar1 = uStack_58;
  FUN_1020bf3fc(uStack_58,uStack_60,uStack_68,uStack_70,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_58;
  func_0x000107c61174(uStack_58);
  func_0x000107c6157c(uVar1);
  FUN_1020bf410();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1020bc2e0; end: 1020bc323;  */

void FUN_1020bc2e0(void)

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



/* Entry: 1020bc324; end: 1020bc32b;  */

undefined8 FUN_1020bc324(void)

{
  return 0x1b;
}



/* Entry: 1020bc32c; end: 1020bc3af;  */

void FUN_1020bc32c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1020bc420,param_2,FUN_1020bc424,param_2,0x1020bc44c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1020bc3b0; end: 1020bc3df;  */

undefined ** FUN_1020bc3b0(void)

{
  return &PTR_DAT_113066610;
}



/* Entry: 1020bc3e0; end: 1020bc3ff;  */

void FUN_1020bc3e0(void)

{
  func_0x000107c61168(&PTR_PTR_112e56860);
  return;
}



/* Entry: 1020bc400; end: 1020bc423;  */

undefined1  [16] FUN_1020bc400(void)

{
  return ZEXT816(0x1104c7998);
}



/* Entry: 1020bc424; end: 1020bc477;  */

void FUN_1020bc424(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1020bc478; end: 1020bc4b3;  */

void FUN_1020bc478(undefined8 *param_1,undefined8 param_2)

{
  FUN_1020bc4b4();
  func_0x0001000a7f38("FriendsFeedGamesPresenceButtonScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1020bc4b4; end: 1020bc69f;  */

void FUN_1020bc4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cc90;
  ppuVar4 = &PTR_DAT_113066610;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104c79e8;
  func_0x000107c613fc(&UNK_1104c79e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e568e0;
  func_0x0001000285a8(0x112e568e0,&UNK_10da59b10);
  func_0x0001000a6ee8(&UNK_1104c7bf8,
                      "FriendsFeedGamesPresenceButtonScopeGraphBridgeScopeInitializationPluginKey",
                      0x4a,2,FUN_1020bc6a0,puVar2,uVar3,&UNK_1104c7bf8,&PTR_DAT_112e56970);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104c7a10;
  func_0x000107c613fc(&UNK_1104c7a10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104c77b8,
                      "FriendsFeedGamesPresenceButtonScopedServicesScopeInitializationPluginKey",
                      0x48,2,FUN_1020bc788,puVar2,uVar3,&UNK_1104c77b8,&PTR_DAT_112e56778);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104c7998,
                      "FriendsFeedGamesPresenceEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_1020bc804,param_4,uVar3,&UNK_1104c7998,&PTR_DAT_112e567f8);
  func_0x000107c61574(param_4);
  uVar3 = 0x112e568e8;
  func_0x0001000285a8(0x112e568e8,&UNK_10da59b18);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1020bc6a0; end: 1020bc6df;  */

void FUN_1020bc6a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1020bcddc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020bc6e0; end: 1020bc787;  */

void FUN_1020bc6e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104c7a38;
  func_0x000107c613fc(&UNK_1104c7a38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1020bc840;
  func_0x0001000823a8(FUN_1020bc840,puVar1);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1020bc788; end: 1020bc78f;  */

void FUN_1020bc788(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104c7a38;
  func_0x000107c613fc(&UNK_1104c7a38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1020bc840;
  func_0x0001000823a8(FUN_1020bc840,puVar3);
  func_0x000100082720("FriendsFeedGamesPresenceButtonScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1020bc790; end: 1020bc803;  */

void FUN_1020bc790(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1020bc80c;
  func_0x0001000823a8(0x1020bc80c,param_3);
  func_0x000100082720("FriendsFeedGamesPresenceEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020bc804; end: 1020bc813;  */

void FUN_1020bc804(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1020bc80c;
  func_0x0001000823a8();
  func_0x000100082720("FriendsFeedGamesPresenceEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020bc814; end: 1020bc83f;  */

void FUN_1020bc814(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020bc840; end: 1020bc847;  */

void FUN_1020bc840(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104c7840;
  func_0x000107c613fc(&UNK_1104c7840,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020bbaa4;
  func_0x00010058fa64(FUN_1020bbaa4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020bc848; end: 1020bc8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020bc848(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1020bcc08();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e568f0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e568f8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bc8d0);
  (*pcVar1)();
}



/* Entry: 1020bc8d0; end: 1020bc92f; -[_TtC46FriendsFeedGamesPresenceButtonScopeGraphBridge61FriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint init] */

void FUN_1020bc8d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedGamesPresenceButtonScopeGraphBridge.FriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bc8fc);
  (*pcVar1)();
}



/* Entry: 1020bc930; end: 1020bc967; -[_TtC46FriendsFeedGamesPresenceButtonScopeGraphBridge61FriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020bc94c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bc950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bc930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e568f0));
  return;
}


