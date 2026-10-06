/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038f9a68; end: 1038f9b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f9a68(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  func_0x000107c6157c(uVar4);
  puVar1 = PTR___sytN_11034f1b0;
  func_0x000100075034(FUN_1038fa5cc,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c6142c(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x28,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112fad808);
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_1038f9b44,0,puVar1 + 8);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001038f9b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038f9b44; end: 1038f9b73;  */

void FUN_1038f9b44(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 1038f9b74; end: 1038f9bd3; -[_TtC34MemoriesSemanticSearchServicesImpl34SCMemoriesFacetSearchDatabaseQuery init] */

void FUN_1038f9b74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSemanticSearchServicesImpl.SCMemoriesFacetSearchDatabaseQuery",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f9ba0);
  (*pcVar1)();
}



/* Entry: 1038f9bd4; end: 1038f9c1b; -[_TtC34MemoriesSemanticSearchServicesImpl34SCMemoriesFacetSearchDatabaseQuery .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038f9bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038f9bf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f9bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fad818));
  return;
}



/* Entry: 1038f9c1c; end: 1038f9d37;  */

undefined * FUN_1038f9c1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f9d38);
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
    puVar3 = (undefined *)0x112fad860;
    func_0x0001000285a8(0x112fad860,&UNK_10dc207d8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106aaf48);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1038f9d38; end: 1038fa1cb;  */

ulong FUN_1038f9d38(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f9e60);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1038f4fbc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f9e5c);
      (*pcVar1)();
    }
    func_0x0001038fa0d4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1038fa1cc; end: 1038fa38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038fa1cc(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_78 [24];
  
  uVar13 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar13 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar13;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar10 != 0) {
    uVar12 = 0;
    puVar6 = puVar9;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1038fa354);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar12;
          func_0x0001038ed108(uVar12,param_1);
        }
        lVar4 = _DAT_112fda0f0;
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1038fa350);
          (*pcVar5)();
        }
        func_0x000107c61428(uVar7 + _DAT_112fda0f0,auStack_78,0,0);
        puVar2 = (undefined8 *)(*(long *)(uVar7 + lVar4) + _DAT_112fd9ff0);
        uVar11 = *puVar2;
        bVar3 = *(byte *)(puVar2 + 2);
        if (1 < bVar3) break;
        if (bVar3 != 1) goto LAB_1038fa2c0;
LAB_1038fa238:
        func_0x000107c61170(uVar7);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar10) {
          return puVar6;
        }
      }
      if (bVar3 == 3) goto LAB_1038fa238;
LAB_1038fa2c0:
      func_0x000107c61170(uVar7);
      puVar8 = puVar6;
      func_0x000107c61558();
      puVar9 = puVar6;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x000101755b54(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar12 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x000101755b54(puVar9,uVar12 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puVar9 + uVar12 * 8 + 0x20) = uVar11;
      uVar12 = uVar1;
      puVar6 = puVar9;
    } while (uVar1 != uVar10);
  }
  return puVar9;
}



/* Entry: 1038fa390; end: 1038fa3d3;  */

long FUN_1038fa390(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1038fa3d4; end: 1038fa403;  */

void FUN_1038fa3d4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1038fa404; end: 1038fa48f;  */

void FUN_1038fa404(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  plVar6 = (long *)0x50;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x48);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1038fa60c;
  plVar6[5] = lVar2;
  plVar6[6] = lVar4;
  *(undefined1 *)(plVar6 + 9) = uVar5;
  plVar6[3] = lVar1;
  plVar6[4] = lVar3;
  plVar6[2] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038f96bc,0,0);
  return;
}



/* Entry: 1038fa490; end: 1038fa4fb;  */

void FUN_1038fa490(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1038fa4fc;
  plVar3[2] = lVar1;
  plVar3[3] = lVar4;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = 0x1038f9528;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 1038fa4fc; end: 1038fa557;  */

void FUN_1038fa4fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001038fa534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1038fa558; end: 1038fa563;  */

void FUN_1038fa558(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001038fa560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1038fa564; end: 1038fa5cb;  */

void FUN_1038fa564(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1038fa610;
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
  plVar3[8] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038f99c4,0,0);
  return;
}



/* Entry: 1038fa5cc; end: 1038fa60b;  */

void FUN_1038fa5cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1038f1670(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038fa60c; end: 1038fa613;  */

void FUN_1038fa60c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001038fa534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1038fa614; end: 1038fa81b;  */

void FUN_1038fa614(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_70 = param_1;
  func_0x000107c5ffd8();
  lStack_80 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  func_0x0001038fd984(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_88 = uVar3;
  func_0x000107c5f80c(lVar2);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar4 = 0x112d4ac78;
  func_0x0001038fd9c4(0x112d4ac78,0x112d4ac70,&UNK_10d911480,PTR___sSayxGSTsMc_11034dd08);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar4,lVar1,uVar3);
  (**(code **)(lStack_80 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_78);
  uVar5 = 0xd00000000000003c;
  func_0x000107c5ffec(0xd00000000000003c,0x800000010f175610,lVar2,lVar8,puVar7,0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  lVar1 = 0;
  func_0x0001038eef98();
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126ad800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar6;
  *(long *)(unaff_x20 + 0x20) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_70;
  return;
}



/* Entry: 1038fa81c; end: 1038fa833;  */

void FUN_1038fa81c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fa834,0,0);
  return;
}



/* Entry: 1038fa834; end: 1038fa8e7;  */

void FUN_1038fa834(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x20);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  plVar1 = (long *)0x920;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1038fa898;
  plVar1[0x11f] = *(long *)(unaff_x22 + 0x18);
  plVar1[0x119] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038faab4,0,0);
  return;
}



/* Entry: 1038fa8e8; end: 1038faa97;  */

void FUN_1038fa8e8(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  double dVar10;
  
  dVar10 = *(double *)(unaff_x22 + 0x28);
  func_0x000107c6071c();
  dVar10 = (param_1 - dVar10) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038faa90);
    (*pcVar4)();
  }
  if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038faa94);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038faa98);
    (*pcVar4)();
  }
  cVar3 = *(char *)(unaff_x22 + 0x38);
  lVar9 = *(long *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(lVar9 + 0x10);
  uVar1 = 0xe900000000000079;
  uVar2 = uVar1;
  uVar8 = 0x74706d655f6c6c61;
  if (cVar3 != '\x01') {
    uVar2 = 0xe900000000000064;
    uVar8 = 0x6574616c75706f70;
  }
  uVar6 = 0xee00656c62616c69;
  uVar5 = 0x6176616e755f6264;
  if (cVar3 != '\0') {
    uVar6 = uVar2;
    uVar5 = uVar8;
  }
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000106db313c(uVar7,uVar5,1);
  func_0x000107c61170(uVar5);
  uVar8 = *(undefined8 *)(lVar9 + 0x10);
  uVar2 = 0x74706d655f6c6c61;
  if (cVar3 != '\x01') {
    uVar1 = 0xe900000000000064;
    uVar2 = 0x6574616c75706f70;
  }
  uVar7 = 0xee00656c62616c69;
  uVar6 = 0x6176616e755f6264;
  if (cVar3 != '\0') {
    uVar7 = uVar1;
    uVar6 = uVar2;
  }
  func_0x000107c5fadc(uVar6,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000106db2fc8(uVar8,uVar6,(long)dVar10);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001038faa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Entry: 1038faa98; end: 1038faab3;  */

void FUN_1038faa98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x8f8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x8c8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038faab4,0,0);
  return;
}



/* Entry: 1038faab4; end: 1038fab67;  */

void FUN_1038faab4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x8f8);
  uVar1 = 0x112fad920;
  func_0x0001000285a8(0x112fad920,&UNK_10dc208c8);
  func_0x000107c61418(unaff_x22 + 0x10,0,uVar1,&UNK_10dc208c0,uVar2,unaff_x22 + 0x808);
  func_0x000107c61418(unaff_x22 + 0x290,0,uVar1,&UNK_10dc208d8,uVar2,unaff_x22 + 0x838);
  func_0x000107c61418(unaff_x22 + 0x510,0,uVar1,&UNK_10dc208e8,uVar2,unaff_x22 + 0x868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x10,unaff_x22 + 0x808,FUN_1038fab68,unaff_x22 + 0x790);
  return;
}



/* Entry: 1038fab68; end: 1038fabef;  */

void FUN_1038fab68(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x900) = *(undefined8 *)(unaff_x22 + 0x808);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0x838,0x1038fabac,unaff_x22 + 0x810);
  return;
}



/* Entry: 1038fabf0; end: 1038fac03;  */

void FUN_1038fabf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fac04,0,0);
  return;
}



/* Entry: 1038fac04; end: 1038fae6b;  */

void FUN_1038fac04(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  long unaff_x22;
  undefined1 uVar13;
  ulong uVar14;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x908);
  lVar11 = *(long *)(unaff_x22 + 0x900);
  lVar8 = *(long *)(unaff_x22 + 0x868);
  lVar5 = 0x112fad928;
  func_0x0001000285a8(0x112fad928,&UNK_10dc208f0);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 6;
  *(undefined8 *)(lVar5 + 0x10) = 3;
  *(undefined1 *)(lVar5 + 0x20) = 0;
  func_0x000107c61434(lVar8);
  lVar4 = lVar11;
  FUN_1038f77a8();
  *(long *)(lVar5 + 0x28) = lVar4;
  *(undefined1 *)(lVar5 + 0x30) = 2;
  func_0x0001038f3ffc();
  *(undefined8 *)(lVar5 + 0x38) = uVar10;
  *(undefined1 *)(lVar5 + 0x40) = 1;
  lVar4 = lVar8;
  FUN_1038f4458();
  *(long *)(lVar5 + 0x48) = lVar4;
  lVar4 = lVar5;
  FUN_1038fd670();
  func_0x000107c61588(lVar5);
  uVar10 = 0x112fad930;
  func_0x0001000285a8(0x112fad930,&UNK_10dc208f8);
  func_0x000107c61408((undefined1 *)(lVar5 + 0x20),3,uVar10);
  if (lVar11 == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x908);
    if (lVar5 != 0) goto LAB_1038facf8;
    if (lVar8 == 0) {
      uVar13 = 0;
      goto LAB_1038fae14;
    }
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x900));
    lVar5 = *(long *)(unaff_x22 + 0x908);
LAB_1038facf8:
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c6142c(lVar8);
  puVar6 = &UNK_10dc20908;
  func_0x000107c614e0();
  puVar12 = (ulong *)(lVar4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar14 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar14 = uVar14 & *puVar12;
  func_0x000107c61438(lVar4,2);
  lVar5 = 0;
  lVar8 = lVar5;
  uVar1 = uVar14;
  do {
    while (uVar9 = uVar1, lVar11 = lVar8, uVar14 == 0) {
      bVar3 = SCARRY8(lVar5,1);
      lVar5 = lVar5 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fae6c);
        (*pcVar2)();
      }
      if ((long)(0x3f - uVar7 >> 6) <= lVar5) {
        uVar9 = 0;
        uVar13 = 1;
        goto LAB_1038fade8;
      }
      lVar8 = lVar11;
      uVar1 = uVar9;
      uVar14 = puVar12[lVar5];
    }
    uVar1 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    uVar10 = *(undefined8 *)
              (*(long *)(lVar4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 + lVar5 * 0x200)
    ;
    *(undefined8 *)(unaff_x22 + 0x898) = uVar10;
    func_0x000107c61434(uVar10);
    func_0x000107c614bc(unaff_x22 + 0x910,(undefined8 *)(unaff_x22 + 0x898),puVar6);
    func_0x000107c6142c(uVar10);
    lVar8 = lVar5;
    uVar1 = uVar14;
  } while ((*(byte *)(unaff_x22 + 0x910) & 1) != 0);
  uVar13 = 2;
LAB_1038fade8:
  FUN_1038fd948(lVar4,puVar12,~uVar7,lVar11,uVar9);
  func_0x000107c6142c(lVar4);
  func_0x000107c61574(puVar6);
LAB_1038fae14:
  *(undefined1 *)(unaff_x22 + 0x911) = uVar13;
  **(long **)(unaff_x22 + 0x8c8) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x510,unaff_x22 + 0x868,FUN_1038fae6c,unaff_x22 + 0x870);
  return;
}



/* Entry: 1038fae6c; end: 1038faee3;  */

void FUN_1038fae6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038fae80,0,0);
  return;
}



/* Entry: 1038faee4; end: 1038faf7f;  */

void FUN_1038faee4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1038faf30;
  plVar1[0x11] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038faf98,0,0);
  return;
}



/* Entry: 1038faf80; end: 1038faf97;  */

void FUN_1038faf80(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038faf98,0,0);
  return;
}



/* Entry: 1038faf98; end: 1038fb0ab;  */

void FUN_1038faf98(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1038fb0ac;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_1106a9778;
    func_0x000107c613fc(&UNK_1106a9778,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fd950;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1038fc37c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a9790;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4f240(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fb0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038fb0ac; end: 1038fb0eb;  */

void FUN_1038fb0ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb0ec,0,0);
  return;
}



/* Entry: 1038fb0ec; end: 1038fb15b;  */

void FUN_1038fb0ec(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  if (lVar1 == 0) {
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1038fc3fc(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fb158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 1038fb15c; end: 1038fb1f7;  */

void FUN_1038fb15c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1038fb1a8;
  plVar1[0x11] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb228,0,0);
  return;
}



/* Entry: 1038fb1f8; end: 1038fb227;  */

void FUN_1038fb1f8(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001038fb20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038fb228; end: 1038fb33b;  */

void FUN_1038fb228(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1038fb33c;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_1106a9728;
    func_0x000107c613fc(&UNK_1106a9728,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fda50;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1038fc860;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a9740;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4f230(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fb338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038fb33c; end: 1038fb417;  */

void FUN_1038fb33c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038fda38,0,0);
  return;
}



/* Entry: 1038fb418; end: 1038fb42f;  */

void FUN_1038fb418(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb430,0,0);
  return;
}



/* Entry: 1038fb430; end: 1038fb543;  */

void FUN_1038fb430(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1038fb544;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_1106a96d8;
    func_0x000107c613fc(&UNK_1106a96d8,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fda54;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1038fc860;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a96f0;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4f234(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fb540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038fb544; end: 1038fb583;  */

void FUN_1038fb544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb584,0,0);
  return;
}



/* Entry: 1038fb584; end: 1038fb5f3;  */

void FUN_1038fb584(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  if (lVar1 == 0) {
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000101e0523c(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fb5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 1038fb5f4; end: 1038fb613;  */

void FUN_1038fb5f4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb614,0,0);
  return;
}



/* Entry: 1038fb614; end: 1038fb987;  */

/* WARNING: Possible PIC construction at 0x0001038fb924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038fb930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038fb928) */
/* WARNING: Removing unreachable block (ram,0x0001038fb934) */
/* WARNING: Removing unreachable block (ram,0x0001038fb93c) */
/* WARNING: Removing unreachable block (ram,0x0001038fbe20) */
/* WARNING: Removing unreachable block (ram,0x0001038fb798) */

void FUN_1038fb614(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  undefined *apuStack_68 [2];
  
  bVar2 = *(byte *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x20);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      apuStack_68[0] = *(undefined **)(unaff_x22 + 0x30);
      func_0x000107c61434();
      FUN_1038fcb9c(apuStack_68);
      puVar3 = apuStack_68[0];
      lVar10 = *(long *)(apuStack_68[0] + 0x10);
      if (lVar10 != 0) {
        apuStack_68[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100403514(0,lVar10,0);
        puVar5 = PTR___sSis7CVarArgsWP_11034df08;
        puVar4 = PTR___sSiN_11034deb0;
        lVar13 = 0x20;
        do {
          puVar6 = apuStack_68[0];
          uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
          uVar12 = *(undefined8 *)(puVar3 + lVar13);
          lVar9 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x18) = 4;
          *(undefined8 *)(lVar9 + 0x10) = 2;
          *(undefined **)(lVar9 + 0x38) = puVar4;
          *(undefined **)(lVar9 + 0x40) = puVar5;
          *(undefined8 *)(lVar9 + 0x20) = uVar12;
          *(undefined **)(lVar9 + 0x60) = puVar4;
          *(undefined **)(lVar9 + 0x68) = puVar5;
          *(undefined8 *)(lVar9 + 0x48) = uVar11;
          uVar11 = 0x3230252d64343025;
          uVar12 = 0xe900000000000064;
          func_0x000107c5fb00(0x3230252d64343025,0xe900000000000064,lVar9);
          uVar1 = *(ulong *)(puVar6 + 0x10);
          apuStack_68[0] = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(apuStack_68[0] + 0x10) = uVar1 + 1;
          *(undefined8 *)(apuStack_68[0] + uVar1 * 0x10 + 0x20) = uVar11;
          *(undefined8 *)(apuStack_68[0] + uVar1 * 0x10 + 0x28) = uVar12;
          lVar13 = lVar13 + 8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar3);
      return;
    }
    plVar7 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1038fb9fc;
    lVar10 = *(long *)(unaff_x22 + 0x38);
    plVar7[0x11] = *(long *)(unaff_x22 + 0x20);
    plVar7[0x12] = lVar10;
    pcVar8 = FUN_1038fbc8c;
  }
  else if (bVar2 == 2) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar10 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x18) = 4;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    puVar4 = PTR___sSis7CVarArgsWP_11034df08;
    puVar3 = PTR___sSiN_11034deb0;
    *(undefined **)(lVar10 + 0x38) = PTR___sSiN_11034deb0;
    *(undefined **)(lVar10 + 0x40) = puVar4;
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    *(undefined **)(lVar10 + 0x60) = puVar3;
    *(undefined **)(lVar10 + 0x68) = puVar4;
    *(undefined8 *)(lVar10 + 0x48) = uVar12;
    lVar13 = 0x3230252d64343025;
    lVar9 = -0x16ffffffffffff9c;
    func_0x000107c5fb00(0x3230252d64343025,0xe900000000000064,lVar10);
    *(long *)(unaff_x22 + 0x70) = lVar9;
    plVar7 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1038fbae0;
    lVar10 = *(long *)(unaff_x22 + 0x38);
    plVar7[0x12] = lVar9;
    plVar7[0x13] = lVar10;
    plVar7[0x11] = lVar13;
    pcVar8 = FUN_1038fc01c;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x28);
    plVar7 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1038fb988;
    lVar9 = *(long *)(unaff_x22 + 0x38);
    lVar10 = *(long *)(unaff_x22 + 0x20);
    plVar7[0x12] = lVar13;
    plVar7[0x13] = lVar9;
    plVar7[0x11] = lVar10;
    pcVar8 = FUN_1038fc1c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8,0,0);
  return;
}



/* Entry: 1038fb988; end: 1038fb9fb;  */

void FUN_1038fb988(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x80) = 0xe800000000000000;
  *(undefined8 *)(lVar1 + 0x88) = 0x6e6f697461636f6c;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fbb60,0,0);
  return;
}



/* Entry: 1038fb9fc; end: 1038fba67;  */

void FUN_1038fb9fc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x80) = 0xe400000000000000;
  *(undefined8 *)(lVar1 + 0x88) = 0x72616579;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fbb60,0,0);
  return;
}



/* Entry: 1038fba68; end: 1038fbadf;  */

void FUN_1038fba68(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c6142c(uVar1);
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x80) = 0xe500000000000000;
  *(undefined8 *)(lVar2 + 0x88) = 0x68746e6f6d;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fbb60,0,0);
  return;
}



/* Entry: 1038fbae0; end: 1038fbb5f;  */

void FUN_1038fbae0(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  func_0x000107c6142c(uVar1);
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x80) = 0xea00000000006874;
  *(undefined8 *)(lVar2 + 0x88) = 0x6e6f6d5f72616579;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fbb60,0,0);
  return;
}



/* Entry: 1038fbb60; end: 1038fbc73;  */

void FUN_1038fbb60(double param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  
  dVar8 = *(double *)(unaff_x22 + 0x48);
  func_0x000107c6071c();
  dVar8 = (param_1 - dVar8) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fbc6c);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar8) {
    if (dVar8 < 9.223372036854776e+18) {
      lVar4 = *(long *)(unaff_x22 + 0x18);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar7 = *(long *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(lVar7 + 0x10);
      uVar5 = uVar3;
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000106db2ce0(uVar6,uVar5,(long)dVar8);
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000106db2e54(uVar5,uVar3,*(undefined8 *)(lVar4 + 0x10));
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001038fbc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fbc74);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fbc70);
  (*pcVar2)();
}



/* Entry: 1038fbc74; end: 1038fbc8b;  */

void FUN_1038fbc74(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fbc8c,0,0);
  return;
}



/* Entry: 1038fbc8c; end: 1038fbddf;  */

void FUN_1038fbc8c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001038fbdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x88);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1038fbde0;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,0);
  if (-0x80000001 < lVar5) {
    if (*(long *)(unaff_x22 + 0x88) < 0x80000000) {
      puVar4 = &UNK_1106a9598;
      func_0x000107c613fc(&UNK_1106a9598,0x18,7);
      puVar6 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar4 + 0x10) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fda44;
      *(undefined **)(unaff_x22 + 0x78) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1021acf24;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a95b0;
      func_0x000107c60bc4(puVar6);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c5b2ec(lVar2);
      func_0x000107c60bd0(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038fbde0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038fbddc);
  (*pcVar1)();
}



/* Entry: 1038fbde0; end: 1038fbe1f;  */

void FUN_1038fbde0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038fda58,0,0);
  return;
}



/* Entry: 1038fbe20; end: 1038fbe37;  */

void FUN_1038fbe20(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fbe38,0,0);
  return;
}



/* Entry: 1038fbe38; end: 1038fbf8b;  */

void FUN_1038fbe38(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x88) + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x98) = lVar1;
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1038fbf8c;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,0);
      func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
      puVar4 = &UNK_1106a95e8;
      func_0x000107c613fc(&UNK_1106a95e8,0x18,7);
      puVar5 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar4 + 0x10) = lVar2;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fda48;
      *(undefined **)(unaff_x22 + 0x78) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1021acf24;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a9600;
      func_0x000107c60bc4(puVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c5b2e8(lVar1);
      func_0x000107c60bd0(puVar5);
      func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fbf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1038fbf8c; end: 1038fbfff;  */

void FUN_1038fbf8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038fbfcc,0,0);
  return;
}



/* Entry: 1038fc000; end: 1038fc01b;  */

void FUN_1038fc000(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fc01c,0,0);
  return;
}



/* Entry: 1038fc01c; end: 1038fc163;  */

void FUN_1038fc01c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1038fc164;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    func_0x000107c5fadc(uVar5,uVar1);
    puVar4 = &UNK_1106a9638;
    func_0x000107c613fc(&UNK_1106a9638,0x18,7);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fda4c;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1021acf24;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a9650;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5b2e4(lVar2);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fc160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1038fc164; end: 1038fc1a3;  */

void FUN_1038fc164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038fda5c,0,0);
  return;
}



/* Entry: 1038fc1a4; end: 1038fc1bf;  */

void FUN_1038fc1a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fc1c0,0,0);
  return;
}



/* Entry: 1038fc1c0; end: 1038fc307;  */

void FUN_1038fc1c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1038fc308;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    func_0x000107c5fadc(uVar5,uVar1);
    puVar4 = &UNK_1106a9688;
    func_0x000107c613fc(&UNK_1106a9688,0x18,7);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1038fd4f4;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1021acf24;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106a96a0;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5b2e0(lVar2);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001038fc304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1038fc308; end: 1038fc37b;  */

void FUN_1038fc308(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038fc348,0,0);
  return;
}



/* Entry: 1038fc37c; end: 1038fc3fb;  */

void FUN_1038fc37c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001038fd984(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    func_0x000100120cb0();
    func_0x000107c5f9e8(param_2,uVar3,uVar3,uVar4);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1038fc3fc; end: 1038fc85f;  */

undefined * FUN_1038fc3fc(undefined *param_1,undefined *param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [40];
  undefined auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    puVar13 = *(undefined **)(param_1 + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar13 = param_1;
    }
    func_0x000107c6042c();
  }
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    param_2 = &UNK_10d902e10;
    func_0x0001000285a8(0x112d37798);
    func_0x000107c60498();
    puVar3 = puVar13;
  }
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar9 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    uVar12 = ~uVar9;
    puVar15 = (ulong *)(param_1 + 0x40);
    uVar9 = -uVar9;
    uVar17 = 0xffffffffffffffff;
    if (uVar9 < 0x40) {
      uVar17 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar17 = uVar17 & *puVar15;
    puVar13 = param_1;
  }
  else {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar13 = param_1;
    }
    func_0x000107c60418();
    puVar15 = (ulong *)0x0;
    uVar12 = 0;
    uVar17 = 0;
    puVar13 = (undefined *)((ulong)puVar13 | 0x8000000000000000);
  }
  func_0x000107c6157c(puVar3);
  func_0x000107c61434();
  lVar16 = 0;
  do {
    lVar18 = lVar16;
    uVar9 = uVar17;
    if ((long)puVar13 < 0) {
      func_0x000107c60444();
      if (param_1 == (undefined *)0x0) {
LAB_1038fc7ec:
        FUN_1038fd948(puVar13,puVar15,uVar12,lVar16,uVar17);
        uStack_80 = 0;
        auStack_78[0] = 0;
        func_0x000107c61574(puVar3);
        return puVar3;
      }
      uVar14 = 0;
      puStack_120 = param_1;
      func_0x0001038fd984(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar4 = PTR___syXlN_11034f1a0;
      func_0x000107c6147c(&uStack_80,&puStack_120,PTR___syXlN_11034f1a0 + 8,uVar14,7);
      puStack_120 = param_2;
      func_0x000107c6147c(auStack_78,&puStack_120,puVar4 + 8,uVar14,7);
      uVar14 = auStack_78[0];
      uVar6 = uStack_80;
      uStack_180 = uVar17;
    }
    else {
      while (uVar9 == 0) {
        lVar1 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1038fc83c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x40 >> 6) <= lVar1) {
          uVar17 = 0;
          goto LAB_1038fc7ec;
        }
        lVar18 = lVar1;
        uVar9 = puVar15[lVar1];
      }
      uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = lVar18 << 9 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 3;
      uVar6 = *(undefined8 *)(*(long *)(puVar13 + 0x30) + uVar8);
      uVar14 = *(undefined8 *)(*(long *)(puVar13 + 0x38) + uVar8);
      uStack_80 = uVar6;
      auStack_78[0] = uVar14;
      func_0x000107c61174();
      func_0x000107c61174();
      uStack_180 = uVar9 - 1 & uVar9;
    }
    uVar7 = 0;
    uStack_170 = uVar6;
    func_0x0001038fd984(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar6);
    func_0x000107c6147c(&puStack_168,&uStack_170,uVar7,PTR___ss11AnyHashableVN_11034e448,7);
    uStack_178 = uVar14;
    func_0x000107c61174(uVar14);
    func_0x000107c6147c(auStack_140,&uStack_178,uVar7,PTR___sypN_11034f1a8 + 8,7);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar6);
    if (lStack_150 == 0) {
      FUN_1038fd948(puVar13,puVar15,uVar12,lVar16,uVar17);
      func_0x0001025fefb8(&puStack_168);
      func_0x000107c61574(puVar3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1038fc860);
      (*pcVar5)();
    }
    uStack_118 = uStack_160;
    puStack_120 = puStack_168;
    lStack_108 = lStack_150;
    uStack_110 = uStack_158;
    uStack_100 = uStack_148;
    func_0x000100102924(auStack_140,auStack_f8);
    uStack_a8 = uStack_118;
    puStack_b0 = puStack_120;
    lStack_98 = lStack_108;
    uStack_a0 = uStack_110;
    uStack_90 = uStack_100;
    func_0x000100102924(auStack_f8,auStack_d0);
    uVar8 = *(ulong *)(puVar3 + 0x28);
    func_0x000107c602c4();
    uVar11 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar8 >> 6;
    uVar17 = -1L << (uVar8 & 0x3f) & (*(ulong *)(puVar3 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar17 == 0) {
      bVar2 = false;
      uVar17 = 0x3f - uVar11 >> 6;
      do {
        uVar8 = uVar9 + 1;
        if ((uVar8 == uVar17) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1038fc838);
          (*pcVar5)();
        }
        uVar9 = 0;
        if (uVar8 != uVar17) {
          uVar9 = uVar8;
        }
        bVar2 = (bool)(uVar8 == uVar17 | bVar2);
      } while (*(ulong *)(puVar3 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar17 = ~*(ulong *)(puVar3 + uVar9 * 8 + 0x40);
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar9 << 6;
    }
    else {
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar17 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(puVar3 + uVar9 + 0x40) = 1L << (uVar17 & 0x3f) | *(ulong *)(puVar3 + uVar9 + 0x40);
    puVar10 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar17 * 0x28);
    puVar10[1] = uStack_a8;
    *puVar10 = puStack_b0;
    puVar10[3] = lStack_98;
    puVar10[2] = uStack_a0;
    puVar10[4] = uStack_90;
    param_2 = (undefined *)(*(long *)(puVar3 + 0x38) + uVar17 * 0x20);
    param_1 = auStack_d0;
    func_0x000100102924();
    *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
    lVar16 = lVar18;
    uVar17 = uStack_180;
  } while( true );
}



/* Entry: 1038fc860; end: 1038fc8df;  */

void FUN_1038fc860(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001038fd984(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1038fc8e0; end: 1038fc933;  */

void FUN_1038fc8e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038fc934; end: 1038fcb9b;  */

undefined * FUN_1038fc934(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fca58);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1038f4b1c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103a763d0(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1038fcb9c; end: 1038fcccf;  */

void FUN_1038fcb9c(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    func_0x00010149b154();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  plStack_50 = plVar1;
  uStack_48 = uVar12;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      puVar3 = puVar13;
      func_0x000107c60380(puVar13,PTR___sSiN_11034deb0);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_1038fccec(&puStack_68,auStack_58,&plStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 1038fccd0; end: 1038fcceb;  */

void FUN_1038fccd0(long param_1,long param_2)

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



/* Entry: 1038fccec; end: 1038fd053;  */

void FUN_1038fccec(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd028);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd048);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd024);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd02c);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd030);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd034);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd014);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd04c);
        (*pcVar2)();
      }
      FUN_1038fd054(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1038fcfe4;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd054);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd050);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_1038fd2c4(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd018);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd01c);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd020);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_1038fcfe4:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1038fd054; end: 1038fd2c3;  */

undefined8 FUN_1038fd054(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_1038fd12c;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd2a4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1038fd18c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd294);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd29c);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd27c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd280);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd288);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd290);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1038fd12c:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd284);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd28c);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd298);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd2a0);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1038fd18c;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd2a8);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd26c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd2c4);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_1038fd2c4(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd270);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd274);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd278);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 1038fd2c4; end: 1038fd4cb;  */

undefined8 FUN_1038fd2c4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (lVar2 < *param_4) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*plVar5 < *plVar7) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_1038fd470;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_1038fd470:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1038fd4cc; end: 1038fd4f7;  */

/* WARNING: Removing unreachable block (ram,0x0001038fc954) */
/* WARNING: Removing unreachable block (ram,0x0001038fc964) */
/* WARNING: Removing unreachable block (ram,0x0001038fca54) */
/* WARNING: Removing unreachable block (ram,0x0001038fc970) */
/* WARNING: Removing unreachable block (ram,0x0001038fc978) */
/* WARNING: Removing unreachable block (ram,0x0001038fc9f0) */
/* WARNING: Removing unreachable block (ram,0x0001038fc9f8) */
/* WARNING: Removing unreachable block (ram,0x0001038fc9fc) */
/* WARNING: Removing unreachable block (ram,0x0001038fca00) */
/* WARNING: Removing unreachable block (ram,0x0001038fca10) */

undefined * FUN_1038fd4cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    FUN_1038f4b1c();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  func_0x000103a763d0(0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 1038fd4f8; end: 1038fd537;  */

void FUN_1038fd4f8(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 1038fd538; end: 1038fd58b;  */

void FUN_1038fd538(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1038fda60;
  plVar2[2] = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x1038faf30;
  plVar1[0x11] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038faf98,0,0);
  return;
}



/* Entry: 1038fd58c; end: 1038fd5df;  */

void FUN_1038fd58c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1038fd5e0;
  plVar2[2] = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x1038fb1a8;
  plVar1[0x11] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb228,0,0);
  return;
}



/* Entry: 1038fd5e0; end: 1038fd61b;  */

void FUN_1038fd5e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x0001038fd618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1038fd61c; end: 1038fd66f;  */

void FUN_1038fd61c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1038fda64;
  plVar2[2] = param_1;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x1038fb3c8;
  plVar1[0x11] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb430,0,0);
  return;
}



/* Entry: 1038fd670; end: 1038fd75b;  */

undefined * FUN_1038fd670(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112fad940);
    puVar3 = puVar6;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar9 + -1);
      uVar8 = (ulong)bVar1;
      uVar7 = *puVar9;
      func_0x000107c61434(uVar7);
      FUN_1038f179c();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd758);
        (*pcVar2)();
      }
      uVar5 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar8 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar8) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar8 * 8) = uVar7;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038fd75c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar9 = puVar9 + 2;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1038fd75c; end: 1038fd86f;  */

undefined * FUN_1038fd75c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112fad648,&UNK_10dc20960);
    puVar7 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar12[-4];
      uVar4 = puVar12[-3];
      uVar3 = puVar12[-2];
      uVar5 = puVar12[-1];
      uVar13 = *puVar12;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      uVar8 = uVar2;
      uVar9 = uVar4;
      func_0x000100029284();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd86c);
        (*pcVar6)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar10 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x18);
      *puVar10 = uVar3;
      puVar10[1] = uVar5;
      puVar10[2] = uVar13;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1038fd870);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar11 = puVar11 + -1;
      puVar12 = puVar12 + 5;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar7);
  }
  return puVar7;
}



/* Entry: 1038fd870; end: 1038fd947;  */

undefined * FUN_1038fd870(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112e58fa0);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uVar5 = uVar1;
      func_0x00010035a314();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038fd944);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038fd948);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 1038fd948; end: 1038fd953;  */

void FUN_1038fd948(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1038fd954; end: 1038fda07;  */

void FUN_1038fd954(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1038fda08; end: 1038fda7b;  */

void FUN_1038fda08(long param_1,long param_2)

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



/* Entry: 1038fda7c; end: 1038fdb27;  */

void FUN_1038fda7c(void)

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



/* Entry: 1038fdb28; end: 1038fdb2b;  */

void FUN_1038fdb28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fad948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc209e0;
  func_0x000107c61520(&UNK_10dc209e0,&UNK_1106a98b8);
  puRam0000000112fad948 = puVar1;
  return;
}



/* Entry: 1038fdb2c; end: 1038fdb6b;  */

void FUN_1038fdb2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fad948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc209e0;
  func_0x000107c61520(&UNK_10dc209e0,&UNK_1106a98b8);
  puRam0000000112fad948 = puVar1;
  return;
}



/* Entry: 1038fdb6c; end: 1038fdccf;  */

int FUN_1038fdb6c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038fdbe8;
        goto LAB_1038fdbcc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038fdbcc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1038fdbe8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038fdcd0; end: 1038fddd3;  */

void FUN_1038fdcd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fad9a8;
  func_0x0001000285a8(0x112fad9a8,&UNK_10dc20aa0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038fddd4; end: 1038fde0b;  */

void FUN_1038fddd4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = puVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 1038fde0c; end: 1038fde53;  */

void FUN_1038fde0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc210d0,0x7b,2);
  uRam000000011380bc58 = uStack_38;
  uRam000000011380bc50 = uStack_40;
  uRam000000011380bc68 = uStack_28;
  uRam000000011380bc60 = uStack_30;
  uRam000000011380bc78 = uStack_18;
  uRam000000011380bc70 = uStack_20;
  return;
}



/* Entry: 1038fde54; end: 1038fdef3;  */

/* WARNING: Possible PIC construction at 0x0001038fdea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038fdeb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038fdea4) */
/* WARNING: Removing unreachable block (ram,0x0001038fdeb4) */

void FUN_1038fde54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fada10 != -1) {
    func_0x000107c61568(0x112fada10,FUN_1038fde0c);
  }
  uVar5 = uRam000000011380bc78;
  uVar4 = uRam000000011380bc70;
  uVar3 = uRam000000011380bc68;
  uVar2 = uRam000000011380bc60;
  uVar1 = uRam000000011380bc58;
  *param_1 = uRam000000011380bc50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1038fdef4; end: 1038fdf3b;  */

void FUN_1038fdef4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc21070,0x58,2);
  uRam000000011380bc88 = uStack_38;
  uRam000000011380bc80 = uStack_40;
  uRam000000011380bc98 = uStack_28;
  uRam000000011380bc90 = uStack_30;
  uRam000000011380bca8 = uStack_18;
  uRam000000011380bca0 = uStack_20;
  return;
}



/* Entry: 1038fdf3c; end: 1038fdfdb;  */

/* WARNING: Possible PIC construction at 0x0001038fdf88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038fdf98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038fdf8c) */
/* WARNING: Removing unreachable block (ram,0x0001038fdf9c) */

void FUN_1038fdf3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fada18 != -1) {
    func_0x000107c61568(0x112fada18,FUN_1038fdef4);
  }
  uVar5 = uRam000000011380bca8;
  uVar4 = uRam000000011380bca0;
  uVar3 = uRam000000011380bc98;
  uVar2 = uRam000000011380bc90;
  uVar1 = uRam000000011380bc88;
  *param_1 = uRam000000011380bc80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1038fdfdc; end: 1038fe023;  */

void FUN_1038fdfdc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc20ff0,0x70,2);
  uRam000000011380bcb8 = uStack_38;
  uRam000000011380bcb0 = uStack_40;
  uRam000000011380bcc8 = uStack_28;
  uRam000000011380bcc0 = uStack_30;
  uRam000000011380bcd8 = uStack_18;
  uRam000000011380bcd0 = uStack_20;
  return;
}



/* Entry: 1038fe024; end: 1038fe197;  */

/* WARNING: Removing unreachable block (ram,0x0001038fe178) */

void FUN_1038fe024(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
          goto LAB_1038fe168;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x000101b8817c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1106aaf48;
LAB_1038fe0b0:
          (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x180);
          FUN_1038fe358();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_1106a9b58;
          goto LAB_1038fe0b0;
        }
      }
      else {
        if (lVar1 != 4) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0001038fe398();
            lVar2 = unaff_x20 + 0x28;
            puVar3 = &UNK_1106aa4d0;
          }
          else {
            if (lVar1 != 6) goto LAB_1038fe0c4;
            pcVar5 = *(code **)(param_3 + 0x180);
            func_0x0001038fe3d8();
            lVar2 = unaff_x20 + 0x30;
            puVar3 = &UNK_1106a9be8;
          }
          goto LAB_1038fe0b0;
        }
        pcVar5 = *(code **)(param_3 + 0x18);
LAB_1038fe168:
        (*pcVar5)();
      }
LAB_1038fe0c4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1038fe198; end: 1038fe357;  */

void FUN_1038fe198(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uStack_60;
  undefined1 uStack_58;
  
  puVar3 = &uStack_60;
  puVar4 = (undefined1 *)*unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = (ulong)puVar4 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(puVar4,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    puVar5 = (undefined1 *)unaff_x20[2];
    if (*(long *)(puVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      func_0x000101b8817c();
      (*pcVar6)(puVar5,2,&UNK_1106aaf48,puVar4,param_2,param_3);
      puVar4 = puVar5;
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (unaff_x20[3] != 0) {
      uStack_58 = (undefined1)unaff_x20[4];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[3];
      FUN_1038fe358();
      (*pcVar6)(&uStack_60,3,&UNK_1106a9b58,puVar4,param_2,param_3);
      puVar4 = (undefined1 *)puVar3;
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (*(int *)((long)unaff_x20 + 0x24) != 0) {
      puVar4 = (undefined1 *)0x4;
      (**(code **)(param_3 + 8))(4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    puVar5 = (undefined1 *)unaff_x20[5];
    if (*(long *)(puVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      func_0x0001038fe398();
      (*pcVar6)(puVar5,5,&UNK_1106aa4d0,puVar4,param_2,param_3);
      puVar4 = puVar5;
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (unaff_x20[6] != 0) {
      uStack_58 = (undefined1)unaff_x20[7];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[6];
      func_0x0001038fe3d8();
      (*pcVar6)(&uStack_60,6,&UNK_1106a9be8,puVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}



/* Entry: 1038fe358; end: 1038fe417;  */

void FUN_1038fe358(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fada28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc20ab0;
  func_0x000107c61520(&DAT_10dc20ab0,&UNK_1106a9b58);
  puRam0000000112fada28 = puVar1;
  return;
}



/* Entry: 1038fe418; end: 1038fe473;  */

void FUN_1038fe418(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = puVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 1038fe474; end: 1038fe4a3;  */

undefined1  [16] FUN_1038fe474(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1038fe4a4; end: 1038fe4d7;  */

void FUN_1038fe4a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1038fe4d8; end: 1038fe4eb;  */

undefined1  [16] FUN_1038fe4d8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1038fe4e8;
  return auVar1;
}



/* Entry: 1038fe4ec; end: 1038fe513;  */

void FUN_1038fe4ec(void)

{
  FUN_1038fe024();
  return;
}



/* Entry: 1038fe514; end: 1038fe517;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1038fe514(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}


