/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f214a0; end: 102f214a7;  */

undefined8 FUN_102f214a0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f214a8; end: 102f2151b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f214a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f288c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f288c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f288d0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f2151c; end: 102f215ab; -[SCAdReminderAttachmentHandler initWithAttachmentScopeExposer:attachmentScopeBuilder:renderDataParserServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2151c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f288c0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f288c8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f288d0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102f215ac; end: 102f21883;  */

/* WARNING: Possible PIC construction at 0x000102f21678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f216c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f217dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f217ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2183c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f21818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f21840) */
/* WARNING: Removing unreachable block (ram,0x000102f217f0) */
/* WARNING: Removing unreachable block (ram,0x000102f217e0) */
/* WARNING: Removing unreachable block (ram,0x000102f216c8) */
/* WARNING: Removing unreachable block (ram,0x000102f21838) */
/* WARNING: Removing unreachable block (ram,0x000102f21700) */
/* WARNING: Removing unreachable block (ram,0x000102f2167c) */
/* WARNING: Removing unreachable block (ram,0x000102f217fc) */
/* WARNING: Removing unreachable block (ram,0x000102f21684) */
/* WARNING: Removing unreachable block (ram,0x000102f21830) */
/* WARNING: Removing unreachable block (ram,0x000102f21844) */
/* WARNING: Removing unreachable block (ram,0x000102f21698) */
/* WARNING: Removing unreachable block (ram,0x000102f216b0) */
/* WARNING: Removing unreachable block (ram,0x000102f2181c) */
/* WARNING: Removing unreachable block (ram,0x000102f21848) */
/* WARNING: Removing unreachable block (ram,0x000102f21860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f215ac(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f288c0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    FUN_102f21884();
    func_0x000107c614e8();
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c4e380(lVar2);
    func_0x000107c61180();
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    func_0x000107c60e78();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f21884);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102f21884; end: 102f218c7;  */

void FUN_102f21884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f288d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ac1b0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f288d8 = puVar1;
  return;
}



/* Entry: 102f218c8; end: 102f219bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f218c8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = param_1;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  uVar3 = 0;
  func_0x000103e04860(0);
  func_0x000107c610f8();
  func_0x000103e044dc(lVar4,param_2,0,0,10,0,0,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f288d0);
  func_0x000107c3ec40();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4e374(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f219c0);
  (*pcVar1)();
}



/* Entry: 102f219c0; end: 102f21aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f219c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f288c8);
    uVar1 = uVar3;
    func_0x000107c614f0(uVar3);
    func_0x000107c615f0(uVar3);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x00010418bbbc(param_2,param_3,param_4,param_1,0,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112f288c0));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102f21ab0; end: 102f21ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f21ab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112f288c8);
    uVar4 = uVar7;
    func_0x000107c614f0(uVar7);
    func_0x000107c615f0(uVar7);
    lVar5 = lVar3;
    func_0x000107c61174();
    func_0x00010418bbbc(uVar6,uVar1,uVar2,lVar3,0,uVar4);
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112f288c0));
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 102f21ad8; end: 102f21b93; -[SCAdReminderAttachmentHandler showAttachmentWithCountdownAdMetadata:uiContainer:context:] */

/* WARNING: Possible PIC construction at 0x000102f21b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f21b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f21b44) */
/* WARNING: Removing unreachable block (ram,0x000102f21b78) */

void FUN_102f21ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102f21b94; end: 102f21bf3; -[SCAdReminderAttachmentHandler init] */

void FUN_102f21b94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdExternalUtils.AdReminderAttachmentHandler",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f21bc0);
  (*pcVar1)();
}



/* Entry: 102f21bf4; end: 102f21c3b; -[SCAdReminderAttachmentHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f21c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f21c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f21bf4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f288c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f288c8));
  return;
}



/* Entry: 102f21c3c; end: 102f21c3f; -[SCAdReminderAttachmentHandler adAttachmentHandlerDidPresent:] */

void FUN_102f21c3c(void)

{
  return;
}



/* Entry: 102f21c40; end: 102f21c43; -[SCAdReminderAttachmentHandler adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102f21c40(void)

{
  return;
}



/* Entry: 102f21c44; end: 102f21c47; -[SCAdReminderAttachmentHandler adAttachmentHandlerViewDidFullyAppear:] */

void FUN_102f21c44(void)

{
  return;
}



/* Entry: 102f21c48; end: 102f21c4b; -[SCAdReminderAttachmentHandler adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_102f21c48(void)

{
  return;
}



/* Entry: 102f21c4c; end: 102f21c4f; -[SCAdReminderAttachmentHandler adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102f21c4c(void)

{
  return;
}



/* Entry: 102f21c50; end: 102f21c93;  */

void FUN_102f21c50(long param_1)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    func_0x000107c614cc(param_1,auStack_28,auStack_40);
    func_0x000107c60640(uStack_38,uStack_30);
    func_0x000107c6142c(uStack_30);
  }
  return;
}



/* Entry: 102f21c94; end: 102f21cfb; -[SCAdReminderAttachmentHandler adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000102f21cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f21ce0) */

void FUN_102f21c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102f21cfc(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102f21cfc; end: 102f21ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f21cfc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar8 = *(long *)(unaff_x20 + _DAT_112f288c0);
  lVar2 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar8);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar3 = &UNK_1105e8e28;
  func_0x000107c613fc(&UNK_1105e8e28,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_1105e8e50;
  func_0x000107c613fc(&UNK_1105e8e50,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102f21ee8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102f21eec;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x102456760;
  puStack_78 = &UNK_1105e8e68;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1105e8ea0;
  func_0x000107c613fc(&UNK_1105e8ea0,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar6 = &UNK_1105e8ec8;
  func_0x000107c613fc(&UNK_1105e8ec8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102f21f0c;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  pcStack_70 = (code *)0x102f21f24;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_1105e8ee0;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61574(puVar6);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102f21ec8; end: 102f21ee7;  */

void FUN_102f21ec8(void)

{
  func_0x000107c61168(&PTR_PTR_1128abd48);
  return;
}



/* Entry: 102f21ee8; end: 102f21eeb;  */

void FUN_102f21ee8(void)

{
  return;
}



/* Entry: 102f21eec; end: 102f21f0b;  */

void FUN_102f21eec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102f21f0c; end: 102f21f27;  */

void FUN_102f21f0c(long param_1)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    func_0x000107c614cc(param_1,auStack_28,auStack_40);
    func_0x000107c60640(uStack_38,uStack_30);
    func_0x000107c6142c(uStack_30);
  }
  return;
}



/* Entry: 102f21f28; end: 102f2247b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102f21f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 extraout_x13;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_d0 [2];
  undefined8 auStack_c0 [3];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  ulong uStack_98;
  undefined8 uStack_90;
  uint uStack_84;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar11 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_68 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar10 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar10 - extraout_x12_00) - extraout_x12_01;
  lVar8 = *(long *)(unaff_x20 + _DAT_113091020);
  if (lVar8 != 0) {
    uStack_78 = extraout_x13;
    lStack_70 = lVar2;
    func_0x0001041bd148(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    *(undefined8 *)(lVar12 + -0x20) = 0;
    *(undefined8 *)(lVar12 + -0x18) = 0;
    *(undefined8 *)(lVar12 + -0x10) = 0;
    *(undefined8 *)(lVar12 + -0x30) = param_3;
    *(undefined8 *)(lVar12 + -0x28) = param_4;
    func_0x0001041bd090(param_1,param_2,0,0,0,0,0x14,10);
    lVar2 = _DAT_113090ca8;
    lVar5 = *(long *)(lVar8 + _DAT_113090ca8);
    lVar3 = *(long *)(lVar5 + _DAT_113090ce8);
    if ((lVar3 != 0) && (*(long *)(lVar3 + _DAT_113091338) != 0)) {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + _DAT_113091338) + _DAT_113090a70);
      lVar6 = puVar1[1];
      if (lVar6 != 0) {
        uVar9 = *puVar1;
        lStack_80 = lVar8;
        func_0x000107c61174();
        func_0x000107c61434(lVar6);
        func_0x000107c5edd0(lVar13,uVar9,lVar6);
        func_0x000107c6142c(lVar6);
        lVar5 = lStack_68;
        lVar8 = lStack_70;
        lVar6 = lVar13;
        (**(code **)(lStack_68 + 0x30))(lVar13,1,lStack_70);
        if ((int)lVar6 != 1) {
          (**(code **)(lVar5 + 0x20))(lVar12,lVar13,lVar8);
          uVar7 = *(undefined8 *)(lVar3 + _DAT_1130913a0);
          uStack_84 = (uint)*(byte *)(lVar3 + _DAT_1130913c8);
          uStack_90 = *(undefined8 *)(lVar3 + _DAT_1130913b0);
          uVar9 = ((undefined8 *)(lVar3 + _DAT_1130913b0))[1];
          uStack_9c = (uint)*(byte *)(lVar3 + _DAT_1130913e8);
          uStack_98 = (ulong)(*(int *)(lVar3 + _DAT_113091358) == 3);
          (**(code **)(lVar5 + 0x10))(uStack_78,lVar12,lVar8);
          func_0x0001041c0a38(0);
          func_0x000107c610f8();
          func_0x000107c61174(uVar7);
          func_0x000107c61434(uVar9);
          func_0x000107c61174(param_1);
          *(char *)(lVar12 + -8) = (char)uStack_9c;
          *(undefined8 *)(lVar12 + -0x10) = uVar9;
          *(undefined8 *)(lVar12 + -0x18) = uStack_90;
          *(char *)(lVar12 + -0x20) = (char)uStack_84;
          uVar9 = uStack_78;
          func_0x0001041c023c(uStack_78,uStack_98,0,0,param_1,uVar7,0,0);
          func_0x0001041bb118(0);
          uVar7 = uVar9;
          func_0x0001041b95a8(uVar9);
          func_0x000107c61170(param_1);
          func_0x000107c61170(lStack_80);
          func_0x000107c61170(uVar9);
          (**(code **)(lVar5 + 8))(lVar12,lVar8);
          func_0x000107c61170(lVar3);
          return uVar7;
        }
        func_0x000107c61170(lVar3);
        func_0x0001000293e4(lVar13);
        lVar5 = *(long *)(lStack_80 + lVar2);
        lVar8 = lStack_80;
      }
    }
    lVar2 = *(long *)(lVar5 + _DAT_113090ce0);
    if (lVar2 != 0) {
      func_0x000107c61174();
      lVar12 = lVar2;
      FUN_102f22808();
      if (lVar12 != 0) {
        uVar9 = *(undefined8 *)(lVar2 + _DAT_11308fe10);
        uVar7 = ((undefined8 *)(lVar2 + _DAT_11308fe10))[1];
        func_0x000107c61434(uVar7);
        func_0x000107c5edd0(puVar11,uVar9,uVar7);
        func_0x000107c6142c(uVar7);
        lVar3 = lStack_68;
        lVar13 = lStack_70;
        puVar4 = puVar11;
        (**(code **)(lStack_68 + 0x30))(puVar11,1,lStack_70);
        if ((int)puVar4 == 1) {
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar12);
          func_0x000107c61170(param_1);
          func_0x0001000293e4(puVar11);
          return 0;
        }
        (**(code **)(lVar3 + 0x20))(lVar10,puVar11,lVar13);
        (**(code **)(lVar3 + 0x10))(uStack_78,lVar10,lVar13);
        func_0x0001041c2520(0);
        func_0x000107c610f8();
        func_0x000107c61174(param_1);
        lVar13 = lVar12;
        func_0x000107c61174(lVar12);
        uVar9 = uStack_78;
        func_0x0001041c1cf8(uStack_78,lVar12,0,param_1);
        func_0x0001041bb118(0);
        uVar7 = uVar9;
        func_0x0001041b9620(uVar9);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar9);
        (**(code **)(lVar3 + 8))(lVar10,lStack_70);
        return uVar7;
      }
      func_0x000107c61170(lVar8);
      lVar8 = lVar2;
    }
    func_0x000107c61170(lVar8);
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 102f2247c; end: 102f22807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_102f2247c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbStack_50;
  ulong uStack_48;
  
  pbVar12 = (byte *)((undefined8 *)(param_1 + _DAT_11308fe20))[1];
  if (pbVar12 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbVar9 = *(byte **)(param_1 + _DAT_11308fe20);
  pbVar5 = (byte *)((ulong)pbVar9 & 0xffffffffffff);
  pbVar6 = (byte *)((ulong)pbVar12 >> 0x38 & 0xf);
  pbVar10 = pbVar5;
  if (((ulong)pbVar12 & 0x2000000000000000) != 0) {
    pbVar10 = pbVar6;
  }
  if (pbVar10 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar12 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar9 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar9 = (byte *)(((ulong)pbVar12 & 0xfffffffffffffff) + 0x20);
        pbVar12 = pbVar5;
      }
      if (*pbVar9 == 0x2b) {
        pbVar6 = pbVar12 + -1;
        if ((long)pbVar12 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f22804);
          (*pcVar4)();
        }
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar10 = (byte *)0x0;
        do {
          pbVar9 = pbVar9 + 1;
          if (9 < *pbVar9 - 0x30) {
            return (byte *)0x0;
          }
          lVar8 = (long)pbVar10 * 10;
          if (SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar8 >> 0x3f) {
            return (byte *)0x0;
          }
          uVar1 = (ulong)(byte)(*pbVar9 - 0x30);
          pbVar10 = (byte *)(lVar8 + uVar1);
          if (SCARRY8(lVar8,uVar1)) {
            return (byte *)0x0;
          }
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      else if (*pbVar9 == 0x2d) {
        pbVar6 = pbVar12 + -1;
        if ((long)pbVar12 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f227fc);
          (*pcVar4)();
        }
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar10 = (byte *)0x0;
        do {
          pbVar9 = pbVar9 + 1;
          if (9 < *pbVar9 - 0x30) {
            return (byte *)0x0;
          }
          lVar8 = (long)pbVar10 * 10;
          if (SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar8 >> 0x3f) {
            return (byte *)0x0;
          }
          uVar1 = (ulong)(byte)(*pbVar9 - 0x30);
          pbVar10 = (byte *)(lVar8 - uVar1);
          if (SBORROW8(lVar8,uVar1)) {
            return (byte *)0x0;
          }
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      else {
        if (pbVar12 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar10 = (byte *)0x0;
        pbVar6 = pbVar9;
        while (pbVar6 != (byte *)0x0) {
          if (9 < *pbVar9 - 0x30) {
            return (byte *)0x0;
          }
          lVar8 = (long)pbVar10 * 10;
          if (SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar8 >> 0x3f) {
            return (byte *)0x0;
          }
          uVar1 = (ulong)(byte)(*pbVar9 - 0x30);
          pbVar10 = (byte *)(lVar8 + uVar1);
          if (SCARRY8(lVar8,uVar1)) {
            return (byte *)0x0;
          }
          pbVar12 = pbVar12 + -1;
          pbVar9 = pbVar9 + 1;
          pbVar6 = pbVar12;
        }
      }
      goto LAB_102f2270c;
    }
    pbStack_50 = pbVar9;
    uStack_48 = (ulong)pbVar12 & 0xffffffffffffff;
    uVar11 = (uint)pbVar9 & 0xff;
    if (uVar11 == 0x2b) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f22808);
        (*pcVar4)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) goto LAB_102f226f0;
      pbVar10 = (byte *)0x0;
      pbVar12 = (byte *)((ulong)&pbStack_50 | 1);
      do {
        if (((9 < *pbVar12 - 0x30) ||
            (lVar8 = (long)pbVar10 * 10,
            SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), pbVar10 = (byte *)(lVar8 + uVar1),
           SCARRY8(lVar8,uVar1))) goto LAB_102f226f0;
        uVar11 = 0;
        pbVar6 = pbVar6 + -1;
        pbVar12 = pbVar12 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
    else if (uVar11 == 0x2d) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f22800);
        (*pcVar4)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) {
LAB_102f226f0:
        uVar11 = 1;
        pbVar10 = (byte *)0x0;
      }
      else {
        pbVar10 = (byte *)0x0;
        pbVar12 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar12 - 0x30) ||
              (lVar8 = (long)pbVar10 * 10,
              SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), pbVar10 = (byte *)(lVar8 - uVar1),
             SBORROW8(lVar8,uVar1))) goto LAB_102f226f0;
          uVar11 = 0;
          pbVar6 = pbVar6 + -1;
          pbVar12 = pbVar12 + 1;
        } while (pbVar6 != (byte *)0x0);
      }
    }
    else {
      if (pbVar6 == (byte *)0x0) goto LAB_102f226f0;
      pbVar10 = (byte *)0x0;
      ppbVar7 = &pbStack_50;
      do {
        if (((9 < *(byte *)ppbVar7 - 0x30) ||
            (lVar8 = (long)pbVar10 * 10,
            SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*(byte *)ppbVar7 - 0x30), pbVar10 = (byte *)(lVar8 + uVar1),
           SCARRY8(lVar8,uVar1))) goto LAB_102f226f0;
        uVar11 = 0;
        pbVar6 = pbVar6 + -1;
        ppbVar7 = (byte **)((long)ppbVar7 + 1);
      } while (pbVar6 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(pbVar12);
    pbVar10 = pbVar12;
    func_0x000100edba6c(pbVar9,pbVar12,10);
    uVar11 = (uint)pbVar10;
    func_0x000107c6142c(pbVar12);
    pbVar10 = pbVar9;
  }
  if ((uVar11 & 0xff) == 1) {
    return (byte *)0x0;
  }
LAB_102f2270c:
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe40);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11308fe40))[1];
  func_0x0001041ca2d4(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000107c61174(param_2);
  func_0x0001041c9b54(pbVar10,uVar2,uVar3,0,0,0,param_2,0);
  func_0x0001041c32b4(0);
  pbVar12 = pbVar10;
  func_0x0001041c2da0(pbVar10);
  func_0x000107c61170(pbVar10);
  return pbVar12;
}



/* Entry: 102f22808; end: 102f22b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_102f22808(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  undefined8 auStack_88 [2];
  undefined1 auStack_78 [8];
  byte abStack_70 [8];
  long lStack_68;
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  pbVar8 = abStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar13 = pbVar8 + -extraout_x12;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = (long)pbVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar10 = (byte *)(lVar11 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)pbVar10 - extraout_x12_01;
  lStack_68 = *(long *)(param_1 + _DAT_11308fe30);
  if (lStack_68 < 2) {
    if (lStack_68 == 0) {
      return (byte *)0x0;
    }
    if (lStack_68 != 1) {
LAB_102f22b70:
      func_0x000107c60614(&UNK_110797578,&lStack_68,&UNK_110797578,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102f22b94);
      (*pcVar7)();
    }
    if (((undefined8 *)(param_1 + _DAT_11308fe28))[1] == 0) {
      return (byte *)0x0;
    }
    func_0x000107c5edd0(pbVar13,*(undefined8 *)(param_1 + _DAT_11308fe28));
    pbVar8 = pbVar13;
    (**(code **)(lVar14 + 0x30))(pbVar13,1,lVar4);
    if ((int)pbVar8 != 1) {
      (**(code **)(lVar14 + 0x20))(lVar12,pbVar13,lVar4);
      (**(code **)(lVar14 + 0x10))(pbVar10,lVar12,lVar4);
      func_0x0001041c0a38(0);
      func_0x000107c610f8();
      func_0x000107c61174(param_2);
      *(undefined8 *)(lVar12 + -0x18) = 0;
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined1 *)(lVar12 + -8) = 0;
      *(undefined1 *)(lVar12 + -0x20) = 0;
      func_0x0001041c023c(pbVar10,0,0,0,param_2,0,0,0);
      func_0x0001041c32b4(0);
      pbVar13 = pbVar10;
      func_0x0001041c2cbc(pbVar10);
      func_0x000107c61170(pbVar10);
      pcVar7 = *(code **)(lVar14 + 8);
      lVar11 = lVar12;
LAB_102f22b44:
      (*pcVar7)(lVar11,lVar4);
      return pbVar13;
    }
LAB_102f229e4:
    func_0x0001000293e4(pbVar13);
    return (byte *)0x0;
  }
  if (lStack_68 != 2) {
    if (lStack_68 != 3) goto LAB_102f22b70;
    if (((undefined8 *)(param_1 + _DAT_11308fe28))[1] == 0) {
      return (byte *)0x0;
    }
    func_0x000107c5edd0(pbVar8,*(undefined8 *)(param_1 + _DAT_11308fe28));
    pbVar6 = pbVar8;
    (**(code **)(lVar14 + 0x30))(pbVar8,1,lVar4);
    pbVar13 = pbVar8;
    if ((int)pbVar6 != 1) {
      (**(code **)(lVar14 + 0x20))(lVar11,pbVar8,lVar4);
      (**(code **)(lVar14 + 0x10))(pbVar10,lVar11,lVar4);
      func_0x0001041c0a38(0);
      func_0x000107c610f8();
      func_0x000107c61174(param_2);
      *(undefined8 *)(lVar12 + -0x18) = 0;
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined1 *)(lVar12 + -8) = 0;
      *(undefined1 *)(lVar12 + -0x20) = 0;
      func_0x0001041c023c(pbVar10,1,0,0,param_2,0,0,0);
      func_0x0001041c32b4(0);
      pbVar13 = pbVar10;
      func_0x0001041c2cbc(pbVar10);
      func_0x000107c61170(pbVar10);
      pcVar7 = *(code **)(lVar14 + 8);
      goto LAB_102f22b44;
    }
    goto LAB_102f229e4;
  }
  pbVar13 = (byte *)((undefined8 *)(param_1 + _DAT_11308fe20))[1];
  if (pbVar13 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(param_1 + _DAT_11308fe20);
  pbVar5 = (byte *)((ulong)pbVar10 & 0xffffffffffff);
  pbVar6 = (byte *)((ulong)pbVar13 >> 0x38 & 0xf);
  pbVar8 = pbVar5;
  if (((ulong)pbVar13 & 0x2000000000000000) != 0) {
    pbVar8 = pbVar6;
  }
  if (pbVar8 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar13 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar10 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar10 = (byte *)(((ulong)pbVar13 & 0xfffffffffffffff) + 0x20);
        pbVar13 = pbVar5;
      }
      if (*pbVar10 == 0x2b) {
        pbVar6 = pbVar13 + -1;
        if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102f22804);
          (*pcVar7)();
        }
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar8 = (byte *)0x0;
        do {
          pbVar10 = pbVar10 + 1;
          if (9 < *pbVar10 - 0x30) {
            return (byte *)0x0;
          }
          lVar11 = (long)pbVar8 * 10;
          if (SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar11 >> 0x3f) {
            return (byte *)0x0;
          }
          uVar1 = (ulong)(byte)(*pbVar10 - 0x30);
          pbVar8 = (byte *)(lVar11 + uVar1);
          if (SCARRY8(lVar11,uVar1)) {
            return (byte *)0x0;
          }
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      else if (*pbVar10 == 0x2d) {
        pbVar6 = pbVar13 + -1;
        if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102f227fc);
          (*pcVar7)();
        }
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar8 = (byte *)0x0;
        do {
          pbVar10 = pbVar10 + 1;
          if (9 < *pbVar10 - 0x30) {
            return (byte *)0x0;
          }
          lVar11 = (long)pbVar8 * 10;
          if (SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar11 >> 0x3f) {
            return (byte *)0x0;
          }
          uVar1 = (ulong)(byte)(*pbVar10 - 0x30);
          pbVar8 = (byte *)(lVar11 - uVar1);
          if (SBORROW8(lVar11,uVar1)) {
            return (byte *)0x0;
          }
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      else {
        if (pbVar13 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar8 = (byte *)0x0;
        pbVar6 = pbVar10;
        while (pbVar6 != (byte *)0x0) {
          if (9 < *pbVar10 - 0x30) {
            return (byte *)0x0;
          }
          lVar11 = (long)pbVar8 * 10;
          if (SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar11 >> 0x3f) {
            return (byte *)0x0;
          }
          uVar1 = (ulong)(byte)(*pbVar10 - 0x30);
          pbVar8 = (byte *)(lVar11 + uVar1);
          if (SCARRY8(lVar11,uVar1)) {
            return (byte *)0x0;
          }
          pbVar13 = pbVar13 + -1;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar13;
        }
      }
      goto LAB_102f2270c;
    }
    uVar9 = (uint)pbVar10 & 0xff;
    if (uVar9 == 0x2b) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102f22808);
        (*pcVar7)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) goto LAB_102f226f0;
      pbVar8 = (byte *)0x0;
      pbVar13 = (byte *)((ulong)&stack0xffffffffffffffb0 | 1);
      do {
        if (((9 < *pbVar13 - 0x30) ||
            (lVar11 = (long)pbVar8 * 10,
            SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar13 - 0x30), pbVar8 = (byte *)(lVar11 + uVar1),
           SCARRY8(lVar11,uVar1))) goto LAB_102f226f0;
        uVar9 = 0;
        pbVar6 = pbVar6 + -1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
    else if (uVar9 == 0x2d) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102f22800);
        (*pcVar7)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) {
LAB_102f226f0:
        uVar9 = 1;
        pbVar8 = (byte *)0x0;
      }
      else {
        pbVar8 = (byte *)0x0;
        pbVar13 = (byte *)((ulong)&stack0xffffffffffffffb0 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar11 = (long)pbVar8 * 10,
              SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar13 - 0x30), pbVar8 = (byte *)(lVar11 - uVar1),
             SBORROW8(lVar11,uVar1))) goto LAB_102f226f0;
          uVar9 = 0;
          pbVar6 = pbVar6 + -1;
          pbVar13 = pbVar13 + 1;
        } while (pbVar6 != (byte *)0x0);
      }
    }
    else {
      if (pbVar6 == (byte *)0x0) goto LAB_102f226f0;
      pbVar8 = (byte *)0x0;
      pbVar13 = &stack0xffffffffffffffb0;
      do {
        if (((9 < *pbVar13 - 0x30) ||
            (lVar11 = (long)pbVar8 * 10,
            SUB168(SEXT816((long)pbVar8) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar13 - 0x30), pbVar8 = (byte *)(lVar11 + uVar1),
           SCARRY8(lVar11,uVar1))) goto LAB_102f226f0;
        uVar9 = 0;
        pbVar6 = pbVar6 + -1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(pbVar13);
    pbVar8 = pbVar13;
    func_0x000100edba6c(pbVar10,pbVar13,10);
    uVar9 = (uint)pbVar8;
    func_0x000107c6142c(pbVar13);
    pbVar8 = pbVar10;
  }
  if ((uVar9 & 0xff) == 1) {
    return (byte *)0x0;
  }
LAB_102f2270c:
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe40);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11308fe40))[1];
  func_0x0001041ca2d4(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000107c61174(param_2);
  func_0x0001041c9b54(pbVar8,uVar2,uVar3,0,0,0,param_2,0);
  func_0x0001041c32b4(0);
  pbVar13 = pbVar8;
  func_0x0001041c2da0(pbVar8);
  func_0x000107c61170(pbVar8);
  return pbVar13;
}



/* Entry: 102f22b94; end: 102f22c6f;  */

long FUN_102f22b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x000100905c5c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000100905c7c(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102f22c70; end: 102f22cbb;  */

void FUN_102f22c70(void)

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



/* Entry: 102f22cbc; end: 102f22cef;  */

undefined1  [16] FUN_102f22cbc(void)

{
  return ZEXT816(0x1105e9028);
}



/* Entry: 102f22cf0; end: 102f22d1b;  */

undefined8 FUN_102f22cf0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102f22d1c; end: 102f22d8f;  */

void FUN_102f22d1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010033eec8();
  func_0x000107c613fc();
  FUN_102f22de4(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102f22d90; end: 102f22d97;  */

void FUN_102f22d90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x00010033eec8();
  func_0x000107c613fc();
  FUN_102f22de4(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f22d98; end: 102f22de3;  */

undefined8 FUN_102f22d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102f22de4(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102f22de4; end: 102f22f47;  */

void FUN_102f22de4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac7d8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f063e20);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 102f22f48; end: 102f22f7b;  */

void FUN_102f22f48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f22f7c; end: 102f22fcf;  */

void FUN_102f22f7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f22fd0; end: 102f22fd7;  */

void FUN_102f22fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f22fd8; end: 102f23027;  */

undefined8 FUN_102f22fd8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f23028; end: 102f2306b;  */

undefined1  [16] FUN_102f23028(void)

{
  return ZEXT816(0x1105e90d0);
}



/* Entry: 102f2306c; end: 102f23093;  */

void FUN_102f2306c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f23094; end: 102f2309b;  */

undefined8 FUN_102f23094(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f2309c; end: 102f239fb;  */

void FUN_102f2309c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  puVar1 = PTR_PTR_1126ac7e0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174();
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f017e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f017f00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f114570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f114590);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2e260);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  uVar2 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1145b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  *(undefined **)(unaff_x20 + 0xa0) = puVar3;
  return;
}



/* Entry: 102f239fc; end: 102f23ac7;  */

void FUN_102f239fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 102f23ac8; end: 102f23b17;  */

undefined8 FUN_102f23ac8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f23b18; end: 102f23b5b;  */

undefined1  [16] FUN_102f23b18(void)

{
  return ZEXT816(0x1105e9198);
}



/* Entry: 102f23b5c; end: 102f23b83;  */

void FUN_102f23b5c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f23b84; end: 102f23b8b;  */

undefined8 FUN_102f23b84(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f23b8c; end: 102f242e3;  */

void FUN_102f23b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126ac7e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f1145d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f114600);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    *(undefined **)(unaff_x20 + 0x80) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f242e4);
  (*pcVar1)();
}



/* Entry: 102f242e4; end: 102f2438f;  */

void FUN_102f242e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102f24390; end: 102f243df;  */

undefined8 FUN_102f24390(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f243e0; end: 102f2442b;  */

undefined1  [16] FUN_102f243e0(void)

{
  return ZEXT816(0x1105e9260);
}



/* Entry: 102f2442c; end: 102f2449b;  */

undefined8 FUN_102f2442c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100924780(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102f2449c; end: 102f244cf;  */

void FUN_102f2449c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f244d0; end: 102f2451f;  */

undefined8 FUN_102f244d0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f24520; end: 102f2455b;  */

undefined1  [16] FUN_102f24520(void)

{
  return ZEXT816(0x1105e9328);
}



/* Entry: 102f2455c; end: 102f2456b; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2455c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f28e78));
  return;
}



/* Entry: 102f2456c; end: 102f249cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2456c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar11 = &puStack_90;
  if ((*(byte *)(unaff_x20 + _DAT_112f28e80) & 1) == 0) {
    puVar5 = &UNK_1105e9418;
    func_0x000107c613fc(&UNK_1105e9418,0x20,7);
    *(code **)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28e88);
    uVar8 = *puVar1;
    uVar6 = puVar1[1];
    *puVar1 = 0x102f249cc;
    puVar1[1] = puVar5;
    func_0x000100d2bd28(param_2,param_3);
    func_0x000100d2bd38(uVar8,uVar6);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f28e78);
    func_0x000107c3d89c(param_1);
    func_0x000107c5a050(uVar12);
    uVar8 = uVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c515ac(param_1);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    uVar6 = uVar8;
    func_0x000107c40284(0);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    lVar2 = _DAT_112f28e90;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f28e90);
    *(undefined8 *)(unaff_x20 + _DAT_112f28e90) = uVar6;
    func_0x000107c61170(uVar8);
    uVar8 = uVar12;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c5cbe4(param_1);
    func_0x000107c61180();
    uVar7 = uVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    lVar3 = _DAT_112f28e98;
    lVar9 = *(long *)(unaff_x20 + _DAT_112f28e98);
    *(undefined8 *)(unaff_x20 + _DAT_112f28e98) = uVar7;
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 9;
    *(undefined8 *)(lVar9 + 0x10) = 4;
    uVar8 = uVar12;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c4acb0(param_1);
    func_0x000107c61180();
    uVar7 = uVar8;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
    uVar8 = uVar12;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    uVar7 = uVar8;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    *(undefined8 *)(lVar9 + 0x28) = uVar7;
    uVar8 = uVar12;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar6 = uVar8;
    func_0x000107c402a0(0);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    *(undefined8 *)(lVar9 + 0x30) = uVar6;
    lVar13 = *(long *)(unaff_x20 + lVar3);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102f249cc);
      (*pcVar4)();
    }
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    *(long *)(lVar9 + 0x38) = lVar13;
    uVar8 = 0;
    func_0x000100847984(0);
    func_0x000107c61174(lVar13);
    lVar13 = lVar9;
    func_0x000107c5fc48(lVar9,uVar8);
    func_0x000107c61574(lVar9);
    func_0x000107c3d048(puVar5);
    func_0x000107c61170(lVar13);
    func_0x000107c4abfc(param_1);
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(unaff_x20 + _DAT_112f28ea0) != 0) {
      puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
      func_0x000107c610f8(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
      func_0x000107c48c2c();
      func_0x000107c53fcc();
      func_0x000107c56704(0,puVar5);
      func_0x000107c3d6fc(uVar12);
      func_0x000107c61170(puVar5);
    }
    func_0x000102f249f4();
    FUN_102f24a84();
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_1105e9440;
    func_0x000107c613fc(&UNK_1105e9440,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    uStack_70 = 0x102f25f70;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105e9458;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    func_0x000107c3dccc(0x3fc999999999999a,puVar10);
    func_0x000107c60bd0(ppuVar11);
    FUN_102f24b98();
  }
  else if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 102f249cc; end: 102f24a83;  */

void FUN_102f249cc(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102f24a84; end: 102f24b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f24a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if (*(char *)(unaff_x20 + _DAT_112f28f08) == '\x01') {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f28e78);
    puVar1 = PTR_PTR_1126b1870;
    func_0x000107c61168(PTR_PTR_1126b1870);
    lVar2 = lVar4;
    func_0x000107c6148c(lVar4,puVar1);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar4);
      func_0x000107c498ec(lVar2);
      *(undefined8 *)(unaff_x20 + _DAT_112f28f10) = param_2;
      puVar1 = &UNK_1105e9490;
      func_0x000107c613fc(&UNK_1105e9490,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      uStack_40 = 0x102f26010;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1105e9598;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c4dc58(lVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102f24b98; end: 102f24ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f24b98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar4 = &UNK_1105e9490;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_1105e9490,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28eb8);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_102f25fe8;
  puVar1[1] = puVar3;
  func_0x000107c6157c(puVar3);
  func_0x000100d2bd38(uVar6,uVar2);
  func_0x000107c61574(puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f28f18);
  func_0x000107c613fc(&UNK_1105e9490,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_50 = FUN_102f26008;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105e9570;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e528(*(double *)(unaff_x20 + _DAT_112f28ee8) + 0.2,uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102f24ccc; end: 102f24d77; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter presentNotificationOverView:completion:] */

/* WARNING: Possible PIC construction at 0x000102f24d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f24d60) */

void FUN_102f24ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105e9508;
    func_0x000107c613fc(&UNK_1105e9508,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x102f25fd4;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f2456c(param_3,uVar2,puVar1);
  func_0x000100d2bd38(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102f24d78; end: 102f24fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f24d78(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f28f18);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1105e9490;
    func_0x000107c613fc(&UNK_1105e9490,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    pcStack_70 = FUN_102f26018;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105e95c0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102f24fd4; end: 102f2502b;  */

void FUN_102f24fd4(long param_1,code *param_2)

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



/* Entry: 102f2502c; end: 102f25277;  */

/* WARNING: Possible PIC construction at 0x000102f2512c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f251fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f25200) */
/* WARNING: Removing unreachable block (ram,0x000102f2518c) */
/* WARNING: Removing unreachable block (ram,0x000102f25130) */
/* WARNING: Removing unreachable block (ram,0x000102f25248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2502c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puVar4;
  code *pcVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f28e80) = 1;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f28e78);
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28e88);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 == (code *)0x0) {
      uVar3 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000100d2bd38(0,uVar3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28f20);
      pcVar5 = (code *)*puVar1;
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)0x0;
        puVar4 = (undefined *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      else {
        puVar4 = (undefined *)puVar1[1];
        func_0x000107c6157c(puVar4);
        (*pcVar5)();
      }
    }
    else {
      puVar4 = (undefined *)puVar1[1];
      func_0x000107c6157c(puVar4);
      (*pcVar5)();
    }
    if (pcVar5 == (code *)0x0) {
      return;
    }
  }
  else {
    func_0x000107c61170();
    if (*(long *)(unaff_x20 + _DAT_112f28e90) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(unaff_x20 + _DAT_112f28e98) != 0) {
      func_0x000107c521e8();
    }
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1105e9490;
    func_0x000107c613fc(&UNK_1105e9490,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_60 = 0x102f2607c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105e9520;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 102f25278; end: 102f25497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f25278(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112f28eb8);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = ((undefined8 *)(param_1 + _DAT_112f28eb8))[1];
      func_0x000100d2bd28(pcVar1,uVar2);
      func_0x000107c61170(param_1);
      (*pcVar1)();
      func_0x000100d2bd38(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 102f25498; end: 102f254e7; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter handleLongPress:] */

/* WARNING: Possible PIC construction at 0x000102f254d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f254d4) */

void FUN_102f25498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102f25404(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102f254e8; end: 102f256bb;  */

/* WARNING: Possible PIC construction at 0x000102f255d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f255f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2512c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f251fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2577c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f257d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f25780) */
/* WARNING: Removing unreachable block (ram,0x000102f25248) */
/* WARNING: Removing unreachable block (ram,0x000102f25200) */
/* WARNING: Removing unreachable block (ram,0x000102f2518c) */
/* WARNING: Removing unreachable block (ram,0x000102f25130) */
/* WARNING: Removing unreachable block (ram,0x000102f2507c) */
/* WARNING: Removing unreachable block (ram,0x000102f2508c) */
/* WARNING: Removing unreachable block (ram,0x000102f25094) */
/* WARNING: Removing unreachable block (ram,0x000102f250a4) */
/* WARNING: Removing unreachable block (ram,0x000102f250ac) */
/* WARNING: Removing unreachable block (ram,0x000102f25668) */
/* WARNING: Removing unreachable block (ram,0x000102f255f4) */
/* WARNING: Removing unreachable block (ram,0x000102f25604) */
/* WARNING: Removing unreachable block (ram,0x000102f25610) */
/* WARNING: Removing unreachable block (ram,0x000102f25620) */
/* WARNING: Removing unreachable block (ram,0x000102f25624) */
/* WARNING: Removing unreachable block (ram,0x000102f25628) */
/* WARNING: Removing unreachable block (ram,0x000102f2562c) */
/* WARNING: Removing unreachable block (ram,0x000102f2563c) */
/* WARNING: Removing unreachable block (ram,0x000102f255dc) */
/* WARNING: Removing unreachable block (ram,0x000102f257dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f254e8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar3 = param_1;
  func_0x000107c5bcc0();
  if (lVar3 - 3U < 2) {
    dVar7 = 0.0;
    if (*(long *)(unaff_x20 + _DAT_112f28e90) != 0) {
      func_0x000107c40268();
    }
    dVar8 = 0.0 - dVar7;
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112f28e78));
    func_0x000107c609b0();
    if (dVar8 <= dVar7 * 0.5) {
      *(undefined1 *)(unaff_x20 + _DAT_112f28f00) = 0;
      if (*(long *)(unaff_x20 + _DAT_112f28e90) != 0) {
        func_0x000107c5378c(0);
      }
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar5 = &UNK_1105e9490;
      func_0x000107c613fc(&UNK_1105e9490,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,unaff_x20);
      uStack_60 = 0x102f25fb4;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105e94a8;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      goto code_r0x000107c61574;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112f28e80) = 1;
    lVar3 = *(long *)(unaff_x20 + _DAT_112f28e78);
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar3 != 0) goto code_r0x000107c61170;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28e88);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 == (code *)0x0) {
      uVar4 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000100d2bd38(0,uVar4);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28f20);
      pcVar6 = (code *)*puVar1;
      if (pcVar6 == (code *)0x0) {
        pcVar6 = (code *)0x0;
        puVar5 = (undefined *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      else {
        puVar5 = (undefined *)puVar1[1];
        func_0x000107c6157c(puVar5);
        (*pcVar6)();
      }
    }
    else {
      puVar5 = (undefined *)puVar1[1];
      func_0x000107c6157c(puVar5);
      (*pcVar6)();
    }
  }
  else {
    if (lVar3 == 2) {
      *(undefined1 *)(unaff_x20 + _DAT_112f28f00) = 1;
      func_0x000107c5de64(param_1);
      func_0x000107c61180();
      func_0x000107c5c42c();
      func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    if (lVar3 != 1) {
      return;
    }
    plVar2 = (long *)(unaff_x20 + _DAT_112f28eb8);
    pcVar6 = (code *)*plVar2;
    puVar5 = (undefined *)plVar2[1];
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  if (pcVar6 == (code *)0x0) {
    return;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 102f256bc; end: 102f2581f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f256bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  *(undefined1 *)(unaff_x20 + _DAT_112f28f00) = 0;
  if (*(long *)(unaff_x20 + _DAT_112f28e90) != 0) {
    func_0x000107c5378c(0);
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1105e9490;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_1105e9490,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = (code *)0x102f25fb4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105e94a8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c613fc(&UNK_1105e9490,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcStack_60 = FUN_102f25fcc;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105e94d0;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3dcd0(0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102f25820; end: 102f2586f; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter handlePanGesture:] */

/* WARNING: Possible PIC construction at 0x000102f25858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f2585c) */

void FUN_102f25820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f254e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102f25870; end: 102f2595b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f25870(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f28e78);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c5c42c(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c4abfc(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102f2595c; end: 102f25a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102f2595c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c602fc(0x47);
  func_0x000107c5fb78(0xd000000000000032,0x800000010f114640);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f28ea8);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f28ea8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f114680);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f28eb0))[1];
  if (lVar2 == 0) {
    lVar2 = -0x1d00000000000000;
    uVar3 = 0x6c696e;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f28eb0);
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar3,lVar2);
  func_0x000107c6142c(lVar2);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 102f25a64; end: 102f25abb; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter debugInfo] */

void FUN_102f25a64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102f2595c();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f25abc; end: 102f25ae3;  */

/* WARNING: Possible PIC construction at 0x000102f25ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2512c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f251fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f25200) */
/* WARNING: Removing unreachable block (ram,0x000102f2518c) */
/* WARNING: Removing unreachable block (ram,0x000102f25130) */
/* WARNING: Removing unreachable block (ram,0x000102f25adc) */
/* WARNING: Removing unreachable block (ram,0x000102f2502c) */
/* WARNING: Removing unreachable block (ram,0x000102f251d0) */
/* WARNING: Removing unreachable block (ram,0x000102f25208) */
/* WARNING: Removing unreachable block (ram,0x000102f2520c) */
/* WARNING: Removing unreachable block (ram,0x000102f25250) */
/* WARNING: Removing unreachable block (ram,0x000102f2522c) */
/* WARNING: Removing unreachable block (ram,0x000102f251e4) */
/* WARNING: Removing unreachable block (ram,0x000102f25078) */
/* WARNING: Removing unreachable block (ram,0x000102f2508c) */
/* WARNING: Removing unreachable block (ram,0x000102f25094) */
/* WARNING: Removing unreachable block (ram,0x000102f250a4) */
/* WARNING: Removing unreachable block (ram,0x000102f250ac) */
/* WARNING: Removing unreachable block (ram,0x000102f25248) */
/* WARNING: Removing unreachable block (ram,0x000102f25254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f25abc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f28eb8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 102f25ae4; end: 102f25b37; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter dismissPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f25ae4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f28eb8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61174();
  func_0x000100d2bd38(uVar2,uVar3);
  FUN_102f2502c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f25b38; end: 102f25b97; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter init] */

void FUN_102f25b38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SIGComposerNotification.SIGComposerNotificationPresenter",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f25b64);
  (*pcVar1)();
}



/* Entry: 102f25b98; end: 102f25cb3; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f25c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f25c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f25c50) */
/* WARNING: Removing unreachable block (ram,0x000102f25c1c) */
/* WARNING: Removing unreachable block (ram,0x000102f25c98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f25b98(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28ea8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28ec8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28eb0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f28ed0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f28ed8));
  if (*(long *)(param_1 + _DAT_112f28ea0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f28ea0))[1]);
    return;
  }
  return;
}



/* Entry: 102f25cb4; end: 102f25f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f25cb4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pcVar11 = *(code **)(unaff_x20 + _DAT_112f28ec0);
  if (pcVar11 == (code *)0x0) {
    return;
  }
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f28ec0))[1];
  if (param_2 == 0) {
    func_0x000107c6157c(uVar10);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28ea8);
    uVar13 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000100d2bd28(pcVar11,uVar10);
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar13);
  }
  if (param_4 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28ec8);
    uVar13 = puVar1[1];
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000107c61434(param_4);
    func_0x000107c6142c(uVar13);
  }
  if (param_6 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28eb0);
    uVar13 = puVar1[1];
    *puVar1 = param_5;
    puVar1[1] = param_6;
    func_0x000107c61434(param_6);
    func_0x000107c6142c(uVar13);
  }
  if (param_8 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28ed0);
    uVar13 = puVar1[1];
    *puVar1 = param_7;
    puVar1[1] = param_8;
    func_0x000107c61434(param_8);
    func_0x000107c6142c(uVar13);
  }
  if (param_9 != 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f28ed8);
    *(long *)(unaff_x20 + _DAT_112f28ed8) = param_9;
    func_0x000107c61174(param_9);
    func_0x000107c61170(uVar13);
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f28ea8);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f28ea8))[1];
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f28ec8);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f28ec8))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f28eb0);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f28eb0))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f28ed0);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f28ed0))[1];
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f28ed8);
  uVar9 = uVar12;
  func_0x000107c61174();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  (*pcVar11)(uVar13,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar12);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar8);
  func_0x000107c61170(uVar9);
  if (pcVar11 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar10);
    return;
  }
  return;
}



/* Entry: 102f25f04; end: 102f25f67; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_102f25f04(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c6148c(param_3,puVar1);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c6148c(param_4,puVar1);
    if (param_4 != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102f25f68; end: 102f25f93; -[_TtC23SIGComposerNotification32SIGComposerNotificationPresenter gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_102f25f68(void)

{
  return 1;
}



/* Entry: 102f25f94; end: 102f25fcb;  */

void FUN_102f25f94(void)

{
  func_0x000107c61168(&PTR_PTR_1128abe18);
  return;
}



/* Entry: 102f25fcc; end: 102f25fe7;  */

void FUN_102f25fcc(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_102f24b98();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 102f25fe8; end: 102f26007;  */

void FUN_102f25fe8(void)

{
  FUN_102f24fd4();
  return;
}



/* Entry: 102f26008; end: 102f26017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26008(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = *(code **)(lVar1 + _DAT_112f28eb8);
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar3 = ((undefined8 *)(lVar1 + _DAT_112f28eb8))[1];
      func_0x000100d2bd28(pcVar2,uVar3);
      func_0x000107c61170(lVar1);
      (*pcVar2)();
      func_0x000100d2bd38(pcVar2,uVar3);
    }
  }
  return;
}



/* Entry: 102f26018; end: 102f26037;  */

void FUN_102f26018(void)

{
  FUN_102f24fd4();
  return;
}



/* Entry: 102f26038; end: 102f2607f;  */

void FUN_102f26038(long param_1,long param_2)

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



/* Entry: 102f26080; end: 102f26287;  */

void FUN_102f26080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  func_0x000102f260d8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 102f26288; end: 102f262e7; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder initWithPrimaryText:msSinceQueued:composerRuntimeProvider:] */

void FUN_102f26288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_5);
  func_0x000102f260d8(param_1,param_4,param_3,param_5);
  return;
}



/* Entry: 102f262e8; end: 102f262f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f262e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28f58);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f262f4; end: 102f2630b; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder secondaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f262f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f28f58);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102f2630c; end: 102f26323; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder trailingText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2630c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f28f60);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102f26324; end: 102f2635f;  */

void FUN_102f26324(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f26360; end: 102f2636b; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder titleSigIconName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26360(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f28f50);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102f2636c; end: 102f263cf;  */

void FUN_102f2636c(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102f263d0; end: 102f2642f; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder subTitleColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102f263d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f28f70);
  *(undefined8 *)(param_1 + _DAT_112f28f70) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 102f26430; end: 102f26467;  */

/* WARNING: Possible PIC construction at 0x000102f2644c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f26450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f26430(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f28f68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f26468; end: 102f264c7; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder titleColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102f26468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f28f68);
  *(undefined8 *)(param_1 + _DAT_112f28f68) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 102f264c8; end: 102f264df;  */

void FUN_102f264c8(void)

{
  FUN_102f27f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102f264e0; end: 102f265d7; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder actionButtonWithText:foregroundColor:backgroundColor:tapHandler:] */

void FUN_102f264e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1105e9760;
  func_0x000107c613fc(&UNK_1105e9760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102f27f60(param_3,param_2,param_4,param_5,0x102f28258,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102f265d8; end: 102f2661b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f265d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f28fe0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100d2bdb8(uVar2,uVar3);
  func_0x000107c6157c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102f2661c; end: 102f2669b; -[_TtC23SIGComposerNotification39SIGComposerNotificationPresenterBuilder closeButtonWithTapHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2661c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  puVar4 = &UNK_1105e9738;
  func_0x000107c613fc(&UNK_1105e9738,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f28fe0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x102f28254;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d2bdb8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


