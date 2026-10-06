/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020ec750; end: 1020ec75b;  */

void FUN_1020ec750(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e6af7dc);
  return;
}



/* Entry: 1020ec75c; end: 1020ec853;  */

void FUN_1020ec75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_1020ec1e0(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1020ec854; end: 1020ec9f7;  */

void FUN_1020ec854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  FUN_1020ec2f0();
  uVar1 = *(undefined8 *)(uVar11 + 0x50);
  uVar7 = *(undefined8 *)(uVar11 + 0x58);
  uVar2 = *(undefined8 *)(uVar11 + 0x60);
  lVar3 = *(long *)(uVar11 + 0x68);
  uVar4 = 0;
  uStack_c0 = uVar1;
  uStack_b8 = uVar7;
  uStack_b0 = uVar2;
  lStack_a8 = lVar3;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  func_0x0001020ee960(0,&uStack_c0);
  puVar5 = &UNK_10da5c5a8;
  func_0x000107c61520(&UNK_10da5c5a8,uVar4);
  uVar6 = 0xff;
  func_0x000107c5fc80(0xff,uVar7);
  uVar7 = 0xff;
  func_0x0001020fc344(0xff,uVar1,uVar6,uVar2);
  uStack_c8 = *(undefined8 *)(lVar3 + 8);
  puVar8 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar6,&uStack_c8);
  puVar9 = &UNK_10da5cd74;
  puStack_d0 = puVar8;
  func_0x000107c61520(&UNK_10da5cd74,uVar7,&puStack_d0);
  puVar10 = &uStack_a0;
  FUN_102107370(puVar10,uVar4,uVar4,puVar5,puVar5,puVar9);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0xf0))(puVar10,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(puVar10);
  if (param_5 != (code *)0x0) {
    (*param_5)();
  }
  return;
}



/* Entry: 1020ec9f8; end: 1020eca17;  */

void FUN_1020ec9f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiffableDataSourceKit.DiffableDataSource",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020ecb2c);
  (*pcVar1)();
}



/* Entry: 1020eca18; end: 1020eca6b;  */

void FUN_1020eca18(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uStack_38 = *(undefined8 *)(uVar1 + 0x58);
  uStack_40 = *(undefined8 *)(uVar1 + 0x50);
  uStack_28 = *(undefined8 *)(uVar1 + 0x68);
  uStack_30 = *(undefined8 *)(uVar1 + 0x60);
  FUN_1020ec750(0,&uStack_40);
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020eca6c; end: 1020ecadb;  */

/* WARNING: Possible PIC construction at 0x0001020ecabc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ecac0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020eca6c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e586c0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  func_0x000107c6142c(puVar1[3]);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e586b0));
  return;
}



/* Entry: 1020ecadc; end: 1020ecaff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020ecadc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e586c0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  return uVar2;
}



/* Entry: 1020ecb00; end: 1020ecb2b;  */

void FUN_1020ecb00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiffableDataSourceKit.DiffableDataSource",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020ecb2c);
  (*pcVar1)();
}



/* Entry: 1020ecb2c; end: 1020ecb3f;  */

undefined8 FUN_1020ecb2c(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x68);
}



/* Entry: 1020ecb40; end: 1020ecb8f;  */

void FUN_1020ecb40(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = &UNK_10da5c378;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 1020ecb90; end: 1020ecd0b;  */

undefined8
FUN_1020ecb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = 0xff;
  func_0x000107c5fc80();
  uVar2 = 0;
  func_0x000107c61510(0,param_1,uVar1,0,0);
  uVar3 = 0;
  func_0x000107c5fc6c(0,uVar2);
  FUN_1020f907c();
  uVar2 = 0;
  func_0x000107c5fc6c(0,param_1);
  uVar4 = 0;
  func_0x000107c5fc80(0,param_1);
  puVar5 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar4);
  func_0x000107c5feb0(uVar4,puVar5);
  if ((uVar4 & 1) == 0) {
    FUN_1020ee2b0(uVar2,param_1,param_3);
  }
  else {
    func_0x000107c6142c(uVar2);
    func_0x000107c5f9d8(param_1,param_3);
  }
  uVar2 = 0;
  func_0x000107c5fc6c(0,param_2);
  puVar5 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  func_0x000107c5feb0(uVar1,puVar5);
  if ((uVar1 & 1) == 0) {
    FUN_1020ee2b0(uVar2,param_2,param_4);
  }
  else {
    func_0x000107c6142c(uVar2);
    func_0x000107c5f9d8(param_2,param_4);
  }
  return uVar3;
}



/* Entry: 1020ecd0c; end: 1020ecd7f;  */

undefined8
FUN_1020ecd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,param_7);
  FUN_1020f912c(&uStack_48,param_1,param_2,param_3,param_6,uVar1,param_8);
  return uStack_48;
}



/* Entry: 1020ecd80; end: 1020ecdf7;  */

undefined1  [16] FUN_1020ecd80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_x5;
  long in_x7;
  undefined1 auVar3 [16];
  unkuint9 Stack_40;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,in_x5);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  func_0x000107c5fec4(&Stack_40,param_1,uVar1,puVar2,*(undefined8 *)(in_x7 + 8));
  auVar3._9_7_ = 0;
  auVar3._0_9_ = Stack_40;
  return auVar3;
}



/* Entry: 1020ecdf8; end: 1020ed14f;  */

void FUN_1020ecdf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  uVar3 = 0xff;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  lStack_80 = param_1;
  func_0x000107c5fc80(0xff,param_8);
  lVar4 = 0;
  uStack_b0 = uVar3;
  func_0x0001020fc344(0,param_7,uVar3,param_9);
  lStack_c0 = *(long *)(lVar4 + -8);
  lStack_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = 0;
  puStack_c8 = auStack_d0 + -extraout_x8;
  func_0x000107c60188(0,param_7);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_7 + -8) + 0x40));
  lVar10 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = param_10;
  *(long *)(lVar10 + -0x10) = param_10;
  uVar3 = uStack_98;
  uStack_a0 = param_2;
  FUN_1020ed1b8(lVar11,param_2,param_3,uStack_98,uStack_90,uStack_88,param_7,param_8,param_9);
  lVar4 = lVar11;
  (**(code **)(extraout_x12 + 0x30))(lVar11,1,param_7);
  if ((int)lVar4 == 1) {
    pcVar8 = *(code **)(lVar9 + 8);
    lVar10 = lVar11;
  }
  else {
    (**(code **)(extraout_x12 + 0x20))(lVar10,lVar11,param_7);
    lVar4 = lVar10;
    uVar6 = param_3;
    FUN_1020ecd80(lVar10);
    lVar5 = param_7;
    if (((uint)uVar6 & 0xff) == 1) {
      pcVar8 = *(code **)(extraout_x12 + 8);
    }
    else {
      uVar6 = 0;
      func_0x000107c5fc80(0,param_8);
      puVar2 = puStack_c8;
      FUN_1020f9244(puStack_c8,lVar4,param_3,uVar3,param_7,uVar6,param_9);
      lVar9 = lStack_b8;
      uVar6 = *(undefined8 *)(puVar2 + *(int *)(lStack_b8 + 0x2c));
      pcVar8 = *(code **)(lStack_c0 + 8);
      func_0x000107c61434(uVar6);
      (*pcVar8)(puVar2,lVar9);
      uVar3 = 0;
      uStack_78 = uVar6;
      func_0x000107c6143c(0,uStack_b0);
      puVar7 = PTR___sSayxGSlsMc_11034dd20;
      func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar3);
      func_0x000107c5fec4(&uStack_70,uStack_a0,uVar3,puVar7,*(undefined8 *)(lStack_a8 + 8));
      func_0x000107c6142c(uVar6);
      if (cStack_68 != '\x01') {
        uVar3 = 0xff;
        func_0x000107c5eff8(0xff);
        lVar9 = 0;
        func_0x000107c61510(0,param_7,uVar3,"sectionIdentifier indexPath ",0);
        lVar5 = lStack_80;
        iVar1 = *(int *)(lVar9 + 0x30);
        (**(code **)(extraout_x12 + 0x10))(lStack_80,lVar10,param_7);
        func_0x000107c5efe8(lVar5 + iVar1,uStack_70,lVar4);
        (**(code **)(extraout_x12 + 8))(lVar10,param_7);
        pcVar8 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
        uVar3 = 0;
        goto LAB_1020ed0a4;
      }
      pcVar8 = *(code **)(extraout_x12 + 8);
    }
  }
  (*pcVar8)(lVar10,lVar5);
  uVar3 = 0xff;
  func_0x000107c5eff8(0xff);
  lVar9 = 0;
  func_0x000107c61510(0,param_7,uVar3,"sectionIdentifier indexPath ",0);
  pcVar8 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  uVar3 = 1;
  lVar5 = lStack_80;
LAB_1020ed0a4:
  (*pcVar8)(lVar5,uVar3,1,lVar9);
  return;
}



/* Entry: 1020ed150; end: 1020ed1b7;  */

void FUN_1020ed150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5fc80(0,param_8);
  lVar3 = 0;
  uStack_78 = param_4;
  lStack_70 = param_1;
  uStack_68 = param_3;
  func_0x000107c60188(0,lVar2);
  lStack_a0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar11 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12;
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_90 = *(long *)(param_7 + -8);
  lStack_88 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar6 = (lVar7 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_01;
  uStack_80 = param_2;
  func_0x000107c5fc98(lVar6,param_2,uStack_68,param_7);
  uVar1 = uStack_78;
  uStack_78 = param_9;
  func_0x000107c5fa40(lVar8,lVar6,uVar1,param_7,lVar2,param_9);
  lVar5 = lStack_a0;
  (**(code **)(lStack_a0 + 0x10))(lVar11,lVar8,lVar3);
  lVar4 = lVar11;
  (**(code **)(lVar10 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar4 != 1) {
    (**(code **)(lVar5 + 8))(lVar8,lVar3);
    pcVar9 = *(code **)(lVar10 + 0x20);
    (*pcVar9)(lVar7,lVar11,lVar2);
    lVar3 = lStack_88;
    (*pcVar9)(lStack_88,lVar7,lVar2);
    lVar5 = lStack_98;
    func_0x000107c5fc98(lStack_98,uStack_80,uStack_68,param_7);
    lVar4 = lStack_90;
    (**(code **)(lStack_90 + 8))(lVar6,param_7);
    lVar6 = lStack_70;
    (**(code **)(lVar4 + 0x20))(lStack_70,lVar5,param_7);
    lVar5 = 0;
    func_0x0001020fc344(0,param_7,lVar2,uStack_78);
    (*pcVar9)(lVar6 + *(int *)(lVar5 + 0x2c),lVar3,lVar2);
    return;
  }
  (**(code **)(lVar5 + 8))(lVar11,lVar3);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1020f94b8);
  (*pcVar9)();
}



/* Entry: 1020ed1b8; end: 1020ed257;  */

void FUN_1020ed1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = param_10;
  uVar1 = 0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c5fc80(0,param_7);
  func_0x000107c61434(param_3);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  func_0x000107c5fc00(param_1,FUN_1020ee4cc,auStack_90,uVar1,puVar2);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 1020ed258; end: 1020ed44b;  */

undefined8
FUN_1020ed258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = 0xff;
  func_0x000107c5fc80(0xff,param_3);
  uVar2 = 0;
  func_0x000107c61510(0,param_2,uVar1,0,0);
  uVar3 = 0;
  func_0x000107c5fc6c(0,uVar2);
  uVar8 = param_2;
  FUN_1020f907c();
  uVar4 = 0;
  func_0x000107c5fc6c(0,param_2);
  uVar5 = 0;
  func_0x000107c5fc80(0,param_2);
  puVar6 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar5);
  func_0x000107c5feb0(uVar5,puVar6);
  if ((uVar5 & 1) == 0) {
    FUN_1020ee2b0(uVar4,param_2,param_4);
  }
  else {
    func_0x000107c6142c(uVar4);
    func_0x000107c5f9d8(param_2,param_4);
  }
  uVar4 = 0;
  func_0x000107c5fc6c(0,param_3);
  puVar6 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  uVar5 = uVar1;
  func_0x000107c5feb0(uVar1,puVar6);
  if ((uVar5 & 1) == 0) {
    FUN_1020ee2b0(uVar4,param_3,param_5);
  }
  else {
    func_0x000107c6142c(uVar4);
    func_0x000107c5f9d8(param_3,param_5);
  }
  uVar7 = 0;
  func_0x000107c61510(0,param_2,uVar1,"key value ",0);
  uVar4 = param_1;
  func_0x000107c603cc(param_1,uVar2,uVar7);
  func_0x000107c6142c(param_1);
  uVar2 = uVar4;
  FUN_1020fc1fc(uVar4,param_2,uVar1,param_4);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  return uVar2;
}



/* Entry: 1020ed44c; end: 1020ed49b;  */

void FUN_1020ed44c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSa5countSivg_11034dc80)(param_1,in_x4,in_x4,uVar1,in_x6);
  return;
}



/* Entry: 1020ed49c; end: 1020ed573;  */

uint FUN_1020ed49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lStack_58;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,param_8);
  FUN_1020f912c(&lStack_58,param_1,param_2,param_3,param_7,uVar1,param_9);
  if (lStack_58 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
    func_0x000107c5fc1c(param_6,uVar1,puVar2,*(undefined8 *)(param_10 + 8));
    uVar3 = (uint)param_6;
    func_0x000107c6142c(lStack_58);
  }
  return uVar3 & 1;
}



/* Entry: 1020ed574; end: 1020ed65f;  */

uint FUN_1020ed574(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_68;
  
  uVar2 = 0;
  func_0x000107c5fc80(0,param_10);
  uStack_68 = *(undefined8 *)(param_12 + 8);
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar2,&uStack_68);
  FUN_1020fac14(param_1,param_2,param_5,param_6,param_9,uVar2,param_11,puVar3);
  if (((param_1 & 1) == 0) ||
     (func_0x000107c5fe18(param_3,param_7,param_9,param_11), (param_3 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fe18(param_4,param_8,param_10,param_12);
    uVar1 = (uint)param_4;
  }
  return uVar1 & 1;
}



/* Entry: 1020ed660; end: 1020ed6ab;  */

uint FUN_1020ed660(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1020ed574(uVar1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],param_2[3],
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  return (uint)uVar1 & 1;
}



/* Entry: 1020ed6ac; end: 1020ed6df;  */

void FUN_1020ed6ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  FUN_1020ed258();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



/* Entry: 1020ed6e0; end: 1020ed72f;  */

undefined8
FUN_1020ed6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,param_6);
  func_0x000107c61438(param_1,2,param_5,uVar1,param_7);
  func_0x000107c61434(param_2);
  return param_1;
}



/* Entry: 1020ed730; end: 1020ed7bf;  */

void FUN_1020ed730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = uVar1;
  uVar6 = uVar3;
  FUN_1020ed6e0();
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 1020ed7c0; end: 1020ed7f3;  */

void FUN_1020ed7c0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5c458;
  func_0x000107c61520(&UNK_10da5c458,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 1020ed7f4; end: 1020ed7fb;  */

undefined8 FUN_1020ed7f4(void)

{
  return 2;
}



/* Entry: 1020ed7fc; end: 1020ed85f;  */

undefined8 * FUN_1020ed7fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x000107c61520(&UNK_10da5c458,param_1);
  puVar1 = unaff_x20;
  FUN_1020fc1f8();
  func_0x000107c6142c(*unaff_x20);
  func_0x000107c6142c(unaff_x20[1]);
  func_0x000107c6142c(unaff_x20[2]);
  func_0x000107c6142c(unaff_x20[3]);
  return puVar1;
}



/* Entry: 1020ed860; end: 1020ed863;  */

void FUN_1020ed860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 1020ed864; end: 1020ed883;  */

void FUN_1020ed864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fbfc(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 1020ed884; end: 1020ed923;  */

void FUN_1020ed884(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSa8endIndexSivg_11034dc98)(param_1,in_x4,in_x4,uVar1,in_x6);
  return;
}



/* Entry: 1020ed924; end: 1020ed92b;  */

void FUN_1020ed924(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1020ed92c; end: 1020ed95f;  */

void FUN_1020ed92c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1020ed884(uVar1,unaff_x20[1],param_4,param_5,*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  *param_1 = uVar1;
  return;
}



/* Entry: 1020ed960; end: 1020ed9eb;  */

undefined8 FUN_1020ed960(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x15e7);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_1020ed9ec();
  *(long *)(lVar1 + 0x20) = lVar2;
  return 0x1020ee96c;
}



/* Entry: 1020ed9ec; end: 1020edabf;  */

undefined1  [16]
FUN_1020ed9ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0xff;
  func_0x000107c5fc80(0xff,param_8);
  lVar2 = 0;
  func_0x0001020fc344(0,param_7,uVar1,param_9);
  lVar3 = *(long *)(lVar2 + -8);
  *param_1 = lVar2;
  param_1[1] = lVar3;
  lVar2 = *(long *)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(lVar2,0x9505);
  }
  param_1[2] = lVar2;
  uVar1 = 0;
  func_0x000107c5fc80(0,param_8);
  FUN_1020f9244(lVar2,param_2,param_3,param_4,param_7,uVar1,param_9);
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = FUN_1020edac0;
  return auVar4;
}



/* Entry: 1020edac0; end: 1020edaef;  */

void FUN_1020edac0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 1020edaf0; end: 1020edb37;  */

void FUN_1020edaf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar10;
  undefined8 unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = &UNK_10da5c538;
  func_0x000107c61520();
  lStack_98 = *(long *)(param_3 + -8);
  uStack_70 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar2 = PTR___sSlTL_11034dfe8;
  lVar16 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(puVar4 + 8);
  lVar5 = 0xff;
  lStack_80 = lVar16;
  func_0x000107c614b8(0xff,uVar10,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar6 = 0;
  func_0x000107c61510(0,lVar5,lVar5,"lower upper ",0);
  lStack_a0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar13 = (lVar16 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar13 - extraout_x12_00;
  uVar7 = uVar10;
  func_0x000107c614b4(uVar10,param_3,lVar5,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar8 = 0;
  func_0x000107c5ff1c(0,lVar5,uVar7);
  lStack_b8 = *(long *)(lVar8 + -8);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = uVar15 - extraout_x8_02;
  func_0x000107c5fe7c(uVar15,param_3,uVar10);
  lStack_90 = param_3;
  uStack_88 = uVar10;
  uStack_78 = unaff_x20;
  func_0x000107c5fe94(lVar13,param_3,uVar10);
  uVar9 = uVar15;
  func_0x000107c5fa90(uVar15,lVar13,lVar5,uVar7);
  lVar3 = lStack_b0;
  lVar8 = lStack_c0;
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(lStack_c0 + 0x20);
    (*pcVar11)(lStack_b0,uVar15,lVar5);
    (*pcVar11)(lVar3 + *(int *)(lVar6 + 0x30),lVar13,lVar5);
    lVar13 = lStack_a0;
    (**(code **)(lStack_a0 + 0x10))(lVar16,lVar3,lVar6);
    iVar1 = *(int *)(lVar6 + 0x30);
    (*pcVar11)(lVar12,lVar16,lVar5);
    pcVar14 = *(code **)(lVar8 + 8);
    (*pcVar14)(lVar16 + iVar1,lVar5);
    (**(code **)(lVar13 + 0x20))(lVar16,lVar3,lVar6);
    lVar3 = lStack_a8;
    (*pcVar11)(lVar12 + *(int *)(lStack_a8 + 0x24),lVar16 + *(int *)(lVar6 + 0x30),lVar5);
    (*pcVar14)(lVar16,lVar5);
    uVar10 = uStack_70;
    uVar7 = uStack_88;
    lVar5 = lStack_90;
    func_0x000107c5fe80(uStack_70,lVar12,lStack_90,uStack_88);
    lVar8 = lStack_b8;
    (**(code **)(lStack_b8 + 8))(lVar12,lVar3);
    lVar6 = lStack_80;
    (**(code **)(lStack_98 + 0x10))(lStack_80,uStack_78,lVar5);
    (**(code **)(lVar8 + 0x10))(lVar12,uVar10,lVar3);
    func_0x000107c60674(uStack_68,lVar6,lVar12,lVar5,uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1020f9ba0);
  (*pcVar11)();
}



/* Entry: 1020edb38; end: 1020edb63;  */

void FUN_1020edb38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb83b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsSIyxG7IndicesRtzrlE7indicesAAvg_11034e048)();
  return;
}



/* Entry: 1020edb64; end: 1020edc23;  */

void FUN_1020edb64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5c5a8;
  func_0x000107c61520(&UNK_10da5c5a8,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSKsE5index_8offsetBy5IndexQzAD_SitF_11034d828)
            (param_1,param_2,param_3,param_4,puVar1);
  return;
}



/* Entry: 1020edc24; end: 1020edc6f;  */

void FUN_1020edc24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5c5a8;
  func_0x000107c61520(&UNK_10da5c5a8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSKsE8distance4from2toSi5IndexQz_AEtF_11034d830)(param_1,param_2,param_3,puVar1);
  return;
}



/* Entry: 1020edc70; end: 1020edcab;  */

void FUN_1020edc70(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = PTR___sSnMa_11034e100;
  puVar2 = PTR___sSlTL_11034dfe8;
  puVar1 = PTR___sSL1loiySbx_xtFZTj_11034d848;
  uVar5 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar5,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar6 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar5,param_4);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020fc1f4);
    (*pcVar4)();
  }
  lVar7 = 0;
  (*(code *)puVar3)(0,uVar5,param_4);
  (*(code *)puVar1)(param_1,param_2 + (long)*(int *)(lVar7 + 0x24),uVar5,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1020fc1f8);
  (*pcVar4)();
}



/* Entry: 1020edcac; end: 1020edd0b;  */

void FUN_1020edcac(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1020ee504(param_1,*param_2);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = 0xff;
  func_0x000107c5fc80(0xff,*(undefined8 *)(param_3 + 0x18));
  lVar3 = 0;
  func_0x0001020fc344(0,uVar1,uVar2,*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001020edd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  return;
}



/* Entry: 1020edd0c; end: 1020edecb;  */

undefined1  [16] FUN_1020edd0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_11034f288;
  puVar2 = (undefined8 *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x38,0xc628);
  }
  *param_1 = puVar2;
  *puVar2 = unaff_x20;
  puVar2[1] = param_3;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = 0xff;
  func_0x000107c5fc80(0xff,*(undefined8 *)(param_3 + 0x18));
  lVar4 = 0;
  func_0x0001020fc344(0,uVar5,uVar3,*(undefined8 *)(param_3 + 0x20));
  puVar2[2] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  puVar2[3] = lVar4;
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = uVar5;
    func_0x000107c610a0();
    puVar2[4] = uVar3;
    func_0x000107c610a0();
  }
  else {
    uVar3 = uVar5;
    func_0x000107c61458(uVar5,0xc628);
    puVar2[4] = uVar3;
    func_0x000107c61458(uVar5,0xc628);
  }
  uVar3 = *param_2;
  puVar2[5] = uVar5;
  puVar2[6] = uVar3;
  FUN_1020ed150(uVar5,uVar3,*unaff_x20,unaff_x20[1]);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = 0x1020ede18;
  return auVar6;
}



/* Entry: 1020edecc; end: 1020edf1f;  */

void FUN_1020edecc(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  FUN_1020fc404(param_1,&uStack_30);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1020edf20; end: 1020edf9b;  */

code * FUN_1020edf20(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x7975);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x0001020f9ba0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1020edf9c;
}



/* Entry: 1020edf9c; end: 1020edf9f;  */

void FUN_1020edf9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1020edfa0; end: 1020edfcb;  */

void FUN_1020edfa0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1020edfcc; end: 1020ee03b;  */

void FUN_1020edfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5c5a8;
  func_0x000107c61520(&UNK_10da5c5a8,param_4);
  func_0x000107c5fab0(param_1,param_2,param_3,param_4,puVar1,param_5);
  return;
}



/* Entry: 1020ee03c; end: 1020ee03f;  */

void FUN_1020ee03c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb76a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSMsE6swapAtyy5IndexQz_ACtF_11034d888)();
  return;
}



/* Entry: 1020ee040; end: 1020ee07f;  */

void FUN_1020ee040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faa4(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 1020ee080; end: 1020ee0bb;  */

void FUN_1020ee080(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020ee098);
  (*pcVar1)();
}



/* Entry: 1020ee0bc; end: 1020ee13b;  */

void FUN_1020ee0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  code *pcVar10;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = 0xff;
  func_0x000107c5fc80(0xff,*(undefined8 *)(param_4 + 0x18));
  lVar3 = 0;
  func_0x0001020fc494(0,uVar1,uVar2,*(undefined8 *)(param_4 + 0x20));
  uVar9 = *unaff_x20;
  pcVar10 = *(code **)(lVar3 + 0x10);
  uVar4 = param_1;
  uVar8 = param_2;
  pcVar7 = pcVar10;
  func_0x000107c5fc94();
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = 0;
  uStack_b0 = pcVar10;
  lStack_a8 = uVar1;
  puStack_a0 = (undefined *)param_5;
  uStack_98 = uVar2;
  lStack_90 = param_6;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  uStack_70 = uVar9;
  uStack_68 = pcVar7;
  func_0x000107c60244(0,pcVar10);
  puVar6 = PTR___ss10ArraySliceVyxGSTsMc_11034e2e8;
  func_0x000107c61520(PTR___ss10ArraySliceVyxGSTsMc_11034e2e8,uVar5);
  func_0x000107c5fc14(FUN_1020fc350,&pcStack_c0,uVar5,puVar6);
  puVar6 = &UNK_10da5c870;
  pcStack_c0 = pcVar10;
  uStack_b8 = uVar1;
  uStack_b0 = (code *)param_5;
  lStack_a8 = uVar2;
  puStack_a0 = (undefined *)param_6;
  func_0x000107c614e0(&UNK_10da5c870,&pcStack_c0);
  pcVar7 = FUN_1020fc36c;
  uStack_b0 = (code *)param_5;
  lStack_a8 = param_6;
  puStack_a0 = puVar6;
  func_0x0001000ca88c(FUN_1020fc36c,&pcStack_c0,param_5,pcVar10,PTR___ss5NeverON_11034ee88,param_6,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61574(puVar6);
  uVar8 = 0;
  pcStack_c0 = pcVar7;
  func_0x000107c5fc80(0,pcVar10);
  puVar6 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar8);
  func_0x000107c5fc60(param_1,param_2,&pcStack_c0,uVar8,uVar8,puVar6);
  uStack_b0 = pcVar10;
  lStack_a8 = uVar1;
  puStack_a0 = (undefined *)param_5;
  uStack_98 = uVar2;
  lStack_90 = param_6;
  func_0x000107c5fc14(FUN_1020fc394,&pcStack_c0,param_5,*(undefined8 *)(param_6 + 8));
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 1020ee13c; end: 1020ee16f;  */

void FUN_1020ee13c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  FUN_1020ecb90();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



/* Entry: 1020ee170; end: 1020ee1c3;  */

void FUN_1020ee170(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1020ee0bc(*param_1,param_1[1],param_2,param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001020ee1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Entry: 1020ee1c4; end: 1020ee247;  */

undefined1  [16] FUN_1020ee1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 1020ee248; end: 1020ee2af;  */

void FUN_1020ee248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5c538;
  func_0x000107c61520(&UNK_10da5c538,param_3);
  func_0x000107c5ff0c(param_1,param_2,param_3,puVar1,param_4);
  return;
}



/* Entry: 1020ee2b0; end: 1020ee4cb;  */

void FUN_1020ee2b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(param_2 + -8);
  lVar1 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar8 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = uVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5fc74();
  func_0x000107c6027c();
  lVar2 = param_1;
  func_0x000107c5fc7c(param_1,param_2);
  if (lVar2 != 0) {
    lVar2 = 0;
    lStack_80 = (uVar8 - extraout_x12) - extraout_x12_00;
    lStack_78 = param_1;
    do {
      lVar3 = lStack_80;
      func_0x000107c5fc98(lStack_80,lVar2,param_1,param_2);
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1020ee4cc);
        (*pcVar9)();
      }
      lStack_70 = lVar2 + 1;
      (**(code **)(lVar7 + 0x20))(lStack_68,lVar3,param_2);
      uVar4 = *(ulong *)(lVar1 + 0x28);
      func_0x000107c5fa4c(uVar4,param_2,param_3);
      uVar6 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
      for (uVar4 = uVar4 & (uVar6 ^ 0xffffffffffffffff);
          (*(ulong *)(lVar1 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0;
          uVar4 = uVar4 + 1 & ~uVar6) {
        lVar2 = lVar1;
        func_0x000107c60280(lVar1,param_2,param_3);
        (**(code **)(lVar7 + 0x10))(uVar8,lVar2 + *(long *)(lVar7 + 0x48) * uVar4,param_2);
        uVar5 = uVar8;
        func_0x000107c5fab8(uVar8,lStack_68,param_2,*(undefined8 *)(param_3 + 8));
        pcVar9 = *(code **)(lVar7 + 8);
        (*pcVar9)(uVar8,param_2);
        if ((uVar5 & 1) != 0) {
          (*pcVar9)(lStack_68,param_2);
          goto LAB_1020ee390;
        }
      }
      func_0x000107c60278(lStack_68,uVar4,lVar1,param_2,param_3);
LAB_1020ee390:
      param_1 = lStack_78;
      lVar3 = lStack_78;
      func_0x000107c5fc7c(lStack_78,param_2);
      lVar2 = lStack_70;
    } while (lStack_70 != lVar3);
  }
  func_0x000107c6142c(param_1);
  func_0x000107c5fe2c(lVar1,param_2,param_3);
  return;
}



/* Entry: 1020ee4cc; end: 1020ee503;  */

uint FUN_1020ee4cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1020ed49c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return (uint)param_1 & 1;
}



/* Entry: 1020ee504; end: 1020ee5cb;  */

void FUN_1020ee504(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = 0xff;
  func_0x000107c5fc80(0xff,*(undefined8 *)(param_3 + 0x18));
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001020fc344(0,uVar1,uVar2,uVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x12,param_1);
  uVar3 = 0;
  func_0x0001020fc494(0,uVar1,uVar2,uVar4);
  func_0x0001020f94b8(&stack0xffffffffffffffb0 + -extraout_x12,param_2,uVar3);
  return;
}



/* Entry: 1020ee5cc; end: 1020ee617;  */

void FUN_1020ee5cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10da5c890,param_1);
  return;
}



/* Entry: 1020ee618; end: 1020ee737;  */

void FUN_1020ee618(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10da5c538;
  func_0x000107c61520();
  puStack_28 = puVar1;
  func_0x000107c61520(PTR___ss5SliceVyxGSMsSMRzrlMc_11034eed0,param_1,&puStack_28);
  return;
}



/* Entry: 1020ee738; end: 1020ee73f;  */

void FUN_1020ee738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1020ee740; end: 1020ee7a3;  */

long FUN_1020ee740(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020ee7a4; end: 1020ee883;  */

undefined8 * FUN_1020ee7a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1020ee884; end: 1020ee8d7;  */

undefined8 * FUN_1020ee884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020ee8d8; end: 1020ee983;  */

int FUN_1020ee8d8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020ee984; end: 1020eebaf;  */

void FUN_1020ee984(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020eea70);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_102100b8c();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020eea74);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020eea78);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 8 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1104cace0);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1020eea7c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1020eebb0; end: 1020efb2b;  */

void FUN_1020eebb0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = *unaff_x20;
  lVar10 = *(long *)(lVar5 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  lVar12 = 0;
  lVar6 = unaff_x20[1];
  do {
    if (*(long *)(lVar6 + 0x10) != 0) {
      lVar3 = *(long *)(lVar5 + 0x20 + lVar12 * 8);
      func_0x000107c61174();
      func_0x000107c61434(lVar6);
      lVar8 = lVar3;
      FUN_1020f42f0();
      lVar9 = lVar6;
      if ((param_2 & 1) != 0) {
        lVar9 = *(long *)(*(long *)(lVar6 + 0x38) + lVar8 * 8);
        func_0x000107c61434(lVar9);
        func_0x000107c6142c(lVar6);
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar8 = 0x20;
        while (lVar13 != 0) {
          iVar2 = (int)*(undefined8 *)(lVar9 + lVar8);
          func_0x000107c49cec();
          lVar8 = lVar8 + 8;
          lVar13 = lVar13 + -1;
          if (iVar2 != 0) {
            func_0x000107c6142c(lVar9);
            if (*(long *)(lVar6 + 0x10) == 0) {
              func_0x000107c61170(lVar3);
              return;
            }
            func_0x000107c61434(lVar6);
            lVar5 = lVar3;
            FUN_1020f42f0();
            if ((param_2 & 1) == 0) {
              func_0x000107c61170(lVar3);
              goto LAB_1020eed98;
            }
            lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + lVar5 * 8);
            func_0x000107c61434(lVar5);
            func_0x000107c6142c(lVar6);
            uVar7 = *(ulong *)(lVar5 + 0x10);
            func_0x000107c61434(lVar5);
            if (uVar7 == 0) goto LAB_1020eecfc;
            uVar11 = 0;
            goto LAB_1020eecd0;
          }
        }
      }
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(lVar9);
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar10) {
      return;
    }
  } while( true );
LAB_1020eecd0:
  if (*(ulong *)(lVar5 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020eedc0);
    (*pcVar1)();
  }
  uVar4 = *(ulong *)(lVar5 + uVar11 * 8 + 0x20);
  func_0x000107c49cec();
  if ((uVar4 & 1) != 0) {
    func_0x000107c6142c(lVar5);
    func_0x000107c61434(param_1);
    func_0x0001020f53dc(uVar11,uVar11,param_1);
    func_0x000107c6142c(param_1);
    goto LAB_1020eed64;
  }
  uVar11 = uVar11 + 1;
  if (uVar7 == uVar11) {
LAB_1020eecfc:
    func_0x000107c6142c(lVar5);
    func_0x000107c61434(param_1);
    FUN_1020ee984();
LAB_1020eed64:
    lVar6 = lVar5;
    func_0x000107c61434(lVar5);
    FUN_1020f3194();
    func_0x000107c61170(lVar3);
    func_0x000107c61430(lVar5,2);
LAB_1020eed98:
    func_0x000107c6142c(lVar6);
    return;
  }
  goto LAB_1020eecd0;
}



/* Entry: 1020efb2c; end: 1020efbaf;  */

undefined8 FUN_1020efb2c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_1020f43d8();
  }
  if (param_1 < *(ulong *)(uVar5 + 0x10)) {
    lVar7 = *(ulong *)(uVar5 + 0x10) - 1;
    lVar1 = uVar5 + param_1 * 8;
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    uVar6 = *puVar4;
    func_0x000107c610b8(puVar4,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar5 + 0x10) = lVar7;
    *unaff_x20 = uVar5;
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020efbb0);
  (*pcVar2)();
}



/* Entry: 1020efbb0; end: 1020f03b3;  */

void FUN_1020efbb0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar5 = *unaff_x20;
  lVar12 = *(long *)(lVar5 + 0x10);
  if (lVar12 != 0) {
    lVar14 = 0;
    lVar7 = unaff_x20[1];
    do {
      if (*(long *)(lVar7 + 0x10) != 0) {
        lVar3 = *(long *)(lVar5 + 0x20 + lVar14 * 8);
        func_0x000107c61174();
        func_0x000107c61434(lVar7);
        lVar6 = lVar3;
        FUN_1020f42f0();
        lVar9 = lVar7;
        if ((param_2 & 1) != 0) {
          lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + lVar6 * 8);
          func_0x000107c61434(lVar9);
          func_0x000107c6142c(lVar7);
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar6 = 0x20;
          while (lVar15 != 0) {
            iVar2 = (int)*(undefined8 *)(lVar9 + lVar6);
            func_0x000107c49cec();
            lVar6 = lVar6 + 8;
            lVar15 = lVar15 + -1;
            if (iVar2 != 0) {
              func_0x000107c6142c(lVar9);
              if (*(long *)(lVar7 + 0x10) == 0) {
                puVar10 = (undefined *)0x0;
                puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                func_0x000107c61434(lVar7);
                lVar5 = lVar3;
                FUN_1020f42f0();
                if ((param_2 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
                }
                else {
                  puVar10 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar5 * 8);
                  func_0x000107c61434(puVar10);
                  puVar11 = puVar10;
                }
                func_0x000107c6142c(lVar7);
              }
              uVar8 = *(ulong *)(puVar11 + 0x10);
              func_0x000107c61434(puVar10);
              if (uVar8 == 0) goto LAB_1020efd24;
              uVar13 = 0;
              goto LAB_1020efcf8;
            }
          }
        }
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(lVar9);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar12);
  }
  goto LAB_1020efd80;
LAB_1020efe9c:
  if (*(ulong *)(puVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020effa4);
    (*pcVar1)();
  }
  uVar4 = *(ulong *)(puVar11 + uVar13 * 8 + 0x20);
  func_0x000107c49cec();
  if ((uVar4 & 1) != 0) {
    func_0x000107c6142c(puVar11);
    uVar8 = *(ulong *)(puVar11 + 0x10);
    if (uVar8 <= uVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020effa8);
      (*pcVar1)();
    }
    func_0x000107c61174(param_1);
    puVar10 = puVar11;
    func_0x000107c61558();
    if (((int)puVar10 == 0) || (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar8)) {
      FUN_102100b8c();
      puVar11 = puVar10;
    }
    func_0x0001020f54ac(uVar13 + 1,uVar13 + 1,1,param_1);
    func_0x000107c61170(param_1);
    goto LAB_1020eff48;
  }
  uVar13 = uVar13 + 1;
  if (uVar8 == uVar13) {
LAB_1020efec8:
    func_0x000107c6142c(puVar11);
LAB_1020eff48:
    puVar10 = puVar11;
    func_0x000107c61434(puVar11);
    FUN_1020f3194();
    func_0x000107c61170(lVar3);
    func_0x000107c61430(puVar11,2);
    func_0x000107c6142c(puVar10);
    return;
  }
  goto LAB_1020efe9c;
  while (uVar13 = uVar13 + 1, uVar8 != uVar13) {
LAB_1020efcf8:
    if (*(ulong *)(puVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020effa0);
      (*pcVar1)();
    }
    uVar4 = *(ulong *)(puVar11 + uVar13 * 8 + 0x20);
    func_0x000107c49cec();
    if ((uVar4 & 1) != 0) {
      func_0x000107c6142c(puVar11);
      FUN_1020efb2c(uVar13);
      func_0x000107c61170();
      goto LAB_1020efd4c;
    }
  }
LAB_1020efd24:
  func_0x000107c6142c(puVar11);
LAB_1020efd4c:
  puVar10 = puVar11;
  func_0x000107c61434(puVar11);
  FUN_1020f3194();
  func_0x000107c61170(lVar3);
  param_2 = 0;
  func_0x000107c61430(puVar11);
  func_0x000107c6142c(puVar10);
LAB_1020efd80:
  lVar5 = *unaff_x20;
  lVar12 = *(long *)(lVar5 + 0x10);
  if (lVar12 != 0) {
    lVar14 = 0;
    lVar7 = unaff_x20[1];
    do {
      if (*(long *)(lVar7 + 0x10) != 0) {
        lVar3 = *(long *)(lVar5 + 0x20 + lVar14 * 8);
        func_0x000107c61174();
        func_0x000107c61434(lVar7);
        lVar6 = lVar3;
        FUN_1020f42f0();
        lVar9 = lVar7;
        if ((param_2 & 1) != 0) {
          lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + lVar6 * 8);
          func_0x000107c61434(lVar9);
          func_0x000107c6142c(lVar7);
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar6 = 0x20;
          while (lVar15 != 0) {
            iVar2 = (int)*(undefined8 *)(lVar9 + lVar6);
            func_0x000107c49cec();
            lVar6 = lVar6 + 8;
            lVar15 = lVar15 + -1;
            if (iVar2 != 0) {
              func_0x000107c6142c(lVar9);
              if (*(long *)(lVar7 + 0x10) == 0) {
                puVar10 = (undefined *)0x0;
                puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                func_0x000107c61434(lVar7);
                lVar5 = lVar3;
                FUN_1020f42f0();
                if ((param_2 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
                }
                else {
                  puVar10 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar5 * 8);
                  func_0x000107c61434(puVar10);
                  puVar11 = puVar10;
                }
                func_0x000107c6142c(lVar7);
              }
              uVar8 = *(ulong *)(puVar11 + 0x10);
              func_0x000107c61434(puVar10);
              if (uVar8 == 0) goto LAB_1020efec8;
              uVar13 = 0;
              goto LAB_1020efe9c;
            }
          }
        }
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(lVar9);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar12);
  }
  return;
}



/* Entry: 1020f03b4; end: 1020f06f3;  */

undefined8 FUN_1020f03b4(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar4 = unaff_x20[1];
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c61434(lVar4);
    lVar2 = param_1;
    FUN_1020f42f0();
    if ((param_2 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
      func_0x000107c61434(uVar6);
      func_0x000107c6142c(lVar4);
      func_0x000107c61174(param_1);
      lVar4 = param_1;
      FUN_1020f43ec();
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar4);
      lVar4 = *unaff_x20;
      uVar7 = *(ulong *)(lVar4 + 0x10);
      if (uVar7 != 0) {
        uVar5 = 0;
        do {
          if (*(ulong *)(lVar4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f04c0);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(lVar4 + 0x20 + uVar5 * 8);
          func_0x000107c49cec();
          if ((uVar3 & 1) != 0) {
            FUN_1020efb2c(uVar5);
            func_0x000107c61170();
            return uVar6;
          }
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
      }
    }
  }
  return uVar6;
}



/* Entry: 1020f06f4; end: 1020f0a53;  */

void FUN_1020f06f4(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    puVar13 = (ulong *)(param_1 + 0x20);
    do {
      while( true ) {
        uVar3 = *puVar13;
        uVar6 = unaff_x20[1];
        lVar9 = *(long *)(uVar6 + 0x10);
        func_0x000107c61174();
        uVar4 = param_2;
        if (lVar9 != 0) break;
LAB_1020f0838:
        func_0x000107c61174();
        uVar5 = unaff_x20[1];
        func_0x000107c61558();
        uVar8 = unaff_x20[1];
        uVar6 = uVar3;
        FUN_1020f42f0();
        uVar7 = (ulong)~(uint)uVar4 & 1;
        lVar9 = *(long *)(uVar8 + 0x10) + uVar7;
        if (SCARRY8(*(long *)(uVar8 + 0x10),uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f0a38);
          (*pcVar2)();
        }
        if (*(long *)(uVar8 + 0x18) < lVar9) {
          FUN_1020f4734(lVar9);
          uVar6 = uVar3;
          FUN_1020f42f0();
          param_2 = uVar5;
          if (((uint)uVar4 & 1) != ((uint)uVar5 & 1)) {
LAB_1020f0a44:
            func_0x000107c60624(&UNK_1104cace0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f0a54);
            (*pcVar2)();
          }
LAB_1020f08b8:
          if ((uVar4 & 1) != 0) goto LAB_1020f08c0;
LAB_1020f0940:
          lVar9 = uVar8 + (uVar6 >> 6) * 8;
          *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar6 & 0x3f);
          *(ulong *)(*(long *)(uVar8 + 0x30) + uVar6 * 8) = uVar3;
          *(undefined **)(*(long *)(uVar8 + 0x38) + uVar6 * 8) = puVar1;
          if (SCARRY8(*(long *)(uVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f0a3c);
            (*pcVar2)();
          }
          *(long *)(uVar8 + 0x10) = *(long *)(uVar8 + 0x10) + 1;
        }
        else {
          param_2 = uVar4;
          if ((int)uVar5 != 0) goto LAB_1020f08b8;
          FUN_1020f45d0();
          if ((uVar4 & 1) == 0) goto LAB_1020f0940;
LAB_1020f08c0:
          uVar10 = *(undefined8 *)(*(long *)(uVar8 + 0x38) + uVar6 * 8);
          *(undefined **)(*(long *)(uVar8 + 0x38) + uVar6 * 8) = puVar1;
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(uVar10);
        }
        unaff_x20[1] = uVar8;
        uVar5 = *unaff_x20;
        uVar4 = uVar5;
        func_0x000107c61558();
        uVar6 = uVar5;
        if ((uVar4 & 1) == 0) {
          param_2 = *(long *)(uVar5 + 0x10) + 1;
          uVar6 = 0;
          FUN_102100b8c(0,param_2,1,uVar5);
        }
        uVar5 = *(ulong *)(uVar6 + 0x10);
        uVar4 = uVar5 + 1;
        uVar7 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          param_2 = uVar4;
          FUN_102100b8c(uVar7,uVar4,1,uVar6);
        }
        *(ulong *)(uVar7 + 0x10) = uVar4;
        *(ulong *)(uVar7 + uVar5 * 8 + 0x20) = uVar3;
        *unaff_x20 = uVar7;
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 1;
        if (lVar12 == 0) {
          return;
        }
      }
      func_0x000107c61434(uVar6);
      uVar4 = uVar3;
      FUN_1020f42f0();
      if ((param_2 & 1) == 0) {
        func_0x000107c6142c(uVar6);
        uVar4 = param_2;
        goto LAB_1020f0838;
      }
      uVar10 = *(undefined8 *)(*(long *)(uVar6 + 0x38) + uVar4 * 8);
      func_0x000107c61434(uVar10);
      func_0x000107c6142c(uVar6);
      func_0x000107c61174();
      uVar6 = unaff_x20[1];
      func_0x000107c61558();
      uVar7 = unaff_x20[1];
      uVar4 = uVar3;
      FUN_1020f42f0();
      uVar5 = (ulong)~(uint)param_2 & 1;
      lVar9 = *(long *)(uVar7 + 0x10) + uVar5;
      if (SCARRY8(*(long *)(uVar7 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f0a40);
        (*pcVar2)();
      }
      if (*(long *)(uVar7 + 0x18) < lVar9) {
        FUN_1020f4734(lVar9);
        uVar4 = uVar3;
        FUN_1020f42f0();
        uVar5 = uVar6;
        if (((uint)param_2 & 1) != ((uint)uVar6 & 1)) goto LAB_1020f0a44;
LAB_1020f08e4:
        if ((param_2 & 1) == 0) goto LAB_1020f08ec;
LAB_1020f0734:
        uVar11 = *(undefined8 *)(*(long *)(uVar7 + 0x38) + uVar4 * 8);
        *(undefined **)(*(long *)(uVar7 + 0x38) + uVar4 * 8) = puVar1;
        func_0x000107c6142c(uVar10);
        func_0x000107c61170(uVar3);
        param_2 = uVar5;
      }
      else {
        uVar5 = param_2;
        if ((int)uVar6 != 0) goto LAB_1020f08e4;
        FUN_1020f45d0();
        if ((param_2 & 1) != 0) goto LAB_1020f0734;
LAB_1020f08ec:
        lVar9 = uVar7 + (uVar4 >> 6) * 8;
        *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar4 & 0x3f);
        *(ulong *)(*(long *)(uVar7 + 0x30) + uVar4 * 8) = uVar3;
        *(undefined **)(*(long *)(uVar7 + 0x38) + uVar4 * 8) = puVar1;
        if (SCARRY8(*(long *)(uVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f0a44);
          (*pcVar2)();
        }
        *(long *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + 1;
        param_2 = uVar5;
        uVar11 = uVar10;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(uVar11);
      unaff_x20[1] = uVar7;
      lVar12 = lVar12 + -1;
      puVar13 = puVar13 + 1;
    } while (lVar12 != 0);
  }
  return;
}



/* Entry: 1020f0a54; end: 1020f0b4b;  */

void FUN_1020f0a54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar2 = *puVar4;
      func_0x000107c61174(uVar2);
      func_0x000107c61174();
      FUN_1020f3adc(&uStack_48,uVar2);
      uVar1 = uStack_48;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1020f0b4c; end: 1020f13a7;  */

undefined8 FUN_1020f0b4c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_a8 [72];
  
  if (param_1 == param_2) {
LAB_1020f0cb0:
    uVar7 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      lVar9 = 0;
      uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar10 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar10 = ~(-1L << (uVar6 & 0x3f));
      }
      uVar10 = uVar10 & *(ulong *)(param_1 + 0x38);
      if (uVar10 == 0) goto LAB_1020f0be0;
LAB_1020f0bc8:
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      do {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar5) | lVar9 << 6) * 8);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61174(uVar7);
        puVar3 = auStack_a8;
        func_0x000107c6011c();
        func_0x000107c606a8();
        uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar8 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) == 0) {
LAB_1020f0cb8:
          func_0x000107c61170(uVar7);
          break;
        }
        while( true ) {
          uVar4 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar8 * 8);
          func_0x000107c49cec();
          if ((uVar4 & 1) != 0) break;
          uVar8 = uVar8 + 1 & ~uVar5;
          if ((*(ulong *)(param_2 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) == 0)
          goto LAB_1020f0cb8;
        }
        func_0x000107c61170(uVar7);
        if (uVar10 != 0) goto LAB_1020f0bc8;
LAB_1020f0be0:
        do {
          lVar1 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f0ce8);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar1) goto LAB_1020f0cb0;
          uVar10 = ((ulong *)(param_1 + 0x38))[lVar1];
          lVar9 = lVar9 + 1;
        } while (uVar10 == 0);
        uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar9 = lVar1;
      } while( true );
    }
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 1020f13a8; end: 1020f1467; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f13a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001020f0ce8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar3 = puVar2;
  FUN_1020f4c60();
  uVar5 = param_2;
  func_0x000107c6142c(puVar2);
  func_0x0001020f0ce8();
  puVar2 = puVar4;
  FUN_1020f4c60();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  *puVar1 = puVar2;
  puVar1[1] = uVar5;
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1[2] = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1[3] = puVar2;
  FUN_1020f4e98();
  lStack_50 = param_1;
  puStack_48 = puVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020f1468; end: 1020f152b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020f1468(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e587f8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar3;
  puVar2[3] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  puVar7 = auStack_78;
  func_0x000107c61154(puVar7,puVar6);
  func_0x000107c61170(param_1);
  return puVar7;
}



/* Entry: 1020f152c; end: 1020f15d3; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference initWithCopy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f152c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lStack_68;
  undefined8 *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112e587f8);
  puVar7 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  FUN_1020f4e98();
  puVar6 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  puStack_60 = puVar7;
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_68,puVar6);
  return;
}



/* Entry: 1020f15d4; end: 1020f1697; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference numberOfItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f15d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  uVar6 = uVar2;
  FUN_1020f4fa4(uVar2,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  return uVar6;
}



/* Entry: 1020f1698; end: 1020f17cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020f1698(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e587f8);
  puVar7 = auStack_78;
  func_0x000107c61428(plVar1,puVar7,0,0);
  lVar8 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar12 = *(long *)(lVar8 + 0x10);
  func_0x000107c61434(lVar8);
  func_0x000107c61434(lVar3);
  func_0x000107c61434(lVar2);
  func_0x000107c61434(lVar4);
  lVar9 = 0;
  lVar13 = 0x20;
  while ((lVar12 != 0 && (*(long *)(lVar3 + 0x10) != 0))) {
    lVar10 = *(long *)(lVar8 + lVar13);
    func_0x000107c61434(lVar3);
    func_0x000107c61174();
    lVar11 = lVar10;
    FUN_1020f42f0();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(lVar10);
      lVar8 = lVar3;
      break;
    }
    lVar11 = *(long *)(*(long *)(lVar3 + 0x38) + lVar11 * 8);
    func_0x000107c61434(lVar11);
    func_0x000107c6142c(lVar3);
    lVar14 = *(long *)(lVar11 + 0x10);
    func_0x000107c6142c(lVar11);
    func_0x000107c61170(lVar10);
    lVar13 = lVar13 + 8;
    lVar12 = lVar12 + -1;
    bVar6 = SCARRY8(lVar9,lVar14);
    lVar9 = lVar9 + lVar14;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1020f1778);
      (*pcVar5)();
    }
  }
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar8);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar2);
  return lVar9;
}



/* Entry: 1020f17d0; end: 1020f185b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference numberOfSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f17d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e587f8;
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_38,0,0);
  return *(undefined8 *)(*(long *)(param_1 + lVar1) + 0x10);
}



/* Entry: 1020f185c; end: 1020f1867; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference sectionIdentifiers] */

void FUN_1020f185c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020f1868();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x0001007bbbf8(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1020f1868; end: 1020f1967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020f1868(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_112e587f8;
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,auStack_68,0,0);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(unaff_x20 + lVar6);
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 != 0) {
    func_0x000107c61434(lVar5);
    func_0x0001020ea894(0,lVar6,0);
    lVar7 = 0x20;
    do {
      uVar4 = *(undefined8 *)(lVar5 + lVar7);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      uVar2 = *(ulong *)(puVar3 + 0x18);
      func_0x000107c61174();
      if (uVar2 >> 1 <= uVar1) {
        func_0x0001020ea894(1 < uVar2,uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 8 + 0x20) = uVar4;
      lVar7 = lVar7 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar5);
  }
  return puVar3;
}



/* Entry: 1020f1968; end: 1020f1973; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference itemIdentifiers] */

void FUN_1020f1968(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020f19cc();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x0001007bbbf8(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1020f1974; end: 1020f19cb;  */

void FUN_1020f1974(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x0001007bbbf8(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1020f19cc; end: 1020f1b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020f19cc(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_68 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e587f8);
  func_0x000107c61428(plVar1,auStack_68,0,0);
  lVar9 = *plVar1;
  lVar3 = plVar1[1];
  lVar10 = plVar1[2];
  lVar4 = plVar1[3];
  func_0x000107c61434(lVar9);
  func_0x000107c61434(lVar3);
  func_0x000107c61434(lVar10);
  func_0x000107c61434(lVar4);
  lVar6 = lVar9;
  FUN_1020f5060(lVar9,lVar3);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar10);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar9);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar6 + 0x10);
  if (lVar9 == 0) {
    func_0x000107c6142c(lVar6);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001020ea894(0,lVar9,0);
    lVar10 = 0x20;
    do {
      uVar7 = *(undefined8 *)(lVar6 + lVar10);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      uVar5 = *(ulong *)(puVar8 + 0x18);
      func_0x000107c61174();
      if (uVar5 >> 1 <= uVar2) {
        func_0x0001020ea894(1 < uVar5,uVar2 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar8 + uVar2 * 8 + 0x20) = uVar7;
      lVar10 = lVar10 + 8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    func_0x000107c6142c(lVar6);
  }
  return puVar8;
}



/* Entry: 1020f1b30; end: 1020f1c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f1b30(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e587f8);
  puVar4 = auStack_58;
  func_0x000107c61428(puVar1,puVar4,0,0);
  lVar6 = puVar1[1];
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = *puVar1;
    lVar2 = puVar1[2];
    lVar7 = puVar1[3];
    func_0x000107c61434(lVar6);
    func_0x000107c61434(lVar7);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(lVar2);
    FUN_1020f42f0();
    if (((ulong)puVar4 & 1) == 0) {
      uVar8 = 0;
      lVar3 = lVar6;
      lVar6 = lVar2;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x38) + param_1 * 8) + 0x10);
      lVar3 = lVar7;
      lVar7 = lVar2;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(uVar5);
  }
  return uVar8;
}



/* Entry: 1020f1c10; end: 1020f1c6b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference numberOfItemsInSection:] */

undefined8 FUN_1020f1c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1020f1b30(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1020f1c6c; end: 1020f1e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020f1c6c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_68 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e587f8);
  func_0x000107c61428(plVar1,auStack_68,0,0);
  lVar9 = *plVar1;
  lVar2 = plVar1[1];
  lVar10 = plVar1[2];
  lVar3 = plVar1[3];
  if (*(long *)(lVar2 + 0x10) == 0) {
    func_0x000107c61434(lVar9);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(lVar10);
    func_0x000107c61434(lVar3);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar6 = 0;
    func_0x000107c61438(lVar2);
    func_0x000107c61434(lVar9);
    func_0x000107c61434(lVar10);
    func_0x000107c61434(lVar3);
    FUN_1020f42f0();
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar7 = *(undefined **)(*(long *)(lVar2 + 0x38) + param_1 * 8);
      func_0x000107c61434(puVar7);
      func_0x000107c6142c(lVar9);
      lVar9 = lVar2;
    }
  }
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(puVar7 + 0x10);
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar7);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001020ea894(0,lVar9,0);
    lVar10 = 0x20;
    do {
      uVar5 = *(undefined8 *)(puVar7 + lVar10);
      uVar6 = *(ulong *)(puVar8 + 0x10);
      uVar4 = *(ulong *)(puVar8 + 0x18);
      func_0x000107c61174();
      if (uVar4 >> 1 <= uVar6) {
        func_0x0001020ea894(1 < uVar4,uVar6 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar8 + uVar6 * 8 + 0x20) = uVar5;
      lVar10 = lVar10 + 8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    func_0x000107c6142c(puVar7);
  }
  return puVar8;
}



/* Entry: 1020f1e30; end: 1020f1eab; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference itemIdentifiersInSection:] */

void FUN_1020f1e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1020f1c6c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x0001007bbbf8(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1020f1eac; end: 1020f2023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020f1eac(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e587f8);
  puVar7 = auStack_78;
  func_0x000107c61428(plVar1,puVar7,0,0);
  lVar2 = *plVar1;
  lVar4 = plVar1[1];
  lVar3 = plVar1[2];
  lVar5 = plVar1[3];
  lVar12 = *(long *)(lVar2 + 0x10);
  func_0x000107c61434(lVar2);
  func_0x000107c61434(lVar4);
  func_0x000107c61434(lVar3);
  func_0x000107c61434(lVar5);
  if (lVar12 != 0) {
    lVar13 = 0;
    do {
      if (*(long *)(lVar4 + 0x10) != 0) {
        lVar10 = *(long *)(lVar2 + 0x20 + lVar13 * 8);
        func_0x000107c61434(lVar4);
        func_0x000107c61174();
        lVar9 = lVar10;
        FUN_1020f42f0();
        lVar11 = lVar4;
        if (((ulong)puVar7 & 1) != 0) {
          lVar11 = *(long *)(*(long *)(lVar4 + 0x38) + lVar9 * 8);
          func_0x000107c61434(lVar11);
          func_0x000107c6142c(lVar4);
          lVar8 = *(long *)(lVar11 + 0x10);
          lVar9 = 0x20;
          while (lVar8 != 0) {
            iVar6 = (int)*(undefined8 *)(lVar11 + lVar9);
            func_0x000107c49cec();
            lVar9 = lVar9 + 8;
            lVar8 = lVar8 + -1;
            if (iVar6 != 0) {
              func_0x000107c6142c(lVar3);
              func_0x000107c6142c(lVar4);
              func_0x000107c6142c(lVar2);
              func_0x000107c6142c(lVar11);
              goto LAB_1020f1ff8;
            }
          }
        }
        func_0x000107c61170(lVar10);
        func_0x000107c6142c(lVar11);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar12);
  }
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar2);
  lVar10 = 0;
LAB_1020f1ff8:
  func_0x000107c6142c(lVar5);
  return lVar10;
}



/* Entry: 1020f2024; end: 1020f210b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference sectionIdentifierWithContainingItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  uVar6 = param_3;
  FUN_1020f4eb8(param_3,uVar2,uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1020f210c; end: 1020f21d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f210c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  uVar6 = uVar2;
  FUN_1020f5200(param_1,uVar2,uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  if (((uint)uVar6 & 0xff) == 1) {
    func_0x000107c5eac8();
  }
  return;
}



/* Entry: 1020f21d4; end: 1020f23df; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference indexOfItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f21d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar6 = *puVar1;
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  uVar5 = param_3;
  uVar7 = uVar6;
  FUN_1020f5200(param_3,uVar6,uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar6);
  if (((uint)uVar7 & 0xff) == 1) {
    func_0x000107c5eac8();
    uVar5 = uVar6;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar5;
}



/* Entry: 1020f23e0; end: 1020f243b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference indexOfSection:] */

undefined8 FUN_1020f23e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001020f22d0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1020f243c; end: 1020f2447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f243c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *apuStack_78 [3];
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020ea8b0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f2864);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar6 = apuStack_78[0];
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar8;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar1 = *(ulong *)(puVar6 + 0x18);
        apuStack_78[0] = puVar6;
        func_0x000107c61174();
        if (uVar1 >> 1 <= uVar7) {
          func_0x0001020ea8b0(1 < uVar1,uVar7 + 1,1);
          puVar6 = apuStack_78[0];
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = apuStack_78[0];
        uVar3 = uVar7;
        FUN_1020f3928(uVar7,param_1);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_78[0] = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001020ea8b0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
        *(ulong *)(apuStack_78[0] + uVar1 * 8 + 0x20) = uVar3;
        puVar6 = apuStack_78[0];
      } while (uVar5 != uVar7);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,apuStack_78,0x21,0);
  (*(code *)0x1020eea7c)(puVar6,param_2);
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1020f2448; end: 1020f24cb; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference appendItems:toSection:] */

void FUN_1020f2448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1020f243c(param_3,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f24cc; end: 1020f24d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f24cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *apuStack_78 [3];
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020ea8b0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f2864);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar6 = apuStack_78[0];
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar8;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar1 = *(ulong *)(puVar6 + 0x18);
        apuStack_78[0] = puVar6;
        func_0x000107c61174();
        if (uVar1 >> 1 <= uVar7) {
          func_0x0001020ea8b0(1 < uVar1,uVar7 + 1,1);
          puVar6 = apuStack_78[0];
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = apuStack_78[0];
        uVar3 = uVar7;
        FUN_1020f3928(uVar7,param_1);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_78[0] = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001020ea8b0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
        *(ulong *)(apuStack_78[0] + uVar1 * 8 + 0x20) = uVar3;
        puVar6 = apuStack_78[0];
      } while (uVar5 != uVar7);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,apuStack_78,0x21,0);
  FUN_1020eebb0(puVar6,param_2);
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1020f24d8; end: 1020f24ef; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference insertItems:beforeItem:] */

void FUN_1020f24d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1020f24cc(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f24f0; end: 1020f24fb; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference insertItems:afterItem:] */

void FUN_1020f24f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f24e4)(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f24fc; end: 1020f2583;  */

void FUN_1020f24fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f2584; end: 1020f258f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2584(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *apuStack_78 [3];
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020ea8b0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f2c34);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar6 = apuStack_78[0];
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar8;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar1 = *(ulong *)(puVar6 + 0x18);
        apuStack_78[0] = puVar6;
        func_0x000107c61174();
        if (uVar1 >> 1 <= uVar7) {
          func_0x0001020ea8b0(1 < uVar1,uVar7 + 1,1);
          puVar6 = apuStack_78[0];
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = apuStack_78[0];
        uVar3 = uVar7;
        FUN_1020f3928(uVar7,param_1);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_78[0] = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001020ea8b0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
        *(ulong *)(apuStack_78[0] + uVar1 * 8 + 0x20) = uVar3;
        puVar6 = apuStack_78[0];
      } while (uVar5 != uVar7);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,apuStack_78,0x21,0);
  (*(code *)0x1020eefd0)(puVar6);
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(puVar6);
  return;
}


