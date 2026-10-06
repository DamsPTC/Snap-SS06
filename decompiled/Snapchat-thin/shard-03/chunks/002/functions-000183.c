/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026a9570; end: 1026a95b3; -[_TtC23MapRouterImplementation19HomeProfileWorkflow didCloseHomeProfileWithScope:] */

void FUN_1026a9570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1026a94d0(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026a95b4; end: 1026a95b7;  */

void FUN_1026a95b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a95b8; end: 1026a9857;  */

/* WARNING: Possible PIC construction at 0x0001026a9724: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a95b8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb4a80);
  lVar3 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a28);
    func_0x000107c61428(puVar1,auStack_68,0,0);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar7)();
      func_0x000100cffc70(pcVar7,uVar4);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a30);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 != (code *)0x0) {
      uVar8 = puVar1[1];
      func_0x0001026e7134(0);
      func_0x000107c6157c(uVar8);
      uVar4 = 0;
      func_0x0001026e706c(0);
      (*pcVar7)();
      func_0x000107c61170(uVar4);
      func_0x000100cffc70(pcVar7,uVar8);
    }
    return;
  }
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1026a9858);
    (*pcVar7)();
  }
  func_0x000107c4e57c();
  func_0x000107c61170(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4a70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    FUN_1026a9858();
    lVar9 = *(long *)(unaff_x20 + _DAT_112eb4a38);
    lVar5 = *(long *)(lVar9 + _DAT_112eb85b8);
    lVar3 = lVar5;
    if (lVar5 == 0) {
      func_0x0001002ed07c(0);
      lVar3 = 0;
      func_0x000107c60110(0);
      lVar5 = 0;
    }
    uVar4 = *(undefined8 *)(lVar9 + _DAT_112eb85c0);
    uVar8 = *(undefined8 *)(lVar9 + _DAT_112eb85c8);
    func_0x000107c61434(uVar8);
    func_0x000107c61174(lVar5);
    func_0x000107c61434(uVar4);
    lVar5 = unaff_x20;
    func_0x00010437bb78();
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar8);
    func_0x000107c42c1c(lVar6);
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb4a48);
    func_0x000107c3eca4(lVar3);
    func_0x000107c61180();
    func_0x000107c52d50();
    func_0x000107c61170(lVar5);
  }
  else {
    func_0x000107c5a5d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1026a9858; end: 1026a9c7f;  */

/* WARNING: Possible PIC construction at 0x0001026a9930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a99e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a9bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a9bf0) */
/* WARNING: Removing unreachable block (ram,0x0001026a9c4c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9c3c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9c2c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9af0) */
/* WARNING: Removing unreachable block (ram,0x0001026a9be8) */
/* WARNING: Removing unreachable block (ram,0x0001026a9af4) */
/* WARNING: Removing unreachable block (ram,0x0001026a9bf8) */
/* WARNING: Removing unreachable block (ram,0x0001026a9af8) */
/* WARNING: Removing unreachable block (ram,0x0001026a9bfc) */
/* WARNING: Removing unreachable block (ram,0x0001026a9ae0) */
/* WARNING: Removing unreachable block (ram,0x0001026a99ec) */
/* WARNING: Removing unreachable block (ram,0x0001026a9b48) */
/* WARNING: Removing unreachable block (ram,0x0001026a9bc0) */
/* WARNING: Removing unreachable block (ram,0x0001026a9b4c) */
/* WARNING: Removing unreachable block (ram,0x0001026a99f0) */
/* WARNING: Removing unreachable block (ram,0x0001026a9a6c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9934) */
/* WARNING: Removing unreachable block (ram,0x0001026a99ac) */
/* WARNING: Removing unreachable block (ram,0x0001026a99b0) */
/* WARNING: Removing unreachable block (ram,0x0001026a99c0) */
/* WARNING: Removing unreachable block (ram,0x0001026a99c4) */
/* WARNING: Removing unreachable block (ram,0x0001026a9bb8) */
/* WARNING: Removing unreachable block (ram,0x0001026a9c40) */
/* WARNING: Removing unreachable block (ram,0x0001026a9c44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a9858(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb4a50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c4077c();
      iVar1 = (int)lVar2;
      func_0x000107c60a00();
      if ((iVar1 != 0) && (lVar2 = lVar3, FUN_1026a9dd0(), lVar2 != 0)) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112eb4a48);
        func_0x000107c4c458();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c3f040();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1026a9c80; end: 1026a9dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026a9c80(undefined **param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1026e876c(0);
  ppuVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = param_1;
    func_0x000107c611b4();
    if (ppuVar2 == &PTR_PTR_112eb8038 && param_1 != (undefined **)0x0) {
      puVar5 = param_1[7];
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar3 = puVar5;
        }
        func_0x000107c60480();
      }
      if (((puVar3 == (undefined *)0x0) && (puVar5 = param_1[6], *(long *)(puVar5 + 0x10) == 1)) &&
         ((uVar4 = *(ulong *)(puVar5 + 0x20),
          uVar4 == *(ulong *)(unaff_x20 + _DAT_112eb4a40) &&
          *(ulong *)(puVar5 + 0x28) == ((ulong *)(unaff_x20 + _DAT_112eb4a40))[1] ||
          (func_0x000107c605b8(), (uVar4 & 1) != 0)))) goto LAB_1026a9ca8;
    }
    uVar1 = 0;
  }
  else {
LAB_1026a9ca8:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1026a9dd0; end: 1026a9ee7;  */

/* WARNING: Possible PIC construction at 0x0001026a9e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a9e10) */
/* WARNING: Removing unreachable block (ram,0x0001026a9e3c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9e18) */
/* WARNING: Removing unreachable block (ram,0x0001026a9e4c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9e7c) */
/* WARNING: Removing unreachable block (ram,0x0001026a9e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a9dd0(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112eb4a68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1026a9ee8; end: 1026a9ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a9ee8(double param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb4a58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb4a40);
    func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112eb4a40))[1]);
    lVar4 = lVar1;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c5dcc0();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c61170();
        dVar3 = 85.0;
        goto LAB_1026a9f9c;
      }
    }
  }
  dVar3 = 35.0;
LAB_1026a9f9c:
  dVar5 = param_1;
  func_0x000108d31578(param_1,*(undefined8 *)(unaff_x20 + _DAT_112eb4a98));
  func_0x000108d313b8(param_1,param_2,0x400921fb54442d18,-(dVar3 * dVar5));
  func_0x000107c61170(lVar4);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1026a9ffc; end: 1026aa05b; -[_TtC23MapRouterImplementation14MeTrayWorkflow init] */

void FUN_1026a9ffc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.MeTrayWorkflow",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026aa028);
  (*pcVar1)();
}



/* Entry: 1026aa05c; end: 1026aa15f; -[_TtC23MapRouterImplementation14MeTrayWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026aa0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026aa128) */
/* WARNING: Removing unreachable block (ram,0x0001026aa108) */
/* WARNING: Removing unreachable block (ram,0x0001026aa0e8) */
/* WARNING: Removing unreachable block (ram,0x0001026aa0c8) */
/* WARNING: Removing unreachable block (ram,0x0001026aa0a4) */
/* WARNING: Removing unreachable block (ram,0x0001026aa148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa05c(long param_1)

{
  func_0x000100cffc70(*(undefined8 *)(param_1 + _DAT_112eb4a28),
                      ((undefined8 *)(param_1 + _DAT_112eb4a28))[1]);
  func_0x000100cffc70(*(undefined8 *)(param_1 + _DAT_112eb4a30),
                      ((undefined8 *)(param_1 + _DAT_112eb4a30))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb4a38));
  return;
}



/* Entry: 1026aa160; end: 1026aa17f;  */

void FUN_1026aa160(void)

{
  func_0x000107c61168(&PTR_PTR_1128588a0);
  return;
}



/* Entry: 1026aa180; end: 1026aa1b3;  */

/* WARNING: Possible PIC construction at 0x0001026a9724: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa180(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb4a80);
  lVar3 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a28);
    func_0x000107c61428(puVar1,auStack_68,0,0);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar7)();
      func_0x000100cffc70(pcVar7,uVar4);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a30);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 != (code *)0x0) {
      uVar8 = puVar1[1];
      func_0x0001026e7134(0);
      func_0x000107c6157c(uVar8);
      uVar4 = 0;
      func_0x0001026e706c(0);
      (*pcVar7)();
      func_0x000107c61170(uVar4);
      func_0x000100cffc70(pcVar7,uVar8);
    }
    return;
  }
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1026a9858);
    (*pcVar7)();
  }
  func_0x000107c4e57c();
  func_0x000107c61170(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4a70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    FUN_1026a9858();
    lVar9 = *(long *)(unaff_x20 + _DAT_112eb4a38);
    lVar5 = *(long *)(lVar9 + _DAT_112eb85b8);
    lVar3 = lVar5;
    if (lVar5 == 0) {
      func_0x0001002ed07c(0);
      lVar3 = 0;
      func_0x000107c60110(0);
      lVar5 = 0;
    }
    uVar4 = *(undefined8 *)(lVar9 + _DAT_112eb85c0);
    uVar8 = *(undefined8 *)(lVar9 + _DAT_112eb85c8);
    func_0x000107c61434(uVar8);
    func_0x000107c61174(lVar5);
    func_0x000107c61434(uVar4);
    lVar5 = unaff_x20;
    func_0x00010437bb78();
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar8);
    func_0x000107c42c1c(lVar6);
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb4a48);
    func_0x000107c3eca4(lVar3);
    func_0x000107c61180();
    func_0x000107c52d50();
    func_0x000107c61170(lVar5);
  }
  else {
    func_0x000107c5a5d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1026aa1b4; end: 1026aa1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026aa1b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4a28;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4a28,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026aa1f4;
  return auVar2;
}



/* Entry: 1026aa1f4; end: 1026aa20b;  */

void FUN_1026aa1f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026aa20c; end: 1026aa26b;  */

undefined1  [16] FUN_1026aa20c(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026aa26c; end: 1026aa27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa26c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a30);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026aa280; end: 1026aa2db;  */

void FUN_1026aa280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026aa2dc; end: 1026aa31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026aa2dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4a30;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4a30,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026aa92c;
  return auVar2;
}



/* Entry: 1026aa31c; end: 1026aa45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa31c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4a80);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar2 = *(long *)(unaff_x20 + _DAT_112eb4a70);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5a5d0();
      func_0x000107c615e8(lVar2);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a28);
    func_0x000107c61428(puVar1,auStack_48,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cffc70(pcVar5,uVar4);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4a30);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar6 = puVar1[1];
      func_0x0001026e7134(0);
      func_0x000107c6157c(uVar6);
      uVar4 = 0;
      func_0x0001026e706c(0);
      (*pcVar5)();
      func_0x000107c61170(uVar4);
      func_0x000100cffc70(pcVar5,uVar6);
    }
  }
  return;
}



/* Entry: 1026aa460; end: 1026aa487; -[_TtC23MapRouterImplementation14MeTrayWorkflow mapBitmojiTrayScopeDidDismiss] */

void FUN_1026aa460(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026aa31c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026aa488; end: 1026aa4db; -[_TtC23MapRouterImplementation14MeTrayWorkflow mapBitmojiTrayDidUpdateSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa488(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112eb4a60);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4fd98();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026aa4dc; end: 1026aa84b;  */

/* WARNING: Possible PIC construction at 0x0001026aa554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026aa808) */
/* WARNING: Removing unreachable block (ram,0x0001026aa7f8) */
/* WARNING: Removing unreachable block (ram,0x0001026aa708) */
/* WARNING: Removing unreachable block (ram,0x0001026aa6bc) */
/* WARNING: Removing unreachable block (ram,0x0001026aa558) */
/* WARNING: Removing unreachable block (ram,0x0001026aa55c) */
/* WARNING: Removing unreachable block (ram,0x0001026aa59c) */
/* WARNING: Removing unreachable block (ram,0x0001026aa5b0) */
/* WARNING: Removing unreachable block (ram,0x0001026aa5d8) */
/* WARNING: Removing unreachable block (ram,0x0001026aa600) */
/* WARNING: Removing unreachable block (ram,0x0001026aa6c8) */
/* WARNING: Removing unreachable block (ram,0x0001026aa628) */
/* WARNING: Removing unreachable block (ram,0x0001026aa824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa4dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb4a58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112eb4a88);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      puVar3 = PTR_PTR_1126dcbd0;
      func_0x000107c610f8(PTR_PTR_1126dcbd0);
      func_0x000107c488e0();
      puVar4 = PTR_PTR_1126b3fa0;
      func_0x000107c610f8(PTR_PTR_1126b3fa0);
      func_0x000107c61434(param_2);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(puVar2);
      func_0x000107c61174();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c47ca0(puVar4);
    }
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4e680(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026aa84c; end: 1026aa8a7; -[_TtC23MapRouterImplementation14MeTrayWorkflow mapBitmojiTrayDidSelectFriendCell:] */

void FUN_1026aa84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1026aa4dc(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1026aa8a8; end: 1026aa92b; -[_TtC23MapRouterImplementation14MeTrayWorkflow friendProfileDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001026aa8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aa900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026aa8e8) */
/* WARNING: Removing unreachable block (ram,0x0001026aa904) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa8a8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026aa92c; end: 1026aa92f;  */

void FUN_1026aa92c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026aa930; end: 1026aaa3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aa930(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar2 = _DAT_112eb4ae0;
  if (*(long *)(unaff_x20 + _DAT_112eb4ae0) == 0) {
    FUN_1026e31e8(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x0001026e3044();
    lStack_48 = lVar3;
    func_0x00010008a7c8(auStack_60,&lStack_48);
    func_0x000107c61170(lVar3);
    func_0x0001048580f8(&lStack_48);
    func_0x000107c61574(auStack_60[0]);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lStack_48;
    func_0x000107c615e8(uVar4);
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c5ba38();
    }
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4ac8);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cffc90(pcVar5,uVar4);
    }
  }
  return;
}



/* Entry: 1026aaa3c; end: 1026aaa9b; -[_TtC23MapRouterImplementation16MemoriesWorkflow init] */

void FUN_1026aaa3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.MemoriesWorkflow",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026aaa68);
  (*pcVar1)();
}



/* Entry: 1026aaa9c; end: 1026aaafb; -[_TtC23MapRouterImplementation16MemoriesWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aaa9c(long param_1)

{
  func_0x000100cffc90(*(undefined8 *)(param_1 + _DAT_112eb4ac8),
                      ((undefined8 *)(param_1 + _DAT_112eb4ac8))[1]);
  func_0x000100cffc90(*(undefined8 *)(param_1 + _DAT_112eb4ad0),
                      ((undefined8 *)(param_1 + _DAT_112eb4ad0))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4ad8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4ae0));
  return;
}



/* Entry: 1026aaafc; end: 1026aab1b;  */

void FUN_1026aaafc(void)

{
  func_0x000107c61168(&PTR_PTR_1128589d0);
  return;
}



/* Entry: 1026aab1c; end: 1026aab1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aab1c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar2 = _DAT_112eb4ae0;
  if (*(long *)(unaff_x20 + _DAT_112eb4ae0) == 0) {
    FUN_1026e31e8(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x0001026e3044();
    lStack_48 = lVar3;
    func_0x00010008a7c8(auStack_60,&lStack_48);
    func_0x000107c61170(lVar3);
    func_0x0001048580f8(&lStack_48);
    func_0x000107c61574(auStack_60[0]);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lStack_48;
    func_0x000107c615e8(uVar4);
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c5ba38();
    }
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4ac8);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cffc90(pcVar5,uVar4);
    }
  }
  return;
}



/* Entry: 1026aab20; end: 1026aab53;  */

bool FUN_1026aab20(undefined **param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = param_1;
  func_0x000107c611b4();
  return ppuVar1 == &PTR_PTR_112eb8638 && param_1 != (undefined **)0x0;
}



/* Entry: 1026aab54; end: 1026aab93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aab54(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112eb4ae0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112eb4ae0),PTR_s_end_1125c29d0);
    return;
  }
  return;
}



/* Entry: 1026aab94; end: 1026aabd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026aab94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4ac8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4ac8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026aabd4;
  return auVar2;
}



/* Entry: 1026aabd4; end: 1026aabeb;  */

void FUN_1026aabd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026aabec; end: 1026aac4b;  */

undefined1  [16] FUN_1026aabec(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026aac4c; end: 1026aac5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aac4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4ad0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026aac60; end: 1026aacbb;  */

void FUN_1026aac60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026aacbc; end: 1026aacfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026aacbc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4ad0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4ad0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026aad9c;
  return auVar2;
}



/* Entry: 1026aacfc; end: 1026aad9b; -[_TtC23MapRouterImplementation16MemoriesWorkflow mapMemoriesWorkflowDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aacfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb4ae0);
  *(undefined8 *)(param_1 + _DAT_112eb4ae0) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4ac8);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x000100cffc90(pcVar3,uVar2);
  }
  return;
}



/* Entry: 1026aad9c; end: 1026aad9f;  */

void FUN_1026aad9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026aada0; end: 1026aafb7;  */

/* WARNING: Possible PIC construction at 0x0001026aadd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaf90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026aaf74) */
/* WARNING: Removing unreachable block (ram,0x0001026aaf64) */
/* WARNING: Removing unreachable block (ram,0x0001026aaecc) */
/* WARNING: Removing unreachable block (ram,0x0001026aaee4) */
/* WARNING: Removing unreachable block (ram,0x0001026aaea4) */
/* WARNING: Removing unreachable block (ram,0x0001026aaea8) */
/* WARNING: Removing unreachable block (ram,0x0001026aaf94) */

void FUN_1026aada0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    FUN_1026aafb8(1);
    lVar3 = *(long *)(unaff_x20 + 0x78);
    if (lVar3 == 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      pcVar4 = *(code **)(unaff_x20 + 0x10);
      if (pcVar4 != (code *)0x0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c6157c(uVar5);
        (*pcVar4)();
        func_0x000100cffca0(pcVar4,uVar5);
      }
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x50);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      puVar2 = PTR_PTR_1126c5bf0;
      func_0x000107c610f8(PTR_PTR_1126c5bf0);
      func_0x000107c61174(lVar3);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c45990(puVar2);
    }
    else {
      func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
      func_0x000107c4c39c(lVar6);
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026aafb8; end: 1026ab147;  */

/* WARNING: Possible PIC construction at 0x0001026ab0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ab0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ab118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ab0dc) */
/* WARNING: Removing unreachable block (ram,0x0001026ab0f8) */
/* WARNING: Removing unreachable block (ram,0x0001026ab0ec) */
/* WARNING: Removing unreachable block (ram,0x0001026ab0cc) */
/* WARNING: Removing unreachable block (ram,0x0001026ab11c) */
/* WARNING: Removing unreachable block (ram,0x0001026ab120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aafb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb86e0);
  func_0x000107c60a00(*puVar1,puVar1[1]);
  FUN_1026ab148();
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb86e0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb8720);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar4 = PTR_PTR_1126b1e18;
  func_0x000107c610f8(PTR_PTR_1126b1e18);
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c47f04(uVar5,uVar6,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026ab148; end: 1026ab3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1026ab148(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb86f0);
  uVar4 = *puVar1;
  uVar3 = puVar1[1];
  uVar10 = uVar4 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar10 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb86f8);
    uVar10 = puVar1[1];
    if (uVar10 == 0) {
      func_0x000107c61434(uVar3);
      uVar5 = uVar4;
      uVar9 = uVar3;
    }
    else {
      uVar5 = *puVar1;
      uVar9 = uVar10;
    }
    puVar6 = PTR_PTR_1126b1ee0;
    func_0x000107c610f8(PTR_PTR_1126b1ee0);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar10);
    func_0x000107c5fadc(uVar4,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5fadc(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c47eb0(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb8700);
    lVar7 = puVar2[1];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar2;
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c5a344(puVar6);
    func_0x000107c61170(uVar8);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb8708);
    lVar7 = puVar2[1];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar2;
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c529b8(puVar6);
    func_0x000107c61170(uVar8);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb8710);
    lVar7 = puVar2[1];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar2;
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c573d0(puVar6);
    func_0x000107c61170(uVar8);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112eb8718);
    lVar7 = puVar2[1];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar2;
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c56034(puVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c57400(puVar6);
  }
  return puVar6;
}



/* Entry: 1026ab3e4; end: 1026ab487;  */

void FUN_1026ab3e4(void)

{
  long unaff_x20;
  
  func_0x000100cffca0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100cffca0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1026ab488; end: 1026ab48b;  */

/* WARNING: Possible PIC construction at 0x0001026aadd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aaf90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026aaf74) */
/* WARNING: Removing unreachable block (ram,0x0001026aaf64) */
/* WARNING: Removing unreachable block (ram,0x0001026aaecc) */
/* WARNING: Removing unreachable block (ram,0x0001026aaee4) */
/* WARNING: Removing unreachable block (ram,0x0001026aaea4) */
/* WARNING: Removing unreachable block (ram,0x0001026aaea8) */
/* WARNING: Removing unreachable block (ram,0x0001026aaf94) */

void FUN_1026ab488(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    FUN_1026aafb8(1);
    lVar3 = *(long *)(unaff_x20 + 0x78);
    if (lVar3 == 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      pcVar4 = *(code **)(unaff_x20 + 0x10);
      if (pcVar4 != (code *)0x0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c6157c(uVar5);
        (*pcVar4)();
        func_0x000100cffca0(pcVar4,uVar5);
      }
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x50);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      puVar2 = PTR_PTR_1126c5bf0;
      func_0x000107c610f8(PTR_PTR_1126c5bf0);
      func_0x000107c61174(lVar3);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c45990(puVar2);
    }
    else {
      func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
      func_0x000107c4c39c(lVar6);
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026ab48c; end: 1026ab4ff;  */

bool FUN_1026ab48c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1026e8f5c(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar2;
    func_0x000107c615f4(param_1,2);
    func_0x000107c61170(uVar1);
    FUN_1026aafb8(0);
    func_0x000107c615e8(param_1);
  }
  return lVar2 != 0;
}



/* Entry: 1026ab500; end: 1026ab59b;  */

void FUN_1026ab500(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x58);
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



/* Entry: 1026ab59c; end: 1026ab5eb;  */

void FUN_1026ab59c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100cffca0(uVar1,uVar2);
  return;
}



/* Entry: 1026ab5ec; end: 1026ab61b;  */

undefined1  [16] FUN_1026ab5ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_1026ab61c;
  return auVar1;
}



/* Entry: 1026ab61c; end: 1026ab61f;  */

void FUN_1026ab61c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026ab620; end: 1026ab66b;  */

undefined1  [16] FUN_1026ab620(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x000100cffcb0(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1026ab66c; end: 1026ab6bb;  */

void FUN_1026ab66c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  func_0x000100cffca0(uVar1,uVar2);
  return;
}



/* Entry: 1026ab6bc; end: 1026ab6eb;  */

undefined1  [16] FUN_1026ab6bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x20,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = FUN_1026abc20;
  return auVar1;
}



/* Entry: 1026ab6ec; end: 1026ab78b;  */

void FUN_1026ab6ec(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if ((lVar1 != 0) && (func_0x000107c61170(), lVar1 == param_1)) {
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    pcVar3 = *(code **)(unaff_x20 + 0x10);
    if (pcVar3 != (code *)0x0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c6157c(uVar4);
      (*pcVar3)();
      func_0x000100cffca0(pcVar3,uVar4);
    }
  }
  return;
}



/* Entry: 1026ab78c; end: 1026ab7cf; -[_TtC23MapRouterImplementation22PlaceDiscoveryWorkflow placeDiscoveryScopeWantsToDismiss:] */

void FUN_1026ab78c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1026ab6ec(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026ab7d0; end: 1026ab867;  */

/* WARNING: Possible PIC construction at 0x0001026ab800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ab804) */
/* WARNING: Removing unreachable block (ram,0x0001026ab81c) */
/* WARNING: Removing unreachable block (ram,0x0001026ab838) */
/* WARNING: Removing unreachable block (ram,0x0001026ab824) */
/* WARNING: Removing unreachable block (ram,0x000107c4d664) */
/* WARNING: Removing unreachable block (ram,0x00010c0d9840) */

void FUN_1026ab7d0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1026ab868; end: 1026ab8cf; -[_TtC23MapRouterImplementation22PlaceDiscoveryWorkflow placeDiscoveryScope:updateTrayDetails:] */

void FUN_1026ab868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_1026ab7d0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026ab8d0; end: 1026ab93f;  */

void FUN_1026ab8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ab940,uVar1,uVar2);
  return;
}



/* Entry: 1026ab940; end: 1026ab9a3;  */

void FUN_1026ab940(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = *(long *)(lVar2 + 0x68);
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar2 + 0x20))(uVar3,uVar1,uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001026ab9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026ab9a4; end: 1026aba8f; -[_TtC23MapRouterImplementation22PlaceDiscoveryWorkflow placeDiscoveryScope:onEditSearchQuery:] */

/* WARNING: Possible PIC construction at 0x0001026aba64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026aba68) */

void FUN_1026ab9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5faec();
  puVar1 = &UNK_110535658;
  func_0x000107c613fc(&UNK_110535658,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &UNK_110535680;
  func_0x000107c613fc(&UNK_110535680,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dacaa20;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10dacaa28,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1026aba90; end: 1026abaef;  */

void FUN_1026aba90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026abaf0;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ab940,lVar1,lVar2);
  return;
}



/* Entry: 1026abaf0; end: 1026abb2b;  */

void FUN_1026abaf0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026abb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026abb2c; end: 1026abb9b;  */

void FUN_1026abb2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026abc24;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026abb9c; end: 1026abc1f;  */

void FUN_1026abb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  func_0x000107c613fc(param_10,0x80,7);
  *(undefined8 *)(param_10 + 0x18) = 0;
  *(undefined8 *)(param_10 + 0x10) = 0;
  *(undefined8 *)(param_10 + 0x28) = 0;
  *(undefined8 *)(param_10 + 0x20) = 0;
  *(undefined8 *)(param_10 + 0x30) = param_1;
  *(undefined8 *)(param_10 + 0x38) = param_2;
  *(undefined8 *)(param_10 + 0x40) = param_3;
  *(undefined8 *)(param_10 + 0x48) = param_4;
  *(undefined8 *)(param_10 + 0x50) = param_5;
  *(undefined8 *)(param_10 + 0x58) = param_6;
  *(undefined8 *)(param_10 + 0x70) = param_9;
  *(undefined8 *)(param_10 + 0x78) = 0;
  *(undefined8 *)(param_10 + 0x60) = param_7;
  *(undefined8 *)(param_10 + 0x68) = param_8;
  return;
}



/* Entry: 1026abc20; end: 1026abc27;  */

void FUN_1026abc20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026abc28; end: 1026ac107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026abc28(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined8 auStack_90 [4];
  
  lVar7 = _DAT_112eb4c28;
  if (*(long *)(unaff_x20 + _DAT_112eb4c28) == 0) {
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    FUN_102732ef8(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c61174();
    lVar11 = unaff_x20;
    func_0x000102732d20();
    alStack_a8[0] = lVar11;
    func_0x00010008a7c8(auStack_90,alStack_a8);
    func_0x000100083b20(alStack_a8);
    func_0x000107c61574(auStack_90[0]);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar3);
    param_1 = *(ulong *)(unaff_x20 + lVar7);
    *(long *)(unaff_x20 + lVar7) = alStack_a8[0];
    func_0x000107c615e8();
  }
  lVar11 = _DAT_112eb4c08;
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112eb4c08) + _DAT_112eb8788) == 0x22) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb4c08) + _DAT_112eb8760);
    func_0x000103b3e210(*puVar1,puVar1[1]);
    if ((param_1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112eb4c10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4460c();
        func_0x000107c615e8(lVar4);
      }
    }
  }
  lVar8 = *(long *)(*(long *)(unaff_x20 + lVar11) + _DAT_112eb8788);
  uVar5 = 0;
  func_0x0001038c1d34(0);
  func_0x000107c610f8();
  func_0x0001038c1b68(lVar8,uVar5);
  lVar4 = *(long *)(*(long *)(unaff_x20 + lVar11) + _DAT_112eb87a8);
  if (lVar4 != 0) {
    func_0x000107c5c910();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      uVar9 = 1;
      goto LAB_1026abe00;
    }
  }
  uVar9 = 0;
LAB_1026abe00:
  lVar4 = _DAT_112fa9b20;
  func_0x000107c61428(lVar8 + _DAT_112fa9b20,auStack_90,1,0);
  *(undefined1 *)(lVar8 + lVar4) = uVar9;
  lVar4 = _DAT_112fa9b10;
  lVar10 = *(long *)(unaff_x20 + lVar11);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eb8790);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar5 = *puVar1;
    func_0x000107c61428(lVar8 + _DAT_112fa9b10,auStack_150,1,0);
    *(undefined8 *)(lVar8 + lVar4) = uVar5;
  }
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eb8798);
  uVar5 = *puVar1;
  uVar15 = puVar1[1];
  puVar1 = (undefined8 *)(lVar8 + _DAT_112fa9b18);
  func_0x000107c61428(puVar1,alStack_a8,1,0);
  uVar12 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar12);
  plVar2 = (long *)(*(long *)(unaff_x20 + lVar11) + _DAT_112eb8778);
  lVar4 = *plVar2;
  lVar10 = plVar2[1];
  func_0x0001038c1788(0);
  func_0x000107c610f8();
  func_0x000107c61434(lVar10);
  func_0x000107c61174(lVar8);
  func_0x0001038c1598(lVar4,lVar10,lVar8);
  lVar13 = *(long *)(unaff_x20 + lVar11);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fa9aa8);
  uVar14 = ((undefined8 *)(lVar13 + _DAT_112eb8770))[1];
  uVar12 = *(undefined8 *)(lVar13 + _DAT_112eb8770);
  uVar15 = ((undefined8 *)(lVar13 + _DAT_112eb8768))[1];
  uVar5 = *(undefined8 *)(lVar13 + _DAT_112eb8768);
  func_0x000107c61428(puVar1,auStack_c0,1,0);
  puVar1[1] = uVar14;
  *puVar1 = uVar12;
  puVar1[3] = uVar15;
  puVar1[2] = uVar5;
  uVar5 = *(undefined8 *)(lVar13 + _DAT_112eb8760);
  uVar15 = ((undefined8 *)(lVar13 + _DAT_112eb8760))[1];
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fa9aa0);
  func_0x000107c61428(puVar1,auStack_d8,1,0);
  *puVar1 = uVar5;
  puVar1[1] = uVar15;
  lVar10 = _DAT_112fa9ab0;
  lVar13 = *(long *)(lVar13 + _DAT_112eb87a8);
  if (lVar13 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112fa9ab0,auStack_120,1,0);
    uVar5 = *(undefined8 *)(lVar4 + lVar10);
    *(long *)(lVar4 + lVar10) = lVar13;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    lVar6 = lVar13;
    func_0x000107c4a284();
    func_0x000107c61170(lVar13);
    lVar10 = _DAT_112fa9ab8;
    func_0x000107c61428(lVar4 + _DAT_112fa9ab8,auStack_138,1,0);
    *(char *)(lVar4 + lVar10) = (char)lVar6;
  }
  lVar10 = _DAT_112fa9ac0;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  plVar2 = (long *)(lVar11 + _DAT_112eb8790);
  if (((char)plVar2[1] != '\x01') && (*plVar2 == 0xb)) {
    func_0x000107c61428(lVar4 + _DAT_112fa9ac0,auStack_108,1,0);
    *(undefined1 *)(lVar4 + lVar10) = 0;
  }
  lVar10 = _DAT_112fa9ac8;
  uVar5 = *(undefined8 *)(lVar11 + _DAT_112eb87a0);
  func_0x000107c61428(lVar4 + _DAT_112fa9ac8,auStack_f0,1,0);
  uVar15 = *(undefined8 *)(lVar4 + lVar10);
  *(undefined8 *)(lVar4 + lVar10) = uVar5;
  func_0x000107c61174(uVar5);
  func_0x000107c61170(uVar15);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (lVar7 != 0) {
    func_0x000107c615f0(lVar7);
    func_0x000107c4efac();
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1026ac108; end: 1026ac167; -[_TtC23MapRouterImplementation20PlaceProfileWorkflow init] */

void FUN_1026ac108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.PlaceProfileWorkflow",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ac134);
  (*pcVar1)();
}



/* Entry: 1026ac168; end: 1026ac1f7; -[_TtC23MapRouterImplementation20PlaceProfileWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac168(long param_1)

{
  func_0x000100cffd10(*(undefined8 *)(param_1 + _DAT_112eb4bf8),
                      ((undefined8 *)(param_1 + _DAT_112eb4bf8))[1]);
  func_0x000100cffd10(*(undefined8 *)(param_1 + _DAT_112eb4c00),
                      ((undefined8 *)(param_1 + _DAT_112eb4c00))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4c08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4c10));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4c18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4c20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4c28));
  return;
}



/* Entry: 1026ac1f8; end: 1026ac217;  */

void FUN_1026ac1f8(void)

{
  func_0x000107c61168(&PTR_PTR_112858aa8);
  return;
}



/* Entry: 1026ac218; end: 1026ac21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac218(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined8 auStack_90 [4];
  
  lVar7 = _DAT_112eb4c28;
  if (*(long *)(unaff_x20 + _DAT_112eb4c28) == 0) {
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    FUN_102732ef8(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c61174();
    lVar11 = unaff_x20;
    func_0x000102732d20();
    alStack_a8[0] = lVar11;
    func_0x00010008a7c8(auStack_90,alStack_a8);
    func_0x000100083b20(alStack_a8);
    func_0x000107c61574(auStack_90[0]);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar3);
    param_1 = *(ulong *)(unaff_x20 + lVar7);
    *(long *)(unaff_x20 + lVar7) = alStack_a8[0];
    func_0x000107c615e8();
  }
  lVar11 = _DAT_112eb4c08;
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112eb4c08) + _DAT_112eb8788) == 0x22) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb4c08) + _DAT_112eb8760);
    func_0x000103b3e210(*puVar1,puVar1[1]);
    if ((param_1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112eb4c10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4460c();
        func_0x000107c615e8(lVar4);
      }
    }
  }
  lVar8 = *(long *)(*(long *)(unaff_x20 + lVar11) + _DAT_112eb8788);
  uVar5 = 0;
  func_0x0001038c1d34(0);
  func_0x000107c610f8();
  func_0x0001038c1b68(lVar8,uVar5);
  lVar4 = *(long *)(*(long *)(unaff_x20 + lVar11) + _DAT_112eb87a8);
  if (lVar4 != 0) {
    func_0x000107c5c910();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      uVar9 = 1;
      goto LAB_1026abe00;
    }
  }
  uVar9 = 0;
LAB_1026abe00:
  lVar4 = _DAT_112fa9b20;
  func_0x000107c61428(lVar8 + _DAT_112fa9b20,auStack_90,1,0);
  *(undefined1 *)(lVar8 + lVar4) = uVar9;
  lVar4 = _DAT_112fa9b10;
  lVar10 = *(long *)(unaff_x20 + lVar11);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eb8790);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar5 = *puVar1;
    func_0x000107c61428(lVar8 + _DAT_112fa9b10,auStack_150,1,0);
    *(undefined8 *)(lVar8 + lVar4) = uVar5;
  }
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eb8798);
  uVar5 = *puVar1;
  uVar15 = puVar1[1];
  puVar1 = (undefined8 *)(lVar8 + _DAT_112fa9b18);
  func_0x000107c61428(puVar1,alStack_a8,1,0);
  uVar12 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar12);
  plVar2 = (long *)(*(long *)(unaff_x20 + lVar11) + _DAT_112eb8778);
  lVar4 = *plVar2;
  lVar10 = plVar2[1];
  func_0x0001038c1788(0);
  func_0x000107c610f8();
  func_0x000107c61434(lVar10);
  func_0x000107c61174(lVar8);
  func_0x0001038c1598(lVar4,lVar10,lVar8);
  lVar13 = *(long *)(unaff_x20 + lVar11);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fa9aa8);
  uVar14 = ((undefined8 *)(lVar13 + _DAT_112eb8770))[1];
  uVar12 = *(undefined8 *)(lVar13 + _DAT_112eb8770);
  uVar15 = ((undefined8 *)(lVar13 + _DAT_112eb8768))[1];
  uVar5 = *(undefined8 *)(lVar13 + _DAT_112eb8768);
  func_0x000107c61428(puVar1,auStack_c0,1,0);
  puVar1[1] = uVar14;
  *puVar1 = uVar12;
  puVar1[3] = uVar15;
  puVar1[2] = uVar5;
  uVar5 = *(undefined8 *)(lVar13 + _DAT_112eb8760);
  uVar15 = ((undefined8 *)(lVar13 + _DAT_112eb8760))[1];
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fa9aa0);
  func_0x000107c61428(puVar1,auStack_d8,1,0);
  *puVar1 = uVar5;
  puVar1[1] = uVar15;
  lVar10 = _DAT_112fa9ab0;
  lVar13 = *(long *)(lVar13 + _DAT_112eb87a8);
  if (lVar13 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112fa9ab0,auStack_120,1,0);
    uVar5 = *(undefined8 *)(lVar4 + lVar10);
    *(long *)(lVar4 + lVar10) = lVar13;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    lVar6 = lVar13;
    func_0x000107c4a284();
    func_0x000107c61170(lVar13);
    lVar10 = _DAT_112fa9ab8;
    func_0x000107c61428(lVar4 + _DAT_112fa9ab8,auStack_138,1,0);
    *(char *)(lVar4 + lVar10) = (char)lVar6;
  }
  lVar10 = _DAT_112fa9ac0;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  plVar2 = (long *)(lVar11 + _DAT_112eb8790);
  if (((char)plVar2[1] != '\x01') && (*plVar2 == 0xb)) {
    func_0x000107c61428(lVar4 + _DAT_112fa9ac0,auStack_108,1,0);
    *(undefined1 *)(lVar4 + lVar10) = 0;
  }
  lVar10 = _DAT_112fa9ac8;
  uVar5 = *(undefined8 *)(lVar11 + _DAT_112eb87a0);
  func_0x000107c61428(lVar4 + _DAT_112fa9ac8,auStack_f0,1,0);
  uVar15 = *(undefined8 *)(lVar4 + lVar10);
  *(undefined8 *)(lVar4 + lVar10) = uVar5;
  func_0x000107c61174(uVar5);
  func_0x000107c61170(uVar15);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (lVar7 != 0) {
    func_0x000107c615f0(lVar7);
    func_0x000107c4efac();
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1026ac21c; end: 1026ac293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1026ac21c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1026e95f0(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb4c08);
    *(long *)(unaff_x20 + _DAT_112eb4c08) = lVar2;
    func_0x000107c615f4(param_1,2);
    func_0x000107c61170(uVar1);
    FUN_1026abc28();
    func_0x000107c615e8(param_1);
  }
  return lVar2 != 0;
}



/* Entry: 1026ac294; end: 1026ac2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac294(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112eb4c28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112eb4c28),PTR_s_closePlaceProfile_1125ad0d0);
    return;
  }
  return;
}



/* Entry: 1026ac2d4; end: 1026ac313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026ac2d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4bf8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4bf8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026ac314;
  return auVar2;
}



/* Entry: 1026ac314; end: 1026ac32b;  */

void FUN_1026ac314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026ac32c; end: 1026ac38b;  */

undefined1  [16] FUN_1026ac32c(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026ac38c; end: 1026ac39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac38c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4c00);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026ac3a0; end: 1026ac3fb;  */

void FUN_1026ac3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026ac3fc; end: 1026ac43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026ac3fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4c00;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4c00,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026ac5b0;
  return auVar2;
}



/* Entry: 1026ac43c; end: 1026ac453; -[_TtC23MapRouterImplementation20PlaceProfileWorkflow onPlaceProfileHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac43c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112eb4c28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112eb4c28),PTR_s_closePlaceProfile_1125ad0d0);
    return;
  }
  return;
}



/* Entry: 1026ac454; end: 1026ac4f3; -[_TtC23MapRouterImplementation20PlaceProfileWorkflow onPlaceProfileRemoved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac454(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb4c28);
  *(undefined8 *)(param_1 + _DAT_112eb4c28) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4bf8);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x000100cffd10(pcVar3,uVar2);
  }
  return;
}



/* Entry: 1026ac4f4; end: 1026ac5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ac4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4bf8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4c00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_112eb4c28) = 0;
  *(undefined8 *)(lVar2 + _DAT_112eb4c08) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112eb4c10) = param_2;
  *(undefined8 *)(lVar2 + _DAT_112eb4c18) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112eb4c20) = param_4;
  lStack_50 = lVar2;
  lStack_48 = param_5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026ac5b0; end: 1026ac5b3;  */

void FUN_1026ac5b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026ac5b4; end: 1026ac60b;  */

void FUN_1026ac5b4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb4c58,&UNK_10dacaa80);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x0001002acf1c(FUN_1026ac66c,param_1);
  return;
}



/* Entry: 1026ac60c; end: 1026ac66b;  */

void FUN_1026ac60c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026ad38c();
  func_0x000107c613fc();
  FUN_1026ac674(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1026ac66c; end: 1026ac673;  */

void FUN_1026ac66c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026ad38c();
  func_0x000107c613fc();
  FUN_1026ac674(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1026ac674; end: 1026ac7db;  */

void FUN_1026ac674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined **appuStack_b0 [5];
  char cStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar3 = (undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x39) = 0;
  *(undefined8 *)(unaff_x20 + 0x31) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001026e7134(0);
  func_0x000107c6157c(param_1);
  uVar1 = 0;
  FUN_1026e6fd0();
  uStack_80 = uVar1;
  func_0x00010008a7c8(alStack_78,&uStack_80);
  if (alStack_78[0] == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000100083b20(appuStack_b0);
    func_0x000107c61574(alStack_78[0]);
    func_0x000100cffd6c(appuStack_b0,alStack_78);
    func_0x0001000a8868(alStack_78,uStack_60);
    (**(code **)(lStack_58 + 8))(appuStack_b0,uStack_60,lStack_58);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar1);
    if (cStack_88 == '\0') {
      ppuVar2 = appuStack_b0[0];
      func_0x000107c611b4();
      if ((ppuVar2 == &PTR_PTR_112eb4758) && (appuStack_b0[0] != (undefined **)0x0)) {
        uVar1 = *puVar3;
        *puVar3 = appuStack_b0[0];
        func_0x000107c61574(uVar1);
      }
      else {
        func_0x000107c615e8(appuStack_b0[0]);
      }
    }
    else if (cStack_88 == -1) {
      FUN_1026ad43c();
    }
    else {
      func_0x0001026ad4c0(appuStack_b0);
    }
    func_0x0001000834e4(alStack_78);
  }
  return;
}



/* Entry: 1026ac7dc; end: 1026acbf7;  */

/* WARNING: Possible PIC construction at 0x0001026ac850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aca48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aca64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aca7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026acbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026acb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026acbc8) */
/* WARNING: Removing unreachable block (ram,0x0001026aca80) */
/* WARNING: Removing unreachable block (ram,0x0001026aca68) */
/* WARNING: Removing unreachable block (ram,0x0001026aca4c) */
/* WARNING: Removing unreachable block (ram,0x0001026ac8c0) */
/* WARNING: Removing unreachable block (ram,0x0001026ac8a4) */
/* WARNING: Removing unreachable block (ram,0x0001026ac854) */
/* WARNING: Removing unreachable block (ram,0x0001026acb34) */

void FUN_1026ac7dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  ulong auStack_118 [3];
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    uVar1 = param_1;
    func_0x000107c614f0();
    uVar2 = uVar1;
    func_0x000107c61440();
    if (uVar2 == 0 || param_1 == 0) {
      return;
    }
    (**(code **)(uVar2 + 8))(uVar1,uVar2);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(ulong *)(unaff_x20 + 0x48) = param_1;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  if (((param_2 & 1) == 0) && (lVar4 = *(long *)(unaff_x20 + 0x20), lVar4 != 0)) {
    func_0x000107c614f0(lVar4);
  }
  else {
    uVar3 = 0;
    func_0x0001026e7134(0);
    uVar1 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar1 == 0) {
      uVar1 = param_1;
      func_0x000107c614f0();
      uVar2 = uVar1;
      func_0x000107c61440();
      if ((uVar2 != 0) && (param_1 != 0)) {
        (**(code **)(uVar2 + 0x10))(uVar1,uVar2);
        auStack_118[0] = uVar1;
        func_0x00010008a7c8(&lStack_f0,auStack_118);
        lVar4 = lStack_f0;
        if (lStack_f0 == 0) {
          func_0x0001026ad3f8(uVar1);
        }
        else {
          func_0x000100083b20(&lStack_c0);
          func_0x000107c61574(lVar4);
          func_0x000100cffd6c(&lStack_c0,auStack_88);
          func_0x0001000a8868(auStack_88,uStack_70);
          (**(code **)(lStack_68 + 8))(&lStack_f0,uStack_70,lStack_68);
          if (cStack_c8 == -1) {
            func_0x0001026ad3f8(uVar1);
            func_0x0001026ad43c(&lStack_f0);
          }
          else {
            uStack_b8 = uStack_e8;
            lStack_c0 = lStack_f0;
            uStack_b0 = uStack_e0;
            func_0x0001026ad484(&lStack_c0,&lStack_f0);
            if (cStack_c8 == '\0') {
              if ((param_2 & 1) == 0) {
                func_0x000107c615f0(lStack_f0);
                FUN_1026acc40();
                func_0x0001026ad3f8(uVar1);
                func_0x000107c615ec(lStack_f0,2);
                uVar3 = 0;
                goto code_r0x000107c615e8;
              }
              lVar4 = *(long *)(unaff_x20 + 0x20);
              goto code_r0x000107c615f0;
            }
            if (cStack_c8 == '\x01') {
              lVar4 = *(long *)(unaff_x20 + 0x30);
              if (lVar4 == 0) {
                *(long *)(unaff_x20 + 0x30) = lStack_f0;
                *(undefined8 *)(unaff_x20 + 0x38) = uStack_e8;
                func_0x000107c615f0(lStack_f0);
                uVar3 = 0;
                goto code_r0x000107c615e8;
              }
              func_0x000107c614f0(lVar4);
              goto code_r0x000107c615f0;
            }
            func_0x000100cffd6c(&lStack_f0,auStack_118);
            func_0x0001000a8868(auStack_118,uStack_100);
            (**(code **)(lStack_f8 + 8))(uStack_100,lStack_f8);
            func_0x0001026ad3f8(uVar1);
            func_0x0001026ad4c0(&lStack_c0);
            func_0x0001000834e4(auStack_118);
          }
          func_0x0001000834e4(auStack_88);
        }
      }
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    if ((param_2 & 1) == 0) {
      func_0x000107c6157c(uVar3);
      FUN_1026acc40();
      func_0x000107c61574(uVar3);
      uVar3 = 0;
      goto code_r0x000107c615e8;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
code_r0x000107c615f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar4);
  return;
}



/* Entry: 1026acbf8; end: 1026acc3f; -[_TtC23MapRouterImplementation9MapRouter navigateTo:] */

void FUN_1026acbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_1026ac7dc(param_3,0);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026acc40; end: 1026acea7;  */

/* WARNING: Possible PIC construction at 0x0001026accb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026accdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026acdf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026acce0) */
/* WARNING: Removing unreachable block (ram,0x0001026accb8) */
/* WARNING: Removing unreachable block (ram,0x0001026acdf4) */

void FUN_1026acc40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  if (param_1 != 0) {
    if (((param_5 & 1) == 0) && (lVar2 = *(long *)(unaff_x20 + 0x20), lVar2 != 0)) {
      lVar3 = *(long *)(unaff_x20 + 0x28);
      lVar1 = lVar2;
      func_0x000107c614f0(lVar2);
      pcVar4 = *(code **)(lVar3 + 0x18);
      func_0x000107c615f0(param_1);
      func_0x000107c615f0(lVar2);
      (*pcVar4)(lVar1,lVar3);
    }
    else {
      func_0x000107c615f0(param_1);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      *(long *)(unaff_x20 + 0x20) = param_1;
      *(undefined8 *)(unaff_x20 + 0x28) = param_2;
      func_0x000107c615f4(param_1,2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1026acea8; end: 1026acfb7;  */

void FUN_1026acea8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x48);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(lVar1);
    if (lVar3 != 0) {
      func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
      lVar1 = param_1 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x48);
        *(undefined8 *)(lVar1 + 0x48) = 0;
        func_0x000107c61574();
        func_0x000107c615e8(uVar2);
      }
      func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61648();
      if (param_1 != 0) {
        FUN_1026ac7dc(lVar3,0);
        func_0x000107c61574(param_1);
      }
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1026acfb8; end: 1026ad1f7;  */

void FUN_1026acfb8(undefined8 param_1,uint param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      func_0x000107c615e8();
      goto joined_r0x0001026ad050;
    }
  }
  else if ((param_4 == 0) || (func_0x000107c615e8(), param_4 != lVar1)) {
joined_r0x0001026ad050:
    if (param_5 != 0) goto LAB_1026ad064;
  }
  FUN_1026ac7dc(param_1,param_2 & 1);
LAB_1026ad064:
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1026ad1f8; end: 1026ad29b;  */

/* WARNING: Possible PIC construction at 0x0001026ad278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ac9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aca48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aca64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026aca7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026acadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026acbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026acb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026acbc8) */
/* WARNING: Removing unreachable block (ram,0x0001026acae0) */
/* WARNING: Removing unreachable block (ram,0x0001026aca80) */
/* WARNING: Removing unreachable block (ram,0x0001026aca68) */
/* WARNING: Removing unreachable block (ram,0x0001026aca4c) */
/* WARNING: Removing unreachable block (ram,0x0001026ac9b8) */
/* WARNING: Removing unreachable block (ram,0x0001026acb0c) */
/* WARNING: Removing unreachable block (ram,0x0001026ac9f8) */
/* WARNING: Removing unreachable block (ram,0x0001026acb20) */
/* WARNING: Removing unreachable block (ram,0x0001026acb84) */
/* WARNING: Removing unreachable block (ram,0x0001026acb28) */
/* WARNING: Removing unreachable block (ram,0x0001026aca1c) */
/* WARNING: Removing unreachable block (ram,0x0001026acb38) */
/* WARNING: Removing unreachable block (ram,0x0001026acbd0) */
/* WARNING: Removing unreachable block (ram,0x0001026aca24) */
/* WARNING: Removing unreachable block (ram,0x0001026aca6c) */
/* WARNING: Removing unreachable block (ram,0x0001026aca30) */
/* WARNING: Removing unreachable block (ram,0x0001026ac930) */
/* WARNING: Removing unreachable block (ram,0x0001026ac8c0) */
/* WARNING: Removing unreachable block (ram,0x0001026ac8a4) */
/* WARNING: Removing unreachable block (ram,0x0001026ac854) */
/* WARNING: Removing unreachable block (ram,0x0001026ad27c) */
/* WARNING: Removing unreachable block (ram,0x0001026acb34) */
/* WARNING: Removing unreachable block (ram,0x0001026acb8c) */
/* WARNING: Removing unreachable block (ram,0x0001026acbc4) */
/* WARNING: Removing unreachable block (ram,0x0001026ac8fc) */

void FUN_1026ad1f8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong auStack_118 [5];
  long alStack_f0 [6];
  undefined1 auStack_c0 [96];
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 != 0) {
    func_0x000107c6157c(lVar4);
    FUN_1026acc40();
    if (*(char *)(unaff_x20 + 0x40) == '\x01') {
      FUN_1026ac7dc(param_1,0);
    }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar4);
    return;
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (lVar4 != 0) {
      func_0x000107c614f0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar4);
      return;
    }
    uVar3 = 0;
    func_0x0001026e7134(0);
    uVar1 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar1 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x18);
      func_0x000107c6157c(lVar4);
      FUN_1026acc40();
      goto code_r0x000107c61574;
    }
    uVar1 = param_1;
    func_0x000107c614f0();
    uVar2 = uVar1;
    func_0x000107c61440();
    if ((uVar2 != 0) && (param_1 != 0)) {
      (**(code **)(uVar2 + 0x10))(uVar1,uVar2);
      auStack_118[0] = uVar1;
      func_0x00010008a7c8(alStack_f0,auStack_118);
      if (alStack_f0[0] != 0) {
        func_0x000100083b20(auStack_c0);
        lVar4 = alStack_f0[0];
        goto code_r0x000107c61574;
      }
      func_0x0001026ad3f8(uVar1);
    }
  }
  else {
    uVar1 = param_1;
    func_0x000107c614f0();
    uVar2 = uVar1;
    func_0x000107c61440();
    if ((uVar2 != 0 && param_1 != 0) && ((**(code **)(uVar2 + 8))(uVar1,uVar2), (uVar1 & 1) != 0)) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
      *(ulong *)(unaff_x20 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 1026ad29c; end: 1026ad2df; -[_TtC23MapRouterImplementation9MapRouter navigateAfterCenteringOnUserTo:] */

void FUN_1026ad29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_1026ad1f8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026ad2e0; end: 1026ad337; -[_TtC23MapRouterImplementation9MapRouter viewDidAppear] */

void FUN_1026ad2e0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    func_0x000107c6157c();
    FUN_1026ac7dc(lVar1,0);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 1026ad338; end: 1026ad37b;  */

void FUN_1026ad338(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ad37c; end: 1026ad38b;  */

undefined1  [16] FUN_1026ad37c(void)

{
  return ZEXT816(0x110535708);
}



/* Entry: 1026ad38c; end: 1026ad3ab;  */

void FUN_1026ad38c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb4ca0);
  return;
}



/* Entry: 1026ad3ac; end: 1026ad3b7;  */

void FUN_1026ad3ac(undefined8 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,lVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      func_0x000107c615e8();
      goto joined_r0x0001026ad050;
    }
  }
  else if ((lVar3 == 0) || (func_0x000107c615e8(), lVar3 != lVar4)) {
joined_r0x0001026ad050:
    if (lVar1 != 0) goto LAB_1026ad064;
  }
  FUN_1026ac7dc(param_1,param_2 & 1);
LAB_1026ad064:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 1026ad3b8; end: 1026ad3eb;  */

void FUN_1026ad3b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026ad3ec; end: 1026ad43b;  */

void FUN_1026ad3ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  ppuVar4 = *(undefined ***)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar2 + 0x20);
    func_0x000107c615f0(lVar6);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_70,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    if (lVar5 != 0) goto LAB_1026ad1dc;
  }
  else {
    if (lVar5 == 0) goto LAB_1026ad1dc;
    func_0x000107c615e8();
    func_0x000107c615e8(lVar6);
    if (lVar5 != lVar6) {
      return;
    }
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  lVar5 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_a0,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) {
      lVar5 = 0;
      ppuVar4 = (undefined **)0x0;
    }
    else {
      lVar5 = *(long *)(lVar3 + 0x18);
      func_0x000107c6157c(lVar5);
      func_0x000107c61574(lVar3);
      ppuVar4 = (undefined **)0x0;
      if (lVar5 != 0) {
        ppuVar4 = &PTR_DAT_110535098;
      }
    }
  }
  *(long *)(lVar2 + 0x20) = lVar5;
  *(undefined ***)(lVar2 + 0x28) = ppuVar4;
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(lVar2);
LAB_1026ad1dc:
  func_0x000107c615e8();
  return;
}



/* Entry: 1026ad43c; end: 1026ad4f3;  */

undefined8 FUN_1026ad43c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eb4d28;
  func_0x0001000285a8(0x112eb4d28,&UNK_10dacaaf0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


