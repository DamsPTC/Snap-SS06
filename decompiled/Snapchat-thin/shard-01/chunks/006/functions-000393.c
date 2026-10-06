/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10121a678; end: 10121a89f;  */

void FUN_10121a678(void)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar8;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
    func_0x000100ca8518(uVar9,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    if (lVar8 != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar8 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar8 + -8);
      pcVar13 = *(code **)(lVar11 + 0x38);
      uVar6 = uVar5;
      (*pcVar13)(uVar5,1,1,lVar8);
      FUN_10121afd4();
      func_0x000107c604bc(uVar10,uVar5,lVar8,uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(uVar9);
      func_0x000100ca8518(uVar10,uVar1);
      uVar6 = uVar5;
      (**(code **)(lVar11 + 0x30))(uVar5,1,lVar8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
      bVar2 = (int)uVar6 != 1;
      if (bVar2) {
        (**(code **)(lVar11 + 0x20))(uVar7,uVar5,lVar8);
        func_0x000107c615c0(uVar5);
      }
      else {
        func_0x000107c615c0(uVar5);
      }
      (*pcVar13)(uVar7,!bVar2,1,lVar8);
      goto LAB_10121a87c;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar7);
  lVar8 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar12,1,1,lVar8);
LAB_10121a87c:
                    /* WARNING: Could not recover jumptable at 0x00010121a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10121a8a0; end: 10121a8b7;  */

void FUN_10121a8a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a8b8,0,0);
  return;
}



/* Entry: 10121a8b8; end: 10121ac33;  */

void FUN_10121a8b8(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x22;
  undefined *puVar12;
  ulong uVar13;
  undefined *puStack_60;
  
  uVar10 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar10 != 0) {
    uVar3 = uVar10;
    func_0x000107c615f0();
    func_0x000107c5b198();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x28) = uVar3;
    uVar13 = uVar3;
    func_0x000107c44a2c();
    if ((uVar13 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar9 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar4,1,1,lVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar10);
      goto LAB_10121ac0c;
    }
    uVar13 = uVar3;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121ac34);
      (*pcVar2)();
    }
    uVar5 = uVar13;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar5 != 0) {
      puStack_60 = (undefined *)0x0;
      uVar4 = 0;
      FUN_10121b1cc(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(uVar5,&puStack_60,uVar4);
      func_0x000107c61170(uVar5);
      if (puStack_60 != (undefined *)0x0) {
        puVar11 = puStack_60;
      }
    }
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar12 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar11) {
        puVar12 = puVar11;
      }
      func_0x000107c60480();
    }
    if (puVar12 != (undefined *)0x0) {
      uVar13 = 0;
      do {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10121abb4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(puVar11 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          func_0x00010121c1ac(uVar13,puVar11);
        }
        *(ulong *)(unaff_x22 + 0x30) = uVar5;
        puVar1 = (undefined *)(uVar13 + 1);
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10121abb0);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000107c4abb4();
        if ((int)uVar6 == 1) {
          uVar6 = uVar5;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar6 != 0) {
            uVar7 = uVar6;
            func_0x000107c44984();
            if (((int)uVar7 == 0) || (uVar7 = uVar6, func_0x000107c3e240(), (int)uVar7 != 5)) {
              func_0x000107c61170(uVar5);
              uVar5 = uVar6;
            }
            else {
              uVar7 = uVar6;
              func_0x000107c5d0f0();
              func_0x000107c61170(uVar6);
              if ((int)uVar7 == 0) {
                func_0x000107c6142c(puVar11);
                uVar13 = uVar5;
                func_0x000107c4c930();
                func_0x000107c61180();
                if (uVar13 == 0) {
                  func_0x000107c61170(uVar3);
                }
                else {
                  uVar6 = uVar13;
                  func_0x000107c4c99c();
                  func_0x000107c61180();
                  *(ulong *)(unaff_x22 + 0x38) = uVar6;
                  func_0x000107c61170(uVar13);
                  if (uVar6 != 0) {
                    func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
                    func_0x000107c4ca6c();
                    func_0x000107c61180();
                    uVar3 = uVar10;
                    func_0x000100759c94();
                    *(ulong *)(unaff_x22 + 0x40) = uVar3;
                    func_0x000107c61170(uVar10);
                    plVar8 = (long *)0x80;
                    func_0x000107c615b8();
                    *(long **)(unaff_x22 + 0x48) = plVar8;
                    *plVar8 = unaff_x22;
                    plVar8[1] = (long)FUN_10121ac34;
                    /* WARNING: Could not recover jumptable at 0x00010121ab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    FUN_10121ae24();
                    return;
                  }
                  func_0x000107c61170(uVar3);
                }
                goto LAB_10121abd8;
              }
            }
          }
        }
        func_0x000107c61170(uVar5);
        uVar13 = uVar13 + 1;
      } while (puVar1 != puVar12);
    }
    func_0x000107c6142c(puVar11);
    uVar5 = uVar3;
LAB_10121abd8:
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar10);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar9 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar4,1,1,lVar9);
LAB_10121ac0c:
                    /* WARNING: Could not recover jumptable at 0x00010121ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10121ac34; end: 10121ac87;  */

void FUN_10121ac34(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121b33c,0,0);
  return;
}



/* Entry: 10121ac88; end: 10121acd3; -[_TtC31SnapEditorMusicPluginEntryPoint49SnapEditorMusicContentBasedRecommendationProvider init] */

void FUN_10121ac88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMusicPluginEntryPoint.SnapEditorMusicContentBasedRecommendationProvider"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10121acb4);
  (*pcVar1)();
}



/* Entry: 10121acd4; end: 10121ad17;  */

long FUN_10121acd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10121ad18; end: 10121ad2f;  */

undefined8 * FUN_10121ad18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10121ad30; end: 10121ada7;  */

void FUN_10121ad30(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10121ada8;
  plVar3[0x18] = unaff_x20 + 0x20;
  plVar3[0x19] = lVar4;
  plVar3[0x16] = lVar1;
  plVar3[0x17] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121952c,0,0);
  return;
}



/* Entry: 10121ada8; end: 10121ae23;  */

void FUN_10121ada8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010121ade0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10121ae24; end: 10121ae3b;  */

void FUN_10121ae24(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121ae3c,0,0);
  return;
}



/* Entry: 10121ae3c; end: 10121af03;  */

void FUN_10121ae3c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010121ae84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10121af04;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110394ef0;
  func_0x000107c613fc(&UNK_110394ef0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_10121b018,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10121af04; end: 10121af43;  */

void FUN_10121af04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121af44,0,0);
  return;
}



/* Entry: 10121af44; end: 10121af53;  */

void FUN_10121af44(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010121af50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10121af54; end: 10121af93;  */

void FUN_10121af54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10121b340,0,0);
  return;
}



/* Entry: 10121af94; end: 10121afd3;  */

undefined8 FUN_10121af94(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10121afd4; end: 10121b017;  */

void FUN_10121afd4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d68ec0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ede0(0xff);
  puVar2 = PTR___s10Foundation3URLVs21_ObjectiveCBridgeableAAMc_1103509b8;
  func_0x000107c61520(PTR___s10Foundation3URLVs21_ObjectiveCBridgeableAAMc_1103509b8,uVar1);
  puRam0000000112d68ec0 = puVar2;
  return;
}



/* Entry: 10121b018; end: 10121b023;  */

void FUN_10121b018(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x10121b344)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 10121b024; end: 10121b073;  */

void FUN_10121b024(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 10121b074; end: 10121b1cb;  */

bool FUN_10121b074(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_58;
  
  lVar2 = param_1;
  func_0x000107c4e088();
  if ((int)lVar2 == 0x1a) {
    bVar8 = true;
  }
  else {
    func_0x000107c3d988();
    func_0x000107c61180();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != 0) {
      puStack_58 = (undefined *)0x0;
      uVar3 = 0;
      FUN_10121b1cc(0,0x112d530c8,&PTR_PTR_1126affc8);
      func_0x000107c5fc50(param_1,&puStack_58,uVar3);
      func_0x000107c61170(param_1);
      if (puStack_58 != (undefined *)0x0) {
        puVar6 = puStack_58;
      }
    }
    puVar10 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar7 = *(undefined **)(puVar10 + 0x10);
    }
    else {
      puVar7 = puVar10;
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar7 = puVar6;
      }
      func_0x000107c60480();
    }
    puVar9 = (undefined *)0x0;
    do {
      bVar8 = puVar7 != puVar9;
      if (puVar7 == puVar9) break;
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar10 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10121b1b8);
          (*pcVar1)();
        }
        puVar4 = *(undefined **)(puVar6 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar9;
        FUN_10121c37c(puVar9,puVar6);
      }
      if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10121b18c);
        (*pcVar1)();
      }
      puVar5 = puVar4;
      func_0x000107c4e088();
      func_0x000107c61170(puVar4);
      puVar9 = puVar9 + 1;
    } while ((int)puVar5 != 1);
    func_0x000107c6142c(puVar6);
  }
  return bVar8;
}



/* Entry: 10121b1cc; end: 10121b20b;  */

void FUN_10121b1cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10121b20c; end: 10121b2fb;  */

uint FUN_10121b20c(uint *param_1,int param_2)

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



/* Entry: 10121b2fc; end: 10121b33b;  */

void FUN_10121b2fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d68ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92ca64;
  func_0x000107c61520(&UNK_10d92ca64,&UNK_110394f88);
  puRam0000000112d68ec8 = puVar1;
  return;
}



/* Entry: 10121b33c; end: 10121b347;  */

void FUN_10121b33c(void)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar8;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
    func_0x000100ca8518(uVar9,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    if (lVar8 != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar8 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar8 + -8);
      pcVar13 = *(code **)(lVar11 + 0x38);
      uVar6 = uVar5;
      (*pcVar13)(uVar5,1,1,lVar8);
      FUN_10121afd4();
      func_0x000107c604bc(uVar10,uVar5,lVar8,uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(uVar9);
      func_0x000100ca8518(uVar10,uVar1);
      uVar6 = uVar5;
      (**(code **)(lVar11 + 0x30))(uVar5,1,lVar8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
      bVar2 = (int)uVar6 != 1;
      if (bVar2) {
        (**(code **)(lVar11 + 0x20))(uVar7,uVar5,lVar8);
        func_0x000107c615c0(uVar5);
      }
      else {
        func_0x000107c615c0(uVar5);
      }
      (*pcVar13)(uVar7,!bVar2,1,lVar8);
      goto LAB_10121a87c;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar7);
  lVar8 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar12,1,1,lVar8);
LAB_10121a87c:
                    /* WARNING: Could not recover jumptable at 0x00010121a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10121b348; end: 10121b3af;  */

char * FUN_10121b348(void)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar1 = *(char **)(unaff_x20 + 0x60);
  pcVar2 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    *(char **)(unaff_x20 + 0x60) = pcVar2;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar3);
    pcVar1 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar1);
  return pcVar2;
}



/* Entry: 10121b3b0; end: 10121b53f;  */

long FUN_10121b3b0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  FUN_10121b348();
  puVar4 = &UNK_110395018;
  func_0x000107c613fc(&UNK_110395018,0x20,7);
  *(long **)(puVar4 + 0x10) = &lStack_48;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = &UNK_110395040;
  func_0x000107c613fc(&UNK_110395040,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10121c058;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x10121c084;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10006eb60;
  puStack_60 = &UNK_110395058;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e530(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(param_1);
  lVar2 = lStack_48;
  if (lStack_48 == 0) {
    func_0x000107c60450("Fatal error",0xb,2,0xd00000000000006c,0x800000010ef2ef80,
                        "SnapEditorMusicPluginEntryPoint/SnapEditorMusicDependenciesProvider.swift",
                        0x49,2,0x3e,0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10121b540);
    (*pcVar3)();
  }
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6b,0x3a,0x2b,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10121b4f4);
  (*pcVar3)();
}



/* Entry: 10121b540; end: 10121bcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10121b540(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar14 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c614f0(uVar10);
  lVar2 = 1;
  (**(code **)(lVar14 + 8))(1,uVar10,lVar14);
  if (lVar2 != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x10);
    lVar14 = lVar11;
    func_0x000107c3dae4();
    func_0x000107c61180();
    lVar3 = lVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    if (lVar3 != 0) {
      lVar14 = lVar3;
      func_0x000107c4c1e0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar2);
      lVar2 = *(long *)(unaff_x20 + 0x40);
      func_0x000107c615f0(lVar14);
      func_0x000107c4b714();
      func_0x000107c61180();
      if (lVar2 != 0) {
        puVar4 = &UNK_110395090;
        func_0x000107c613fc(&UNK_110395090,0x18,7);
        func_0x000107c61644(puVar4 + 0x10);
        puVar5 = &UNK_1103950b8;
        func_0x000107c613fc(&UNK_1103950b8,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x10121c0c0;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        lStack_70 = 0x10121c0c8;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_10121bf30;
        puStack_78 = &UNK_1103950d0;
        ppuVar6 = &puStack_90;
        puStack_68 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_68);
        lVar3 = lVar2;
        func_0x000107c4c280();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        lVar15 = *(long *)(unaff_x20 + 0x18);
        puVar4 = PTR_PTR_1126a66f8;
        func_0x000107c610f8(PTR_PTR_1126a66f8);
        func_0x000107c61174();
        func_0x000107c45838(puVar4);
        func_0x000107c3cfe0();
        func_0x000107c61180();
        lVar3 = lVar11;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        if (lVar3 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = lVar3;
          func_0x000107c4c1dc(lVar3);
          func_0x000107c61180();
          func_0x000107c615e8(lVar3);
        }
        func_0x000107c52188(puVar4);
        func_0x000107c615e8(lVar11);
        lVar3 = _DAT_112d691b8;
        uVar7 = *(undefined8 *)(lVar15 + _DAT_112d691b8);
        func_0x000107c4d214(uVar7);
        func_0x000107c61180();
        uVar10 = uVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c548d8(puVar4);
        func_0x000107c615e8(uVar10);
        uVar7 = *(undefined8 *)(lVar15 + _DAT_112d691c0);
        func_0x000107c4d270(uVar7);
        func_0x000107c61180();
        uVar10 = uVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c57bcc(puVar4);
        func_0x000107c615e8(uVar10);
        uVar7 = *(undefined8 *)(lVar15 + lVar3);
        func_0x000107c4d810(uVar7);
        func_0x000107c61180();
        uVar10 = uVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c56b20(puVar4);
        func_0x000107c615e8(uVar10);
        func_0x000107c52a04(puVar4);
        func_0x000107c5383c(puVar4);
        uVar10 = *(undefined8 *)(lVar15 + _DAT_112d691e0);
        func_0x000107c6157c(uVar10);
        func_0x0001000d224c(&puStack_90);
        func_0x000107c61574(uVar10);
        puVar5 = puStack_90;
        func_0x000107c5283c(puVar4);
        func_0x000107c615e8(puVar5);
        func_0x000107c5307c(puVar4);
        lVar16 = *(long *)(unaff_x20 + 0x20);
        uVar10 = *(undefined8 *)(lVar16 + _DAT_11303ff08);
        func_0x000107c6157c(uVar10);
        func_0x0001000d224c(&puStack_90);
        func_0x000107c61574(uVar10);
        lVar12 = *(long *)(unaff_x20 + 0x28);
        lVar15 = 0;
        func_0x00010121acb4();
        lVar11 = lVar15;
        func_0x000107c610f8();
        lVar3 = _DAT_112d68e78;
        func_0x000107c61614(lVar11 + _DAT_112d68e78,0);
        *(undefined8 *)(lVar11 + _DAT_112d68e80) = 0;
        func_0x00010121c110(&puStack_90,lVar11 + _DAT_112d68e70);
        func_0x000107c61604(lVar11 + lVar3,lVar12);
        puVar5 = PTR_s_init_1125d9248;
        lStack_a0 = lVar11;
        lStack_98 = lVar15;
        func_0x000107c61174();
        plVar8 = &lStack_a0;
        func_0x000107c61154(plVar8,puVar5);
        lVar3 = lStack_70;
        puVar5 = puStack_78;
        FUN_10121c154(&puStack_90,puStack_78);
        (**(code **)(lVar3 + 8))(puVar5,lVar3);
        func_0x000107c61170(lVar12);
        func_0x00010121c178(&puStack_90);
        func_0x000107c537f8(puVar4);
        func_0x000107c61170(plVar8);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
        func_0x000107c3f770();
        func_0x000107c61180();
        lVar15 = 0;
        FUN_101219098();
        lVar11 = lVar15;
        func_0x000107c610f8();
        lVar3 = _DAT_112d68e38;
        puVar5 = PTR_PTR_1126ae810;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar11 + lVar3) = puVar5;
        *(undefined8 *)(lVar11 + _DAT_112d68e30) = uVar10;
        plVar8 = &lStack_b0;
        lStack_b0 = lVar11;
        lStack_a8 = lVar15;
        func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
        func_0x000107c55e80(puVar4);
        func_0x000107c61170(plVar8);
        uVar10 = *(undefined8 *)(lVar16 + _DAT_11303ff58);
        func_0x000107c6157c(uVar10);
        func_0x0001000d224c(&puStack_90);
        func_0x000107c61574(uVar10);
        lVar11 = 0;
        FUN_10121ccb0();
        lVar3 = lVar11;
        func_0x000107c610f8();
        func_0x00010121c110(&puStack_90,lVar3 + _DAT_112d69088);
        plVar8 = &lStack_c0;
        lStack_c0 = lVar3;
        lStack_b8 = lVar11;
        func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
        func_0x00010121c178(&puStack_90);
        func_0x000107c5689c(puVar4);
        func_0x000107c61170(plVar8);
        lVar3 = _DAT_11302bac8;
        uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar7 = *(undefined8 *)(lVar12 + _DAT_11302bac8);
        lVar15 = 0;
        FUN_10121d068();
        lVar11 = lVar15;
        func_0x000107c610f8();
        func_0x000103715150(0);
        func_0x000107c610f8();
        func_0x000107c615f0(uVar7);
        func_0x000107c61174();
        func_0x000103714d50();
        *(undefined8 *)(lVar11 + _DAT_112d690d0) = uVar10;
        *(undefined8 *)(lVar11 + _DAT_112d690d8) = uVar7;
        plVar8 = &lStack_d0;
        lStack_d0 = lVar11;
        lStack_c8 = lVar15;
        func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
        func_0x000107c59544(puVar4);
        func_0x000107c61170(plVar8);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
        uVar13 = *(undefined8 *)(lVar12 + lVar3);
        uVar10 = *(undefined8 *)(lVar12 + _DAT_11302bae0);
        uVar7 = ((undefined8 *)(lVar12 + _DAT_11302bae0))[1];
        FUN_10121fa68(0);
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c615f0(uVar13);
        func_0x000107c61434(uVar7);
        FUN_10121e8ec(uVar9,uVar13,0,uVar10,uVar7);
        func_0x000107c59f0c(puVar4);
        func_0x000107c615ec(lVar14,2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar9);
        return puVar4;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10121bc70);
      (*pcVar1)();
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000006a,0x800000010ef2eff0,
                      "SnapEditorMusicPluginEntryPoint/SnapEditorMusicDependenciesProvider.swift",
                      0x49,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10121bcc4);
  (*pcVar1)();
}



/* Entry: 10121bcc4; end: 10121bd47;  */

void FUN_10121bcc4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    FUN_10121c390();
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    FUN_10121bd48();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10121bd48; end: 10121bf2f;  */

undefined * FUN_10121bd48(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puVar11;
  ulong uVar12;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c3db34();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10121bf30);
    (*pcVar1)();
  }
  uVar3 = 0;
  FUN_10121c390(0,0x112d68fb8,&PTR_PTR_1126d8928);
  uVar4 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar4);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar9,0);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10121bf2c);
      (*pcVar1)();
    }
    uVar12 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar4 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
        uVar10 = uVar9;
      }
      else {
        uVar5 = uVar12;
        uVar10 = uVar4;
        FUN_10121c1c0(uVar12,uVar4,&PTR_PTR_1126d8928,0x112d68fb8);
      }
      func_0x000107c61174();
      uVar6 = uVar5;
      func_0x000107c434dc();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5faec();
      uVar9 = uVar10;
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      uVar6 = *(ulong *)(puVar11 + 0x10);
      uVar5 = uVar6 + 1;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar6) {
        uVar9 = uVar5;
        func_0x000100403514(1 < *(ulong *)(puVar11 + 0x18),uVar5,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar5;
      *(ulong *)(puVar11 + uVar6 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puVar11 + uVar6 * 0x10 + 0x28) = uVar10;
    } while (uVar2 != uVar12);
    func_0x000107c6142c(uVar4);
  }
  puVar8 = puVar11;
  func_0x000107c5fc48(puVar11,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar11);
  return puVar8;
}



/* Entry: 10121bf30; end: 10121bfb3;  */

void FUN_10121bf30(long param_1,undefined8 param_2)

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
  FUN_10121c154(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x00010121c178(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10121bfb4; end: 10121c057;  */

void FUN_10121bfb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10121c058; end: 10121c0a3;  */

void FUN_10121c058(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  FUN_10121b540();
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10121c0a4; end: 10121c0c7;  */

void FUN_10121c0a4(long param_1,long param_2)

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



/* Entry: 10121c0c8; end: 10121c153;  */

void FUN_10121c0c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  FUN_10121c390(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10121c154; end: 10121c1bf;  */

long * FUN_10121c154(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10121c1c0; end: 10121c37b;  */

ulong FUN_10121c1c0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121c2a4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121c2a8);
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
  FUN_10121c390(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10121c37c);
  (*pcVar2)();
}



/* Entry: 10121c37c; end: 10121c38f;  */

ulong FUN_10121c37c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121c2a4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121c2a8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126affc8;
    func_0x000107c61168(PTR_PTR_1126affc8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126affc8;
    func_0x000107c61168(PTR_PTR_1126affc8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10121c390(0,0x112d530c8,&PTR_PTR_1126affc8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10121c37c);
  (*pcVar2)();
}



/* Entry: 10121c390; end: 10121c3cf;  */

void FUN_10121c390(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10121c3d0; end: 10121c3d7;  */

void FUN_10121c3d0(long param_1,long param_2)

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



/* Entry: 10121c3d8; end: 10121c66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10121c3d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(&uStack_68);
  uVar8 = uStack_68;
  func_0x000107c4a474();
  func_0x000107c615e8(uStack_68);
  lVar6 = _DAT_11302bd68;
  plVar9 = param_6;
  plVar7 = param_5;
  if ((int)uVar8 != 0) {
    lVar10 = *(long *)((long)param_1 + _DAT_11302ba78);
    uVar8 = param_3;
    func_0x000107c61174();
    uVar3 = param_4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar1 = (undefined8 *)(lVar10 + lVar6);
    uVar12 = puVar1[1];
    uVar11 = *puVar1;
    func_0x000107c615f0(uVar11);
    uVar4 = param_7;
    func_0x000107c5b118();
    func_0x000107c61180();
    lVar5 = 0;
    func_0x00010121c038();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x58) = param_10;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x10) = uVar8;
    *(undefined8 *)(lVar5 + 0x18) = uVar3;
    *(long **)(lVar5 + 0x20) = param_5;
    *(long **)(lVar5 + 0x28) = param_6;
    *(undefined8 *)(lVar5 + 0x38) = uVar12;
    *(undefined8 *)(lVar5 + 0x30) = uVar11;
    *(undefined8 *)(lVar5 + 0x40) = uVar4;
    *(undefined8 *)(lVar5 + 0x48) = param_8;
    *(undefined8 *)(lVar5 + 0x50) = param_9;
    uVar8 = *(undefined8 *)((long)param_1 + _DAT_11302ba70);
    lVar6 = lVar5;
    FUN_10121c840();
    lVar10 = lVar6;
    func_0x000107c610f8();
    plVar7 = (long *)(lVar10 + _DAT_112d68fc0);
    *plVar7 = lVar5;
    plVar7[1] = (long)&PTR_DAT_110394ff8;
    puVar2 = PTR_s_init_1125d9248;
    lStack_78 = lVar10;
    lStack_70 = lVar6;
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(lVar5);
    plVar7 = &lStack_78;
    func_0x000107c61154(plVar7,puVar2);
    func_0x000107c4fba8(uVar8);
    func_0x000107c61574(lVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar8);
    plVar9 = param_5;
    param_1 = param_6;
  }
  func_0x000107c61170(plVar7);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  return unaff_x20;
}



/* Entry: 10121c66c; end: 10121c687;  */

void FUN_10121c66c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10121c688; end: 10121c77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121c688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = param_1;
  FUN_10121b3b0();
  puVar2 = &UNK_110395120;
  func_0x000107c613fc(&UNK_110395120,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_40 = FUN_10121c880;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101016bdc;
  puStack_48 = &UNK_110395138;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(uVar1);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puStack_38);
  func_0x000107c5682c(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10121c780; end: 10121c7cf; -[_TtC31SnapEditorMusicPluginEntryPoint21SnapEditorMusicPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x00010121c7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121c7bc) */

void FUN_10121c780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10121c688(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10121c7d0; end: 10121c82f; -[_TtC31SnapEditorMusicPluginEntryPoint21SnapEditorMusicPlugin init] */

void FUN_10121c7d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMusicPluginEntryPoint.SnapEditorMusicPlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10121c7fc);
  (*pcVar1)();
}



/* Entry: 10121c830; end: 10121c83f; -[_TtC31SnapEditorMusicPluginEntryPoint21SnapEditorMusicPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121c830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d68fc0));
  return;
}



/* Entry: 10121c840; end: 10121c87f;  */

void FUN_10121c840(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc458);
  return;
}



/* Entry: 10121c880; end: 10121c8ab;  */

void FUN_10121c880(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10121c8ac; end: 10121c94b;  */

void FUN_10121c8ac(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10121c94c; end: 10121c95b;  */

void FUN_10121c94c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10121c95c; end: 10121ca7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10121c95c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  
  func_0x0001000285a8(0x112d690b8,&UNK_10d92cc00);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  FUN_10121ccd0(unaff_x20 + _DAT_112d69088,auStack_58);
  puVar2 = &UNK_110395178;
  func_0x000107c613fc(&UNK_110395178,0x48,7);
  FUN_10121cd14(auStack_58,puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  *(long *)(puVar2 + 0x40) = lVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar1);
  uVar3 = 3;
  func_0x0001001ca524(3,3,0x50,4,0,0,&UNK_10d92cc10,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar4);
  return uVar3;
}



/* Entry: 10121ca7c; end: 10121ca97;  */

void FUN_10121ca7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121ca98,0,0);
  return;
}



/* Entry: 10121ca98; end: 10121cb17;  */

void FUN_10121ca98(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar3);
  func_0x000107c2bb50(uVar5);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10121cb18;
  piVar8 = *(int **)(lVar4 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  plVar6[2] = (long)plVar7;
  *plVar7 = (long)plVar6;
  plVar7[1] = (long)&UNK_103fca084;
                    /* WARNING: Could not recover jumptable at 0x000103fca080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(uVar5,PTR___swiftEmptySetSingleton_11034f1d8,uVar3,lVar4);
  return;
}



/* Entry: 10121cb18; end: 10121cb67;  */

void FUN_10121cb18(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121cb68,0,0);
  return;
}



/* Entry: 10121cb68; end: 10121cbe3;  */

void FUN_10121cb68(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  if (lVar2 == 0) {
    func_0x00010121cdd0();
    puVar1 = &UNK_110395210;
    func_0x000107c613f8(&UNK_110395210,param_1,0,0);
    func_0x00010488ade0();
    func_0x000107c614ac(puVar1);
  }
  else {
    *(long *)(unaff_x22 + 0x10) = lVar2;
    func_0x000100b60084();
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010121cbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10121cbe4; end: 10121cc3f; -[_TtC31SnapEditorMusicPluginEntryPoint26SnapEditorMusicTrackLoader fetchSelectedTrackWithTrackId:] */

void FUN_10121cbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10121c95c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10121cc40; end: 10121cc9f; -[_TtC31SnapEditorMusicPluginEntryPoint26SnapEditorMusicTrackLoader init] */

void FUN_10121cc40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMusicPluginEntryPoint.SnapEditorMusicTrackLoader",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10121cc6c);
  (*pcVar1)();
}



/* Entry: 10121cca0; end: 10121ccaf; -[_TtC31SnapEditorMusicPluginEntryPoint26SnapEditorMusicTrackLoader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121cca0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d69088))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d69088));
  return;
}



/* Entry: 10121ccb0; end: 10121cccf;  */

void FUN_10121ccb0(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc518);
  return;
}



/* Entry: 10121ccd0; end: 10121cd13;  */

long FUN_10121ccd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10121cd14; end: 10121cd2b;  */

undefined8 * FUN_10121cd14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10121cd2c; end: 10121cd93;  */

void FUN_10121cd2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10121cd94;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
  plVar3[3] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121ca98,0,0);
  return;
}



/* Entry: 10121cd94; end: 10121ce0f;  */

void FUN_10121cd94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010121cdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10121ce10; end: 10121ceff;  */

uint FUN_10121ce10(uint *param_1,int param_2)

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



/* Entry: 10121cf00; end: 10121cf3f;  */

void FUN_10121cf00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d690c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92cc60;
  func_0x000107c61520(&UNK_10d92cc60,&UNK_110395210);
  puRam0000000112d690c8 = puVar1;
  return;
}



/* Entry: 10121cf40; end: 10121cfcf; -[_TtC31SnapEditorMusicPluginEntryPoint29SnapEditorSoundReportLauncher launchWithTrackId:] */

/* WARNING: Possible PIC construction at 0x00010121cfb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121cfbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121cf40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d690d8);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c4d06c(uVar1,param_2,1);
  func_0x000107c61180();
  func_0x000107c502a4(*(undefined8 *)(param_1 + _DAT_112d690d0),param_2,param_3,1,uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10121cfd0; end: 10121d02f; -[_TtC31SnapEditorMusicPluginEntryPoint29SnapEditorSoundReportLauncher init] */

void FUN_10121cfd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMusicPluginEntryPoint.SnapEditorSoundReportLauncher",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10121cffc);
  (*pcVar1)();
}



/* Entry: 10121d030; end: 10121d067; -[_TtC31SnapEditorMusicPluginEntryPoint29SnapEditorSoundReportLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010121d04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121d050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d690d0));
  return;
}



/* Entry: 10121d068; end: 10121d087;  */

void FUN_10121d068(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc5d8);
  return;
}



/* Entry: 10121d088; end: 10121d093; -[SCSnapEditorMusicPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d088(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69108;
  func_0x000107c61428(param_1 + _DAT_112d69108,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d094; end: 10121d09f; -[SCSnapEditorMusicPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69108;
  func_0x000107c61428(param_1 + _DAT_112d69108,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d0a0; end: 10121d0ab; -[SCSnapEditorMusicPluginEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69110;
  func_0x000107c61428(param_1 + _DAT_112d69110,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d0ac; end: 10121d0b7; -[SCSnapEditorMusicPluginEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69110;
  func_0x000107c61428(param_1 + _DAT_112d69110,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d0b8; end: 10121d0c3; -[SCSnapEditorMusicPluginEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69118;
  func_0x000107c61428(param_1 + _DAT_112d69118,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d0c4; end: 10121d0cf; -[SCSnapEditorMusicPluginEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69118;
  func_0x000107c61428(param_1 + _DAT_112d69118,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d0d0; end: 10121d0db; -[SCSnapEditorMusicPluginEntryPoint musicDependenciesService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69120;
  func_0x000107c61428(param_1 + _DAT_112d69120,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d0dc; end: 10121d0e7; -[SCSnapEditorMusicPluginEntryPoint setMusicDependenciesService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69120;
  func_0x000107c61428(param_1 + _DAT_112d69120,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d0e8; end: 10121d0f3; -[SCSnapEditorMusicPluginEntryPoint musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69128;
  func_0x000107c61428(param_1 + _DAT_112d69128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d0f4; end: 10121d0ff; -[SCSnapEditorMusicPluginEntryPoint setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69128;
  func_0x000107c61428(param_1 + _DAT_112d69128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d100; end: 10121d10b; -[SCSnapEditorMusicPluginEntryPoint snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69130;
  func_0x000107c61428(param_1 + _DAT_112d69130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d10c; end: 10121d117; -[SCSnapEditorMusicPluginEntryPoint setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69130;
  func_0x000107c61428(param_1 + _DAT_112d69130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d118; end: 10121d123; -[SCSnapEditorMusicPluginEntryPoint filterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d118(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69138;
  func_0x000107c61428(param_1 + _DAT_112d69138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d124; end: 10121d12f; -[SCSnapEditorMusicPluginEntryPoint setFilterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69138;
  func_0x000107c61428(param_1 + _DAT_112d69138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d130; end: 10121d13b; -[SCSnapEditorMusicPluginEntryPoint musicFeatureLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d130(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69140;
  func_0x000107c61428(param_1 + _DAT_112d69140,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d13c; end: 10121d147; -[SCSnapEditorMusicPluginEntryPoint setMusicFeatureLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69140;
  func_0x000107c61428(param_1 + _DAT_112d69140,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d148; end: 10121d153; -[SCSnapEditorMusicPluginEntryPoint lensMetadataRetrievingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d148(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69148;
  func_0x000107c61428(param_1 + _DAT_112d69148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d154; end: 10121d197;  */

void FUN_10121d154(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10121d198; end: 10121d1a3; -[SCSnapEditorMusicPluginEntryPoint setLensMetadataRetrievingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d198(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69148;
  func_0x000107c61428(param_1 + _DAT_112d69148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d1a4; end: 10121d1f7;  */

void FUN_10121d1a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10121d1f8; end: 10121d23f; -[SCSnapEditorMusicPluginEntryPoint soundReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d1f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69150;
  func_0x000107c61428(param_1 + _DAT_112d69150,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10121d240; end: 10121d2a3; -[SCSnapEditorMusicPluginEntryPoint setSoundReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69150;
  func_0x000107c61428(param_1 + _DAT_112d69150,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10121d2a4; end: 10121d7a7;  */

/* WARNING: Possible PIC construction at 0x00010121d584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010121d5bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010121d5e0) */
/* WARNING: Removing unreachable block (ram,0x00010121d5d0) */
/* WARNING: Removing unreachable block (ram,0x00010121d600) */
/* WARNING: Removing unreachable block (ram,0x00010121d5f0) */
/* WARNING: Removing unreachable block (ram,0x00010121d630) */
/* WARNING: Removing unreachable block (ram,0x00010121d620) */
/* WARNING: Removing unreachable block (ram,0x00010121d670) */
/* WARNING: Removing unreachable block (ram,0x00010121d660) */
/* WARNING: Removing unreachable block (ram,0x00010121d650) */
/* WARNING: Removing unreachable block (ram,0x00010121d6b0) */
/* WARNING: Removing unreachable block (ram,0x00010121d6a0) */
/* WARNING: Removing unreachable block (ram,0x00010121d690) */
/* WARNING: Removing unreachable block (ram,0x00010121d680) */
/* WARNING: Removing unreachable block (ram,0x00010121d6f0) */
/* WARNING: Removing unreachable block (ram,0x00010121d6e0) */
/* WARNING: Removing unreachable block (ram,0x00010121d6d0) */
/* WARNING: Removing unreachable block (ram,0x00010121d6c0) */
/* WARNING: Removing unreachable block (ram,0x00010121d768) */
/* WARNING: Removing unreachable block (ram,0x00010121d758) */
/* WARNING: Removing unreachable block (ram,0x00010121d748) */
/* WARNING: Removing unreachable block (ram,0x00010121d738) */
/* WARNING: Removing unreachable block (ram,0x00010121d728) */
/* WARNING: Removing unreachable block (ram,0x00010121d588) */
/* WARNING: Removing unreachable block (ram,0x00010121d5c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121d2a4(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5c634();
    func_0x000107c61180();
    lVar14 = lVar4;
    if (lVar5 != 0) {
      lVar13 = unaff_x20;
      func_0x000107c3ff88();
      func_0x000107c61180();
      if (lVar13 == 0) {
        func_0x000107c61170(lVar4);
        lVar14 = lVar5;
      }
      else {
        lVar6 = unaff_x20;
        func_0x000107c4d20c();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar4);
          lVar14 = lVar5;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c4d280();
          func_0x000107c61180();
          if (lVar7 != 0) {
            lVar8 = unaff_x20;
            func_0x000107c5b274();
            func_0x000107c61180();
            if (lVar8 != 0) {
              lVar9 = unaff_x20;
              func_0x000107c434ec();
              func_0x000107c61180();
              if (lVar9 == 0) {
                func_0x000107c61170(lVar4);
                lVar14 = lVar5;
              }
              else {
                lVar10 = unaff_x20;
                func_0x000107c5b610();
                func_0x000107c61180();
                if (lVar10 == 0) {
                  func_0x000107c61170(lVar4);
                  lVar14 = lVar5;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c4d21c();
                  func_0x000107c61180();
                  if (lVar5 != 0) {
                    func_0x000107c4b280();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      func_0x00010121c860();
                      func_0x000107c613fc();
                      func_0x0001000d224c(&uStack_68);
                      uVar11 = uStack_68;
                      func_0x000107c4a474();
                      func_0x000107c615e8(uStack_68);
                      lVar12 = _DAT_11302bd68;
                      lVar14 = lVar7;
                      if ((uVar11 & 1) != 0) {
                        lVar14 = *(long *)(lVar4 + _DAT_11302ba78);
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        puVar2 = (undefined8 *)(lVar14 + lVar12);
                        uVar16 = puVar2[1];
                        uVar15 = *puVar2;
                        func_0x000107c615f0(uVar15);
                        func_0x000107c5b118();
                        func_0x000107c61180();
                        lVar12 = 0;
                        func_0x00010121c038();
                        func_0x000107c613fc();
                        *(long *)(lVar12 + 0x10) = lVar13;
                        *(long *)(lVar12 + 0x18) = lVar6;
                        *(long *)(lVar12 + 0x20) = lVar7;
                        *(long *)(lVar12 + 0x28) = lVar8;
                        *(undefined8 *)(lVar12 + 0x38) = uVar16;
                        *(undefined8 *)(lVar12 + 0x30) = uVar15;
                        *(long *)(lVar12 + 0x40) = lVar9;
                        *(long *)(lVar12 + 0x48) = lVar10;
                        *(long *)(lVar12 + 0x50) = lVar5;
                        *(long *)(lVar12 + 0x58) = unaff_x20;
                        *(undefined8 *)(lVar12 + 0x60) = 0;
                        uVar15 = *(undefined8 *)(lVar4 + _DAT_11302ba70);
                        lVar13 = 0;
                        func_0x00010121c840();
                        lVar14 = lVar13;
                        func_0x000107c610f8();
                        plVar1 = (long *)(lVar14 + _DAT_112d68fc0);
                        *plVar1 = lVar12;
                        plVar1[1] = (long)&PTR_DAT_110394ff8;
                        puVar3 = PTR_s_init_1125d9248;
                        lStack_78 = lVar14;
                        lStack_70 = lVar13;
                        func_0x000107c61174(lVar10);
                        func_0x000107c61174(lVar5);
                        func_0x000107c61174(unaff_x20);
                        func_0x000107c61174(uVar15);
                        func_0x000107c6157c(lVar12);
                        func_0x000107c61154(&lStack_78,puVar3);
                        func_0x000107c4fba8(uVar15);
                        func_0x000107c61574(lVar12);
                        lVar14 = lVar4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar14);
    return;
  }
  return;
}



/* Entry: 10121d7a8; end: 10121d7cf; -[SCSnapEditorMusicPluginEntryPoint begin] */

void FUN_10121d7a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10121d2a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10121d7d0; end: 10121d813; -[SCSnapEditorMusicPluginEntryPoint end] */

void FUN_10121d7d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121d814; end: 10121dd1f;  */

void FUN_10121d814(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x63536d6574737973;
    if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59b6c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d0ee0)) ||
             (func_0x000107c605b8(0xd000000000000018,0x800000010ef2f120,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56828();
          }
          else {
            uVar2 = 0x726553636973756d;
            if (((param_2 == 0x726553636973756d) && (param_3 == -0x12ffff8c9a9c968a)) ||
               (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56870();
            }
            else {
              uVar2 = 0x7469644570616e73;
              if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
                 (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c593c0();
              }
              else {
                uVar2 = 0;
                if (((param_2 == 0x65537265746c6966) && (param_3 == -0x11ff8c9a9c96898e)) ||
                   (func_0x000107c605b8(0x65537265746c6966,0xee00736563697672,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c549e8();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d0ec0)) ||
                     (func_0x000107c605b8(0xd00000000000001a,0x800000010ef2f140,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c56838();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10e09d0)) ||
                       (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1f630,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55dc0();
                    }
                    else {
                      uVar2 = 0xd000000000000017;
                      if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d0ea0)) &&
                         (func_0x000107c605b8(0xd000000000000017,0x800000010ef2f160,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "SnapEditorMusicPluginEntryPoint/SCSnapEditorMusicPluginEntryPoint.swift"
                                            ,0x47,2,0x52,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10121dd20);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59548();
                    }
                  }
                }
              }
            }
          }
          goto LAB_10121d8a0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53680();
    }
  }
LAB_10121d8a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10121dd20; end: 10121ddcb; -[SCSnapEditorMusicPluginEntryPoint setValue:forIvarName:] */

void FUN_10121dd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10121d814(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10121ddcc; end: 10121ded7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121ddcc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d69108,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69110,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69118,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69120,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69128,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69130,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69138,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69140,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d69148,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d69150) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d69158) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10121ded8; end: 10121def7; -[SCSnapEditorMusicPluginEntryPoint init] */

void FUN_10121ded8(void)

{
  FUN_10121ddcc();
  return;
}



/* Entry: 10121def8; end: 10121df2b;  */

void FUN_10121def8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10121df2c; end: 10121dff3; -[SCSnapEditorMusicPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121df2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d69108);
  func_0x000107c61610(param_1 + _DAT_112d69110);
  func_0x000107c61610(param_1 + _DAT_112d69118);
  func_0x000107c61610(param_1 + _DAT_112d69120);
  func_0x000107c61610(param_1 + _DAT_112d69128);
  func_0x000107c61610(param_1 + _DAT_112d69130);
  func_0x000107c61610(param_1 + _DAT_112d69138);
  func_0x000107c61610(param_1 + _DAT_112d69140);
  func_0x000107c61610(param_1 + _DAT_112d69148);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d69150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d69158));
  return;
}



/* Entry: 10121dff4; end: 10121e013;  */

void FUN_10121dff4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc6a0);
  return;
}



/* Entry: 10121e014; end: 10121e28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121e014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d69188) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d69190) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d69198) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d691a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d691a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d691b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d691b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d691c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d691c8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d691d0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d691d8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d691e0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d691e8) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}


