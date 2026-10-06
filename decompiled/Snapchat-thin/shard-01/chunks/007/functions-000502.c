/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10144ef28; end: 10144f147;  */

void FUN_10144ef28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar9 = *(long *)(unaff_x22 + 0x508);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x668));
  func_0x000107c61170(uVar7);
  lVar2 = lVar9;
  func_0x000107c60bb8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x660);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x600);
    *(undefined8 *)(unaff_x22 + 0x5c8) = uVar7;
    func_0x000107c614e4();
    lVar2 = unaff_x22 + 0x5c8;
    func_0x000107c5fb18(lVar2,uVar7);
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar5 = unaff_x22 + 0x338;
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar3 + 0x28) = lVar5;
    *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000014;
    *(undefined8 *)(lVar3 + 0x38) = 0x800000010ef812a0;
    lVar5 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    FUN_101450334((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    func_0x000107c5fadc(lVar2,uVar7);
    func_0x000107c6142c(uVar7);
    lVar3 = lVar5;
    func_0x000107c5f9dc(lVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
    func_0x000107c466bc();
    *(undefined **)(unaff_x22 + 0x688) = puVar6;
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61654();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x660);
    lVar3 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar2);
    *(long *)(unaff_x22 + 0x678) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x680) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10144f148; end: 10144f15b;  */

void FUN_10144f148(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10144f15c,*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618));
  return;
}



/* Entry: 10144f15c; end: 10144f27b;  */

void FUN_10144f15c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x630);
  lVar5 = *(long *)(unaff_x22 + 0x628);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x620);
  lVar6 = *(long *)(unaff_x22 + 0x5f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x608));
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c4fe8c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f437265646e6572;
  func_0x000107c5fadc(0x6f437265646e6572,0xee006574656c706d);
  func_0x000107c4fff8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010144f278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x650),*(undefined8 *)(unaff_x22 + 0x658),
             *(undefined8 *)(unaff_x22 + 0x678),*(undefined8 *)(unaff_x22 + 0x680));
  return;
}



/* Entry: 10144f27c; end: 10144f28f;  */

void FUN_10144f27c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10144f290,*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618));
  return;
}



/* Entry: 10144f290; end: 10144f3a7;  */

void FUN_10144f290(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x630);
  lVar5 = *(long *)(unaff_x22 + 0x628);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x620);
  lVar6 = *(long *)(unaff_x22 + 0x5f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x608));
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c4fe8c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f437265646e6572;
  func_0x000107c5fadc(0x6f437265646e6572,0xee006574656c706d);
  func_0x000107c4fff8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010144f3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144f3a8; end: 10144f3bb;  */

void FUN_10144f3a8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10144f3bc,*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618));
  return;
}



/* Entry: 10144f3bc; end: 10144f4d3;  */

void FUN_10144f3bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x630);
  lVar5 = *(long *)(unaff_x22 + 0x628);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x620);
  lVar6 = *(long *)(unaff_x22 + 0x5f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x608));
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c4fe8c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f437265646e6572;
  func_0x000107c5fadc(0x6f437265646e6572,0xee006574656c706d);
  func_0x000107c4fff8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010144f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144f4d4; end: 10144f52f;  */

void FUN_10144f4d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x640);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x638);
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,param_2,FUN_10144f530,unaff_x22 + 0x510);
  return;
}



/* Entry: 10144f530; end: 10144f543;  */

void FUN_10144f530(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10144f544,*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618));
  return;
}



/* Entry: 10144f544; end: 10144f65b;  */

void FUN_10144f544(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x630);
  lVar5 = *(long *)(unaff_x22 + 0x628);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x620);
  lVar6 = *(long *)(unaff_x22 + 0x5f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x608));
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c4fe8c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f437265646e6572;
  func_0x000107c5fadc(0x6f437265646e6572,0xee006574656c706d);
  func_0x000107c4fff8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010144f658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144f65c; end: 10144f6bf;  */

void FUN_10144f65c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x668);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x660);
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,param_2,FUN_10144f6c0,unaff_x22 + 0x540);
  return;
}



/* Entry: 10144f6c0; end: 10144f6d3;  */

void FUN_10144f6c0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10144f6d4,*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618));
  return;
}



/* Entry: 10144f6d4; end: 10144f7eb;  */

void FUN_10144f6d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x630);
  lVar5 = *(long *)(unaff_x22 + 0x628);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x620);
  lVar6 = *(long *)(unaff_x22 + 0x5f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x608));
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c4fe8c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar1 = *(undefined8 *)(lVar6 + lVar5);
  func_0x000107c40110(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = 0x6f437265646e6572;
  func_0x000107c5fadc(0x6f437265646e6572,0xee006574656c706d);
  func_0x000107c4fff8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010144f7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144f7ec; end: 10144f85f;  */

void FUN_10144f7ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144f860,uVar1,uVar2);
  return;
}



/* Entry: 10144f860; end: 10144f8cb;  */

void FUN_10144f860(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x80) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144f8cc,param_1);
  return;
}



/* Entry: 10144f8cc; end: 10144f9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144f8cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x10144f91c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar2 + _DAT_112d9f978) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10144f9c4; end: 10144fb33;  */

void FUN_10144f9c4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar4,*(undefined8 *)(param_1 + 0x38));
  lVar5 = *plVar4;
  if (param_3 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar4 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar4 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar1);
    return;
  }
  if (param_2 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000107c614f0();
    lVar3 = param_2;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 0x40) + 0x28);
  *plVar4 = lVar3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = lVar2;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar5);
  return;
}



/* Entry: 10144fb34; end: 10144fb9b; -[SCComposerHTMLToImageRenderer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144fb34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d9f948) = 0;
  *(undefined1 *)(param_1 + _DAT_112d9f940) = 0;
  *(undefined **)(param_1 + _DAT_112d9f938) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10144fb9c; end: 10144fb9f;  */

void FUN_10144fb9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10144fba0; end: 10144fbd7; -[SCComposerHTMLToImageRenderer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144fba0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d9f948));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d9f938));
  return;
}



/* Entry: 10144fbd8; end: 10144fc43;  */

void FUN_10144fbd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144fc44,uVar1,uVar2);
  return;
}



/* Entry: 10144fc44; end: 10144fc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144fc44(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar2 = _DAT_112d9f978;
  if (*(long *)(lVar1 + _DAT_112d9f978) != 0) {
    func_0x000107c61450();
  }
  *(undefined8 *)(lVar1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010144fc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144fc8c; end: 10144fcc7;  */

void FUN_10144fc8c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010144fcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10144fcc8; end: 10144fd93; -[_TtC29SCComposerHTMLToImageRendererP33_72F73AF4782041FE58794410A86DEAEF28RenderCompleteMessageHandler userContentController:didReceiveScriptMessage:] */

void FUN_10144fcc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103bb6d8;
  func_0x000107c613fc(&UNK_1103bb6d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_1103bb700;
  func_0x000107c613fc(&UNK_1103bb700,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d941488;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 1;
  func_0x0001001ca524(1,0,0x7c,4,0,0,&UNK_10d941498,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10144fd94; end: 10144fddb; -[_TtC29SCComposerHTMLToImageRendererP33_72F73AF4782041FE58794410A86DEAEF28RenderCompleteMessageHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144fd94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d9f978) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10144fddc; end: 10144fe0f;  */

void FUN_10144fddc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10144fe10; end: 10144ff53;  */

undefined * FUN_10144fe10(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10144ff54);
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
    puVar3 = (undefined *)0x112d9f9c0;
    func_0x0001000285a8(0x112d9f9c0,&UNK_10d9414e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d9f9b8;
    func_0x0001000285a8(0x112d9f9b8,&UNK_10d9414d8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10144ff54; end: 10144ffdf;  */

void FUN_10144ff54(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7268);
  return;
}



/* Entry: 10144ffe0; end: 10145004f;  */

void FUN_10144ffe0(undefined8 param_1)

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
  plVar3[1] = 0x10145037c;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101450050; end: 101450137;  */

void FUN_101450050(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101450128);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + 0x20 + param_1 * 0x18;
  uVar4 = 0x112d9f9b8;
  func_0x0001000285a8(0x112d9f9b8,&UNK_10d9414d8);
  func_0x000107c61408(lVar8,lVar1,uVar4);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10145012c);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101450130);
      (*pcVar3)();
    }
    uVar5 = lVar8 + param_3 * 0x18;
    uVar6 = lVar7 + 0x20 + param_2 * 0x18;
    if ((uVar5 != uVar6) || (uVar6 + lVar1 * 0x18 <= uVar5)) {
      func_0x000107c610b8(uVar5,uVar6,lVar1 * 0x18);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101450134);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101450138);
  (*pcVar3)();
}



/* Entry: 101450138; end: 1014501f3;  */

void FUN_101450138(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014501e4);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014501e8);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014501ec);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_10144fe10();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_101450050(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014501f4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014501f0);
  (*pcVar2)();
}



/* Entry: 1014501f4; end: 101450257;  */

void FUN_1014501f4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101450258;
  plVar6[2] = lVar4;
  plVar6[3] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar6[4] = lVar2;
  func_0x000107c5fce8();
  plVar6[5] = lVar2;
  plVar3 = (long *)0x6a0;
  func_0x000107c615b8();
  plVar6[6] = (long)plVar3;
  *plVar3 = (long)plVar6;
  plVar3[1] = (long)FUN_10144e3ec;
  plVar3[0xbf] = lVar4;
  plVar3[0xbe] = lVar5;
  plVar3[0xbd] = lVar1;
  func_0x000107c614f0();
  plVar3[0xc0] = lVar4;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar5;
  func_0x000107c5fce8();
  plVar3[0xc1] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0xc2] = lVar5;
  plVar3[0xc3] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144e61c,lVar5,lVar4);
  return;
}



/* Entry: 101450258; end: 10145031b;  */

void FUN_101450258(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101450290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10145031c; end: 101450333;  */

long FUN_10145031c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101450334; end: 101450373;  */

undefined8 FUN_101450334(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101450374; end: 1014503a7;  */

void FUN_101450374(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1014503a8; end: 101450417;  */

void FUN_1014503a8(void)

{
  func_0x0001000285a8(0x112d9dee0,&UNK_10d93eb30);
  func_0x0001000823a8(0x1014503e8,0);
  return;
}



/* Entry: 101450418; end: 101450427;  */

undefined1  [16] FUN_101450418(void)

{
  return ZEXT816(0x1103bb910);
}



/* Entry: 101450428; end: 101450493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101450428(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100095bb0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112d9f9e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101450494; end: 10145049b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101450494(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100095bb0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f9e0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10145049c; end: 1014504e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145049c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f9e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014504e8; end: 1014506df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014504e8(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 uStack_51;
  long lStack_50;
  long lStack_48;
  
  uStack_51 = uRam0000000112d9fa10;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  lVar2 = lStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lVar2);
    lVar2 = lStack_48;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_48 != 0) {
      func_0x000107c61550();
      if ((((int)puVar3 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar4 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar4) {
            puVar3 = puVar4;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        FUN_1014507b0(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1014507b0(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
    }
  }
  uStack_51 = uRam0000000112d9fa11;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lStack_50);
    if (lStack_48 != 0) {
      puVar4 = puVar3;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar3 < 0)) ||
         (puVar4 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar5 = puVar3;
          }
          func_0x000107c60480(puVar5);
        }
        puVar4 = (undefined *)0x0;
        FUN_1014507b0(0,puVar5 + 1,1,puVar3);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1014507b0(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lStack_48;
    }
  }
  return puVar3;
}



/* Entry: 1014506e0; end: 10145073f; -[_TtC30DeepLinkTransformerSaberPlugin37DeepLinkTransformerPluginSaberService buildSaberPlugins] */

void FUN_1014506e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014504e8();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d9fa40;
  func_0x0001000285a8(0x112d9fa40,&UNK_10d941690);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101450740; end: 10145079f; -[_TtC30DeepLinkTransformerSaberPlugin37DeepLinkTransformerPluginSaberService init] */

void FUN_101450740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeepLinkTransformerSaberPlugin.DeepLinkTransformerPluginSaberService",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10145076c);
  (*pcVar1)();
}



/* Entry: 1014507a0; end: 1014507af; -[_TtC30DeepLinkTransformerSaberPlugin37DeepLinkTransformerPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014507a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9f9e0));
  return;
}



/* Entry: 1014507b0; end: 1014508d7;  */

ulong FUN_1014507b0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014508d8);
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
  FUN_101450a4c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014508d4);
      (*pcVar1)();
    }
    FUN_101450acc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1014508d8; end: 101450a4b;  */

undefined1  [16] FUN_1014508d8(void)

{
  return ZEXT816(0x1103bb9b0);
}



/* Entry: 101450a4c; end: 101450acb;  */

undefined * FUN_101450a4c(undefined *param_1,undefined *param_2)

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
    FUN_101450bf0();
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



/* Entry: 101450acc; end: 101450bef;  */

long FUN_101450acc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101450bec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101450bf0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d9fa40;
        func_0x0001000285a8(0x112d9fa40,&UNK_10d941690);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d9fa40;
      func_0x0001000285a8(0x112d9fa40,&UNK_10d941690);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101450be8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101450bf0; end: 101450c03;  */

void FUN_101450bf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa48 == (undefined *)0x0 || ((ulong)puRam0000000112d9fa48 & 1) != 0) {
    puVar1 = &UNK_10e862458;
    func_0x000107c61518(&UNK_10e862458,0x28,0,0);
    puRam0000000112d9fa48 = puVar1;
  }
  return;
}



/* Entry: 101450c04; end: 101450cc7;  */

void FUN_101450c04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d9fa50;
  func_0x0001000285a8(0x112d9fa50,&UNK_10d9416a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101450cc8; end: 101450ccb;  */

void FUN_101450cc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9416b0;
  func_0x000107c61520(&UNK_10d9416b0,&UNK_1103bbae0);
  puRam0000000112d9fa60 = puVar1;
  return;
}



/* Entry: 101450ccc; end: 101450d37;  */

void FUN_101450ccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9416b0;
  func_0x000107c61520(&UNK_10d9416b0,&UNK_1103bbae0);
  puRam0000000112d9fa60 = puVar1;
  return;
}



/* Entry: 101450d38; end: 101450d3b;  */

void FUN_101450d38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941758;
  func_0x000107c61520(&UNK_10d941758,&UNK_1103bba40);
  puRam0000000112d9fa78 = puVar1;
  return;
}



/* Entry: 101450d3c; end: 101450da7;  */

void FUN_101450d3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941758;
  func_0x000107c61520(&UNK_10d941758,&UNK_1103bba40);
  puRam0000000112d9fa78 = puVar1;
  return;
}



/* Entry: 101450da8; end: 101450e2b;  */

void FUN_101450da8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101450e2c; end: 101450e2f;  */

void FUN_101450e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9417c8;
  func_0x000107c61520(&UNK_10d9417c8,&UNK_1103bba40);
  puRam0000000112d9fa90 = puVar1;
  return;
}



/* Entry: 101450e30; end: 101450e6f;  */

void FUN_101450e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9417c8;
  func_0x000107c61520(&UNK_10d9417c8,&UNK_1103bba40);
  puRam0000000112d9fa90 = puVar1;
  return;
}



/* Entry: 101450e70; end: 101450e73;  */

void FUN_101450e70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941780;
  func_0x000107c61520(&UNK_10d941780,&UNK_1103bba40);
  puRam0000000112d9fa98 = puVar1;
  return;
}



/* Entry: 101450e74; end: 101450eb3;  */

void FUN_101450e74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fa98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941780;
  func_0x000107c61520(&UNK_10d941780,&UNK_1103bba40);
  puRam0000000112d9fa98 = puVar1;
  return;
}



/* Entry: 101450eb4; end: 101451027;  */

int FUN_101450eb4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101450f30;
        goto LAB_101450f14;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101450f14:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101450f30:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101451028; end: 101451057;  */

void FUN_101451028(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101452210();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 101451058; end: 101451067;  */

undefined1  [16] FUN_101451058(void)

{
  return ZEXT816(0x1103bbbe0);
}



/* Entry: 101451068; end: 101451123;  */

void FUN_101451068(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100028750();
  lVar2 = lVar1;
  func_0x000100028790(lVar1,0x113441fb8);
  func_0x000107c5eb6c(lVar2,0x1000000000000011,0x800000010ef81310);
  func_0x000107c5eb88(puVar3);
  func_0x000107c5eb98(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 101451124; end: 101451b93;  */

void FUN_101451124(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5c840();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001014512fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
    return;
  }
  lVar9 = param_2;
  func_0x000107c3e380();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c600f4(puVar8);
    func_0x000107c61170(lVar9);
    func_0x000107c5ed4c(auStack_80);
    if (lStack_68 != 0) {
      uVar5 = 0;
      FUN_101451b94(0);
      puVar1 = PTR___sypN_11034f1a8;
      do {
        puVar6 = &uStack_88;
        func_0x000107c6147c(puVar6,auStack_80,puVar1 + 8,uVar5,6);
        uVar2 = uStack_88;
        if (((ulong)puVar6 & 1) != 0) {
          uVar7 = uStack_88;
          func_0x000107c3e358();
          func_0x000107c61170(uVar2);
          if ((int)uVar7 == 4) {
            (**(code **)(lVar10 + 8))(puVar8,lVar4);
            func_0x000107c61170(param_2);
            lVar4 = 0;
            func_0x000107c5ede0();
            (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,1,1,lVar4);
            return;
          }
        }
        func_0x000107c5ed4c(auStack_80);
      } while (lStack_68 != 0);
    }
    (**(code **)(lVar10 + 8))(puVar8,lVar4);
    lVar10 = param_2;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (lVar10 == 0) {
      lVar9 = 0;
      lVar4 = 0;
    }
    else {
      lVar9 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
    }
    func_0x00010145134c(param_1,lVar9,lVar4);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10145134c);
  (*pcVar3)();
}



/* Entry: 101451b94; end: 101451bd7;  */

void FUN_101451b94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fb30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cfd98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d9fb30 = puVar1;
  return;
}



/* Entry: 101451bd8; end: 101451cc7; -[SCNormalizedSpamCheckURLFinder urlForMessage:] */

void FUN_101451bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101451124(puVar4,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101451cc8; end: 101451e7b;  */

/* WARNING: Possible PIC construction at 0x000101451d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101451dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101451d98) */
/* WARNING: Removing unreachable block (ram,0x000101451dd8) */
/* WARNING: Removing unreachable block (ram,0x000101451de8) */

void FUN_101451cc8(long param_1,long *param_2,long param_3,undefined *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (SCARRY8(*param_2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101451e24);
    (*pcVar1)();
  }
  *param_2 = *param_2 + 1;
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c506f8();
  if (((lVar2 == 0x20) && (lVar2 = param_1, func_0x000107c4f888(), lVar2 == param_3)) &&
     (puVar3 == param_4)) {
    lVar2 = param_1;
    func_0x000107c3abfc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5edb4(&stack0xffffffffffffffc0 + -extraout_x8);
      param_1 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101451e7c; end: 101451f7f; -[SCNormalizedSpamCheckURLFinder urlFromText:] */

void FUN_101451e7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    param_3 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  func_0x00010145134c(puVar5,param_3,puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101451f80; end: 101451ff7; -[SCNormalizedSpamCheckURLFinder scenarioForConversationWithIsGroupConversation:createdTimestampMs:maxConversationAgeHours:] */

undefined8
FUN_101451f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1014520cc(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 101451ff8; end: 10145203f; -[SCNormalizedSpamCheckURLFinder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101451ff8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d9fb38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101452040; end: 101452073;  */

void FUN_101452040(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101452074; end: 10145208f; -[SCNormalizedSpamCheckURLFinder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101452074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9fb38));
  return;
}



/* Entry: 101452090; end: 1014520af;  */

void FUN_101452090(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014520b0; end: 1014520cb;  */

void FUN_1014520b0(long param_1,long param_2)

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



/* Entry: 1014520cc; end: 10145220f;  */

undefined8 FUN_1014520cc(double param_1,ulong param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  if ((param_2 & 1) == 0) {
    if (param_4 < 1) {
      uVar3 = 2;
    }
    else if (param_3 == 0) {
      uVar3 = 3;
    }
    else {
      if (SUB168(SEXT816(param_4) * SEXT816(0x3c),8) != param_4 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10145220c);
        (*pcVar1)();
      }
      if (SUB168(SEXT816(param_4 * 0x3c) * SEXT816(0x3c),8) != param_4 * 0xe10 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101452210);
        (*pcVar1)();
      }
      func_0x000107c61174(param_3);
      func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      dVar5 = param_1;
      (**(code **)(lVar4 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      func_0x000107c4223c(param_3);
      func_0x000107c61170(param_3);
      uVar3 = 0;
      if ((double)(ulong)(param_4 * 0xe10) <= param_1 + dVar5 / -1000.0) {
        uVar3 = 2;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 101452210; end: 10145222f;  */

void FUN_101452210(void)

{
  func_0x000107c61168(&PTR_PTR_1127d74a8);
  return;
}



/* Entry: 101452230; end: 10145229f;  */

void FUN_101452230(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103bbcf8;
  if (lRam0000000112d9fb68 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d9fb68 = param_1;
  }
  return;
}



/* Entry: 1014522a0; end: 101452387;  */

void FUN_1014522a0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101452388; end: 1014523e7;  */

void FUN_101452388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000100093d28(0);
  func_0x000107c610f8();
  func_0x000104070928(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1014523e8; end: 101452403;  */

void FUN_1014523e8(void)

{
  func_0x000107c610f8(PTR_PTR_1126a6fa0);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101452404; end: 1014524ab;  */

void FUN_101452404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014524ac; end: 1014524eb;  */

void FUN_1014524ac(void)

{
  func_0x0001000285a8(0x112d9fbe8,&UNK_10d941dd0);
  func_0x0001000823a8(FUN_1014524ec,0);
  return;
}



/* Entry: 1014524ec; end: 10145250b;  */

void FUN_1014524ec(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10145250c; end: 10145254b;  */

void FUN_10145250c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d9fbf0;
  func_0x0001000285a8(0x112d9fbf0,&UNK_10d941e10);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10145254c; end: 101452553;  */

undefined8 FUN_10145254c(void)

{
  return 1;
}



/* Entry: 101452554; end: 1014525cf;  */

void FUN_101452554(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014525d0; end: 1014525d3;  */

void FUN_1014525d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941e20;
  func_0x000107c61520(&UNK_10d941e20,&UNK_1103bc4c0);
  puRam0000000112d9fc00 = puVar1;
  return;
}



/* Entry: 1014525d4; end: 10145263f;  */

void FUN_1014525d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941e20;
  func_0x000107c61520(&UNK_10d941e20,&UNK_1103bc4c0);
  puRam0000000112d9fc00 = puVar1;
  return;
}



/* Entry: 101452640; end: 101452643;  */

void FUN_101452640(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941ec8;
  func_0x000107c61520(&UNK_10d941ec8,&UNK_1103bc550);
  puRam0000000112d9fc18 = puVar1;
  return;
}



/* Entry: 101452644; end: 1014526af;  */

void FUN_101452644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941ec8;
  func_0x000107c61520(&UNK_10d941ec8,&UNK_1103bc550);
  puRam0000000112d9fc18 = puVar1;
  return;
}



/* Entry: 1014526b0; end: 101452733;  */

void FUN_1014526b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101452734; end: 101452737;  */

void FUN_101452734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941f38;
  func_0x000107c61520(&UNK_10d941f38,&UNK_1103bc550);
  puRam0000000112d9fc30 = puVar1;
  return;
}



/* Entry: 101452738; end: 101452777;  */

void FUN_101452738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941f38;
  func_0x000107c61520(&UNK_10d941f38,&UNK_1103bc550);
  puRam0000000112d9fc30 = puVar1;
  return;
}



/* Entry: 101452778; end: 10145277b;  */

void FUN_101452778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941ef0;
  func_0x000107c61520(&UNK_10d941ef0,&UNK_1103bc550);
  puRam0000000112d9fc38 = puVar1;
  return;
}



/* Entry: 10145277c; end: 1014527bb;  */

void FUN_10145277c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9fc38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941ef0;
  func_0x000107c61520(&UNK_10d941ef0,&UNK_1103bc550);
  puRam0000000112d9fc38 = puVar1;
  return;
}



/* Entry: 1014527bc; end: 1014528df;  */

undefined8 FUN_1014527bc(void)

{
  return 0;
}



/* Entry: 1014528e0; end: 10145294b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014528e0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100096514();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112d9fcd0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10145294c; end: 101452953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145294c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100096514();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9fcd0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101452954; end: 10145299f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101452954(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9fcd0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


