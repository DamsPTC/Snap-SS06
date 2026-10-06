/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012dff9c; end: 1012e0037;  */

void FUN_1012dff9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar8 + 200);
  uVar2 = *(undefined8 *)(lVar8 + 0xb8);
  uVar4 = *(undefined8 *)(lVar8 + 0xc0);
  uVar6 = *(undefined8 *)(lVar8 + 0xb0);
  lVar3 = *(long *)(lVar8 + 0x78);
  uVar5 = *(undefined8 *)(lVar8 + 0x80);
  uVar7 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(lVar8 + 0xd8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd0));
  func_0x0001000b44c0(uVar4,uVar1);
  func_0x0001000b44c0(uVar6,uVar2);
  (**(code **)(lVar3 + 8))(uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1012e0038,*(undefined8 *)(lVar8 + 0xa0),*(undefined8 *)(lVar8 + 0xa8));
  return;
}



/* Entry: 1012e0038; end: 1012e022f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0038(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0xd8);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (lVar5 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0xd8);
    puVar1 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c45160();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xe0) = puVar1;
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
      lVar6 = lVar5;
    }
    else {
      lVar6 = *(long *)(unaff_x22 + 0x68);
      func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x38,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0xe8) = lVar6;
      if (lVar6 == 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar1);
        func_0x000107c61574(uVar7);
        goto LAB_1012e020c;
      }
      lVar2 = *(long *)(lVar6 + _DAT_112d70aa0);
      *(long *)(unaff_x22 + 0xf0) = lVar2;
      if (lVar2 == 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar1);
        func_0x000107c61574(uVar7);
      }
      else {
        func_0x000107c61174();
        lVar3 = lVar2;
        func_0x000107c5b5ec();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xf8) = lVar3;
        if (lVar3 == 0) {
          uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(puVar1);
          func_0x000107c61574(uVar7);
        }
        else {
          lVar4 = lVar3;
          func_0x000107c4d228();
          func_0x000107c61180();
          *(long *)(unaff_x22 + 0x100) = lVar4;
          if (lVar4 != 0) {
            func_0x000107c30e3c(puVar1);
            func_0x000107c61180();
            func_0x000107c525e0(lVar4);
            func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_1012e0230,0,0);
            return;
          }
          uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(puVar1);
          func_0x000107c61574(uVar7);
          func_0x000107c61170(lVar3);
        }
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61170(lVar6);
  }
LAB_1012e020c:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001012e022c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012e0230; end: 1012e0297;  */

void FUN_1012e0230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012e0298,uVar2,uVar1);
  return;
}



/* Entry: 1012e0298; end: 1012e030b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0298(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  lVar1 = *(long *)(lVar1 + _DAT_112d70ac8);
  if (lVar1 != 0) {
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c6157c(lVar1);
    func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1012e030c,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
  return;
}



/* Entry: 1012e030c; end: 1012e038f;  */

void FUN_1012e030c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001012e038c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012e0390; end: 1012e03fb;  */

void FUN_1012e0390(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1012e03fc;
  plVar4[0xc] = lVar3;
  plVar4[0xd] = lVar5;
  plVar4[0xb] = lVar1;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar4[0xe] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xf] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar4[0x11] = lVar3;
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x12] = lVar1;
  func_0x000100eea164();
  plVar4[0x13] = lVar1;
  func_0x000107c5fca8();
  plVar4[0x14] = lVar3;
  plVar4[0x15] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012dfe3c,lVar3,lVar1);
  return;
}



/* Entry: 1012e03fc; end: 1012e0437;  */

void FUN_1012e03fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012e0434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1012e0438; end: 1012e06cb;  */

void FUN_1012e0438(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar16;
  ulong unaff_x20;
  ulong uVar17;
  ulong uStack_80;
  ulong uVar15;
  
  uVar2 = unaff_x20;
  func_0x000107c417f8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar2 = unaff_x20;
  func_0x000107c5cc64();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_1012e06cc(0,0x112d70b40,&PTR_PTR_1126a69b0);
  uVar5 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  uVar2 = unaff_x20;
  func_0x000107c4cd44();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uStack_80 = 0;
  }
  else {
    uVar4 = 0;
    FUN_1012e06cc(0,0x112d70b48,&PTR_PTR_1126d95f0);
    uStack_80 = uVar2;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar2);
  }
  uVar2 = unaff_x20;
  func_0x000107c4e800();
  func_0x000107c61180();
  uVar6 = unaff_x20;
  func_0x000107c49a74();
  func_0x000107c61180();
  uVar7 = unaff_x20;
  func_0x000107c4a314();
  uVar8 = unaff_x20;
  func_0x000107c5ab7c();
  uVar9 = unaff_x20;
  func_0x000107c4e30c();
  func_0x000107c61180();
  uVar10 = unaff_x20;
  func_0x000107c4ebf4();
  func_0x000107c61180();
  if (uVar10 == 0) {
    uVar16 = 0;
    uVar4 = 0;
  }
  else {
    uVar16 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
  }
  uVar10 = unaff_x20;
  func_0x000107c51c98();
  func_0x000107c61180();
  uVar11 = unaff_x20;
  func_0x000107c502f0();
  func_0x000107c61180();
  uVar12 = unaff_x20;
  func_0x000107c51ca4();
  func_0x000107c61180();
  if (uVar12 == 0) {
    uVar17 = 0;
  }
  else {
    uVar13 = 0;
    FUN_1012e06cc(0,0x112d70b50,&PTR_PTR_1126a69b8);
    uVar17 = uVar12;
    func_0x000107c5fc54(uVar12,uVar13);
    func_0x000107c61170(uVar12);
  }
  uVar12 = unaff_x20;
  func_0x000107c5b5ec();
  func_0x000107c61180();
  uVar14 = unaff_x20;
  func_0x000107c42410();
  func_0x000107c61180();
  func_0x000107c49c40();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar15 = unaff_x20;
    func_0x000107c3ebcc();
    uVar1 = (undefined1)uVar15;
    func_0x000107c61170(unaff_x20);
  }
  uVar13 = 0;
  func_0x000103c06460(0);
  func_0x000107c610f8();
  func_0x000103c05990(uVar13,uVar3,param_2,uVar5,uStack_80,uVar2,uVar6,uVar7 & 0xffffffff,
                      uVar8 & 0xffffffff,uVar9,uVar16,uVar4,uVar10,uVar11,uVar17,uVar12,uVar14,uVar1
                     );
  return;
}



/* Entry: 1012e06cc; end: 1012e070b;  */

void FUN_1012e06cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012e070c; end: 1012e0717; -[SCCreatePostFlowEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e070c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b58;
  func_0x000107c61428(param_1 + _DAT_112d70b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0718; end: 1012e0723; -[SCCreatePostFlowEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b58;
  func_0x000107c61428(param_1 + _DAT_112d70b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0724; end: 1012e072f; -[SCCreatePostFlowEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b60;
  func_0x000107c61428(param_1 + _DAT_112d70b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0730; end: 1012e073b; -[SCCreatePostFlowEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b60;
  func_0x000107c61428(param_1 + _DAT_112d70b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e073c; end: 1012e0747; -[SCCreatePostFlowEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e073c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b68;
  func_0x000107c61428(param_1 + _DAT_112d70b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0748; end: 1012e0753; -[SCCreatePostFlowEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b68;
  func_0x000107c61428(param_1 + _DAT_112d70b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0754; end: 1012e075f; -[SCCreatePostFlowEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b70;
  func_0x000107c61428(param_1 + _DAT_112d70b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0760; end: 1012e076b; -[SCCreatePostFlowEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b70;
  func_0x000107c61428(param_1 + _DAT_112d70b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e076c; end: 1012e0777; -[SCCreatePostFlowEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e076c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b78;
  func_0x000107c61428(param_1 + _DAT_112d70b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0778; end: 1012e0783; -[SCCreatePostFlowEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b78;
  func_0x000107c61428(param_1 + _DAT_112d70b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0784; end: 1012e078f; -[SCCreatePostFlowEntryPoint composerPeopleBridgeUserInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b80;
  func_0x000107c61428(param_1 + _DAT_112d70b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0790; end: 1012e079b; -[SCCreatePostFlowEntryPoint setComposerPeopleBridgeUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b80;
  func_0x000107c61428(param_1 + _DAT_112d70b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e079c; end: 1012e07a7; -[SCCreatePostFlowEntryPoint composerPeopleBridgeFriendServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e079c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b88;
  func_0x000107c61428(param_1 + _DAT_112d70b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e07a8; end: 1012e07b3; -[SCCreatePostFlowEntryPoint setComposerPeopleBridgeFriendServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b88;
  func_0x000107c61428(param_1 + _DAT_112d70b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e07b4; end: 1012e07bf; -[SCCreatePostFlowEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b90;
  func_0x000107c61428(param_1 + _DAT_112d70b90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e07c0; end: 1012e07cb; -[SCCreatePostFlowEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b90;
  func_0x000107c61428(param_1 + _DAT_112d70b90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e07cc; end: 1012e07d7; -[SCCreatePostFlowEntryPoint spotlightRepliesFeatureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70b98;
  func_0x000107c61428(param_1 + _DAT_112d70b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e07d8; end: 1012e07e3; -[SCCreatePostFlowEntryPoint setSpotlightRepliesFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70b98;
  func_0x000107c61428(param_1 + _DAT_112d70b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e07e4; end: 1012e07ef; -[SCCreatePostFlowEntryPoint sendToExperimentConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70ba0;
  func_0x000107c61428(param_1 + _DAT_112d70ba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e07f0; end: 1012e07fb; -[SCCreatePostFlowEntryPoint setSendToExperimentConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70ba0;
  func_0x000107c61428(param_1 + _DAT_112d70ba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e07fc; end: 1012e0807; -[SCCreatePostFlowEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e07fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70ba8;
  func_0x000107c61428(param_1 + _DAT_112d70ba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0808; end: 1012e0813; -[SCCreatePostFlowEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70ba8;
  func_0x000107c61428(param_1 + _DAT_112d70ba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0814; end: 1012e081f; -[SCCreatePostFlowEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0814(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bb0;
  func_0x000107c61428(param_1 + _DAT_112d70bb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0820; end: 1012e082b; -[SCCreatePostFlowEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0820(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bb0;
  func_0x000107c61428(param_1 + _DAT_112d70bb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e082c; end: 1012e0837; -[SCCreatePostFlowEntryPoint tilePickerLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e082c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bb8;
  func_0x000107c61428(param_1 + _DAT_112d70bb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0838; end: 1012e0843; -[SCCreatePostFlowEntryPoint setTilePickerLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bb8;
  func_0x000107c61428(param_1 + _DAT_112d70bb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0844; end: 1012e084f; -[SCCreatePostFlowEntryPoint spotlightTileServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0844(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bc0;
  func_0x000107c61428(param_1 + _DAT_112d70bc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0850; end: 1012e085b; -[SCCreatePostFlowEntryPoint setSpotlightTileServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bc0;
  func_0x000107c61428(param_1 + _DAT_112d70bc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e085c; end: 1012e0867; -[SCCreatePostFlowEntryPoint createPostLocationDataService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e085c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bc8;
  func_0x000107c61428(param_1 + _DAT_112d70bc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0868; end: 1012e0873; -[SCCreatePostFlowEntryPoint setCreatePostLocationDataService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bc8;
  func_0x000107c61428(param_1 + _DAT_112d70bc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0874; end: 1012e087f; -[SCCreatePostFlowEntryPoint composerMemberRolesService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bd0;
  func_0x000107c61428(param_1 + _DAT_112d70bd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0880; end: 1012e088b; -[SCCreatePostFlowEntryPoint setComposerMemberRolesService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bd0;
  func_0x000107c61428(param_1 + _DAT_112d70bd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e088c; end: 1012e0897; -[SCCreatePostFlowEntryPoint composerRankedPostableDestinationsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e088c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bd8;
  func_0x000107c61428(param_1 + _DAT_112d70bd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e0898; end: 1012e08a3; -[SCCreatePostFlowEntryPoint setComposerRankedPostableDestinationsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bd8;
  func_0x000107c61428(param_1 + _DAT_112d70bd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e08a4; end: 1012e08af; -[SCCreatePostFlowEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e08a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70be0;
  func_0x000107c61428(param_1 + _DAT_112d70be0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e08b0; end: 1012e08bb; -[SCCreatePostFlowEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e08b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70be0;
  func_0x000107c61428(param_1 + _DAT_112d70be0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e08bc; end: 1012e08c7; -[SCCreatePostFlowEntryPoint musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e08bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70be8;
  func_0x000107c61428(param_1 + _DAT_112d70be8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e08c8; end: 1012e090b;  */

void FUN_1012e08c8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012e090c; end: 1012e0917; -[SCCreatePostFlowEntryPoint setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e090c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70be8;
  func_0x000107c61428(param_1 + _DAT_112d70be8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e0918; end: 1012e096b;  */

void FUN_1012e0918(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e096c; end: 1012e09b3; -[SCCreatePostFlowEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e096c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bf0;
  func_0x000107c61428(param_1 + _DAT_112d70bf0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1012e09b4; end: 1012e09bf; -[SCCreatePostFlowEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e09b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bf0;
  func_0x000107c61428(param_1 + _DAT_112d70bf0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1012e09c0; end: 1012e0a07; -[SCCreatePostFlowEntryPoint musicPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e09c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70bf8;
  func_0x000107c61428(param_1 + _DAT_112d70bf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1012e0a08; end: 1012e0a13; -[SCCreatePostFlowEntryPoint setMusicPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e0a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70bf8;
  func_0x000107c61428(param_1 + _DAT_112d70bf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1012e0a14; end: 1012e0a73;  */

void FUN_1012e0a14(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1012e0a74; end: 1012e159f;  */

/* WARNING: Possible PIC construction at 0x0001012e0de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e150c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e151c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e152c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e153c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e154c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e156c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e157c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e158c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e146c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e147c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e148c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e149c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e14ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e14bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e14cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e14dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e14ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e13dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e13ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e13fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e141c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e142c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e143c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e144c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e145c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e13a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e13b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e12c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e12d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e12e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e12f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e11b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e11c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e11d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e11e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e11f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e11a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e10f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e10a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e10b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e10c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e10d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e1034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e0ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e0ef8) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f18) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f48) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f38) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f78) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f68) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f58) */
/* WARNING: Removing unreachable block (ram,0x0001012e0fa8) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f98) */
/* WARNING: Removing unreachable block (ram,0x0001012e0f88) */
/* WARNING: Removing unreachable block (ram,0x0001012e0fe8) */
/* WARNING: Removing unreachable block (ram,0x0001012e0fd8) */
/* WARNING: Removing unreachable block (ram,0x0001012e0fc8) */
/* WARNING: Removing unreachable block (ram,0x0001012e1038) */
/* WARNING: Removing unreachable block (ram,0x0001012e1028) */
/* WARNING: Removing unreachable block (ram,0x0001012e1018) */
/* WARNING: Removing unreachable block (ram,0x0001012e1008) */
/* WARNING: Removing unreachable block (ram,0x0001012e1088) */
/* WARNING: Removing unreachable block (ram,0x0001012e1078) */
/* WARNING: Removing unreachable block (ram,0x0001012e1068) */
/* WARNING: Removing unreachable block (ram,0x0001012e1058) */
/* WARNING: Removing unreachable block (ram,0x0001012e1048) */
/* WARNING: Removing unreachable block (ram,0x0001012e10d8) */
/* WARNING: Removing unreachable block (ram,0x0001012e10c8) */
/* WARNING: Removing unreachable block (ram,0x0001012e10b8) */
/* WARNING: Removing unreachable block (ram,0x0001012e10a8) */
/* WARNING: Removing unreachable block (ram,0x0001012e1098) */
/* WARNING: Removing unreachable block (ram,0x0001012e1138) */
/* WARNING: Removing unreachable block (ram,0x0001012e1128) */
/* WARNING: Removing unreachable block (ram,0x0001012e1118) */
/* WARNING: Removing unreachable block (ram,0x0001012e1108) */
/* WARNING: Removing unreachable block (ram,0x0001012e10f8) */
/* WARNING: Removing unreachable block (ram,0x0001012e11a8) */
/* WARNING: Removing unreachable block (ram,0x0001012e1198) */
/* WARNING: Removing unreachable block (ram,0x0001012e1188) */
/* WARNING: Removing unreachable block (ram,0x0001012e1178) */
/* WARNING: Removing unreachable block (ram,0x0001012e1168) */
/* WARNING: Removing unreachable block (ram,0x0001012e1158) */
/* WARNING: Removing unreachable block (ram,0x0001012e1218) */
/* WARNING: Removing unreachable block (ram,0x0001012e1208) */
/* WARNING: Removing unreachable block (ram,0x0001012e11f8) */
/* WARNING: Removing unreachable block (ram,0x0001012e11e8) */
/* WARNING: Removing unreachable block (ram,0x0001012e11d8) */
/* WARNING: Removing unreachable block (ram,0x0001012e11c8) */
/* WARNING: Removing unreachable block (ram,0x0001012e11b8) */
/* WARNING: Removing unreachable block (ram,0x0001012e1288) */
/* WARNING: Removing unreachable block (ram,0x0001012e1278) */
/* WARNING: Removing unreachable block (ram,0x0001012e1268) */
/* WARNING: Removing unreachable block (ram,0x0001012e1258) */
/* WARNING: Removing unreachable block (ram,0x0001012e1248) */
/* WARNING: Removing unreachable block (ram,0x0001012e1238) */
/* WARNING: Removing unreachable block (ram,0x0001012e1228) */
/* WARNING: Removing unreachable block (ram,0x0001012e1324) */
/* WARNING: Removing unreachable block (ram,0x0001012e1314) */
/* WARNING: Removing unreachable block (ram,0x0001012e1304) */
/* WARNING: Removing unreachable block (ram,0x0001012e12f4) */
/* WARNING: Removing unreachable block (ram,0x0001012e12e4) */
/* WARNING: Removing unreachable block (ram,0x0001012e12d4) */
/* WARNING: Removing unreachable block (ram,0x0001012e12c4) */
/* WARNING: Removing unreachable block (ram,0x0001012e13b4) */
/* WARNING: Removing unreachable block (ram,0x0001012e13b8) */
/* WARNING: Removing unreachable block (ram,0x0001012e13a4) */
/* WARNING: Removing unreachable block (ram,0x0001012e1394) */
/* WARNING: Removing unreachable block (ram,0x0001012e1384) */
/* WARNING: Removing unreachable block (ram,0x0001012e1374) */
/* WARNING: Removing unreachable block (ram,0x0001012e1364) */
/* WARNING: Removing unreachable block (ram,0x0001012e1354) */
/* WARNING: Removing unreachable block (ram,0x0001012e1344) */
/* WARNING: Removing unreachable block (ram,0x0001012e1460) */
/* WARNING: Removing unreachable block (ram,0x0001012e1450) */
/* WARNING: Removing unreachable block (ram,0x0001012e1440) */
/* WARNING: Removing unreachable block (ram,0x0001012e1430) */
/* WARNING: Removing unreachable block (ram,0x0001012e1420) */
/* WARNING: Removing unreachable block (ram,0x0001012e1410) */
/* WARNING: Removing unreachable block (ram,0x0001012e1400) */
/* WARNING: Removing unreachable block (ram,0x0001012e13f0) */
/* WARNING: Removing unreachable block (ram,0x0001012e13e0) */
/* WARNING: Removing unreachable block (ram,0x0001012e14f0) */
/* WARNING: Removing unreachable block (ram,0x0001012e14e0) */
/* WARNING: Removing unreachable block (ram,0x0001012e14d0) */
/* WARNING: Removing unreachable block (ram,0x0001012e14c0) */
/* WARNING: Removing unreachable block (ram,0x0001012e14b0) */
/* WARNING: Removing unreachable block (ram,0x0001012e14a0) */
/* WARNING: Removing unreachable block (ram,0x0001012e1490) */
/* WARNING: Removing unreachable block (ram,0x0001012e1480) */
/* WARNING: Removing unreachable block (ram,0x0001012e1470) */
/* WARNING: Removing unreachable block (ram,0x0001012e1590) */
/* WARNING: Removing unreachable block (ram,0x0001012e1580) */
/* WARNING: Removing unreachable block (ram,0x0001012e1570) */
/* WARNING: Removing unreachable block (ram,0x0001012e1560) */
/* WARNING: Removing unreachable block (ram,0x0001012e1550) */
/* WARNING: Removing unreachable block (ram,0x0001012e1540) */
/* WARNING: Removing unreachable block (ram,0x0001012e1530) */
/* WARNING: Removing unreachable block (ram,0x0001012e1520) */
/* WARNING: Removing unreachable block (ram,0x0001012e1510) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e84) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e74) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e64) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e54) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e44) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e34) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e24) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e14) */
/* WARNING: Removing unreachable block (ram,0x0001012e0e04) */
/* WARNING: Removing unreachable block (ram,0x0001012e0df4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001012e0de4) */
/* WARNING: Removing unreachable block (ram,0x0001012e0ee8) */

void FUN_1012e0a74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar20 = unaff_x20;
  func_0x000107c5c634();
  func_0x000107c61180();
  if (lVar20 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c41420();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40014();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c3ff88();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar20;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3ffe4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar20;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c3ffdc();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c3ffd0();
              func_0x000107c61180();
              if (lVar7 != 0) {
                lVar8 = unaff_x20;
                func_0x000107c5b944();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar20;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c51e88();
                  func_0x000107c61180();
                  if (lVar9 == 0) {
                    func_0x000107c61170(lVar1);
                    lVar1 = lVar20;
                  }
                  else {
                    lVar10 = unaff_x20;
                    func_0x000107c5dbac();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      lVar11 = unaff_x20;
                      func_0x000107c4d840();
                      func_0x000107c61180();
                      if (lVar11 != 0) {
                        lVar12 = unaff_x20;
                        func_0x000107c5e1d0();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar20;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c4d238();
                          func_0x000107c61180();
                          if (lVar13 == 0) {
                            func_0x000107c61170(lVar1);
                            lVar1 = lVar20;
                          }
                          else {
                            lVar14 = unaff_x20;
                            func_0x000107c5c99c();
                            func_0x000107c61180();
                            if (lVar14 != 0) {
                              lVar15 = unaff_x20;
                              func_0x000107c5b99c();
                              func_0x000107c61180();
                              if (lVar15 != 0) {
                                lVar16 = unaff_x20;
                                func_0x000107c40ae0();
                                func_0x000107c61180();
                                if (lVar16 == 0) {
                                  func_0x000107c61170(lVar1);
                                  lVar1 = lVar20;
                                }
                                else {
                                  lVar17 = unaff_x20;
                                  func_0x000107c3ffc0();
                                  func_0x000107c61180();
                                  if (lVar17 == 0) {
                                    func_0x000107c61170(lVar1);
                                    lVar1 = lVar20;
                                  }
                                  else {
                                    lVar18 = unaff_x20;
                                    func_0x000107c3fff4();
                                    func_0x000107c61180();
                                    if (lVar18 != 0) {
                                      lVar19 = unaff_x20;
                                      func_0x000107c5b398();
                                      func_0x000107c61180();
                                      if (lVar19 != 0) {
                                        func_0x000107c4d280();
                                        func_0x000107c61180();
                                        if (unaff_x20 == 0) {
                                          func_0x000107c61170(lVar1);
                                          lVar1 = lVar20;
                                        }
                                        else {
                                          lVar20 = 0;
                                          FUN_1012db1c4();
                                          func_0x000107c613fc();
                                          *(long *)(lVar20 + 0x10) = lVar1;
                                          *(long *)(lVar20 + 0x18) = lVar3;
                                          *(long *)(lVar20 + 0x20) = lVar4;
                                          *(long *)(lVar20 + 0x28) = lVar5;
                                          *(long *)(lVar20 + 0x30) = lVar6;
                                          *(long *)(lVar20 + 0x38) = lVar7;
                                          *(long *)(lVar20 + 0x40) = lVar8;
                                          *(long *)(lVar20 + 0x48) = lVar9;
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
                                          func_0x000107c61174();
                                          func_0x000107c61174();
                                          func_0x000107c61174();
                                          func_0x000107c615f0(lVar15);
                                          func_0x000107c615f0(lVar16);
                                          func_0x000107c61174();
                                          func_0x000107c61174();
                                          func_0x000107c61174();
                                          func_0x000107c61174();
                                          func_0x000107c4141c();
                                          func_0x000107c61180();
                                          *(long *)(lVar20 + 0x50) = lVar2;
                                          *(long *)(lVar20 + 0x58) = lVar10;
                                          *(long *)(lVar20 + 0x60) = lVar11;
                                          *(long *)(lVar20 + 0x68) = lVar12;
                                          *(long *)(lVar20 + 0x70) = lVar13;
                                          *(long *)(lVar20 + 0x78) = lVar14;
                                          *(long *)(lVar20 + 0x80) = lVar15;
                                          *(long *)(lVar20 + 0x88) = lVar16;
                                          *(long *)(lVar20 + 0x90) = lVar17;
                                          *(long *)(lVar20 + 0x98) = lVar18;
                                          *(long *)(lVar20 + 0xa0) = lVar19;
                                          *(long *)(lVar20 + 0xa8) = unaff_x20;
                                          func_0x0001012dab50();
                                          lVar1 = unaff_x20;
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
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1012e15a0; end: 1012e15c7; -[SCCreatePostFlowEntryPoint begin] */

void FUN_1012e15a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012e0a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012e15c8; end: 1012e160b; -[SCCreatePostFlowEntryPoint end] */

void FUN_1012e15c8(undefined8 param_1)

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



/* Entry: 1012e160c; end: 1012e1f73;  */

void FUN_1012e160c(long param_1,long param_2,long param_3)

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
      uVar2 = 0;
      if (((param_2 == 0x767265536b636564) && (param_3 == -0x13ffffff8c9a9c97)) ||
         (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53e98();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
           (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c536e0();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
             (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53680();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10e4660)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010ef1b9a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c536bc();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10d2c00)) ||
                 (func_0x000107c605b8(0xd000000000000022,0x800000010ef2d400,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c536b4();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
                   (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c536a8();
                }
                else {
                  uVar2 = 0xd000000000000027;
                  if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef10cb2c0)) ||
                     (func_0x000107c605b8(0xd000000000000027,0x800000010ef34d40,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5970c();
                  }
                  else {
                    uVar2 = 0xd000000000000025;
                    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef10cb290)) ||
                       (func_0x000107c605b8(0xd000000000000025,0x800000010ef34d70,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c58ed0();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e4100)) ||
                         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5a46c();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10eec60))
                           || (func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c56b34();
                        }
                        else {
                          uVar2 = 0;
                          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10cd8d0))
                             || (func_0x000107c605b8(0xd00000000000001a,0x800000010ef32730,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c59d4c();
                          }
                          else {
                            uVar2 = 0xd000000000000015;
                            if (((param_2 == -0x2fffffffffffffeb) &&
                                (param_3 == -0x7ffffffef10cb260)) ||
                               (func_0x000107c605b8(0xd000000000000015,0x800000010ef34da0,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c5974c();
                            }
                            else {
                              uVar2 = 0xd00000000000001d;
                              if (((param_2 == -0x2fffffffffffffe3) &&
                                  (param_3 == -0x7ffffffef10cb240)) ||
                                 (func_0x000107c605b8(0xd00000000000001d,0x800000010ef34dc0,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c53a74();
                              }
                              else {
                                if ((param_2 != -0x2fffffffffffffe6) ||
                                   (param_3 != -0x7ffffffef10cb220)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd00000000000001a,0x800000010ef34de0,param_2,
                                                      param_3,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = 0;
                                    if (((param_2 == -0x2fffffffffffffd6) &&
                                        (param_3 == -0x7ffffffef10cb200)) ||
                                       (func_0x000107c605b8(0xd00000000000002a,0x800000010ef34e00,
                                                            param_2,param_3,0), (uVar2 & 1) != 0)) {
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c536c8();
                                    }
                                    else {
                                      uVar2 = 0x536f725070616e73;
                                      if (((param_2 == 0x536f725070616e73) &&
                                          (param_3 == -0x108c9a9c96898d9b)) ||
                                         (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c5943c();
                                      }
                                      else {
                                        uVar2 = 0x726553636973756d;
                                        if (((param_2 == 0x726553636973756d) &&
                                            (param_3 == -0x12ffff8c9a9c968a)) ||
                                           (func_0x000107c605b8(0x726553636973756d,
                                                                0xed00007365636976,param_2,param_3,0
                                                               ), (uVar2 & 1) != 0)) {
                                          func_0x0001006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c56870();
                                        }
                                        else {
                                          if ((param_2 != -0x2fffffffffffffe9) ||
                                             (param_3 != -0x7ffffffef10ed990)) {
                                            uVar2 = 0xd000000000000017;
                                            func_0x000107c605b8(0xd000000000000017,
                                                                0x800000010ef12670,param_2,param_3,0
                                                               );
                                            if ((uVar2 & 1) == 0) {
                                              if ((param_2 != -0x2fffffffffffffe9) ||
                                                 (param_3 != -0x7ffffffef10e0990)) {
                                                uVar2 = 0xd000000000000017;
                                                func_0x000107c605b8(0xd000000000000017,
                                                                    0x800000010ef1f670,param_2,
                                                                    param_3,0);
                                                if ((uVar2 & 1) == 0) {
                                                  func_0x000107c602fc(0x15);
                                                  func_0x000107c6142c(0xe000000000000000);
                                                  func_0x000107c5fb78(param_2,param_3);
                                                  func_0x000107c60450("Fatal error",0xb,2,
                                                                      0xd000000000000013,
                                                                      0x800000010ef0fc20,
                                                                                                                                            
                                                  "SCCreatePostFlow/SCCreatePostFlowEntryPoint.swift"
                                                  ,0x31,2,0x8c,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e1f74)
                                                  ;
                                                  (*pcVar1)();
                                                }
                                              }
                                              func_0x0001006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                              func_0x000107c605b0();
                                              func_0x000107c5684c();
                                              goto LAB_1012e1698;
                                            }
                                          }
                                          func_0x0001006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c5a68c();
                                        }
                                      }
                                    }
                                    goto LAB_1012e1698;
                                  }
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c53698();
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
          }
        }
      }
    }
  }
LAB_1012e1698:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012e1f74; end: 1012e201f; -[SCCreatePostFlowEntryPoint setValue:forIvarName:] */

void FUN_1012e1f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012e160c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012e2020; end: 1012e21ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e2020(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d70b58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70b98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70ba0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70ba8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70bb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70bb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70bc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70bc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70bd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70bd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70be0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d70be8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d70bf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d70bf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d70c00) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012e2200; end: 1012e221f; -[SCCreatePostFlowEntryPoint init] */

void FUN_1012e2200(void)

{
  FUN_1012e2020();
  return;
}



/* Entry: 1012e2220; end: 1012e2253;  */

void FUN_1012e2220(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012e2254; end: 1012e23cb; -[SCCreatePostFlowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e2254(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d70b58);
  func_0x000107c61610(param_1 + _DAT_112d70b60);
  func_0x000107c61610(param_1 + _DAT_112d70b68);
  func_0x000107c61610(param_1 + _DAT_112d70b70);
  func_0x000107c61610(param_1 + _DAT_112d70b78);
  func_0x000107c61610(param_1 + _DAT_112d70b80);
  func_0x000107c61610(param_1 + _DAT_112d70b88);
  func_0x000107c61610(param_1 + _DAT_112d70b90);
  func_0x000107c61610(param_1 + _DAT_112d70b98);
  func_0x000107c61610(param_1 + _DAT_112d70ba0);
  func_0x000107c61610(param_1 + _DAT_112d70ba8);
  func_0x000107c61610(param_1 + _DAT_112d70bb0);
  func_0x000107c61610(param_1 + _DAT_112d70bb8);
  FUN_100cabae0(param_1 + _DAT_112d70bc0);
  FUN_100cabae0(param_1 + _DAT_112d70bc8);
  func_0x000107c61610(param_1 + _DAT_112d70bd0);
  func_0x000107c61610(param_1 + _DAT_112d70bd8);
  func_0x000107c61610(param_1 + _DAT_112d70be0);
  func_0x000107c61610(param_1 + _DAT_112d70be8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70bf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d70c00));
  return;
}



/* Entry: 1012e23cc; end: 1012e23eb;  */

void FUN_1012e23cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c5430);
  return;
}



/* Entry: 1012e23ec; end: 1012e2563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1012e23ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_80 [8];
  long lStack_70;
  long lStack_68;
  
  puVar5 = auStack_80;
  func_0x000107c610f8();
  lVar3 = _DAT_112d70c30;
  func_0x000107c61614(unaff_x20 + _DAT_112d70c30,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_1);
  lVar2 = 0;
  func_0x0001012e2f64();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d70c68) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112d70c70) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112d70c78) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112d70c80) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112d70c88) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *(long **)(unaff_x20 + _DAT_112d70c38) = plVar4;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return puVar5;
}



/* Entry: 1012e2564; end: 1012e25c3; -[_TtC30SCEditResendSnapEditorLauncher32SnapEditorPageLauncherEntryPoint init] */

void FUN_1012e2564(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCEditResendSnapEditorLauncher.SnapEditorPageLauncherEntryPoint",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e2590);
  (*pcVar1)();
}



/* Entry: 1012e25c4; end: 1012e25fb; -[_TtC30SCEditResendSnapEditorLauncher32SnapEditorPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e25c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d70c30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70c38));
  return;
}



/* Entry: 1012e25fc; end: 1012e266f;  */

/* WARNING: Possible PIC construction at 0x0001012e263c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e2640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e25fc(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + _DAT_112d70c30;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4e9e4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012e2670; end: 1012e2677;  */

undefined8 FUN_1012e2670(void)

{
  return 0;
}



/* Entry: 1012e2678; end: 1012e2707; -[_TtC30SCEditResendSnapEditorLauncher32SnapEditorPageLauncherEntryPoint handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e2678(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d70c38);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1012e2708; end: 1012e270b; -[_TtC30SCEditResendSnapEditorLauncher32SnapEditorPageLauncherEntryPoint setHandlers:] */

void FUN_1012e2708(void)

{
  return;
}



/* Entry: 1012e270c; end: 1012e272b;  */

void FUN_1012e270c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c5590);
  return;
}



/* Entry: 1012e272c; end: 1012e27c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e272c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d70c68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d70c70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d70c78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d70c80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d70c88) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012e27c8; end: 1012e2827; -[_TtC30SCEditResendSnapEditorLauncher27SnapEditorPageLaunchHandler init] */

void FUN_1012e27c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCEditResendSnapEditorLauncher.SnapEditorPageLaunchHandler",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012e27f4);
  (*pcVar1)();
}



/* Entry: 1012e2828; end: 1012e288f; -[_TtC30SCEditResendSnapEditorLauncher27SnapEditorPageLaunchHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012e2844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e2864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e2848) */
/* WARNING: Removing unreachable block (ram,0x0001012e2868) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e2828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70c68));
  return;
}



/* Entry: 1012e2890; end: 1012e2897; -[_TtC30SCEditResendSnapEditorLauncher27SnapEditorPageLaunchHandler screen] */

undefined8 FUN_1012e2890(void)

{
  return 0x2d;
}



/* Entry: 1012e2898; end: 1012e28d7;  */

void FUN_1012e2898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d70c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d931d74;
  func_0x000107c61520(&UNK_10d931d74,&UNK_11039f028);
  puRam0000000112d70c90 = puVar1;
  return;
}



/* Entry: 1012e28d8; end: 1012e2cf3;  */

void FUN_1012e28d8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar5 = unaff_x20;
  func_0x000107c44a64();
  if ((int)uVar5 == 0) {
    return;
  }
  func_0x000107c4f4a0();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    return;
  }
  uVar5 = unaff_x20;
  func_0x000107c3e264();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e2ce0);
    (*pcVar4)();
  }
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar20 = param_2;
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(param_2);
  uVar5 = uVar6 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar5 = param_2 >> 0x38 & 0xf;
  }
  uVar6 = uVar20;
  if (uVar5 == 0) {
LAB_1012e2998:
    uVar19 = 0;
    uVar20 = 0;
  }
  else {
    uVar5 = unaff_x20;
    func_0x000107c3e264();
    func_0x000107c61180();
    uVar6 = uVar20;
    if (uVar5 == 0) goto LAB_1012e2998;
    uVar19 = uVar5;
    func_0x000107c5faec();
    uVar6 = uVar20;
    func_0x000107c61170(uVar5);
  }
  uVar5 = unaff_x20;
  func_0x000107c4f490();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e2ce4);
    (*pcVar4)();
  }
  uVar7 = uVar5;
  func_0x000107c5faec();
  uVar14 = uVar6;
  func_0x000107c61170(uVar5);
  uVar5 = unaff_x20;
  func_0x000107c5d0b4();
  uVar8 = unaff_x20;
  func_0x000107c4f4c0();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e2ce8);
    (*pcVar4)();
  }
  uVar21 = uVar8;
  func_0x000107c5faec();
  uVar17 = uVar14;
  func_0x000107c61170(uVar8);
  func_0x000107c6142c(uVar14);
  uVar8 = uVar21 & 0xffffffffffff;
  if ((uVar14 & 0x2000000000000000) != 0) {
    uVar8 = uVar14 >> 0x38 & 0xf;
  }
  uVar14 = uVar17;
  if (uVar8 == 0) {
LAB_1012e2a50:
    uVar21 = 0;
    uVar17 = 0;
  }
  else {
    uVar8 = unaff_x20;
    func_0x000107c4f4c0();
    func_0x000107c61180();
    uVar14 = uVar17;
    if (uVar8 == 0) goto LAB_1012e2a50;
    uVar21 = uVar8;
    func_0x000107c5faec();
    uVar14 = uVar17;
    func_0x000107c61170(uVar8);
  }
  uVar8 = unaff_x20;
  func_0x000107c4f480();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e2cec);
    (*pcVar4)();
  }
  uVar9 = uVar8;
  func_0x000107c5faec();
  uVar18 = uVar14;
  func_0x000107c61170(uVar8);
  uVar8 = unaff_x20;
  func_0x000107c427d4();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e2cf0);
    (*pcVar4)();
  }
  uVar10 = uVar8;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar8);
  uVar3 = (uint)(uVar18 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar15 == 0) {
      uVar8 = uVar18;
      func_0x00010006c090(uVar10);
      uVar10 = uVar18 & 0xff000000000000;
      uVar18 = uVar8;
      if (uVar10 != 0) {
LAB_1012e2b20:
        uVar10 = unaff_x20;
        func_0x000107c427d4();
        func_0x000107c61180();
        uVar8 = uVar18;
        if (uVar10 != 0) {
          uVar16 = uVar10;
          func_0x000107c5ee30();
          uVar8 = uVar18;
          func_0x000107c61170(uVar10);
          goto LAB_1012e2b70;
        }
      }
    }
    else {
      func_0x00010006c090(uVar10);
      uVar8 = uVar18;
      if ((long)(int)uVar10 != (long)uVar10 >> 0x20) goto LAB_1012e2b20;
    }
  }
  else if (uVar15 == 2) {
    lVar1 = *(long *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    func_0x00010006c090(uVar10);
    uVar8 = uVar18;
    if (lVar1 != lVar2) goto LAB_1012e2b20;
  }
  else {
    func_0x00010006c090(uVar10);
    uVar8 = uVar18;
  }
  uVar16 = 0;
  uVar18 = 0xf000000000000000;
LAB_1012e2b70:
  uVar10 = unaff_x20;
  func_0x000107c49b78();
  uVar11 = unaff_x20;
  func_0x000107c519c8();
  if ((int)uVar11 != 0) {
    func_0x000107c519c8(unaff_x20);
    func_0x000107c610f8();
    func_0x000107c46ecc();
  }
  uVar11 = unaff_x20;
  func_0x000107c4b2c0();
  func_0x000107c61180();
  if (uVar11 != 0) {
    uVar12 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    func_0x000107c6142c(uVar8);
    uVar11 = uVar12 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar11 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar11 != 0) {
      uVar8 = unaff_x20;
      func_0x000107c4b2c0();
      func_0x000107c61180();
      if (uVar8 != 0) {
        func_0x000107c5faec();
        func_0x000107c61170(uVar8);
      }
    }
    uVar13 = 0;
    func_0x0001043fd694(0);
    func_0x000107c610f8();
    func_0x0001043fd2fc(uVar13,uVar19,uVar20,uVar7,uVar6,uVar5 & 0xffffffff,uVar21,uVar17,uVar9,
                        uVar14,uVar16,uVar18,(char)uVar10);
    func_0x000107c61168(PTR_PTR_1126b13c0);
    func_0x000107c4f4a4();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(uVar19);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1012e2cf4);
  (*pcVar4)();
}



/* Entry: 1012e2cf4; end: 1012e2d83; -[_TtC30SCEditResendSnapEditorLauncher27SnapEditorPageLaunchHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x0001012e2d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e2d68) */

void FUN_1012e2cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1012e312c(param_3,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012e2d84; end: 1012e2e07; -[_TtC30SCEditResendSnapEditorLauncher27SnapEditorPageLaunchHandler snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

/* WARNING: Possible PIC construction at 0x0001012e2dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e2ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e2dc4) */
/* WARNING: Removing unreachable block (ram,0x0001012e2de0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e2d84(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012e2e08; end: 1012e2e1b;  */

bool FUN_1012e2e08(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1012e2e1c; end: 1012e2ec7;  */

void FUN_1012e2e1c(void)

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



/* Entry: 1012e2ec8; end: 1012e2ed7;  */

void FUN_1012e2ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1012e2ed8; end: 1012e2f1f;  */

undefined8 FUN_1012e2ed8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d70ca0;
  func_0x0001000285a8(0x112d70ca0,&UNK_10dc27520);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1012e2f20; end: 1012e2f83;  */

void FUN_1012e2f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d512f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b25d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d512f8 = puVar1;
  return;
}



/* Entry: 1012e2f84; end: 1012e30eb;  */

int FUN_1012e2f84(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1012e3000;
        goto LAB_1012e2fe4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1012e2fe4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1012e3000:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1012e30ec; end: 1012e312b;  */

void FUN_1012e30ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d70cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d931d4c;
  func_0x000107c61520(&UNK_10d931d4c,&UNK_11039f028);
  puRam0000000112d70cd0 = puVar1;
  return;
}



/* Entry: 1012e312c; end: 1012e398f;  */

/* WARNING: Possible PIC construction at 0x0001012e31bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e31f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e349c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e379c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e3918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012e32a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012e391c) */
/* WARNING: Removing unreachable block (ram,0x0001012e37a0) */
/* WARNING: Removing unreachable block (ram,0x0001012e344c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3398) */
/* WARNING: Removing unreachable block (ram,0x0001012e3234) */
/* WARNING: Removing unreachable block (ram,0x0001012e3238) */
/* WARNING: Removing unreachable block (ram,0x0001012e3960) */
/* WARNING: Removing unreachable block (ram,0x0001012e324c) */
/* WARNING: Removing unreachable block (ram,0x0001012e326c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3320) */
/* WARNING: Removing unreachable block (ram,0x0001012e3328) */
/* WARNING: Removing unreachable block (ram,0x0001012e3290) */
/* WARNING: Removing unreachable block (ram,0x0001012e3330) */
/* WARNING: Removing unreachable block (ram,0x0001012e3338) */
/* WARNING: Removing unreachable block (ram,0x0001012e3294) */
/* WARNING: Removing unreachable block (ram,0x0001012e33c4) */
/* WARNING: Removing unreachable block (ram,0x0001012e345c) */
/* WARNING: Removing unreachable block (ram,0x0001012e34a0) */
/* WARNING: Removing unreachable block (ram,0x0001012e34d4) */
/* WARNING: Removing unreachable block (ram,0x0001012e358c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3504) */
/* WARNING: Removing unreachable block (ram,0x0001012e394c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3950) */
/* WARNING: Removing unreachable block (ram,0x0001012e3514) */
/* WARNING: Removing unreachable block (ram,0x0001012e351c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3524) */
/* WARNING: Removing unreachable block (ram,0x0001012e3594) */
/* WARNING: Removing unreachable block (ram,0x0001012e3530) */
/* WARNING: Removing unreachable block (ram,0x0001012e357c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3534) */
/* WARNING: Removing unreachable block (ram,0x0001012e3948) */
/* WARNING: Removing unreachable block (ram,0x0001012e3540) */
/* WARNING: Removing unreachable block (ram,0x0001012e354c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3944) */
/* WARNING: Removing unreachable block (ram,0x0001012e3558) */
/* WARNING: Removing unreachable block (ram,0x0001012e3578) */
/* WARNING: Removing unreachable block (ram,0x0001012e35a4) */
/* WARNING: Removing unreachable block (ram,0x0001012e35b0) */
/* WARNING: Removing unreachable block (ram,0x0001012e35b8) */
/* WARNING: Removing unreachable block (ram,0x0001012e396c) */
/* WARNING: Removing unreachable block (ram,0x0001012e35cc) */
/* WARNING: Removing unreachable block (ram,0x0001012e3978) */
/* WARNING: Removing unreachable block (ram,0x0001012e3620) */
/* WARNING: Removing unreachable block (ram,0x0001012e3984) */
/* WARNING: Removing unreachable block (ram,0x0001012e364c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3670) */
/* WARNING: Removing unreachable block (ram,0x0001012e3690) */
/* WARNING: Removing unreachable block (ram,0x0001012e36b4) */
/* WARNING: Removing unreachable block (ram,0x0001012e36c4) */
/* WARNING: Removing unreachable block (ram,0x0001012e36cc) */
/* WARNING: Removing unreachable block (ram,0x0001012e36bc) */
/* WARNING: Removing unreachable block (ram,0x0001012e36d0) */
/* WARNING: Removing unreachable block (ram,0x0001012e3488) */
/* WARNING: Removing unreachable block (ram,0x0001012e3404) */
/* WARNING: Removing unreachable block (ram,0x0001012e329c) */
/* WARNING: Removing unreachable block (ram,0x0001012e3340) */
/* WARNING: Removing unreachable block (ram,0x0001012e334c) */
/* WARNING: Removing unreachable block (ram,0x0001012e31f4) */
/* WARNING: Removing unreachable block (ram,0x0001012e32ac) */
/* WARNING: Removing unreachable block (ram,0x0001012e3214) */
/* WARNING: Removing unreachable block (ram,0x0001012e31c0) */
/* WARNING: Removing unreachable block (ram,0x0001012e32a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e312c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010451338c();
  puVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_1012e2898();
    puVar3 = &UNK_11039f028;
    func_0x000107c613f8(&UNK_11039f028,param_1,0,0);
    *param_1 = 1;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    (**(code **)(param_3 + 0x10))(param_3,puVar4);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
    return;
  }
  puVar2 = puVar1;
  func_0x000107c61150(puVar1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_topmostViewController_11267b0f0);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c5cc6c(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
  return;
}



/* Entry: 1012e3990; end: 1012e399b; -[SCSnapEditorPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e3990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70cd8;
  func_0x000107c61428(param_1 + _DAT_112d70cd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e399c; end: 1012e39a7; -[SCSnapEditorPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e399c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70cd8;
  func_0x000107c61428(param_1 + _DAT_112d70cd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e39a8; end: 1012e39b3; -[SCSnapEditorPageLauncherEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70ce0;
  func_0x000107c61428(param_1 + _DAT_112d70ce0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e39b4; end: 1012e39bf; -[SCSnapEditorPageLauncherEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70ce0;
  func_0x000107c61428(param_1 + _DAT_112d70ce0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e39c0; end: 1012e39cb; -[SCSnapEditorPageLauncherEntryPoint snapEditorScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70ce8;
  func_0x000107c61428(param_1 + _DAT_112d70ce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e39cc; end: 1012e39d7; -[SCSnapEditorPageLauncherEntryPoint setSnapEditorScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70ce8;
  func_0x000107c61428(param_1 + _DAT_112d70ce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e39d8; end: 1012e39e3; -[SCSnapEditorPageLauncherEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70cf0;
  func_0x000107c61428(param_1 + _DAT_112d70cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e39e4; end: 1012e39ef; -[SCSnapEditorPageLauncherEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70cf0;
  func_0x000107c61428(param_1 + _DAT_112d70cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e39f0; end: 1012e39fb; -[SCSnapEditorPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e39f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70cf8;
  func_0x000107c61428(param_1 + _DAT_112d70cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012e39fc; end: 1012e3a3f;  */

void FUN_1012e39fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012e3a40; end: 1012e3a4b; -[SCSnapEditorPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012e3a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70cf8;
  func_0x000107c61428(param_1 + _DAT_112d70cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012e3a4c; end: 1012e3a9f;  */

void FUN_1012e3a4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


