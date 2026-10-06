/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014afaec; end: 1014afaf3;  */

void FUN_1014afaec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014afaf4; end: 1014afb17;  */

void FUN_1014afaf4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014afb18; end: 1014afb3b;  */

void FUN_1014afb18(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010045630c();
  *param_1 = param_2;
  return;
}



/* Entry: 1014afb3c; end: 1014afba7;  */

void FUN_1014afb3c(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x40;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1014afba8;
  *(undefined1 *)(plVar4 + 7) = uVar3;
  plVar4[5] = lVar1;
  plVar4[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014afc00,0,0);
  return;
}



/* Entry: 1014afba8; end: 1014afbe3;  */

void FUN_1014afba8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014afbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014afbe4; end: 1014afbff;  */

void FUN_1014afbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014afc00,0,0);
  return;
}



/* Entry: 1014afc00; end: 1014afce3;  */

void FUN_1014afc00(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) goto LAB_1014afccc;
  puVar3 = *(undefined **)(unaff_x22 + 0x30);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___WCSession_1126a7298;
    func_0x000107c61168(PTR__OBJC_CLASS___WCSession_1126a7298);
    func_0x000107c41614();
    func_0x000107c61180();
  }
  bVar1 = *(byte *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  if (bVar1 == 2) {
    puVar2 = PTR__OBJC_CLASS___WCSession_1126a7298;
    func_0x000107c61168();
    func_0x000107c615f0(uVar5);
    func_0x000107c4a580();
    if (((ulong)puVar2 & 1) != 0) {
LAB_1014afca8:
      func_0x000107c53fcc(puVar3);
      func_0x000107c3d094(puVar3);
    }
  }
  else {
    func_0x000107c615f0(uVar5);
    if ((bVar1 & 1) != 0) goto LAB_1014afca8;
  }
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(puVar3);
LAB_1014afccc:
                    /* WARNING: Could not recover jumptable at 0x0001014afce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014afce4; end: 1014afdcb; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager session:activationDidCompleteWithState:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014afce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000101cd1ac4(0);
  func_0x000107c610f8();
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000101cd18dc(param_3,param_4);
  func_0x000107c5b58c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puStack_58 = puVar1;
  func_0x0001007d6d78(&puStack_58);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014afdcc; end: 1014afdcf; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager sessionDidBecomeInactive:] */

void FUN_1014afdcc(void)

{
  return;
}



/* Entry: 1014afdd0; end: 1014afea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014afdd0(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000101cd1ac4(0);
  func_0x000107c610f8();
  uVar3 = 0;
  func_0x000101cd18dc(0,0);
  func_0x000107c5b58c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puStack_48 = puVar2;
  func_0x0001007d6d78(&puStack_48);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___WCSession_1126a7298;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c4a580();
  if (iVar1 != 0) {
    func_0x000107c53fcc(param_1);
    func_0x000107c3d094(param_1);
  }
  return;
}



/* Entry: 1014afea4; end: 1014afef3; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager sessionDidDeactivate:] */

/* WARNING: Possible PIC construction at 0x0001014afedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014afee0) */

void FUN_1014afea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1014afdd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1014afef4; end: 1014b02b7;  */

/* WARNING: Removing unreachable block (ram,0x0001014b0170) */

void FUN_1014afef4(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puStack_a8;
  ulong *puStack_a0;
  long lStack_90;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  
  puVar4 = param_2;
  func_0x000101cd1b28();
  if (param_2[2] == 0) {
    uStack_78 = 0;
    puStack_80 = (ulong *)0x0;
    puStack_68 = (ulong *)0x0;
    uStack_70 = 0;
  }
  else {
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_2);
    uVar11 = uVar1;
    func_0x000100029284(uVar5);
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(param_2);
      uStack_78 = 0;
      puStack_80 = (ulong *)0x0;
      puStack_68 = (ulong *)0x0;
      uStack_70 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(param_2[7] + uVar5 * 0x20,&puStack_80);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_2);
      puVar2 = PTR___sypN_11034f1a8;
      if (puStack_68 != (ulong *)0x0) {
        ppuVar6 = &puStack_a8;
        func_0x000107c6147c(ppuVar6,&puStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        puVar3 = puStack_a0;
        puVar4 = puStack_a8;
        if (((ulong)ppuVar6 & 1) == 0) goto LAB_1014b0024;
        func_0x000101cd1b34();
        if (param_2[2] == 0) {
          uStack_78 = 0;
          puStack_80 = (ulong *)0x0;
          puStack_68 = (ulong *)0x0;
          uStack_70 = 0;
LAB_1014b00b0:
          ppuVar6 = &puStack_80;
          func_0x0001014b0b60(ppuVar6,0x112d387f8,&UNK_10d902650);
          puVar7 = (ulong *)0x0;
          puVar12 = (ulong *)0xf000000000000000;
        }
        else {
          puVar7 = *ppuVar6;
          puVar12 = ppuVar6[1];
          func_0x000107c61434(param_2);
          func_0x000107c61434(puVar12);
          puVar8 = puVar12;
          func_0x000100029284(puVar7);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x000107c6142c(param_2);
            uStack_78 = 0;
            puStack_80 = (ulong *)0x0;
            puStack_68 = (ulong *)0x0;
            uStack_70 = 0;
          }
          else {
            func_0x0001000bb420(param_2[7] + (long)puVar7 * 0x20,&puStack_80);
            func_0x000107c6142c(puVar12);
            puVar12 = param_2;
          }
          func_0x000107c6142c(puVar12);
          if (puStack_68 == (ulong *)0x0) goto LAB_1014b00b0;
          ppuVar6 = &puStack_a8;
          func_0x000107c6147c(ppuVar6,&puStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6)
          ;
          puVar7 = puStack_a8;
          puVar12 = puStack_a0;
          if ((int)ppuVar6 == 0) {
            puVar7 = (ulong *)0x0;
            puVar12 = (ulong *)0xf000000000000000;
          }
        }
        func_0x000101cd1b6c();
        puVar8 = *ppuVar6;
        if (((puVar8 == puVar4) && (ppuVar6[1] == puVar3)) ||
           (func_0x000107c605b8(puVar8,ppuVar6[1],puVar4,puVar3,0), ((ulong)puVar8 & 1) != 0)) {
          puVar10 = (ulong *)&UNK_11046bbc8;
          FUN_1014b0c10();
LAB_1014b0110:
          if ((ulong)puVar12 >> 0x3c < 0xf) {
            uVar9 = 0;
            func_0x000107c5eb24();
            func_0x000107c613fc();
            func_0x000107c5eb20();
            ppuVar6 = &puStack_80;
            puStack_68 = puVar10;
            puStack_60 = puVar8;
            func_0x0001014b0ba0(ppuVar6);
            func_0x000107c5eb1c(ppuVar6,puVar10,puVar7,puVar12,puVar10,puVar8);
            func_0x000107c61574(uVar9);
          }
          else {
            puStack_60 = (ulong *)0x0;
            uStack_78 = 0;
            puStack_80 = (ulong *)0x0;
            puStack_68 = (ulong *)0x0;
            uStack_70 = 0;
          }
          func_0x0001014b0b10(&puStack_80,&puStack_a8);
          if (lStack_90 != 0) {
            func_0x0001000a8868(&puStack_a8,lStack_90);
            param_1[5] = lStack_90;
            func_0x0001014b0ba0(param_1 + 2);
            (**(code **)(*(long *)(lStack_90 + -8) + 0x10))();
            func_0x0001000b44c0(puVar7,puVar12);
            func_0x0001014b0b60(&puStack_80,0x112da56f8,&UNK_10d94ad78);
            func_0x0001000834e4(&puStack_a8);
            goto LAB_1014b024c;
          }
          func_0x0001014b0b60(&puStack_80,0x112da56f8,&UNK_10d94ad78);
          func_0x0001000b44c0(puVar7,puVar12);
          func_0x0001014b0b60(&puStack_a8,0x112da56f8,&UNK_10d94ad78);
        }
        else {
          func_0x000101cd1b88();
          puVar10 = (ulong *)*puVar8;
          if (((puVar10 == puVar4) && ((ulong *)puVar8[1] == puVar3)) ||
             (func_0x000107c605b8(puVar10,(ulong *)puVar8[1],puVar4,puVar3,0),
             ((ulong)puVar10 & 1) != 0)) {
            puVar10 = (ulong *)0x0;
            func_0x000101cd54fc();
            puVar8 = puVar10;
            FUN_1014b0acc();
            goto LAB_1014b0110;
          }
          func_0x0001000b44c0(puVar7,puVar12);
        }
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
LAB_1014b024c:
        *param_1 = puVar4;
        param_1[1] = puVar3;
        return;
      }
    }
  }
  func_0x0001014b0b60(&puStack_80,0x112d387f8,&UNK_10d902650);
LAB_1014b0024:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1014b02b8; end: 1014b02c3; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager session:didReceiveMessage:] */

void FUN_1014b02b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1014b08c8)(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1014b02c4; end: 1014b041f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b02c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001014b0a90(param_2,&lStack_80);
  lVar2 = _DAT_112da5698;
  func_0x000107c61428(param_1 + _DAT_112da5698,auStack_98,0x21,0);
  uVar5 = *(ulong *)(param_1 + lVar2);
  uVar1 = uVar5;
  func_0x000107c61558();
  *(ulong *)(param_1 + lVar2) = uVar5;
  uVar3 = uVar5;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_1014b07ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(param_1 + lVar2) = uVar3;
  }
  uVar1 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1014b07ac(uVar5,uVar1 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  lVar4 = uVar5 + uVar1 * 0x30;
  *(undefined8 *)(lVar4 + 0x38) = uStack_68;
  *(undefined8 *)(lVar4 + 0x30) = uStack_70;
  *(undefined8 *)(lVar4 + 0x48) = uStack_58;
  *(undefined8 *)(lVar4 + 0x40) = uStack_60;
  *(undefined8 *)(lVar4 + 0x28) = uStack_78;
  *(long *)(lVar4 + 0x20) = lStack_80;
  *(ulong *)(param_1 + lVar2) = uVar5;
  func_0x000107c614a8(auStack_98);
  lVar2 = 0x112da56e8;
  func_0x0001000285a8(0x112da56e8,&UNK_10d94ad68);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x0001014b0a90(param_2,lVar2 + 0x20);
  lStack_80 = lVar2;
  func_0x0001002a64a8(&lStack_80);
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 1014b0420; end: 1014b042b; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager session:didReceiveUserInfo:] */

void FUN_1014b0420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1014b0988)(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1014b042c; end: 1014b04bf;  */

void FUN_1014b042c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_5)(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1014b04c0; end: 1014b056b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b04c0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da5698;
  func_0x000107c61428(param_2 + _DAT_112da5698,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  uStack_50 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000100087f6c(&uStack_50);
  func_0x000107c6142c(uVar3);
  uVar3 = 0x112da56d8;
  uStack_50 = param_1;
  func_0x0001000285a8(0x112da56d8,&UNK_10d94ad60);
  uVar2 = uVar3;
  FUN_1014b075c();
  func_0x0001000d25f4(&uStack_50,uVar3,uVar2);
  return;
}



/* Entry: 1014b056c; end: 1014b05c7; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager init] */

void FUN_1014b056c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapchatWatchServicesImplementation.SnapchatWatchSessionManager",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b0598);
  (*pcVar1)();
}



/* Entry: 1014b05c8; end: 1014b06b3; -[_TtC35SnapchatWatchServicesImplementation27SnapchatWatchSessionManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b05c8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da5670));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da5678));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da5680));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da5688));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da5690));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da5698));
  return;
}



/* Entry: 1014b06b4; end: 1014b0753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1014b06b4(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  func_0x00010006c804();
  puVar1 = &UNK_1103c98f8;
  func_0x000107c613fc(&UNK_1103c98f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112da56d0,&UNK_10d94ad58);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_1014b0754;
  func_0x0001000b64ac(FUN_1014b0754,puVar1);
  func_0x000100070bfc();
  return pcVar2;
}



/* Entry: 1014b0754; end: 1014b075b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b0754(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da5698;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112da5698,auStack_48,0,0);
  uVar4 = *(undefined8 *)(lVar3 + lVar1);
  uStack_50 = uVar4;
  func_0x000107c61434(uVar4);
  func_0x000100087f6c(&uStack_50);
  func_0x000107c6142c(uVar4);
  uVar4 = 0x112da56d8;
  uStack_50 = param_1;
  func_0x0001000285a8(0x112da56d8,&UNK_10d94ad60);
  uVar2 = uVar4;
  FUN_1014b075c();
  func_0x0001000d25f4(&uStack_50,uVar4,uVar2);
  return;
}



/* Entry: 1014b075c; end: 1014b07ab;  */

void FUN_1014b075c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da56e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112da56d8;
  func_0x00010002969c(0x112da56d8,&UNK_10d94ad60);
  puVar2 = &DAT_10dd3c860;
  func_0x000107c61520(&DAT_10dd3c860,uVar1);
  puRam0000000112da56e0 = puVar2;
  return;
}



/* Entry: 1014b07ac; end: 1014b0a43;  */

undefined * FUN_1014b07ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b08c8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112da56e8;
    func_0x0001000285a8(0x112da56e8,&UNK_10d94ad68);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11046b7d0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014b0a44; end: 1014b0a5b;  */

void FUN_1014b0a44(void)

{
  long unaff_x20;
  
  FUN_1014b02c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1014b0a5c; end: 1014b0acb;  */

undefined8 FUN_1014b0a5c(undefined8 param_1)

{
  (*(code *)&DAT_101cd1404)();
  return param_1;
}



/* Entry: 1014b0acc; end: 1014b0b0f;  */

void FUN_1014b0acc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da56f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000101cd54fc(0xff);
  puVar2 = &UNK_10d9f6cd0;
  func_0x000107c61520(&UNK_10d9f6cd0,uVar1);
  puRam0000000112da56f0 = puVar2;
  return;
}



/* Entry: 1014b0b10; end: 1014b0bdb;  */

undefined8 FUN_1014b0b10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112da56f8;
  func_0x0001000285a8(0x112da56f8,&UNK_10d94ad78);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1014b0bdc; end: 1014b0c0f;  */

void FUN_1014b0bdc(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_1[3] + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    return;
  }
  uVar2 = (ulong)uVar1 & 0xff;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_slowDealloc_11034f500)
            (*param_1,*(long *)(*(long *)(param_1[3] + -8) + 0x40) +
                      (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),uVar2 | 7);
  return;
}



/* Entry: 1014b0c10; end: 1014b0c4f;  */

void FUN_1014b0c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da5700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6848;
  func_0x000107c61520(&UNK_10d9f6848,&UNK_11046bbc8);
  puRam0000000112da5700 = puVar1;
  return;
}



/* Entry: 1014b0c50; end: 1014b0c83;  */

void FUN_1014b0c50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1014b0c84; end: 1014b0d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014b0c84(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + _DAT_112e18028);
    puVar3 = PTR__OBJC_CLASS___WCSession_1126a7298;
    func_0x000107c61168(PTR__OBJC_CLASS___WCSession_1126a7298);
    func_0x000107c61174(uVar2);
    func_0x000107c4a580(puVar3);
    puVar3 = PTR_PTR_1126a72a8;
    func_0x000107c610f8(PTR_PTR_1126a72a8);
    func_0x000107c48614();
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar1);
  }
  return puVar3;
}



/* Entry: 1014b0d48; end: 1014b0d7f;  */

void FUN_1014b0d48(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1014b0d80; end: 1014b0d8f;  */

void FUN_1014b0d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014b0d90; end: 1014b0db3;  */

void FUN_1014b0d90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b0db4; end: 1014b0dd7;  */

void FUN_1014b0db4(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100457f04();
  *param_1 = param_2;
  return;
}



/* Entry: 1014b0dd8; end: 1014b0e4b;  */

long FUN_1014b0dd8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001009d2054(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x0001009d2074(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1014b0e4c; end: 1014b0e8b;  */

void FUN_1014b0e4c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001009d21c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1014b0e8c; end: 1014b0eb7;  */

undefined8 FUN_1014b0e8c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 1014b0eb8; end: 1014b1003;  */

long FUN_1014b0eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a72b0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef38f70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 1014b1004; end: 1014b102f;  */

void FUN_1014b1004(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b1030; end: 1014b107f;  */

undefined8 FUN_1014b1030(void)

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



/* Entry: 1014b1080; end: 1014b10bb;  */

undefined1  [16] FUN_1014b1080(void)

{
  return ZEXT816(0x1103c9b80);
}



/* Entry: 1014b10bc; end: 1014b112b;  */

undefined8 FUN_1014b10bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001009fec34(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1014b112c; end: 1014b115f;  */

void FUN_1014b112c(void)

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



/* Entry: 1014b1160; end: 1014b11af;  */

undefined8 FUN_1014b1160(void)

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



/* Entry: 1014b11b0; end: 1014b11eb;  */

undefined1  [16] FUN_1014b11b0(void)

{
  return ZEXT816(0x1103c9c28);
}



/* Entry: 1014b11ec; end: 1014b1337;  */

long FUN_1014b11ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a72c0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 1014b1338; end: 1014b1363;  */

void FUN_1014b1338(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b1364; end: 1014b13b3;  */

undefined8 FUN_1014b1364(void)

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



/* Entry: 1014b13b4; end: 1014b13ef;  */

undefined1  [16] FUN_1014b13b4(void)

{
  return ZEXT816(0x1103c9cd0);
}



/* Entry: 1014b13f0; end: 1014b145b;  */

long FUN_1014b13f0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010097ad34();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x00010097adc0();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1014b145c; end: 1014b1487;  */

void FUN_1014b145c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b1488; end: 1014b14cb;  */

undefined1  [16] FUN_1014b1488(void)

{
  return ZEXT816(0x1103c9dd8);
}



/* Entry: 1014b14cc; end: 1014b151f;  */

void FUN_1014b14cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b1520; end: 1014b1593;  */

long FUN_1014b1520(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100a10abc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000100a10adc(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1014b1594; end: 1014b15bf;  */

void FUN_1014b1594(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b15c0; end: 1014b15f3;  */

undefined1  [16] FUN_1014b15c0(void)

{
  return ZEXT816(0x1103c9ea0);
}



/* Entry: 1014b15f4; end: 1014b161f;  */

undefined8 FUN_1014b15f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 1014b1620; end: 1014b1bdb;  */

/* WARNING: Possible PIC construction at 0x0001014b184c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b18a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b19d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b19e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014b19d8) */
/* WARNING: Removing unreachable block (ram,0x0001014b18a8) */
/* WARNING: Removing unreachable block (ram,0x0001014b1850) */
/* WARNING: Removing unreachable block (ram,0x0001014b19e8) */

void FUN_1014b1620(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  if (param_1 == '\0') {
    puVar3 = &UNK_1103ca080;
    func_0x000107c613fc(&UNK_1103ca080,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    func_0x000107c61174(param_4);
    func_0x000107c6157c(param_6);
    FUN_1014b1d00(param_2,param_3,0x1014b2674,puVar3);
  }
  else if (param_1 == '\x01') {
    puVar3 = &UNK_1103ca058;
    func_0x000107c613fc(&UNK_1103ca058,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    func_0x000107c61174(param_4);
    func_0x000107c6157c(param_6);
    FUN_1014b22f0(param_2,param_3,FUN_1014b2614,puVar3);
  }
  else {
    func_0x000107c60f34();
    puVar3 = &UNK_1103c9f90;
    puVar4 = puVar3;
    func_0x000107c613fc(&UNK_1103c9f90,0x18,7);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c613fc(&UNK_1103c9f90,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    func_0x000107c60f38(lVar2);
    puVar3 = &UNK_1103c9fb8;
    func_0x000107c613fc(&UNK_1103c9fb8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar4;
    *(long *)(puVar3 + 0x18) = lVar2;
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(lVar2);
    FUN_1014b1d00(param_2,param_3,FUN_1014b1bdc,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1014b1bdc; end: 1014b1bf3;  */

void FUN_1014b1bdc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1014b1bf4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1014b1bf4; end: 1014b1c5b;  */

void FUN_1014b1bf4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar1);
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 1014b1c5c; end: 1014b1cff;  */

void FUN_1014b1c5c(long param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  FUN_1014b28e8();
  (*param_3)(uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1014b1d00; end: 1014b2037;  */

void FUN_1014b1d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  
  puVar1 = PTR_PTR_1126a7318;
  func_0x000107c61168(PTR_PTR_1126a7318);
  uVar2 = 0x6d2f656c706f6570;
  func_0x000107c5fadc(0x6d2f656c706f6570,0xe900000000000065);
  func_0x000107c4f7a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar4 = lVar3;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar4;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  uVar2 = 0x2520726572616542;
  uVar9 = 0xe900000000000040;
  func_0x000107c5fb00(0x2520726572616542,0xe900000000000040,lVar3);
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = 0x7a69726f68747541;
  *(undefined8 *)(lVar3 + 0x28) = 0xed00006e6f697461;
  *(undefined8 *)(lVar3 + 0x30) = uVar2;
  *(undefined8 *)(lVar3 + 0x38) = uVar9;
  lVar4 = lVar3;
  func_0x0001001830b8();
  func_0x000107c61588(lVar3);
  FUN_1014b2cfc((undefined8 *)(lVar3 + 0x20),0x112d38308,&UNK_10d902040);
  func_0x000107c61174(puVar1);
  lVar3 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar5,puVar5,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c524e0(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar3);
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef85ab0);
  func_0x000107c57334(puVar1);
  func_0x000107c61170(uVar2);
  puVar5 = &UNK_1103c9f90;
  func_0x000107c613fc(&UNK_1103c9f90,0x18,7);
  *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar6 = &UNK_1103ca158;
  func_0x000107c613fc(&UNK_1103ca158,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_1103ca1d0;
  func_0x000107c613fc(&UNK_1103ca1d0,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  *(undefined8 *)(puVar7 + 0x28) = param_4;
  pcStack_b0 = FUN_1014b35e4;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_1014b2228;
  puStack_b8 = &UNK_1103ca1e8;
  ppuVar8 = &puStack_d0;
  puStack_a8 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar6 = puStack_a8;
  func_0x000107c61174(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar6);
  func_0x000107c42b50(uVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1014b2038; end: 1014b2063;  */

void FUN_1014b2038(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014b2064; end: 1014b2227;  */

void FUN_1014b2064(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  code *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar2 = 0;
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    func_0x000100672b50(param_2,auStack_88);
    if (lStack_70 == 0) {
      func_0x000107c61574(param_4);
      FUN_1014b2cfc(auStack_88,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar1 = 0;
      FUN_1014b35f0(0,0x112da5e18,&PTR_PTR_1126a7320);
      func_0x000107c6147c(apuStack_a0,auStack_88,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if ((uVar2 & 1) == 0) {
        func_0x000107c61574(param_4);
      }
      else {
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_3 == 0) {
          puVar3 = apuStack_a0[0];
          func_0x000107c40230();
          func_0x000107c61180();
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar3 != (undefined *)0x0) {
            uVar1 = 0;
            FUN_1014b35f0(0,0x112da5de0,&PTR_PTR_1126a72e0);
            puVar4 = puVar3;
            func_0x000107c5fc54(puVar3,uVar1);
            func_0x000107c61170(puVar3);
            puVar5 = puVar4;
            func_0x0001014b3104(puVar4,0);
            func_0x000107c6142c(puVar4);
          }
        }
        func_0x000107c61170(apuStack_a0[0]);
        func_0x000107c61574(param_4);
        func_0x000107c61428(param_5 + 0x10,apuStack_a0,1,0);
        uVar1 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)(param_5 + 0x10) = puVar5;
        func_0x000107c6142c(uVar1);
      }
    }
  }
  func_0x000107c61428(param_5 + 0x10,auStack_88,0,0);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  func_0x000107c61434(uVar1);
  (*param_6)();
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1014b2228; end: 1014b22ef;  */

void FUN_1014b2228(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_60 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    lVar3 = 0;
    alStack_60[1] = 0;
    alStack_60[2] = 0;
  }
  else {
    lVar3 = param_3;
    func_0x000107c614f0();
  }
  alStack_60[0] = param_3;
  alStack_60[3] = lVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  uVar4 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,alStack_60,param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
  FUN_1014b2cfc(alStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 1014b22f0; end: 1014b25eb;  */

void FUN_1014b22f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  
  puVar1 = PTR_PTR_1126a72d0;
  func_0x000107c61168(PTR_PTR_1126a72d0);
  func_0x000107c4f734();
  func_0x000107c61180();
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  lVar3 = lVar2;
  func_0x00010075bbf0();
  *(long *)(lVar2 + 0x40) = lVar3;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  uVar4 = 0x2520726572616542;
  uVar9 = 0xe900000000000040;
  func_0x000107c5fb00(0x2520726572616542,0xe900000000000040,lVar2);
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x7a69726f68747541;
  *(undefined8 *)(lVar2 + 0x28) = 0xed00006e6f697461;
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  *(undefined8 *)(lVar2 + 0x38) = uVar9;
  lVar3 = lVar2;
  func_0x0001001830b8();
  func_0x000107c61588(lVar2);
  FUN_1014b2cfc((undefined8 *)(lVar2 + 0x20),0x112d38308,&UNK_10d902040);
  func_0x000107c61174(puVar1);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,puVar5,puVar5,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  func_0x000107c524e0(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  uVar4 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef85ab0);
  func_0x000107c57b68(puVar1);
  func_0x000107c61170(uVar4);
  puVar5 = &UNK_1103c9f90;
  func_0x000107c613fc(&UNK_1103c9f90,0x18,7);
  *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar6 = &UNK_1103ca158;
  func_0x000107c613fc(&UNK_1103ca158,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_1103ca180;
  func_0x000107c613fc(&UNK_1103ca180,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  *(undefined8 *)(puVar7 + 0x28) = param_4;
  pcStack_b0 = FUN_1014b2cf0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_1014b2228;
  puStack_b8 = &UNK_1103ca198;
  ppuVar8 = &puStack_d0;
  puStack_a8 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar6 = puStack_a8;
  func_0x000107c61174(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar6);
  func_0x000107c42b50(uVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1014b25ec; end: 1014b2613;  */

void FUN_1014b25ec(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_1014b28e8();
  (*pcVar2)(uVar4);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 1014b2614; end: 1014b26a7;  */

void FUN_1014b2614(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001014b1a08(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),&UNK_1103ca108,FUN_1014b28c0,&UNK_1103ca120)
  ;
  return;
}



/* Entry: 1014b26a8; end: 1014b286b;  */

void FUN_1014b26a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  code *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar2 = 0;
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    func_0x000100672b50(param_2,auStack_88);
    if (lStack_70 == 0) {
      func_0x000107c61574(param_4);
      FUN_1014b2cfc(auStack_88,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar1 = 0;
      FUN_1014b35f0(0,0x112da5dd8,&PTR_PTR_1126a72d8);
      func_0x000107c6147c(apuStack_a0,auStack_88,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if ((uVar2 & 1) == 0) {
        func_0x000107c61574(param_4);
      }
      else {
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_3 == 0) {
          puVar3 = apuStack_a0[0];
          func_0x000107c4e0e0();
          func_0x000107c61180();
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar3 != (undefined *)0x0) {
            uVar1 = 0;
            FUN_1014b35f0(0,0x112da5de0,&PTR_PTR_1126a72e0);
            puVar4 = puVar3;
            func_0x000107c5fc54(puVar3,uVar1);
            func_0x000107c61170(puVar3);
            puVar5 = puVar4;
            func_0x0001014b3104(puVar4,1);
            func_0x000107c6142c(puVar4);
          }
        }
        func_0x000107c61170(apuStack_a0[0]);
        func_0x000107c61574(param_4);
        func_0x000107c61428(param_5 + 0x10,apuStack_a0,1,0);
        uVar1 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)(param_5 + 0x10) = puVar5;
        func_0x000107c6142c(uVar1);
      }
    }
  }
  func_0x000107c61428(param_5 + 0x10,auStack_88,0,0);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  func_0x000107c61434(uVar1);
  (*param_6)();
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1014b286c; end: 1014b288f;  */

void FUN_1014b286c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b2890; end: 1014b2893;  */

/* WARNING: Possible PIC construction at 0x0001014b184c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b18a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b19d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b19e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014b19d8) */
/* WARNING: Removing unreachable block (ram,0x0001014b18a8) */
/* WARNING: Removing unreachable block (ram,0x0001014b1850) */
/* WARNING: Removing unreachable block (ram,0x0001014b19e8) */

void FUN_1014b2890(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  if (param_1 == '\0') {
    puVar3 = &UNK_1103ca080;
    func_0x000107c613fc(&UNK_1103ca080,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    func_0x000107c61174(param_4);
    func_0x000107c6157c(param_6);
    FUN_1014b1d00(param_2,param_3,0x1014b2674,puVar3);
  }
  else if (param_1 == '\x01') {
    puVar3 = &UNK_1103ca058;
    func_0x000107c613fc(&UNK_1103ca058,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    func_0x000107c61174(param_4);
    func_0x000107c6157c(param_6);
    FUN_1014b22f0(param_2,param_3,FUN_1014b2614,puVar3);
  }
  else {
    func_0x000107c60f34();
    puVar3 = &UNK_1103c9f90;
    puVar4 = puVar3;
    func_0x000107c613fc(&UNK_1103c9f90,0x18,7);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c613fc(&UNK_1103c9f90,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    func_0x000107c60f38(lVar2);
    puVar3 = &UNK_1103c9fb8;
    func_0x000107c613fc(&UNK_1103c9fb8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar4;
    *(long *)(puVar3 + 0x18) = lVar2;
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(lVar2);
    FUN_1014b1d00(param_2,param_3,FUN_1014b1bdc,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1014b2894; end: 1014b28bf;  */

void FUN_1014b2894(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014b28c0; end: 1014b28e7;  */

void FUN_1014b28c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1014b28e8; end: 1014b29eb;  */

void FUN_1014b28e8(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b29e0);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1014b2bcc();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b29e4);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b29e8);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x28 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_11041fe90);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b29ec);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1014b29ec; end: 1014b2ba7;  */

ulong FUN_1014b29ec(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b2ad0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b2ad4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1014b35f0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b2ba8);
  (*pcVar2)();
}



/* Entry: 1014b2ba8; end: 1014b2bcb;  */

void FUN_1014b2ba8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1014b2bcc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1014b2bcc; end: 1014b2cef;  */

undefined *
FUN_1014b2bcc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b2cf0);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112da5dd0;
    func_0x0001000285a8(0x112da5dd0,&UNK_10d94b740);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x28) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_11041fe90);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x28 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar2;
}



/* Entry: 1014b2cf0; end: 1014b2cfb;  */

void FUN_1014b2cf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar5 = 0;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,lVar2,pcVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000100672b50(param_2,auStack_88);
    if (lStack_70 == 0) {
      func_0x000107c61574(lVar3);
      FUN_1014b2cfc(auStack_88,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar4 = 0;
      FUN_1014b35f0(0,0x112da5dd8,&PTR_PTR_1126a72d8);
      func_0x000107c6147c(apuStack_a0,auStack_88,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61574(lVar3);
      }
      else {
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_3 == 0) {
          puVar6 = apuStack_a0[0];
          func_0x000107c4e0e0();
          func_0x000107c61180();
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar6 != (undefined *)0x0) {
            uVar4 = 0;
            FUN_1014b35f0(0,0x112da5de0,&PTR_PTR_1126a72e0);
            puVar7 = puVar6;
            func_0x000107c5fc54(puVar6,uVar4);
            func_0x000107c61170(puVar6);
            puVar8 = puVar7;
            func_0x0001014b3104(puVar7,1);
            func_0x000107c6142c(puVar7);
          }
        }
        func_0x000107c61170(apuStack_a0[0]);
        func_0x000107c61574(lVar3);
        func_0x000107c61428(lVar2 + 0x10,apuStack_a0,1,0);
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        *(undefined **)(lVar2 + 0x10) = puVar8;
        func_0x000107c6142c(uVar4);
      }
    }
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_88,0,0);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61434(uVar4);
  (*pcVar1)();
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 1014b2cfc; end: 1014b2d3b;  */

undefined8 FUN_1014b2cfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014b2d3c; end: 1014b35af;  */

undefined * FUN_1014b2d3c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    uVar4 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar4,0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b2f94);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b2f74);
          (*pcVar2)();
        }
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b2f78);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar8;
        uVar4 = param_1;
        FUN_1014b29ec(uVar8,param_1,&PTR_PTR_1126a7310,0x112da5e10);
      }
      uVar10 = uVar3;
      func_0x000107c42120();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uVar10 = uVar3;
        func_0x000107c44400();
        func_0x000107c61180();
        if (uVar10 == 0) {
          uVar6 = 0;
          uVar10 = 0xe000000000000000;
          uVar11 = uVar4;
        }
        else {
          uVar6 = uVar10;
          func_0x000107c5faec();
          uVar11 = uVar4;
          func_0x000107c61170(uVar10);
          uVar10 = uVar4;
        }
        uVar4 = uVar3;
        func_0x000107c42db4();
        func_0x000107c61180();
        if (uVar4 == 0) {
          uVar9 = 0;
          uVar11 = 0xe000000000000000;
        }
        else {
          uVar9 = uVar4;
          func_0x000107c5faec();
          func_0x000107c61170(uVar4);
        }
        func_0x000107c61434(uVar10);
        func_0x000107c5fb78(0x20,0xe100000000000000);
        func_0x000107c6142c(uVar10);
        func_0x000107c61434(uVar10);
        uVar5 = uVar11;
        func_0x000107c5fb78(uVar9);
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar10);
      }
      else {
        uVar6 = uVar10;
        func_0x000107c5faec();
        uVar5 = uVar4;
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar10);
        uVar10 = uVar4;
      }
      uVar3 = *(ulong *)(puVar1 + 0x10);
      uVar4 = uVar3 + 1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        uVar5 = uVar4;
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar4,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar4;
      *(ulong *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar10;
      uVar4 = uVar5;
    } while (uVar7 != uVar8);
  }
  return puVar1;
}



/* Entry: 1014b35b0; end: 1014b35e3;  */

void FUN_1014b35b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014b35e4; end: 1014b35ef;  */

void FUN_1014b35e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar5 = 0;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,lVar2,pcVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000100672b50(param_2,auStack_88);
    if (lStack_70 == 0) {
      func_0x000107c61574(lVar3);
      FUN_1014b2cfc(auStack_88,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar4 = 0;
      FUN_1014b35f0(0,0x112da5e18,&PTR_PTR_1126a7320);
      func_0x000107c6147c(apuStack_a0,auStack_88,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61574(lVar3);
      }
      else {
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_3 == 0) {
          puVar6 = apuStack_a0[0];
          func_0x000107c40230();
          func_0x000107c61180();
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar6 != (undefined *)0x0) {
            uVar4 = 0;
            FUN_1014b35f0(0,0x112da5de0,&PTR_PTR_1126a72e0);
            puVar7 = puVar6;
            func_0x000107c5fc54(puVar6,uVar4);
            func_0x000107c61170(puVar6);
            puVar8 = puVar7;
            func_0x0001014b3104(puVar7,0);
            func_0x000107c6142c(puVar7);
          }
        }
        func_0x000107c61170(apuStack_a0[0]);
        func_0x000107c61574(lVar3);
        func_0x000107c61428(lVar2 + 0x10,apuStack_a0,1,0);
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        *(undefined **)(lVar2 + 0x10) = puVar8;
        func_0x000107c6142c(uVar4);
      }
    }
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_88,0,0);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61434(uVar4);
  (*pcVar1)();
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 1014b35f0; end: 1014b362f;  */

void FUN_1014b35f0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014b3630; end: 1014b3657;  */

void FUN_1014b3630(long param_1,long param_2)

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



/* Entry: 1014b3658; end: 1014b3677;  */

void FUN_1014b3658(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1014b3678; end: 1014b3687;  */

void FUN_1014b3678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b3688; end: 1014b36f7;  */

void FUN_1014b3688(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x00010097ada0();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a72c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  uVar3 = 0;
  func_0x000100092858(0);
  func_0x000107c610f8();
  func_0x00010097b71c(lVar1,&PTR_DAT_1103ca098,uVar3);
  *param_1 = lVar1;
  return;
}



/* Entry: 1014b36f8; end: 1014b374b;  */

undefined8 FUN_1014b36f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003c75b0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1014b374c; end: 1014b3787;  */

void FUN_1014b374c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b3788; end: 1014b37d7;  */

undefined8 FUN_1014b3788(void)

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



/* Entry: 1014b37d8; end: 1014b381b;  */

undefined1  [16] FUN_1014b37d8(void)

{
  return ZEXT816(0x1103ca350);
}



/* Entry: 1014b381c; end: 1014b3843;  */

void FUN_1014b381c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b3844; end: 1014b384b;  */

undefined8 FUN_1014b3844(void)

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



/* Entry: 1014b384c; end: 1014b3887;  */

undefined8 FUN_1014b384c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003c60e4(param_1);
  return unaff_x20;
}



/* Entry: 1014b3888; end: 1014b38b3;  */

void FUN_1014b3888(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b38b4; end: 1014b3903;  */

undefined8 FUN_1014b38b4(void)

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



/* Entry: 1014b3904; end: 1014b3947;  */

undefined1  [16] FUN_1014b3904(void)

{
  return ZEXT816(0x1103ca3f0);
}



/* Entry: 1014b3948; end: 1014b396f;  */

void FUN_1014b3948(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b3970; end: 1014b3977;  */

undefined8 FUN_1014b3970(void)

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


