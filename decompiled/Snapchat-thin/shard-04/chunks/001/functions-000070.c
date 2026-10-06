/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030afabc; end: 1030afc2b; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030afb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030afb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030afbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030afb94) */
/* WARNING: Removing unreachable block (ram,0x0001030afb14) */
/* WARNING: Removing unreachable block (ram,0x0001030afbf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030afabc(long param_1)

{
  func_0x000100d33ee0(param_1 + _DAT_112f39620);
  func_0x0001030b2a80(param_1 + _DAT_112f39628,&SUB_100b91b84);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f39630));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f39638));
  return;
}



/* Entry: 1030afc2c; end: 1030afc33;  */

void FUN_1030afc2c(void)

{
  if (lRam0000000112f39718 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e743da8);
  return;
}



/* Entry: 1030afc34; end: 1030afc6b;  */

void FUN_1030afc34(undefined8 param_1)

{
  if (lRam0000000112f39718 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e743da8);
  return;
}



/* Entry: 1030afc6c; end: 1030afd73;  */

void FUN_1030afc6c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_f0 = &UNK_10db847e0;
  lVar1 = 0x13f;
  func_0x000100b91b84();
  if (param_2 < 0x40) {
    lStack_e8 = *(long *)(lVar1 + -8) + 0x40;
    puStack_e0 = PTR___sBoWV_11034d678 + 0x40;
    puStack_d8 = &UNK_10db847f8;
    puStack_d0 = &UNK_10db84810;
    puStack_b0 = &UNK_10db84810;
    puStack_98 = &UNK_10db847f8;
    puStack_90 = &UNK_10db847f8;
    puStack_88 = PTR___sBOWV_11034d658 + 0x40;
    puStack_78 = &UNK_10db84828;
    puStack_70 = &UNK_10db847e0;
    puStack_68 = &UNK_10db84840;
    puStack_60 = &UNK_10db84858;
    puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_50 = &UNK_10db84870;
    puStack_40 = &UNK_10db84888;
    puStack_38 = &UNK_10db848a0;
    puStack_30 = &UNK_10db84888;
    puStack_28 = &UNK_10db84888;
    puStack_c8 = puStack_e0;
    puStack_c0 = puStack_e0;
    puStack_b8 = puStack_e0;
    puStack_a8 = puStack_e0;
    puStack_a0 = puStack_e0;
    puStack_80 = puStack_88;
    puStack_48 = puStack_58;
    func_0x000107c61630(param_1,0x100,0x1a,&puStack_f0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1030afd74; end: 1030afdaf; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter canHandleAttachment:] */

bool FUN_1030afd74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 9;
}



/* Entry: 1030afdb0; end: 1030afdbf; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1030afdb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f396b0);
}



/* Entry: 1030afdc0; end: 1030b033f;  */

/* WARNING: Possible PIC construction at 0x0001030afe30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030afe34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030afdc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  
  lVar3 = unaff_x20 + _DAT_112f39660;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  func_0x0001030aff60(_DAT_112f39628);
  lVar4 = lVar3;
  FUN_1030b07a4();
  if (lVar4 == 0) {
    func_0x0001030b0c18();
    lVar5 = lVar3;
    lVar7 = lVar4;
    (**(code **)(lVar2 + 8))(lVar3,lVar4,*(undefined8 *)(unaff_x20 + _DAT_112f39638),uVar1,lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    lVar3 = unaff_x20 + _DAT_112f39698;
    *(long *)(lVar3 + 8) = lVar7;
    func_0x000107c61604(lVar3,lVar5);
    lVar3 = unaff_x20 + _DAT_112f39640;
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar1);
    lVar3 = lVar5;
    func_0x000107c614f0(lVar5);
    (**(code **)(lVar7 + 8))();
    puVar6 = &UNK_110608230;
    func_0x000107c613fc(&UNK_110608230,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcVar8 = *(code **)(lVar2 + 0x10);
    func_0x000107c6157c(puVar6);
    (*pcVar8)(lVar3,FUN_1030b27fc,puVar6,uVar1,lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61578(puVar6,2);
    FUN_1030b057c();
  }
  else {
    FUN_1030b0898();
    lVar5 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 1030b0340; end: 1030b0503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b0340(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112f396b0) = 1;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112f39680);
    uVar5 = uVar6;
    func_0x000107c615f0();
    FUN_1030b0504();
    func_0x000107c615e8(uVar6);
    *(undefined8 *)(param_1 + _DAT_112f396b8) = uVar5;
    lVar1 = *(long *)(param_1 + _DAT_112f396a8);
    if (lVar1 != 0) {
      lVar7 = ((long *)(param_1 + _DAT_112f396a8))[1];
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      pcVar8 = *(code **)(lVar7 + 0x48);
      func_0x000107c615f0(lVar1);
      (*pcVar8)(lVar2,lVar7);
      func_0x000107c615e8(lVar1);
    }
    lVar1 = param_1 + _DAT_112f39620;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001041bb118(0);
      func_0x0001030b2924(param_1 + _DAT_112f39628,puVar3,&SUB_100b91b84);
      func_0x0001041cdc38(0);
      func_0x000107c610f8();
      func_0x0001041cc9d4(puVar3);
      puVar4 = puVar3;
      func_0x0001041b9788();
      func_0x000107c61170(puVar3);
      uVar5 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2d0();
      func_0x000107c3d254(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030b0504; end: 1030b057b;  */

long FUN_1030b0504(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac();
  func_0x000107c51b38(puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b0574);
    (*pcVar1)();
  }
  if (-1.0 < param_1) {
    if (param_1 < 1.8446744073709552e+19) {
      return (long)param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b057c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b0578);
  (*pcVar1)();
}



/* Entry: 1030b057c; end: 1030b077b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b057c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000100b91cc8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  lVar1 = unaff_x20 + _DAT_112f39628;
  lVar3 = 0;
  func_0x000100b91b84();
  FUN_1030b2898(lVar1 + *(int *)(lVar3 + 0x28),puVar9,0x112e9b260,&UNK_10daa8cf0);
  puVar4 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar2);
  if ((int)puVar4 == 1) {
    FUN_1030b2a40(puVar9,0x112e9b260,&UNK_10daa8cf0);
  }
  else {
    func_0x0001030b28e0(puVar9,lVar7);
    func_0x0001000d224c(&uStack_68);
    func_0x000107c615e8(uStack_68);
    func_0x0001000d224c(&uStack_68);
    func_0x0001030b2924(lVar7,lVar8,&SUB_100b91cc8);
    func_0x0001041e36e8(0);
    func_0x000107c610f8();
    func_0x0001041e31b8(lVar8);
    uVar5 = uStack_68;
    func_0x000107c4ef9c();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_68);
    func_0x000107c61170(lVar8);
    func_0x0001030b2a80(lVar7,&SUB_100b91cc8);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f396e8);
    *(undefined8 *)(unaff_x20 + _DAT_112f396e8) = uVar5;
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 1030b077c; end: 1030b07a3; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter presentAttachment] */

void FUN_1030b077c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030afdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b07a4; end: 1030b0897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1030b07a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f39678);
  func_0x000107c3e208(uVar1);
  func_0x000107c5ed70(_DAT_112f39628);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c6142c(param_2);
LAB_1030b0878:
    lVar3 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
    lVar3 = lStack_38;
    func_0x000107c4e8d4();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(uVar1);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c614f0();
      func_0x000107c61440();
      if (lVar2 != 0) goto LAB_1030b0880;
      func_0x000107c615e8(lVar3);
      goto LAB_1030b0878;
    }
  }
  lVar2 = 0;
LAB_1030b0880:
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 1030b0898; end: 1030b0f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030b0898(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long unaff_x20;
  code *pcVar14;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
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
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f396a8);
  uVar3 = *puVar1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c615e8(uVar3);
  uVar3 = param_1;
  func_0x000107c614f0();
  pcVar14 = *(code **)(param_2 + 0x20);
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  (*pcVar14)();
  uVar4 = uVar3;
  (**(code **)(param_2 + 8))(uVar3,param_2);
  puVar5 = PTR_PTR_1126afe50;
  func_0x000107c610f8();
  func_0x000107c4842c();
  puVar7 = &UNK_110608230;
  puVar6 = puVar7;
  func_0x000107c613fc(&UNK_110608230,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,unaff_x20);
  func_0x000107c613fc(&UNK_110608230,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
  pcVar14 = *(code **)(param_2 + 0x30);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  uVar8 = uVar3;
  (*pcVar14)(uVar3,param_2);
  uVar9 = uVar8;
  func_0x0001004575f0();
  func_0x000107c61574(uVar8);
  uVar8 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  (**(code **)(param_2 + 0x38))(uVar3,param_2);
  uVar9 = uVar3;
  func_0x0001004575f0();
  func_0x000107c61574(uVar3);
  uVar3 = uVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  puVar10 = PTR_PTR_1126a5e68;
  func_0x000107c610f8(PTR_PTR_1126a5e68);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1030b0f60;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110608248;
  ppuVar11 = &puStack_a8;
  func_0x000107c60bc4(ppuVar11);
  pcStack_b8 = FUN_1030b2804;
  puStack_d8 = puVar2;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_1000f6b44;
  puStack_c0 = &UNK_110608270;
  ppuVar12 = &puStack_d8;
  puStack_b0 = puVar6;
  func_0x000107c60bc4(ppuVar12);
  uStack_e8 = 0x1030b282c;
  puStack_108 = puVar2;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_110608298;
  ppuVar13 = &puStack_108;
  puStack_e0 = puVar7;
  func_0x000107c60bc4(ppuVar13);
  func_0x000107c495b4(puVar10);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(puStack_b0);
  puVar2 = puStack_80;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar2);
  puVar7 = &UNK_110608230;
  func_0x000107c613fc(&UNK_110608230,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
  pcStack_88 = FUN_1030b2870;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1106082c0;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61574(puStack_80);
  func_0x000107c56d14(puVar10);
  func_0x000107c60bd0(ppuVar11);
  return puVar10;
}



/* Entry: 1030b0f60; end: 1030b0f63;  */

void FUN_1030b0f60(void)

{
  return;
}



/* Entry: 1030b0f64; end: 1030b157f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b0f64(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar13 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f39678));
  lVar2 = unaff_x20 + _DAT_112f39698;
  lVar4 = lVar2;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar12 = *(long *)(lVar2 + 8);
    lVar2 = unaff_x20 + _DAT_112f39628;
    lVar5 = 0;
    func_0x000100b91b84();
    lVar2 = lVar2 + *(int *)(lVar5 + 0x24);
    lVar5 = *(long *)(lVar2 + *(int *)(lVar3 + 0x1c));
    lStack_a8 = lVar3;
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + _DAT_113067620);
      pcVar9 = (code *)*puVar1;
      if (pcVar9 != (code *)0x0) {
        uVar7 = puVar1[1];
        func_0x000107c6157c(uVar7);
        (*pcVar9)();
        func_0x000100d33eac(pcVar9,uVar7);
      }
    }
    func_0x0001041bb118(0);
    func_0x0001030b2924(lVar2,lVar13,&SUB_100b91790);
    uVar7 = 0;
    func_0x0001041ca2d4(0);
    func_0x000107c610f8();
    lVar3 = lVar13;
    func_0x0001041c9d38();
    lVar5 = lVar3;
    func_0x0001041b95e4();
    func_0x000107c61170(lVar3);
    lStack_b8 = _DAT_112f39620;
    lVar3 = unaff_x20 + _DAT_112f39620;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c3d268();
      func_0x000107c615e8(lVar3);
    }
    func_0x0001030b2924(lVar2,lVar13,&SUB_100b91790);
    func_0x000107c610f8(uVar7);
    func_0x0001041c9d38(lVar13);
    lVar3 = lVar13;
    func_0x000106987180();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    lVar13 = lVar3;
    func_0x000107c5f9e8(lVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c614f0(lVar4);
    lStack_a0 = lVar4;
    (**(code **)(lVar12 + 8))();
    puVar6 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&lStack_98);
    lStack_b0 = lVar5;
    func_0x000107c614f0(lStack_98);
    pcVar9 = *(code **)(lStack_90 + 0x10);
    func_0x000107c615f0();
    (*pcVar9)();
    func_0x000107c615e8(lStack_98);
    func_0x0001000d224c(&uStack_70);
    uVar7 = uStack_70;
    func_0x000107c614f0(uStack_70);
    lVar3 = lVar13;
    func_0x00010018cc3c(lVar13);
    func_0x000107c6142c(lVar13);
    FUN_1030bfd40(puVar10);
    lVar13 = 0;
    func_0x0001030b3c30();
    lVar4 = lVar13;
    func_0x000107c613fc();
    *(undefined **)(lVar4 + 0x10) = puVar6;
    ppuStack_78 = &PTR_DAT_110608590;
    uVar8 = *(undefined8 *)(lVar2 + *(int *)(lStack_a8 + 0x28));
    uVar11 = *(undefined8 *)(lVar2 + *(int *)(lStack_a8 + 0x20));
    pcVar9 = *(code **)(lStack_68 + 0x20);
    lStack_98 = lVar4;
    lStack_80 = lVar13;
    func_0x000107c61174(puVar6);
    lVar4 = lStack_b0;
    (*pcVar9)(lVar3,puVar10,&lStack_98,uVar8,uVar11,uVar7,lStack_68);
    func_0x000107c615e8(uStack_70);
    func_0x000107c6142c(lVar3);
    func_0x0001030b2a80(puVar10,&SUB_100b92084);
    func_0x0001000834e4(&lStack_98);
    lVar2 = unaff_x20 + lStack_b8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c3d258();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c615e8(lStack_a0);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1030b1580; end: 1030b166f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1580(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f39678));
  lVar4 = *(long *)(unaff_x20 + _DAT_112f396a8);
  if (lVar4 != 0) {
    lVar5 = ((long *)(unaff_x20 + _DAT_112f396a8))[1];
    lVar2 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 0x50);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar2,lVar5);
    func_0x000107c615e8(lVar4);
  }
  lVar4 = unaff_x20 + _DAT_112f39640;
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  lVar2 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar1);
  puVar3 = &UNK_110608230;
  func_0x000107c613fc(&UNK_110608230,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar6 = *(code **)(lVar2 + 0x18);
  func_0x000107c6157c(puVar3);
  (*pcVar6)(FUN_1030b27dc,puVar3,uVar1,lVar2);
  func_0x000107c61578(puVar3,2);
  return;
}



/* Entry: 1030b1670; end: 1030b1673;  */

void FUN_1030b1670(void)

{
  return;
}



/* Entry: 1030b1674; end: 1030b1793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar3 = &puStack_a0;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f39678);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_110608230;
    func_0x000107c613fc(&UNK_110608230,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    uStack_88 = param_3;
    uStack_80 = param_2;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1030b1794; end: 1030b17eb;  */

void FUN_1030b1794(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030b17ec; end: 1030b1b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b17ec(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  double *pdVar10;
  long extraout_x8;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  double dVar13;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  lVar5 = 0;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = (undefined *)((long)&dStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *(undefined1 *)(unaff_x20 + _DAT_112f396b0) = 0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f396e8);
  if (lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    func_0x0001000d224c(&dStack_80);
    dVar13 = dStack_80;
    func_0x000107c4206c(dStack_80);
    func_0x000107c615e8(dVar13);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f396d0);
  if (lVar5 == 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f396c8);
    lVar8 = unaff_x20 + _DAT_112f39620;
    func_0x000107c61618();
    if (lVar8 == 0) {
      return;
    }
    func_0x0001041bb118(0);
    func_0x0001030b2924(unaff_x20 + _DAT_112f39628,puVar7,&SUB_100b91b84);
    func_0x0001041cdc38(0);
    func_0x000107c610f8();
    func_0x0001041cc9d4();
    puVar9 = puVar7;
    func_0x0001041b9788();
    func_0x000107c61170();
    FUN_1030b0504();
    puVar11 = *(undefined **)(unaff_x20 + _DAT_112f396b8);
    if (puVar7 < puVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1030b1b64);
      (*pcVar4)();
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f396c0);
    uVar2 = 0;
    if (puVar11 <= (undefined *)*puVar1) {
      uVar2 = (long)*puVar1 - (long)puVar11;
    }
    uVar3 = (long)puVar7 - (long)puVar11;
    if (*(char *)(puVar1 + 1) != '\x01') {
      uVar3 = uVar2;
    }
    puVar7 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x0001041bc850(0);
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar13 = (double)uVar3;
    func_0x000107c4cec4();
    uStack_78 = 0;
    if (*(char *)(puVar1 + 1) != '\x01') {
      uStack_78 = 0x100;
    }
    uStack_60 = 0;
    uStack_68 = 0x8000000000000200;
    uStack_58 = 2;
    pdVar10 = &dStack_80;
    dStack_80 = dVar13;
    uStack_70 = uVar12;
    func_0x0001041bbba4(pdVar10);
    func_0x000107c5c3c8(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(pdVar10);
    lVar5 = 0;
    func_0x0001041bf5c0(0);
    func_0x0001041bf2d0();
    func_0x000107c3d24c(lVar8);
    func_0x000107c615e8(lVar8);
  }
  else {
    lVar8 = unaff_x20 + _DAT_112f39620;
    func_0x000107c61618();
    if (lVar8 == 0) {
      return;
    }
    func_0x0001041bb118(0);
    func_0x0001030b2924(unaff_x20 + _DAT_112f39628,puVar7,&SUB_100b91b84);
    func_0x0001041cdc38(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar5);
    func_0x0001041cc9d4(puVar7);
    puVar11 = puVar7;
    func_0x0001041b9788();
    func_0x000107c61170(puVar7);
    puVar9 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c61174(lVar5);
    lVar6 = lVar5;
    func_0x000107c5ed2c();
    func_0x000107c61170(lVar5);
    func_0x000107c42d78(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar7 = (undefined *)0x0;
    func_0x0001041bf5c0(0);
    func_0x0001041bf2d0();
    func_0x000107c3d24c(lVar8);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(puVar11);
  }
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1030b1b64; end: 1030b1b8b; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter dismissAttachment] */

void FUN_1030b1b64(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b1580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b1b8c; end: 1030b1cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1b8c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  lVar2 = 0;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _DAT_112f396c0);
  if ((char)plVar1[1] == '\x01') {
    FUN_1030b0504();
    *plVar1 = lVar2;
    *(undefined1 *)(plVar1 + 1) = 0;
    lVar2 = unaff_x20 + _DAT_112f39620;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      func_0x0001030b2924(unaff_x20 + _DAT_112f39628,lVar3,&SUB_100b91b84);
      func_0x0001041cdc38(0);
      func_0x000107c610f8();
      func_0x0001041cc9d4(lVar3);
      lVar4 = lVar3;
      func_0x0001041b9788();
      func_0x000107c61170(lVar3);
      func_0x0001041bc850(0);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      uStack_50 = 0;
      uStack_58 = 0x8000000000000300;
      uStack_48 = 2;
      puVar5 = &uStack_70;
      func_0x0001041bbba4(puVar5);
      func_0x000107c3d250(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 1030b1cf0; end: 1030b1cfb; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter storeProductViewPresenterDidLoad:storeKitLoadInfo:] */

/* WARNING: Possible PIC construction at 0x0001030b1da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b1da8) */

void FUN_1030b1cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030b1f74(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030b1cfc; end: 1030b1d3f; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter storeProductViewPresenterDidOpenStoreView:] */

void FUN_1030b1cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1030b2170();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b1d40; end: 1030b1d4b; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter storeProductViewPresenter:didCloseStoreViewWithStoreKitLoadInfo:] */

/* WARNING: Possible PIC construction at 0x0001030b1da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b1da8) */

void FUN_1030b1d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030b2284(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030b1d4c; end: 1030b1dbf;  */

/* WARNING: Possible PIC construction at 0x0001030b1da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b1da8) */

void FUN_1030b1d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030b1dc0; end: 1030b1dc3; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter storeProductViewPresenter:failedToPresentWithError:] */

void FUN_1030b1dc0(void)

{
  return;
}



/* Entry: 1030b1dc4; end: 1030b1deb; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter webView:didFinishNavigation:] */

void FUN_1030b1dc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b1b8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b1dec; end: 1030b1e7f; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x0001030b1e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b1e64) */

void FUN_1030b1dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030b2378(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030b1e80; end: 1030b1ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f39688);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c4d664(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1030b1ed8; end: 1030b1ee3;  */

void FUN_1030b1ed8(void)

{
  return;
}



/* Entry: 1030b1ee4; end: 1030b1f4b;  */

/* WARNING: Possible PIC construction at 0x0001030b1f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b1f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1ee4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f396d0);
  *(undefined8 *)(unaff_x20 + _DAT_112f396d0) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030b1f4c; end: 1030b1f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1f4c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f396c8) != -1) {
    *(long *)(unaff_x20 + _DAT_112f396c8) = *(long *)(unaff_x20 + _DAT_112f396c8) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b1f6c);
  (*pcVar1)();
}



/* Entry: 1030b1f74; end: 1030b216f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b1f74(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  lVar1 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = unaff_x20 + _DAT_112f39628;
  lVar2 = 0;
  func_0x000100b91b84();
  lVar6 = lVar6 + *(int *)(lVar2 + 0x24);
  lVar1 = *(long *)(lVar6 + *(int *)(lVar1 + 0x1c));
  if (lVar1 != 0) {
    puVar7 = (undefined8 *)(lVar1 + _DAT_113067628);
    pcVar9 = (code *)*puVar7;
    if (pcVar9 != (code *)0x0) {
      uVar8 = puVar7[1];
      func_0x000107c6157c(uVar8);
      func_0x000107c5dfe8(param_2);
      uVar3 = param_2;
      func_0x000107c4e298(param_2);
      uVar4 = param_2;
      func_0x000107c4e294(param_2);
      (*pcVar9)(uVar3,uVar4);
      func_0x000100d33eac(pcVar9,uVar8);
    }
  }
  lVar1 = unaff_x20 + _DAT_112f39620;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001041bb118(0);
    func_0x0001030b2924(lVar6,lVar5,&SUB_100b91790);
    func_0x0001041ca2d4(0);
    func_0x000107c610f8();
    func_0x0001041c9d38(lVar5);
    lVar6 = lVar5;
    func_0x0001041b95e4();
    func_0x000107c61170(lVar5);
    func_0x000107c5dfe8(param_2);
    uVar3 = param_2;
    func_0x000107c4e294();
    func_0x000107c4e298();
    uVar8 = 0;
    func_0x0001041bc850(0);
    uStack_88 = 0x100;
    if ((int)param_2 == 0) {
      uStack_88 = 0;
    }
    uStack_88 = uStack_88 | uVar3 & 0xffffffff;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puVar7 = &uStack_90;
    uStack_90 = param_1;
    func_0x0001041bbba4(puVar7,uVar8);
    func_0x000107c3d250(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 1030b2170; end: 1030b2283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b2170(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20 + _DAT_112f39620;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x0001041bb118(0);
    lVar1 = unaff_x20 + _DAT_112f39628;
    lVar3 = 0;
    func_0x000100b91b84();
    func_0x0001030b2924(lVar1 + *(int *)(lVar3 + 0x24),puVar4,&SUB_100b91790);
    func_0x0001041ca2d4(0);
    func_0x000107c610f8();
    func_0x0001041c9d38(puVar4);
    puVar5 = puVar4;
    func_0x0001041b95e4();
    func_0x000107c61170(puVar4);
    uVar6 = 0;
    func_0x0001041bf5c0(0);
    func_0x0001041bf1b4();
    func_0x000107c3d254(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1030b2284; end: 1030b2377;  */

/* WARNING: Possible PIC construction at 0x0001030b2300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b2304) */
/* WARNING: Removing unreachable block (ram,0x000100d33eac) */
/* WARNING: Removing unreachable block (ram,0x000100d33eb8) */
/* WARNING: Removing unreachable block (ram,0x000100d33eb0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b2284(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f396e0);
  *(undefined8 *)(unaff_x20 + _DAT_112f396e0) = param_1;
  func_0x000107c61170(uVar1);
  func_0x000100b91b84();
  func_0x000100b91790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1030b2378; end: 1030b2747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b2378(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar5;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  lStack_70 = param_2;
  lStack_68 = param_3;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d7e680;
  lStack_80 = lVar7;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar5 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = uVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar6);
  func_0x000107c61170(param_1);
  func_0x000107c5eaf0(lVar10);
  (**(code **)(lVar9 + 8))(lVar6,lVar2);
  (**(code **)(lVar8 + 0x10))(lVar11,lStack_70 + _DAT_112f39628,lVar1);
  (**(code **)(lVar8 + 0x38))(lVar11,0,1,lVar1);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_1030b2898(lVar10,lVar7,0x112d36580,&UNK_10d9016d0);
  FUN_1030b2898(lVar11,lVar7 + lVar12,0x112d36580,&UNK_10d9016d0);
  pcVar13 = *(code **)(lVar8 + 0x30);
  lVar2 = lVar7;
  (*pcVar13)(lVar7,1,lVar1);
  uVar5 = uStack_78;
  if ((int)lVar2 == 1) {
    FUN_1030b2a40(lVar11,0x112d36580,&UNK_10d9016d0);
    FUN_1030b2a40(lVar10,0x112d36580,&UNK_10d9016d0);
    lVar12 = lVar7 + lVar12;
    (*pcVar13)(lVar12,1,lVar1);
    if ((int)lVar12 == 1) {
      FUN_1030b2a40(lVar7,0x112d36580,&UNK_10d9016d0);
      uVar4 = 1;
      goto LAB_1030b2678;
    }
LAB_1030b265c:
    FUN_1030b2a40(lVar7,0x112d7e680,&UNK_10d95e350);
  }
  else {
    FUN_1030b2898(lVar7,uStack_78,0x112d36580,&UNK_10d9016d0);
    lVar2 = lVar7 + lVar12;
    (*pcVar13)(lVar2,1,lVar1);
    lVar6 = lStack_80;
    if ((int)lVar2 == 1) {
      FUN_1030b2a40(lVar11,0x112d36580,&UNK_10d9016d0);
      FUN_1030b2a40(lVar10,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar8 + 8))(uVar5,lVar1);
      goto LAB_1030b265c;
    }
    lVar2 = lStack_80;
    (**(code **)(lVar8 + 0x20))(lStack_80,lVar7 + lVar12,lVar1);
    func_0x000101553b98();
    uVar3 = uVar5;
    func_0x000107c5fab8(uVar5,lVar6,lVar1,lVar2);
    pcVar13 = *(code **)(lVar8 + 8);
    (*pcVar13)(lVar6,lVar1);
    FUN_1030b2a40(lVar11,0x112d36580,&UNK_10d9016d0);
    FUN_1030b2a40(lVar10,0x112d36580,&UNK_10d9016d0);
    (*pcVar13)(uVar5,lVar1);
    FUN_1030b2a40(lVar7,0x112d36580,&UNK_10d9016d0);
    if ((uVar3 & 1) != 0) {
      uVar4 = 1;
      goto LAB_1030b2678;
    }
  }
  uVar4 = 0;
LAB_1030b2678:
  (**(code **)(lStack_68 + 0x10))(lStack_68,uVar4);
  return;
}



/* Entry: 1030b2748; end: 1030b27cb;  */

/* WARNING: Possible PIC construction at 0x0001030b2788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b278c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b2748(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f396a0,param_1);
  func_0x000107c5ed2c();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f396d0);
  *(undefined8 *)(unaff_x20 + _DAT_112f396d0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030b27cc; end: 1030b27db;  */

void FUN_1030b27cc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1030b27dc; end: 1030b27fb;  */

void FUN_1030b27dc(void)

{
  FUN_1030b1794();
  return;
}



/* Entry: 1030b27fc; end: 1030b2803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b27fc(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f396b0) = 1;
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112f39680);
    uVar5 = uVar6;
    func_0x000107c615f0();
    FUN_1030b0504();
    func_0x000107c615e8(uVar6);
    *(undefined8 *)(lVar1 + _DAT_112f396b8) = uVar5;
    lVar7 = *(long *)(lVar1 + _DAT_112f396a8);
    if (lVar7 != 0) {
      lVar8 = ((long *)(lVar1 + _DAT_112f396a8))[1];
      lVar2 = lVar7;
      func_0x000107c614f0(lVar7);
      pcVar9 = *(code **)(lVar8 + 0x48);
      func_0x000107c615f0(lVar7);
      (*pcVar9)(lVar2,lVar8);
      func_0x000107c615e8(lVar7);
    }
    lVar7 = lVar1 + _DAT_112f39620;
    func_0x000107c61618();
    if (lVar7 != 0) {
      func_0x0001041bb118(0);
      func_0x0001030b2924(lVar1 + _DAT_112f39628,puVar3,&SUB_100b91b84);
      func_0x0001041cdc38(0);
      func_0x000107c610f8();
      func_0x0001041cc9d4(puVar3);
      puVar4 = puVar3;
      func_0x0001041b9788();
      func_0x000107c61170(puVar3);
      uVar5 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2d0();
      func_0x000107c3d254(lVar7);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030b2804; end: 1030b2853;  */

void FUN_1030b2804(void)

{
  FUN_1030b1674();
  return;
}



/* Entry: 1030b2854; end: 1030b286f;  */

void FUN_1030b2854(long param_1,long param_2)

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



/* Entry: 1030b2870; end: 1030b2897;  */

void FUN_1030b2870(void)

{
  FUN_1030b1674();
  return;
}



/* Entry: 1030b2898; end: 1030b2967;  */

undefined8 FUN_1030b2898(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1030b2968; end: 1030b2a3f;  */

void FUN_1030b2968(void)

{
  FUN_1030b1674();
  return;
}



/* Entry: 1030b2a40; end: 1030b2abb;  */

undefined8 FUN_1030b2a40(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1030b2abc; end: 1030b2abf; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter webView:didFailNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100d33e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100d33e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d33e7c) */
/* WARNING: Removing unreachable block (ram,0x000100d33e8c) */

void FUN_1030b2abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030b2748(param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030b2ac0; end: 1030b2b47; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter webView:didFailProvisionalNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100d33e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100d33e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d33e7c) */
/* WARNING: Removing unreachable block (ram,0x000100d33e8c) */

void FUN_1030b2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030b2748(param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030b2b48; end: 1030b314f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b2b48(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  undefined8 param_11,undefined8 param_12,undefined8 param_13,long param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  long extraout_x8;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  lStack_108 = param_14;
  pcStack_118 = (code *)param_13;
  pcStack_110 = (code *)param_12;
  pcStack_128 = (char *)param_11;
  lVar2 = 0;
  uStack_e0 = param_4;
  lStack_d8 = param_7;
  puStack_d0 = param_1;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar2;
  func_0x000107c61174(param_2);
  func_0x0001041cc320(lVar2);
  uStack_f8 = *(undefined8 *)(param_3 + _DAT_11304a478);
  uStack_e8 = *(undefined8 *)(param_5 + _DAT_1130115c0);
  uVar4 = 0x112e0f668;
  func_0x0001000285a8(0x112e0f668,&UNK_10d9eaa70);
  uVar14 = *(undefined8 *)(param_6 + _DAT_112fbd138);
  uVar3 = uVar14;
  func_0x0001000bda74(uVar14,uVar4);
  uVar4 = 0;
  uStack_100 = uVar3;
  FUN_1030b4028();
  uStack_120 = uVar4;
  func_0x000107c613fc();
  uVar5 = 0;
  uStack_130 = uVar4;
  func_0x0001030b3c30();
  uVar13 = *(undefined8 *)(param_7 + _DAT_113067418);
  uVar4 = uVar13;
  uStack_138 = uVar5;
  func_0x000107c614f0(uVar13);
  uVar3 = uVar13;
  func_0x0001030b3fd8(uVar13,uVar5,uVar4);
  uVar17 = *(undefined8 *)(param_8 + _DAT_113043d30);
  uVar16 = *(undefined8 *)(param_3 + _DAT_11304a480);
  uVar15 = *(undefined8 *)(param_9 + _DAT_113010c08);
  uVar4 = *(undefined8 *)(param_9 + _DAT_113010c28);
  uVar5 = *(undefined8 *)(param_10 + _DAT_113068c28);
  uStack_140 = uVar3;
  func_0x000107c615f0();
  func_0x00010040de80();
  pcVar6 = pcStack_110;
  func_0x000107c4d80c();
  func_0x000107c61180();
  puVar7 = &UNK_1106084a0;
  func_0x000107c613fc(&UNK_1106084a0,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar16;
  *(undefined8 *)(puVar7 + 0x18) = uVar17;
  *(undefined8 *)(puVar7 + 0x20) = uVar15;
  *(undefined8 *)(puVar7 + 0x28) = uVar14;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  *(undefined8 *)(puVar7 + 0x38) = uVar13;
  *(code **)(puVar7 + 0x40) = pcVar6;
  *(undefined8 *)(puVar7 + 0x48) = uVar4;
  func_0x0001000285a8(0x112f39730,&UNK_10db848f0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar16);
  func_0x000107c6157c(uVar17);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar14);
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar4);
  pcVar6 = FUN_1030b32c0;
  func_0x0001000bdd8c(FUN_1030b32c0,puVar7);
  pcStack_110 = pcVar6;
  func_0x0001041e0570();
  pcStack_118 = pcVar6;
  func_0x0001000285a8(0x112f39738,&UNK_10db848f8);
  uVar4 = *(undefined8 *)(lStack_108 + _DAT_113011680);
  func_0x0001000bda74();
  pcVar8 = 
  "init(attachment:adConfigProvider:valdiRuntime:playableWebViewFactory:metadataCache:viewControllerBuilder:uiContainer:storeProductPresenter:skoPresenter:skOverlayLifecycleTracker:mainQueuePerformer:timeProvider:)"
  ;
  lStack_108 = uVar4;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126aeea8;
  pcStack_128 = pcVar8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = uStack_130;
  uVar4 = uStack_140;
  uStack_78 = uStack_120;
  ppuStack_70 = &PTR_DAT_110608660;
  auStack_90[0] = uStack_130;
  uStack_a0 = uStack_138;
  ppuStack_98 = &PTR_DAT_110608590;
  auStack_b8[0] = uStack_140;
  lVar9 = 0;
  FUN_1030afc34();
  lVar10 = lVar9;
  func_0x000107c610f8();
  func_0x000107c61614(lVar10 + _DAT_112f39620,0);
  lVar2 = _DAT_112f39688;
  puVar11 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar10 + lVar2) = puVar11;
  lVar2 = _DAT_112f39690;
  puVar11 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + lVar2) = puVar11;
  lVar2 = lVar10 + _DAT_112f39698;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  func_0x000107c61614(lVar10 + _DAT_112f396a0,0);
  lVar2 = lStack_f0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f396a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar10 + _DAT_112f396b0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112f396b8) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f396c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar10 + _DAT_112f396c8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112f396d0) = 0;
  *(undefined1 *)(lVar10 + _DAT_112f396d8) = 2;
  *(undefined8 *)(lVar10 + _DAT_112f396e0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112f396e8) = 0;
  FUN_1030b32d4(lStack_f0,lVar10 + _DAT_112f39628);
  uVar14 = uStack_e0;
  uVar13 = uStack_e8;
  uVar5 = uStack_f8;
  *(undefined8 *)(lVar10 + _DAT_112f39630) = uStack_f8;
  *(undefined8 *)(lVar10 + _DAT_112f39638) = uStack_e0;
  *(undefined8 *)(lVar10 + _DAT_112f39650) = uStack_e8;
  *(undefined8 *)(lVar10 + _DAT_112f39658) = uStack_100;
  func_0x0001030b3318(auStack_90,lVar10 + _DAT_112f39660);
  func_0x0001030b3318(auStack_b8,lVar10 + _DAT_112f39640);
  *(code **)(lVar10 + _DAT_112f39648) = pcStack_110;
  *(code **)(lVar10 + _DAT_112f39668) = pcStack_118;
  *(long *)(lVar10 + _DAT_112f39670) = lStack_108;
  *(char **)(lVar10 + _DAT_112f39678) = pcStack_128;
  *(undefined **)(lVar10 + _DAT_112f39680) = puVar7;
  puVar7 = PTR_s_init_1125d9248;
  lStack_c8 = lVar10;
  lStack_c0 = lVar9;
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar14);
  func_0x000107c6157c(uVar13);
  plVar12 = &lStack_c8;
  func_0x000107c61154(plVar12,puVar7);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x0001030b335c(lVar2);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  lVar2 = lStack_d8;
  lVar10 = _DAT_113067428;
  func_0x000107c61428(lStack_d8 + _DAT_113067428,auStack_90,0,0);
  lVar2 = lVar2 + lVar10;
  func_0x000107c61618();
  func_0x000107c61604((long)plVar12 + _DAT_112f39620,lVar2);
  func_0x000107c615e8(lVar2);
  *puStack_d0 = plVar12;
  return;
}



/* Entry: 1030b3150; end: 1030b32bf;  */

void FUN_1030b3150(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  func_0x000107c61174(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar2 = param_2;
  FUN_1030c1f08(param_2,puVar1,uStack_68,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uStack_68);
  puVar3 = PTR_PTR_1126acaa8;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_9);
  func_0x000107c4870c();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(puVar1);
  lVar4 = 0;
  FUN_1030b3d44();
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = puVar3;
  *param_1 = lVar4;
  param_1[1] = (long)&PTR_DAT_110608560;
  return;
}



/* Entry: 1030b32c0; end: 1030b32d3;  */

void FUN_1030b32c0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c453e4();
  func_0x000107c5c734(uVar6);
  func_0x000107c61180();
  func_0x000107c61174(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uVar6;
  FUN_1030c1f08(uVar6,puVar5,uStack_68,uVar9,uVar3,uVar1,uVar4,uVar2);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(uStack_68);
  puVar8 = PTR_PTR_1126acaa8;
  func_0x000107c610f8();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c4870c();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(puVar5);
  lVar11 = 0;
  FUN_1030b3d44();
  func_0x000107c613fc();
  *(undefined **)(lVar11 + 0x10) = puVar8;
  *param_1 = lVar11;
  param_1[1] = (long)&PTR_DAT_110608560;
  return;
}



/* Entry: 1030b32d4; end: 1030b3397;  */

undefined8 FUN_1030b32d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91b84();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1030b3398; end: 1030b354f;  */

undefined8
FUN_1030b3398(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b3550);
    (*pcVar1)();
  }
  puVar2 = &UNK_110608538;
  func_0x000107c613fc(&UNK_110608538,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    param_2 = uStack_70;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b34b4);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b3454);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 1030b3550; end: 1030b3a33;  */

void FUN_1030b3550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106084c8;
  func_0x000107c613fc(&UNK_1106084c8,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_1030b3a34,puVar1);
  return;
}



/* Entry: 1030b3a34; end: 1030b3a6f;  */

void FUN_1030b3a34(void)

{
  long unaff_x20;
  
  func_0x0001030b3684(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1030b3a70; end: 1030b3aaf;  */

undefined ** FUN_1030b3a70(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 1030b3ab0; end: 1030b3aeb;  */

void FUN_1030b3ab0(void)

{
  long unaff_x20;
  
  FUN_1030b2b48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1030b3aec; end: 1030b3c0b;  */

void FUN_1030b3aec(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = uVar5;
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,PTR_s_attachUI_completion__1125a0c10
                     );
  if ((uVar2 & 1) == 0) {
    func_0x000107c3e2c0(uVar5);
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    puVar3 = &UNK_110608610;
    func_0x000107c613fc(&UNK_110608610,0x20,7);
    *(code **)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    pcStack_60 = FUN_1030b3fac;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_110608628;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000100b64c10(param_2,param_3);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c3e2c4(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1030b3c0c; end: 1030b3c4f;  */

void FUN_1030b3c0c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030b3c50; end: 1030b3c5b;  */

void FUN_1030b3c50(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1030b3c5c; end: 1030b3c7b;  */

void FUN_1030b3c5c(void)

{
  FUN_1030b3aec();
  return;
}



/* Entry: 1030b3c7c; end: 1030b3d43;  */

void FUN_1030b3c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_1106085c0;
  func_0x000107c613fc(&UNK_1106085c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uStack_50 = 0x1030b4014;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1106085d8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1030b3d44; end: 1030b3d7f;  */

void FUN_1030b3d44(void)

{
  func_0x000107c61168(&PTR_PTR_112f39848);
  return;
}



/* Entry: 1030b3d80; end: 1030b3e17;  */

void FUN_1030b3d80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c53fcc(*(undefined8 *)(unaff_x20 + 0x10),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030b3e18; end: 1030b3f4b;  */

void FUN_1030b3e18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x0001018eb36c(param_2,puVar2);
  func_0x0001041ed328(0);
  func_0x000107c610f8();
  func_0x0001041ec3c8(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar3);
  (**(code **)(lVar1 + 8))(uVar3,lVar1);
  func_0x000107c4efe4(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1030b3f4c; end: 1030b3f63;  */

void FUN_1030b3f4c(void)

{
  long unaff_x20;
  
  func_0x000107c42094(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1030b3f64; end: 1030b3f7f;  */

void FUN_1030b3f64(long param_1,long param_2)

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



/* Entry: 1030b3f80; end: 1030b3fab;  */

void FUN_1030b3f80(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030b3fac; end: 1030b3faf;  */

void FUN_1030b3fac(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1030b3fb0; end: 1030b4007;  */

void FUN_1030b3fb0(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1030b4008; end: 1030b4027;  */

void FUN_1030b4008(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030b4028; end: 1030b4047;  */

void FUN_1030b4028(void)

{
  func_0x000107c61168(&PTR_PTR_112f39910);
  return;
}



/* Entry: 1030b4048; end: 1030b4193;  */

void FUN_1030b4048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1030b4448();
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x0001030b40bc(param_1,param_2,param_3);
  return;
}



/* Entry: 1030b4194; end: 1030b41eb; -[_TtC40SCAdAttachmentHandlerImplementationSwift34AdPlayableAttachmentViewController initWithCoder:] */

void FUN_1030b4194(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAdAttachmentHandlerImplementationSwift/AdPlayableAttachmentViewController.swift"
                      ,0x51,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b41ec);
  (*pcVar1)();
}



/* Entry: 1030b41ec; end: 1030b4377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b41ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR_PTR_1126a5e58;
  func_0x000107c610f8(PTR_PTR_1126a5e58);
  func_0x000107c49520();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b4370);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar3);
  func_0x000107c54b80(param_1,param_2,param_3,param_4,puVar2);
  func_0x000107c52ab8(puVar2);
  func_0x000107c61170(puVar2);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d89c();
    func_0x000107c61170(lVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c3ea80();
      func_0x000107c61180();
      func_0x000107c52b50(unaff_x20);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b4378);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b4374);
  (*pcVar1)();
}



/* Entry: 1030b4378; end: 1030b439f; -[_TtC40SCAdAttachmentHandlerImplementationSwift34AdPlayableAttachmentViewController viewDidLoad] */

void FUN_1030b4378(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b41ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b43a0; end: 1030b43ff; -[_TtC40SCAdAttachmentHandlerImplementationSwift34AdPlayableAttachmentViewController initWithNibName:bundle:] */

void FUN_1030b43a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdPlayableAttachmentViewController",
                      0x4b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b43cc);
  (*pcVar1)();
}



/* Entry: 1030b4400; end: 1030b4447; -[_TtC40SCAdAttachmentHandlerImplementationSwift34AdPlayableAttachmentViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b4400(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39968));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39970));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f39978));
  return;
}



/* Entry: 1030b4448; end: 1030b4467;  */

void FUN_1030b4448(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3a80);
  return;
}



/* Entry: 1030b4468; end: 1030b446f;  */

void FUN_1030b4468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1030b4470; end: 1030b44cf; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdSurveyAttachmentPresenter init] */

void FUN_1030b4470(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdSurveyAttachmentPresenter",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b449c);
  (*pcVar1)();
}



/* Entry: 1030b44d0; end: 1030b4527; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdSurveyAttachmentPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030b44d0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f399a8));
  func_0x0001000834e4(param_1 + _DAT_112f399b0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f399b8));
  param_1 = param_1 + _DAT_112f399c0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030b4528; end: 1030b4547;  */

void FUN_1030b4528(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3b50);
  return;
}



/* Entry: 1030b4548; end: 1030b4583; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdSurveyAttachmentPresenter canHandleAttachment:] */

bool FUN_1030b4548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 6;
}



/* Entry: 1030b4584; end: 1030b4593; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdSurveyAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1030b4584(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f399c8);
}



/* Entry: 1030b4594; end: 1030b48eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b4594(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_a0;
  *(undefined1 *)(unaff_x20 + _DAT_112f399c8) = 1;
  lVar9 = *(long *)(unaff_x20 + _DAT_112f399b8);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f399a8);
  func_0x000107c615f0(lVar9);
  func_0x000107c61174();
  pcVar1 = "init(valdiRuntime:surveyAttachment:delegate:mainQueuePerformer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1030b5b60();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar5 = _DAT_112f39a28;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar5) = puVar4;
  lVar5 = lVar3 + _DAT_112f39a30;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  *(undefined ***)(lVar5 + 8) = &PTR_DAT_110608670;
  func_0x000107c61604();
  puVar4 = PTR_PTR_1126cf5b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_112f39a20) = puVar4;
  plVar6 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  lVar5 = _DAT_112f39a20;
  uVar11 = *(undefined8 *)((long)plVar6 + _DAT_112f39a20);
  puVar4 = &UNK_1106086b8;
  func_0x000107c613fc(&UNK_1106086b8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar6);
  puVar7 = &UNK_1106086e0;
  func_0x000107c613fc(&UNK_1106086e0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar4;
  *(char **)(puVar7 + 0x18) = pcVar1;
  uStack_80 = 0x1030b4ce0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1030b4ce8;
  puStack_88 = &UNK_1106086f8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c61174(uVar11);
  func_0x000107c615f0(pcVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c56db0(uVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar11);
  if (lVar9 == 0) {
    func_0x000107c61170(lVar10);
    func_0x000107c61170(unaff_x20);
    func_0x000107c615e8(pcVar1);
  }
  else {
    uVar12 = *(undefined8 *)(lVar10 + _DAT_113068158);
    func_0x000107c615f0(lVar9);
    func_0x000107c61174(uVar12);
    uVar11 = uVar12;
    func_0x0001030b55d0();
    func_0x000107c61170(uVar12);
    uVar12 = *(undefined8 *)((long)plVar6 + lVar5);
    puVar4 = PTR_PTR_1126cf5b8;
    func_0x000107c610f8();
    func_0x000107c61174(uVar12);
    func_0x000107c49520();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(unaff_x20);
    func_0x000107c615e8(pcVar1);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c615ec(lVar9,2);
    uVar11 = *(undefined8 *)((long)plVar6 + _DAT_112f39a28);
    *(undefined **)((long)plVar6 + _DAT_112f39a28) = puVar4;
    func_0x000107c61170(uVar11);
  }
  lVar5 = unaff_x20 + _DAT_112f399b0;
  uVar11 = *(undefined8 *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar11);
  puVar4 = &UNK_110608690;
  func_0x000107c613fc(&UNK_110608690,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  pcVar13 = *(code **)(lVar3 + 0x10);
  func_0x000107c6157c(puVar4);
  (*pcVar13)(plVar6,0x1030b4d60,puVar4,uVar11,lVar3);
  func_0x000107c61170(plVar6);
  func_0x000107c61578(puVar4,2);
  return;
}



/* Entry: 1030b48ec; end: 1030b49cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b48ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f399c0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001041bb118(0);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f399a8);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001041b96d4();
      func_0x000107c61170(uVar2);
      uVar2 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2a0();
      func_0x000107c3d254(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030b49d0; end: 1030b49f7; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdSurveyAttachmentPresenter presentAttachment] */

void FUN_1030b49d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b4594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b49f8; end: 1030b4b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b49f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f399c0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001041bb118(0);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f399a8);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001041b96d4();
      func_0x000107c61170(uVar2);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      uVar2 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2a0();
      func_0x000107c3d24c(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030b4b08; end: 1030b4cc3; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdSurveyAttachmentPresenter dismissAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b4b08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  
  *(undefined1 *)(param_1 + _DAT_112f399c8) = 0;
  lVar1 = param_1 + _DAT_112f399b0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  puVar4 = &UNK_110608690;
  func_0x000107c613fc(&UNK_110608690,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  pcVar5 = *(code **)(lVar3 + 0x18);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar4);
  (*pcVar5)(FUN_1030b4dac,puVar4,uVar2,lVar3);
  func_0x000107c61578(puVar4,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b4cc4; end: 1030b4ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b4cc4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112f399a8) + _DAT_113068160);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + _DAT_113067bf8);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 != (code *)0x0) {
      uVar5 = puVar1[1];
      func_0x000107c6157c(uVar5);
      (*pcVar6)(param_1);
      func_0x0001030b4cd0(pcVar6,uVar5);
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f399c8) = 0;
  lVar4 = unaff_x20 + _DAT_112f399b0;
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  lVar2 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar5);
  puVar3 = &UNK_110608690;
  func_0x000107c613fc(&UNK_110608690,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar6 = *(code **)(lVar2 + 0x18);
  func_0x000107c6157c(puVar3);
  (*pcVar6)(0x1030b4cc8,puVar3,uVar5,lVar2);
  func_0x000107c61578(puVar3,2);
  return;
}



/* Entry: 1030b4ce8; end: 1030b4d43;  */

void FUN_1030b4ce8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1030b4d68(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030b4d44; end: 1030b4d67;  */

void FUN_1030b4d44(long param_1,long param_2)

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



/* Entry: 1030b4d68; end: 1030b4dab;  */

void FUN_1030b4d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efcdd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ac088;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112efcdd8 = puVar1;
  return;
}



/* Entry: 1030b4dac; end: 1030b4daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b4dac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f399c0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f399a8);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b96d4();
      func_0x000107c61170(uVar3);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2a0();
      func_0x000107c3d24c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030b4db0; end: 1030b4e2f;  */

void FUN_1030b4db0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_110608738;
  func_0x000107c613fc(&UNK_110608738,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030b5090,puVar1);
  return;
}



/* Entry: 1030b4e30; end: 1030b508f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b4e30(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  func_0x000100083b20(alStack_78);
  lVar4 = alStack_78[0];
  if (*(char *)(alStack_78[0] + _DAT_113067438) == '\x01') {
    lVar11 = *(long *)(*(long *)(alStack_78[0] + _DAT_113067410) + _DAT_113067d50);
    if (lVar11 != 0) {
      uVar13 = *(undefined8 *)(alStack_78[0] + _DAT_113067418);
      func_0x000107c615f0(uVar13);
      func_0x000107c61174();
      func_0x000100083b20(alStack_78);
      lVar12 = alStack_78[0];
      func_0x000107c5dbd4();
      func_0x000107c61180();
      func_0x000107c61170(alStack_78[0]);
      lVar5 = lVar12;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      if (lVar5 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar5;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
      }
      lVar5 = _DAT_113067428;
      func_0x000107c61428(lVar4 + _DAT_113067428,alStack_78,0,0);
      lVar5 = lVar4 + lVar5;
      func_0x000107c61618(lVar5);
      lVar6 = 0;
      FUN_1030b4528();
      lVar7 = lVar6;
      func_0x000107c610f8();
      lVar3 = _DAT_112f399c0;
      func_0x000107c61614(lVar7 + _DAT_112f399c0,0);
      *(undefined1 *)(lVar7 + _DAT_112f399c8) = 0;
      *(long *)(lVar7 + _DAT_112f399a8) = lVar11;
      uVar8 = 0;
      func_0x0001030b3c30();
      uVar9 = uVar13;
      func_0x000107c614f0(uVar13);
      uVar10 = uVar13;
      func_0x0001030b3fd8(uVar13,uVar8,uVar9);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f399b0);
      puVar1[3] = uVar8;
      puVar1[4] = &PTR_DAT_110608590;
      *puVar1 = uVar10;
      *(long *)(lVar7 + _DAT_112f399b8) = lVar12;
      func_0x000107c61604(lVar7 + lVar3,lVar5);
      puVar2 = PTR_s_init_1125d9248;
      lStack_88 = lVar7;
      lStack_80 = lVar6;
      func_0x000107c615f0(uVar13);
      func_0x000107c61174(lVar11);
      func_0x000107c615f0(lVar12);
      plVar14 = &lStack_88;
      func_0x000107c61154(plVar14,puVar2);
      func_0x000107c61170(lVar11);
      func_0x000107c615e8(uVar13);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar4);
      goto LAB_1030b506c;
    }
  }
  func_0x000107c61170(alStack_78[0]);
  plVar14 = (long *)0x0;
LAB_1030b506c:
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1030b5090; end: 1030b50d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b5090(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long lStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  func_0x000100083b20(alStack_78,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar4 = alStack_78[0];
  if (*(char *)(alStack_78[0] + _DAT_113067438) == '\x01') {
    lVar11 = *(long *)(*(long *)(alStack_78[0] + _DAT_113067410) + _DAT_113067d50);
    if (lVar11 != 0) {
      uVar13 = *(undefined8 *)(alStack_78[0] + _DAT_113067418);
      func_0x000107c615f0(uVar13);
      func_0x000107c61174();
      func_0x000100083b20(alStack_78);
      lVar12 = alStack_78[0];
      func_0x000107c5dbd4();
      func_0x000107c61180();
      func_0x000107c61170(alStack_78[0]);
      lVar5 = lVar12;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      if (lVar5 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar5;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
      }
      lVar5 = _DAT_113067428;
      func_0x000107c61428(lVar4 + _DAT_113067428,alStack_78,0,0);
      lVar5 = lVar4 + lVar5;
      func_0x000107c61618(lVar5);
      lVar6 = 0;
      FUN_1030b4528();
      lVar7 = lVar6;
      func_0x000107c610f8();
      lVar3 = _DAT_112f399c0;
      func_0x000107c61614(lVar7 + _DAT_112f399c0,0);
      *(undefined1 *)(lVar7 + _DAT_112f399c8) = 0;
      *(long *)(lVar7 + _DAT_112f399a8) = lVar11;
      uVar8 = 0;
      func_0x0001030b3c30();
      uVar9 = uVar13;
      func_0x000107c614f0(uVar13);
      uVar10 = uVar13;
      func_0x0001030b3fd8(uVar13,uVar8,uVar9);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f399b0);
      puVar1[3] = uVar8;
      puVar1[4] = &PTR_DAT_110608590;
      *puVar1 = uVar10;
      *(long *)(lVar7 + _DAT_112f399b8) = lVar12;
      func_0x000107c61604(lVar7 + lVar3,lVar5);
      puVar2 = PTR_s_init_1125d9248;
      lStack_88 = lVar7;
      lStack_80 = lVar6;
      func_0x000107c615f0(uVar13);
      func_0x000107c61174(lVar11);
      func_0x000107c615f0(lVar12);
      plVar14 = &lStack_88;
      func_0x000107c61154(plVar14,puVar2);
      func_0x000107c61170(lVar11);
      func_0x000107c615e8(uVar13);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar4);
      goto LAB_1030b506c;
    }
  }
  func_0x000107c61170(alStack_78[0]);
  plVar14 = (long *)0x0;
LAB_1030b506c:
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1030b50d8; end: 1030b51cf;  */

void FUN_1030b50d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1106087b8;
    func_0x000107c613fc(&UNK_1106087b8,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    pcStack_68 = FUN_1030b6dbc;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1106087d0;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(param_3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
  }
  return;
}


