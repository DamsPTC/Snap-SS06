/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103176520; end: 103176523;  */

void FUN_103176520(void)

{
  return;
}



/* Entry: 103176524; end: 10317674f;  */

/* WARNING: Possible PIC construction at 0x00010317666c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103176670) */
/* WARNING: Removing unreachable block (ram,0x000103176720) */
/* WARNING: Removing unreachable block (ram,0x00010317667c) */
/* WARNING: Removing unreachable block (ram,0x000103176724) */
/* WARNING: Removing unreachable block (ram,0x000103176688) */
/* WARNING: Removing unreachable block (ram,0x0001031766a0) */

void FUN_103176524(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  if (uVar6 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    uVar4 = uVar2;
    if (9 < uVar2) {
      uVar4 = 10;
    }
    if ((long)uVar2 < (long)uVar4) {
LAB_10317674c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103176750);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar2 = uVar6;
    }
    uVar4 = uVar2;
    func_0x000107c60480();
    uVar5 = uVar2;
    func_0x000107c60480();
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103176720);
      (*pcVar1)();
    }
    if (9 < uVar4) {
      uVar4 = 10;
    }
    func_0x000107c60480();
    if ((long)uVar2 < (long)uVar4) goto LAB_10317674c;
  }
  if ((uVar6 & 0xc000000000000001) == 0 || uVar4 == 0) {
    func_0x000107c61434(uVar6);
  }
  else {
    uVar3 = 0;
    FUN_1031772e0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c61434(uVar6);
    uVar2 = 0;
    do {
      uVar5 = uVar2 + 1;
      func_0x000107c60318(uVar2,uVar6,uVar3);
      uVar2 = uVar5;
    } while (uVar4 != uVar5);
  }
  if (uVar6 >> 0x3e == 0) {
    uVar6 = uVar6 & 0xffffffffffffff8;
  }
  else {
    func_0x000107c6142c(uVar6);
    uVar2 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar2 = uVar6;
    }
    uVar6 = 0;
    func_0x000107c60484(0,uVar4,uVar2);
    if ((param_4 & 1) == 0) {
      uVar2 = uVar6;
      func_0x00010214f384(uVar6);
      func_0x000107c615e8(uVar6);
      FUN_103175134(uVar2,param_2,0x61724473656d6147,0xeb00000000726577,0,0);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c605fc(0);
  uVar2 = uVar6;
  func_0x000107c615f4(uVar6,2);
  func_0x000107c61480();
  if (uVar2 == 0) {
    func_0x000107c615e8(uVar6);
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 103176750; end: 1031767af; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer initWithNibName:bundle:] */

void FUN_103176750(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.LensExplorerChatDrawer",0x2a,"init(nibName:bundle:)",0x15
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317677c);
  (*pcVar1)();
}



/* Entry: 1031767b0; end: 103176867; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031767b0(long param_1)

{
  func_0x000100d38d40(param_1 + _DAT_112f46ed8);
  func_0x000100d38d40(param_1 + _DAT_112f46ee0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f46ef8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46f00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f46f08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f46f10));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46f18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46f20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46f28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f46f38));
  return;
}



/* Entry: 103176868; end: 1031768a7;  */

void FUN_103176868(void)

{
  func_0x000107c61168(&PTR_PTR_1128bcd18);
  return;
}



/* Entry: 1031768a8; end: 1031768ab; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer lensExplorerRouterDidPresentLensExplorer:] */

void FUN_1031768a8(void)

{
  return;
}



/* Entry: 1031768ac; end: 1031768af; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer lensExplorerRouterBeginDismissingLensExplorer:] */

void FUN_1031768ac(void)

{
  return;
}



/* Entry: 1031768b0; end: 1031768b3; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer lensExplorerRouterDidDismissLensExplorer:] */

void FUN_1031768b0(void)

{
  return;
}



/* Entry: 1031768b4; end: 1031768bb; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer lensExplorerRouterReplyParameters:] */

void FUN_1031768b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1031768bc; end: 1031768eb;  */

void FUN_1031768bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1031768ec; end: 10317696f;  */

void FUN_1031768ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000103177294(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x0001031772b8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103176970; end: 1031769b7;  */

void FUN_103176970(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_1031772e0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1031769b8; end: 103176c07;  */

void FUN_1031769b8(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103176ac0);
    (*pcVar2)();
  }
  func_0x0001000bb420(param_1 + 0x20,auStack_50);
  uVar3 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  puVar1 = PTR___sypN_11034f1a8;
  puVar4 = &uStack_58;
  func_0x000107c6147c(puVar4,auStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
  uVar3 = uStack_58;
  if (lVar7 != 1) {
    func_0x0001000bb420(param_1 + 0x40,auStack_50);
    uVar5 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    puVar6 = &uStack_58;
    func_0x000107c6147c(puVar6,auStack_50,puVar1 + 8,uVar5,6);
    if ((int)puVar6 == 0) {
      uStack_58 = 0;
    }
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
    uVar5 = uVar3;
    func_0x000107c4dfe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    lVar7 = 0;
    func_0x000103176888();
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x10) = uStack_58;
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103176ac4);
  (*pcVar2)();
}



/* Entry: 103176c08; end: 103176c6f; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer lensExplorerRouter:didPickItem:selectionTrigger:] */

/* WARNING: Possible PIC construction at 0x000103176c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103176c5c) */

void FUN_103176c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103176f1c(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103176c70; end: 103176c73; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer lensExplorerRouterDidToggleCamera:] */

void FUN_103176c70(void)

{
  return;
}



/* Entry: 103176c74; end: 103176c7b; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer drawerType] */

undefined8 FUN_103176c74(void)

{
  return 2;
}



/* Entry: 103176c7c; end: 103176c8b; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer sentItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103176c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f46f30);
}



/* Entry: 103176c8c; end: 103176c93; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer openedWithSearch] */

undefined8 FUN_103176c8c(void)

{
  return 0;
}



/* Entry: 103176c94; end: 103176ca7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer suggestionSource] */

undefined8 FUN_103176c94(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 103176ca8; end: 103176d27;  */

undefined * FUN_103176ca8(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103176d28; end: 103176e4f;  */

undefined * FUN_103176d28(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103176e48);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d55580;
      func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
      uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      func_0x000107c613fc(puVar4,uVar9 + lVar8 * lVar2,uVar7 | 7);
      puVar6 = puVar4;
      func_0x000107c610a4();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103176e4c);
        (*pcVar3)();
      }
      lVar5 = (long)puVar6 - uVar9;
      if (lVar5 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103176e50);
        (*pcVar3)();
      }
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar1 = lVar5 / lVar8;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = lVar1 << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103176e44);
      (*pcVar3)();
    }
    lVar5 = 0;
    func_0x000107c5ede0();
    uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    func_0x000107c6140c(puVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)),
                        param_2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * param_3,lVar2,lVar5);
  }
  return puVar4;
}



/* Entry: 103176e50; end: 103176f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103176e50(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112f46ed8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f46ee0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f46ee8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f46ef0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f46f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f46f30) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f46f38);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensGamesChatDrawer/LensExplorerChatDrawer.swift",0x30,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103176f1c);
  (*pcVar2)();
}



/* Entry: 103176f1c; end: 103177217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103176f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f46f08);
  func_0x000107c5c6c0(uVar2,param_2,1);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1031768bc;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1031768ec;
  puStack_88 = &UNK_110617150;
  func_0x000107c60bc4(&puStack_a0);
  uVar4 = uVar2;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f46f00) + 0x18);
  func_0x000107c6157c(uVar2);
  uVar5 = 1;
  func_0x00010061b458();
  func_0x000107c61574(uVar2);
  pcVar6 = FUN_103176970;
  func_0x0001000bfde0(FUN_103176970,0,PTR___syXlN_11034f1a0 + 8);
  func_0x000107c61574();
  func_0x0001004575f0();
  func_0x000107c61574();
  func_0x000102415848();
  func_0x000107c613fc();
  *(undefined8 *)(pcVar6 + 0x18) = 5;
  *(undefined8 *)(pcVar6 + 0x10) = 2;
  *(undefined8 *)(pcVar6 + 0x20) = uVar4;
  *(undefined8 *)(pcVar6 + 0x28) = uVar5;
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar2 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  pcVar8 = pcVar6;
  func_0x000107c5fc48(pcVar6,uVar2);
  func_0x000107c61574(pcVar6);
  pcStack_80 = FUN_1031769b8;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x103176ac4;
  puStack_88 = &UNK_110617178;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c3fe00();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(pcVar8);
  puVar10 = &UNK_1106171b0;
  func_0x000107c613fc(&UNK_1106171b0,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  puVar11 = &UNK_1106171d8;
  func_0x000107c613fc(&UNK_1106171d8,0x20,7);
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(undefined8 *)(puVar11 + 0x18) = param_1;
  pcStack_80 = (code *)0x103177234;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x103176bc0;
  puStack_88 = &UNK_1106171f0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar10 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar10);
  puVar10 = puVar7;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar12);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f46f10);
  *(undefined **)(unaff_x20 + _DAT_112f46f10) = puVar10;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103177218; end: 103177243;  */

void FUN_103177218(long param_1,long param_2)

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



/* Entry: 103177244; end: 103177273;  */

void FUN_103177244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103177274; end: 1031772df;  */

/* WARNING: Possible PIC construction at 0x000102e021d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e021d4) */
/* WARNING: Removing unreachable block (ram,0x000102e021ec) */
/* WARNING: Removing unreachable block (ram,0x000102e021dc) */

void FUN_103177274(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = param_2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  uVar2 = puVar1[1];
  uVar5 = puVar1[2];
  uVar3 = puVar1[3];
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  uVar4 = *(undefined1 *)(puVar1 + 4);
  *(undefined1 *)(puVar1 + 4) = 1;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,uVar2,uVar5,uVar3,uVar4);
  return;
}



/* Entry: 1031772e0; end: 10317731f;  */

void FUN_1031772e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103177320; end: 103177337;  */

void FUN_103177320(long param_1,long param_2)

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



/* Entry: 103177338; end: 10317733b; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer maximumDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103177338(double param_1,long param_2)

{
  if ((0 < *(long *)(param_2 + _DAT_112f46f30)) &&
     (param_1 = *(double *)(param_2 + _DAT_112f46ee8), 0.0 < param_1)) {
    return param_1;
  }
  func_0x000107c61174();
  FUN_10317550c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10317733c; end: 10317733f; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer defaultDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10317733c(double param_1,long param_2)

{
  if ((0 < *(long *)(param_2 + _DAT_112f46f30)) &&
     (param_1 = *(double *)(param_2 + _DAT_112f46ee8), 0.0 < param_1)) {
    return param_1;
  }
  func_0x000107c61174();
  FUN_10317550c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103177340; end: 10317737f;  */

void FUN_103177340(undefined8 param_1,undefined8 param_2)

{
  FUN_103178b40();
  uRam0000000113806ef0 = param_1;
  uRam0000000113806ef8 = param_2;
  return;
}



/* Entry: 103177380; end: 10317738b; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin inputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f47010;
  func_0x000107c61428(param_1 + _DAT_112f47010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10317738c; end: 103177397; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin setInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317738c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f47010;
  func_0x000107c61428(param_1 + _DAT_112f47010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103177398; end: 1031773a3; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177398(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f47018;
  func_0x000107c61428(param_1 + _DAT_112f47018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031773a4; end: 1031773e7;  */

void FUN_1031773a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1031773e8; end: 1031773f3; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031773e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f47018;
  func_0x000107c61428(param_1 + _DAT_112f47018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031773f4; end: 103177447;  */

void FUN_1031773f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103177448; end: 103177527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f47010,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f47018,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f47020) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f47028) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f47030) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f47038) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f47040) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f47048) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103177528; end: 10317752f; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin position] */

undefined8 FUN_103177528(void)

{
  return 0;
}



/* Entry: 103177530; end: 103177537; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin pluginType] */

undefined8 FUN_103177530(void)

{
  return 1;
}



/* Entry: 103177538; end: 103177743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177538(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f47018;
  func_0x000107c61428(unaff_x20 + _DAT_112f47018,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c53fcc(param_1);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar5 = puVar4;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c5af88(puVar4);
      func_0x000107c61180();
      func_0x000107c55264(param_1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      puVar3 = puVar4;
    }
    func_0x000107c61170(puVar3);
  }
  if (lRam0000000112f47050 != -1) {
    func_0x000107c61568(0x112f47050,FUN_103177340);
  }
  uVar6 = uRam0000000113806ef0;
  func_0x000107c5fadc(uRam0000000113806ef0,uRam0000000113806ef8);
  func_0x000107c520fc(param_1);
  func_0x000107c61170(uVar6);
  if (lRam0000000112f47058 != -1) {
    func_0x000107c61568(0x112f47058,0x103177360);
  }
  uVar6 = uRam0000000113806f00;
  func_0x000107c5fadc(uRam0000000113806f00,uRam0000000113806f08);
  func_0x000107c520ec(param_1);
  func_0x000107c61170(uVar6);
  func_0x000107c5a5e8(param_1);
  func_0x000107c55414(param_1);
  func_0x000107c55b74(param_1);
  return;
}



/* Entry: 103177744; end: 103177793; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin configureInputItem:] */

/* WARNING: Possible PIC construction at 0x00010317777c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103177780) */

void FUN_103177744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103177538(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103177794; end: 103177beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177794(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined **appuStack_70 [2];
  
  func_0x0001000d224c(appuStack_70);
  if (appuStack_70[0] != (undefined **)0x0) {
    ppuVar4 = appuStack_70[0];
    func_0x000107c611b4();
    if (ppuVar4 == &PTR_PTR_112f46b50) {
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f47020);
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f47030);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f47038);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f47040);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f47048);
      lVar5 = 0;
      FUN_1038a72f8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 0;
      func_0x000107c61614(lVar5 + 0x10,0);
      uVar9 = 0;
      FUN_1033c2760(0);
      func_0x000107c613fc();
      FUN_1033c1f18();
      ppuVar4 = &PTR_DAT_1106a2c50;
      lVar8 = lVar5;
      FUN_1033bf350(lVar5,&PTR_DAT_1106a2c50,uVar9,&PTR_DAT_11064d080);
      func_0x000107c61574(lVar5);
      func_0x000107c61574(uVar9);
      uVar9 = 0;
      func_0x00010076df58();
      func_0x000107c613fc();
      lVar6 = 0;
      func_0x000103174614();
      lVar7 = lVar6;
      func_0x000107c610f8();
      func_0x000107c61614(lVar7 + _DAT_112f46e38,0);
      func_0x000107c61614(lVar7 + _DAT_112f46e40,0);
      *(undefined8 *)(lVar7 + _DAT_112f46e48) = 0;
      puVar2 = (undefined8 *)(lVar7 + _DAT_112f46e50);
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
      *(undefined8 *)(lVar7 + _DAT_112f46e70) = 0;
      lVar5 = _DAT_112f46e98;
      func_0x000107c61644(lVar7 + _DAT_112f46e98,0);
      *(undefined8 *)(lVar7 + _DAT_112f46ea0) = 0;
      puVar2 = (undefined8 *)(lVar7 + _DAT_112f46ea8);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar7 + _DAT_112f46e58) = uVar11;
      *(undefined ***)(lVar7 + _DAT_112f46e60) = appuStack_70[0];
      *(undefined8 *)(lVar7 + _DAT_112f46e68) = uVar14;
      *(undefined8 *)(lVar7 + _DAT_112f46e78) = uVar13;
      *(undefined8 *)(lVar7 + _DAT_112f46e80) = uVar12;
      *(undefined8 *)(lVar7 + _DAT_112f46e88) = uVar10;
      plVar1 = (long *)(lVar7 + _DAT_112f46e90);
      *plVar1 = lVar8;
      plVar1[1] = (long)ppuVar4;
      func_0x000107c61634(lVar7 + lVar5,uVar9);
      puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_90 = lVar7;
      lStack_88 = lVar6;
      func_0x000107c61174(uVar11);
      func_0x000107c615f0(appuStack_70[0]);
      func_0x000107c61174(uVar14);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(uVar12);
      func_0x000107c6157c(uVar10);
      func_0x000107c615f0(lVar8);
      func_0x000107c61154(&lStack_90,puVar3,0,0);
      func_0x000107c615e8(appuStack_70[0]);
      func_0x000107c615e8(lVar8);
      func_0x000107c61574(uVar9);
    }
    else if (ppuVar4 == &PTR_PTR_112f46aa0) {
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f47020);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f47030);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f47038);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f47040);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f47048);
      lVar8 = 0;
      FUN_103176868();
      lVar5 = lVar8;
      func_0x000107c610f8();
      func_0x000107c61614(lVar5 + _DAT_112f46ed8,0);
      func_0x000107c61614(lVar5 + _DAT_112f46ee0,0);
      *(undefined8 *)(lVar5 + _DAT_112f46ee8) = 0;
      puVar2 = (undefined8 *)(lVar5 + _DAT_112f46ef0);
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
      *(undefined8 *)(lVar5 + _DAT_112f46f10) = 0;
      *(undefined8 *)(lVar5 + _DAT_112f46f30) = 0;
      puVar2 = (undefined8 *)(lVar5 + _DAT_112f46f38);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar5 + _DAT_112f46ef8) = uVar13;
      *(undefined ***)(lVar5 + _DAT_112f46f00) = appuStack_70[0];
      *(undefined8 *)(lVar5 + _DAT_112f46f08) = uVar12;
      *(undefined8 *)(lVar5 + _DAT_112f46f18) = uVar11;
      *(undefined8 *)(lVar5 + _DAT_112f46f20) = uVar10;
      *(undefined8 *)(lVar5 + _DAT_112f46f28) = uVar9;
      puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_80 = lVar5;
      lStack_78 = lVar8;
      func_0x000107c61174(uVar13);
      func_0x000107c61174(uVar12);
      func_0x000107c6157c(uVar11);
      func_0x000107c6157c(uVar10);
      func_0x000107c6157c(uVar9);
      func_0x000107c61154(&lStack_80,puVar3,0,0);
    }
    else {
      func_0x000107c615e8(appuStack_70[0]);
    }
  }
  return;
}



/* Entry: 103177bec; end: 103177c1f; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin createDrawer] */

void FUN_103177bec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103177794();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103177c20; end: 103177c27; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin createItemController] */

void FUN_103177c20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103177c28; end: 103177c87; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin init] */

void FUN_103177c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.LensGamesChatDrawerPlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103177c54);
  (*pcVar1)();
}



/* Entry: 103177c88; end: 103177d1f; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103177ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103177d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103177ce8) */
/* WARNING: Removing unreachable block (ram,0x000103177d08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177c88(long param_1)

{
  func_0x000100d38d64(param_1 + _DAT_112f47010);
  func_0x000100d38d64(param_1 + _DAT_112f47018);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47020));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47030));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f47028));
  return;
}



/* Entry: 103177d20; end: 103177d23; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin didSelectInputItem:] */

void FUN_103177d20(void)

{
  return;
}



/* Entry: 103177d24; end: 103177d27; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin didDeselectInputItem:] */

void FUN_103177d24(void)

{
  return;
}



/* Entry: 103177d28; end: 103177d2b; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin didCollapseInputItem:] */

void FUN_103177d28(void)

{
  return;
}



/* Entry: 103177d2c; end: 103177d2f; -[_TtC19LensGamesChatDrawer25LensGamesChatDrawerPlugin didUncollapseInputItem:] */

void FUN_103177d2c(void)

{
  return;
}



/* Entry: 103177d30; end: 103177d4f;  */

void FUN_103177d30(void)

{
  func_0x000107c61168(&PTR_PTR_1128bce38);
  return;
}



/* Entry: 103177d50; end: 103177d93; -[_TtC19LensGamesChatDrawer33LensGamesChatDrawerPluginProvider providerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103177d50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f47088;
  func_0x000107c61428(param_1 + _DAT_112f47088,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103177d94; end: 103177de3; -[_TtC19LensGamesChatDrawer33LensGamesChatDrawerPluginProvider setProviderType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f47088;
  func_0x000107c61428(param_1 + _DAT_112f47088,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103177de4; end: 103177f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103177de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f47088) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f47090) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f47098) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f470a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f470a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f470b0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103177f3c; end: 103177faf; -[_TtC19LensGamesChatDrawer33LensGamesChatDrawerPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_103177f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103178080(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103177fb0; end: 103177fb7; -[_TtC19LensGamesChatDrawer33LensGamesChatDrawerPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_103177fb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103177fb8; end: 103178017; -[_TtC19LensGamesChatDrawer33LensGamesChatDrawerPluginProvider init] */

void FUN_103177fb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.LensGamesChatDrawerPluginProvider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103177fe4);
  (*pcVar1)();
}



/* Entry: 103178018; end: 10317807f; -[_TtC19LensGamesChatDrawer33LensGamesChatDrawerPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103178044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103178064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103178048) */
/* WARNING: Removing unreachable block (ram,0x000103178068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103178018(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47090));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f47098));
  return;
}



/* Entry: 103178080; end: 1031781cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103178080(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f47090);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f47098);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f470a0);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f470a8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f470b0);
  lVar2 = 0;
  FUN_103177d30();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112f47010,0);
  func_0x000107c61614(lVar3 + _DAT_112f47018,0);
  *(undefined8 *)(lVar3 + _DAT_112f47020) = uVar8;
  *(undefined8 *)(lVar3 + _DAT_112f47028) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112f47030) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f47038) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f47040) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112f47048) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 1031781cc; end: 1031781eb;  */

void FUN_1031781cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128bcf30);
  return;
}



/* Entry: 1031781ec; end: 103178b3f;  */

undefined * FUN_1031781ec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 auStack_120 [3];
  undefined auStack_108 [8];
  long alStack_100 [2];
  undefined auStack_f0 [8];
  undefined8 auStack_e8 [3];
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_90;
  
  puVar2 = (undefined *)0x0;
  lStack_c0 = param_1;
  func_0x000107c5ede0();
  lVar13 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar6 = (undefined *)((long)&puStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar18 = 0x112d36580;
  puVar19 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar9 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (lVar9 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c8 = lVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (lVar10 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined *)(lVar14 - extraout_x12_03);
  lVar18 = unaff_x20;
  func_0x000107c4b334();
  func_0x000107c61180();
  if (lVar18 == 0) {
    lVar18 = 0;
    puVar19 = (undefined *)0xe000000000000000;
  }
  else {
    lVar16 = lVar18;
    func_0x000107c5c964();
    func_0x000107c61180();
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c5faec(lVar16);
    func_0x000107c61170(lVar16);
  }
  puVar7 = puVar19;
  func_0x000107c5edd0(puVar17,lVar18);
  func_0x000107c6142c(puVar19);
  lVar18 = unaff_x20;
  func_0x000107c4b298();
  func_0x000107c61180();
  if (lVar18 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5de98();
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar18);
  }
  lVar18 = unaff_x20;
  func_0x000107c4b334();
  func_0x000107c61180();
  puStack_b0 = puVar17;
  if (lVar18 == 0) {
    puStack_90 = (undefined *)0x0;
    puVar6 = puVar17;
    lVar14 = lStack_b8;
  }
  else {
    lVar16 = lVar18;
    func_0x000107c51f38();
    if (lVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103178b40);
      (*pcVar11)();
    }
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_d0 = puVar19;
    if (lVar16 != 0) {
      lVar12 = 0;
      do {
        lVar3 = lVar18;
        func_0x000107c5d7f0(lVar18);
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        lVar3 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined **)(lVar3 + 0x38) = PTR___sSiN_11034deb0;
        *(undefined **)(lVar3 + 0x40) = PTR___sSis7CVarArgsWP_11034df08;
        *(long *)(lVar3 + 0x20) = lVar12;
        puVar19 = puVar7;
        func_0x000107c5fb00(lVar4,puVar7,lVar3);
        func_0x000107c6142c(puVar7);
        func_0x000107c5edd0(lVar14,lVar4,puVar19);
        func_0x000107c6142c(puVar19);
        puVar7 = (undefined *)0x1;
        lVar3 = lVar14;
        (**(code **)(lVar13 + 0x30))(lVar14,1,puVar2);
        if ((int)lVar3 == 1) {
          func_0x0001000293e4(lVar14);
        }
        else {
          pcVar11 = *(code **)(lVar13 + 0x20);
          (*pcVar11)(puVar6,lVar14,puVar2);
          puVar19 = puVar15;
          func_0x000107c61558();
          puVar7 = puVar15;
          if (((ulong)puVar19 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x000101023b20(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
          }
          uVar1 = *(ulong *)(puVar7 + 0x10);
          puVar15 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x000101023b20(puVar15,uVar1 + 1,1,puVar7);
          }
          *(ulong *)(puVar15 + 0x10) = uVar1 + 1;
          puVar7 = puVar6;
          (*pcVar11)(puVar15 + *(long *)(lVar13 + 0x48) * uVar1 +
                               ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),puVar6,puVar2
                    );
        }
        lVar12 = lVar12 + 1;
      } while (lVar16 != lVar12);
    }
    lVar16 = lStack_c8;
    puVar6 = puStack_b0;
    lVar14 = lStack_b8;
    puVar19 = puStack_d0;
    if (*(long *)(puVar15 + 0x10) != 0) {
      (**(code **)(lVar13 + 0x10))
                (lStack_c8,
                 puVar15 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),puVar2);
      puVar6 = puStack_b0;
      func_0x0001000293e4(puStack_b0);
      (**(code **)(lVar13 + 0x38))(lVar16,0,1,puVar2);
      puVar7 = puVar6;
      func_0x0001001021cc(lVar16,puVar6);
      lVar14 = lStack_b8;
      puVar19 = puStack_d0;
      if (*(long *)(puVar15 + 0x10) != 0) {
        puVar5 = puVar15;
        func_0x000107c61434(puVar15);
        FUN_103176d28();
        puVar7 = (undefined *)0x2;
        func_0x000107c61430(puVar15,2);
        puVar15 = puVar5;
      }
    }
    lVar16 = lVar18;
    func_0x000107c51f2c(lVar18);
    lVar12 = unaff_x20;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    puVar5 = puVar7;
    if (lVar12 == 0) {
      func_0x000107c5faec();
      puVar5 = puVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
    }
    lVar3 = lVar18;
    func_0x000107c5d7f0();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    puStack_90 = PTR_PTR_1126ccd38;
    func_0x000107c610f8();
    puVar5 = puVar15;
    puVar7 = puVar2;
    func_0x000107c5fc48(puVar15);
    func_0x000107c490a4((double)lVar16 / 1000.0);
    func_0x000107c61170(lVar18);
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
  }
  lVar18 = unaff_x20;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  puVar15 = puVar7;
  if (lVar18 == 0) {
    func_0x000107c5faec();
    puVar15 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  lVar16 = unaff_x20;
  lStack_b8 = lVar18;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lVar18 = 0;
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar18 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
  }
  uVar8 = 1;
  (**(code **)(lVar13 + 0x38))(lVar10,1,1,puVar2);
  lVar16 = unaff_x20;
  func_0x000107c44fb4();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lVar12 = 0;
    uVar8 = 0xe000000000000000;
  }
  else {
    lVar12 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
  }
  func_0x000107c5edd0(lVar14,lVar12,uVar8);
  func_0x000107c6142c(uVar8);
  lVar16 = lVar9;
  func_0x000100029394(puVar6,lVar9);
  if (lStack_c0 < 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x103178b3c);
    (*pcVar11)();
  }
  lVar12 = unaff_x20;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar16);
  }
  puVar6 = PTR_PTR_1126ccd40;
  func_0x000107c610f8();
  *(undefined8 *)(puVar17 + -0x10) = 0;
  func_0x000107c46e50();
  func_0x000107c61170(lVar12);
  lVar16 = unaff_x20;
  func_0x000107c4a4d8();
  lStack_c0 = CONCAT44(lStack_c0._4_4_,(int)lVar16);
  lVar16 = unaff_x20;
  func_0x000107c4b298();
  func_0x000107c61180();
  lVar12 = lVar16;
  func_0x000107c3e62c();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  func_0x000107c4a4c0();
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c61174(puVar19);
    func_0x000107c61174(puStack_90);
    lVar18 = 0;
  }
  else {
    func_0x000107c61174(puVar19);
    func_0x000107c61174(puStack_90);
    func_0x000107c5fadc(lVar18,puVar15);
    func_0x000107c6142c(puVar15);
  }
  pcVar11 = *(code **)(lVar13 + 0x30);
  lVar16 = lVar10;
  (*pcVar11)(lVar10,1,puVar2);
  if ((int)lVar16 == 1) {
    lVar16 = 0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(lVar10,puVar2);
  }
  lVar10 = lVar14;
  (*pcVar11)(lVar14,1,puVar2);
  if ((int)lVar10 == 1) {
    lVar10 = 0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(lVar14,puVar2);
  }
  lVar14 = lVar9;
  (*pcVar11)(lVar9,1,puVar2);
  if ((int)lVar14 == 1) {
    lVar14 = 0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(lVar9,puVar2);
  }
  puVar2 = PTR_PTR_1126ccc38;
  func_0x000107c610f8();
  *(undefined8 *)(puVar17 + -0x18) = 0;
  *(undefined8 *)(puVar17 + -0x10) = 0;
  *(undefined8 *)(puVar17 + -8) = 0;
  puVar17[-0x20] = (char)unaff_x20;
  *(undefined **)(puVar17 + -0x30) = puVar19;
  *(long *)(puVar17 + -0x28) = lVar12;
  puVar17[-0x38] = (char)lStack_c0;
  *(undefined **)(puVar17 + -0x48) = puVar6;
  *(undefined8 *)(puVar17 + -0x40) = 0;
  *(undefined **)(puVar17 + -0x50) = puStack_90;
  func_0x000107c490a0();
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar14);
  if (puVar2 == (undefined *)0x0) {
    func_0x0001000293e4(puStack_b0);
    func_0x000107c61170(puStack_90);
    func_0x000107c61170(puVar19);
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126ccc20;
    func_0x000107c61168(PTR_PTR_1126ccc20);
    func_0x000107c4b244();
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puStack_90);
    func_0x000107c61170(puVar2);
    func_0x0001000293e4(puStack_b0);
  }
  return puVar17;
}



/* Entry: 103178b40; end: 103178ccf;  */

undefined1  [16] FUN_103178b40(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd6;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f12b3f0);
  uVar3 = 0x7761724474616843;
  func_0x000107c5fadc(0x7761724474616843,0xea00000000007265);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103178c08);
  (*pcVar1)();
}



/* Entry: 103178cd0; end: 103178cd7;  */

undefined8 FUN_103178cd0(void)

{
  return 1;
}



/* Entry: 103178cd8; end: 103178d2b;  */

void FUN_103178cd8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000011,0x800000010efb7430);
  func_0x000107c606a8();
  return;
}



/* Entry: 103178d2c; end: 103178d47;  */

void FUN_103178d2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000011,0x800000010efb7430);
  return;
}



/* Entry: 103178d48; end: 103178ef7;  */

void FUN_103178d48(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0xe900000000000073;
  if (param_2 < 4) {
    uVar4 = 0x736e654c6576696c;
    uVar5 = 0xef77656976657250;
    if (param_2 != 2) {
      uVar4 = 0xd000000000000010;
      uVar5 = 0x800000010efb7460;
    }
    uVar3 = 0x65736e654c6c6c61;
    if (param_2 != 0) {
      uVar2 = 0xe800000000000000;
      uVar3 = 0x64656b636f6c6e75;
    }
    if (param_2 < 2) {
      uVar4 = uVar3;
      uVar5 = uVar2;
    }
  }
  else {
    uVar3 = 0xeb00000000726577;
    uVar1 = 0x61724473656d6167;
    if (param_2 != 7) {
      uVar3 = 0xe300000000000000;
      uVar1 = 0x6f6375;
    }
    uVar5 = 0xec00000072656b63;
    uVar4 = 0x6f6c6e55736e656c;
    if (param_2 != 6) {
      uVar5 = uVar3;
      uVar4 = uVar1;
    }
    uVar3 = 0x657469726f766166;
    if (param_2 != 4) {
      uVar2 = 0xee006e6f69746365;
      uVar3 = 0x6c6c6f43736e656c;
    }
    if (param_2 < 6) {
      uVar4 = uVar3;
      uVar5 = uVar2;
    }
  }
  func_0x000107c5fb58(param_1,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 103178ef8; end: 103178f63;  */

void FUN_103178ef8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 103178f64; end: 103178f97;  */

void FUN_103178f64(undefined8 *param_1)

{
  *param_1 = 0xd000000000000011;
  param_1[1] = 0x800000010efb7430;
  return;
}



/* Entry: 103178f98; end: 10317903f;  */

void FUN_103178f98(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  if (lRam000000011350e440 != -1) {
    func_0x000107c61568(0x11350e440,0x103178f84);
  }
  func_0x000107c61428(0x11350e448,auStack_48,0x21,0);
  func_0x00010006c00c(param_1,param_2);
  func_0x000103179358(0,0,param_1,param_2);
  func_0x000107c614a8(auStack_48);
  func_0x00010006c090(param_1,param_2);
  return;
}



/* Entry: 103179040; end: 103179193;  */

undefined1  [16] FUN_103179040(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = 0xe900000000000073;
  if (param_1 < 4) {
    uVar5 = 0x736e654c6576696c;
    uVar2 = 0xef77656976657250;
    if (param_1 != 2) {
      uVar5 = 0xd000000000000010;
      uVar2 = 0x800000010efb7460;
    }
    uVar1 = 0x65736e654c6c6c61;
    if (param_1 != 0) {
      uVar4 = 0xe800000000000000;
      uVar1 = 0x64656b636f6c6e75;
    }
    if (param_1 < 2) {
      uVar2 = uVar4;
      uVar5 = uVar1;
    }
    auVar7._8_8_ = uVar2;
    auVar7._0_8_ = uVar5;
    return auVar7;
  }
  uVar5 = 0xeb00000000726577;
  uVar2 = 0x61724473656d6167;
  if (param_1 != 7) {
    uVar5 = 0xe300000000000000;
    uVar2 = 0x6f6375;
  }
  uVar1 = 0xec00000072656b63;
  uVar3 = 0x6f6c6e55736e656c;
  if (param_1 != 6) {
    uVar1 = uVar5;
    uVar3 = uVar2;
  }
  uVar5 = 0x657469726f766166;
  if (param_1 != 4) {
    uVar4 = 0xee006e6f69746365;
    uVar5 = 0x6c6c6f43736e656c;
  }
  if (param_1 < 6) {
    uVar1 = uVar4;
    uVar3 = uVar5;
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 103179194; end: 1031791d7;  */

void FUN_103179194(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_103178d48(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031791d8; end: 1031791df;  */

void FUN_1031791d8(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  uVar3 = 0xe900000000000073;
  if (bVar1 < 4) {
    uVar5 = 0x736e654c6576696c;
    uVar6 = 0xef77656976657250;
    if (bVar1 != 2) {
      uVar5 = 0xd000000000000010;
      uVar6 = 0x800000010efb7460;
    }
    uVar4 = 0x65736e654c6c6c61;
    if (bVar1 != 0) {
      uVar3 = 0xe800000000000000;
      uVar4 = 0x64656b636f6c6e75;
    }
    if (bVar1 < 2) {
      uVar5 = uVar4;
      uVar6 = uVar3;
    }
  }
  else {
    uVar4 = 0xeb00000000726577;
    uVar2 = 0x61724473656d6167;
    if (bVar1 != 7) {
      uVar4 = 0xe300000000000000;
      uVar2 = 0x6f6375;
    }
    uVar6 = 0xec00000072656b63;
    uVar5 = 0x6f6c6e55736e656c;
    if (bVar1 != 6) {
      uVar6 = uVar4;
      uVar5 = uVar2;
    }
    uVar4 = 0x657469726f766166;
    if (bVar1 != 4) {
      uVar3 = 0xee006e6f69746365;
      uVar4 = 0x6c6c6f43736e656c;
    }
    if (bVar1 < 6) {
      uVar5 = uVar4;
      uVar6 = uVar3;
    }
  }
  func_0x000107c5fb58(param_1,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 1031791e0; end: 103179273;  */

void FUN_1031791e0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  FUN_103178d48(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103179274; end: 10317942f;  */

void FUN_103179274(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103179348);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  puVar1 = (undefined8 *)(lVar7 + 0x20 + param_1 * 0x10);
  func_0x000107c61408(puVar1,lVar4,PTR___s10Foundation4DataVN_110350ae0);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10317934c);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103179350);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3 * 2;
    puVar3 = (undefined8 *)(lVar7 + 0x20 + param_2 * 0x10);
    if (puVar2 != puVar3 || puVar3 + lVar4 * 2 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103179354);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    puVar1[1] = param_5;
    func_0x00010006c00c(param_4,param_5);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103179358);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 103179430; end: 103179433;  */

void FUN_103179430(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f470e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db93fd8;
  func_0x000107c61520(&UNK_10db93fd8,&UNK_110617320);
  puRam0000000112f470e0 = puVar1;
  return;
}



/* Entry: 103179434; end: 103179473;  */

void FUN_103179434(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f470e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db93fd8;
  func_0x000107c61520(&UNK_10db93fd8,&UNK_110617320);
  puRam0000000112f470e0 = puVar1;
  return;
}



/* Entry: 103179474; end: 103179477;  */

void FUN_103179474(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f470e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db94078;
  func_0x000107c61520(&UNK_10db94078,&UNK_1106173d0);
  puRam0000000112f470e8 = puVar1;
  return;
}



/* Entry: 103179478; end: 1031794b7;  */

void FUN_103179478(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f470e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db94078;
  func_0x000107c61520(&UNK_10db94078,&UNK_1106173d0);
  puRam0000000112f470e8 = puVar1;
  return;
}



/* Entry: 1031794b8; end: 103179717;  */

uint FUN_1031794b8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103179718; end: 10317982f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103179718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x000107c610f8();
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47130);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f47138) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f47140) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47148);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103179830; end: 103179863;  */

uint FUN_103179830(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103179864();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103179864; end: 1031798ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103179864(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f47140);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    return 1;
  }
  return *(undefined1 *)(unaff_x20 + _DAT_112f47138);
}



/* Entry: 1031798ac; end: 10317992f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031798ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_112f47148))(param_4,param_1,param_2,param_3);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f47140));
  func_0x000107c61170(param_4);
  *(undefined1 *)(unaff_x20 + _DAT_112f47138) = 1;
  return;
}



/* Entry: 103179930; end: 103179a2b;  */

void FUN_103179930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  if (param_8 == 0) {
    param_8 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  FUN_1031798ac(param_3,param_4,param_5,param_6,param_7,param_8,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103179a2c; end: 103179aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103179a2c(code *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  pcVar2 = param_1;
  FUN_103179864();
  if (((ulong)pcVar2 & 1) == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    plVar1 = (long *)(unaff_x20 + _DAT_112f47130);
    if (*plVar1 == 0) {
      *plVar1 = (long)param_1;
      plVar1[1] = param_2;
      *(undefined1 *)(unaff_x20 + _DAT_112f47138) = 0;
      func_0x000100b64c10(param_1,param_2);
      lVar4 = *(long *)(unaff_x20 + _DAT_112f47140);
      lVar3 = lVar4;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar4);
        func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 103179aa8; end: 103179aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103179aa8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f47140);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 103179b00; end: 103179c0b;  */

void FUN_103179b00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106175d0;
    func_0x000107c613fc(&UNK_1106175d0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x103179d74;
  }
  func_0x000107c61174(param_1);
  FUN_103179a2c(uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103179c0c; end: 103179c33;  */

void FUN_103179c0c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103179b8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103179c34; end: 103179c4f;  */

void FUN_103179c34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.GamesExplorerPresenterBase",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103179d00);
  (*pcVar1)();
}



/* Entry: 103179c50; end: 103179c83;  */

void FUN_103179c50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103179c84; end: 103179cd3;  */

/* WARNING: Possible PIC construction at 0x000103179cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103179cb8) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103179c84(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47140));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f47148 + 8));
  return;
}



/* Entry: 103179cd4; end: 103179cff;  */

void FUN_103179cd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.GamesExplorerPresenterBase",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103179d00);
  (*pcVar1)();
}



/* Entry: 103179d00; end: 103179d03;  */

void FUN_103179d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 103179d04; end: 103179d67;  */

void FUN_103179d04(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_20 = &UNK_10db941d0;
  puStack_18 = &UNK_10db941e8;
  func_0x000107c61524(param_1,0,4,&puStack_30,param_1 + 0x58);
  return;
}



/* Entry: 103179d68; end: 103179d7b;  */

void FUN_103179d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e74c73c);
  return;
}



/* Entry: 103179d7c; end: 103179dbb;  */

void FUN_103179d7c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x0001007cb98c(param_1,param_2);
  return;
}



/* Entry: 103179dbc; end: 103179e1b; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter init] */

void FUN_103179dbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerARBarPresenter",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103179de8);
  (*pcVar1)();
}



/* Entry: 103179e1c; end: 103179e87; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103179e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103179e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103179e3c) */
/* WARNING: Removing unreachable block (ram,0x000103179e70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103179e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f471f0));
  return;
}



/* Entry: 103179e88; end: 103179ebb; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter exists] */

uint FUN_103179e88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103179ebc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}


