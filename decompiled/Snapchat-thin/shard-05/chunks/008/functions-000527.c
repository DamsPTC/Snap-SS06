/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10413ac94; end: 10413ae03;  */

void FUN_10413ac94(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *param_3;
  uVar8 = *(undefined8 *)(lVar7 + 0x68);
  uVar9 = *(undefined8 *)(lVar7 + 0x58);
  lVar1 = 0;
  uStack_98 = param_1;
  uStack_90 = param_4;
  uStack_88 = param_2;
  _swift_getAssociatedTypeWitness
            (0,uVar8,uVar9,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar6 - extraout_x12;
  __ss5ClockP3now7InstantQzvgTj(puVar6,uVar9,uVar8);
  lVar4 = *(long *)(*param_3 + 0x78);
  uVar2 = uVar8;
  _swift_getAssociatedConformanceWitness
            (uVar8,uVar9,lVar1,PTR___ss5ClockTL_110350028,
             PTR___ss5ClockP7InstantAB_s0B8ProtocolTn_110350018);
  __ss15InstantProtocolP8advanced2byx8DurationQz_tFTj(lVar10,(long)param_3 + lVar4,lVar1,uVar2);
  pcVar3 = *(code **)(lVar5 + 8);
  (*pcVar3)(puVar6,lVar1);
  uStack_80 = *(undefined8 *)(lVar7 + 0x50);
  uStack_70 = *(undefined8 *)(lVar7 + 0x60);
  uVar2 = 0;
  uStack_78 = uVar9;
  uStack_68 = uVar8;
  FUN_10412d284(0,&uStack_80);
  func_0x0001041307b8(uStack_98,uStack_90,lVar10,uVar2);
  (*pcVar3)(lVar10,lVar1);
  return;
}



/* Entry: 10413ae04; end: 10413afcb;  */

void FUN_10413ae04(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *in_x3;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  *(long **)(unaff_x22 + 0x88) = in_x3;
  lVar10 = *in_x3;
  lVar1 = 0;
  __sScEMa();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  uVar8 = *(undefined8 *)(lVar10 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  uVar7 = *(undefined8 *)(lVar10 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,uVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar3 = 0xff;
  __sSqMa(0xff,lVar1);
  uVar5 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
  lVar4 = 0;
  __ss6ResultOMa(0,uVar3,uVar5,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 200) = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  uVar3 = *(undefined8 *)(lVar10 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  uVar9 = *(undefined8 *)(lVar10 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar9;
  uVar5 = 0xff;
  FUN_104133040();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar5;
  lVar1 = 0;
  __sSqMa(0,uVar5);
  *(long *)(unaff_x22 + 0x100) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar6;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar3,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  *(long *)(unaff_x22 + 0x120) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413afcc,0,0);
  return;
}



/* Entry: 10413afcc; end: 10413b063;  */

void FUN_10413afcc(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = **(long **)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(lVar2 + 0x80);
  *(long *)(unaff_x22 + 0x148) = (*(long **)(unaff_x22 + 0x88))[2];
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10413b064;
                    /* WARNING: Could not recover jumptable at 0x00010413b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1041506d4(plVar1,*(undefined8 *)(unaff_x22 + 0x130),0,0,0x10413be68,
                *(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x120));
  return;
}



/* Entry: 10413b064; end: 10413b10f;  */

void FUN_10413b064(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x150));
  if (unaff_x20 != 0) {
    *(long *)(lVar3 + 0x170) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10413b42c,0,0);
    return;
  }
  lVar1 = *(long *)(lVar3 + 0x140);
  lVar5 = *(long *)(lVar3 + 0x88);
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTjTu_110350010
                                   + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x158) = plVar2;
  *plVar2 = lVar4;
  plVar2[1] = (long)FUN_10413b110;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTj_110350008)
            (*(undefined8 *)(lVar3 + 0x130),lVar5 + lVar1,*(undefined8 *)(lVar3 + 0xe8),
             *(undefined8 *)(lVar3 + 0xf0));
  return;
}



/* Entry: 10413b110; end: 10413b16b;  */

void FUN_10413b110(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413b16c;
  }
  else {
    pcVar1 = FUN_10413b4e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413b16c; end: 10413b37f;  */

void FUN_10413b16c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar3 = *(long *)(unaff_x22 + 0x108);
  lVar6 = *(long *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = 0;
  FUN_10412d284(0);
  FUN_104146aa0(uVar2,FUN_10413be70,unaff_x22 + 0x10,uVar8,uVar4,uVar1);
  (**(code **)(lVar3 + 0x10))(uVar5,uVar2,uVar1);
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(uVar5,1,lVar6);
  if ((int)uVar5 != 1) {
    puVar10 = *(undefined8 **)(unaff_x22 + 0x110);
    lVar3 = *(long *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *puVar10;
    uVar4 = 0xff;
    __sSccMa(0xff,uVar5,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar4,uVar8,"downstreamContinuation element ",0);
    (**(code **)(lVar3 + 0x20))(uVar1,(long)puVar10 + (long)*(int *)(lVar6 + 0x30),uVar8);
    (**(code **)(lVar3 + 0x10))(uVar2,uVar1,uVar8);
    (**(code **)(lVar3 + 0x38))(uVar2,0,1,uVar8);
    _swift_storeEnumTagMultiPayload(uVar2,uVar5,0);
    func_0x000103969044(uVar2,uVar9,uVar5);
    (**(code **)(lVar3 + 8))(uVar1,uVar8);
  }
  lVar3 = *(long *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
            (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x100));
  (**(code **)(lVar3 + 8))(uVar5,uVar1);
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x168) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10413b380;
                    /* WARNING: Could not recover jumptable at 0x00010413b37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1041506d4(plVar7,*(undefined8 *)(unaff_x22 + 0x130),0,0,0x10413be68,
                *(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x120));
  return;
}



/* Entry: 10413b380; end: 10413b42b;  */

void FUN_10413b380(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x168));
  if (unaff_x20 != 0) {
    *(long *)(lVar3 + 0x170) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10413b42c,0,0);
    return;
  }
  lVar1 = *(long *)(lVar3 + 0x140);
  lVar5 = *(long *)(lVar3 + 0x88);
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTjTu_110350010
                                   + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x158) = plVar2;
  *plVar2 = lVar4;
  plVar2[1] = (long)FUN_10413b110;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTj_110350008)
            (*(undefined8 *)(lVar3 + 0x130),lVar5 + lVar1,*(undefined8 *)(lVar3 + 0xe8),
             *(undefined8 *)(lVar3 + 0xf0));
  return;
}



/* Entry: 10413b42c; end: 10413b4e3;  */

void FUN_10413b42c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_dynamicCast(uVar4,(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0xc0),
                     *(undefined8 *)(unaff_x22 + 0x90),6);
  if ((int)uVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x90));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010413b4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10413b4e4);
  (*pcVar3)();
}



/* Entry: 10413b4e4; end: 10413b5ab;  */

void FUN_10413b4e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))
            (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x120));
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_dynamicCast(uVar4,(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0xc0),
                     *(undefined8 *)(unaff_x22 + 0x90),6);
  if ((int)uVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x90));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010413b5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10413b5ac);
  (*pcVar3)();
}



/* Entry: 10413b5ac; end: 10413b8a7;  */

void FUN_10413b5ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_f0 [5];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *param_2;
  uVar13 = *(undefined8 *)(lVar8 + 0x68);
  uVar14 = *(undefined8 *)(lVar8 + 0x58);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,uVar14,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  alStack_f0[3] = *(long *)(lVar3 + -8);
  alStack_f0[4] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[3] + 0x40));
  lVar7 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_f0[1] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  uVar9 = *(undefined8 *)(lVar8 + 0x50);
  uVar10 = *(undefined8 *)(lVar8 + 0x60);
  lVar3 = 0xff;
  alStack_f0[2] = lVar7;
  uStack_a0 = uVar9;
  uStack_98 = uVar14;
  uStack_90 = uVar10;
  uStack_88 = uVar13;
  func_0x00010413304c(0xff,&uStack_a0);
  lVar8 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar12 - extraout_x12_00;
  lVar11 = param_2[2];
  uVar4 = 0;
  uStack_c8 = uVar9;
  uStack_c0 = uVar14;
  uStack_b8 = uVar10;
  uStack_b0 = uVar13;
  uStack_90 = uVar9;
  uStack_88 = uVar14;
  uStack_80 = uVar10;
  uStack_78 = uVar13;
  uStack_70 = param_1;
  FUN_10412d284(0,&uStack_c8);
  FUN_104146aa0(lVar7,FUN_10413be8c,&uStack_a0,lVar11,uVar4,lVar8);
  (**(code **)(extraout_x13 + 0x10))(puVar12,lVar7,lVar8);
  puVar5 = puVar12;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar12,1,lVar3);
  if ((int)puVar5 != 1) {
    puVar5 = puVar12;
    _swift_getEnumCaseMultiPayload(puVar12,lVar3);
    uVar4 = *puVar12;
    if ((int)puVar5 == 1) {
      uStack_a0 = puVar12[1];
      lVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      lVar11 = lVar3;
      puVar6 = PTR___ss5ErrorWS_11034ee10;
      _swift_allocError();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(puVar6,&uStack_a0,lVar3);
      _swift_continuation_throwingResumeWithError(uVar4,lVar11);
    }
    else {
      uVar9 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      lVar2 = alStack_f0[4];
      puVar6 = PTR___ss5ErrorWS_11034ee10;
      uVar10 = 0xff;
      __sSccMa(0xff,alStack_f0[4],uVar9,PTR___ss5ErrorWS_11034ee10);
      lVar3 = 0;
      _swift_getTupleTypeMetadata2(0,uVar10,lVar2,"clockContinuation deadline ",0);
      lVar1 = alStack_f0[3];
      lVar11 = alStack_f0[2];
      (**(code **)(alStack_f0[3] + 0x20))
                (alStack_f0[2],(long)puVar12 + (long)*(int *)(lVar3 + 0x30),lVar2);
      lVar3 = alStack_f0[1];
      (**(code **)(lVar1 + 0x10))(alStack_f0[1],lVar11,lVar2);
      func_0x00010176fed4(lVar3,uVar4,lVar2,uVar9,puVar6);
      (**(code **)(lVar1 + 8))(lVar11,lVar2);
    }
  }
  (**(code **)(extraout_x13 + 8))(lVar7,lVar8);
  return;
}



/* Entry: 10413b8a8; end: 10413b95f;  */

void FUN_10413b8a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar2 = *unaff_x20;
  _swift_release(unaff_x20[2]);
  lVar4 = *(long *)(*unaff_x20 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x58);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar2 + 0x68),lVar3,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar4,lVar1);
  lVar4 = *(long *)(*unaff_x20 + 0x80);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar4,lVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88),lVar3);
  return;
}



/* Entry: 10413b960; end: 10413b983;  */

void FUN_10413b960(void)

{
  FUN_10413b8a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10413b984; end: 10413b98f;  */

void FUN_10413b984(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f18ac);
  return;
}



/* Entry: 10413b990; end: 10413b9eb;  */

void FUN_10413b990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_50;
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10412d284();
  FUN_10412f974();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Entry: 10413b9ec; end: 10413ba3f;  */

void FUN_10413b9ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10413ba40;
  plVar5[2] = param_1;
  plVar5[3] = (long)unaff_x20;
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(*unaff_x20 + 0x60),*(undefined8 *)(*unaff_x20 + 0x50),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = 0xff;
  __sSqMa(0xff,uVar1);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar2,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar5[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[5] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1041380a4,0,0);
  return;
}



/* Entry: 10413ba40; end: 10413ba7b;  */

void FUN_10413ba40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010413ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10413ba7c; end: 10413ba83;  */

void FUN_10413ba7c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long *unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [16];
  undefined8 auStack_b0 [2];
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar12 = *unaff_x20;
  lVar8 = *(long *)(lVar12 + 0x60);
  lVar10 = *(long *)(lVar12 + 0x50);
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar8,lVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar2 = 0xff;
  __sSqMa(0xff,lVar1);
  lVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0;
  __ss6ResultOMa(0,uVar2,lVar3,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  lVar11 = unaff_x20[2];
  uVar13 = *(undefined8 *)(lVar12 + 0x58);
  lVar12 = *(long *)(lVar12 + 0x68);
  uVar2 = 0;
  lStack_a0 = lVar10;
  uStack_98 = uVar13;
  lStack_90 = lVar8;
  lStack_88 = lVar12;
  lStack_80 = lVar10;
  uStack_78 = uVar13;
  lStack_70 = lVar8;
  lStack_68 = lVar12;
  FUN_10412d284(0,&lStack_80);
  uVar5 = 0xff;
  lStack_80 = lVar10;
  uStack_78 = uVar13;
  lStack_70 = lVar8;
  lStack_68 = lVar12;
  func_0x000104137a1c(0xff,&lStack_80);
  uVar13 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(&lStack_80,FUN_10413ba84,auStack_b0,lVar11,uVar2,uVar13);
  lVar11 = lStack_68;
  lVar10 = lStack_70;
  uVar2 = uStack_78;
  lVar8 = lStack_80;
  if (lStack_80 != 0) {
    if (lStack_70 != 0) {
      uVar13 = 0;
      __sScEMa();
      uVar5 = uVar13;
      func_0x000100f5abbc();
      _swift_allocError(uVar13,uVar5,0,0);
      __sS2cEycfC(uVar5);
      lVar12 = lVar3;
      puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      _swift_allocError(lVar3,PTR___ss5ErrorWS_11034ee10,0,0);
      *puVar6 = uVar13;
      _swift_continuation_throwingResumeWithError(lVar10,lVar12);
    }
    if (lVar11 != 0) {
      uVar13 = 0;
      __sScEMa();
      uVar5 = uVar13;
      func_0x000100f5abbc();
      _swift_allocError(uVar13,uVar5,0,0);
      __sS2cEycfC(uVar5);
      lVar12 = lVar3;
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      auStack_b0[0] = uVar13;
      _swift_allocError(lVar3,PTR___ss5ErrorWS_11034ee10,0,0);
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(puVar7,auStack_b0,lVar3);
      _swift_continuation_throwingResumeWithError(lVar11,lVar12);
    }
    __sScT6cancelyyF(uVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar9,1,1,lVar1);
    _swift_storeEnumTagMultiPayload(puVar9,lVar4,0);
    func_0x000103969044(puVar9,lVar8,lVar4);
    FUN_10413bae0(lVar8,uVar2,lVar10,lVar11);
  }
  return;
}



/* Entry: 10413ba84; end: 10413badf;  */

void FUN_10413ba84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_50;
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10412d284();
  func_0x000104132af4();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 10413bae0; end: 10413baf7;  */

void FUN_10413bae0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10413baf8; end: 10413bb0f;  */

void FUN_10413baf8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104138630(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10413bb10; end: 10413bbab;  */

void FUN_10413bb10(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar3 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(unaff_x20 + (*(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10413bbac;
  plVar1[0x28] = unaff_x20 + uVar3;
  plVar1[0x29] = lVar2;
  plVar1[0x27] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104138db4,0,0);
  return;
}



/* Entry: 10413bbac; end: 10413bbe7;  */

void FUN_10413bbac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010413bbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10413bbe8; end: 10413bc53;  */

void FUN_10413bbe8(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = *(long **)(unaff_x20 + 0x18);
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10413c2d0;
  plVar3[0x1e] = lVar1;
  plVar3[0x1f] = (long)plVar2;
  plVar3[0x1d] = param_2;
  plVar3[0x20] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104139168,0,0);
  return;
}



/* Entry: 10413bc54; end: 10413bccb;  */

void FUN_10413bc54(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x40 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10413bccc; end: 10413bd67;  */

void FUN_10413bccc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + 0x40 & (uVar8 ^ 0xffffffffffffffff);
  plVar11 = *(long **)(unaff_x20 + (*(long *)(lVar7 + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  plVar6 = (long *)0x2a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10413c2d4;
  plVar6[0x2c] = unaff_x20 + uVar8;
  plVar6[0x2d] = (long)plVar11;
  lVar13 = *plVar11;
  lVar10 = *(long *)(lVar13 + 0x60);
  plVar6[0x2e] = lVar10;
  lVar9 = *(long *)(lVar13 + 0x50);
  plVar6[0x2f] = lVar9;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar6[0x30] = lVar2;
  lVar3 = 0xff;
  __sSqMa(0xff,lVar2);
  plVar6[0x31] = lVar3;
  lVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar6[0x32] = lVar7;
  lVar4 = 0;
  __ss6ResultOMa(0,lVar3,lVar7,PTR___ss5ErrorWS_11034ee10);
  plVar6[0x33] = lVar4;
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x34] = uVar8;
  lVar12 = *(long *)(lVar13 + 0x68);
  plVar6[0x35] = lVar12;
  lVar13 = *(long *)(lVar13 + 0x58);
  plVar6[0x36] = lVar13;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar12,lVar13,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  plVar6[0x37] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x38] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x39] = uVar5;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x3a] = uVar8;
  plVar6[0x19] = lVar9;
  plVar6[0x1a] = lVar13;
  plVar6[0x1b] = lVar10;
  plVar6[0x1c] = lVar12;
  lVar7 = 0xff;
  func_0x000104133058();
  plVar6[0x3b] = lVar7;
  lVar4 = 0;
  __sSqMa(0,lVar7);
  plVar6[0x3c] = lVar4;
  lVar7 = *(long *)(lVar4 + -8);
  plVar6[0x3d] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x3e] = uVar5;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x3f] = uVar8;
  plVar6[0x1d] = lVar9;
  plVar6[0x1e] = lVar13;
  plVar6[0x1f] = lVar10;
  plVar6[0x20] = lVar12;
  lVar7 = 0xff;
  func_0x000104133064();
  plVar6[0x40] = lVar7;
  lVar4 = 0;
  __sSqMa(0,lVar7);
  plVar6[0x41] = lVar4;
  lVar7 = *(long *)(lVar4 + -8);
  plVar6[0x42] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x43] = uVar5;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x44] = uVar8;
  lVar7 = *(long *)(lVar3 + -8);
  plVar6[0x45] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x46] = uVar8;
  lVar7 = *(long *)(lVar2 + -8);
  plVar6[0x47] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x48] = uVar5;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x49] = uVar8;
  lVar7 = *(long *)(lVar9 + -8);
  plVar6[0x4a] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x4b] = uVar8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar10,lVar9,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar6[0x4c] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x4d] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x4e] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104139d88,0,0);
  return;
}



/* Entry: 10413bd68; end: 10413bdd3;  */

void FUN_10413bd68(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long *plVar11;
  long unaff_x22;
  long lVar12;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar11 = *(long **)(unaff_x20 + 0x20);
  plVar8 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10413c2d8;
  plVar8[0x11] = (long)plVar11;
  lVar12 = *plVar11;
  lVar2 = 0;
  __sScEMa(0,uVar5,uVar1);
  plVar8[0x12] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar8[0x13] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x14] = uVar3;
  lVar10 = *(long *)(lVar12 + 0x60);
  plVar8[0x15] = lVar10;
  lVar9 = *(long *)(lVar12 + 0x50);
  plVar8[0x16] = lVar9;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar8[0x17] = lVar4;
  uVar5 = 0xff;
  __sSqMa(0xff,lVar4);
  lVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar8[0x18] = lVar2;
  lVar6 = 0;
  __ss6ResultOMa(0,uVar5,lVar2,PTR___ss5ErrorWS_11034ee10);
  plVar8[0x19] = lVar6;
  uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x1a] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar8[0x1b] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x1c] = uVar3;
  lVar6 = *(long *)(lVar12 + 0x58);
  plVar8[0x1d] = lVar6;
  lVar12 = *(long *)(lVar12 + 0x68);
  plVar8[0x1e] = lVar12;
  plVar8[8] = lVar9;
  plVar8[9] = lVar6;
  plVar8[10] = lVar10;
  plVar8[0xb] = lVar12;
  lVar2 = 0xff;
  FUN_104133040();
  plVar8[0x1f] = lVar2;
  lVar4 = 0;
  __sSqMa(0,lVar2);
  plVar8[0x20] = lVar4;
  lVar2 = *(long *)(lVar4 + -8);
  plVar8[0x21] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar7 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x22] = uVar7;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x23] = uVar3;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar12,lVar6,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  plVar8[0x24] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar8[0x25] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x26] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413afcc,0,0);
  return;
}



/* Entry: 10413bdd4; end: 10413be4f;  */

void FUN_10413bdd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10412d284(0,&uStack_70);
  func_0x000104131888(&uStack_70,uVar2,uVar1);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = uStack_50;
  return;
}



/* Entry: 10413be50; end: 10413be6f;  */

void FUN_10413be50(ulong param_1,undefined8 param_2,ulong param_3)

{
  if (((param_1 & param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)param_3 < 0) {
      param_1 = param_3 & 0x7fffffffffffffff;
      _swift_errorRelease(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 10413be70; end: 10413be8b;  */

void FUN_10413be70(undefined8 param_1)

{
  FUN_10413bf14(param_1,0x104132490);
  return;
}



/* Entry: 10413be8c; end: 10413bef7;  */

void FUN_10413be8c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10412d284(0,&uStack_60);
  func_0x000104131de8(param_1,uVar2,uVar1);
  return;
}



/* Entry: 10413bef8; end: 10413bf13;  */

void FUN_10413bef8(undefined8 param_1)

{
  FUN_10413bf14(param_1,0x1041310ec);
  return;
}



/* Entry: 10413bf14; end: 10413bf77;  */

void FUN_10413bf14(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10412d284(0,&uStack_60);
  (*param_3)(param_1);
  return;
}



/* Entry: 10413bf78; end: 10413bf8f;  */

void FUN_10413bf78(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10413ac94(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10413bf90; end: 10413bffb;  */

void FUN_10413bf90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10412d284(0,&uStack_60);
  func_0x0001041302e4();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10413bffc; end: 10413c01f;  */

void FUN_10413bffc(ulong param_1,ulong param_2)

{
  if ((((param_1 ^ 0xffffffffffffffff) & 0xf00000000000000f) == 0) &&
     ((param_2 & 0xf000000000000007) == 0xf000000000000007)) {
    return;
  }
  if (-1 < (long)param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10413c020; end: 10413c26f;  */

void FUN_10413c020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar6 + 0x68);
  lVar4 = *(long *)(lVar6 + 0x58);
  lVar1 = 0;
  uStack_b8 = uVar2;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_88 = param_4;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar4,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar9 = *(long *)(lVar1 + -8);
  lStack_d0 = lVar9;
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_d0 - extraout_x8;
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar6 + 0x50);
  lVar1 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  lVar3 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_c0 = *(undefined8 *)(lVar6 + 0x60);
  lVar6 = 0;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  uStack_70 = uStack_c0;
  uStack_68 = uVar2;
  FUN_10412d284(0,&lStack_80);
  lStack_c8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = lVar3 - extraout_x8_02;
  (**(code **)(lVar1 + 0x10))(lVar3,uStack_a8,lVar5);
  (**(code **)(lStack_90 + 0x10))(lVar10,uStack_88,lVar4);
  uVar2 = uStack_a0;
  lVar1 = lStack_b0;
  (**(code **)(lVar9 + 0x10))(lVar8,uStack_a0,lStack_b0);
  FUN_10412f874(lVar7,lVar3,lVar10,lVar8,lVar5,lVar4,uStack_c0,uStack_b8);
  lVar3 = lVar7;
  FUN_104146c54(lVar7,lVar6);
  (**(code **)(lStack_c8 + 8))(lVar7,lVar6);
  unaff_x20[2] = lVar3;
  (**(code **)(lStack_d0 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),uVar2,lVar1);
  lVar6 = *(long *)(*unaff_x20 + 0x80);
  lVar3 = 0;
  __sSqMa(0,lVar1);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)unaff_x20 + lVar6,uStack_98,lVar3);
  (**(code **)(lStack_90 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88),uStack_88,lVar4);
  return;
}



/* Entry: 10413c270; end: 10413c2cf;  */

void FUN_10413c270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject();
  FUN_10413c020(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10413c2d0; end: 10413c2db;  */

void FUN_10413c2d0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010413ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10413c2dc; end: 10413c337;  */

void FUN_10413c2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(long *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  lVar2 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413c338,0,0);
  return;
}



/* Entry: 10413c338; end: 10413c403;  */

void FUN_10413c338(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2
            (0xff,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),0,0);
  lVar5 = 0;
  __sSaMa(0,uVar4);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  (**(code **)(lVar10 + 0x10))(uVar2,uVar1,uVar3);
  plVar6 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  puVar7 = PTR___sSayxGSmsMc_11034dd28;
  _swift_getWitnessTable(PTR___sSayxGSmsMc_11034dd28,lVar5);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10413c404;
  lVar10 = *(long *)(unaff_x22 + 0x50);
  lVar12 = *(long *)(unaff_x22 + 0x40);
  lVar11 = *(long *)(unaff_x22 + 0x30);
  plVar6[7] = lVar12;
  plVar6[8] = lVar5;
  plVar6[5] = lVar11;
  plVar6[6] = (long)puVar7;
  plVar6[3] = lVar10;
  plVar6[4] = lVar5;
  plVar6[2] = unaff_x22 + 0x10;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(puVar7 + 8) + 8),lVar5,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  plVar6[9] = lVar10;
  lVar5 = *(long *)(lVar10 + -8);
  plVar6[10] = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xb] = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar9;
  lVar5 = 0;
  __sSqMa(0,lVar10);
  uVar9 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xd] = uVar9;
  lVar10 = *(long *)(lVar11 + -8);
  plVar6[0xe] = lVar10;
  uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xf] = uVar9;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar12,lVar11,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar6[0x10] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar6[0x11] = lVar10;
  uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x12] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104153f78,0,0);
  return;
}



/* Entry: 10413c404; end: 10413c45f;  */

void FUN_10413c404(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413c460;
  }
  else {
    pcVar1 = FUN_10413c504;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413c460; end: 10413c503;  */

void FUN_10413c460(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar10 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar7 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar4);
  lVar8 = unaff_x22 + 0x10;
  __sSD20uniqueKeysWithValuesSDyxq_Gqd__n_tcSTRd__x_q_t7ElementRtd__lufC
            (lVar8,uVar3,uVar6,uVar4,uVar5,puVar7);
  (**(code **)(lVar10 + 8))(uVar9,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010413c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar8);
  return;
}



/* Entry: 10413c504; end: 10413c54b;  */

void FUN_10413c504(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010413c548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413c54c; end: 10413c6eb;  */

void FUN_10413c54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(long *)(unaff_x22 + 0x38) = param_5;
  *(long *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(long *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  lVar1 = 0;
  __sSqMa(0,param_5);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar1 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  lVar1 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_4,param_5,0,0);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  lVar1 = 0;
  __sSqMa(0,uVar4);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  lVar1 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413c6ec,0,0);
  return;
}



/* Entry: 10413c6ec; end: 10413c7c3;  */

void FUN_10413c6ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  __sS2Dyxq_GycfC(uVar4,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x48));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  (**(code **)(lVar1 + 0x10))(uVar5,uVar8,uVar3);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar7,uVar3,uVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_getAssociatedConformanceWitness
            (uVar5,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0xd8),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10413c7c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar6,*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xd8),uVar5);
  return;
}



/* Entry: 10413c7c4; end: 10413c81f;  */

void FUN_10413c7c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413c820;
  }
  else {
    pcVar1 = FUN_10413ccfc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413c820; end: 10413cb83;  */

void FUN_10413c820(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)(unaff_x22 + 0xb8);
  lVar18 = *(long *)(unaff_x22 + 0xc0);
  lVar4 = lVar18;
  (**(code **)(*(long *)(lVar17 + -8) + 0x30))(lVar18,1,lVar17);
  if ((int)lVar4 == 1) {
    lVar17 = *(long *)(unaff_x22 + 0xe0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 200) + 8))
              (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar17 + 8))(uVar13,uVar12);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(lVar18);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010413c938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar12);
    return;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  iVar3 = *(int *)(lVar17 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x20))(uVar13,lVar18,uVar14);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(uVar10,lVar18 + iVar3,uVar8);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x10);
  __sSDyq_Sgxcig(uVar11,uVar13,*(undefined8 *)(unaff_x22 + 0x10),uVar14,uVar8,uVar12);
  (**(code **)(lVar4 + 0x30))(uVar11,1,uVar8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar17 = *(long *)(unaff_x22 + 0x98);
  if ((int)uVar11 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar18 = *(long *)(unaff_x22 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x58));
    (**(code **)(lVar17 + 0x10))(uVar8,uVar10,uVar11);
    (**(code **)(lVar18 + 0x10))(uVar12,uVar13,uVar14);
    (**(code **)(lVar18 + 0x38))(uVar12,0,1,uVar14);
    uVar10 = 0;
    __sSDMa(0,uVar11,uVar14,uVar15);
    __sSDyq_Sgxcis(uVar12,uVar8,uVar10);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar17 = *(long *)(unaff_x22 + 0x98);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(lVar18 + 8))(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x38));
    (**(code **)(lVar17 + 8))(uVar11,uVar10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_getAssociatedConformanceWitness
              (uVar10,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0xd8),
               PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10413c7c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar5,*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xd8),uVar10);
    return;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  piVar9 = *(int **)(unaff_x22 + 0x20);
  (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78),
            *(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar17 + 0x10))(uVar14,uVar10,uVar11);
  iVar3 = *piVar9;
  plVar5 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10413cb84;
                    /* WARNING: Could not recover jumptable at 0x00010413cb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar3 + (long)piVar9))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 10413cb84; end: 10413cbdf;  */

void FUN_10413cb84(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413cbe0;
  }
  else {
    pcVar1 = FUN_10413ce00;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413cbe0; end: 10413ccfb;  */

void FUN_10413cbe0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(lVar1 + 0x38))(uVar9,0,1,uVar2);
  uVar3 = 0;
  __sSDMa(0,uVar4,uVar2,uVar7);
  __sSDyq_Sgxcis(uVar9,uVar6,uVar3);
  pcVar10 = *(code **)(lVar1 + 8);
  (*pcVar10)(uVar8,uVar2);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  (*pcVar10)(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar1 + 8))(uVar8,uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0xd8),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10413c7c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar5,*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xd8),uVar4);
  return;
}



/* Entry: 10413ccfc; end: 10413cdff;  */

void FUN_10413ccfc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  (**(code **)(*(long *)(unaff_x22 + 200) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar1 + 8))(uVar3,uVar8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010413cdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413ce00; end: 10413cf4f;  */

void FUN_10413ce00(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar9 = *(long *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(unaff_x22 + 200) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x40));
  pcVar11 = *(code **)(lVar2 + 8);
  (*pcVar11)(uVar6,uVar16);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(uVar3,uVar4);
  (*pcVar10)(uVar7,uVar4);
  (*pcVar11)(uVar12,uVar16);
  (**(code **)(lVar1 + 8))(uVar5,uVar8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010413cf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413cf50; end: 10413d0a3;  */

void FUN_10413cf50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(long *)(unaff_x22 + 0x38) = param_4;
  *(long *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar4 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x70) = lVar4;
  lVar5 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  lVar5 = 0;
  __sSqMa(0,lVar4);
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  lVar4 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,param_7,param_5,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413d0a4,0,0);
  return;
}



/* Entry: 10413d0a4; end: 10413d1af;  */

void FUN_10413d0a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = 0;
  __sSaMa(0,*(undefined8 *)(unaff_x22 + 0x70));
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
  __sS2Dyxq_GycfC(uVar6,uVar5,uVar7);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar6;
  (**(code **)(lVar1 + 0x10))(uVar2,uVar10,uVar4);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar9,uVar4,uVar3);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined8 *)(unaff_x22 + 200) = 0;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_getAssociatedConformanceWitness
            (uVar7,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0xa8),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10413d1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar8,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0xa8),uVar7);
  return;
}



/* Entry: 10413d1b0; end: 10413d20b;  */

void FUN_10413d1b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413d20c;
  }
  else {
    pcVar1 = FUN_10413d6b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413d20c; end: 10413d387;  */

void FUN_10413d20c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x22;
  int *piVar16;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  uVar13 = uVar15;
  (**(code **)(lVar6 + 0x30))(uVar15,1,uVar2);
  if ((int)uVar13 == 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
              (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar6 + 8))(uVar9,uVar10);
    func_0x000100db2dd4(uVar13,uVar8);
    func_0x000100db2dd4(uVar2,uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010413d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xe8));
    return;
  }
  piVar16 = *(int **)(unaff_x22 + 0x28);
  (**(code **)(lVar6 + 0x20))(*(undefined8 *)(unaff_x22 + 0x88),uVar15,uVar2);
  iVar1 = *piVar16;
  plVar14 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x100) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_10413d388;
                    /* WARNING: Could not recover jumptable at 0x00010413d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (plVar14,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 10413d388; end: 10413d3e3;  */

void FUN_10413d388(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413d3e4;
  }
  else {
    pcVar1 = FUN_10413d7ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413d3e4; end: 10413d6b3;  */

void FUN_10413d3e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x22;
  undefined8 uVar19;
  long lVar20;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar18 = *(long *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar7 = &UNK_110748aa8;
  _swift_allocObject(&UNK_110748aa8,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar15;
  *(undefined8 *)(puVar7 + 0x18) = uVar5;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  func_0x000100db2dd4(uVar9,uVar19);
  (**(code **)(lVar18 + 0x10))(uVar1,uVar3,uVar2);
  puVar8 = &UNK_110748ad0;
  _swift_allocObject(&UNK_110748ad0,0x40,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar15;
  *(undefined8 *)(puVar8 + 0x18) = uVar5;
  *(undefined8 *)(puVar8 + 0x20) = uVar11;
  *(undefined8 *)(puVar8 + 0x28) = uVar4;
  *(code **)(puVar8 + 0x30) = FUN_10413d8b8;
  *(undefined **)(puVar8 + 0x38) = puVar7;
  func_0x000100db2dd4(uVar10,uVar17);
  uVar6 = 0;
  __sSD8_VariantVMa(0,uVar15,uVar16,uVar11);
  __sSD8_VariantV20isUniquelyReferencedSbyF();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC(uVar9,uVar15,uVar16,uVar11);
  uVar10 = 0;
  __ss17_NativeDictionaryVMa(0,uVar15,uVar16,uVar11);
  uVar13 = (ulong)(uVar6 & 1);
  __ss17_NativeDictionaryV12mutatingFind_8isUniques10_HashTableV6BucketV6bucket_Sb5foundtx_SbtF
            (uVar14,uVar13,uVar10);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  _swift_bridgeObjectRelease(0x8000000000000000);
  uVar10 = uVar9;
  _swift_bridgeObjectRetain();
  __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
  if ((uVar13 & 1) == 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar18 = *(long *)(unaff_x22 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar11 = uVar10;
    (**(code **)(puVar8 + 0x30))();
    *(undefined8 *)(unaff_x22 + 0x18) = uVar11;
    (**(code **)(lVar18 + 0x10))(uVar1,uVar2,uVar19);
    __ss17_NativeDictionaryV7_insert2at3key5valueys10_HashTableV6BucketV_xnq_ntF
              (uVar14,uVar1,(undefined8 *)(unaff_x22 + 0x18),uVar10,uVar19,uVar17,uVar15);
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar18 = *(long *)(unaff_x22 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar20 = *(long *)(unaff_x22 + 0x58);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x38);
  __ss17_NativeDictionaryV7_valuesSpyq_Gvg(uVar10,uVar17,uVar19,*(undefined8 *)(unaff_x22 + 0x48));
  _swift_release(uVar10);
  __sSa6appendyyxnF(uVar1,uVar19);
  (**(code **)(lVar20 + 8))(uVar15,uVar17);
  (**(code **)(lVar18 + 8))(uVar11,uVar2);
  *(undefined **)(unaff_x22 + 0xe0) = puVar8;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar9;
  *(undefined **)(unaff_x22 + 0xd0) = puVar7;
  *(code **)(unaff_x22 + 0xd8) = FUN_10413d8f0;
  *(code **)(unaff_x22 + 200) = FUN_10413d8b8;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_getAssociatedConformanceWitness
            (uVar10,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0xa8),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar12 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_10413d1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar12,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0xa8),uVar10);
  return;
}



/* Entry: 10413d6b4; end: 10413d7ab;  */

void FUN_10413d6b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar3 + 8))(uVar10,uVar11);
  _swift_bridgeObjectRelease(uVar8);
  func_0x000100db2dd4(uVar14,uVar2);
  func_0x000100db2dd4(uVar9,uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010413d7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413d7ac; end: 10413d8b7;  */

void FUN_10413d7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar3 + 8))(uVar9,uVar10);
  _swift_bridgeObjectRelease(uVar7);
  func_0x000100db2dd4(uVar14,uVar2);
  func_0x000100db2dd4(uVar8,uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010413d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413d8b8; end: 10413d8ef;  */

void FUN_10413d8b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x18),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSa22_allocateUninitializedySayxG_SpyxGtSiFZ_11034dc68)(0,uVar1);
  return;
}



/* Entry: 10413d8f0; end: 10413d917;  */

void FUN_10413d8f0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x30))();
  *param_1 = param_2;
  return;
}



/* Entry: 10413d918; end: 10413d947;  */

void FUN_10413d918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f1914);
  return;
}



/* Entry: 10413d948; end: 10413da77;  */

void FUN_10413d948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = 0;
  FUN_10413da78(0,param_5,param_6);
  puVar2 = PTR___sSciTL_11034fea8;
  iVar1 = *(int *)(lVar3 + 0x2c);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1 + iVar1,1,1,lVar4);
  uVar5 = 0;
  func_0x00010413d93c(0,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar5,0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,param_6,param_5,puVar2,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar1 = *(int *)(lVar3 + 0x24);
  lVar4 = 0;
  func_0x00010413d924(0,param_5,param_6);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_4,lVar4);
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x28)) = param_3;
  return;
}



/* Entry: 10413da78; end: 10413da83;  */

void FUN_10413da78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f198c);
  return;
}



/* Entry: 10413da84; end: 10413dbfb;  */

void FUN_10413da84(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar1 = 0;
  func_0x00010413d924(0,uVar6,uVar5);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  lVar1 = 0;
  func_0x00010413d93c(0,uVar6,uVar5);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413dbfc,0,0);
  return;
}



/* Entry: 10413dbfc; end: 10413e037;  */

void FUN_10413dbfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  long lVar19;
  long lVar20;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
  iVar10 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0x138) = iVar10;
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x10))
            (uVar13,*(long *)(unaff_x22 + 0x20) + (long)iVar10,uVar16);
  _swift_getEnumCaseMultiPayload(uVar13,uVar16);
  puVar9 = PTR___sSciTL_11034fea8;
  iVar10 = (int)uVar13;
  if (iVar10 < 2) {
    if (iVar10 != 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x120) = **(undefined8 **)(unaff_x22 + 200);
      puVar9 = PTR___sSciTL_11034fea8;
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar13,uVar11,puVar9,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar12 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x128) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_10413e700;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
LAB_10413de48:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar12,uVar13,uVar11,uVar16);
      return;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar19 = *(long *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar3 = *(long *)(unaff_x22 + 0x58);
    pcVar14 = *(code **)(lVar19 + 0x20);
    *(code **)(unaff_x22 + 0xd0) = pcVar14;
    (*pcVar14)(uVar18,*(undefined8 *)(unaff_x22 + 200),uVar16);
    (**(code **)(lVar19 + 0x10))(uVar13,uVar18,uVar16);
    pcVar14 = *(code **)(lVar3 + 0x30);
    *(code **)(unaff_x22 + 0xd8) = pcVar14;
    uVar18 = uVar13;
    (*pcVar14)(uVar13,1,uVar11);
    pcVar14 = *(code **)(lVar19 + 8);
    *(code **)(unaff_x22 + 0xe0) = pcVar14;
    (*pcVar14)(uVar13,uVar16);
    puVar9 = PTR___sSciTL_11034fea8;
    if ((int)uVar18 == 1) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar13,uVar11,puVar9,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar12 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_10413e038;
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      goto LAB_10413de48;
    }
    pcVar14 = *(code **)(unaff_x22 + 0xd8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(unaff_x22 + 0xd0))
              (uVar13,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x78));
    (*pcVar14)(uVar13,1,uVar16);
    lVar19 = *(long *)(unaff_x22 + 0x58);
    if ((int)uVar13 != 1) {
      iVar10 = *(int *)(unaff_x22 + 0x138);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar20 = *(long *)(unaff_x22 + 0xc0);
      lVar3 = *(long *)(unaff_x22 + 0x18);
      lVar8 = *(long *)(unaff_x22 + 0x20);
      pcVar14 = *(code **)(lVar19 + 0x20);
      (*pcVar14)(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x98),
                 *(undefined8 *)(unaff_x22 + 0x50));
      lVar19 = *(long *)(lVar8 + *(int *)(lVar3 + 0x28));
      (**(code **)(lVar20 + 8))(lVar8 + iVar10,uVar13);
      if (lVar19 == 1) {
        uVar13 = 2;
      }
      else {
        uVar13 = 1;
        *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar19 = *(long *)(unaff_x22 + 0x58);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x10);
      _swift_storeEnumTagMultiPayload
                (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
                 *(undefined8 *)(unaff_x22 + 0xb8),uVar13);
      (*pcVar14)(uVar18,uVar11,uVar16);
      uVar13 = 0;
      goto LAB_10413de80;
    }
    iVar10 = *(int *)(unaff_x22 + 0x138);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar3 = *(long *)(unaff_x22 + 0xc0);
    lVar20 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0xe0))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar3 + 8))(lVar20 + iVar10,uVar13);
    _swift_storeEnumTagMultiPayload(lVar20 + iVar10,uVar13,3);
  }
  else {
    if (iVar10 == 2) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar11 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar13,uVar11,puVar9,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar12 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_10413e2a0;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      goto LAB_10413de48;
    }
    lVar19 = *(long *)(unaff_x22 + 0x58);
  }
  uVar13 = 1;
LAB_10413de80:
  uVar17 = *(undefined8 *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar19 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar13,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010413df2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413e038; end: 10413e093;  */

void FUN_10413e038(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413e094;
  }
  else {
    pcVar1 = FUN_10413e930;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413e094; end: 10413e29f;  */

void FUN_10413e094(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  code *pcVar16;
  long lVar17;
  long lVar18;
  
  pcVar16 = *(code **)(unaff_x22 + 0xd0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(unaff_x22 + 0xe0))(uVar12,uVar14);
  (*pcVar16)(uVar12,uVar11,uVar14);
  pcVar16 = *(code **)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(unaff_x22 + 0xd0))
            (uVar11,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x78));
  (*pcVar16)(uVar11,1,uVar12);
  lVar17 = *(long *)(unaff_x22 + 0x58);
  if ((int)uVar11 == 1) {
    iVar9 = *(int *)(unaff_x22 + 0x138);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar3 = *(long *)(unaff_x22 + 0xc0);
    lVar18 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 0xe0))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar3 + 8))(lVar18 + iVar9,uVar11);
    _swift_storeEnumTagMultiPayload(lVar18 + iVar9,uVar11,3);
    uVar11 = 1;
  }
  else {
    iVar9 = *(int *)(unaff_x22 + 0x138);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar18 = *(long *)(unaff_x22 + 0xc0);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    pcVar16 = *(code **)(lVar17 + 0x20);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x98),
               *(undefined8 *)(unaff_x22 + 0x50));
    lVar17 = *(long *)(lVar4 + *(int *)(lVar3 + 0x28));
    (**(code **)(lVar18 + 8))(lVar4 + iVar9,uVar11);
    if (lVar17 == 1) {
      uVar11 = 2;
    }
    else {
      uVar11 = 1;
      *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar17 = *(long *)(unaff_x22 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xb8),uVar11);
    (*pcVar16)(uVar15,uVar14,uVar12);
    uVar11 = 0;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar17 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar11,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010413e29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413e2a0; end: 10413e2fb;  */

void FUN_10413e2a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413e2fc;
  }
  else {
    pcVar1 = FUN_10413ea40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413e2fc; end: 10413e5bf;  */

void FUN_10413e2fc(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  lVar22 = *(long *)(unaff_x22 + 0xc0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  uVar16 = uVar19;
  (**(code **)(lVar4 + 0x30))(uVar19,1,uVar11);
  lVar23 = (long)*(int *)(unaff_x22 + 0x138);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
  if ((int)uVar16 == 1) {
    lVar15 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar19,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar22 + 8))(lVar15 + lVar23,uVar17);
    _swift_storeEnumTagMultiPayload(lVar15 + lVar23,uVar17,3);
    pcVar12 = *(code **)(lVar4 + 0x38);
    uVar11 = 1;
  }
  else {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar15 = *(long *)(unaff_x22 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    pcVar13 = *(code **)(lVar4 + 0x20);
    (*pcVar13)(uVar20,uVar19,uVar11);
    (**(code **)(lVar22 + 8))(lVar5 + lVar23,uVar17);
    (**(code **)(lVar4 + 0x10))(lVar5 + lVar23,uVar20,uVar11);
    pcVar12 = *(code **)(lVar4 + 0x38);
    *(code **)(unaff_x22 + 0x108) = pcVar12;
    (*pcVar12)(lVar5 + lVar23,0,1,uVar11);
    _swift_storeEnumTagMultiPayload(lVar5 + lVar23,uVar17,0);
    (**(code **)(lVar15 + 0x10))(uVar16,lVar5 + *(int *)(lVar2 + 0x24),uVar21);
    _swift_getEnumCaseMultiPayload(uVar16,uVar21);
    if ((int)uVar16 == 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(*(undefined8 *)(unaff_x22 + 0x68),uVar11);
      (*pcVar13)(uVar17,uVar16,uVar11);
    }
    else {
      if ((int)uVar16 != 1) {
        piVar3 = (int *)**(undefined8 **)(unaff_x22 + 0x48);
        *(undefined8 *)(unaff_x22 + 0x110) = (*(undefined8 **)(unaff_x22 + 0x48))[1];
        iVar1 = *piVar3;
        plVar10 = (long *)(ulong)(uint)piVar3[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x118) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_10413e5c0;
                    /* WARNING: Could not recover jumptable at 0x00010413e5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar3))(plVar10,*(undefined8 *)(unaff_x22 + 0x10));
        return;
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar4 = *(long *)(unaff_x22 + 0x58);
      uVar16 = (*(undefined8 **)(unaff_x22 + 0x48))[1];
      (*(code *)**(undefined8 **)(unaff_x22 + 0x48))(*(undefined8 *)(unaff_x22 + 0x10));
      _swift_release(uVar16);
      (**(code **)(lVar4 + 8))(uVar17,uVar11);
    }
    uVar11 = 0;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x10),uVar11,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010413e55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413e5c0; end: 10413e607;  */

void FUN_10413e5c0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413e608,0,0);
  return;
}



/* Entry: 10413e608; end: 10413e6ff;  */

void FUN_10413e608(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  (**(code **)(lVar5 + 8))(uVar11,uVar1);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(unaff_x22 + 0x108))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010413e6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413e700; end: 10413e75b;  */

void FUN_10413e700(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413e75c;
  }
  else {
    pcVar1 = FUN_10413eb38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413e75c; end: 10413e92f;  */

void FUN_10413e75c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar15 = *(long *)(unaff_x22 + 0x58);
  uVar8 = uVar11;
  (**(code **)(lVar15 + 0x30))(uVar11,1,uVar9);
  if ((int)uVar8 == 1) {
    iVar7 = *(int *)(unaff_x22 + 0x138);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar13 = *(long *)(unaff_x22 + 0xc0);
    lVar17 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar13 + 8))(lVar17 + iVar7,uVar9);
    _swift_storeEnumTagMultiPayload(lVar17 + iVar7,uVar9,3);
    uVar9 = 1;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x120);
    pcVar16 = *(code **)(lVar15 + 0x20);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x60),uVar11,uVar9);
    lVar15 = lVar13 + 1;
    if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10413e930);
      (*pcVar16)();
    }
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x20) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x18) + 0x28));
    (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xb8));
    if (lVar13 == lVar15) {
      uVar9 = 2;
    }
    else {
      *(long *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = lVar15;
      uVar9 = 1;
    }
    lVar15 = *(long *)(unaff_x22 + 0x58);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xb8),uVar9);
    (*pcVar16)(uVar14,uVar8,uVar11);
    uVar9 = 0;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar15 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar9,1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010413e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413e930; end: 10413ea3f;  */

void FUN_10413e930(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  
  pcVar12 = *(code **)(unaff_x22 + 0xe0);
  iVar7 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar13 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(lVar13 + iVar7,uVar1);
  _swift_storeEnumTagMultiPayload(lVar13 + iVar7,uVar1,3);
  _swift_willThrow();
  (*pcVar12)(uVar9,uVar11);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010413ea3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413ea40; end: 10413eb37;  */

void FUN_10413ea40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  
  iVar9 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(lVar12 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar12 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010413eb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413eb38; end: 10413ec2f;  */

void FUN_10413eb38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  
  iVar9 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(lVar12 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar12 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010413ec2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413ec30; end: 10413ec8f;  */

void FUN_10413ec30(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10413ec90;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar7 = *(long *)(param_2 + 0x10);
  plVar4[5] = lVar7;
  lVar6 = *(long *)(param_2 + 0x18);
  plVar4[6] = lVar6;
  lVar1 = 0;
  func_0x00010413d924(0,lVar7,lVar6);
  plVar4[7] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[8] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[9] = uVar2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar6,lVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[10] = lVar1;
  lVar5 = *(long *)(lVar1 + -8);
  plVar4[0xb] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xd] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xe] = uVar2;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[0xf] = lVar5;
  lVar1 = *(long *)(lVar5 + -8);
  plVar4[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x11] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x12] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x13] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x14] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x15] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x16] = uVar2;
  lVar1 = 0;
  func_0x00010413d93c(0,lVar7,lVar6);
  plVar4[0x17] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x18] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x19] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413dbfc,0,0);
  return;
}



/* Entry: 10413ec90; end: 10413eccb;  */

void FUN_10413ec90(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010413ecc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10413eccc; end: 10413ed9f;  */

void FUN_10413eccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10413eda0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 10413eda0; end: 10413ee0f;  */

void FUN_10413eda0(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010413ee0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10413ee10; end: 10413ef6b;  */

void FUN_10413ee10(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = 0;
  uStack_68 = param_1;
  func_0x00010413d924(0,lVar1,uVar2);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar5 - extraout_x8_01;
  (**(code **)(lVar7 + 0x10))(lVar5);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar1,uVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28));
  (**(code **)(lVar9 + 0x10))(puVar8,unaff_x20 + *(int *)(param_2 + 0x24),lVar3);
  FUN_10413d948(uStack_68,lVar4,uVar6,puVar8,lVar1,uVar2);
  return;
}



/* Entry: 10413ef6c; end: 10413ef8b;  */

void FUN_10413ef6c(long param_1)

{
  FUN_10413ee10();
                    /* WARNING: Could not recover jumptable at 0x0001041406dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 10413ef8c; end: 10413f0b3;  */

void FUN_10413ef8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = 0;
  FUN_10413f0b4(0,param_7,param_8);
  puVar3 = PTR___sSciTL_11034fea8;
  iVar2 = *(int *)(lVar4 + 0x2c);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  uVar6 = 0;
  func_0x00010413ef80(0,param_7,param_8);
  _swift_storeEnumTagMultiPayload(param_1 + iVar2,uVar6,0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,param_8,param_7,puVar3,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(puVar1 + 2) = param_6;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x28)) = param_3;
  return;
}



/* Entry: 10413f0b4; end: 10413f0bf;  */

void FUN_10413f0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f1a7c);
  return;
}



/* Entry: 10413f0c0; end: 10413f207;  */

void FUN_10413f0c0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  lVar1 = 0;
  func_0x00010413ef80(0,uVar5,uVar6);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10413f208,0,0);
  return;
}



/* Entry: 10413f208; end: 10413f63b;  */

void FUN_10413f208(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  long lVar19;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  iVar9 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0x138) = iVar9;
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10))
            (uVar16,*(long *)(unaff_x22 + 0x20) + (long)iVar9,uVar14);
  _swift_getEnumCaseMultiPayload(uVar16,uVar14);
  puVar8 = PTR___sSciTL_11034fea8;
  iVar9 = (int)uVar16;
  if (iVar9 < 2) {
    if (iVar9 != 0) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x120) = **(undefined8 **)(unaff_x22 + 0xb0);
      puVar8 = PTR___sSciTL_11034fea8;
      uVar10 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar14,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar14,uVar10,puVar8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar11 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x128) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10413fd74;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
LAB_10413f454:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar11,uVar14,uVar10,uVar16);
      return;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar18 = *(long *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x40);
    pcVar12 = *(code **)(lVar18 + 0x20);
    *(code **)(unaff_x22 + 0xb8) = pcVar12;
    (*pcVar12)(uVar17,*(undefined8 *)(unaff_x22 + 0xb0),uVar14);
    (**(code **)(lVar18 + 0x10))(uVar16,uVar17,uVar14);
    pcVar12 = *(code **)(lVar2 + 0x30);
    *(code **)(unaff_x22 + 0xc0) = pcVar12;
    uVar17 = uVar16;
    (*pcVar12)(uVar16,1,uVar10);
    pcVar12 = *(code **)(lVar18 + 8);
    *(code **)(unaff_x22 + 200) = pcVar12;
    (*pcVar12)(uVar16,uVar14);
    puVar8 = PTR___sSciTL_11034fea8;
    if ((int)uVar17 == 1) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar10 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar14,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar14,uVar10,puVar8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar11 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10413f63c;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
      goto LAB_10413f454;
    }
    pcVar12 = *(code **)(unaff_x22 + 0xc0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(unaff_x22 + 0xb8))
              (uVar16,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x60));
    (*pcVar12)(uVar16,1,uVar14);
    lVar18 = *(long *)(unaff_x22 + 0x40);
    if ((int)uVar16 != 1) {
      iVar9 = *(int *)(unaff_x22 + 0x138);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar19 = *(long *)(unaff_x22 + 0xa8);
      lVar2 = *(long *)(unaff_x22 + 0x18);
      lVar7 = *(long *)(unaff_x22 + 0x20);
      pcVar12 = *(code **)(lVar18 + 0x20);
      (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
                 *(undefined8 *)(unaff_x22 + 0x38));
      lVar18 = *(long *)(lVar7 + *(int *)(lVar2 + 0x28));
      (**(code **)(lVar19 + 8))(lVar7 + iVar9,uVar16);
      if (lVar18 == 1) {
        uVar16 = 2;
      }
      else {
        uVar16 = 1;
        *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar18 = *(long *)(unaff_x22 + 0x40);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
      _swift_storeEnumTagMultiPayload
                (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
                 *(undefined8 *)(unaff_x22 + 0xa0),uVar16);
      (*pcVar12)(uVar17,uVar10,uVar14);
      uVar16 = 0;
      goto LAB_10413f48c;
    }
    iVar9 = *(int *)(unaff_x22 + 0x138);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    lVar19 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 200))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar2 + 8))(lVar19 + iVar9,uVar16);
    _swift_storeEnumTagMultiPayload(lVar19 + iVar9,uVar16,3);
  }
  else {
    if (iVar9 == 2) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar10 = 0;
      _swift_getAssociatedTypeWitness
                (0,uVar16,uVar14,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
      _swift_getAssociatedConformanceWitness
                (uVar16,uVar14,uVar10,puVar8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar11 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10413f89c;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
      goto LAB_10413f454;
    }
    lVar18 = *(long *)(unaff_x22 + 0x40);
  }
  uVar16 = 1;
LAB_10413f48c:
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar18 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar16,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010413f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413f63c; end: 10413f697;  */

void FUN_10413f63c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413f698;
  }
  else {
    pcVar1 = FUN_10413ff9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413f698; end: 10413f89b;  */

void FUN_10413f698(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  code *pcVar15;
  long lVar16;
  long lVar17;
  
  pcVar15 = *(code **)(unaff_x22 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(unaff_x22 + 200))(uVar11,uVar13);
  (*pcVar15)(uVar11,uVar10,uVar13);
  pcVar15 = *(code **)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0xb8))
            (uVar10,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x60));
  (*pcVar15)(uVar10,1,uVar11);
  lVar16 = *(long *)(unaff_x22 + 0x40);
  if ((int)uVar10 == 1) {
    iVar8 = *(int *)(unaff_x22 + 0x138);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    lVar17 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(unaff_x22 + 200))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar2 + 8))(lVar17 + iVar8,uVar10);
    _swift_storeEnumTagMultiPayload(lVar17 + iVar8,uVar10,3);
    uVar10 = 1;
  }
  else {
    iVar8 = *(int *)(unaff_x22 + 0x138);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar17 = *(long *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    pcVar15 = *(code **)(lVar16 + 0x20);
    (*pcVar15)(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x80),
               *(undefined8 *)(unaff_x22 + 0x38));
    lVar16 = *(long *)(lVar3 + *(int *)(lVar2 + 0x28));
    (**(code **)(lVar17 + 8))(lVar3 + iVar8,uVar10);
    if (lVar16 == 1) {
      uVar10 = 2;
    }
    else {
      uVar10 = 1;
      *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = 1;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar16 = *(long *)(unaff_x22 + 0x40);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xa0),uVar10);
    (*pcVar15)(uVar14,uVar13,uVar11);
    uVar10 = 0;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar16 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar10,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010413f898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413f89c; end: 10413f8f7;  */

void FUN_10413f89c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413f8f8;
  }
  else {
    pcVar1 = FUN_1041400a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413f8f8; end: 10413fc23;  */

void FUN_10413f8f8(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  
  lVar20 = *(long *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar18 = *(long *)(unaff_x22 + 0x40);
  uVar17 = uVar16;
  (**(code **)(lVar18 + 0x30))(uVar16,1,uVar10);
  lVar19 = (long)*(int *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  if ((int)uVar17 == 1) {
    lVar13 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar16,*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar20 + 8))(lVar13 + lVar19,uVar14);
    _swift_storeEnumTagMultiPayload(lVar13 + lVar19,uVar14,3);
    pcVar22 = *(code **)(lVar18 + 0x38);
    uVar10 = 1;
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar13 = *(long *)(unaff_x22 + 0x18);
    lVar7 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(lVar18 + 0x20))(uVar17,uVar16,uVar10);
    pcVar21 = *(code **)(lVar20 + 8);
    *(code **)(unaff_x22 + 0xf0) = pcVar21;
    (*pcVar21)(lVar7 + lVar19,uVar14);
    (**(code **)(lVar18 + 0x10))(lVar7 + lVar19,uVar17,uVar10);
    pcVar22 = *(code **)(lVar18 + 0x38);
    *(code **)(unaff_x22 + 0xf8) = pcVar22;
    (*pcVar22)(lVar7 + lVar19,0,1,uVar10);
    _swift_storeEnumTagMultiPayload(lVar7 + lVar19,uVar14,0);
    puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar13 + 0x24));
    UNRECOVERED_JUMPTABLE = (code *)*puVar1;
    *(code **)(unaff_x22 + 0x100) = UNRECOVERED_JUMPTABLE;
    uVar10 = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x108) = uVar10;
    cVar8 = *(char *)(puVar1 + 2);
    if (cVar8 == '\x01') {
      iVar2 = *(int *)UNRECOVERED_JUMPTABLE;
      plVar9 = (long *)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE + 4);
      _swift_retain(uVar10);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x110) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10413fc24;
                    /* WARNING: Could not recover jumptable at 0x00010413fb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(UNRECOVERED_JUMPTABLE + iVar2))(plVar9,*(undefined8 *)(unaff_x22 + 0x10));
      return;
    }
    lVar19 = *(long *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar18 = *(long *)(unaff_x22 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_retain(uVar10);
    (*UNRECOVERED_JUMPTABLE)(uVar16);
    (**(code **)(lVar18 + 8))(uVar14,uVar17);
    FUN_104140380(UNRECOVERED_JUMPTABLE,uVar10,cVar8);
    if (lVar19 != 0) {
      iVar2 = *(int *)(unaff_x22 + 0x138);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar18 = *(long *)(unaff_x22 + 0x20);
      (*pcVar21)(lVar18 + iVar2,uVar10);
      _swift_storeEnumTagMultiPayload(lVar18 + iVar2,uVar10,3);
      _swift_willThrow();
      uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar12);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_10413fbfc;
    }
    uVar10 = 0;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar22)(*(undefined8 *)(unaff_x22 + 0x10),uVar10,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10413fbfc:
                    /* WARNING: Could not recover jumptable at 0x00010413fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10413fc24; end: 10413fc7f;  */

void FUN_10413fc24(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413fc80;
  }
  else {
    pcVar1 = FUN_104140188;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413fc80; end: 10413fd73;  */

void FUN_10413fc80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  FUN_104140380(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),1);
  (**(code **)(lVar4 + 8))(uVar10,uVar1);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(unaff_x22 + 0xf8))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010413fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413fd74; end: 10413fdcf;  */

void FUN_10413fd74(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10413fdd0;
  }
  else {
    pcVar1 = FUN_104140294;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10413fdd0; end: 10413ff9b;  */

void FUN_10413fdd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar14 = *(long *)(unaff_x22 + 0x40);
  uVar7 = uVar10;
  (**(code **)(lVar14 + 0x30))(uVar10,1,uVar8);
  if ((int)uVar7 == 1) {
    iVar6 = *(int *)(unaff_x22 + 0x138);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar12 = *(long *)(unaff_x22 + 0xa8);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar10,*(undefined8 *)(unaff_x22 + 0x60));
    (**(code **)(lVar12 + 8))(lVar16 + iVar6,uVar8);
    _swift_storeEnumTagMultiPayload(lVar16 + iVar6,uVar8,3);
    uVar8 = 1;
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x120);
    pcVar15 = *(code **)(lVar14 + 0x20);
    (*pcVar15)(*(undefined8 *)(unaff_x22 + 0x48),uVar10,uVar8);
    lVar14 = lVar12 + 1;
    if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10413ff9c);
      (*pcVar15)();
    }
    lVar12 = *(long *)(*(long *)(unaff_x22 + 0x20) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x18) + 0x28));
    (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xa0));
    if (lVar12 == lVar14) {
      uVar8 = 2;
    }
    else {
      *(long *)(*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138)) = lVar14;
      uVar8 = 1;
    }
    lVar14 = *(long *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_storeEnumTagMultiPayload
              (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x138),
               *(undefined8 *)(unaff_x22 + 0xa0),uVar8);
    (*pcVar15)(uVar13,uVar7,uVar10);
    uVar8 = 0;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(lVar14 + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar8,1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010413ff94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10413ff9c; end: 10414009f;  */

void FUN_10413ff9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  
  pcVar11 = *(code **)(unaff_x22 + 200);
  iVar7 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(lVar12 + iVar7,uVar1);
  _swift_storeEnumTagMultiPayload(lVar12 + iVar7,uVar1,3);
  _swift_willThrow();
  (*pcVar11)(uVar8,uVar10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010414009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041400a0; end: 104140187;  */

void FUN_1041400a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  iVar9 = *(int *)(unaff_x22 + 0x138);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(lVar11 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar11 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000104140184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104140188; end: 104140293;  */

void FUN_104140188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar11 = *(long *)(unaff_x22 + 0x40);
  FUN_104140380(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),1);
  (**(code **)(lVar11 + 8))(uVar9,uVar8);
  iVar7 = *(int *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0xf0))(lVar11 + iVar7,uVar8);
  _swift_storeEnumTagMultiPayload(lVar11 + iVar7,uVar8,3);
  _swift_willThrow();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000104140290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104140294; end: 10414037f;  */

void FUN_104140294(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  iVar9 = *(int *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(lVar11 + iVar9,uVar1);
  _swift_storeEnumTagMultiPayload(lVar11 + iVar9,uVar1,3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010414037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104140380; end: 104140387;  */

void FUN_104140380(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}


