/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ecf9f4; end: 102ecfaab;  */

void FUN_102ecf9f4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x120);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ecfa64;
  plVar5 = *(long **)(unaff_x22 + 0xe0);
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar5;
  lVar6 = *(long *)(*plVar5 + 0x50);
  plVar1[7] = lVar6;
  lVar2 = 0;
  __sSqMa(0,lVar6);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar6 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ecfaac; end: 102ecfb8f;  */

void FUN_102ecfaac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar5 = *(long *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  pcVar7 = *(code **)(lVar3 + 0x18);
  func_0x000107c614b0(uVar6);
  (*pcVar7)(uVar4,uVar1,0,1,uVar6,uVar2,lVar3);
  func_0x000107c614ac(uVar6);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c61654();
  if (lVar5 != 0) {
    func_0x0001000d224c(unaff_x22 + 0xa8);
    lVar5 = *(long *)(unaff_x22 + 0xa8);
    if (lVar5 != 0) {
      func_0x000107c427f4(lVar5);
      func_0x000107c615e8(lVar5);
    }
  }
  (**(code **)(unaff_x22 + 0xb8))();
                    /* WARNING: Could not recover jumptable at 0x000102ecfb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecfb90; end: 102ecfbaf;  */

void FUN_102ecfb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecfbb0,0,0);
  return;
}



/* Entry: 102ecfbb0; end: 102ecfc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecfbb0(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x68) + _DAT_112f27750);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ecfc10;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ecfc58; end: 102ecfcef;  */

void FUN_102ecfc58(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ecfcf0;
                    /* WARNING: Could not recover jumptable at 0x000102ecfcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x70),
             "save(with:replaceId:snapEditorLoggingParams:saveLocation:savingSessionId:logDirectSnapAction:progressHandler:)"
             ,0x6e,0x2000000000000002,0x2a2,uVar2,lVar3);
  return;
}



/* Entry: 102ecfcf0; end: 102ecfd4f;  */

void FUN_102ecfcf0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ecfd50;
  }
  else {
    pcVar1 = FUN_102ecff68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecfd50; end: 102ecfecf;  */

void FUN_102ecfd50(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000101a698ac(unaff_x22 + 0x10,unaff_x22 + 0x38);
  puVar1 = &UNK_1105e5888;
  func_0x000107c613fc(&UNK_1105e5888,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000101a68ae4(unaff_x22 + 0x38,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x40) = uVar6;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  func_0x0001001ca524(0,0,0x54,0,0,0,&UNK_10db63310,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar1);
  lVar5 = *(long *)(lVar5 + 8);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x60);
    uVar4 = **(undefined8 **)(unaff_x22 + 0x80);
    func_0x000107c61434(lVar5);
    func_0x000107c61170(uVar3);
    *puVar7 = uVar4;
    puVar7[1] = lVar5;
    func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102ecfe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ecfed0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x88),&UNK_1105e4ff0,
             uVar3,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102ecfed0; end: 102ecff67;  */

void FUN_102ecfed0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x102ecff2c;
  }
  else {
    pcVar1 = FUN_102ecffc0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecff68; end: 102ecffbf;  */

void FUN_102ecff68(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar1;
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102ecffbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecffc0; end: 102ecfffb;  */

void FUN_102ecffc0(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102ecfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecfffc; end: 102ed0083;  */

void FUN_102ecfffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ed0084;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)();
  return;
}



/* Entry: 102ed0084; end: 102ed00e3;  */

void FUN_102ed0084(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ed00e4;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x102ed335c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ed00e4; end: 102ed0157;  */

void FUN_102ed00e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar2);
  (**(code **)(lVar4 + 0x40))(uVar1,uVar3,0,0,0x54,uVar2,lVar4);
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x000102ed0154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed0158; end: 102ed01cf;  */

/* WARNING: Possible PIC construction at 0x000102ed01a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed01a8) */

void FUN_102ed0158(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)(param_1,&UNK_1105e4ff0,uVar1,PTR___ss5ErrorWS_11034ee10)
  ;
  return;
}



/* Entry: 102ed01d0; end: 102ed01e7;  */

void FUN_102ed01d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed01e8,0,0);
  return;
}



/* Entry: 102ed01e8; end: 102ed028b;  */

void FUN_102ed01e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x38) = lVar3;
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec();
    uVar2 = uVar1;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed028c,uVar1,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ed0288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed028c; end: 102ed036f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed028c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_snapDocSaveServiceDidSaveMemorie_11266db40);
  if ((uVar5 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112ff55c0);
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112ff55c8);
    uVar7 = *puVar1;
    uVar4 = puVar1[1];
    func_0x000107c615f0(uVar2);
    func_0x000107c5fadc(uVar6,uVar3);
    func_0x000107c5fadc(uVar7,uVar4);
    func_0x000107c5b1e4(uVar2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed0370,0,0);
  return;
}



/* Entry: 102ed0370; end: 102ed039f;  */

void FUN_102ed0370(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102ed039c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed03a0; end: 102ed0427;  */

void FUN_102ed03a0(undefined1 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      *param_1 = 1;
      return;
    }
    FUN_102ed28d4(lVar1,param_2[1]);
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  *param_1 = 0;
  func_0x000107c6157c(param_4);
  return;
}



/* Entry: 102ed0428; end: 102ed04b3;  */

void FUN_102ed0428(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar1 < 2) {
    FUN_102ed28d4(uVar1,uVar2);
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_1105e5590;
    func_0x000107c613fc(&UNK_1105e5590,0x20,7);
    *(ulong *)(puVar3 + 0x10) = uVar1;
    *(ulong *)(puVar3 + 0x18) = uVar2;
    pcVar4 = FUN_102ed28e8;
  }
  *param_1 = pcVar4;
  param_1[1] = puVar3;
  param_2[1] = 0;
  *param_2 = 1;
  return;
}



/* Entry: 102ed04b4; end: 102ed04f7;  */

void FUN_102ed04b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ed04f8; end: 102ed0767;  */

void FUN_102ed04f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ed1d08();
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c6142c(param_1);
    uVar7 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x00010134166c(0,lVar8,0);
    lVar9 = 0x20;
    uVar7 = *(ulong *)(puVar1 + 0x10);
    do {
      dVar10 = 1.0;
      if (1.0 < *(double *)(param_1 + lVar9)) {
        dVar10 = *(double *)(param_1 + lVar9);
      }
      uVar6 = uVar7 + 1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar7) {
        func_0x00010134166c(1 < *(ulong *)(puVar1 + 0x18),uVar6,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar6;
      *(double *)(puVar1 + uVar7 * 8 + 0x20) = dVar10;
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + -1;
      uVar7 = uVar6;
    } while (lVar8 != 0);
    func_0x000107c6142c(param_1);
    uVar7 = *(ulong *)(puVar1 + 0x10);
    puVar3 = puVar1;
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  if (uVar7 == 0) goto LAB_102ed0730;
  if (uVar7 < 4) {
    uVar4 = 0;
    dVar10 = 0.0;
LAB_102ed0688:
    lVar8 = uVar7 - uVar4;
    pdVar5 = (double *)(puVar3 + uVar4 * 8 + 0x20);
    do {
      dVar10 = dVar10 + *pdVar5;
      lVar8 = lVar8 + -1;
      pdVar5 = pdVar5 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar4 = uVar7 & 0x7ffffffffffffffc;
    pdVar5 = (double *)(puVar3 + 0x30);
    dVar10 = 0.0;
    uVar6 = uVar4;
    do {
      dVar10 = dVar10 + pdVar5[-2] + pdVar5[-1] + *pdVar5 + pdVar5[1];
      pdVar5 = pdVar5 + 4;
      uVar6 = uVar6 - 4;
    } while (uVar6 != 0);
    if (uVar7 != uVar4) goto LAB_102ed0688;
  }
  dVar11 = 1.0;
  if (1.0 < dVar10) {
    dVar11 = dVar10;
  }
  func_0x00010134166c(0,uVar7,0);
  lVar8 = 0x20;
  uVar6 = *(ulong *)(puVar1 + 0x10);
  do {
    dVar10 = *(double *)(puVar3 + lVar8);
    uVar4 = uVar6 + 1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
      func_0x00010134166c(1 < *(ulong *)(puVar1 + 0x18),uVar4,1);
    }
    *(ulong *)(puVar1 + 0x10) = uVar4;
    *(double *)(puVar1 + uVar6 * 8 + 0x20) = dVar10 / dVar11;
    lVar8 = lVar8 + 8;
    uVar7 = uVar7 - 1;
    uVar6 = uVar4;
  } while (uVar7 != 0);
LAB_102ed0730:
  func_0x000107c6142c(puVar3);
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  return;
}



/* Entry: 102ed0768; end: 102ed0923;  */

void FUN_102ed0768(double *param_1,double param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_68 [24];
  
  dVar12 = 0.0;
  dVar10 = 0.0;
  if (0.0 < param_2) {
    dVar10 = param_2;
  }
  dVar11 = 1.0;
  if (dVar10 <= 1.0) {
    dVar11 = dVar10;
  }
  func_0x000107c61428(param_3 + 0x18,auStack_68,0x21,0);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  func_0x000107c61558(uVar3);
  lVar4 = *(long *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
  FUN_102ed15a4(dVar11,param_4,uVar3);
  *(long *)(param_3 + 0x18) = lVar4;
  func_0x000107c614a8(auStack_68);
  lVar8 = 0;
  lVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar5 = -lVar9;
  uVar6 = 0xffffffffffffffff;
  if (uVar5 < 0x40) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar4 + 0x40);
  while( true ) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = lVar8 << 9 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 3;
      lVar7 = *(long *)(*(long *)(lVar4 + 0x30) + uVar5);
      dVar10 = 0.0;
      if (lVar7 < *(long *)(*(long *)(param_3 + 0x28) + 0x10)) {
        if (lVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed08b0);
          (*pcVar1)();
        }
        dVar10 = *(double *)(*(long *)(param_3 + 0x28) + 0x20 + lVar7 * 8);
      }
      dVar12 = dVar12 + *(double *)(*(long *)(lVar4 + 0x38) + uVar5) * dVar10;
    }
    bVar2 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed0924);
      (*pcVar1)();
    }
    if ((long)(0x3fU - lVar9 >> 6) <= lVar8) break;
    uVar6 = ((ulong *)(lVar4 + 0x40))[lVar8];
  }
  func_0x000107c6157c(lVar4);
  FUN_102ed304c();
  dVar10 = 1.0;
  if (dVar12 <= 1.0) {
    dVar10 = dVar12;
  }
  bVar2 = dVar10 <= *(double *)(param_3 + 0x20);
  if (bVar2) {
    dVar10 = 0.0;
  }
  else {
    *(double *)(param_3 + 0x20) = dVar10;
  }
  *param_1 = dVar10;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 102ed0924; end: 102ed097f;  */

void FUN_102ed0924(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ed0980; end: 102ed0a33;  */

void FUN_102ed0980(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  lVar1 = 0;
  func_0x000107c5fb10();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed0a34,uVar3,uVar4);
  return;
}



/* Entry: 102ed0a34; end: 102ed0c4f;  */

/* WARNING: Removing unreachable block (ram,0x000102ed0abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed0a34(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  if (*(long *)(lVar5 + 0x10) == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x38) + _DAT_112f27928))
              (0xd000000000000029,0x800000010f1138b0);
  }
  else {
    uVar1 = *(ulong *)(unaff_x22 + 0x58);
    uVar3 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x50) + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x10))
              (uVar1,*(long *)(unaff_x22 + 0x30) + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),
               *(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c5edb8();
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    if ((uVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar5 = *(long *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x38) + _DAT_112f27928))
                (0xd00000000000002e,0x800000010f113850);
      pcVar2 = *(code **)(lVar5 + 8);
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x000107c5fb04(uVar6);
      func_0x000107c5fac8(uVar4,uVar6);
      (**(code **)(*(long *)(unaff_x22 + 0x38) + _DAT_112f27920))();
      func_0x000107c6142c(uVar6);
      lVar5 = *(long *)(unaff_x22 + 0x50);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x000107c5edb0();
      pcVar2 = *(code **)(lVar5 + 8);
    }
    (*pcVar2)(uVar4,uVar6);
  }
  uVar4 = uRam0000000112f27980;
  uRam0000000112f27980 = 0;
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ed0c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed0c50; end: 102ed0d53; -[_TtC24SCSnapDocSaveServiceImplP33_70A37902D3182EF1AC51B2702B8EAB4E25TemplateImportCoordinator documentPicker:didPickDocumentsAtURLs:] */

void FUN_102ed0c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x000107c614f0();
  uVar1 = 0;
  func_0x000107c5ede0(0);
  func_0x000107c5fc54(param_4,uVar1);
  puVar2 = &UNK_1105e5220;
  func_0x000107c613fc(&UNK_1105e5220,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  puVar3 = &UNK_1105e5248;
  func_0x000107c613fc(&UNK_1105e5248,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10db631c0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_4);
  uVar4 = 0;
  func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10db631c8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ed0d54; end: 102ed0dbf;  */

void FUN_102ed0d54(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed0dc0,uVar1,uVar2);
  return;
}



/* Entry: 102ed0dc0; end: 102ed0e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed0dc0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  (**(code **)(lVar1 + _DAT_112f27930))();
  uVar2 = uRam0000000112f27980;
  uRam0000000112f27980 = 0;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ed0e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed0e14; end: 102ed0ee7; -[_TtC24SCSnapDocSaveServiceImplP33_70A37902D3182EF1AC51B2702B8EAB4E25TemplateImportCoordinator documentPickerWasCancelled:] */

void FUN_102ed0e14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = &UNK_1105e51d0;
  func_0x000107c613fc(&UNK_1105e51d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  puVar2 = &UNK_1105e51f8;
  func_0x000107c613fc(&UNK_1105e51f8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10db631a0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0;
  func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10db631b0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ed0ee8; end: 102ed0f47; -[_TtC24SCSnapDocSaveServiceImplP33_70A37902D3182EF1AC51B2702B8EAB4E25TemplateImportCoordinator init] */

void FUN_102ed0ee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocSaveServiceImpl.TemplateImportCoordinator",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed0f14);
  (*pcVar1)();
}



/* Entry: 102ed0f48; end: 102ed0fab; -[_TtC24SCSnapDocSaveServiceImplP33_70A37902D3182EF1AC51B2702B8EAB4E25TemplateImportCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ed0f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed0f7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed0f48(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f27918));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f27920 + 8));
  return;
}



/* Entry: 102ed0fac; end: 102ed0fcb;  */

void FUN_102ed0fac(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab5d8);
  return;
}



/* Entry: 102ed0fcc; end: 102ed0fe7;  */

void FUN_102ed0fcc(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
    return;
  }
  return;
}



/* Entry: 102ed0fe8; end: 102ed117b;  */

ulong * FUN_102ed0fe8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (0xfffffffe < *param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c6157c(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 102ed117c; end: 102ed1277;  */

int FUN_102ed117c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 102ed1278; end: 102ed12e3;  */

void FUN_102ed1278(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ed33d0;
  plVar3[0xf] = lVar1;
  plVar3[0x10] = lVar2;
  plVar3[0xe] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecb000,0,0);
  return;
}



/* Entry: 102ed12e4; end: 102ed149f;  */

ulong FUN_102ed12e4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed13c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed13cc);
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
  func_0x000102ed2cc4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed14a0);
  (*pcVar2)();
}



/* Entry: 102ed14a0; end: 102ed1533;  */

void FUN_102ed14a0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ed33ac;
  plVar5[7] = lVar1;
  plVar5[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecb478,0,0,lVar1,lVar3,uVar2,uVar4,uVar6);
  return;
}



/* Entry: 102ed1534; end: 102ed15a3;  */

void FUN_102ed1534(undefined8 param_1)

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
  plVar3[1] = 0x102ed3390;
  (*(code *)&UNK_1000edb88)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102ed15a4; end: 102ed16bf;  */

void FUN_102ed15a4(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_3;
  func_0x00010035a314();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed1650);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    uVar3 = (uint)param_3 & 1;
    FUN_102ed180c(lVar6);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar4 & 1) != (uVar3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed1634);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102ed16c0();
    lVar6 = *unaff_x20;
    goto joined_r0x000102ed1664;
  }
  lVar6 = *unaff_x20;
joined_r0x000102ed1664:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed16c0);
      (*pcVar1)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 102ed16c0; end: 102ed180b;  */

void FUN_102ed16c0(void)

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
  undefined8 uVar10;
  
  func_0x0001000285a8(0x112f279c0,&UNK_10db63290);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_102ed1798;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar10;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_102ed1798:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed180c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102ed17ec;
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
    } while( true );
  }
LAB_102ed17ec:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102ed180c; end: 102ed1a67;  */

void FUN_102ed180c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112f279c0;
  func_0x0001000285a8(0x112f279c0,&UNK_10db63290);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar14);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_102ed1a30:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed1a64);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_102ed1a30;
        }
        uVar11 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed1a68);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar16;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 102ed1a68; end: 102ed1c63;  */

undefined * FUN_102ed1a68(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 == 0) {
    lVar14 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = 0;
    lVar14 = 0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar13 = (ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x20);
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed1c40);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar11;
        FUN_102ed12e4(uVar11,param_1,&PTR_PTR_1126ac780,0x112f279a0);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed1bf8);
        (*pcVar2)();
      }
      uVar12 = uVar11 + 1;
      puVar5 = puVar9;
      if (lVar14 == 0) {
        uVar7 = *(ulong *)(puVar9 + 0x18);
        if ((long)((uVar7 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed1c48);
          (*pcVar2)();
        }
        uVar8 = uVar7 & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar8 = 1;
        }
        puVar5 = (undefined *)0x112f279d8;
        func_0x0001000285a8(0x112f279d8,&UNK_10db63318);
        func_0x000107c613fc();
        puVar6 = puVar5;
        func_0x000107c610a4();
        puVar1 = puVar6 + -0x11;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar8;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar6 = puVar5 + 0x20;
        uVar7 = *(ulong *)(puVar9 + 0x18) >> 1;
        if (*(long *)(puVar9 + 0x10) != 0) {
          if ((puVar5 != puVar9) || (puVar9 + 0x20 + uVar7 * 0x10 <= puVar6)) {
            func_0x000107c610b8(puVar6,puVar9 + 0x20,uVar7 << 4);
          }
          *(undefined8 *)(puVar9 + 0x10) = 0;
        }
        puVar13 = (ulong *)(puVar6 + uVar7 * 0x10);
        lVar14 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - uVar7;
        func_0x000107c61574(puVar9);
      }
      bVar3 = SBORROW8(lVar14,1);
      lVar14 = lVar14 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed1c44);
        (*pcVar2)();
      }
      *puVar13 = uVar11;
      puVar13[1] = uVar4;
      uVar11 = uVar11 + 1;
      puVar9 = puVar5;
      puVar13 = puVar13 + 2;
    } while (uVar12 != uVar10);
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar10 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar10,lVar14)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed1c64);
      (*pcVar2)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar10 - lVar14;
  }
  return puVar5;
}



/* Entry: 102ed1c64; end: 102ed1cc7;  */

void FUN_102ed1c64(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ed1cc8;
                    /* WARNING: Could not recover jumptable at 0x000102ed1cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 102ed1cc8; end: 102ed1d07;  */

void FUN_102ed1cc8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed1d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed1d08; end: 102ed1ddf;  */

undefined * FUN_102ed1d08(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112f279c0);
    puVar2 = puVar6;
    func_0x000107c60498();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar7 = puVar8[-1];
      uVar9 = *puVar8;
      uVar3 = uVar7;
      func_0x00010035a314();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed1ddc);
        (*pcVar1)();
      }
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar7;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed1de0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 102ed1de0; end: 102ed1eaf;  */

bool FUN_102ed1de0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  func_0x000103aeb250(0);
  func_0x000103ae9d4c(auStack_b0,param_1);
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_2b = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  if (lStack_a8 == 0) {
    uVar1 = 0x112deb530;
    puVar2 = &UNK_10d9b82d0;
  }
  else {
    uVar1 = 0x112f27960;
    puVar2 = &UNK_10db63110;
  }
  func_0x000102ed1e70(auStack_b0,uVar1,puVar2);
  return lStack_a8 != 0;
}



/* Entry: 102ed1eb0; end: 102ed1f73;  */

undefined1  [16] FUN_102ed1eb0(uint param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  if (((param_1 & 0x101) == 0) && (*(long *)(param_2 + 0x10) == 0)) {
    uVar1 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar2 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f1137e0);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    auVar4._8_8_ = 1;
    auVar4._0_8_ = puVar3;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 102ed1f74; end: 102ed1ff3;  */

void FUN_102ed1f74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102ed33b4;
  plVar6[0xf] = lVar1;
  plVar6[0x10] = lVar3;
  plVar6[0xd] = lVar7;
  plVar6[0xe] = lVar2;
  plVar6[0xb] = param_1;
  plVar6[0xc] = param_2;
  lVar7 = 0x112f27968;
  func_0x0001000285a8(0x112f27968,&UNK_10db63160);
  plVar6[0x11] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x12] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar4;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x14] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x15] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecc2e4,0,0);
  return;
}



/* Entry: 102ed1ff4; end: 102ed209b;  */

void FUN_102ed1ff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  plVar10 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x102ed33b8;
  plVar10[2] = param_1;
  plVar9 = (long *)0x140;
  func_0x000107c615b8(0x140,uVar1,uVar5);
  plVar10[3] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_102ecc9c4;
  plVar9[0x1c] = lVar11;
  plVar9[0x1d] = lVar2;
  plVar9[0x1a] = lVar4;
  plVar9[0x1b] = lVar8;
  plVar9[0x18] = lVar3;
  plVar9[0x19] = lVar7;
  plVar9[0x17] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecca88,0,0);
  return;
}



/* Entry: 102ed209c; end: 102ed20bb;  */

void FUN_102ed209c(undefined8 param_1,long param_2)

{
  if (param_2 == 3) {
    return;
  }
  if (param_2 == 2) {
    return;
  }
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102ed20bc; end: 102ed212b;  */

void FUN_102ed20bc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ed3394;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102ed1cc8;
                    /* WARNING: Could not recover jumptable at 0x000102ed1cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 102ed212c; end: 102ed2173;  */

void FUN_102ed212c(undefined8 param_1,long param_2)

{
  if (param_2 == 3) {
    return;
  }
  if (param_2 == 2) {
    return;
  }
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102ed2174; end: 102ed21cb;  */

void FUN_102ed2174(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  if (1 < *(long *)(unaff_x20 + 0x50) - 1U) {
    func_0x000107c6142c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ed21cc; end: 102ed2273;  */

void FUN_102ed21cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  plVar10 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x102ed33bc;
  plVar10[2] = param_1;
  plVar9 = (long *)0x140;
  func_0x000107c615b8(0x140,uVar1,uVar5);
  plVar10[3] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_102ecc9c4;
  plVar9[0x1c] = lVar11;
  plVar9[0x1d] = lVar2;
  plVar9[0x1a] = lVar4;
  plVar9[0x1b] = lVar8;
  plVar9[0x18] = lVar3;
  plVar9[0x19] = lVar7;
  plVar9[0x17] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecca88,0,0);
  return;
}



/* Entry: 102ed2274; end: 102ed22e3;  */

void FUN_102ed2274(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ed3398;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102ed1cc8;
                    /* WARNING: Could not recover jumptable at 0x000102ed1cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 102ed22e4; end: 102ed2333;  */

void FUN_102ed22e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ed33c0;
  plVar4[2] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec(0,uVar1);
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed0dc0,lVar2,lVar3);
  return;
}



/* Entry: 102ed2334; end: 102ed23a3;  */

void FUN_102ed2334(undefined8 param_1)

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
  plVar3[1] = 0x102ed33c4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102ed23a4; end: 102ed2403;  */

void FUN_102ed23a4(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ed33c8;
  plVar4[6] = lVar1;
  plVar4[7] = lVar3;
  lVar1 = 0;
  func_0x000107c5fb10(0,lVar3,uVar5);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[8] = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar4[9] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xb] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0xc] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed0a34,lVar3,lVar1);
  return;
}



/* Entry: 102ed2404; end: 102ed2473;  */

void FUN_102ed2404(undefined8 param_1)

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
  plVar3[1] = 0x102ed33cc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102ed2474; end: 102ed2483;  */

void FUN_102ed2474(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102ed247c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102ed2484; end: 102ed251f;  */

void FUN_102ed2484(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  long lVar12;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  plVar11 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x102ed33e8;
  plVar11[0x15] = lVar6;
  plVar11[0x16] = lVar12;
  plVar11[0x13] = lVar5;
  plVar11[0x14] = lVar2;
  plVar11[0x11] = lVar4;
  plVar11[0x12] = lVar1;
  plVar11[0xf] = lVar3;
  plVar11[0x10] = lVar10;
  plVar11[0xe] = lVar7;
  lVar7 = 0;
  func_0x000107c5fb10();
  plVar11[0x17] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar11[0x18] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x19] = uVar8;
  lVar7 = 0;
  func_0x000107c5ede0();
  plVar11[0x1a] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar11[0x1b] = lVar7;
  lVar7 = *(long *)(lVar7 + 0x40);
  plVar11[0x1c] = lVar7;
  uVar8 = lVar7 + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x1d] = uVar9;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x1e] = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x1f] = uVar8;
  lVar10 = 0;
  func_0x000107c5fcec();
  lVar7 = lVar10;
  func_0x000107c5fce8();
  plVar11[0x20] = lVar7;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar10,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eca504,lVar10,lVar7);
  return;
}



/* Entry: 102ed2520; end: 102ed258f;  */

void FUN_102ed2520(undefined8 param_1)

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
  plVar3[1] = 0x102ed33d4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102ed2590; end: 102ed260b;  */

void FUN_102ed2590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_102eca900(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),
                unaff_x20 + (uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 102ed260c; end: 102ed2627;  */

void FUN_102ed260c(long param_1,long param_2)

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



/* Entry: 102ed2628; end: 102ed26af;  */

void FUN_102ed2628(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102ed33d8;
  plVar7[9] = lVar4;
  plVar7[10] = lVar8;
  plVar7[7] = lVar3;
  plVar7[8] = lVar1;
  plVar7[5] = lVar2;
  plVar7[6] = lVar5;
  plVar7[4] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xb] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec9ed0,lVar5,lVar6);
  return;
}



/* Entry: 102ed26b0; end: 102ed271f;  */

void FUN_102ed26b0(undefined8 param_1)

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
  plVar3[1] = 0x102ed33dc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102ed2720; end: 102ed2727;  */

void FUN_102ed2720(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ed2728; end: 102ed2777;  */

void FUN_102ed2728(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    pcVar4 = *(code **)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = 0x800000010f113a80;
    uVar1 = 0xd00000000000002c;
  }
  else {
    pcVar4 = *(code **)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = 0;
    uVar2 = 0;
  }
  (*pcVar4)(uVar3,uVar1,uVar2);
  return;
}



/* Entry: 102ed2778; end: 102ed2803;  */

void FUN_102ed2778(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102ed33e0;
  plVar7[0x15] = lVar3;
  plVar7[0x16] = lVar6;
  plVar7[0x13] = lVar2;
  plVar7[0x14] = lVar5;
  plVar7[0x11] = lVar1;
  plVar7[0x12] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec91f0,0,0);
  return;
}



/* Entry: 102ed2804; end: 102ed287b;  */

void FUN_102ed2804(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ed33e4;
  plVar5[8] = lVar3;
  plVar5[9] = lVar2;
  plVar5[7] = lVar1;
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar5[10] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x102ec971c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102ed287c; end: 102ed28d3;  */

/* WARNING: Possible PIC construction at 0x000102ed2890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed2894) */

void FUN_102ed287c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 102ed28d4; end: 102ed28e7;  */

void FUN_102ed28d4(ulong param_1,undefined8 param_2)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 102ed28e8; end: 102ed2907;  */

void FUN_102ed28e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ed2908; end: 102ed2917;  */

void FUN_102ed2908(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ed2918; end: 102ed2937;  */

void FUN_102ed2918(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ed2938; end: 102ed296f;  */

void FUN_102ed2938(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c61574(*param_1);
  *param_1 = unaff_x20;
  func_0x000107c6157c();
  return;
}



/* Entry: 102ed2970; end: 102ed2a27;  */

void FUN_102ed2970(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined4 *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  lVar7 = *(long *)(unaff_x20 + 0x58);
  plVar6 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102ed2a28;
  plVar6[0x11] = lVar7;
  plVar6[0x10] = lVar11;
  plVar6[0xf] = lVar10;
  *(undefined4 *)(plVar6 + 0x16) = uVar5;
  plVar6[0xd] = lVar8;
  plVar6[0xe] = lVar9;
  plVar6[0xb] = lVar2;
  plVar6[0xc] = lVar4;
  plVar6[9] = lVar1;
  plVar6[10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec7e94,0,0);
  return;
}



/* Entry: 102ed2a28; end: 102ed2a63;  */

void FUN_102ed2a28(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed2a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed2a64; end: 102ed2a97;  */

void FUN_102ed2a64(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102ed2a98; end: 102ed2aaf;  */

void FUN_102ed2a98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102ed03a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102ed2ab0; end: 102ed2b1b;  */

void FUN_102ed2ab0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ed33ec;
  plVar4[7] = lVar1;
  plVar4[8] = lVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar4[9] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x102ec8ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102ed2b1c; end: 102ed2b57;  */

void FUN_102ed2b1c(long *param_1)

{
  long unaff_x20;
  
  if (*param_1 != 0 && unaff_x20 == *param_1) {
    func_0x000107c61574();
    *param_1 = 0;
  }
  return;
}



/* Entry: 102ed2b58; end: 102ed2bef;  */

void FUN_102ed2b58(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x2b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102ed2bf0;
  plVar6[0x30] = lVar4;
  plVar6[0x31] = param_3;
  *(undefined1 *)(plVar6 + 0x54) = uVar5;
  plVar6[0x2e] = lVar3;
  plVar6[0x2f] = lVar2;
  plVar6[0x2c] = param_1;
  plVar6[0x2d] = lVar1;
  lVar1 = param_2[1];
  plVar6[0x32] = *param_2;
  plVar6[0x33] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecd640,0,0);
  return;
}



/* Entry: 102ed2bf0; end: 102ed2c2b;  */

void FUN_102ed2bf0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed2c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed2c2c; end: 102ed2d03;  */

void FUN_102ed2c2c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 102ed2d04; end: 102ed2d13;  */

void FUN_102ed2d04(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lStack_48;
  
  uVar2 = 0x112f279d0;
  func_0x0001000285a8(0x112f279d0,&UNK_10db63308);
  func_0x000100075034(&lStack_48,FUN_102ecebb8,0,uVar2);
  uVar3 = *(ulong *)(lStack_48 + 0x10);
  if (uVar3 != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(lStack_48 + 0x28);
    do {
      if (*(ulong *)(lStack_48 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ecebb8);
        (*pcVar1)();
      }
      uVar4 = uVar4 + 1;
      pcVar1 = (code *)puVar5[-1];
      uVar2 = *puVar5;
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      puVar5 = puVar5 + 2;
    } while (uVar3 != uVar4);
  }
  func_0x000107c6142c(lStack_48);
  return;
}



/* Entry: 102ed2d14; end: 102ed2def;  */

void FUN_102ed2d14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  lVar15 = *(long *)(unaff_x20 + 0x50);
  lVar14 = *(long *)(unaff_x20 + 0x48);
  lVar3 = *(long *)(unaff_x20 + 0x58);
  lVar6 = *(long *)(unaff_x20 + 0x60);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x68);
  lVar13 = *(long *)(unaff_x20 + 0x78);
  lVar12 = *(long *)(unaff_x20 + 0x70);
  lVar10 = *(long *)(unaff_x20 + 0x80);
  plVar8 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x102ed339c;
  plVar8[0x2b] = lVar10;
  plVar8[0x2a] = lVar13;
  plVar8[0x29] = lVar12;
  *(undefined1 *)(plVar8 + 0x33) = uVar7;
  plVar8[0x28] = lVar6;
  plVar8[0x27] = lVar3;
  plVar8[0x26] = lVar15;
  plVar8[0x25] = lVar14;
  plVar8[0x23] = lVar5;
  plVar8[0x24] = lVar11;
  plVar8[0x21] = lVar4;
  plVar8[0x22] = lVar2;
  plVar8[0x1f] = lVar9;
  plVar8[0x20] = lVar1;
  plVar8[0x1e] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eceee4,0,0);
  return;
}



/* Entry: 102ed2df0; end: 102ed2e97;  */

void FUN_102ed2df0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  plVar10 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x102ed33a0;
  plVar10[0x1d] = lVar4;
  plVar10[0x1e] = lVar8;
  plVar10[0x1b] = lVar3;
  plVar10[0x1c] = lVar7;
  plVar10[0x19] = lVar2;
  plVar10[0x1a] = lVar6;
  *(undefined1 *)(plVar10 + 0x28) = uVar9;
  plVar10[0x17] = lVar1;
  plVar10[0x18] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecf584,0,0);
  return;
}



/* Entry: 102ed2e98; end: 102ed2f17;  */

void FUN_102ed2e98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ed33a4;
  plVar5[0x10] = lVar4;
  plVar5[0x11] = lVar6;
  plVar5[0xe] = lVar3;
  plVar5[0xf] = lVar2;
  plVar5[0xc] = param_1;
  plVar5[0xd] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecfbb0,0,0);
  return;
}



/* Entry: 102ed2f18; end: 102ed2f1f;  */

/* WARNING: Possible PIC construction at 0x000102ed01a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed01a8) */

void FUN_102ed2f18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)(uVar1,&UNK_1105e4ff0,uVar2,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102ed2f20; end: 102ed2f97;  */

void FUN_102ed2f20(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ed33f0;
  plVar4[3] = lVar1;
  plVar4[4] = lVar2;
  plVar4[2] = unaff_x20 + 0x18;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  plVar4[5] = (long)plVar3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102ed0084;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)();
  return;
}



/* Entry: 102ed2f98; end: 102ed2feb;  */

void FUN_102ed2f98(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ed33a8;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102ed3338;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(param_1);
  return;
}



/* Entry: 102ed2fec; end: 102ed3027;  */

void FUN_102ed2fec(void)

{
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 102ed3028; end: 102ed302f;  */

void FUN_102ed3028(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0x112dc10e8;
  lStack_60 = lVar1;
  uStack_50 = param_1;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000100087bd4(&uStack_40,FUN_102ed3030,auStack_70,uVar2);
  if (cStack_38 != '\x01') {
    (**(code **)(lVar1 + 0x30))(uStack_40);
  }
  return;
}



/* Entry: 102ed3030; end: 102ed304b;  */

void FUN_102ed3030(void)

{
  long unaff_x20;
  
  FUN_102ed0768(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102ed304c; end: 102ed3053;  */

void FUN_102ed304c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102ed3054; end: 102ed308f;  */

void FUN_102ed3054(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ed3090; end: 102ed30f3;  */

void FUN_102ed3090(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ed33f4;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed01e8,0,0);
  return;
}


