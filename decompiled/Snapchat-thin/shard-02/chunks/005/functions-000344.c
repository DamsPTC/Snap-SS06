/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e13370; end: 101e1337b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e13370(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000101e0ff1c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a95d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  ppuStack_48 = &PTR_DAT_110489f70;
  lVar4 = 0;
  alStack_68[0] = lVar2;
  lStack_50 = lVar1;
  FUN_101e10314();
  lVar2 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e2fdb8) = uVar6;
  func_0x00010077b7ec(unaff_x20 + 0x18,lVar2 + _DAT_112e2fdc0);
  func_0x00010077b7ec(alStack_68,lVar2 + _DAT_112e2fdc8);
  puVar3 = PTR_s_init_1125d9248;
  lStack_78 = lVar2;
  lStack_70 = lVar4;
  func_0x000107c6157c(uVar6);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar3);
  func_0x0001000834e4(alStack_68);
  *param_1 = (long)plVar5;
  param_1[1] = (long)&PTR_DAT_110489fa8;
  return;
}



/* Entry: 101e1337c; end: 101e13397;  */

/* WARNING: Possible PIC construction at 0x000101e13388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e1338c) */

void FUN_101e1337c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e13398; end: 101e13437;  */

void FUN_101e13398(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e13438; end: 101e1344f;  */

void FUN_101e13438(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e13450,0,0);
  return;
}



/* Entry: 101e13450; end: 101e1353f;  */

void FUN_101e13450(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar2 = puVar6;
  func_0x000107c4a8f0();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x20) = puVar6;
  func_0x000107c61170();
  if (puVar6 != (undefined8 *)0x0) {
    plVar3 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101e13540;
    plVar3[0x11] = (long)puVar6;
    lVar4 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    plVar3[0x12] = lVar4;
    lVar5 = lVar4;
    func_0x000107c5fce8();
    plVar3[0x13] = lVar5;
    lVar5 = 0x112d45220;
    FUN_101e14408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    plVar3[0x14] = lVar5;
    func_0x000107c5fca8();
    plVar3[0x15] = lVar4;
    plVar3[0x16] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e13a98,lVar4,lVar5);
    return;
  }
  func_0x000101e137d8();
  func_0x000107c613f8(&UNK_11048a1e8,puVar2,0,0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101e1353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e13540; end: 101e135c3;  */

void FUN_101e13540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_4;
    *(undefined8 *)(lVar2 + 0x40) = param_3;
    *(undefined8 *)(lVar2 + 0x48) = param_2;
    *(undefined8 *)(lVar2 + 0x50) = param_1;
    pcVar1 = FUN_101e135c4;
  }
  else {
    pcVar1 = (code *)0x101e13600;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e135c4; end: 101e13633;  */

void FUN_101e135c4(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101e135fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101e13634; end: 101e136d7;  */

void FUN_101e13634(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  lVar4 = 0x112e2ff90;
  func_0x0001000285a8(0x112e2ff90,&UNK_10da18b30);
  lVar5 = lVar4;
  FUN_101e143b8();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e136d8;
  plVar3[3] = param_1;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar5,lVar4,&UNK_10e821f58,&UNK_10e821f60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar6,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[5] = uVar8;
  piVar10 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar9;
  *plVar9 = (long)plVar3;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar4,lVar5);
  return;
}



/* Entry: 101e136d8; end: 101e1376f;  */

void FUN_101e136d8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  uVar1 = 0x112d45220;
  FUN_101e14408(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101e13770;
  }
  else {
    pcVar2 = (code *)0x101e137a4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 101e13770; end: 101e13883;  */

void FUN_101e13770(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101e137a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e13884; end: 101e138f3;  */

void FUN_101e13884(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e138f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e138f4; end: 101e139b3;  */

undefined1  [16] FUN_101e138f4(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0xd000000000000017;
  if (param_2 == '\x01') {
    uStack_38 = 0x800000010f012700;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c5fb78(0xd000000000000022,0x800000010f0126d0);
    uVar1 = 0;
    uStack_48 = param_1;
    FUN_101e140b0(0);
    func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = uStack_40;
  return auVar2;
}



/* Entry: 101e139b4; end: 101e139ff;  */

void FUN_101e139b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101e13a00; end: 101e13a97;  */

void FUN_101e13a00(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101e14408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e13a98,uVar2,uVar3);
  return;
}



/* Entry: 101e13a98; end: 101e13ca3;  */

void FUN_101e13a98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x88);
  puVar2 = &UNK_11071e220;
  func_0x00010488bd80();
  *(undefined **)(unaff_x22 + 0xb8) = puVar2;
  func_0x0001000295c4(0);
  func_0x000107c61580(puVar2,2);
  uVar6 = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c5ffdc();
  puVar5 = (undefined8 *)(unaff_x22 + 0x30);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(code **)(unaff_x22 + 0x50) = FUN_101e14100;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = 0x42000000;
  *(code **)(unaff_x22 + 0x40) = FUN_101db1c3c;
  *(undefined **)(unaff_x22 + 0x48) = &UNK_11048a1f8;
  func_0x000107c60bc4(puVar5);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar7);
  func_0x000107c503bc();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  func_0x000107c61578(param_2,2);
  func_0x000107c61574(puVar2);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(uVar6);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  func_0x000107c615f0();
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 200) = lVar4;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101e13ca4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar3,unaff_x22 + 0x60,&UNK_10da18b28,puVar2,FUN_101e14388,unaff_x22 + 0x10,lVar4,uVar6,
      &UNK_11071e220);
    return;
  }
  if (lVar4 == 0) {
    lVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e13d2c,lVar4);
  return;
}



/* Entry: 101e13ca4; end: 101e13d2b;  */

void FUN_101e13ca4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0xb8));
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101e13f60;
  }
  else {
    *(long *)(lVar4 + 0x108) = unaff_x20;
    func_0x000107c61574(*(undefined8 *)(lVar4 + 200));
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101e13fb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101e13d2c; end: 101e13dd3;  */

void FUN_101e13d2c(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  pcVar2 = FUN_101e14388;
  func_0x000107c615b4(FUN_101e14388,unaff_x22 + 0x10);
  *(code **)(unaff_x22 + 0xe8) = pcVar2;
  func_0x000107c5fce8();
  *(code **)(unaff_x22 + 0xf0) = pcVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar3;
  lVar4 = 0x112e2ff90;
  func_0x0001000285a8(0x112e2ff90,&UNK_10da18b30);
  lVar5 = lVar4;
  FUN_101e143b8();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e13dd4;
  plVar3[3] = unaff_x22 + 0x60;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar5,lVar4,&UNK_10e821f58,&UNK_10e821f60);
  uVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar6,uVar11,PTR___ss5ErrorWS_11034ee10);
  plVar3[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[5] = uVar8;
  piVar10 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar9;
  *plVar9 = (long)plVar3;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar4,lVar5);
  return;
}



/* Entry: 101e13dd4; end: 101e13e53;  */

void FUN_101e13dd4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  undefined8 uVar4;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  uVar4 = *(undefined8 *)(lVar2 + 0x90);
  *(long *)(lVar2 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  func_0x000107c5fca8(uVar4,uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e13e54;
  }
  else {
    pcVar1 = FUN_101e13ee0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar4,uVar3);
  return;
}



/* Entry: 101e13e54; end: 101e13e8b;  */

void FUN_101e13e54(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101e13e8c,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Entry: 101e13e8c; end: 101e13edf;  */

void FUN_101e13e8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0xe8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101e13f60,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 101e13ee0; end: 101e13f5f;  */

void FUN_101e13ee0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101e13f18,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Entry: 101e13f60; end: 101e13faf;  */

void FUN_101e13f60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e13fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),
             *(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101e13fb0; end: 101e13fff;  */

void FUN_101e13fb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615ec(*(undefined8 *)(unaff_x22 + 0xc0),2);
  func_0x000107c61578(uVar1,2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e13ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e14000; end: 101e140af;  */

undefined1  [16] FUN_101e14000(void)

{
  return ZEXT816(0x11048a158);
}



/* Entry: 101e140b0; end: 101e140ff;  */

void FUN_101e140b0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e2ffa0 != 0) {
    return;
  }
  puVar1 = &UNK_11048a230;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e2ffa0 = param_1;
  return;
}



/* Entry: 101e14100; end: 101e142db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e14100(long *param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (param_1 == (long *)0x5) {
    param_3 = (undefined *)0x0;
    func_0x000107c5fcbc();
    uVar4 = 0x112d4e4a0;
    FUN_101e14408(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    func_0x000107c613f8(param_3,uVar4,0,0);
    func_0x000107c5f9d4(uVar4);
  }
  else {
    if (param_3 != (undefined *)0x0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 1;
      puStack_68 = param_3;
      func_0x000107c614b0(param_3);
      func_0x00010488e5d4(&puStack_68);
      goto LAB_101e141bc;
    }
    if ((param_1 == (long *)0x6) && (param_2 != 0)) {
      puVar1 = *(undefined **)(param_2 + _DAT_11302c658);
      uVar2 = ((undefined8 *)(param_2 + _DAT_11302c658))[1];
      uVar4 = *(undefined8 *)(param_2 + _DAT_11302c660);
      uVar3 = ((undefined8 *)(param_2 + _DAT_11302c660))[1];
      uStack_48 = 0;
      puStack_68 = puVar1;
      uStack_60 = uVar2;
      uStack_58 = uVar4;
      uStack_50 = uVar3;
      func_0x000107c61174(param_2);
      func_0x00010006c00c(puVar1,uVar2);
      func_0x00010006c00c(uVar4,uVar3);
      func_0x00010006c00c(puVar1,uVar2);
      func_0x00010006c00c(uVar4,uVar3);
      func_0x00010488e5d4(&puStack_68);
      func_0x00010006c090(puVar1,uVar2);
      func_0x00010006c090(uVar4,uVar3);
      func_0x000107c61170(param_2);
      func_0x00010006c090(puVar1,uVar2);
      func_0x00010006c090(uVar4,uVar3);
      return;
    }
    plVar5 = param_1;
    func_0x000101e137d8();
    param_3 = &UNK_11048a1e8;
    func_0x000107c613f8(&UNK_11048a1e8,plVar5,0,0);
    *plVar5 = (long)param_1;
    *(undefined1 *)(plVar5 + 1) = 0;
  }
  uStack_48 = 1;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puStack_68 = param_3;
  func_0x000107c614b0();
  func_0x00010488e5d4(&puStack_68);
  func_0x000107c614ac(param_3);
LAB_101e141bc:
  func_0x000107c614ac(param_3);
  return;
}



/* Entry: 101e142dc; end: 101e142f7;  */

void FUN_101e142dc(long param_1,long param_2)

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



/* Entry: 101e142f8; end: 101e1434b;  */

void FUN_101e142f8(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101e1434c;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar5[3] = lVar2;
  func_0x000107c5fce8();
  plVar5[4] = lVar2;
  plVar5[2] = unaff_x20;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  plVar5[5] = (long)plVar3;
  lVar2 = 0x112e2ff90;
  func_0x0001000285a8(0x112e2ff90,&UNK_10da18b30);
  lVar4 = lVar2;
  FUN_101e143b8();
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_101e136d8;
  plVar3[3] = param_1;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar4,lVar2,&UNK_10e821f58,&UNK_10e821f60);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar6,uVar7,PTR___ss5ErrorWS_11034ee10);
  plVar3[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[5] = uVar9;
  piVar10 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar10;
  plVar5 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar5;
  *plVar5 = (long)plVar3;
  plVar5[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar5,uVar9,lVar2,lVar4);
  return;
}



/* Entry: 101e1434c; end: 101e14387;  */

void FUN_101e1434c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e14384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e14388; end: 101e143b7;  */

void FUN_101e14388(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  long lStack_38;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c3f474();
  }
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,&UNK_11071e220,uVar2,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  puStack_40 = &UNK_11071e220;
  uVar2 = 0xff;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_38,&UNK_10488cea0,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x000100f5abbc();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    func_0x000103969044(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 101e143b8; end: 101e14407;  */

void FUN_101e143b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e2ff98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e2ff90;
  func_0x00010002969c(0x112e2ff90,&UNK_10da18b30);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112e2ff98 = puVar2;
  return;
}



/* Entry: 101e14408; end: 101e14447;  */

void FUN_101e14408(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101e14448; end: 101e14483; -[_TtC36SCMemoriesSnapDocParsingServicesImpl27MemoriesSnapDocCTItemParser init] */

void FUN_101e14448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101e144b4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e14484; end: 101e144d3;  */

void FUN_101e14484(void)

{
  func_0x000101e144b4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e144d4; end: 101e1454f; -[_TtC36SCMemoriesSnapDocParsingServicesImpl27MemoriesSnapDocCTItemParser getCommonLoggingParamsFrom:] */

void FUN_101e144d4(void)

{
  func_0x000103a771a0(0);
  func_0x000107c610f8();
  func_0x000103a77090(0,0,0,0,0,0,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e14550; end: 101e1455b; -[_TtC36SCMemoriesSnapDocParsingServicesImpl27MemoriesSnapDocCTItemParser getPlaceIdFromSnapDoc:] */

void FUN_101e14550(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e145f0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e1455c; end: 101e14567; -[_TtC36SCMemoriesSnapDocParsingServicesImpl27MemoriesSnapDocCTItemParser getTimeZoneNameFromSnapDoc:] */

void FUN_101e1455c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*(code *)0x101e14d38)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e14568; end: 101e145ef;  */

void FUN_101e14568(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e145f0; end: 101e1502f;  */

undefined1  [16] FUN_101e145f0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined *puStack_68;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d0c);
    (*pcVar2)();
  }
  lVar4 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar5 = 0;
    FUN_101e15030(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar4,&puStack_68,uVar5);
    func_0x000107c61170(lVar4);
    if (puStack_68 != (undefined *)0x0) {
      puVar18 = puStack_68;
    }
  }
  if ((ulong)puVar18 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar18) {
      puVar14 = puVar18;
    }
    func_0x000107c60480();
  }
  if (puVar14 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (((ulong)puVar18 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14cac);
          (*pcVar2)();
        }
        puVar6 = *(undefined **)(puVar18 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar15;
        func_0x00010121c1ac(puVar15,puVar18);
      }
      bVar3 = SCARRY8((long)puVar15,1);
      puVar15 = puVar15 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14ca0);
        (*pcVar2)();
      }
      puVar7 = puVar6;
      func_0x000107c4abb4();
      if ((int)puVar7 == 4) {
        puVar7 = puVar6;
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14cfc);
          (*pcVar2)();
        }
        puVar8 = puVar7;
        func_0x000107c4ce20();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar8 == (undefined *)0x0) goto LAB_101e149f8;
        puVar7 = puVar8;
        func_0x000107c4ce50();
        if ((int)puVar7 == 7) {
          puVar7 = puVar8;
          func_0x000107c434d8();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) goto LAB_101e147f0;
          puVar12 = puVar7;
          func_0x000107c434c8();
          func_0x000107c61180();
          if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d08);
            (*pcVar2)();
          }
          puVar16 = puVar12;
          func_0x000107c453a8();
          func_0x000107c61170(puVar12);
          if ((int)puVar16 != 1) {
LAB_101e147e8:
            func_0x000107c61170(puVar7);
            goto LAB_101e147f0;
          }
          puVar12 = puVar7;
          func_0x000107c434c8();
          func_0x000107c61180();
          if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d10);
            (*pcVar2)();
          }
          puVar16 = puVar12;
          func_0x000107c5dcc8();
          func_0x000107c61180();
          func_0x000107c61170(puVar12);
          if (puVar16 == (undefined *)0x0) goto LAB_101e147e8;
          puVar12 = puVar16;
          func_0x000107c44a28();
          if ((int)puVar12 == 0) {
            func_0x000107c61170(puVar7);
            puVar7 = puVar16;
            goto LAB_101e147e8;
          }
          puVar14 = puVar16;
          func_0x000107c4e7c0();
          func_0x000107c61180();
          if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d2c);
            (*pcVar2)();
          }
          puVar15 = puVar14;
          func_0x000107c44e64();
          func_0x000107c61170(puVar14);
          puVar14 = puVar16;
          func_0x000107c4e7c0();
          func_0x000107c61180();
          if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d30);
            (*pcVar2)();
          }
          puVar12 = puVar14;
          func_0x000107c4c0fc();
          func_0x000107c61170(puVar14);
          func_0x000103ee3894(puVar15,puVar12);
          func_0x000107c6142c(puVar18);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar16);
LAB_101e14b78:
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          goto LAB_101e14cd4;
        }
LAB_101e147f0:
        puVar7 = puVar8;
        func_0x000107c4ce50();
        if ((int)puVar7 == 3) {
          puVar7 = puVar8;
          func_0x000107c453bc();
          func_0x000107c61180();
          if (puVar7 != (undefined *)0x0) {
            puVar12 = puVar7;
            func_0x000107c453c0();
            if ((int)puVar12 == 1) {
              puVar16 = puVar7;
              func_0x000107c4e7ec();
              func_0x000107c61180();
              if (puVar16 != (undefined *)0x0) {
                puVar12 = puVar16;
                func_0x000107c44a28();
                if ((int)puVar12 != 0) {
                  puVar14 = puVar16;
                  func_0x000107c4e7c0();
                  func_0x000107c61180();
                  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d34);
                    (*pcVar2)();
                  }
                  puVar15 = puVar14;
                  func_0x000107c44e64();
                  func_0x000107c61170(puVar14);
                  puVar14 = puVar16;
                  func_0x000107c4e7c0();
                  func_0x000107c61180();
                  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d38);
                    (*pcVar2)();
                  }
                  puVar12 = puVar14;
                  func_0x000107c4c0fc();
                  func_0x000107c61170(puVar14);
                  func_0x000103ee3894(puVar15,puVar12);
                  func_0x000107c6142c(puVar18);
                  func_0x000107c61170(puVar16);
                  func_0x000107c61170(puVar7);
                  puVar7 = puVar8;
                  goto LAB_101e14b78;
                }
                func_0x000107c61170(puVar7);
                puVar7 = puVar16;
              }
            }
            func_0x000107c61170(puVar7);
          }
        }
        puVar7 = puVar8;
        func_0x000107c4ce50();
        if ((int)puVar7 != 2) {
LAB_101e149d4:
          func_0x000107c61170(puVar6);
          puVar6 = puVar8;
          goto LAB_101e149f8;
        }
        puVar7 = puVar8;
        func_0x000107c3f558();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) goto LAB_101e149d4;
        puVar12 = puVar7;
        func_0x000107c4cd48();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar8);
          goto LAB_101e149f8;
        }
        puStack_68 = (undefined *)0x0;
        uVar5 = 0;
        FUN_101e15030(0,0x112e2ffd0,&PTR_PTR_1126dc188);
        func_0x000107c5fc50(puVar12,&puStack_68,uVar5);
        func_0x000107c61170(puVar12);
        puVar12 = puStack_68;
        if (puStack_68 == (undefined *)0x0) {
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar6);
        }
        else {
          puVar16 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((ulong)puStack_68 >> 0x3e == 0) {
            puVar13 = *(undefined **)(puVar16 + 0x10);
          }
          else {
            puVar13 = puStack_68;
            if (-1 < (long)puStack_68) {
              puVar13 = puVar16;
            }
            func_0x000107c60480();
          }
          if (puVar13 != (undefined *)0x0) {
            puVar17 = (undefined *)0x0;
            do {
              if (((ulong)puVar12 & 0xc000000000000001) == 0) {
                if (*(undefined **)(puVar16 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14ca8);
                  (*pcVar2)();
                }
                puVar9 = *(undefined **)(puVar12 + (long)puVar17 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar9 = puVar17;
                FUN_101e15218(puVar17,puVar12);
              }
              puVar1 = puVar17 + 1;
              if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14ca4);
                (*pcVar2)();
              }
              puVar10 = puVar9;
              func_0x000107c42924();
              func_0x000107c61180();
              if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14cf8);
                (*pcVar2)();
              }
              puVar11 = puVar10;
              func_0x000107c42930();
              func_0x000107c61170(puVar10);
              if ((int)puVar11 == 2) {
                puVar10 = puVar9;
                func_0x000107c42924();
                func_0x000107c61180();
                if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d04);
                  (*pcVar2)();
                }
                puVar11 = puVar10;
                func_0x000107c4e7ac();
                func_0x000107c61180();
                func_0x000107c61170(puVar10);
                if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d00);
                  (*pcVar2)();
                }
                puVar10 = puVar11;
                func_0x000107c448e0();
                func_0x000107c61170(puVar11);
                if (((ulong)puVar10 & 1) != 0) {
                  func_0x000107c6142c(puVar12);
                  puVar14 = puVar9;
                  func_0x000107c42924();
                  func_0x000107c61180();
                  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d14);
                    (*pcVar2)();
                  }
                  puVar15 = puVar14;
                  func_0x000107c4e7ac();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar14);
                  if (puVar15 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d18);
                    (*pcVar2)();
                  }
                  puVar14 = puVar15;
                  func_0x000107c44fd8();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar15);
                  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d1c);
                    (*pcVar2)();
                  }
                  puVar15 = puVar14;
                  func_0x000107c44e64(puVar14);
                  func_0x000107c61170(puVar14);
                  puVar14 = puVar9;
                  func_0x000107c42924();
                  func_0x000107c61180();
                  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d20);
                    (*pcVar2)();
                  }
                  puVar12 = puVar14;
                  func_0x000107c4e7ac();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar14);
                  if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d24);
                    (*pcVar2)();
                  }
                  puVar14 = puVar12;
                  func_0x000107c44fd8();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar12);
                  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e14d28);
                    (*pcVar2)();
                  }
                  puVar12 = puVar14;
                  func_0x000107c4c0fc(puVar14);
                  func_0x000107c61170(puVar14);
                  func_0x000103ee3894(puVar15,puVar12);
                  func_0x000107c6142c(puVar18);
                  func_0x000107c61170(puVar9);
                  func_0x000107c61170(puVar7);
                  puVar7 = puVar8;
                  goto LAB_101e14b78;
                }
              }
              func_0x000107c61170(puVar9);
              puVar17 = puVar17 + 1;
            } while (puVar1 != puVar13);
          }
          func_0x000107c6142c(puVar12);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar6);
        }
      }
      else {
LAB_101e149f8:
        func_0x000107c61170(puVar6);
      }
    } while (puVar15 != puVar14);
  }
  func_0x000107c6142c(puVar18);
  puVar15 = (undefined *)0x0;
  puVar12 = (undefined *)0x0;
LAB_101e14cd4:
  auVar19._8_8_ = puVar12;
  auVar19._0_8_ = puVar15;
  return auVar19;
}



/* Entry: 101e15030; end: 101e1506f;  */

void FUN_101e15030(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e15070; end: 101e150ab; -[_TtC36SCMemoriesSnapDocParsingServicesImpl31MemoriesSnapDocLegacyEditParser init] */

void FUN_101e15070(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101e150dc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e150ac; end: 101e150fb;  */

void FUN_101e150ac(void)

{
  func_0x000101e150dc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e150fc; end: 101e15177; -[_TtC36SCMemoriesSnapDocParsingServicesImpl31MemoriesSnapDocLegacyEditParser getCommonLoggingParamsFrom:] */

void FUN_101e150fc(void)

{
  func_0x000103a771a0(0);
  func_0x000107c610f8();
  func_0x000103a77090(0,0,0,0,0,0,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e15178; end: 101e15183; -[_TtC36SCMemoriesSnapDocParsingServicesImpl31MemoriesSnapDocLegacyEditParser getPlaceIdFromSnapDoc:] */

void FUN_101e15178(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e153e8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e15184; end: 101e1518f; -[_TtC36SCMemoriesSnapDocParsingServicesImpl31MemoriesSnapDocLegacyEditParser getTimeZoneNameFromSnapDoc:] */

void FUN_101e15184(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*(code *)0x101e15dd4)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e15190; end: 101e15217;  */

void FUN_101e15190(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e15218; end: 101e1522b;  */

ulong FUN_101e15218(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e15310);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e15314);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126dc188;
    func_0x000107c61168(PTR_PTR_1126dc188);
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
    puVar4 = PTR_PTR_1126dc188;
    func_0x000107c61168(PTR_PTR_1126dc188);
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
  FUN_101e164ac(0,0x112e2ffd0,&PTR_PTR_1126dc188);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e153e8);
  (*pcVar2)();
}



/* Entry: 101e1522c; end: 101e153e7;  */

ulong FUN_101e1522c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e15310);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e15314);
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
  FUN_101e164ac(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e153e8);
  (*pcVar2)();
}



/* Entry: 101e153e8; end: 101e164ab;  */

undefined1  [16] FUN_101e153e8(ulong *****param_1,ulong *****param_2,undefined **param_3)

{
  ulong *****pppppuVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *****pppppuVar8;
  undefined *puVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  ulong *****pppppuVar14;
  ulong ****ppppuVar15;
  undefined **ppuVar16;
  uint uVar17;
  ulong ****ppppuVar18;
  undefined **unaff_x21;
  ulong *****unaff_x22;
  ulong *****pppppuVar19;
  ulong *****pppppuVar20;
  ulong *****unaff_x25;
  ulong *****unaff_x26;
  ulong *****pppppuVar21;
  ulong *****pppppuVar22;
  ulong *****pppppuVar23;
  ulong *****pppppuVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong ****appppuStack_188 [2];
  ulong ****appppuStack_178 [4];
  long lStack_158;
  ulong ****ppppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  ulong ****ppppuStack_138;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_128;
  ulong ****ppppuStack_120;
  ulong ****ppppuStack_118;
  ulong ****ppppuStack_110;
  ulong ****ppppuStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  ulong ****ppppuStack_d0;
  ulong uStack_c8;
  ulong ****ppppuStack_c0;
  ulong uStack_b8;
  ulong ****ppppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  ulong ****appppuStack_98 [2];
  ulong ****appppuStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15dd0);
    (*pcVar5)();
  }
  pppppuVar23 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  pppppuVar24 = (ulong *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar23 != (ulong *****)0x0) {
    appppuStack_88[0] = (ulong ****)0x0;
    param_3 = (undefined **)0x0;
    FUN_101e164ac(0,0x112d55598,&PTR_PTR_1126b25d0);
    param_2 = appppuStack_88;
    func_0x000107c5fc50(pppppuVar23);
    func_0x000107c61170(pppppuVar23);
    if ((ulong *****)appppuStack_88[0] != (ulong *****)0x0) {
      pppppuVar24 = (ulong *****)appppuStack_88[0];
    }
  }
  if ((ulong)pppppuVar24 >> 0x3e == 0) {
    pppppuVar20 = *(ulong ******)(((ulong)pppppuVar24 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pppppuVar20 = (ulong *****)((ulong)pppppuVar24 & 0xffffffffffffff8);
    if ((ulong *****)0x7fffffffffffffff < pppppuVar24) {
      pppppuVar20 = pppppuVar24;
    }
    func_0x000107c60480();
  }
  pppppuVar21 = param_2;
  if (pppppuVar20 != (ulong *****)0x0) {
    unaff_x22 = (ulong *****)0x0;
    uStack_e8 = 0;
    param_1 = (ulong *****)((ulong)pppppuVar24 & 0xc000000000000001);
    uStack_b8 = (ulong)pppppuVar24 & 0xffffffffffffff8;
    ppppuStack_c0 = (ulong ****)(pppppuVar24 + 4);
    ppppuStack_e0 = (ulong ****)pppppuVar20;
    ppppuStack_d0 = (ulong ****)pppppuVar24;
    ppppuStack_b0 = (ulong ****)param_1;
    do {
      ppuVar16 = &PTR_PTR_1126b25d0;
      if (param_1 == (ulong *****)0x0) {
        if (*(ulong ******)(uStack_b8 + 0x10) <= unaff_x22) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d2c);
          (*pcVar5)();
        }
        pppppuVar19 = (ulong *****)ppppuStack_c0[(long)unaff_x22];
        func_0x000107c61174();
      }
      else {
        pppppuVar19 = unaff_x22;
        param_2 = pppppuVar24;
        FUN_101e1522c();
        param_3 = ppuVar16;
      }
      bVar6 = SCARRY8((long)unaff_x22,1);
      unaff_x22 = (ulong *****)((long)unaff_x22 + 1);
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d20);
        (*pcVar5)();
      }
      pppppuVar21 = pppppuVar19;
      func_0x000107c4abb4();
      if ((int)pppppuVar21 == 4) {
        pppppuVar23 = pppppuVar19;
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (pppppuVar23 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15dc4);
          (*pcVar5)();
        }
        unaff_x26 = pppppuVar23;
        func_0x000107c4ce20();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar23);
        if (unaff_x26 == (ulong *****)0x0) goto LAB_101e154d0;
        pppppuVar21 = unaff_x26;
        func_0x000107c4ad28();
        func_0x000107c61180();
        if (pppppuVar21 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15dc8);
          (*pcVar5)();
        }
        pppppuVar23 = pppppuVar21;
        func_0x000107c5ee30();
        func_0x000107c61170(pppppuVar21);
        uVar3 = (uint)((ulong)param_2 >> 0x20);
        uVar17 = uVar3 >> 0x1e;
        if (1 < uVar3 >> 0x1e) {
          if (uVar17 == 2) {
            ppppuVar15 = pppppuVar23[2];
            ppppuVar12 = pppppuVar23[3];
            func_0x00010006c090(pppppuVar23);
            goto LAB_101e15600;
          }
          func_0x00010006c090(pppppuVar23);
          func_0x000107c61170(unaff_x26);
          func_0x000107c61170(pppppuVar19);
          param_1 = (ulong *****)ppppuStack_b0;
          goto LAB_101e154d8;
        }
        if (uVar17 == 0) {
          pppppuVar21 = param_2;
          func_0x00010006c090(pppppuVar23);
          pppppuVar23 = param_2;
          if (((ulong)param_2 & 0xff000000000000) == 0) {
LAB_101e155c4:
            param_2 = pppppuVar21;
            param_1 = (ulong *****)ppppuStack_b0;
            func_0x000107c61170(unaff_x26);
            func_0x000107c61170(pppppuVar19);
            goto LAB_101e154d8;
          }
        }
        else {
          func_0x00010006c090(pppppuVar23);
          ppppuVar15 = (ulong ****)(long)(int)pppppuVar23;
          ppppuVar12 = (ulong ****)((long)pppppuVar23 >> 0x20);
LAB_101e15600:
          pppppuVar21 = param_2;
          if (ppppuVar15 == ppppuVar12) goto LAB_101e155c4;
        }
        param_2 = pppppuVar21;
        pppppuVar24 = unaff_x26;
        func_0x000107c4ad28();
        func_0x000107c61180();
        puVar4 = PTR___sypN_11034f1a8;
        if (pppppuVar24 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15dcc);
          (*pcVar5)();
        }
        pppppuVar20 = pppppuVar24;
        func_0x000107c5ee30();
        func_0x000107c61170(pppppuVar24);
        pppppuVar24 = (ulong *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        pppppuVar23 = pppppuVar20;
        func_0x000107c5ee20(pppppuVar20,param_2);
        appppuStack_88[0] = (ulong ****)0x0;
        param_3 = (undefined **)pppppuVar23;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar23);
        pppppuVar23 = (ulong *****)appppuStack_88[0];
        if (pppppuVar24 == (ulong *****)0x0) {
          pppppuVar24 = (ulong *****)appppuStack_88[0];
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(pppppuVar24);
          func_0x000107c61654();
          func_0x000107c61170(unaff_x26);
          func_0x000107c61170(pppppuVar19);
          func_0x00010006c090(pppppuVar20);
          func_0x000107c614ac(pppppuVar23);
          uStack_e8 = 0;
          param_1 = (ulong *****)ppppuStack_b0;
          pppppuVar24 = (ulong *****)ppppuStack_d0;
          pppppuVar20 = (ulong *****)ppppuStack_e0;
          goto LAB_101e154d8;
        }
        func_0x000107c61174();
        func_0x000107c60234(appppuStack_88,pppppuVar24);
        func_0x000107c615e8(pppppuVar24);
        uVar7 = 0x112da99a0;
        func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
        pppppuVar23 = appppuStack_98;
        param_3 = (undefined **)(puVar4 + 8);
        func_0x000107c6147c(pppppuVar23,appppuStack_88,param_3,uVar7,6);
        ppppuVar15 = appppuStack_98[0];
        if (((ulong)pppppuVar23 & 1) == 0) {
          func_0x000107c61170(unaff_x26);
          func_0x000107c61170(pppppuVar19);
          func_0x00010006c090(pppppuVar20);
          pppppuVar23 = pppppuVar24;
          param_1 = (ulong *****)ppppuStack_b0;
          pppppuVar24 = (ulong *****)ppppuStack_d0;
          pppppuVar20 = (ulong *****)ppppuStack_e0;
          goto LAB_101e154d8;
        }
        pppppuVar24 = (ulong *****)PTR_PTR_1126bcdd8;
        func_0x000107c610f8();
        pppppuVar23 = (ulong *****)ppppuVar15;
        func_0x000107c5f9dc(ppppuVar15,PTR___ss11AnyHashableVN_11034e448,puVar4 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c6142c(ppppuVar15);
        param_3 = (undefined **)pppppuVar23;
        func_0x000107c47020();
        pppppuVar22 = param_2;
        func_0x00010006c090(pppppuVar20);
        func_0x000107c61170(pppppuVar23);
        ppppuStack_d8 = (ulong ****)pppppuVar24;
        func_0x000107c4352c();
        func_0x000107c61180();
        pppppuVar21 = pppppuVar22;
        unaff_x25 = pppppuVar19;
        if (pppppuVar24 == (ulong *****)0x0) {
LAB_101e15814:
          pppppuVar24 = (ulong *****)ppppuStack_d8;
          func_0x000107c5bddc();
          func_0x000107c61180();
          if (pppppuVar24 == (ulong *****)0x0) {
            pppppuVar8 = (ulong *****)PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_101e15a3c;
LAB_101e15864:
            unaff_x21 = *(undefined ***)(((ulong)pppppuVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            pppppuVar21 = (ulong *****)0x0;
            param_3 = &PTR_PTR_1126e0e80;
            FUN_101e164ac(0,0x112e293a0);
            pppppuVar8 = pppppuVar24;
            func_0x000107c5fc54();
            func_0x000107c61170(pppppuVar24);
            if ((ulong)pppppuVar8 >> 0x3e == 0) goto LAB_101e15864;
LAB_101e15a3c:
            unaff_x21 = (undefined **)((ulong)pppppuVar8 & 0xffffffffffffff8);
            if ((ulong *****)0x7fffffffffffffff < pppppuVar8) {
              unaff_x21 = (undefined **)pppppuVar8;
            }
            func_0x000107c60480();
          }
          pppppuVar11 = unaff_x26;
          ppppuStack_a8 = (ulong ****)unaff_x26;
          ppppuStack_a0 = (ulong ****)pppppuVar19;
          if ((ulong *****)unaff_x21 != (ulong *****)0x0) {
            pppppuVar20 = (ulong *****)0x0;
            pppppuVar11 = (ulong *****)((ulong)pppppuVar8 & 0xc000000000000001);
            uStack_c8 = (ulong)pppppuVar8 & 0xffffffffffffff8;
            do {
              if (pppppuVar11 == (ulong *****)0x0) {
                if (*(ulong ******)(uStack_c8 + 0x10) <= pppppuVar20) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d30);
                  (*pcVar5)();
                }
                pppppuVar23 = (ulong *****)pppppuVar8[(long)pppppuVar20 + 4];
                func_0x000107c61174();
                pppppuVar22 = pppppuVar21;
              }
              else {
                param_3 = &PTR_PTR_1126e0e80;
                pppppuVar23 = pppppuVar20;
                pppppuVar22 = pppppuVar8;
                FUN_101e1522c();
              }
              unaff_x25 = (ulong *****)((long)pppppuVar20 + 1);
              if (SCARRY8((long)pppppuVar20,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d24);
                (*pcVar5)();
              }
              pppppuVar24 = pppppuVar23;
              func_0x000107c453cc();
              func_0x000107c61180();
              pppppuVar21 = pppppuVar22;
              if (pppppuVar24 == (ulong *****)0x0) {
LAB_101e15888:
                func_0x000107c61170(pppppuVar23);
              }
              else {
                pppppuVar19 = pppppuVar24;
                func_0x000107c5dcac();
                func_0x000107c61180();
                func_0x000107c61170(pppppuVar24);
                pppppuVar21 = pppppuVar22;
                if (pppppuVar19 == (ulong *****)0x0) goto LAB_101e15888;
                pppppuVar24 = pppppuVar19;
                func_0x000107c5dcac();
                func_0x000107c61180();
                func_0x000107c61170(pppppuVar19);
                pppppuVar21 = pppppuVar22;
                if (pppppuVar24 == (ulong *****)0x0) goto LAB_101e15888;
                param_1 = pppppuVar24;
                func_0x000107c5dcc0();
                func_0x000107c61180();
                func_0x000107c61170(pppppuVar24);
                pppppuVar21 = pppppuVar22;
                if (param_1 == (ulong *****)0x0) goto LAB_101e15888;
                pppppuVar24 = param_1;
                func_0x000107c5faec();
                pppppuVar21 = pppppuVar22;
                func_0x000107c61170(param_1);
                func_0x000107c61170(pppppuVar23);
                uVar2 = (ulong)pppppuVar24 & 0xffffffffffff;
                if (((ulong)pppppuVar22 & 0x2000000000000000) != 0) {
                  uVar2 = (ulong)pppppuVar22 >> 0x38 & 0xf;
                }
                if (uVar2 != 0) goto LAB_101e15cf0;
                func_0x000107c6142c(pppppuVar22);
              }
              pppppuVar20 = (ulong *****)((long)pppppuVar20 + 1);
            } while (unaff_x25 != (ulong *****)unaff_x21);
          }
          func_0x000107c6142c(pppppuVar8);
          pppppuVar24 = (ulong *****)ppppuStack_d8;
          func_0x000107c3f564();
          func_0x000107c61180();
          pppppuVar8 = (ulong *****)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (pppppuVar24 != (ulong *****)0x0) {
            pppppuVar21 = (ulong *****)0x0;
            param_3 = &PTR_PTR_1126e0c30;
            FUN_101e164ac(0,0x112e30008);
            pppppuVar8 = pppppuVar24;
            func_0x000107c5fc54();
            func_0x000107c61170(pppppuVar24);
          }
          pppppuVar23 = (ulong *****)ppppuStack_a0;
          ppppuVar15 = ppppuStack_a8;
          if ((ulong)pppppuVar8 >> 0x3e == 0) {
            pppppuVar20 = *(ulong ******)(((ulong)pppppuVar8 & 0xffffffffffffff8) + 0x10);
            param_2 = pppppuVar21;
          }
          else {
            pppppuVar20 = (ulong *****)((ulong)pppppuVar8 & 0xffffffffffffff8);
            if ((ulong *****)0x7fffffffffffffff < pppppuVar8) {
              pppppuVar20 = pppppuVar8;
            }
            func_0x000107c60480();
            param_2 = pppppuVar21;
          }
          if (pppppuVar20 == (ulong *****)0x0) {
            func_0x000107c6142c(pppppuVar8);
            func_0x000107c61170(ppppuStack_d8);
            func_0x000107c61170(ppppuVar15);
            func_0x000107c61170(pppppuVar23);
            param_1 = (ulong *****)ppppuStack_b0;
            pppppuVar24 = (ulong *****)ppppuStack_d0;
            pppppuVar20 = (ulong *****)ppppuStack_e0;
            pppppuVar19 = unaff_x25;
            unaff_x26 = pppppuVar11;
          }
          else {
            unaff_x21 = (undefined **)0x0;
            unaff_x25 = (ulong *****)((ulong)pppppuVar8 & 0xc000000000000001);
            uStack_c8 = (ulong)pppppuVar8 & 0xffffffffffffff8;
            do {
              if (unaff_x25 == (ulong *****)0x0) {
                if (*(ulong ******)(uStack_c8 + 0x10) <= unaff_x21) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d38);
                  (*pcVar5)();
                }
                pppppuVar23 = (ulong *****)pppppuVar8[(long)unaff_x21 + 4];
                func_0x000107c61174();
              }
              else {
                param_3 = &PTR_PTR_1126e0c30;
                pppppuVar23 = (ulong *****)unaff_x21;
                param_2 = pppppuVar8;
                FUN_101e1522c();
              }
              pppppuVar11 = (ulong *****)((long)unaff_x21 + 1);
              if (SCARRY8((long)unaff_x21,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d28);
                (*pcVar5)();
              }
              pppppuVar24 = pppppuVar23;
              func_0x000107c4e7fc();
              func_0x000107c61180();
              if (pppppuVar24 == (ulong *****)0x0) {
LAB_101e15ae8:
                func_0x000107c61170(pppppuVar23);
              }
              else {
                pppppuVar21 = (ulong *****)0x0;
                param_3 = &PTR_PTR_1126e0c28;
                FUN_101e164ac(0,0x112e30000);
                pppppuVar19 = pppppuVar24;
                func_0x000107c5fc54();
                func_0x000107c61170(pppppuVar24);
                if ((ulong)pppppuVar19 >> 0x3e == 0) {
                  param_2 = pppppuVar21;
                  if (*(long *)(((ulong)pppppuVar19 & 0xffffffffffffff8) + 0x10) != 0)
                  goto LAB_101e15ba8;
LAB_101e15c3c:
                  func_0x000107c61170(pppppuVar23);
                }
                else {
                  pppppuVar24 = (ulong *****)((ulong)pppppuVar19 & 0xffffffffffffff8);
                  if ((ulong *****)0x7fffffffffffffff < pppppuVar19) {
                    pppppuVar24 = pppppuVar19;
                  }
                  func_0x000107c60480();
                  param_2 = pppppuVar21;
                  if (pppppuVar24 == (ulong *****)0x0) goto LAB_101e15c3c;
LAB_101e15ba8:
                  if (((ulong)pppppuVar19 & 0xc000000000000001) == 0) {
                    if (*(long *)(((ulong)pppppuVar19 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e15d34);
                      (*pcVar5)();
                    }
                    pppppuVar24 = (ulong *****)pppppuVar19[4];
                    func_0x000107c61174();
                  }
                  else {
                    pppppuVar24 = (ulong *****)0x0;
                    param_3 = &PTR_PTR_1126e0c28;
                    param_2 = pppppuVar19;
                    FUN_101e1522c();
                  }
                  func_0x000107c6142c(pppppuVar19);
                  param_1 = pppppuVar24;
                  func_0x000107c4e7c0();
                  func_0x000107c61180();
                  func_0x000107c61170(pppppuVar24);
                  if (param_1 == (ulong *****)0x0) goto LAB_101e15ae8;
                  pppppuVar24 = param_1;
                  func_0x000107c5faec();
                  pppppuVar21 = param_2;
                  func_0x000107c61170(param_1);
                  func_0x000107c61170(pppppuVar23);
                  uVar2 = (ulong)pppppuVar24 & 0xffffffffffff;
                  if (((ulong)param_2 & 0x2000000000000000) != 0) {
                    uVar2 = (ulong)param_2 >> 0x38 & 0xf;
                  }
                  pppppuVar22 = param_2;
                  pppppuVar19 = param_2;
                  if (uVar2 != 0) goto LAB_101e15cf0;
                }
                func_0x000107c6142c(pppppuVar19);
                param_2 = pppppuVar21;
              }
              pppppuVar23 = (ulong *****)ppppuStack_a0;
              ppppuVar15 = ppppuStack_a8;
              unaff_x21 = (undefined **)((long)unaff_x21 + 1);
            } while (pppppuVar11 != pppppuVar20);
            func_0x000107c6142c(pppppuVar8);
            func_0x000107c61170(ppppuStack_d8);
            func_0x000107c61170(ppppuVar15);
            func_0x000107c61170(pppppuVar23);
            param_1 = (ulong *****)ppppuStack_b0;
            pppppuVar24 = (ulong *****)ppppuStack_d0;
            pppppuVar20 = (ulong *****)ppppuStack_e0;
            pppppuVar19 = unaff_x25;
            unaff_x26 = pppppuVar11;
          }
          goto LAB_101e154d8;
        }
        pppppuVar23 = pppppuVar24;
        func_0x000107c5dcb4();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar24);
        pppppuVar21 = pppppuVar22;
        if (pppppuVar23 == (ulong *****)0x0) goto LAB_101e15814;
        unaff_x21 = (undefined **)pppppuVar23;
        func_0x000107c51cbc();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar23);
        pppppuVar21 = pppppuVar22;
        if ((ulong *****)unaff_x21 == (ulong *****)0x0) goto LAB_101e15814;
        pppppuVar24 = (ulong *****)unaff_x21;
        func_0x000107c5faec();
        pppppuVar21 = pppppuVar22;
        func_0x000107c61170(unaff_x21);
        uVar2 = (ulong)pppppuVar24 & 0xffffffffffff;
        if (((ulong)pppppuVar22 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)pppppuVar22 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
LAB_101e1580c:
          func_0x000107c6142c(pppppuVar22);
          goto LAB_101e15814;
        }
        pppppuVar8 = (ulong *****)ppppuStack_d8;
        func_0x000107c4352c();
        func_0x000107c61180();
        if (pppppuVar8 == (ulong *****)0x0) goto LAB_101e1580c;
        pppppuVar23 = pppppuVar8;
        func_0x000107c5dcb8();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar8);
        if (pppppuVar23 == (ulong *****)0x0) goto LAB_101e1580c;
        param_1 = pppppuVar23;
        func_0x000107c3ebcc();
        func_0x000107c61170(pppppuVar23);
        if ((int)param_1 == 0) goto LAB_101e1580c;
        func_0x000107c6142c(ppppuStack_d0);
        func_0x000107c61170(ppppuStack_d8);
        func_0x000107c61170(unaff_x26);
        goto LAB_101e15d14;
      }
LAB_101e154d0:
      func_0x000107c61170(pppppuVar19);
LAB_101e154d8:
      unaff_x21 = &PTR_PTR_1126b25d0;
      pppppuVar21 = param_2;
      unaff_x25 = pppppuVar19;
    } while (unaff_x22 != pppppuVar20);
  }
  param_2 = pppppuVar24;
  pppppuVar19 = param_2;
  func_0x000107c6142c();
  pppppuVar24 = (ulong *****)0x0;
  pppppuVar22 = (ulong *****)0x0;
LAB_101e15d80:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar25._8_8_ = pppppuVar22;
    auVar25._0_8_ = pppppuVar24;
    return auVar25;
  }
  func_0x000107c60e78();
  uStack_f8 = 0x101e15dd4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_150 = (ulong ****)pppppuVar24;
  ppppuStack_148 = (ulong ****)pppppuVar22;
  ppppuStack_140 = (ulong ****)unaff_x26;
  ppppuStack_138 = (ulong ****)unaff_x25;
  ppppuStack_130 = (ulong ****)pppppuVar20;
  ppppuStack_128 = (ulong ****)param_2;
  ppppuStack_120 = (ulong ****)unaff_x22;
  ppppuStack_118 = (ulong ****)unaff_x21;
  ppppuStack_110 = (ulong ****)param_1;
  ppppuStack_108 = (ulong ****)pppppuVar23;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (pppppuVar19 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101e164a8);
    (*pcVar5)();
  }
  pppppuVar23 = pppppuVar19;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar19);
  pppppuVar24 = (ulong *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar23 != (ulong *****)0x0) {
    appppuStack_178[0] = (ulong ****)0x0;
    param_3 = (undefined **)0x0;
    FUN_101e164ac(0,0x112d55598,&PTR_PTR_1126b25d0);
    pppppuVar21 = appppuStack_178;
    func_0x000107c5fc50(pppppuVar23);
    func_0x000107c61170(pppppuVar23);
    if ((ulong *****)appppuStack_178[0] != (ulong *****)0x0) {
      pppppuVar24 = (ulong *****)appppuStack_178[0];
    }
  }
  if ((ulong)pppppuVar24 >> 0x3e == 0) {
    pppppuVar23 = *(ulong ******)(((ulong)pppppuVar24 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pppppuVar23 = (ulong *****)((ulong)pppppuVar24 & 0xffffffffffffff8);
    if ((ulong *****)0x7fffffffffffffff < pppppuVar24) {
      pppppuVar23 = pppppuVar24;
    }
    func_0x000107c60480();
  }
  pppppuVar20 = pppppuVar21;
  if (pppppuVar23 != (ulong *****)0x0) {
    pppppuVar19 = (ulong *****)0x0;
    do {
      while( true ) {
        ppuVar16 = &PTR_PTR_1126b25d0;
        if (((ulong)pppppuVar24 & 0xc000000000000001) == 0) {
          if (*(ulong ******)(((ulong)pppppuVar24 & 0xffffffffffffff8) + 0x10) <= pppppuVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101e16428);
            (*pcVar5)();
          }
          pppppuVar22 = (ulong *****)pppppuVar24[(long)pppppuVar19 + 4];
          func_0x000107c61174();
        }
        else {
          pppppuVar22 = pppppuVar19;
          pppppuVar21 = pppppuVar24;
          FUN_101e1522c();
          param_3 = ppuVar16;
        }
        bVar6 = SCARRY8((long)pppppuVar19,1);
        pppppuVar19 = (ulong *****)((long)pppppuVar19 + 1);
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e16424);
          (*pcVar5)();
        }
        pppppuVar20 = pppppuVar22;
        func_0x000107c4abb4();
        if ((int)pppppuVar20 == 4) break;
LAB_101e15edc:
        func_0x000107c61170(pppppuVar22);
        pppppuVar20 = pppppuVar21;
        if (pppppuVar19 == pppppuVar23) goto LAB_101e16448;
      }
      pppppuVar20 = pppppuVar22;
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (pppppuVar20 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e1649c);
        (*pcVar5)();
      }
      pppppuVar8 = pppppuVar20;
      func_0x000107c4ce20();
      func_0x000107c61180();
      func_0x000107c61170(pppppuVar20);
      if (pppppuVar8 == (ulong *****)0x0) goto LAB_101e15edc;
      pppppuVar20 = pppppuVar8;
      func_0x000107c4ad28();
      func_0x000107c61180();
      if (pppppuVar20 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e164a0);
        (*pcVar5)();
      }
      pppppuVar11 = pppppuVar20;
      func_0x000107c5ee30();
      func_0x000107c61170(pppppuVar20);
      uVar3 = (uint)((ulong)pppppuVar21 >> 0x20);
      uVar17 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar17 != 0) {
          func_0x00010006c090(pppppuVar11);
          pppppuVar20 = pppppuVar21;
          if ((long)(int)pppppuVar11 != (long)pppppuVar11 >> 0x20) goto LAB_101e16004;
          goto LAB_101e16304;
        }
        pppppuVar20 = pppppuVar21;
        func_0x00010006c090(pppppuVar11);
        uVar2 = (ulong)pppppuVar21 & 0xff000000000000;
        pppppuVar21 = pppppuVar20;
        if (uVar2 == 0) goto LAB_101e16304;
LAB_101e16004:
        pppppuVar20 = pppppuVar8;
        func_0x000107c4ad28();
        func_0x000107c61180();
        puVar4 = PTR___sypN_11034f1a8;
        if (pppppuVar20 == (ulong *****)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e164a4);
          (*pcVar5)();
        }
        pppppuVar11 = pppppuVar20;
        func_0x000107c5ee30();
        func_0x000107c61170(pppppuVar20);
        puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        pppppuVar20 = pppppuVar11;
        func_0x000107c5ee20(pppppuVar11,pppppuVar21);
        appppuStack_178[0] = (ulong ****)0x0;
        param_3 = (undefined **)pppppuVar20;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(pppppuVar20);
        pppppuVar20 = (ulong *****)appppuStack_178[0];
        if (puVar9 == (undefined *)0x0) {
          pppppuVar14 = (ulong *****)appppuStack_178[0];
          func_0x000107c61174();
          func_0x000107c5ed30(pppppuVar20);
          func_0x000107c61170(pppppuVar14);
          func_0x000107c61654();
          func_0x000107c61170(pppppuVar8);
          func_0x000107c61170(pppppuVar22);
          func_0x00010006c090(pppppuVar11);
          func_0x000107c614ac(pppppuVar20);
        }
        else {
          func_0x000107c61174();
          func_0x000107c60234(appppuStack_178,puVar9);
          func_0x000107c615e8(puVar9);
          uVar7 = 0x112da99a0;
          func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
          pppppuVar20 = appppuStack_188;
          param_3 = (undefined **)(puVar4 + 8);
          func_0x000107c6147c(pppppuVar20,appppuStack_178,param_3,uVar7,6);
          ppppuVar15 = appppuStack_188[0];
          if (((ulong)pppppuVar20 & 1) == 0) {
            func_0x000107c61170(pppppuVar8);
            func_0x000107c61170(pppppuVar22);
            func_0x00010006c090(pppppuVar11);
          }
          else {
            pppppuVar14 = (ulong *****)PTR_PTR_1126bcdd8;
            func_0x000107c610f8();
            pppppuVar20 = (ulong *****)ppppuVar15;
            func_0x000107c5f9dc(ppppuVar15,PTR___ss11AnyHashableVN_11034e448,puVar4 + 8,
                                PTR___ss11AnyHashableVSHsWP_11034e450);
            func_0x000107c6142c(ppppuVar15);
            param_3 = (undefined **)pppppuVar20;
            func_0x000107c47020();
            func_0x00010006c090(pppppuVar11);
            func_0x000107c61170(pppppuVar20);
            pppppuVar20 = pppppuVar14;
            func_0x000107c4352c();
            func_0x000107c61180();
            if (pppppuVar20 != (ulong *****)0x0) {
              pppppuVar11 = pppppuVar20;
              func_0x000107c453a0();
              func_0x000107c61180();
              func_0x000107c61170(pppppuVar20);
              if (pppppuVar11 != (ulong *****)0x0) {
                pppppuVar21 = (ulong *****)0x0;
                param_3 = &PTR_PTR_1126e0c80;
                FUN_101e164ac(0,0x112dc0090);
                pppppuVar10 = pppppuVar11;
                func_0x000107c5fc54();
                func_0x000107c61170(pppppuVar11);
                if ((ulong)pppppuVar10 >> 0x3e == 0) {
                  pppppuVar11 = *(ulong ******)(((ulong)pppppuVar10 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  pppppuVar11 = (ulong *****)((ulong)pppppuVar10 & 0xffffffffffffff8);
                  if ((ulong *****)0x7fffffffffffffff < pppppuVar10) {
                    pppppuVar11 = pppppuVar10;
                  }
                  func_0x000107c60480();
                }
                if (pppppuVar11 != (ulong *****)0x0) {
                  ppppuVar15 = (ulong ****)0x0;
                  do {
                    if (((ulong)pppppuVar10 & 0xc000000000000001) == 0) {
                      if (*(ulong *****)(((ulong)pppppuVar10 & 0xffffffffffffff8) + 0x10) <=
                          ppppuVar15) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e16430);
                        (*pcVar5)();
                      }
                      ppppuVar12 = pppppuVar10[(long)((long)ppppuVar15 + 4)];
                      func_0x000107c61174();
                    }
                    else {
                      param_3 = &PTR_PTR_1126e0c80;
                      ppppuVar12 = ppppuVar15;
                      pppppuVar21 = pppppuVar10;
                      FUN_101e1522c();
                    }
                    pppppuVar1 = (ulong *****)((long)ppppuVar15 + 1);
                    if (SCARRY8((long)ppppuVar15,1)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e1642c);
                      (*pcVar5)();
                    }
                    ppppuVar18 = ppppuVar12;
                    func_0x000107c5d0f4();
                    if (ppppuVar18 == (ulong ****)0x1fe7ae) {
                      ppppuVar18 = ppppuVar12;
                      func_0x000107c41324();
                      func_0x000107c61180();
                      if (ppppuVar18 == (ulong ****)0x0) goto LAB_101e161ec;
                      ppppuVar13 = ppppuVar18;
                      func_0x000107c5ca28();
                      func_0x000107c61180();
                      func_0x000107c61170(ppppuVar18);
                      if (ppppuVar13 == (ulong ****)0x0) {
                        func_0x000107c61170(ppppuVar12);
                      }
                      else {
                        ppppuVar18 = ppppuVar13;
                        func_0x000107c5faec();
                        pppppuVar20 = pppppuVar21;
                        func_0x000107c61170(ppppuVar13);
                        func_0x000107c61170(ppppuVar12);
                        uVar2 = (ulong)ppppuVar18 & 0xffffffffffff;
                        if (((ulong)pppppuVar21 & 0x2000000000000000) != 0) {
                          uVar2 = (ulong)pppppuVar21 >> 0x38 & 0xf;
                        }
                        if (uVar2 != 0) {
                          func_0x000107c6142c(pppppuVar24);
                          func_0x000107c6142c(pppppuVar10);
                          func_0x000107c61170(pppppuVar14);
                          func_0x000107c61170(pppppuVar8);
                          func_0x000107c61170(pppppuVar22);
                          goto LAB_101e16458;
                        }
                        func_0x000107c6142c(pppppuVar21);
                        pppppuVar21 = pppppuVar20;
                      }
                    }
                    else {
LAB_101e161ec:
                      func_0x000107c61170(ppppuVar12);
                    }
                    ppppuVar15 = (ulong ****)((long)ppppuVar15 + 1);
                  } while (pppppuVar1 != pppppuVar11);
                  func_0x000107c6142c(pppppuVar10);
                  func_0x000107c61170(pppppuVar14);
                  pppppuVar20 = pppppuVar21;
                  goto LAB_101e16304;
                }
                func_0x000107c6142c(pppppuVar10);
              }
              func_0x000107c61170(pppppuVar14);
              func_0x000107c61170(pppppuVar8);
              goto LAB_101e15edc;
            }
            func_0x000107c61170(pppppuVar14);
            func_0x000107c61170(pppppuVar8);
            func_0x000107c61170(pppppuVar22);
          }
        }
      }
      else {
        if (uVar17 == 2) {
          ppppuVar15 = pppppuVar11[2];
          ppppuVar12 = pppppuVar11[3];
          func_0x00010006c090(pppppuVar11);
          pppppuVar20 = pppppuVar21;
          if (ppppuVar15 != ppppuVar12) goto LAB_101e16004;
        }
        else {
          func_0x00010006c090(pppppuVar11);
          pppppuVar20 = pppppuVar21;
        }
LAB_101e16304:
        func_0x000107c61170(pppppuVar8);
        func_0x000107c61170(pppppuVar22);
        pppppuVar21 = pppppuVar20;
      }
      pppppuVar20 = pppppuVar21;
    } while (pppppuVar19 != pppppuVar23);
  }
LAB_101e16448:
  func_0x000107c6142c(pppppuVar24);
  ppppuVar18 = (ulong ****)0x0;
  pppppuVar21 = (ulong *****)0x0;
LAB_101e16458:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    auVar26._8_8_ = pppppuVar21;
    auVar26._0_8_ = ppppuVar18;
    return auVar26;
  }
  func_0x000107c60e78();
  auVar27._0_8_ = *pppppuVar20;
  if (auVar27._0_8_ != (ulong ****)0x0) {
    auVar27._8_8_ = 0;
    return auVar27;
  }
  ppppuVar15 = (ulong ****)*param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *pppppuVar20 = ppppuVar15;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = ppppuVar15;
  return auVar28;
LAB_101e15cf0:
  func_0x000107c6142c(ppppuStack_d0);
  func_0x000107c6142c(pppppuVar8);
  func_0x000107c61170(ppppuStack_d8);
  func_0x000107c61170(ppppuStack_a8);
  pppppuVar19 = (ulong *****)ppppuStack_a0;
  param_2 = pppppuVar8;
  unaff_x26 = pppppuVar11;
LAB_101e15d14:
  func_0x000107c61170();
  goto LAB_101e15d80;
}



/* Entry: 101e164ac; end: 101e164eb;  */

void FUN_101e164ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e164ec; end: 101e16547; -[_TtC36SCMemoriesSnapDocParsingServicesImpl21MemoriesSnapDocParser init] */

void FUN_101e164ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocParsingServicesImpl.MemoriesSnapDocParser",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e16518);
  (*pcVar1)();
}



/* Entry: 101e16548; end: 101e1657f; -[_TtC36SCMemoriesSnapDocParsingServicesImpl21MemoriesSnapDocParser .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e16564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e16568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e16548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e30010));
  return;
}



/* Entry: 101e16580; end: 101e1659f;  */

void FUN_101e16580(void)

{
  func_0x000107c61168(&PTR_PTR_1128056c8);
  return;
}



/* Entry: 101e165a0; end: 101e165c7; -[_TtC36SCMemoriesSnapDocParsingServicesImpl21MemoriesSnapDocParser getCommonLoggingParamsFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e165a0(long param_1)

{
  func_0x000107c43f8c(*(undefined8 *)(param_1 + _DAT_112e30010));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e165c8; end: 101e16657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e165c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e30010);
  func_0x000107c441e4(lVar1,param_2,param_1);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112e30018);
    func_0x000107c441e4();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
      param_2 = 0;
      goto LAB_101e16634;
    }
  }
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
LAB_101e16634:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 101e16658; end: 101e16663; -[_TtC36SCMemoriesSnapDocParsingServicesImpl21MemoriesSnapDocParser getPlaceIdFromSnapDoc:] */

void FUN_101e16658(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e165c8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e16664; end: 101e166f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e16664(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e30010);
  func_0x000107c44328(lVar1,param_2,param_1);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112e30018);
    func_0x000107c44328();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
      param_2 = 0;
      goto LAB_101e166d0;
    }
  }
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
LAB_101e166d0:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 101e166f4; end: 101e166ff; -[_TtC36SCMemoriesSnapDocParsingServicesImpl21MemoriesSnapDocParser getTimeZoneNameFromSnapDoc:] */

void FUN_101e166f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e16664(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e16700; end: 101e1678b;  */

void FUN_101e16700(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e1678c; end: 101e167ab;  */

void FUN_101e1678c(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101e167ac; end: 101e1683f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e167ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  uVar1 = 0;
  func_0x000101e144b4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  func_0x000101e150dc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  FUN_101e16580();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e30010) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112e30018) = uVar2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 101e16840; end: 101e1684f;  */

void FUN_101e16840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e16850; end: 101e168c3;  */

void FUN_101e16850(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e30048,&UNK_10da18c60);
  func_0x000107c613fc();
  pcVar1 = FUN_101e167ac;
  func_0x0001000bdd8c(FUN_101e167ac,0);
  uVar2 = 0;
  func_0x00010028d83c(0);
  func_0x000107c610f8();
  func_0x000100799bf0(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101e168c4; end: 101e1694b;  */

void FUN_101e168c4(void)

{
  long lVar1;
  char cStack_40;
  undefined7 uStack_3f;
  
  func_0x000100087bd4(&cStack_40,FUN_101e169c8);
  if (cStack_40 == '\x01') {
    func_0x0001000d224c(&cStack_40);
    lVar1 = CONCAT71(uStack_3f,cStack_40);
    if (lVar1 != 0) {
      func_0x000107c4feb8(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101e1694c; end: 101e169a7;  */

void FUN_101e1694c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e169a8; end: 101e169c7;  */

void FUN_101e169a8(void)

{
  FUN_101e168c4();
  return;
}



/* Entry: 101e169c8; end: 101e169e7;  */

void FUN_101e169c8(undefined1 *param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x28) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *param_1 = 1;
  return;
}



/* Entry: 101e169e8; end: 101e16a2b;  */

void FUN_101e169e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e16a2c; end: 101e16b6b;  */

void FUN_101e16a2c(char param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = (int)&uStack_50;
  uStack_48 = param_2;
  func_0x000107c614b0(param_2);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = &uStack_48;
  func_0x000107c6147c(&uStack_50,puVar3,uVar6,&UNK_1106c51c8,6);
  if (iVar1 == 0) {
    puVar3 = (undefined8 *)0xe700000000000000;
    uVar6 = 0x4e574f4e4b4e55;
  }
  else {
    uVar6 = uStack_50;
    FUN_101e16b6c(uStack_50);
    func_0x000101d891ac(uStack_50);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == '\0') {
    uVar5 = 0xe600000000000000;
    uVar2 = 0x70756b636162;
  }
  else {
    uVar2 = 0x74726f707865;
    if (param_1 != '\x01') {
      uVar2 = 0x646e6573;
    }
    uVar5 = 0xe600000000000000;
    if (param_1 != '\x01') {
      uVar5 = 0xe400000000000000;
    }
  }
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fadc(uVar6,puVar3);
  func_0x000107c6142c(puVar3);
  func_0x0001058db854(uVar4,uVar2,uVar6,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101e16b6c; end: 101e16d7b;  */

undefined1  [16] FUN_101e16b6c(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = 0xe900000000000044;
  uVar2 = 0x454c54544f524854;
  switch(param_1) {
  case 1:
    auVar5._8_8_ = 0x800000010f012900;
    auVar5._0_8_ = 0xd000000000000020;
    return auVar5;
  case 2:
    auVar9._8_8_ = 0x800000010f0128d0;
    auVar9._0_8_ = 0xd000000000000021;
    return auVar9;
  case 3:
    pcVar4 = "FAILED_TO_MASTER_KEY_DECRYPT_SNAP_DOC";
    break;
  case 4:
    pcVar4 = "FAILED_TO_MASTER_KEY_ENCRYPT_SNAP_DOC";
    break;
  case 5:
    pcVar4 = "NIL_SNAPDOC_EDITOR";
    goto code_r0x000101e16c7c;
  case 6:
    pcVar4 = "MISSING_BASE_MEDIA";
code_r0x000101e16c7c:
    auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000012;
    return auVar10;
  case 7:
    auVar11._8_8_ = 0x800000010f011960;
    auVar11._0_8_ = 0xd000000000000014;
    return auVar11;
  case 8:
    auVar8._8_8_ = 0x800000010f012810;
    auVar8._0_8_ = 0xd000000000000010;
    return auVar8;
  case 10:
    auVar6._8_8_ = 0x800000010f0127f0;
    auVar6._0_8_ = 0xd00000000000001b;
    return auVar6;
  case 0xb:
    uVar3 = 0x800000010f0127b0;
    uVar2 = 0xd00000000000001a;
  case 9:
    auVar12._8_8_ = uVar3;
    auVar12._0_8_ = uVar2;
    return auVar12;
  default:
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x16);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0xd000000000000014;
    uStack_28 = 0x800000010f012850;
    if (param_1 == 0) {
      uStack_40 = 0xe700000000000000;
    }
    else {
      func_0x000107c614cc(param_1,auStack_38,auStack_50);
      FUN_101e16d7c(uStack_48,uStack_40);
    }
    func_0x000107c5fb78();
    func_0x000107c6142c(uStack_40);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = uStack_30;
    return auVar1;
  }
  auVar7._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar7._0_8_ = 0xd000000000000025;
  return auVar7;
}



/* Entry: 101e16d7c; end: 101e1723f;  */

undefined1  [16] FUN_101e16d7c(undefined **param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 extraout_x8;
  char *pcVar7;
  long extraout_x12;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **appuStack_60 [4];
  
  puVar10 = param_1[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuVar5 = (undefined **)((long)appuStack_60 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(puVar10 + 0x10))(ppuVar5,extraout_x8,param_1);
  ppuVar2 = ppuVar5;
  func_0x000107c605a0(ppuVar5,param_1,param_2);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(puVar10 + 0x20))(param_2,ppuVar5,param_1);
  }
  else {
    (**(code **)(puVar10 + 8))(ppuVar5);
    ppuVar5 = param_1;
  }
  ppuVar3 = ppuVar2;
  func_0x000107c5ed2c();
  func_0x000107c614ac(ppuVar2);
  ppuVar2 = ppuVar3;
  func_0x000107c42210();
  func_0x000107c61180();
  ppuVar4 = ppuVar2;
  func_0x000107c5faec();
  ppuVar6 = ppuVar5;
  func_0x000107c61170(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar2 && ppuVar5 == ppuVar6) {
    ppuVar9 = ppuVar6;
    func_0x000107c6142c(ppuVar5);
    func_0x000107c6142c(ppuVar6);
LAB_101e16fa4:
    ppuVar2 = ppuVar3;
    func_0x000107c3fcb0(ppuVar3);
    appuStack_60[2] = (undefined **)0x0;
    appuStack_60[3] = (undefined **)0xe000000000000000;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(appuStack_60[3]);
    appuStack_60[2] = (undefined **)0x4e45525f50414e53;
    appuStack_60[3] = (undefined **)0xef5f5f5245524544;
    func_0x000101e17240(ppuVar2);
  }
  else {
    ppuVar9 = ppuVar5;
    func_0x000107c605b8(ppuVar4,ppuVar5,ppuVar2,ppuVar6,0);
    func_0x000107c6142c(ppuVar5);
    func_0x000107c6142c(ppuVar6);
    if (((ulong)ppuVar4 & 1) != 0) goto LAB_101e16fa4;
    ppuVar2 = ppuVar3;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar5 = ppuVar2;
    func_0x000107c5faec();
    ppuVar4 = ppuVar9;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e09198;
    func_0x000107c5faec();
    if (ppuVar5 == ppuVar2 && ppuVar9 == ppuVar4) {
      ppuVar6 = ppuVar4;
      func_0x000107c6142c(ppuVar9);
      func_0x000107c6142c(ppuVar4);
LAB_101e1703c:
      ppuVar2 = ppuVar3;
      func_0x000107c3fcb0(ppuVar3);
      appuStack_60[2] = (undefined **)0x0;
      appuStack_60[3] = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1f);
      func_0x000107c6142c(appuStack_60[3]);
      appuStack_60[2] = (undefined **)0xd00000000000001d;
      appuStack_60[3] = (undefined **)0x800000010f0129e0;
      func_0x000101e17468(ppuVar2);
      ppuVar9 = ppuVar6;
    }
    else {
      ppuVar6 = ppuVar9;
      func_0x000107c605b8(ppuVar5,ppuVar9,ppuVar2,ppuVar4,0);
      func_0x000107c6142c(ppuVar9);
      func_0x000107c6142c(ppuVar4);
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_101e1703c;
      ppuVar2 = ppuVar3;
      func_0x000107c42210();
      func_0x000107c61180();
      ppuVar5 = ppuVar2;
      func_0x000107c5faec();
      ppuVar4 = ppuVar6;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = &PTR____CFConstantStringClassReference_110ec5158;
      func_0x000107c5faec();
      if ((ppuVar5 == ppuVar2) && (ppuVar6 == ppuVar4)) {
        func_0x000107c6142c(ppuVar6);
        func_0x000107c6142c(ppuVar4);
LAB_101e170bc:
        uVar8 = 0xd000000000000011;
        ppuVar2 = ppuVar3;
        func_0x000107c3fcb0();
        appuStack_60[2] = (undefined **)0x0;
        appuStack_60[3] = (undefined **)0xe000000000000000;
        func_0x000107c602fc(0x25);
        func_0x000107c6142c(appuStack_60[3]);
        appuStack_60[2] = (undefined **)0xd000000000000023;
        appuStack_60[3] = (undefined **)0x800000010f012950;
        if ((long)ppuVar2 < 3) {
          if (ppuVar2 == (undefined **)0x1) {
            pcVar7 = "INVALID_PARAMETER";
            goto LAB_101e17204;
          }
          if (ppuVar2 == (undefined **)0x2) {
            ppuVar9 = (undefined **)0xec0000004552554c;
            uVar8 = 0x4941465f45564153;
          }
          else {
LAB_101e17210:
            ppuVar9 = (undefined **)0xe700000000000000;
            uVar8 = 0x4e574f4e4b4e55;
          }
        }
        else if (ppuVar2 == (undefined **)0x3) {
          pcVar7 = "RETRIEVAL_FAILURE";
LAB_101e17204:
          ppuVar9 = (undefined **)((ulong)(pcVar7 + -0x20) | 0x8000000000000000);
        }
        else if (ppuVar2 == (undefined **)0x4) {
          ppuVar9 = (undefined **)0x800000010f012980;
          uVar8 = 0xd000000000000010;
        }
        else {
          if (ppuVar2 != (undefined **)0x5) goto LAB_101e17210;
          ppuVar9 = (undefined **)0xe800000000000000;
          uVar8 = 0x464c45535f4c494e;
        }
        func_0x000107c5fb78(uVar8,ppuVar9);
        func_0x000107c61170(ppuVar3);
        goto LAB_101e1700c;
      }
      ppuVar9 = ppuVar6;
      func_0x000107c605b8(ppuVar5,ppuVar6,ppuVar2,ppuVar4,0);
      func_0x000107c6142c(ppuVar6);
      func_0x000107c6142c(ppuVar4);
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_101e170bc;
      ppuVar2 = ppuVar3;
      func_0x000107c42210();
      func_0x000107c61180();
      ppuVar5 = ppuVar2;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar2);
      appuStack_60[2] = ppuVar5;
      appuStack_60[3] = ppuVar9;
      func_0x000107c5fb78(0x5f5f,0xe200000000000000);
      ppuVar2 = ppuVar3;
      func_0x000107c3fcb0();
      ppuVar9 = (undefined **)PTR___sSis23CustomStringConvertiblesWP_11034df00;
      appuStack_60[1] = ppuVar2;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    }
  }
  func_0x000107c5fb78();
  func_0x000107c61170(ppuVar3);
LAB_101e1700c:
  func_0x000107c6142c(ppuVar9);
  auVar1._8_8_ = appuStack_60[3];
  auVar1._0_8_ = appuStack_60[2];
  return auVar1;
}



/* Entry: 101e17240; end: 101e176b3;  */

undefined1  [16] FUN_101e17240(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar2 = 0xed00005455505455;
  uVar1 = 0x4f5f5245444e4552;
  switch(param_1) {
  case 3:
    auVar4._8_8_ = 0x800000010f012c00;
    auVar4._0_8_ = 0xd000000000000015;
    return auVar4;
  default:
    uVar2 = 0xe700000000000000;
    uVar1 = 0x4e574f4e4b4e55;
  case 5:
    auVar10._8_8_ = uVar2;
    auVar10._0_8_ = uVar1;
    return auVar10;
  case 6:
    auVar11._8_8_ = 0x800000010f012b00;
    auVar11._0_8_ = 0xd000000000000013;
    return auVar11;
  case 7:
    pcVar3 = "RENDER_LENS_PROCESSING";
    break;
  case 8:
    auVar7._8_8_ = 0x800000010f012ab0;
    auVar7._0_8_ = 0xd000000000000022;
    return auVar7;
  case 9:
    auVar9._8_8_ = 0x800000010f012a80;
    auVar9._0_8_ = 0xd000000000000026;
    return auVar9;
  case 10:
    pcVar3 = "NO_RENDERING_NECESSARY";
    break;
  case 0xb:
    auVar13._8_8_ = 0x800000010f012a40;
    auVar13._0_8_ = 0xd000000000000012;
    return auVar13;
  case 0xc:
    auVar16._8_8_ = 0x800000010f012a20;
    auVar16._0_8_ = 0xd000000000000014;
    return auVar16;
  case 0xd:
    pcVar3 = "VIDEO_INPUTS_WARMING_UP_FAILED";
    goto code_r0x000101e17410;
  case 0x1d:
    auVar6._8_8_ = 0x800000010f012be0;
    auVar6._0_8_ = 0xd00000000000001b;
    return auVar6;
  case 0x1e:
    pcVar3 = "SNAP_DOC_INVALID_MEDIA_INPUTS";
    goto code_r0x000101e173e4;
  case 0x1f:
    auVar8._8_8_ = 0x800000010f012ba0;
    auVar8._0_8_ = 0xd00000000000001f;
    return auVar8;
  case 0x20:
    auVar5._8_8_ = 0x800000010f012b80;
    auVar5._0_8_ = 0xd000000000000017;
    return auVar5;
  case 0x21:
    pcVar3 = "SNAP_DOC_MEDIA_SEGMENT_FAILED";
code_r0x000101e173e4:
    auVar14._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = 0xd00000000000001d;
    return auVar14;
  case 0x22:
    pcVar3 = "SNAP_DOC_INVALID_CT_ITEM_EDITS";
code_r0x000101e17410:
    auVar15._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar15._0_8_ = 0xd00000000000001e;
    return auVar15;
  case 0x23:
    auVar17._8_8_ = 0x800000010f012b20;
    auVar17._0_8_ = 0xd000000000000019;
    return auVar17;
  }
  auVar12._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  auVar12._0_8_ = 0xd000000000000016;
  return auVar12;
}



/* Entry: 101e176b4; end: 101e17713; -[_TtC40SCMemoriesSnapDocTranscodingServicesImpl37MemoriesSnapDocTranscodingManagerImpl init] */

void FUN_101e176b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocTranscodingServicesImpl.MemoriesSnapDocTranscodingManagerImpl"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e176e0);
  (*pcVar1)();
}



/* Entry: 101e17714; end: 101e177ab; -[_TtC40SCMemoriesSnapDocTranscodingServicesImpl37MemoriesSnapDocTranscodingManagerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e17730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e17750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e17780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e17754) */
/* WARNING: Removing unreachable block (ram,0x000101e17734) */
/* WARNING: Removing unreachable block (ram,0x000101e17784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e30278));
  return;
}



/* Entry: 101e177ac; end: 101e177cb;  */

void FUN_101e177ac(void)

{
  func_0x000107c61168(&PTR_PTR_112805790);
  return;
}



/* Entry: 101e177cc; end: 101e1797f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e177cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46814();
  func_0x000107c61170(param_2);
  plVar1 = (long *)(unaff_x20 + _DAT_112e30298);
  plVar3 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar7 = *(undefined8 *)(*plVar3 + 0x10);
  uVar4 = 0x70756b636162;
  func_0x000107c5fadc(0x70756b636162,0xe600000000000000);
  func_0x0001058db56c(uVar7,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e302e0,&UNK_10da18e68);
  puVar5 = &UNK_11048a480;
  func_0x000107c613fc(&UNK_11048a480,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  FUN_101e19240(plVar1,auStack_78);
  puVar6 = &UNK_11048a4a8;
  func_0x000107c613fc(&UNK_11048a4a8,0x58,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined **)(puVar6 + 0x20) = puVar2;
  puVar6[0x28] = 0;
  FUN_101e19284(auStack_78,puVar6 + 0x30);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar2);
  uVar4 = 0x21;
  func_0x000104887c7c(0x21,0,0x48,4,0xd000000000000023,0x800000010f012e50,&UNK_10da18e78,puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar6);
  return uVar4;
}



/* Entry: 101e17980; end: 101e179a3;  */

void FUN_101e17980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined1 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e179a4,0,0);
  return;
}



/* Entry: 101e179a4; end: 101e17a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e179a4(void)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *unaff_x19;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x22;
  ulong unaff_x29;
  ulong uVar21;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_30;
  code *pcStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lVar17 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar17 + 0x10,unaff_x22 + 0x10,0,0);
  puVar10 = (undefined8 *)(lVar17 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x50) = puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    func_0x000101e19358();
    func_0x000107c613f8(&UNK_1106c51c8,puVar10,0,0);
    *puVar10 = 7;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101e17a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar7 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101e17a78;
  lVar17 = *(long *)(unaff_x22 + 0x38);
  lVar16 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x68);
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar5 = (long *)&stack0xffffffffffffffe0;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7[0x19] = 8;
  plVar7[0x1a] = (long)puVar10;
  *(undefined1 *)(plVar7 + 0x28) = uVar2;
  plVar7[0x17] = 0;
  plVar7[0x18] = lVar16;
  plVar7[0x16] = lVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    pcVar4 = FUN_101e17ccc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101e17ccc;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = *(long **)(plVar7[0x1a] + _DAT_112e30280);
  plVar11 = plVar7 + 5;
  *plVar11 = 7;
  plVar8 = (long *)0xa0;
  func_0x000107c615b8();
  plVar7[0x1b] = (long)plVar8;
  plVar12 = plVar8;
  func_0x000101e19358();
  plVar7[0x1c] = (long)plVar12;
  *plVar8 = (long)plVar7;
  plVar8[1] = (long)FUN_101e17d88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    plVar9 = plVar7 + 4;
    plVar7 = plVar7 + 6;
    uVar21 = uStack_30 & 0xefffffffffffffff;
    pcVar4 = pcStack_28;
LAB_104876574:
    *(long **)((long)plVar5 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar5 + -0x10) = uVar21 | 0x1000000000000000;
    *(code **)((long)plVar5 + -8) = pcVar4;
    *(long **)((long)plVar5 + -0x18) = plVar8;
    plVar8[0xb] = (long)plVar12;
    plVar8[0xc] = (long)plVar7;
    plVar8[9] = (long)plVar11;
    plVar8[10] = (long)&UNK_1106c51c8;
    plVar8[8] = (long)plVar9;
    lVar16 = *plVar18;
    plVar8[0xd] = (long)&PTR_DAT_1106c5148;
    lVar17 = 0x10;
    _swift_task_alloc();
    plVar8[0xe] = lVar17;
    lVar17 = *(long *)(lVar16 + 0x50);
    plVar8[0xf] = lVar17;
    lVar17 = *(long *)(lVar17 + -8);
    plVar8[0x10] = lVar17;
    plVar7 = (long *)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    plVar8[0x11] = (long)plVar7;
    puVar10 = (undefined8 *)0x70;
    _swift_task_alloc();
    plVar8[0x12] = (long)puVar10;
    *puVar10 = plVar8;
    puVar10[1] = &UNK_104876614;
    puVar1 = *(ulong **)((long)plVar5 + -0x10);
    uStack_118 = *(undefined8 *)((long)plVar5 + -8);
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
    plVar5 = &lStack_70;
    pcStack_58 = FUN_101e17d88;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar7;
    plVar7 = (long *)*plVar7;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0xd8));
    if (plVar18 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        pcVar4 = FUN_101e17e24;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      pcVar4 = FUN_101e18aa4;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101e17e24;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7[0x1d] = plVar7[4];
    plVar18 = *(long **)(plVar7[0x1a] + _DAT_112e30288);
    plVar14 = plVar7 + 8;
    *plVar14 = 7;
    plVar8 = (long *)0xa0;
    plStack_90 = plVar11;
    plStack_88 = plVar7;
    func_0x000107c615b8();
    plVar7[0x1e] = (long)plVar8;
    *plVar8 = (long)plVar7;
    plVar8[1] = (long)FUN_101e17ee0;
    plVar12 = (long *)plVar7[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      plVar9 = plVar7 + 7;
      plVar7 = plVar7 + 9;
      uVar21 = uStack_80 & 0xefffffffffffffff;
      plVar11 = plVar14;
      unaff_x19 = plStack_90;
      pcVar4 = pcStack_78;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar5 = &lStack_c0;
    pcStack_a8 = FUN_101e17ee0;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_b8 = *plVar7;
    plVar7 = (long *)*plVar7;
    func_0x000107c615c0(*(undefined8 *)(lStack_b8 + 0xf0));
    if (plVar18 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
        pcVar4 = FUN_101e17f7c;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
      pcVar4 = (code *)0x101e18b00;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_b0 | 0x1000000000000000;
    pcStack_c8 = FUN_101e17f7c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7[0x1f] = plVar7[7];
    plVar18 = *(long **)(plVar7[0x1a] + _DAT_112e30290);
    plVar11 = plVar7 + 0xb;
    *plVar11 = 7;
    plVar8 = (long *)0xa0;
    plStack_e0 = plVar14;
    plStack_d8 = plVar7;
    func_0x000107c615b8();
    plVar7[0x20] = (long)plVar8;
    *plVar8 = (long)plVar7;
    plVar8[1] = (long)FUN_101e18038;
    plVar12 = (long *)plVar7[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      plVar9 = plVar7 + 10;
      plVar7 = plVar7 + 0xc;
      uVar21 = uStack_d0 & 0xefffffffffffffff;
      unaff_x19 = plStack_e0;
      pcVar4 = pcStack_c8;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
    plVar5 = &lStack_110;
    pcStack_f8 = FUN_101e18038;
    puVar1 = &uStack_100;
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_108 = *plVar7;
    plVar7 = (long *)*plVar7;
    func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0x100));
    if (plVar18 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
        pcVar4 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
      pcVar4 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_118 = 0x101e180d4;
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7[0x21] = plVar7[10];
    plVar18 = *(long **)(plVar7[0x1a] + _DAT_112e30278);
    puVar10 = (undefined8 *)0x70;
    func_0x000107c615b8();
    plVar7[0x22] = (long)puVar10;
    *puVar10 = plVar7;
    puVar10[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *plVar7;
      func_0x000107c615c0(*(undefined8 *)(*plVar7 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        func_0x000107c60e78();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar19 = *(undefined8 *)(lVar16 + 0xd0);
        uVar15 = *(undefined8 *)(lVar16 + 0xb0);
        lVar20 = *(long *)(lVar16 + 0x10);
        lVar17 = lVar20;
        func_0x000107c4a040();
        *(char *)(lVar16 + 0x141) = (char)lVar17;
        func_0x000107c615e8(lVar20);
        FUN_101e1a4e0(lVar17,uVar19,uVar15);
        *(long *)(lVar16 + 0x118) = lVar17;
        if (lVar17 == 0) {
          *(undefined8 *)(lVar16 + 0x68) = 3;
          iVar6 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar6 != 0) {
            func_0x000107c61658(lVar16 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar16 + 0xe0));
          }
          uVar19 = *(undefined8 *)(lVar16 + 0x108);
          uVar15 = *(undefined8 *)(lVar16 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar16 + 0xf8));
          func_0x000107c615e8(uVar19);
          func_0x000107c615e8(uVar15);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar16 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar17 == 0) goto LAB_101e18444;
          cVar3 = *(char *)(lVar16 + 0x140);
          lVar20 = lVar17;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar17);
          if ((int)lVar20 == 0 || cVar3 == '\0') {
            lVar17 = *(long *)(lVar16 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar4)();
            }
          }
          else {
            lVar17 = *(long *)(lVar16 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar4)();
            }
          }
          *(long *)(lVar16 + 0x120) = lVar17;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar4)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar16 + 0x70);
          uVar15 = *(undefined8 *)(lVar16 + 0x70);
          lVar20 = lVar17;
          func_0x000100759c94(lVar17,uVar15);
          *(long *)(lVar16 + 0x128) = lVar20;
          func_0x000107c61170(uVar15);
          func_0x000107c61170(lVar17);
          plVar7 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar16 + 0x130) = plVar7;
          *plVar7 = lVar16;
          plVar7[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar4)();
      }
      pcVar4 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar7 = plVar7 + 2;
  }
  *(ulong *)((long)plVar5 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar5 + -8) = uStack_118;
  *(undefined8 **)((long)plVar5 + -0x18) = puVar10;
  puVar10[5] = plVar7;
  puVar10[6] = plVar18;
  lVar16 = *(long *)(*plVar18 + 0x50);
  puVar10[7] = lVar16;
  lVar17 = 0;
  __sSqMa(0,lVar16);
  puVar10[8] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  puVar10[9] = lVar17;
  uVar21 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar10[10] = uVar21;
  lVar17 = *(long *)(lVar16 + -8);
  puVar10[0xb] = lVar17;
  uVar21 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar10[0xc] = uVar21;
  pcVar4 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101e17a78; end: 101e17ad7;  */

void FUN_101e17a78(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e17ad8;
  }
  else {
    pcVar1 = FUN_101e17bb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e17ad8; end: 101e17bb3;  */

void FUN_101e17ad8(void)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  plVar3 = *(long **)(unaff_x22 + 0x48);
  cVar2 = *(char *)(unaff_x22 + 0x68);
  func_0x0001000a8868(plVar3,plVar3[3]);
  uVar5 = *(undefined8 *)(*plVar3 + 0x10);
  uVar1 = 0x74726f707865;
  if (cVar2 != '\x01') {
    uVar1 = 0x646e6573;
  }
  uVar6 = 0xe600000000000000;
  if (cVar2 != '\x01') {
    uVar6 = 0xe400000000000000;
  }
  uVar4 = 0x70756b636162;
  if (cVar2 != '\0') {
    uVar4 = uVar1;
  }
  uVar1 = 0xe600000000000000;
  if (cVar2 != '\0') {
    uVar1 = uVar6;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x28);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001058db6e0(uVar5,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  *puVar8 = uVar7;
                    /* WARNING: Could not recover jumptable at 0x000101e17bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e17bb4; end: 101e17c5b;  */

void FUN_101e17bb4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
  func_0x000101e19358();
  puVar4 = &UNK_1106c51c8;
  func_0x000107c613f8(&UNK_1106c51c8,param_1,0,0);
  *param_1 = uVar5;
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c614b0(puVar4);
  FUN_101e16a2c(uVar3,puVar4);
  func_0x000107c61654();
  func_0x000107c614ac(puVar4);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e17c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e17c5c; end: 101e17ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17c5c(long param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x19;
  long *plVar13;
  long lVar14;
  long unaff_x20;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x22;
  ulong unaff_x29;
  ulong uVar19;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar4 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x19] = param_4;
  unaff_x22[0x1a] = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x28) = param_5;
  unaff_x22[0x17] = param_2;
  unaff_x22[0x18] = param_3;
  unaff_x22[0x16] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    pcVar3 = FUN_101e17ccc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101e17ccc;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = *(long **)(unaff_x22[0x1a] + _DAT_112e30280);
  plVar7 = unaff_x22 + 5;
  *plVar7 = 7;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x1b] = (long)puVar6;
  puVar11 = puVar6;
  func_0x000101e19358();
  unaff_x22[0x1c] = (long)puVar11;
  *puVar6 = unaff_x22;
  puVar6[1] = FUN_101e17d88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    plVar8 = unaff_x22 + 4;
    plVar10 = unaff_x22 + 6;
    uVar19 = uStack_30 & 0xefffffffffffffff;
    pcVar3 = pcStack_28;
LAB_104876574:
    *(long **)((long)plVar4 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar4 + -0x10) = uVar19 | 0x1000000000000000;
    *(code **)((long)plVar4 + -8) = pcVar3;
    *(undefined8 **)((long)plVar4 + -0x18) = puVar6;
    puVar6[0xb] = puVar11;
    puVar6[0xc] = plVar10;
    puVar6[9] = plVar7;
    puVar6[10] = &UNK_1106c51c8;
    puVar6[8] = plVar8;
    lVar14 = *plVar15;
    puVar6[0xd] = &PTR_DAT_1106c5148;
    uVar9 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar9;
    lVar14 = *(long *)(lVar14 + 0x50);
    puVar6[0xf] = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    puVar6[0x10] = lVar14;
    plVar10 = (long *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar10;
    puVar11 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = puVar11;
    *puVar11 = puVar6;
    puVar11[1] = &UNK_104876614;
    puVar1 = *(ulong **)((long)plVar4 + -0x10);
    uStack_118 = *(undefined8 *)((long)plVar4 + -8);
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
    plVar4 = &lStack_70;
    pcStack_58 = FUN_101e17d88;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = (long *)*unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        pcVar3 = FUN_101e17e24;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      pcVar3 = FUN_101e18aa4;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101e17e24;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[0x1d] = plVar10[4];
    plVar15 = *(long **)(plVar10[0x1a] + _DAT_112e30288);
    plVar13 = plVar10 + 8;
    *plVar13 = 7;
    puVar6 = (undefined8 *)0xa0;
    plStack_90 = plVar7;
    plStack_88 = plVar10;
    func_0x000107c615b8();
    plVar10[0x1e] = (long)puVar6;
    *puVar6 = plVar10;
    puVar6[1] = FUN_101e17ee0;
    puVar11 = (undefined8 *)plVar10[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      plVar8 = plVar10 + 7;
      plVar10 = plVar10 + 9;
      uVar19 = uStack_80 & 0xefffffffffffffff;
      plVar7 = plVar13;
      unaff_x19 = plStack_90;
      pcVar3 = pcStack_78;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar4 = &lStack_c0;
    pcStack_a8 = FUN_101e17ee0;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_b8 = *plVar10;
    plVar10 = (long *)*plVar10;
    func_0x000107c615c0(*(undefined8 *)(lStack_b8 + 0xf0));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
        pcVar3 = FUN_101e17f7c;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
      pcVar3 = (code *)0x101e18b00;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_b0 | 0x1000000000000000;
    pcStack_c8 = FUN_101e17f7c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[0x1f] = plVar10[7];
    plVar15 = *(long **)(plVar10[0x1a] + _DAT_112e30290);
    plVar7 = plVar10 + 0xb;
    *plVar7 = 7;
    puVar6 = (undefined8 *)0xa0;
    plStack_e0 = plVar13;
    plStack_d8 = plVar10;
    func_0x000107c615b8();
    plVar10[0x20] = (long)puVar6;
    *puVar6 = plVar10;
    puVar6[1] = FUN_101e18038;
    puVar11 = (undefined8 *)plVar10[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      plVar8 = plVar10 + 10;
      plVar10 = plVar10 + 0xc;
      uVar19 = uStack_d0 & 0xefffffffffffffff;
      unaff_x19 = plStack_e0;
      pcVar3 = pcStack_c8;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
    plVar4 = &lStack_110;
    pcStack_f8 = FUN_101e18038;
    puVar1 = &uStack_100;
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_108 = *plVar10;
    plVar10 = (long *)*plVar10;
    func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0x100));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
        pcVar3 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
      pcVar3 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_118 = 0x101e180d4;
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[0x21] = plVar10[10];
    plVar15 = *(long **)(plVar10[0x1a] + _DAT_112e30278);
    puVar11 = (undefined8 *)0x70;
    func_0x000107c615b8();
    plVar10[0x22] = (long)puVar11;
    *puVar11 = plVar10;
    puVar11[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *plVar10;
      func_0x000107c615c0(*(undefined8 *)(*plVar10 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar16 = *(undefined8 *)(lVar17 + 0xd0);
        uVar9 = *(undefined8 *)(lVar17 + 0xb0);
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar14 = lVar18;
        func_0x000107c4a040();
        *(char *)(lVar17 + 0x141) = (char)lVar14;
        func_0x000107c615e8(lVar18);
        FUN_101e1a4e0(lVar14,uVar16,uVar9);
        *(long *)(lVar17 + 0x118) = lVar14;
        if (lVar14 == 0) {
          *(undefined8 *)(lVar17 + 0x68) = 3;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            func_0x000107c61658(lVar17 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar17 + 0xe0));
          }
          uVar16 = *(undefined8 *)(lVar17 + 0x108);
          uVar9 = *(undefined8 *)(lVar17 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xf8));
          func_0x000107c615e8(uVar16);
          func_0x000107c615e8(uVar9);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar17 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar14 == 0) goto LAB_101e18444;
          cVar2 = *(char *)(lVar17 + 0x140);
          lVar18 = lVar14;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar14);
          if ((int)lVar18 == 0 || cVar2 == '\0') {
            lVar14 = *(long *)(lVar17 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar3)();
            }
          }
          else {
            lVar14 = *(long *)(lVar17 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar3)();
            }
          }
          *(long *)(lVar17 + 0x120) = lVar14;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar3)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar17 + 0x70);
          uVar9 = *(undefined8 *)(lVar17 + 0x70);
          lVar18 = lVar14;
          func_0x000100759c94(lVar14,uVar9);
          *(long *)(lVar17 + 0x128) = lVar18;
          func_0x000107c61170(uVar9);
          func_0x000107c61170(lVar14);
          plVar7 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar17 + 0x130) = plVar7;
          *plVar7 = lVar17;
          plVar7[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar3)();
      }
      pcVar3 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar10 = plVar10 + 2;
  }
  *(ulong *)((long)plVar4 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar4 + -8) = uStack_118;
  *(undefined8 **)((long)plVar4 + -0x18) = puVar11;
  puVar11[5] = plVar10;
  puVar11[6] = plVar15;
  lVar17 = *(long *)(*plVar15 + 0x50);
  puVar11[7] = lVar17;
  lVar14 = 0;
  __sSqMa(0,lVar17);
  puVar11[8] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  puVar11[9] = lVar14;
  uVar19 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar11[10] = uVar19;
  lVar14 = *(long *)(lVar17 + -8);
  puVar11[0xb] = lVar14;
  uVar19 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar11[0xc] = uVar19;
  pcVar3 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101e17ccc; end: 101e17d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17ccc(void)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x19;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x22;
  ulong unaff_x29;
  ulong uVar19;
  code *unaff_x30;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = *(long **)(unaff_x22[0x1a] + _DAT_112e30280);
  plVar7 = unaff_x22 + 5;
  *plVar7 = 7;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x1b] = (long)puVar6;
  puVar11 = puVar6;
  func_0x000101e19358();
  unaff_x22[0x1c] = (long)puVar11;
  *puVar6 = unaff_x22;
  puVar6[1] = FUN_101e17d88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_30) {
    plVar8 = unaff_x22 + 4;
    plVar10 = unaff_x22 + 6;
    uVar19 = uStack_10 & 0xefffffffffffffff;
    plVar4 = (long *)register0x00000008;
LAB_104876574:
    *(long **)((long)plVar4 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar4 + -0x10) = uVar19 | 0x1000000000000000;
    *(code **)((long)plVar4 + -8) = unaff_x30;
    *(undefined8 **)((long)plVar4 + -0x18) = puVar6;
    puVar6[0xb] = puVar11;
    puVar6[0xc] = plVar10;
    puVar6[9] = plVar7;
    puVar6[10] = &UNK_1106c51c8;
    puVar6[8] = plVar8;
    lVar14 = *plVar15;
    puVar6[0xd] = &PTR_DAT_1106c5148;
    uVar9 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar9;
    lVar14 = *(long *)(lVar14 + 0x50);
    puVar6[0xf] = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    puVar6[0x10] = lVar14;
    plVar10 = (long *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar10;
    puVar11 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = puVar11;
    *puVar11 = puVar6;
    puVar11[1] = &UNK_104876614;
    puVar1 = *(ulong **)((long)plVar4 + -0x10);
    uStack_f8 = *(undefined8 *)((long)plVar4 + -8);
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    plVar4 = &lStack_50;
    pcStack_38 = FUN_101e17d88;
    lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = (long *)*unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
        pcVar3 = FUN_101e17e24;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
      pcVar3 = FUN_101e18aa4;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_58 = FUN_101e17e24;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[0x1d] = plVar10[4];
    plVar15 = *(long **)(plVar10[0x1a] + _DAT_112e30288);
    plVar13 = plVar10 + 8;
    *plVar13 = 7;
    puVar6 = (undefined8 *)0xa0;
    plStack_70 = plVar7;
    plStack_68 = plVar10;
    func_0x000107c615b8();
    plVar10[0x1e] = (long)puVar6;
    *puVar6 = plVar10;
    puVar6[1] = FUN_101e17ee0;
    puVar11 = (undefined8 *)plVar10[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      plVar8 = plVar10 + 7;
      plVar10 = plVar10 + 9;
      uVar19 = uStack_60 & 0xefffffffffffffff;
      plVar7 = plVar13;
      unaff_x19 = plStack_70;
      unaff_x30 = pcStack_58;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
    plVar4 = &lStack_a0;
    pcStack_88 = FUN_101e17ee0;
    lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_98 = *plVar10;
    plVar10 = (long *)*plVar10;
    func_0x000107c615c0(*(undefined8 *)(lStack_98 + 0xf0));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
        pcVar3 = FUN_101e17f7c;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      pcVar3 = (code *)0x101e18b00;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_90 | 0x1000000000000000;
    pcStack_a8 = FUN_101e17f7c;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[0x1f] = plVar10[7];
    plVar15 = *(long **)(plVar10[0x1a] + _DAT_112e30290);
    plVar7 = plVar10 + 0xb;
    *plVar7 = 7;
    puVar6 = (undefined8 *)0xa0;
    plStack_c0 = plVar13;
    plStack_b8 = plVar10;
    func_0x000107c615b8();
    plVar10[0x20] = (long)puVar6;
    *puVar6 = plVar10;
    puVar6[1] = FUN_101e18038;
    puVar11 = (undefined8 *)plVar10[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      plVar8 = plVar10 + 10;
      plVar10 = plVar10 + 0xc;
      uVar19 = uStack_b0 & 0xefffffffffffffff;
      unaff_x19 = plStack_c0;
      unaff_x30 = pcStack_a8;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_e0 = (ulong)&uStack_b0 | 0x1000000000000000;
    plVar4 = &lStack_f0;
    pcStack_d8 = FUN_101e18038;
    puVar1 = &uStack_e0;
    lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_e8 = *plVar10;
    plVar10 = (long *)*plVar10;
    func_0x000107c615c0(*(undefined8 *)(lStack_e8 + 0x100));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
        pcVar3 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
      pcVar3 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_f8 = 0x101e180d4;
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[0x21] = plVar10[10];
    plVar15 = *(long **)(plVar10[0x1a] + _DAT_112e30278);
    puVar11 = (undefined8 *)0x70;
    func_0x000107c615b8();
    plVar10[0x22] = (long)puVar11;
    *puVar11 = plVar10;
    puVar11[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *plVar10;
      func_0x000107c615c0(*(undefined8 *)(*plVar10 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar16 = *(undefined8 *)(lVar17 + 0xd0);
        uVar9 = *(undefined8 *)(lVar17 + 0xb0);
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar14 = lVar18;
        func_0x000107c4a040();
        *(char *)(lVar17 + 0x141) = (char)lVar14;
        func_0x000107c615e8(lVar18);
        FUN_101e1a4e0(lVar14,uVar16,uVar9);
        *(long *)(lVar17 + 0x118) = lVar14;
        if (lVar14 == 0) {
          *(undefined8 *)(lVar17 + 0x68) = 3;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            func_0x000107c61658(lVar17 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar17 + 0xe0));
          }
          uVar16 = *(undefined8 *)(lVar17 + 0x108);
          uVar9 = *(undefined8 *)(lVar17 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xf8));
          func_0x000107c615e8(uVar16);
          func_0x000107c615e8(uVar9);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar17 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar14 == 0) goto LAB_101e18444;
          cVar2 = *(char *)(lVar17 + 0x140);
          lVar18 = lVar14;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar14);
          if ((int)lVar18 == 0 || cVar2 == '\0') {
            lVar14 = *(long *)(lVar17 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar3)();
            }
          }
          else {
            lVar14 = *(long *)(lVar17 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar3)();
            }
          }
          *(long *)(lVar17 + 0x120) = lVar14;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar3)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar17 + 0x70);
          uVar9 = *(undefined8 *)(lVar17 + 0x70);
          lVar18 = lVar14;
          func_0x000100759c94(lVar14,uVar9);
          *(long *)(lVar17 + 0x128) = lVar18;
          func_0x000107c61170(uVar9);
          func_0x000107c61170(lVar14);
          plVar7 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar17 + 0x130) = plVar7;
          *plVar7 = lVar17;
          plVar7[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar3)();
      }
      pcVar3 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar10 = plVar10 + 2;
  }
  *(ulong *)((long)plVar4 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar4 + -8) = uStack_f8;
  *(undefined8 **)((long)plVar4 + -0x18) = puVar11;
  puVar11[5] = plVar10;
  puVar11[6] = plVar15;
  lVar17 = *(long *)(*plVar15 + 0x50);
  puVar11[7] = lVar17;
  lVar14 = 0;
  __sSqMa(0,lVar17);
  puVar11[8] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  puVar11[9] = lVar14;
  uVar19 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar11[10] = uVar19;
  lVar14 = *(long *)(lVar17 + -8);
  puVar11[0xb] = lVar14;
  uVar19 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar11[0xc] = uVar19;
  pcVar3 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101e17d88; end: 101e17e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17d88(void)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *unaff_x19;
  long *plVar14;
  long unaff_x20;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x22;
  long *plVar19;
  ulong unaff_x29;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar4 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
      pcVar3 = FUN_101e17e24;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    pcVar3 = FUN_101e18aa4;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101e17e24;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19[0x1d] = plVar19[4];
  plVar15 = *(long **)(plVar19[0x1a] + _DAT_112e30288);
  plVar14 = plVar19 + 8;
  *plVar14 = 7;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar19[0x1e] = (long)puVar6;
  *puVar6 = plVar19;
  puVar6[1] = FUN_101e17ee0;
  lVar12 = plVar19[0x1c];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    plVar8 = plVar19 + 7;
    plVar19 = plVar19 + 9;
    plVar11 = plVar14;
    pcVar3 = pcStack_28;
    uVar7 = uStack_30;
LAB_104876574:
    *(long **)((long)plVar4 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar4 + -0x10) = uVar7 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar4 + -8) = pcVar3;
    *(undefined8 **)((long)plVar4 + -0x18) = puVar6;
    puVar6[0xb] = lVar12;
    puVar6[0xc] = plVar19;
    puVar6[9] = plVar11;
    puVar6[10] = &UNK_1106c51c8;
    puVar6[8] = plVar8;
    lVar12 = *plVar15;
    puVar6[0xd] = &PTR_DAT_1106c5148;
    uVar9 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar9;
    lVar12 = *(long *)(lVar12 + 0x50);
    puVar6[0xf] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    puVar6[0x10] = lVar12;
    plVar19 = (long *)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar19;
    puVar10 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = puVar10;
    *puVar10 = puVar6;
    puVar10[1] = &UNK_104876614;
    puVar1 = *(ulong **)((long)plVar4 + -0x10);
    uStack_c8 = *(undefined8 *)((long)plVar4 + -8);
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
    plVar4 = &lStack_70;
    pcStack_58 = FUN_101e17ee0;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar19;
    plVar19 = (long *)*plVar19;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0xf0));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        pcVar3 = FUN_101e17f7c;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      pcVar3 = (code *)0x101e18b00;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101e17f7c;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19[0x1f] = plVar19[7];
    plVar15 = *(long **)(plVar19[0x1a] + _DAT_112e30290);
    plVar11 = plVar19 + 0xb;
    *plVar11 = 7;
    puVar6 = (undefined8 *)0xa0;
    plStack_90 = plVar14;
    plStack_88 = plVar19;
    func_0x000107c615b8();
    plVar19[0x20] = (long)puVar6;
    *puVar6 = plVar19;
    puVar6[1] = FUN_101e18038;
    lVar12 = plVar19[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      plVar8 = plVar19 + 10;
      plVar19 = plVar19 + 0xc;
      unaff_x19 = plStack_90;
      pcVar3 = pcStack_78;
      uVar7 = uStack_80;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar4 = &lStack_c0;
    pcStack_a8 = FUN_101e18038;
    puVar1 = &uStack_b0;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_b8 = *plVar19;
    plVar19 = (long *)*plVar19;
    func_0x000107c615c0(*(undefined8 *)(lStack_b8 + 0x100));
    if (plVar15 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
        pcVar3 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
      pcVar3 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_c8 = 0x101e180d4;
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19[0x21] = plVar19[10];
    plVar15 = *(long **)(plVar19[0x1a] + _DAT_112e30278);
    puVar10 = (undefined8 *)0x70;
    func_0x000107c615b8();
    plVar19[0x22] = (long)puVar10;
    *puVar10 = plVar19;
    puVar10[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *plVar19;
      func_0x000107c615c0(*(undefined8 *)(*plVar19 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        func_0x000107c60e78();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar16 = *(undefined8 *)(lVar17 + 0xd0);
        uVar9 = *(undefined8 *)(lVar17 + 0xb0);
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar12 = lVar18;
        func_0x000107c4a040();
        *(char *)(lVar17 + 0x141) = (char)lVar12;
        func_0x000107c615e8(lVar18);
        FUN_101e1a4e0(lVar12,uVar16,uVar9);
        *(long *)(lVar17 + 0x118) = lVar12;
        if (lVar12 == 0) {
          *(undefined8 *)(lVar17 + 0x68) = 3;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            func_0x000107c61658(lVar17 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar17 + 0xe0));
          }
          uVar16 = *(undefined8 *)(lVar17 + 0x108);
          uVar9 = *(undefined8 *)(lVar17 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xf8));
          func_0x000107c615e8(uVar16);
          func_0x000107c615e8(uVar9);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar17 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar12 == 0) goto LAB_101e18444;
          cVar2 = *(char *)(lVar17 + 0x140);
          lVar18 = lVar12;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar12);
          if ((int)lVar18 == 0 || cVar2 == '\0') {
            lVar12 = *(long *)(lVar17 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar3)();
            }
          }
          else {
            lVar12 = *(long *)(lVar17 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar3)();
            }
          }
          *(long *)(lVar17 + 0x120) = lVar12;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar3)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar17 + 0x70);
          uVar9 = *(undefined8 *)(lVar17 + 0x70);
          lVar18 = lVar12;
          func_0x000100759c94(lVar12,uVar9);
          *(long *)(lVar17 + 0x128) = lVar18;
          func_0x000107c61170(uVar9);
          func_0x000107c61170(lVar12);
          plVar19 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar17 + 0x130) = plVar19;
          *plVar19 = lVar17;
          plVar19[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar3)();
      }
      pcVar3 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar19 = plVar19 + 2;
  }
  *(ulong *)((long)plVar4 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar4 + -8) = uStack_c8;
  *(undefined8 **)((long)plVar4 + -0x18) = puVar10;
  puVar10[5] = plVar19;
  puVar10[6] = plVar15;
  lVar17 = *(long *)(*plVar15 + 0x50);
  puVar10[7] = lVar17;
  lVar12 = 0;
  __sSqMa(0,lVar17);
  puVar10[8] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  puVar10[9] = lVar12;
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar10[10] = uVar7;
  lVar12 = *(long *)(lVar17 + -8);
  puVar10[0xb] = lVar12;
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar10[0xc] = uVar7;
  pcVar3 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101e17e24; end: 101e17edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17e24(void)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *unaff_x19;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *unaff_x22;
  ulong unaff_x29;
  code *unaff_x30;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x1d] = unaff_x22[4];
  plVar16 = *(long **)(unaff_x22[0x1a] + _DAT_112e30288);
  plVar7 = unaff_x22 + 8;
  *plVar7 = 7;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x1e] = (long)puVar6;
  *puVar6 = unaff_x22;
  puVar6[1] = FUN_101e17ee0;
  lVar14 = unaff_x22[0x1c];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    plVar9 = unaff_x22 + 7;
    plVar11 = unaff_x22 + 9;
    plVar4 = (long *)register0x00000008;
    plVar13 = plVar7;
    uVar8 = uStack_10;
LAB_104876574:
    *(long **)((long)plVar4 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar4 + -0x10) = uVar8 & 0xefffffffffffffff | 0x1000000000000000;
    *(code **)((long)plVar4 + -8) = unaff_x30;
    *(undefined8 **)((long)plVar4 + -0x18) = puVar6;
    puVar6[0xb] = lVar14;
    puVar6[0xc] = plVar11;
    puVar6[9] = plVar13;
    puVar6[10] = &UNK_1106c51c8;
    puVar6[8] = plVar9;
    lVar14 = *plVar16;
    puVar6[0xd] = &PTR_DAT_1106c5148;
    uVar10 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar10;
    lVar14 = *(long *)(lVar14 + 0x50);
    puVar6[0xf] = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    puVar6[0x10] = lVar14;
    plVar11 = (long *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar11;
    puVar12 = (undefined8 *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = puVar12;
    *puVar12 = puVar6;
    puVar12[1] = &UNK_104876614;
    puVar1 = *(ulong **)((long)plVar4 + -0x10);
    uStack_a8 = *(undefined8 *)((long)plVar4 + -8);
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    plVar4 = &lStack_50;
    pcStack_38 = FUN_101e17ee0;
    lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = (long *)*unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf0));
    if (plVar16 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
        pcVar3 = FUN_101e17f7c;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
      pcVar3 = (code *)0x101e18b00;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_58 = FUN_101e17f7c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11[0x1f] = plVar11[7];
    plVar16 = *(long **)(plVar11[0x1a] + _DAT_112e30290);
    plVar13 = plVar11 + 0xb;
    *plVar13 = 7;
    puVar6 = (undefined8 *)0xa0;
    plStack_70 = plVar7;
    plStack_68 = plVar11;
    func_0x000107c615b8();
    plVar11[0x20] = (long)puVar6;
    *puVar6 = plVar11;
    puVar6[1] = FUN_101e18038;
    lVar14 = plVar11[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      plVar9 = plVar11 + 10;
      plVar11 = plVar11 + 0xc;
      unaff_x19 = plStack_70;
      unaff_x30 = pcStack_58;
      uVar8 = uStack_60;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
    plVar4 = &lStack_a0;
    pcStack_88 = FUN_101e18038;
    puVar1 = &uStack_90;
    lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_98 = *plVar11;
    plVar11 = (long *)*plVar11;
    func_0x000107c615c0(*(undefined8 *)(lStack_98 + 0x100));
    if (plVar16 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
        pcVar3 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      pcVar3 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_a8 = 0x101e180d4;
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11[0x21] = plVar11[10];
    plVar16 = *(long **)(plVar11[0x1a] + _DAT_112e30278);
    puVar12 = (undefined8 *)0x70;
    func_0x000107c615b8();
    plVar11[0x22] = (long)puVar12;
    *puVar12 = plVar11;
    puVar12[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *plVar11;
      func_0x000107c615c0(*(undefined8 *)(*plVar11 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        func_0x000107c60e78();
        lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar17 = *(undefined8 *)(lVar18 + 0xd0);
        uVar10 = *(undefined8 *)(lVar18 + 0xb0);
        lVar19 = *(long *)(lVar18 + 0x10);
        lVar14 = lVar19;
        func_0x000107c4a040();
        *(char *)(lVar18 + 0x141) = (char)lVar14;
        func_0x000107c615e8(lVar19);
        FUN_101e1a4e0(lVar14,uVar17,uVar10);
        *(long *)(lVar18 + 0x118) = lVar14;
        if (lVar14 == 0) {
          *(undefined8 *)(lVar18 + 0x68) = 3;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            func_0x000107c61658(lVar18 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar18 + 0xe0));
          }
          uVar17 = *(undefined8 *)(lVar18 + 0x108);
          uVar10 = *(undefined8 *)(lVar18 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar18 + 0xf8));
          func_0x000107c615e8(uVar17);
          func_0x000107c615e8(uVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar18 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar14 == 0) goto LAB_101e18444;
          cVar2 = *(char *)(lVar18 + 0x140);
          lVar19 = lVar14;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar14);
          if ((int)lVar19 == 0 || cVar2 == '\0') {
            lVar14 = *(long *)(lVar18 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar3)();
            }
          }
          else {
            lVar14 = *(long *)(lVar18 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar3)();
            }
          }
          *(long *)(lVar18 + 0x120) = lVar14;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar3)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar18 + 0x70);
          uVar10 = *(undefined8 *)(lVar18 + 0x70);
          lVar19 = lVar14;
          func_0x000100759c94(lVar14,uVar10);
          *(long *)(lVar18 + 0x128) = lVar19;
          func_0x000107c61170(uVar10);
          func_0x000107c61170(lVar14);
          plVar7 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar18 + 0x130) = plVar7;
          *plVar7 = lVar18;
          plVar7[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar3)();
      }
      pcVar3 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar11 = plVar11 + 2;
  }
  *(ulong *)((long)plVar4 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar4 + -8) = uStack_a8;
  *(undefined8 **)((long)plVar4 + -0x18) = puVar12;
  puVar12[5] = plVar11;
  puVar12[6] = plVar16;
  lVar18 = *(long *)(*plVar16 + 0x50);
  puVar12[7] = lVar18;
  lVar14 = 0;
  __sSqMa(0,lVar18);
  puVar12[8] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  puVar12[9] = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[10] = uVar8;
  lVar14 = *(long *)(lVar18 + -8);
  puVar12[0xb] = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[0xc] = uVar8;
  pcVar3 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101e17ee0; end: 101e17f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17ee0(void)

{
  char cVar1;
  ulong *puVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x22;
  long *plVar16;
  ulong unaff_x29;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong *puStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar4 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
      pcVar3 = FUN_101e17f7c;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    pcVar3 = (code *)0x101e18b00;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  puStack_30 = (ulong *)((ulong)&uStack_10 | 0x1000000000000000);
  pcStack_28 = FUN_101e17f7c;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16[0x1f] = plVar16[7];
  plVar12 = *(long **)(plVar16[0x1a] + _DAT_112e30290);
  plVar16[0xb] = 7;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  plVar16[0x20] = (long)puVar6;
  *puVar6 = plVar16;
  puVar6[1] = FUN_101e18038;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    puStack_30 = (ulong *)((ulong)puStack_30 & 0xefffffffffffffff | 0x1000000000000000);
    puVar6[0xb] = plVar16[0x1c];
    puVar6[0xc] = plVar16 + 0xc;
    puVar6[9] = plVar16 + 0xb;
    puVar6[10] = &UNK_1106c51c8;
    puVar6[8] = plVar16 + 10;
    lVar11 = *plVar12;
    puVar6[0xd] = &PTR_DAT_1106c5148;
    uVar8 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar8;
    lVar11 = *(long *)(lVar11 + 0x50);
    puVar6[0xf] = lVar11;
    lVar11 = *(long *)(lVar11 + -8);
    puVar6[0x10] = lVar11;
    plVar16 = (long *)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar16;
    plVar9 = (long *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = plVar9;
    *plVar9 = (long)puVar6;
    plVar9[1] = (long)&UNK_104876614;
    pcStack_78 = pcStack_28;
    puVar2 = puStack_30;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&puStack_30 | 0x1000000000000000;
    plVar4 = &lStack_70;
    pcStack_58 = FUN_101e18038;
    puVar2 = &uStack_60;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar16;
    plVar16 = (long *)*plVar16;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0x100));
    if (plVar12 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        pcVar3 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      pcVar3 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    pcStack_78 = (code *)0x101e180d4;
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16[0x21] = plVar16[10];
    plVar12 = *(long **)(plVar16[0x1a] + _DAT_112e30278);
    plVar9 = (long *)0x70;
    func_0x000107c615b8();
    plVar16[0x22] = (long)plVar9;
    *plVar9 = (long)plVar16;
    plVar9[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar14 = *plVar16;
      func_0x000107c615c0(*(undefined8 *)(*plVar16 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        func_0x000107c60e78();
        lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar13 = *(undefined8 *)(lVar14 + 0xd0);
        uVar8 = *(undefined8 *)(lVar14 + 0xb0);
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar11 = lVar15;
        func_0x000107c4a040();
        *(char *)(lVar14 + 0x141) = (char)lVar11;
        func_0x000107c615e8(lVar15);
        FUN_101e1a4e0(lVar11,uVar13,uVar8);
        *(long *)(lVar14 + 0x118) = lVar11;
        if (lVar11 == 0) {
          *(undefined8 *)(lVar14 + 0x68) = 3;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            func_0x000107c61658(lVar14 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar14 + 0xe0));
          }
          uVar13 = *(undefined8 *)(lVar14 + 0x108);
          uVar8 = *(undefined8 *)(lVar14 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xf8));
          func_0x000107c615e8(uVar13);
          func_0x000107c615e8(uVar8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar14 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar11 == 0) goto LAB_101e18444;
          cVar1 = *(char *)(lVar14 + 0x140);
          lVar15 = lVar11;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar11);
          if ((int)lVar15 == 0 || cVar1 == '\0') {
            lVar11 = *(long *)(lVar14 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar3)();
            }
          }
          else {
            lVar11 = *(long *)(lVar14 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar3)();
            }
          }
          *(long *)(lVar14 + 0x120) = lVar11;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar3)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar14 + 0x70);
          uVar8 = *(undefined8 *)(lVar14 + 0x70);
          lVar15 = lVar11;
          func_0x000100759c94(lVar11,uVar8);
          *(long *)(lVar14 + 0x128) = lVar15;
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar11);
          plVar16 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar14 + 0x130) = plVar16;
          *plVar16 = lVar14;
          plVar16[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar3)();
      }
      pcVar3 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar16 = plVar16 + 2;
  }
  *(ulong *)((long)plVar4 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar4 + -8) = pcStack_78;
  *(long **)((long)plVar4 + -0x18) = plVar9;
  plVar9[5] = (long)plVar16;
  plVar9[6] = (long)plVar12;
  lVar14 = *(long *)(*plVar12 + 0x50);
  plVar9[7] = lVar14;
  lVar11 = 0;
  __sSqMa(0,lVar14);
  plVar9[8] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[9] = lVar11;
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[10] = uVar7;
  lVar11 = *(long *)(lVar14 + -8);
  plVar9[0xb] = lVar11;
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xc] = uVar7;
  pcVar3 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101e17f7c; end: 101e18037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e17f7c(void)

{
  char cVar1;
  ulong *puVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x22;
  ulong unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong *puStack_10;
  
  puStack_10 = (ulong *)(unaff_x29 | 0x1000000000000000);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x1f] = unaff_x22[7];
  plVar13 = *(long **)(unaff_x22[0x1a] + _DAT_112e30290);
  unaff_x22[0xb] = 7;
  puVar6 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x20] = (long)puVar6;
  *puVar6 = unaff_x22;
  puVar6[1] = FUN_101e18038;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    puStack_10 = (ulong *)((ulong)puStack_10 & 0xefffffffffffffff | 0x1000000000000000);
    puVar6[0xb] = unaff_x22[0x1c];
    puVar6[0xc] = unaff_x22 + 0xc;
    puVar6[9] = unaff_x22 + 0xb;
    puVar6[10] = &UNK_1106c51c8;
    puVar6[8] = unaff_x22 + 10;
    lVar12 = *plVar13;
    puVar6[0xd] = &PTR_DAT_1106c5148;
    uVar8 = 0x10;
    _swift_task_alloc();
    puVar6[0xe] = uVar8;
    lVar12 = *(long *)(lVar12 + 0x50);
    puVar6[0xf] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    puVar6[0x10] = lVar12;
    plVar9 = (long *)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar6[0x11] = plVar9;
    plVar10 = (long *)0x70;
    _swift_task_alloc();
    puVar6[0x12] = plVar10;
    *plVar10 = (long)puVar6;
    plVar10[1] = (long)&UNK_104876614;
    plVar4 = (long *)register0x00000008;
    puVar2 = puStack_10;
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&puStack_10 | 0x1000000000000000;
    plVar4 = &lStack_50;
    pcStack_38 = FUN_101e18038;
    puVar2 = &uStack_40;
    lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9 = (long *)*unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x100));
    if (plVar13 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
        pcVar3 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
      pcVar3 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_58 = 0x101e180d4;
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9[0x21] = plVar9[10];
    plVar13 = *(long **)(plVar9[0x1a] + _DAT_112e30278);
    plVar10 = (long *)0x70;
    func_0x000107c615b8();
    plVar9[0x22] = (long)plVar10;
    *plVar10 = (long)plVar9;
    plVar10[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar15 = *plVar9;
      func_0x000107c615c0(*(undefined8 *)(*plVar9 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        func_0x000107c60e78();
        lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar14 = *(undefined8 *)(lVar15 + 0xd0);
        uVar8 = *(undefined8 *)(lVar15 + 0xb0);
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar12 = lVar16;
        func_0x000107c4a040();
        *(char *)(lVar15 + 0x141) = (char)lVar12;
        func_0x000107c615e8(lVar16);
        FUN_101e1a4e0(lVar12,uVar14,uVar8);
        *(long *)(lVar15 + 0x118) = lVar12;
        if (lVar12 == 0) {
          *(undefined8 *)(lVar15 + 0x68) = 3;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            func_0x000107c61658(lVar15 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar15 + 0xe0));
          }
          uVar14 = *(undefined8 *)(lVar15 + 0x108);
          uVar8 = *(undefined8 *)(lVar15 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xf8));
          func_0x000107c615e8(uVar14);
          func_0x000107c615e8(uVar8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar15 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar12 == 0) goto LAB_101e18444;
          cVar1 = *(char *)(lVar15 + 0x140);
          lVar16 = lVar12;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar12);
          if ((int)lVar16 == 0 || cVar1 == '\0') {
            lVar12 = *(long *)(lVar15 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar3)();
            }
          }
          else {
            lVar12 = *(long *)(lVar15 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar3)();
            }
          }
          *(long *)(lVar15 + 0x120) = lVar12;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar3)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar15 + 0x70);
          uVar8 = *(undefined8 *)(lVar15 + 0x70);
          lVar16 = lVar12;
          func_0x000100759c94(lVar12,uVar8);
          *(long *)(lVar15 + 0x128) = lVar16;
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar12);
          plVar13 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar15 + 0x130) = plVar13;
          *plVar13 = lVar15;
          plVar13[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar3)();
      }
      pcVar3 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar9 = plVar9 + 2;
    unaff_x30 = uStack_58;
  }
  *(ulong *)((long)plVar4 + -0x10) = (ulong)puVar2 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar4 + -8) = unaff_x30;
  *(long **)((long)plVar4 + -0x18) = plVar10;
  plVar10[5] = (long)plVar9;
  plVar10[6] = (long)plVar13;
  lVar15 = *(long *)(*plVar13 + 0x50);
  plVar10[7] = lVar15;
  lVar12 = 0;
  __sSqMa(0,lVar15);
  plVar10[8] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  plVar10[9] = lVar12;
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar10[10] = uVar7;
  lVar12 = *(long *)(lVar15 + -8);
  plVar10[0xb] = lVar12;
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar10[0xc] = uVar7;
  pcVar3 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101e18038; end: 101e181db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e18038(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x22;
  long *plVar13;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x100));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar2 = (code *)0x101e180d4;
      goto _swift_task_switch;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    pcVar2 = (code *)0x101e18b64;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13[0x21] = plVar13[10];
  plVar9 = *(long **)(plVar13[0x1a] + _DAT_112e30278);
  puVar4 = (undefined8 *)0x70;
  func_0x000107c615b8();
  plVar13[0x22] = (long)puVar4;
  *puVar4 = plVar13;
  puVar4[1] = 0x101e18168;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    puVar4[5] = plVar13 + 2;
    puVar4[6] = plVar9;
    lVar11 = *(long *)(*plVar9 + 0x50);
    puVar4[7] = lVar11;
    lVar6 = 0;
    __sSqMa(0,lVar11);
    puVar4[8] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    puVar4[9] = lVar6;
    uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar4[10] = uVar5;
    lVar6 = *(long *)(lVar11 + -8);
    puVar4[0xb] = lVar6;
    uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar4[0xc] = uVar5;
    pcVar2 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *plVar13;
  func_0x000107c615c0(*(undefined8 *)(*plVar13 + 0x110));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    pcVar2 = FUN_101e181dc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(lVar11 + 0xd0);
  uVar8 = *(undefined8 *)(lVar11 + 0xb0);
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar6 = lVar12;
  func_0x000107c4a040();
  *(char *)(lVar11 + 0x141) = (char)lVar6;
  func_0x000107c615e8(lVar12);
  FUN_101e1a4e0(lVar6,uVar10,uVar8);
  *(long *)(lVar11 + 0x118) = lVar6;
  if (lVar6 == 0) {
    *(undefined8 *)(lVar11 + 0x68) = 3;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      func_0x000107c61658(lVar11 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar11 + 0xe0));
    }
    uVar10 = *(undefined8 *)(lVar11 + 0x108);
    uVar8 = *(undefined8 *)(lVar11 + 0xe8);
    func_0x000107c615e8(*(undefined8 *)(lVar11 + 0xf8));
    func_0x000107c615e8(uVar10);
    func_0x000107c615e8(uVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar11 + 8))(3);
      return;
    }
  }
  else {
    func_0x000107c42400();
    func_0x000107c61180();
    if (lVar6 == 0) goto LAB_101e18444;
    cVar1 = *(char *)(lVar11 + 0x140);
    lVar12 = lVar6;
    func_0x000107c44b0c();
    func_0x000107c61170(lVar6);
    if ((int)lVar12 == 0 || cVar1 == '\0') {
      lVar6 = *(long *)(lVar11 + 0xe8);
      func_0x000107c50098();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e182b0);
        (*pcVar2)();
      }
    }
    else {
      lVar6 = *(long *)(lVar11 + 0xf8);
      func_0x000107c50090();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e18450);
        (*pcVar2)();
      }
    }
    *(long *)(lVar11 + 0x120) = lVar6;
    func_0x000107c506cc();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e1844c);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    func_0x0001000d224c(lVar11 + 0x70);
    uVar8 = *(undefined8 *)(lVar11 + 0x70);
    lVar12 = lVar6;
    func_0x000100759c94(lVar6,uVar8);
    *(long *)(lVar11 + 0x128) = lVar12;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar6);
    plVar13 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(lVar11 + 0x130) = plVar13;
    *plVar13 = lVar11;
    plVar13[1] = (long)FUN_101e18450;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      (*(code *)&UNK_100ff4658)();
      return;
    }
  }
  func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e18448);
  (*pcVar2)();
}



/* Entry: 101e181dc; end: 101e1844f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e181dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar9 = *(long *)(unaff_x22 + 0x10);
  lVar4 = lVar9;
  func_0x000107c4a040(lVar9,param_2,uVar7);
  *(char *)(unaff_x22 + 0x141) = (char)lVar4;
  func_0x000107c615e8(lVar9);
  FUN_101e1a4e0(lVar4,uVar8,uVar7);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  if (lVar4 == 0) {
    *(undefined8 *)(unaff_x22 + 0x68) = 3;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      func_0x000107c61658(unaff_x22 + 0x68,&UNK_1106c51c8,*(undefined8 *)(unaff_x22 + 0xe0));
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c615e8(uVar8);
    func_0x000107c615e8(uVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(3);
      return;
    }
  }
  else {
    func_0x000107c42400();
    func_0x000107c61180();
    if (lVar4 == 0) goto LAB_101e18444;
    cVar1 = *(char *)(unaff_x22 + 0x140);
    lVar9 = lVar4;
    func_0x000107c44b0c();
    func_0x000107c61170(lVar4);
    if ((int)lVar9 == 0 || cVar1 == '\0') {
      lVar4 = *(long *)(unaff_x22 + 0xe8);
      func_0x000107c50098();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e182b0);
        (*pcVar2)();
      }
    }
    else {
      lVar4 = *(long *)(unaff_x22 + 0xf8);
      func_0x000107c50090();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e18450);
        (*pcVar2)();
      }
    }
    *(long *)(unaff_x22 + 0x120) = lVar4;
    func_0x000107c506cc();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e1844c);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    func_0x0001000d224c(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar9 = lVar4;
    func_0x000100759c94(lVar4,uVar7);
    *(long *)(unaff_x22 + 0x128) = lVar9;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    plVar5 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101e18450;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      (*(code *)&UNK_100ff4658)();
      return;
    }
  }
  func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e18448);
  (*pcVar2)();
}



/* Entry: 101e18450; end: 101e184cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_101e18450(undefined8 param_1,undefined1 param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  long *unaff_x22;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar19;
  ulong unaff_x29;
  undefined1 auStack_158 [40];
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined **ppuStack_f8;
  ulong *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong auStack_d0 [3];
  long lStack_b8;
  ulong auStack_b0 [3];
  long lStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *unaff_x22;
  lVar16 = *unaff_x22;
  *(undefined8 *)(lVar14 + 0x138) = param_1;
  *(undefined1 *)(lVar14 + 0x142) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x130));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101e184d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e184d0,0,0);
    return (undefined **)UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101e184d0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = *(undefined ***)(lVar16 + 0x138);
  if (*(char *)(lVar16 + 0x142) != '\x01') {
    func_0x000107c61574(*(undefined8 *)(lVar16 + 0x128));
    if (ppuVar15 == (undefined **)0x0) {
      puVar10 = *(undefined8 **)(lVar16 + 0xe0);
      ppuVar15 = (undefined **)&UNK_1106c51c8;
      func_0x000107c613f8(&UNK_1106c51c8,puVar10,0,0);
      *puVar10 = 5;
      func_0x000107c61654();
      goto LAB_101e18638;
    }
    ppuVar8 = *(undefined ***)(lVar16 + 0x138);
    uVar5 = *(undefined8 *)(lVar16 + 0x108);
    func_0x000107c5b198();
    func_0x000107c61180();
    *(undefined8 *)(lVar16 + 0xa8) = 0;
    func_0x000107c3e418(uVar5);
    lVar14 = *(long *)(lVar16 + 0xa8);
    if (lVar14 != 0) {
      uVar5 = *(undefined8 *)(lVar16 + 0x138);
      puVar10 = *(undefined8 **)(lVar16 + 0xe0);
      unaff_x25 = (ulong)*(byte *)(lVar16 + 0x142);
      ppuVar15 = (undefined **)&UNK_1106c51c8;
      func_0x000107c613f8(&UNK_1106c51c8,puVar10,0,0);
      *puVar10 = 1;
      func_0x000107c61654();
      func_0x000107c61174(lVar14);
      func_0x000107c61170(ppuVar8);
      func_0x000100fee724(uVar5,unaff_x25);
      func_0x000107c61170(lVar14);
      goto LAB_101e18638;
    }
    ppuVar15 = (undefined **)(ulong)*(byte *)(lVar16 + 0x141);
    ppuVar13 = ppuVar8;
    func_0x000101e1a5c8(ppuVar15,*(undefined8 *)(lVar16 + 0xd0),ppuVar8);
    uVar17 = (ulong)*(byte *)(lVar16 + 0x142);
    unaff_x25 = *(ulong *)(lVar16 + 0x138);
    if (ppuVar15 == (undefined **)0x0) {
      puVar10 = *(undefined8 **)(lVar16 + 0xe0);
      ppuVar15 = (undefined **)&UNK_1106c51c8;
      func_0x000107c613f8(&UNK_1106c51c8,puVar10,0,0);
      *puVar10 = 4;
      func_0x000107c61654();
      func_0x000107c61170(ppuVar8);
      func_0x000100fee724(unaff_x25,uVar17);
      goto LAB_101e18638;
    }
    unaff_x26 = *(undefined8 *)(lVar16 + 0x118);
    uVar19 = *(undefined8 *)(lVar16 + 0x108);
    uVar5 = *(undefined8 *)(lVar16 + 0xf8);
    uVar18 = *(undefined8 *)(lVar16 + 0xe8);
    func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x120));
    func_0x000107c61170(ppuVar8);
    func_0x000107c615e8(uVar19);
    func_0x000107c61170(unaff_x26);
    func_0x000100fee724(unaff_x25,uVar17);
LAB_101e18a08:
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar5);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar16 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_101e18aa0;
    goto LAB_101e18a3c;
  }
  *(undefined ***)(lVar16 + 0x78) = ppuVar15;
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(lVar16 + 0x78,uVar5,PTR___ss5ErrorWS_11034ee10);
  }
  func_0x000107c61574(*(undefined8 *)(lVar16 + 0x128));
LAB_101e18638:
  *(undefined ***)(lVar16 + 0x80) = ppuVar15;
  func_0x000107c614b0(ppuVar15);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar14 = lVar16 + 0x88;
  lVar11 = lVar16 + 0x80;
  func_0x000107c6147c(lVar14,lVar11,uVar5,&UNK_1106c51c8,0);
  if ((int)lVar14 == 0) {
    func_0x000107c614ac(*(undefined8 *)(lVar16 + 0x80));
    ppuVar8 = ppuVar15;
    func_0x000107c5ed2c();
    ppuVar13 = ppuVar8;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar9 = ppuVar13;
    func_0x000107c5faec();
    lVar14 = lVar11;
    func_0x000107c61170(ppuVar13);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e877f8;
    func_0x000107c5faec();
    if ((ppuVar9 == ppuVar13) && (lVar11 == lVar14)) {
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar11);
      lVar12 = lVar14;
LAB_101e18790:
      ppuVar9 = ppuVar8;
      func_0x000107c3fcb0();
      if (ppuVar9 == (undefined **)0xa) {
        uVar17 = *(ulong *)(lVar16 + 0x118);
        unaff_x25 = *(ulong *)(lVar16 + 0x108);
        uVar5 = *(undefined8 *)(lVar16 + 0xf8);
        uVar18 = *(undefined8 *)(lVar16 + 0xe8);
        func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x120));
        func_0x000107c61170(uVar17);
        func_0x000107c614ac(ppuVar15);
        func_0x000107c61170(ppuVar8);
        func_0x000107c615e8(unaff_x25);
        ppuVar15 = (undefined **)0x0;
        goto LAB_101e18a08;
      }
    }
    else {
      lVar12 = lVar11;
      func_0x000107c605b8(ppuVar9,lVar11,ppuVar13,lVar14,0);
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar11);
      if (((ulong)ppuVar9 & 1) != 0) goto LAB_101e18790;
    }
    ppuVar13 = ppuVar8;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar9 = ppuVar13;
    func_0x000107c5faec();
    lVar14 = lVar12;
    func_0x000107c61170(ppuVar13);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e09198;
    func_0x000107c5faec();
    if ((ppuVar9 == ppuVar13) && (lVar12 == lVar14)) {
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar12);
LAB_101e18868:
      ppuVar13 = ppuVar8;
      func_0x000107c3fcb0();
      if ((ppuVar13 == (undefined **)0x10) ||
         (ppuVar13 = ppuVar8, func_0x000107c3fcb0(), ppuVar13 == (undefined **)0x11)) {
        *(undefined8 *)(lVar16 + 0x98) = 9;
        iVar2 = 2;
        ppuVar13 = (undefined **)0x0;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar2 != 0) {
          ppuVar13 = *(undefined ***)(lVar16 + 0xe0);
          func_0x000107c61658(lVar16 + 0x98,&UNK_1106c51c8,ppuVar13);
        }
        uVar17 = *(ulong *)(lVar16 + 0x118);
        uVar5 = *(undefined8 *)(lVar16 + 0x120);
        uVar18 = *(undefined8 *)(lVar16 + 0xf8);
        unaff_x25 = *(ulong *)(lVar16 + 0xe8);
        func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x108));
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(uVar18);
        func_0x000107c615e8(uVar5);
        func_0x000107c61170(ppuVar8);
        func_0x000107c614ac(ppuVar15);
        func_0x000107c61170(uVar17);
        ppuVar15 = (undefined **)0x9;
        goto LAB_101e18988;
      }
    }
    else {
      func_0x000107c605b8(ppuVar9,lVar12,ppuVar13,lVar14,0);
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar12);
      if (((ulong)ppuVar9 & 1) != 0) goto LAB_101e18868;
    }
    *(undefined ***)(lVar16 + 0x90) = ppuVar15;
    iVar2 = 2;
    ppuVar13 = (undefined **)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c614b0(ppuVar15);
    if (iVar2 != 0) {
      ppuVar13 = *(undefined ***)(lVar16 + 0xe0);
      func_0x000107c61658(lVar16 + 0x90,&UNK_1106c51c8,ppuVar13);
    }
    uVar17 = *(ulong *)(lVar16 + 0x118);
    uVar5 = *(undefined8 *)(lVar16 + 0x120);
    uVar18 = *(undefined8 *)(lVar16 + 0xf8);
    unaff_x25 = *(ulong *)(lVar16 + 0xe8);
    func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x108));
    func_0x000107c615e8(unaff_x25);
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(ppuVar8);
    func_0x000107c614ac(ppuVar15);
    func_0x000107c61170(uVar17);
  }
  else {
    func_0x000107c614ac(ppuVar15);
    ppuVar15 = *(undefined ***)(lVar16 + 0x88);
    *(undefined ***)(lVar16 + 0xa0) = ppuVar15;
    iVar2 = 2;
    ppuVar13 = (undefined **)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      ppuVar13 = *(undefined ***)(lVar16 + 0xe0);
      func_0x000107c61658(lVar16 + 0xa0,&UNK_1106c51c8,ppuVar13);
    }
    uVar5 = *(undefined8 *)(lVar16 + 0x118);
    ppuVar8 = *(undefined ***)(lVar16 + 0x120);
    uVar17 = *(ulong *)(lVar16 + 0x108);
    uVar18 = *(undefined8 *)(lVar16 + 0xf8);
    func_0x000107c615e8(*(undefined8 *)(lVar16 + 0xe8));
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(ppuVar8);
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c614ac(*(undefined8 *)(lVar16 + 0x80));
  }
LAB_101e18988:
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar16 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
LAB_101e18aa0:
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_30 | 0x1000000000000000;
    pcStack_88 = FUN_101e18aa4;
    auStack_b0[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    ppuVar15 = *(undefined ***)(lVar16 + 0x30);
    lStack_98 = lVar16;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_b0[2]) {
                    /* WARNING: Could not recover jumptable at 0x000101e18af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 8))();
      return ppuVar15;
    }
    func_0x000107c60e78(ppuVar15);
    auStack_b0[0] = (ulong)&uStack_90 | 0x1000000000000000;
    auStack_b0[1] = 0x101e18b00;
    auStack_d0[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    lStack_b8 = lVar16;
    func_0x000107c615e8(*(undefined8 *)(lVar16 + 0xe8));
    ppuVar15 = *(undefined ***)(lVar16 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_d0[2]) {
      func_0x000107c60e78(ppuVar15);
      auStack_d0[0] = (ulong)auStack_b0 | 0x1000000000000000;
      auStack_d0[1] = 0x101e18b64;
      lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar14 = *(long *)(lVar16 + 0xf8);
      lStack_d8 = lVar16;
      func_0x000107c615e8(*(undefined8 *)(lVar16 + 0xe8));
      func_0x000107c615e8(lVar14);
      ppuVar15 = *(undefined ***)(lVar16 + 0x60);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar16 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
        func_0x000107c60e78();
        pcStack_e8 = FUN_101e18bd4;
        puVar3 = PTR_PTR_1126b25b8;
        uStack_130 = unaff_x26;
        uStack_128 = unaff_x25;
        uStack_120 = uVar18;
        uStack_118 = uVar17;
        lStack_110 = lVar16;
        uStack_108 = uVar5;
        lStack_100 = lVar14;
        ppuStack_f8 = ppuVar8;
        puStack_f0 = auStack_d0;
        func_0x000107c610f8();
        func_0x000107c5fadc(UNRECOVERED_JUMPTABLE_00,ppuVar13);
        func_0x000107c46814();
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
        plVar1 = (long *)(lVar14 + _DAT_112e30298);
        plVar4 = plVar1;
        func_0x0001000a8868(plVar1,plVar1[3]);
        uVar18 = *(undefined8 *)(*plVar4 + 0x10);
        uVar5 = 0x70756b636162;
        func_0x000107c5fadc(0x70756b636162,0xe600000000000000);
        func_0x0001058db56c(uVar18,uVar5,1);
        func_0x000107c61170(uVar5);
        func_0x0001000285a8(0x112e302e0,&UNK_10da18e68);
        puVar6 = &UNK_11048a480;
        func_0x000107c613fc(&UNK_11048a480,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,lVar14);
        FUN_101e19240(plVar1,auStack_158);
        puVar7 = &UNK_11048a4a8;
        func_0x000107c613fc(&UNK_11048a4a8,0x58,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined ***)(puVar7 + 0x18) = ppuVar15;
        *(undefined **)(puVar7 + 0x20) = puVar3;
        puVar7[0x28] = 0;
        FUN_101e19284(auStack_158,puVar7 + 0x30);
        func_0x000107c61174(ppuVar15);
        func_0x000107c61174(puVar3);
        ppuVar15 = (undefined **)0x21;
        func_0x000104887c7c(0x21,0,0x48,4,0xd000000000000023,0x800000010f012e50,&UNK_10da18e78,
                            puVar7);
        func_0x000107c61170(puVar3);
        func_0x000107c61574(puVar7);
        return ppuVar15;
      }
                    /* WARNING: Could not recover jumptable at 0x000101e18bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return ppuVar15;
    }
                    /* WARNING: Could not recover jumptable at 0x000101e18b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return ppuVar15;
  }
LAB_101e18a3c:
                    /* WARNING: Could not recover jumptable at 0x000101e18a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(ppuVar15);
  return ppuVar15;
}



/* Entry: 101e184d0; end: 101e18aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_101e184d0(void)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long unaff_x22;
  ulong uVar17;
  undefined8 uVar18;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar19;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = *(undefined ***)(unaff_x22 + 0x138);
  if (*(char *)(unaff_x22 + 0x142) != '\x01') {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
    if (ppuVar15 == (undefined **)0x0) {
      puVar9 = *(undefined8 **)(unaff_x22 + 0xe0);
      ppuVar15 = (undefined **)&UNK_1106c51c8;
      func_0x000107c613f8(&UNK_1106c51c8,puVar9,0,0);
      *puVar9 = 5;
      func_0x000107c61654();
      goto LAB_101e18638;
    }
    ppuVar7 = *(undefined ***)(unaff_x22 + 0x138);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
    func_0x000107c5b198();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    func_0x000107c3e418(uVar18);
    lVar14 = *(long *)(unaff_x22 + 0xa8);
    if (lVar14 != 0) {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
      puVar9 = *(undefined8 **)(unaff_x22 + 0xe0);
      unaff_x25 = (ulong)*(byte *)(unaff_x22 + 0x142);
      ppuVar15 = (undefined **)&UNK_1106c51c8;
      func_0x000107c613f8(&UNK_1106c51c8,puVar9,0,0);
      *puVar9 = 1;
      func_0x000107c61654();
      func_0x000107c61174(lVar14);
      func_0x000107c61170(ppuVar7);
      func_0x000100fee724(uVar18,unaff_x25);
      func_0x000107c61170(lVar14);
      goto LAB_101e18638;
    }
    ppuVar15 = (undefined **)(ulong)*(byte *)(unaff_x22 + 0x141);
    ppuVar12 = ppuVar7;
    func_0x000101e1a5c8(ppuVar15,*(undefined8 *)(unaff_x22 + 0xd0),ppuVar7);
    uVar17 = (ulong)*(byte *)(unaff_x22 + 0x142);
    unaff_x25 = *(ulong *)(unaff_x22 + 0x138);
    if (ppuVar15 == (undefined **)0x0) {
      puVar9 = *(undefined8 **)(unaff_x22 + 0xe0);
      ppuVar15 = (undefined **)&UNK_1106c51c8;
      func_0x000107c613f8(&UNK_1106c51c8,puVar9,0,0);
      *puVar9 = 4;
      func_0x000107c61654();
      func_0x000107c61170(ppuVar7);
      func_0x000100fee724(unaff_x25,uVar17);
      goto LAB_101e18638;
    }
    unaff_x26 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c61170(ppuVar7);
    func_0x000107c615e8(uVar19);
    func_0x000107c61170(unaff_x26);
    func_0x000100fee724(unaff_x25,uVar17);
LAB_101e18a08:
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar16);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    goto joined_r0x000101e18a30;
  }
  *(undefined ***)(unaff_x22 + 0x78) = ppuVar15;
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar18 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(unaff_x22 + 0x78,uVar18,PTR___ss5ErrorWS_11034ee10);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
LAB_101e18638:
  *(undefined ***)(unaff_x22 + 0x80) = ppuVar15;
  func_0x000107c614b0(ppuVar15);
  uVar18 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar14 = unaff_x22 + 0x88;
  lVar10 = unaff_x22 + 0x80;
  func_0x000107c6147c(lVar14,lVar10,uVar18,&UNK_1106c51c8,0);
  if ((int)lVar14 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
    ppuVar7 = ppuVar15;
    func_0x000107c5ed2c();
    ppuVar12 = ppuVar7;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar8 = ppuVar12;
    func_0x000107c5faec();
    lVar14 = lVar10;
    func_0x000107c61170(ppuVar12);
    ppuVar12 = &PTR____CFConstantStringClassReference_110e877f8;
    func_0x000107c5faec();
    if ((ppuVar8 == ppuVar12) && (lVar10 == lVar14)) {
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar10);
      lVar11 = lVar14;
LAB_101e18790:
      ppuVar8 = ppuVar7;
      func_0x000107c3fcb0();
      if (ppuVar8 == (undefined **)0xa) {
        uVar17 = *(ulong *)(unaff_x22 + 0x118);
        unaff_x25 = *(ulong *)(unaff_x22 + 0x108);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
        func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x120));
        func_0x000107c61170(uVar17);
        func_0x000107c614ac(ppuVar15);
        func_0x000107c61170(ppuVar7);
        func_0x000107c615e8(unaff_x25);
        ppuVar15 = (undefined **)0x0;
        goto LAB_101e18a08;
      }
    }
    else {
      lVar11 = lVar10;
      func_0x000107c605b8(ppuVar8,lVar10,ppuVar12,lVar14,0);
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar10);
      if (((ulong)ppuVar8 & 1) != 0) goto LAB_101e18790;
    }
    ppuVar12 = ppuVar7;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar8 = ppuVar12;
    func_0x000107c5faec();
    lVar14 = lVar11;
    func_0x000107c61170(ppuVar12);
    ppuVar12 = &PTR____CFConstantStringClassReference_110e09198;
    func_0x000107c5faec();
    if ((ppuVar8 == ppuVar12) && (lVar11 == lVar14)) {
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar11);
LAB_101e18868:
      ppuVar12 = ppuVar7;
      func_0x000107c3fcb0();
      if ((ppuVar12 == (undefined **)0x10) ||
         (ppuVar12 = ppuVar7, func_0x000107c3fcb0(), ppuVar12 == (undefined **)0x11)) {
        *(undefined8 *)(unaff_x22 + 0x98) = 9;
        iVar2 = 2;
        ppuVar12 = (undefined **)0x0;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar2 != 0) {
          ppuVar12 = *(undefined ***)(unaff_x22 + 0xe0);
          func_0x000107c61658(unaff_x22 + 0x98,&UNK_1106c51c8,ppuVar12);
        }
        uVar17 = *(ulong *)(unaff_x22 + 0x118);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
        unaff_x25 = *(ulong *)(unaff_x22 + 0xe8);
        func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(uVar18);
        func_0x000107c615e8(uVar16);
        func_0x000107c61170(ppuVar7);
        func_0x000107c614ac(ppuVar15);
        func_0x000107c61170(uVar17);
        ppuVar15 = (undefined **)0x9;
        goto LAB_101e18988;
      }
    }
    else {
      func_0x000107c605b8(ppuVar8,lVar11,ppuVar12,lVar14,0);
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(lVar11);
      if (((ulong)ppuVar8 & 1) != 0) goto LAB_101e18868;
    }
    *(undefined ***)(unaff_x22 + 0x90) = ppuVar15;
    iVar2 = 2;
    ppuVar12 = (undefined **)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    func_0x000107c614b0(ppuVar15);
    if (iVar2 != 0) {
      ppuVar12 = *(undefined ***)(unaff_x22 + 0xe0);
      func_0x000107c61658(unaff_x22 + 0x90,&UNK_1106c51c8,ppuVar12);
    }
    uVar17 = *(ulong *)(unaff_x22 + 0x118);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
    unaff_x25 = *(ulong *)(unaff_x22 + 0xe8);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
    func_0x000107c615e8(unaff_x25);
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(ppuVar7);
    func_0x000107c614ac(ppuVar15);
    func_0x000107c61170(uVar17);
  }
  else {
    func_0x000107c614ac(ppuVar15);
    ppuVar15 = *(undefined ***)(unaff_x22 + 0x88);
    *(undefined ***)(unaff_x22 + 0xa0) = ppuVar15;
    iVar2 = 2;
    ppuVar12 = (undefined **)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      ppuVar12 = *(undefined ***)(unaff_x22 + 0xe0);
      func_0x000107c61658(unaff_x22 + 0xa0,&UNK_1106c51c8,ppuVar12);
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar17 = *(ulong *)(unaff_x22 + 0x108);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar19);
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
  }
LAB_101e18988:
  UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101e18a30:
  if (lVar14 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101e18a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(ppuVar15);
    return ppuVar15;
  }
  func_0x000107c60e78();
  ppuVar15 = *(undefined ***)(unaff_x22 + 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101e18af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return ppuVar15;
  }
  func_0x000107c60e78(ppuVar15);
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  ppuVar15 = *(undefined ***)(unaff_x22 + 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101e18b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return ppuVar15;
  }
  func_0x000107c60e78(ppuVar15);
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615e8(lVar14);
  ppuVar15 = *(undefined ***)(unaff_x22 + 0x60);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000101e18bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return ppuVar15;
  }
  func_0x000107c60e78();
  puVar3 = PTR_PTR_1126b25b8;
  uStack_110 = unaff_x26;
  uStack_108 = unaff_x25;
  uStack_100 = uVar18;
  uStack_f8 = uVar17;
  func_0x000107c610f8();
  func_0x000107c5fadc(UNRECOVERED_JUMPTABLE_00,ppuVar12);
  func_0x000107c46814();
  func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
  plVar1 = (long *)(lVar14 + _DAT_112e30298);
  plVar4 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar16 = *(undefined8 *)(*plVar4 + 0x10);
  uVar18 = 0x70756b636162;
  func_0x000107c5fadc(0x70756b636162,0xe600000000000000);
  func_0x0001058db56c(uVar16,uVar18,1);
  func_0x000107c61170(uVar18);
  func_0x0001000285a8(0x112e302e0,&UNK_10da18e68);
  puVar5 = &UNK_11048a480;
  func_0x000107c613fc(&UNK_11048a480,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar14);
  FUN_101e19240(plVar1,auStack_138);
  puVar6 = &UNK_11048a4a8;
  func_0x000107c613fc(&UNK_11048a4a8,0x58,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined ***)(puVar6 + 0x18) = ppuVar15;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  puVar6[0x28] = 0;
  FUN_101e19284(auStack_138,puVar6 + 0x30);
  func_0x000107c61174(ppuVar15);
  func_0x000107c61174(puVar3);
  ppuVar15 = (undefined **)0x21;
  func_0x000104887c7c(0x21,0,0x48,4,0xd000000000000023,0x800000010f012e50,&UNK_10da18e78,puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(puVar6);
  return ppuVar15;
}



/* Entry: 101e18aa4; end: 101e18bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e18aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined1 auStack_d8 [40];
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101e18af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return uVar7;
  }
  func_0x000107c60e78(uVar7);
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101e18b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return uVar7;
  }
  func_0x000107c60e78(uVar7);
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615e8(lVar9);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101e18bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return uVar7;
  }
  func_0x000107c60e78();
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(UNRECOVERED_JUMPTABLE,param_3);
  func_0x000107c46814();
  func_0x000107c61170(UNRECOVERED_JUMPTABLE);
  plVar1 = (long *)(lVar9 + _DAT_112e30298);
  plVar3 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar10 = *(undefined8 *)(*plVar3 + 0x10);
  uVar4 = 0x70756b636162;
  func_0x000107c5fadc(0x70756b636162,0xe600000000000000);
  func_0x0001058db56c(uVar10,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e302e0,&UNK_10da18e68);
  puVar5 = &UNK_11048a480;
  func_0x000107c613fc(&UNK_11048a480,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar9);
  FUN_101e19240(plVar1,auStack_d8);
  puVar6 = &UNK_11048a4a8;
  func_0x000107c613fc(&UNK_11048a4a8,0x58,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined **)(puVar6 + 0x20) = puVar2;
  puVar6[0x28] = 0;
  FUN_101e19284(auStack_d8,puVar6 + 0x30);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar7 = 0x21;
  func_0x000104887c7c(0x21,0,0x48,4,0xd000000000000023,0x800000010f012e50,&UNK_10da18e78,puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar6);
  return uVar7;
}



/* Entry: 101e18bd4; end: 101e18bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e18bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46814();
  func_0x000107c61170(param_2);
  plVar1 = (long *)(unaff_x20 + _DAT_112e30298);
  plVar3 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar7 = *(undefined8 *)(*plVar3 + 0x10);
  uVar4 = 0x70756b636162;
  func_0x000107c5fadc(0x70756b636162,0xe600000000000000);
  func_0x0001058db56c(uVar7,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e302e0,&UNK_10da18e68);
  puVar5 = &UNK_11048a480;
  func_0x000107c613fc(&UNK_11048a480,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  FUN_101e19240(plVar1,auStack_78);
  puVar6 = &UNK_11048a4a8;
  func_0x000107c613fc(&UNK_11048a4a8,0x58,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined **)(puVar6 + 0x20) = puVar2;
  puVar6[0x28] = 0;
  FUN_101e19284(auStack_78,puVar6 + 0x30);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar2);
  uVar4 = 0x21;
  func_0x000104887c7c(0x21,0,0x48,4,0xd000000000000023,0x800000010f012e50,&UNK_10da18e78,puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar6);
  return uVar4;
}



/* Entry: 101e18bd8; end: 101e18e03;  */

/* WARNING: Possible PIC construction at 0x000101e18ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e18de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e18bd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112e302a8);
    if (lVar6 == 0) {
      func_0x000107c61174(param_1);
    }
    else {
      func_0x000107c61174(param_1);
      uVar2 = 0xd00000000000002c;
      func_0x000107c5fadc(0xd00000000000002c,0x800000010f012ec0);
      func_0x000107c3ebd4(lVar6);
      func_0x000107c61170(uVar2);
    }
    puVar4 = &UNK_11048a610;
    func_0x000107c613fc(&UNK_11048a610,0x58,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    puVar4[0x30] = 2;
    *(undefined8 *)(puVar4 + 0x38) = param_3;
    *(undefined8 *)(puVar4 + 0x40) = param_4;
    *(code **)(puVar4 + 0x48) = param_5;
    *(undefined8 *)(puVar4 + 0x50) = param_6;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_6);
    func_0x0001001ca524(0x21,0,0x48,4,0,0,&UNK_10da18ec8,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112e30298);
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar5 = *(undefined8 *)(*plVar1 + 0x10);
  uVar2 = 0x646e6573;
  func_0x000107c5fadc(0x646e6573,0xe400000000000000);
  puVar3 = (undefined8 *)0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f012810);
  func_0x0001058db854(uVar5,uVar2,puVar3,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  func_0x000101e19358();
  puVar4 = &UNK_1106c51c8;
  func_0x000107c613f8(&UNK_1106c51c8,puVar3,0,0);
  *puVar3 = 8;
  (*param_5)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar4);
  return;
}



/* Entry: 101e18e04; end: 101e18ee7; -[_TtC40SCMemoriesSnapDocTranscodingServicesImpl37MemoriesSnapDocTranscodingManagerImpl transcodeForSendWithSnapDoc:snapSource:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000101e18ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e18ed0) */

void FUN_101e18e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_11048a5c0;
  func_0x000107c613fc(&UNK_11048a5c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_11048a5e8;
  func_0x000107c613fc(&UNK_11048a5e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101e18bd8(param_3,param_4,0x101e1ac64,puVar1,0x101e1ac68,puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101e18ee8; end: 101e19137;  */

/* WARNING: Possible PIC construction at 0x000101e19110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e19114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e18ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e30298);
    func_0x0001000a8868(plVar1,plVar1[3]);
    uVar4 = *(undefined8 *)(*plVar1 + 0x10);
    uVar6 = 0x74726f707865;
    func_0x000107c5fadc(0x74726f707865,0xe600000000000000);
    puVar2 = (undefined8 *)0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f012810);
    func_0x0001058db854(uVar4,uVar6,puVar2,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170();
    func_0x000101e19358();
    puVar3 = &UNK_1106c51c8;
    func_0x000107c613f8(&UNK_1106c51c8,puVar2,0,0);
    *puVar2 = 8;
    (*param_6)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112e302a8);
  if (lVar5 == 0) {
    func_0x000107c61174(param_1);
    uVar6 = 0x21;
  }
  else {
    func_0x000107c61174(param_1);
    uVar6 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f012ec0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar6);
    uVar6 = 0x21;
    if ((int)lVar5 != 0) {
      uVar6 = 0x22;
    }
  }
  puVar3 = &UNK_11048a520;
  func_0x000107c613fc(&UNK_11048a520,0x58,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(long *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  puVar3[0x30] = 1;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined8 *)(puVar3 + 0x40) = param_5;
  *(code **)(puVar3 + 0x48) = param_6;
  *(undefined8 *)(puVar3 + 0x50) = param_7;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x0001001ca524(uVar6,0,0x48,4,0,0,&UNK_10da18e98,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 101e19138; end: 101e1923f; -[_TtC40SCMemoriesSnapDocTranscodingServicesImpl37MemoriesSnapDocTranscodingManagerImpl transcodeForExportWithSnapDoc:watermarkProfile:snapSource:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000101e19220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e19224) */

void FUN_101e19138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_11048a4d0;
  func_0x000107c613fc(&UNK_11048a4d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_11048a4f8;
  func_0x000107c613fc(&UNK_11048a4f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  uVar4 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101e18ee8(param_3,param_4,param_5,0x101e1a994,puVar1,0x101e1a9a4,puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101e19240; end: 101e19283;  */

long FUN_101e19240(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101e19284; end: 101e1929b;  */

undefined8 * FUN_101e19284(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101e1929c; end: 101e1931b;  */

void FUN_101e1929c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x70;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e1931c;
  plVar4[8] = lVar5;
  plVar4[9] = unaff_x20 + 0x30;
  *(undefined1 *)(plVar4 + 0xd) = uVar3;
  plVar4[6] = lVar1;
  plVar4[7] = lVar2;
  plVar4[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e179a4,0,0);
  return;
}


