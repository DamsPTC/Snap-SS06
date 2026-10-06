/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102673064; end: 10267312f; -[_TtC32MapInitialViewportImplementation29MapInitialViewportCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102673064(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb29b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112eb29c0 + 0x20));
  return;
}



/* Entry: 102673130; end: 10267314f;  */

void FUN_102673130(void)

{
  func_0x000107c61168(&PTR_PTR_112856450);
  return;
}



/* Entry: 102673150; end: 1026731b3;  */

void FUN_102673150(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102674030;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102670e68,lVar1,lVar2);
  return;
}



/* Entry: 1026731b4; end: 10267322b;  */

void FUN_1026731b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102674034;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10267322c; end: 102673293;  */

void FUN_10267322c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102673264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102673294; end: 102673317;  */

void FUN_102673294(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10267403c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102673318; end: 10267339f;  */

undefined8 FUN_102673318(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1026733a0; end: 102673407;  */

void FUN_1026733a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102673408;
  plVar2[8] = param_2;
  plVar2[9] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[10] = lVar1;
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xb] = lVar3;
  func_0x000100eea164();
  plVar2[0xc] = lVar3;
  func_0x000107c5fca8();
  plVar2[0xd] = lVar1;
  plVar2[0xe] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026717b0,lVar1,lVar3);
  return;
}



/* Entry: 102673408; end: 102673443;  */

void FUN_102673408(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102673440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102673444; end: 1026734af;  */

void FUN_102673444(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102674044;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102671bc0,0,0);
  return;
}



/* Entry: 1026734b0; end: 1026734db;  */

void FUN_1026734b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026734dc; end: 102673547;  */

void FUN_1026734dc(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102674048;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267270c,0,0);
  return;
}



/* Entry: 102673548; end: 10267364b;  */

void FUN_102673548(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102673584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10267364c; end: 10267368f;  */

void FUN_10267364c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 102673690; end: 1026736a3;  */

void FUN_102673690(void)

{
  long in_x4;
  
  if (in_x4 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x4);
  return;
}



/* Entry: 1026736a4; end: 1026738e3;  */

/* WARNING: Possible PIC construction at 0x0001026736f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026737ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026737bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026737dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026738b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102673880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026737e0) */
/* WARNING: Removing unreachable block (ram,0x0001026737c0) */
/* WARNING: Removing unreachable block (ram,0x0001026738b0) */
/* WARNING: Removing unreachable block (ram,0x0001026737c4) */
/* WARNING: Removing unreachable block (ram,0x0001026737b0) */
/* WARNING: Removing unreachable block (ram,0x0001026736f8) */
/* WARNING: Removing unreachable block (ram,0x0001026737f0) */
/* WARNING: Removing unreachable block (ram,0x0001026736fc) */
/* WARNING: Removing unreachable block (ram,0x0001026738b8) */
/* WARNING: Removing unreachable block (ram,0x0001026738bc) */
/* WARNING: Removing unreachable block (ram,0x000102673738) */
/* WARNING: Removing unreachable block (ram,0x000102673884) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1026736a4(undefined8 param_1)

{
  func_0x000107c3f140();
  func_0x000107c61180();
  func_0x000107c49cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026738e4; end: 10267395f;  */

void FUN_1026738e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102673960,uVar1,uVar2);
  return;
}



/* Entry: 102673960; end: 102673b73;  */

void FUN_102673960(double param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c3f140();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49cd8();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 == 0) {
    lVar6 = *(long *)(unaff_x22 + 0xe0);
    func_0x000107c515a0();
    *(double *)(unaff_x22 + 0x150) = param_1;
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x158) = lVar6;
    if (lVar6 == 0) {
      lVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0x160) = lVar6;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar3;
    pcVar1 = FUN_102673d8c;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c3f140();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x110) = uVar3;
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x000107c61168();
    *(undefined **)(unaff_x22 + 0x118) = puVar4;
    puVar5 = puVar4;
    func_0x000107c3f160();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x120) = puVar5;
    if (puVar5 == (undefined *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102673b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x000107c515a0(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c5cafc(param_1 + 52.0 + 70.0 + 20.0 + -70.0 + -20.0,0,0x4064000000000000,0);
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x128) = puVar4;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102673b74);
      (*pcVar1)();
    }
    lVar6 = *(long *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c543a0(uVar3);
    FUN_10267017c(uVar9,uVar8,uVar7,uVar2);
    *(long *)(unaff_x22 + 0x130) = lVar6;
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x138) = lVar6;
    if (lVar6 == 0) {
      lVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0x140) = lVar6;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar3;
    pcVar1 = FUN_102673b74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,lVar6);
  return;
}



/* Entry: 102673b74; end: 102673cb3;  */

void FUN_102673b74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_102673cb4;
  lVar1 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110530ec8;
  func_0x000107c613fc(&UNK_110530ec8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  puVar3 = PTR_PTR_1126c5bb8;
  func_0x000107c610f8(PTR_PTR_1126c5bb8);
  puVar6 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x102674024;
  *(undefined **)(unaff_x22 + 0xb8) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xa0) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110530ee0;
  func_0x000107c60bc4(puVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c45a20(puVar3);
  func_0x000107c60bd0(puVar6);
  func_0x000107c3dd0c(0,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c4d14c(uVar5);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 102673cb4; end: 102673d27;  */

void FUN_102673cb4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102673cf0,*(undefined8 *)(*unaff_x22 + 0x140),*(undefined8 *)(*unaff_x22 + 0x148));
  return;
}



/* Entry: 102673d28; end: 102673d8b;  */

void FUN_102673d28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102673d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102673d8c; end: 102673eff;  */

void FUN_102673d8c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  dVar6 = *(double *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102673f00;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = PTR_PTR_1126b1e08;
  func_0x000107c61168(PTR_PTR_1126b1e08);
  func_0x000107c4c458(uVar4);
  func_0x000107c61180();
  puVar3 = &UNK_110530e78;
  func_0x000107c613fc(&UNK_110530e78,0x18,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0xb0) = FUN_102673fa4;
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xa0) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110530e90;
  func_0x000107c60bc4(puVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c3f754(uVar10,uVar9,uVar8,uVar7,dVar6 + 52.0 + 70.0 + 20.0,0x4052c00000000000,
                      0x4064000000000000,0x4052c00000000000,puVar2);
  func_0x000107c60bd0(puVar5);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102673f00; end: 102673fa3;  */

void FUN_102673f00(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102673f3c,*(undefined8 *)(*unaff_x22 + 0x160),*(undefined8 *)(*unaff_x22 + 0x168));
  return;
}



/* Entry: 102673fa4; end: 102673fc7;  */

void FUN_102673fa4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102673fc8; end: 10267401b;  */

void FUN_102673fc8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102674050;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026712ec,lVar1,lVar2);
  return;
}



/* Entry: 10267401c; end: 102674057;  */

void FUN_10267401c(long param_1,long param_2)

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



/* Entry: 102674058; end: 102674113;  */

/* WARNING: Possible PIC construction at 0x0001026740a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026740a8) */
/* WARNING: Removing unreachable block (ram,0x0001026740ac) */
/* WARNING: Removing unreachable block (ram,0x0001026740c0) */

void FUN_102674058(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4495c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102674114; end: 1026742c7;  */

void FUN_102674114(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  uint uVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_102674a30();
    func_0x0001026744e4(0,lVar3);
    func_0x000107c6142c(lVar3);
    FUN_102674a30();
    uVar4 = 1;
    func_0x0001026744e4(1,lVar3);
    func_0x000107c6142c(lVar3);
    if ((uVar4 & 1) == 0) {
      FUN_102674a30();
      func_0x0001026744e4(2,lVar3);
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c4bc30(param_1,lVar2);
    func_0x000107c615e8(lVar2);
  }
  FUN_102674a30();
  uVar1 = 0;
  func_0x0001026744e4(0,lVar2);
  func_0x000107c6142c(lVar2);
  FUN_102674a30();
  uVar6 = 1;
  uVar4 = 1;
  func_0x0001026744e4(1,lVar2);
  func_0x000107c6142c(lVar2);
  if ((uVar4 & 1) == 0) {
    FUN_102674a30();
    uVar6 = 0;
    func_0x0001026744e4(2,lVar2);
    func_0x000107c6142c(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar5 = 0;
    func_0x0001072433f8(0,uVar1 & 1,uVar6 & 1);
    func_0x000107c61180();
    func_0x000107c4bcb0(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 1026742c8; end: 10267440f;  */

uint FUN_1026742c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar4 = 0;
    lVar8 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c448d0();
    func_0x000107c615e8();
    uVar4 = 0x1000000;
    if ((int)uVar2 == 0) {
      uVar4 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x20);
  }
  if (lVar8 == 0) {
    uVar7 = 0;
    func_0x00010267446c();
    uVar6 = 0;
  }
  else {
    FUN_102674a30();
    uVar6 = 0;
    func_0x0001026744e4(0,uVar1);
    func_0x000107c6142c();
    func_0x00010267446c();
    uVar2 = uVar1;
    FUN_102674a30();
    uVar3 = 1;
    func_0x0001026744e4(1,uVar2);
    func_0x000107c6142c(uVar2);
    uVar7 = 0x10000;
    if ((uVar3 & 1) == 0) {
      FUN_102674a30();
      uVar3 = 0;
      func_0x0001026744e4(2,uVar2);
      func_0x000107c6142c(uVar2);
      uVar7 = 0x10000;
      if ((uVar3 & 1) == 0) {
        uVar7 = 0;
      }
    }
  }
  uVar5 = 0x100;
  if ((uVar1 & 1) == 0) {
    uVar5 = 0;
  }
  return uVar5 | uVar6 & 1 | uVar7 | uVar4;
}



/* Entry: 102674410; end: 10267446b;  */

void FUN_102674410(void)

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



/* Entry: 10267446c; end: 10267459f;  */

long FUN_10267446c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar3 = lVar1;
    func_0x000107c49ff8(lVar1,param_2,ppuVar2);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(ppuVar2);
  }
  return lVar3;
}



/* Entry: 1026745a0; end: 1026745ff; -[_TtC32MapInitialViewportImplementation20MapViewportCandidate init] */

void FUN_1026745a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapInitialViewportImplementation.MapViewportCandidate",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026745cc);
  (*pcVar1)();
}



/* Entry: 102674600; end: 10267460f; -[_TtC32MapInitialViewportImplementation20MapViewportCandidate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102674600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb2b28));
  return;
}



/* Entry: 102674610; end: 10267462f;  */

void FUN_102674610(void)

{
  func_0x000107c61168(&PTR_PTR_112856560);
  return;
}



/* Entry: 102674630; end: 102674793;  */

int FUN_102674630(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1026746ac;
        goto LAB_102674690;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102674690:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1026746ac:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102674794; end: 1026747bf;  */

long FUN_102674794(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026747c0; end: 1026747c7;  */

void FUN_1026747c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1026747c8; end: 10267488b;  */

undefined8 * FUN_1026747c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10267488c; end: 10267492f;  */

int FUN_10267488c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102674930; end: 10267496f;  */

void FUN_102674930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7cc8;
  func_0x000107c61520(&UNK_10dac7cc8,&UNK_110530fb0);
  puRam0000000112eb2b60 = puVar1;
  return;
}



/* Entry: 102674970; end: 102674983;  */

bool FUN_102674970(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102674984; end: 102674a2f;  */

void FUN_102674984(void)

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



/* Entry: 102674a30; end: 102674bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102674a30(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    FUN_102675fec(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102674bbc);
      (*pcVar3)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      plVar9 = (long *)(uVar7 + 0x20);
      uVar7 = *(ulong *)(puVar2 + 0x10);
      do {
        uVar1 = *(undefined1 *)(*plVar9 + _DAT_112eb2b30);
        uVar8 = uVar7 + 1;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
          FUN_102675fec(1 < *(ulong *)(puVar2 + 0x18),uVar8,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar8;
        puVar2[uVar7 + 0x20] = uVar1;
        uVar6 = uVar6 - 1;
        plVar9 = plVar9 + 1;
        uVar7 = uVar8;
      } while (uVar6 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        FUN_102674bbc(uVar8,uVar7);
        uVar1 = *(undefined1 *)(uVar4 + _DAT_112eb2b30);
        func_0x000107c615e8();
        uVar4 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
          FUN_102675fec(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
        }
        uVar8 = uVar8 + 1;
        *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
        puVar2[uVar4 + 0x20] = uVar1;
      } while (uVar6 != uVar8);
    }
  }
  puVar5 = puVar2;
  FUN_102676234(puVar2);
  func_0x000107c6142c(puVar2);
  return puVar5;
}



/* Entry: 102674bbc; end: 102674d4f;  */

ulong FUN_102674bbc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102674c84);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102674c88);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_102674610();
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    FUN_102674610();
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000014,0x800000010dac7c10);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102674d50);
  (*pcVar2)();
}



/* Entry: 102674d50; end: 102674e3b;  */

undefined8 FUN_102674d50(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_102674e20;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_102675250(param_2,uVar1,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_102674e20:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 102674e3c; end: 10267524f;  */

undefined8 FUN_102674e3c(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    func_0x000101b7ea04(0);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    FUN_102675380();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      func_0x000101b7ea04(0);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102675064);
      (*pcVar1)();
    }
    func_0x000102675064(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      func_0x000102675dc0(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_10267803c(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 102675250; end: 10267537f;  */

void FUN_102675250(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1026758dc();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x0001026754c8(uVar3 + 1);
    }
    else {
      FUN_102675b6c();
    }
    lVar5 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          func_0x000107c60620(&UNK_110530fb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102675380);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102675370);
  (*pcVar1)();
}



/* Entry: 102675380; end: 1026758db;  */

void FUN_102675380(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  
  uVar5 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar5 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_102675a1c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x0001026756d8(uVar5 + 1);
    }
    else {
      func_0x000102675dc0();
    }
    lVar7 = *unaff_x20;
    param_2 = *(ulong *)(lVar7 + 0x28);
    func_0x000107c60114();
    uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar5 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      uVar2 = 0;
      func_0x000101b7ea04(0);
      do {
        uVar3 = *(ulong *)(*(long *)(lVar7 + 0x30) + param_2 * 8);
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c60118();
        func_0x000107c61170(uVar3);
        if ((uVar4 & 1) != 0) {
          func_0x000107c60620(uVar2);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1026754c8);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar5;
      } while ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar6 = *unaff_x20;
  lVar7 = lVar6 + (param_2 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_2 & 0x3f);
  *(undefined8 *)(*(long *)(lVar6 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026754bc);
  (*pcVar1)();
}



/* Entry: 1026758dc; end: 102675a1b;  */

void FUN_1026758dc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112eb2b70,&UNK_10dac7cf0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102675a1c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1026759fc;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_1026759fc:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102675a1c; end: 102675b6b;  */

void FUN_102675a1c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112eb2b80,&UNK_10daca7b0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_102675af8;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_102675af8:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102675b6c);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102675b44;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_102675b44:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102675b6c; end: 102675feb;  */

void FUN_102675b6c(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112eb2b70;
  func_0x0001000285a8(0x112eb2b70,&UNK_10dac7cf0);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_102675d8c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102675dbc);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_102675d8c;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6));
    uVar15 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar15 = uVar15 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar15 >> 6;
    uVar7 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar15 = uVar9 + 1;
        if ((uVar15 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102675dc0);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar15 != uVar7) {
          uVar9 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar7 | bVar3);
        uVar15 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 102675fec; end: 102676023;  */

void FUN_102675fec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102676024();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102676024; end: 102676113;  */

undefined * FUN_102676024(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102676114);
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
    puVar3 = (undefined *)0x112eb2b78;
    func_0x0001000285a8(0x112eb2b78,&UNK_10dac7cf8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102676114; end: 102676233;  */

undefined * FUN_102676114(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102676234);
        (*pcVar3)();
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
  puVar5 = param_1;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = param_1;
    func_0x000102673588();
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + -0x19;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    FUN_102674610();
    func_0x000107c6140c(puVar1,puVar2,uVar7,puVar5);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 102676234; end: 1026762a3;  */

void FUN_102676234(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 uStack_39;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_1026762a4();
  lVar2 = lVar3;
  func_0x000107c5fe14(lVar3,&UNK_110530fb0,lVar1);
  if (lVar3 != 0) {
    puVar4 = (undefined1 *)(param_1 + 0x20);
    lStack_38 = lVar2;
    do {
      FUN_102674d50(&uStack_39,*puVar4);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1026762a4; end: 1026762e3;  */

void FUN_1026762a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7c88;
  func_0x000107c61520(&UNK_10dac7c88,&UNK_110530fb0);
  puRam0000000112eb2b68 = puVar1;
  return;
}



/* Entry: 1026762e4; end: 10267640f;  */

void FUN_1026762e4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  func_0x000101b7ea04(0);
  uVar4 = uVar3;
  func_0x000101158e5c();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026763fc);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        func_0x00010111c1ac(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026763f8);
        (*pcVar2)();
      }
      FUN_102674e3c(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 102676410; end: 102676467;  */

long FUN_102676410(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_102676814();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 102676468; end: 102676813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102676468(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_b8 [32];
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  char cStack_78;
  
  uVar1 = param_3 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar17 = *(ulong *)(param_3 + 0x10);
  }
  else {
    uVar17 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar17 = param_3;
    }
    func_0x000107c6029c();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    uVar11 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000102676008(0,uVar11,0);
    if (uVar1 == 0) {
      uVar6 = param_3 + 0x38;
      func_0x000107c60268(uVar6,~(-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f)));
      cStack_78 = '\0';
      uVar11 = (ulong)*(uint *)(param_3 + 0x24);
    }
    else {
      uVar6 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar6 = param_3;
      }
      func_0x000107c60284();
      cStack_78 = '\x01';
    }
    uStack_88 = uVar6;
    uStack_80 = uVar11;
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10267680c);
      (*pcVar5)();
    }
    uVar11 = 0;
    uVar6 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar6 = param_3;
    }
    do {
      cVar4 = cStack_78;
      uVar2 = uStack_80;
      uVar15 = uStack_88;
      if (uVar11 == uVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1026767fc);
        (*pcVar5)();
      }
      uVar16 = uStack_88;
      FUN_102556968(uStack_88,uStack_80,cStack_78,param_3);
      func_0x000107c4077c();
      func_0x000107c4077c(uVar16);
      puVar8 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      func_0x000107c610f8();
      func_0x000107c470f8(param_1,param_2);
      lVar9 = 0;
      FUN_102674610();
      lVar18 = lVar9;
      func_0x000107c610f8();
      *(undefined **)(lVar18 + _DAT_112eb2b28) = puVar8;
      *(undefined1 *)(lVar18 + _DAT_112eb2b30) = param_4;
      plVar10 = &lStack_98;
      lStack_98 = lVar18;
      lStack_90 = lVar9;
      func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
      func_0x000107c61170(uVar16);
      uVar16 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar16) {
        func_0x000102676008(1 < *(ulong *)(puVar3 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar16 + 1;
      *(long **)(puVar3 + uVar16 * 8 + 0x20) = plVar10;
      if (uVar1 == 0) {
        if (cVar4 == '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102676814);
          (*pcVar5)();
        }
        uVar16 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
        if (uVar16 <= uVar15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102676800);
          (*pcVar5)();
        }
        uVar13 = uVar15 >> 6;
        uVar12 = *(ulong *)(param_3 + 0x38 + uVar13 * 8);
        if ((uVar12 >> (uVar15 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102676804);
          (*pcVar5)();
        }
        if (*(int *)(param_3 + 0x24) != (int)uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102676808);
          (*pcVar5)();
        }
        uVar12 = uVar12 & -2L << (uVar15 & 0x3f);
        if (uVar12 == 0) {
          lVar18 = uVar13 << 6;
          puVar14 = (ulong *)(param_3 + 0x40 + uVar13 * 8);
          do {
            uVar13 = uVar13 + 1;
            if (uVar16 + 0x3f >> 6 <= uVar13) {
              FUN_1025572a4(uVar15,uVar2,cVar4);
              goto LAB_102676788;
            }
            uVar12 = *puVar14;
            lVar18 = lVar18 + 0x40;
            puVar14 = puVar14 + 1;
          } while (uVar12 == 0);
          FUN_1025572a4(uVar15,uVar2,cVar4);
          uVar15 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + lVar18;
        }
        else {
          uVar2 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | uVar15 & 0x7fffffffffffffc0;
        }
LAB_102676788:
        uStack_80 = (ulong)*(uint *)(param_3 + 0x24);
        cStack_78 = '\0';
        uStack_88 = uVar16;
      }
      else {
        if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102676810);
          (*pcVar5)();
        }
        func_0x000107c6028c(uVar15,uVar2);
        if (uVar15 == 0) {
          uVar15 = 1;
        }
        else {
          func_0x000107c61558();
        }
        uVar7 = 0x112ea51d8;
        func_0x0001000285a8(0x112ea51d8,&UNK_10dab84d0);
        pcVar5 = (code *)auStack_b8;
        func_0x000107c5fe1c(pcVar5,uVar7);
        func_0x000107c602b8(uVar7,uVar15,uVar6);
        (*pcVar5)(auStack_b8,0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar17);
    FUN_1025572a4(uStack_88,uStack_80,cStack_78);
  }
  return puVar3;
}



/* Entry: 102676814; end: 102676d7f;  */

code * FUN_102676814(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___sytN_11034f1b0;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4b93c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x0001000285a8(0x112ea3480,&UNK_10dac6130);
    lVar2 = lVar3;
    func_0x0001000b637c(lVar3);
    pcVar4 = FUN_102676ef4;
    func_0x0001000bfde0(FUN_102676ef4,0,puVar8 + 8);
    func_0x000107c61574(lVar2);
    if ((ulong)puVar13 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar13) {
        puVar5 = puVar13;
      }
      func_0x000107c60480(puVar5);
    }
    puVar6 = (undefined *)0x0;
    FUN_102677c64(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x1026735e4,FUN_102677f18);
    uVar14 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar6;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      FUN_102677c64(puVar13,uVar1 + 1,1,puVar6,0x1026735e4,FUN_102677f18);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
    *(code **)(uVar14 + uVar1 * 8 + 0x20) = pcVar4;
    func_0x000107c61170(lVar3);
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4b930();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x0001000285a8(0x112eb07a0,&UNK_10dac4d00);
    lVar2 = lVar3;
    func_0x0001000b637c(lVar3);
    uVar7 = 0x102676ef8;
    func_0x0001000bfde0(0x102676ef8,0,puVar8 + 8);
    func_0x000107c61574(lVar2);
    puVar5 = puVar13;
    func_0x000107c61550();
    if ((((int)puVar5 == 0) || ((long)puVar13 < 0)) ||
       (puVar5 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar6 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar6 = puVar13;
        }
        func_0x000107c60480(puVar6);
      }
      puVar5 = (undefined *)0x0;
      FUN_102677c64(0,puVar6 + 1,1,puVar13,0x1026735e4,FUN_102677f18);
    }
    uVar14 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar5;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      FUN_102677c64(puVar13,uVar1 + 1,1,puVar5,0x1026735e4,FUN_102677f18);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar14 + uVar1 * 8 + 0x20) = uVar7;
    func_0x000107c61170(lVar3);
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4e640();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x0001000285a8(0x112eafb88,&UNK_10dac3fb0);
    lVar2 = lVar3;
    func_0x0001000b637c(lVar3);
    uVar7 = 0x102676efc;
    func_0x0001000bfde0(0x102676efc,0,puVar8 + 8);
    func_0x000107c61574(lVar2);
    puVar8 = puVar13;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar13 < 0)) ||
       (puVar8 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar5 = puVar13;
        }
        func_0x000107c60480(puVar5);
      }
      puVar8 = (undefined *)0x0;
      FUN_102677c64(0,puVar5 + 1,1,puVar13,0x1026735e4,FUN_102677f18);
    }
    uVar14 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    puVar13 = puVar8;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      FUN_102677c64(puVar13,uVar1 + 1,1,puVar8,0x1026735e4,FUN_102677f18);
      uVar14 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar14 + uVar1 * 8 + 0x20) = uVar7;
    func_0x000107c61170(lVar3);
  }
  pcVar9 = "makeFrameObservable()";
  func_0x0001000c10c0("makeFrameObservable()");
  func_0x000107c61180();
  func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
  puVar8 = puVar13;
  func_0x0001000c19f0(puVar13);
  pcVar10 = pcVar9;
  func_0x000107c615f0(pcVar9);
  func_0x00010487bcec(0x3fc3333333333333);
  func_0x000107c61574(puVar8);
  pcVar11 = pcVar9;
  func_0x000107c615e8(pcVar9);
  func_0x0001006c71a4();
  func_0x000107c61574(pcVar10);
  pcVar10 = pcVar9;
  func_0x000107c615f0(pcVar9);
  func_0x000100471e0c();
  func_0x000107c61574(pcVar11);
  func_0x000107c615e8(pcVar9);
  puVar8 = &UNK_110531088;
  puVar5 = puVar8;
  func_0x000107c613fc(&UNK_110531088,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uVar7 = 0x112eb2a00;
  func_0x0001000285a8(0x112eb2a00,&UNK_10dac7ab0);
  uVar12 = 0x102677ac4;
  func_0x0001000bfde0(0x102677ac4,puVar5,uVar7);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c613fc(&UNK_110531088,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar5 = &UNK_1105310b0;
  func_0x000107c613fc(&UNK_1105310b0,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar12;
  *(undefined8 *)(puVar5 + 0x18) = 0x102677acc;
  *(undefined **)(puVar5 + 0x20) = puVar8;
  func_0x0001000285a8(0x112eb2c60,&UNK_10dac7d60);
  func_0x000107c613fc();
  pcVar4 = FUN_102677bd8;
  func_0x0001000b64ac(FUN_102677bd8,puVar5);
  func_0x000107c6142c(puVar13);
  func_0x000107c615e8(pcVar9);
  return pcVar4;
}



/* Entry: 102676d80; end: 102676ef3;  */

void FUN_102676d80(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  lVar7 = *(long *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  lVar8 = *(long *)(unaff_x20 + 0x68);
  lVar3 = *(long *)(unaff_x20 + 0x70);
  lVar9 = *(long *)(unaff_x20 + 0x78);
  lVar14 = *(long *)(unaff_x20 + 0x80);
  lVar16 = lVar7;
  lVar17 = lVar8;
  lVar18 = lVar3;
  lVar19 = lVar9;
  lVar20 = lVar14;
  lVar21 = lVar2;
  lVar22 = lVar1;
  if (lVar1 == 1) {
    lVar13 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lVar22 = 0;
      lVar21 = 0;
      lVar17 = 0;
      lVar18 = 0;
      lVar19 = 0;
      lVar20 = 0;
      lVar16 = 0;
    }
    else {
      lVar22 = lVar13;
      func_0x000107c4c458();
      func_0x000107c61180();
      lVar16 = param_4;
      lVar21 = param_5;
      func_0x000107c3ec60(lVar13);
      lVar17 = *(long *)PTR__UIEdgeInsetsZero_110345bb0;
      lVar18 = *(long *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      lVar19 = *(long *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      lVar20 = *(long *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
      func_0x000107c61170(lVar13);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
    *(long *)(unaff_x20 + 0x50) = lVar22;
    *(long *)(unaff_x20 + 0x58) = lVar16;
    *(long *)(unaff_x20 + 0x60) = lVar21;
    *(long *)(unaff_x20 + 0x68) = lVar17;
    *(long *)(unaff_x20 + 0x70) = lVar18;
    *(long *)(unaff_x20 + 0x78) = lVar19;
    *(long *)(unaff_x20 + 0x80) = lVar20;
    func_0x000107c615f0(lVar22);
    FUN_102677ab4(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar15);
  }
  FUN_102678a74(lVar1,lVar7,lVar2,lVar8,lVar3,lVar9,lVar14);
  *param_1 = lVar22;
  param_1[1] = lVar16;
  param_1[2] = lVar21;
  param_1[3] = lVar17;
  param_1[4] = lVar18;
  param_1[5] = lVar19;
  param_1[6] = lVar20;
  return;
}



/* Entry: 102676ef4; end: 102676eff;  */

void FUN_102676ef4(void)

{
  return;
}



/* Entry: 102676f00; end: 102676fb7;  */

void FUN_102676f00(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000107c5fcec(0);
    FUN_102678a84(&uStack_58,FUN_102678508,param_3,
                  "MapInitialViewportImplementation/MapInitialViewportProvider.swift",0x41,2,0x57);
    func_0x000107c61574(param_3);
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[4] = uStack_38;
  }
  return;
}



/* Entry: 102676fb8; end: 1026772bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102676fb8(undefined8 *param_1)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  double in_d3;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar4);
    if ((0.0 < in_d3) && (FUN_102676d80(&lStack_110), lStack_110 != 0)) {
      lStack_b0 = lStack_110;
      uStack_a0 = uStack_100;
      uStack_a8 = uStack_108;
      uStack_90 = uStack_f0;
      uStack_98 = uStack_f8;
      uStack_80 = uStack_e0;
      uStack_88 = uStack_e8;
      uVar5 = *(ulong *)(unaff_x20 + 0x18);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar5 == 0) {
LAB_1026770e8:
        uVar7 = 0;
        FUN_1026774bc();
        if (uVar7 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar5 = uVar7;
          }
          func_0x000107c60480();
        }
        if (uVar5 == 0) {
          func_0x000107c6142c(uVar7);
          FUN_102678550(&lStack_110);
          goto LAB_102677284;
        }
        uStack_140 = 0;
        uStack_128 = 0;
        plVar10 = (long *)0x0;
        bVar12 = true;
      }
      else {
        uVar7 = uVar5;
        func_0x000107c4b88c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar5);
        if (uVar7 == 0) goto LAB_1026770e8;
        lVar6 = 0;
        FUN_102674610();
        lVar4 = lVar6;
        func_0x000107c610f8();
        *(ulong *)(lVar4 + _DAT_112eb2b28) = uVar7;
        *(undefined1 *)(lVar4 + _DAT_112eb2b30) = 0;
        puVar2 = PTR_s_init_1125d9248;
        uStack_128 = uVar7;
        lStack_120 = lVar4;
        lStack_118 = lVar6;
        func_0x000107c61174();
        plVar10 = &lStack_120;
        func_0x000107c61154(plVar10,puVar2);
        FUN_1026774bc();
        bVar12 = false;
        uStack_140 = 1;
      }
      uVar5 = uVar7 & 0xffffffffffffff8;
      if (uVar7 >> 0x3e == 0) {
        uVar11 = *(ulong *)(uVar5 + 0x10);
      }
      else {
        uVar11 = uVar5;
        if (0x7fffffffffffffff < uVar7) {
          uVar11 = uVar7;
        }
        func_0x000107c60480();
      }
      uVar13 = 0;
      do {
        if (uVar11 == uVar13) goto LAB_10267719c;
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10267724c);
            (*pcVar3)();
          }
          uVar8 = *(ulong *)(uVar7 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar13;
          FUN_102674bbc(uVar13,uVar7);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102677194);
          (*pcVar3)();
        }
        cVar1 = *(char *)(uVar8 + _DAT_112eb2b30);
        func_0x000107c61170();
        uVar13 = uVar13 + 1;
      } while (cVar1 != '\x01');
      if (bVar12) {
LAB_10267719c:
        uVar5 = 0;
        bVar12 = true;
      }
      else {
        uVar5 = *(ulong *)(unaff_x20 + 0x30);
        func_0x00010902225c(uVar5);
        bVar12 = (long)uVar5 < 1;
        uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
      }
      FUN_102677848(uStack_140);
      if (plVar10 == (long *)0x0) {
        func_0x00010266f1e4(&uStack_d8,uVar7);
        uStack_148 = uStack_d0;
        uStack_150 = uStack_d8;
        uStack_138 = uStack_c0;
        uStack_140 = uStack_c8;
        func_0x000107c6142c(uVar7);
        FUN_102678550(&lStack_110);
        uVar9 = uStack_b8;
      }
      else {
        FUN_10266eb34(plVar10,uVar7,uVar5,bVar12);
        uStack_148 = uStack_d0;
        uStack_150 = uStack_d8;
        uStack_138 = uStack_c0;
        uStack_140 = uStack_c8;
        func_0x000107c6142c(uVar7);
        FUN_102678550(&lStack_110);
        func_0x000107c61170(plVar10);
        uVar9 = uStack_b8;
      }
      func_0x000107c61170(uStack_128);
      goto LAB_102677290;
    }
  }
LAB_102677284:
  uVar9 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
LAB_102677290:
  param_1[1] = uStack_148;
  *param_1 = uStack_150;
  param_1[3] = uStack_138;
  param_1[2] = uStack_140;
  param_1[4] = uVar9;
  return;
}



/* Entry: 1026772bc; end: 10267735f;  */

uint FUN_1026772bc(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (lVar2 != 0) {
      func_0x000107c5fcec(0);
      uVar1 = 0;
      FUN_102678c54(FUN_1026784d8,param_2,
                    "MapInitialViewportImplementation/MapInitialViewportProvider.swift",0x41,2,0x5d)
      ;
    }
    func_0x000107c61574(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 102677360; end: 1026774bb;  */

uint FUN_102677360(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined **ppuVar3;
  uint uVar5;
  long lVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar7 = 1;
  }
  else {
    lVar6 = lVar2;
    func_0x000107c448d0();
    func_0x000107c615e8(lVar2);
    uVar7 = (uint)lVar6 ^ 1;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_1026773ec:
    uVar8 = 0;
  }
  else {
    lVar6 = lVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar6 == 0) goto LAB_1026773ec;
    func_0x000107c61170(lVar6);
    uVar8 = 1;
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar4 = lVar2;
    func_0x000107c49ff8(lVar2,param_2,ppuVar3);
    uVar1 = (uint)lVar4;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(ppuVar3);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    if (((uVar7 | uVar8 | uVar1) & 1) != 0) goto LAB_102677494;
    uVar5 = 0;
  }
  else {
    lVar2 = lVar6;
    func_0x000107c407bc();
    func_0x000107c615e8(lVar6);
    uVar5 = (uint)((int)lVar2 == 0);
    if (((uVar7 | uVar8 | uVar1) & 1) != 0) {
LAB_102677494:
      return uVar8 & (uVar7 ^ 1);
    }
  }
  return uVar5 ^ 1;
}



/* Entry: 1026774bc; end: 102677847;  */

undefined * FUN_1026774bc(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  undefined *puStack_80;
  undefined *apuStack_78 [2];
  undefined *puStack_68;
  
  puVar4 = *(undefined **)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  if (param_1 == 0) {
    puVar10 = puVar4;
    func_0x000107c3e870();
    func_0x000107c61180();
    if (puVar10 != (undefined *)0x0) {
      uVar8 = 0;
      func_0x000101b7ea04(0);
      puVar9 = puVar10;
      func_0x000107c5fc54(puVar10,uVar8);
      func_0x000107c61170(puVar10);
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar10 = puVar9;
        }
        func_0x000107c60480();
      }
      if (2 < (long)puVar10) {
        puVar10 = puVar9;
        FUN_1026762e4(puVar9);
        func_0x000107c6142c(puVar9);
        puVar9 = puVar10;
        FUN_102676468(puVar10,2);
        func_0x000107c6142c(puVar10);
        goto LAB_1026777f4;
      }
      func_0x000107c6142c(puVar9);
    }
  }
  puVar9 = puVar4;
  func_0x000107c3db8c();
  func_0x000107c61180();
  uVar5 = 0;
  func_0x000101b7ea04(0);
  uVar8 = uVar5;
  func_0x000101158e5c();
  puVar10 = puVar9;
  func_0x000107c5fe10(puVar9,uVar5,uVar8);
  func_0x000107c61170(puVar9);
  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (((ulong)puVar10 & 0xc000000000000001) == 0) {
    func_0x000107c6157c();
    FUN_102678814(puVar10);
    func_0x000107c61574();
  }
  else {
    puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
    puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar6 = puVar10;
    }
    func_0x000107c6157c();
    func_0x000107c60288();
    puVar7 = puVar6;
    func_0x000107c602ac();
    puVar2 = PTR___syXlN_11034f1a0;
    puVar10 = puVar9;
    puVar9 = puStack_80;
    while (puStack_80 = puVar7, puStack_80 != (undefined *)0x0) {
      ppuVar11 = &puStack_80;
      func_0x000107c6147c(apuStack_78,&puStack_80,puVar2 + 8,uVar5,7);
      puVar9 = apuStack_78[0];
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar7 = puVar9;
      func_0x000107c5faec();
      func_0x000107c61170(puVar9);
      if (puVar7 == *(undefined **)(unaff_x20 + 0x38) &&
          ppuVar11 == (undefined **)*(undefined1 **)(unaff_x20 + 0x40)) {
        func_0x000107c6142c(ppuVar11);
LAB_102677598:
        puVar7 = apuStack_78[0];
        func_0x000107c61170();
      }
      else {
        func_0x000107c605b8(puVar7,ppuVar11,*(undefined **)(unaff_x20 + 0x38),
                            *(undefined1 **)(unaff_x20 + 0x40),0);
        func_0x000107c6142c(ppuVar11);
        puVar9 = apuStack_78[0];
        if (((ulong)puVar7 & 1) != 0) goto LAB_102677598;
        if (*(ulong *)(puVar10 + 0x18) <= *(ulong *)(puVar10 + 0x10)) {
          func_0x000102675dc0(*(ulong *)(puVar10 + 0x10) + 1);
          puVar10 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar10 + 0x28);
        func_0x000107c60114();
        uVar15 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
        uVar14 = (ulong)puVar7 & (uVar15 ^ 0xffffffffffffffff);
        uVar12 = uVar14 >> 6;
        uVar13 = -1L << (uVar14 & 0x3f) &
                 (*(ulong *)(puVar10 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar13 == 0) {
          bVar1 = false;
          uVar13 = 0x3f - uVar15 >> 6;
          do {
            uVar14 = uVar12 + 1;
            if ((uVar14 == uVar13) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102677824);
              (*pcVar3)();
            }
            uVar12 = 0;
            if (uVar14 != uVar13) {
              uVar12 = uVar14;
            }
            bVar1 = (bool)(uVar14 == uVar13 | bVar1);
          } while (*(ulong *)(puVar10 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
          uVar13 = ~*(ulong *)(puVar10 + uVar12 * 8 + 0x38);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar12 << 6;
        }
        else {
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 & 0x7fffffffffffffc0;
        }
        uVar12 = uVar13 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar10 + uVar12 + 0x38) =
             1L << (uVar13 & 0x3f) | *(ulong *)(puVar10 + uVar12 + 0x38);
        *(undefined **)(*(long *)(puVar10 + 0x30) + uVar13 * 8) = puVar9;
        *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      }
      func_0x000107c602ac();
      puVar9 = puStack_80;
    }
    puStack_80 = puVar9;
    func_0x000107c61574();
    func_0x000107c61574(puVar6);
  }
  puVar9 = puVar10;
  FUN_102676468(puVar10,1);
  func_0x000107c61574(puVar10);
LAB_1026777f4:
  func_0x000107c615e8(puVar4);
  return puVar9;
}



/* Entry: 102677848; end: 102677973;  */

undefined1  [16] FUN_102677848(double param_1,ulong param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if ((param_2 & 1) == 0) {
    dVar7 = 12.0;
    param_1 = 4.0;
  }
  else {
    pcVar4 = *(char **)(unaff_x20 + 0x30);
    func_0x00010902219c(pcVar4);
    pcVar2 = pcVar4;
    dVar7 = param_1;
    func_0x0001090221fc();
    dVar5 = dVar7;
    func_0x0001005e3364();
    if (*pcVar2 == '\x01') {
      uVar3 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010f0b4900);
      pcVar2 = pcVar4;
      func_0x000107c436e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      dVar6 = dVar5;
      if (pcVar2 != (char *)0x0) {
        func_0x000107c4223c(pcVar2);
        dVar6 = dVar5;
        func_0x000107c61170(pcVar2);
        param_1 = dVar5;
      }
      uVar3 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010f0b4930);
      func_0x000107c436e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (pcVar4 != (char *)0x0) {
        func_0x000107c4223c(pcVar4);
        func_0x000107c61170(pcVar4);
        dVar7 = dVar6;
      }
    }
    if (dVar7 < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102677954);
      (*pcVar1)();
    }
  }
  auVar8._8_8_ = dVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 102677974; end: 102677a13;  */

uint FUN_102677974(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *param_1;
  lVar3 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  if (lVar2 == *(long *)(param_2 + 0x38) && lVar3 == *(long *)(param_2 + 0x40)) {
    func_0x000107c6142c(lVar3);
    uVar4 = 0;
  }
  else {
    func_0x000107c605b8(lVar2,lVar3,*(long *)(param_2 + 0x38),*(long *)(param_2 + 0x40),0);
    func_0x000107c6142c(lVar3);
    uVar4 = (uint)lVar2 ^ 1;
  }
  return uVar4 & 1;
}



/* Entry: 102677a14; end: 102677ab3;  */

void FUN_102677a14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_102677ab4(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102677ab4; end: 102677ad3;  */

void FUN_102677ab4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102677ad4; end: 102677bd7;  */

undefined1  [16]
FUN_102677ad4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  puVar1 = &UNK_1105310d8;
  func_0x000107c613fc(&UNK_1105310d8,0x11,7);
  puVar1[0x10] = 0;
  puVar2 = &UNK_110531100;
  func_0x000107c613fc(&UNK_110531100,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  puVar3 = &UNK_110531128;
  func_0x000107c613fc(&UNK_110531128,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcVar6 = *(code **)(*param_2 + 0x70);
  func_0x000107c61580(puVar1,2);
  func_0x000107c61580(param_1,2);
  func_0x000107c6157c(param_4);
  pcVar4 = FUN_1026784c4;
  puVar5 = puVar2;
  (*pcVar6)(FUN_1026784c4,puVar2,0x1026784d0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  auVar7._8_8_ = puVar5;
  auVar7._0_8_ = pcVar4;
  return auVar7;
}



/* Entry: 102677bd8; end: 102677be3;  */

undefined1  [16] FUN_102677bd8(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  undefined1 auVar10 [16];
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_1105310d8;
  func_0x000107c613fc(&UNK_1105310d8,0x11,7);
  puVar3[0x10] = 0;
  puVar4 = &UNK_110531100;
  func_0x000107c613fc(&UNK_110531100,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  puVar5 = &UNK_110531128;
  func_0x000107c613fc(&UNK_110531128,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcVar9 = *(code **)(*plVar1 + 0x70);
  func_0x000107c61580(puVar3,2);
  func_0x000107c61580(param_1,2);
  func_0x000107c6157c(uVar8);
  pcVar6 = FUN_1026784c4;
  puVar7 = puVar4;
  (*pcVar9)(FUN_1026784c4,puVar4,0x1026784d0,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  auVar10._8_8_ = puVar7;
  auVar10._0_8_ = pcVar6;
  return auVar10;
}



/* Entry: 102677be4; end: 102677c4f;  */

void FUN_102677be4(long param_1)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_60,1,0);
    *(undefined1 *)(param_1 + 0x10) = 1;
    func_0x000100c7f554();
  }
  return;
}



/* Entry: 102677c50; end: 102677c63;  */

ulong FUN_102677c50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102677da0);
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
  FUN_102677da0(uVar2,uVar4,0x102673588);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102677d9c);
      (*pcVar1)();
    }
    FUN_102677e20(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102677c64; end: 102677d9f;  */

ulong FUN_102677c64(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102677da0);
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
  FUN_102677da0(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102677d9c);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102677da0; end: 102677e1f;  */

undefined * FUN_102677da0(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 102677e20; end: 102677f17;  */

long FUN_102677e20(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102677f14);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102677f18);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102674610(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102674610(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102677f10);
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



/* Entry: 102677f18; end: 10267803b;  */

long FUN_102677f18(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102678038);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10267803c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112dc1428;
        func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112dc1428;
      func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102678034);
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



/* Entry: 10267803c; end: 1026780bb;  */

void FUN_10267803c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 1026780bc; end: 102678227;  */

void FUN_1026780bc(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long lStack_78;
  
  lStack_78 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x38);
  lVar6 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar8 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102678228);
          (*pcVar1)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
          func_0x000107c6157c(param_3);
          FUN_102678228(param_1,param_2,lStack_78,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x38))[lVar8];
        lVar6 = lVar6 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar8 = lVar6;
    }
    uVar5 = LZCOUNT(uVar4);
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x30) + (uVar5 | lVar8 << 6) * 8);
    func_0x000107c61174();
    uVar4 = 0;
    (*param_4)();
    func_0x000107c61170(uVar3);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar8;
    if ((uVar4 & 1) != 0) {
      uVar4 = (uVar5 & 0xffffffffffffffc0 | lVar8 << 6) >> 3;
      *(ulong *)(param_1 + uVar4) = *(ulong *)(param_1 + uVar4) | 1L << (uVar5 & 0x3f);
      bVar2 = SCARRY8(lStack_78,1);
      lStack_78 = lStack_78 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026781e4);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 102678228; end: 102678417;  */

undefined * FUN_102678228(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    func_0x0001000285a8(0x112eb2b80,&UNK_10daca7b0);
    puVar3 = param_3;
    func_0x000107c602e8();
    if (param_2 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1;
    }
    lVar6 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar6 + 1;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102678410);
            (*pcVar1)();
          }
          if (param_2 <= lVar10) goto LAB_1026782a0;
          uVar11 = param_1[lVar10];
          lVar6 = lVar6 + 1;
        } while (uVar11 == 0);
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
      }
      else {
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar6;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar5) | lVar10 << 6) * 8);
      uVar9 = *(ulong *)(puVar3 + 0x28);
      func_0x000107c61174();
      func_0x000107c60114();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
      uVar7 = uVar9 >> 6;
      uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar5 == 0) {
        bVar2 = false;
        uVar5 = 0x3f - uVar8 >> 6;
        do {
          uVar9 = uVar7 + 1;
          if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102678414);
            (*pcVar1)();
          }
          uVar7 = 0;
          if (uVar9 != uVar5) {
            uVar7 = uVar9;
          }
          bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        } while (*(ulong *)(puVar3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
        uVar5 = ~*(ulong *)(puVar3 + uVar7 * 8 + 0x38);
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
      }
      else {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar3 + uVar7 + 0x38);
      *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102678418);
        (*pcVar1)();
      }
      lVar6 = lVar10;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1026782a0:
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102678418; end: 1026784c3;  */

void FUN_102678418(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = param_1[4];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    func_0x000100087f6c(&uStack_70);
    uVar1 = 0;
    (*param_4)();
    if ((uVar1 & 1) != 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_a0,1,0);
      *(undefined1 *)(param_2 + 0x10) = 1;
      func_0x000100c7f554();
    }
  }
  return;
}



/* Entry: 1026784c4; end: 1026784d7;  */

void FUN_1026784c4(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  uStack_50 = param_1[4];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  func_0x000107c61428(lVar1 + 0x10,auStack_88,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000100087f6c(&uStack_70);
    uVar3 = 0;
    (*pcVar2)();
    if ((uVar3 & 1) != 0) {
      func_0x000107c61428(lVar1 + 0x10,auStack_a0,1,0);
      *(undefined1 *)(lVar1 + 0x10) = 1;
      func_0x000100c7f554();
    }
  }
  return;
}



/* Entry: 1026784d8; end: 102678507;  */

void FUN_1026784d8(byte *param_1,byte param_2)

{
  FUN_102677360();
  *param_1 = param_2 & 1;
  return;
}



/* Entry: 102678508; end: 10267854f;  */

void FUN_102678508(undefined8 *param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102676fb8(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  param_1[4] = uStack_28;
  return;
}



/* Entry: 102678550; end: 102678597;  */

undefined8 FUN_102678550(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eb2c68;
  func_0x0001000285a8(0x112eb2c68,&UNK_10dac7d70);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102678598; end: 102678663;  */

void FUN_102678598(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102678664);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_1026780bc(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102678660);
  (*pcVar1)();
}



/* Entry: 102678664; end: 102678813;  */

void FUN_102678664(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lStack_70;
  
  lStack_70 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_3 + 0x38);
  lVar5 = param_2;
  lVar9 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar12 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102678814);
          (*pcVar1)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          func_0x000107c6157c(param_3);
          FUN_102678228(param_1,param_2,lStack_70,param_3);
          return;
        }
        uVar11 = ((ulong *)(param_3 + 0x38))[lVar12];
        lVar9 = lVar9 + 1;
      } while (uVar11 == 0);
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar12 = lVar9;
    }
    uVar8 = LZCOUNT(uVar7);
    uVar3 = *(ulong *)(*(long *)(param_3 + 0x30) + (uVar8 | lVar12 << 6) * 8);
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c5faec();
    lVar6 = lVar5;
    func_0x000107c61170(uVar7);
    lVar9 = lVar12;
    if (uVar4 == *(ulong *)(param_4 + 0x38) && lVar5 == *(long *)(param_4 + 0x40)) {
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(lVar5);
      lVar5 = lVar6;
    }
    else {
      lVar6 = lVar5;
      func_0x000107c605b8();
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(lVar5);
      lVar5 = lVar6;
      if ((uVar4 & 1) == 0) {
        uVar7 = (uVar8 & 0xffffffffffffffc0 | lVar12 << 6) >> 3;
        *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) | 1L << (uVar8 & 0x3f);
        bVar2 = SCARRY8(lStack_70,1);
        lStack_70 = lStack_70 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1026787d0);
          (*pcVar1)();
        }
      }
    }
  } while( true );
}



/* Entry: 102678814; end: 102678a57;  */

ulong FUN_102678814(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x21;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  ulong auStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar6 = uVar5 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar4 = uVar6, func_0x000107c61594(uVar6,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar6,0xffffffffffffffff);
      FUN_102678598(auStack_68);
      uVar4 = auStack_68[0];
      if (unaff_x21 != 0) {
        uVar4 = uStack_70;
      }
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000102678a04;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = (long)auStack_68 + (-8 - (uVar6 + 0xf & 0x1ffffffffffffff0));
  func_0x000107c60ee4(uVar4,uVar6);
  func_0x000107c6157c(param_2);
  FUN_102678664(uVar4,uVar5,param_1,param_2);
  if (unaff_x21 != 0) {
    uVar4 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
joined_r0x000102678a04:
  if (unaff_x21 == 0) {
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_1);
    uVar2 = (uint)param_1;
  }
  else {
    iVar1 = 2;
    uStack_70 = uVar4;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&uStack_70,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    uVar2 = (uint)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    FUN_102677974();
    return (ulong)(uVar2 & 1);
  }
  return uVar4;
}



/* Entry: 102678a58; end: 102678a73;  */

uint FUN_102678a58(uint param_1)

{
  FUN_102677974();
  return param_1 & 1;
}



/* Entry: 102678a74; end: 102678a83;  */

void FUN_102678a74(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 102678a84; end: 102678c53;  */

void FUN_102678a84(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_2;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_88,uStack_80,param_4,param_5,param_6,param_7,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102678c54);
    (*pcVar1)();
  }
  puVar2 = &UNK_1105311c0;
  func_0x000107c613fc(&UNK_1105311c0,0x20,7);
  *(code **)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  (*param_2)(&uStack_88);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102678bb8);
      (*pcVar1)();
    }
    param_1[1] = uStack_80;
    *param_1 = uStack_88;
    param_1[3] = uStack_70;
    param_1[2] = uStack_78;
    param_1[4] = uStack_68;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102678b44);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 102678c54; end: 102678e0b;  */

uint FUN_102678c54(code *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  ulong uStack_70;
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102678e0c);
    (*pcVar1)();
  }
  puVar2 = &UNK_110531198;
  func_0x000107c613fc(&UNK_110531198,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    param_3 = uStack_70 & 0xff;
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102678d70);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102678d10);
      (*pcVar1)();
    }
  }
  return (uint)param_3 & 1;
}



/* Entry: 102678e0c; end: 102678fc3;  */

undefined8
FUN_102678e0c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102678fc4);
    (*pcVar1)();
  }
  puVar2 = &UNK_110531170;
  func_0x000107c613fc(&UNK_110531170,0x20,7);
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102678f28);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102678ec8);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 102678fc4; end: 10267900f;  */

void FUN_102678fc4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb2c70,&UNK_10dac7d80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102679078,param_1);
  return;
}



/* Entry: 102679010; end: 102679077;  */

void FUN_102679010(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x000107c5fcec(0);
  pcVar1 = FUN_1026790ec;
  FUN_102678e0c(FUN_1026790ec,param_2,
                "MapInitialViewportImplementation/MapInitialViewportServicesSaberServiceProvider.swift"
                ,0x55,2,0xd);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102679078; end: 10267908f;  */

void FUN_102679078(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x000107c5fcec(0);
  pcVar1 = FUN_1026790ec;
  FUN_102678e0c();
  *param_1 = pcVar1;
  return;
}



/* Entry: 102679090; end: 1026790eb;  */

void FUN_102679090(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001048580f8(&uStack_28);
  uVar1 = 0;
  FUN_1026e5c44(0);
  func_0x000107c610f8();
  func_0x0001026e5b88(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1026790ec; end: 102679103;  */

void FUN_1026790ec(void)

{
  FUN_102679090();
  return;
}


