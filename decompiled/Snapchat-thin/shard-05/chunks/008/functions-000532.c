/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10416a4a0; end: 10416a8bf;  */

void FUN_10416a4a0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = uVar13;
  (**(code **)(lVar17 + 0x30))(uVar13,1,uVar15);
  if ((int)uVar2 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar18;
    *(undefined8 *)(unaff_x22 + 400) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar13 = 0;
    FUN_10415a7ac(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar18;
    *(undefined8 *)(unaff_x22 + 200) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
    uVar2 = 0xff;
    func_0x0001041641a0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    uVar15 = 0;
    __sSqMa(0,uVar2);
    FUN_104146aa0(unaff_x22 + 0x118,0x10416d294,unaff_x22 + 0x170,uVar10,uVar13,uVar15);
    lVar17 = *(long *)(unaff_x22 + 0x118);
    if (lVar17 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
      lVar6 = *(long *)(unaff_x22 + 0x128);
      lVar11 = *(long *)(lVar6 + 0x10);
      if (lVar11 == 0) {
        _swift_retain(uVar2);
      }
      else {
        uVar15 = 0;
        __sScEMa();
        uVar13 = uVar15;
        func_0x000100f5abbc();
        _swift_retain(uVar2);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        puVar16 = (undefined8 *)(lVar6 + 0x20);
        do {
          uVar18 = *(undefined8 *)(unaff_x22 + 0x200);
          uVar19 = *puVar16;
          uVar12 = uVar15;
          uVar14 = uVar13;
          _swift_allocError(uVar15,uVar13,0,0);
          __sS2cEycfC(uVar14);
          puVar4 = (undefined8 *)puVar1;
          _swift_allocError(uVar18,puVar1,0,0);
          *puVar4 = uVar12;
          _swift_continuation_throwingResumeWithError(uVar19,uVar18);
          lVar11 = lVar11 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar11 != 0);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
      lVar11 = *(long *)(unaff_x22 + 0x1f8);
      __sScT6cancelyyF(uVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar13,1,1,lVar11);
      _swift_storeEnumTagMultiPayload(uVar13,uVar15,0);
      func_0x000103969044(uVar13,lVar17,uVar15);
      _swift_release(uVar2);
      FUN_10416ce30(lVar17,uVar2,lVar6);
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
    lVar6 = *(long *)(unaff_x22 + 0x238);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x230);
    lVar11 = *(long *)(unaff_x22 + 0x228);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(lVar17 + 0x20))(uVar3,uVar13,uVar15);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
    uVar2 = 0;
    FUN_10415a7ac(0);
    FUN_104146aa0(uVar9,FUN_10416cf78,unaff_x22 + 0x10,uVar8,uVar2,uVar7);
    (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar7);
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(uVar5,1);
    if ((int)uVar5 != 1) {
      puVar16 = *(undefined8 **)(unaff_x22 + 0x240);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar6 = *(long *)(unaff_x22 + 0x210);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar14 = *puVar16;
      uVar2 = 0xff;
      __sSccMa(0xff,uVar12,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,uVar2,uVar12,"downstreamContinuation result ",0);
      (**(code **)(lVar6 + 0x20))(uVar15,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar12);
      (**(code **)(lVar6 + 0x10))(uVar13,uVar15,uVar12);
      func_0x000103969044(uVar13,uVar14,uVar12);
      (**(code **)(lVar6 + 8))(uVar15,uVar12);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar17 = *(long *)(unaff_x22 + 0x268);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
    (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
              (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
    (**(code **)(lVar17 + 8))(uVar13,uVar2);
  }
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_10416a8c0;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_10416b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 10416a8c0; end: 10416a98f;  */

void FUN_10416a8c0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10416d2a8,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1c0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1c8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_10416a444;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 10416a990; end: 10416abe7;  */

void FUN_10416a990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  uStack_f8 = param_4;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  uStack_d8 = param_3;
  uStack_c0 = param_6;
  uStack_b8 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = auStack_100 + -extraout_x8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d0 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = (long)puVar9 - extraout_x8_00;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_01;
  lVar8 = *(long *)(lVar5 + -8);
  (**(code **)(lVar8 + 0x10))(lVar12,uStack_d8,lVar5);
  (**(code **)(lVar8 + 0x38))(lVar12,0,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,1,1,lVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar9,1,1,lVar3);
  uStack_90 = uStack_f8;
  uStack_88 = uStack_e8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_68 = uStack_b8;
  uVar7 = 0;
  FUN_10415a7ac(0,&uStack_90);
  func_0x0001041606d8(uStack_a0,lVar12,lVar11,puVar9,uVar7);
  (**(code **)(lStack_b0 + 8))(puVar9,lStack_a8);
  (**(code **)(lStack_d0 + 8))(lVar11,lStack_c8);
  (**(code **)(lVar10 + 8))(lVar12,lVar6);
  return;
}



/* Entry: 10416abe8; end: 10416ae6f;  */

void FUN_10416abe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 in_x3;
  long *in_x4;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar14 = *in_x4;
  uVar11 = *(undefined8 *)(lVar14 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  uVar12 = *(undefined8 *)(lVar14 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,uVar12,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar9 = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar9;
  lVar10 = *(long *)(lVar14 + 0x58);
  *(long *)(unaff_x22 + 0x1d8) = lVar10;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar9,lVar10,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x1e0) = lVar4;
  uVar13 = *(undefined8 *)(lVar14 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar13;
  uVar15 = *(undefined8 *)(lVar14 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar15;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar13,uVar15,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,lVar4,uVar6,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar5;
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar3;
  lVar14 = 0;
  __ss6ResultOMa(0,uVar6,uVar3,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x208) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar12;
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  *(long *)(unaff_x22 + 0x60) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  uVar3 = 0xff;
  FUN_104163e18();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar3;
  lVar14 = 0;
  __sSqMa(0,uVar3);
  *(long *)(unaff_x22 + 0x230) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  lVar14 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0x250) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 600) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar8;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar4;
  uVar8 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar8;
  lVar4 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar4;
  uVar8 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar8;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x288) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar4;
  uVar8 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416ae70,0,0);
  return;
}



/* Entry: 10416ae70; end: 10416af0f;  */

void FUN_10416ae70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar3 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_10416af10;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_10416b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 10416af10; end: 10416afdf;  */

void FUN_10416af10(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10416b03c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1d0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1d8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_10416afe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 10416afe0; end: 10416b03b;  */

void FUN_10416afe0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10416b0fc;
  }
  else {
    pcVar1 = FUN_10416b5ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10416b03c; end: 10416b0fb;  */

void FUN_10416b03c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010416b0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416b0fc; end: 10416b51b;  */

void FUN_10416b0fc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar2 = uVar13;
  (**(code **)(lVar17 + 0x30))(uVar13,1,uVar15);
  if ((int)uVar2 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar18;
    *(undefined8 *)(unaff_x22 + 400) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar13 = 0;
    FUN_10415a7ac(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar18;
    *(undefined8 *)(unaff_x22 + 200) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
    uVar2 = 0xff;
    func_0x0001041641a0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    uVar15 = 0;
    __sSqMa(0,uVar2);
    FUN_104146aa0(unaff_x22 + 0x118,FUN_10416ceb8,unaff_x22 + 0x170,uVar10,uVar13,uVar15);
    lVar17 = *(long *)(unaff_x22 + 0x118);
    if (lVar17 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
      lVar6 = *(long *)(unaff_x22 + 0x128);
      lVar11 = *(long *)(lVar6 + 0x10);
      if (lVar11 == 0) {
        _swift_retain(uVar2);
      }
      else {
        uVar15 = 0;
        __sScEMa();
        uVar13 = uVar15;
        func_0x000100f5abbc();
        _swift_retain(uVar2);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        puVar16 = (undefined8 *)(lVar6 + 0x20);
        do {
          uVar18 = *(undefined8 *)(unaff_x22 + 0x200);
          uVar19 = *puVar16;
          uVar12 = uVar15;
          uVar14 = uVar13;
          _swift_allocError(uVar15,uVar13,0,0);
          __sS2cEycfC(uVar14);
          puVar4 = (undefined8 *)puVar1;
          _swift_allocError(uVar18,puVar1,0,0);
          *puVar4 = uVar12;
          _swift_continuation_throwingResumeWithError(uVar19,uVar18);
          lVar11 = lVar11 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar11 != 0);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
      lVar11 = *(long *)(unaff_x22 + 0x1f8);
      __sScT6cancelyyF(uVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar13,1,1,lVar11);
      _swift_storeEnumTagMultiPayload(uVar13,uVar15,0);
      func_0x000103969044(uVar13,lVar17,uVar15);
      _swift_release(uVar2);
      FUN_10416ce30(lVar17,uVar2,lVar6);
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
    lVar6 = *(long *)(unaff_x22 + 0x238);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x230);
    lVar11 = *(long *)(unaff_x22 + 0x228);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(lVar17 + 0x20))(uVar3,uVar13,uVar15);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
    uVar2 = 0;
    FUN_10415a7ac(0);
    FUN_104146aa0(uVar9,0x10416ced4,unaff_x22 + 0x10,uVar8,uVar2,uVar7);
    (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar7);
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(uVar5,1);
    if ((int)uVar5 != 1) {
      puVar16 = *(undefined8 **)(unaff_x22 + 0x240);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar6 = *(long *)(unaff_x22 + 0x210);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar14 = *puVar16;
      uVar2 = 0xff;
      __sSccMa(0xff,uVar12,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,uVar2,uVar12,"downstreamContinuation result ",0);
      (**(code **)(lVar6 + 0x20))(uVar15,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar12);
      (**(code **)(lVar6 + 0x10))(uVar13,uVar15,uVar12);
      func_0x000103969044(uVar13,uVar14,uVar12);
      (**(code **)(lVar6 + 8))(uVar15,uVar12);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar17 = *(long *)(unaff_x22 + 0x268);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
              (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
    (**(code **)(lVar17 + 8))(uVar13,uVar2);
  }
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_10416b51c;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_10416b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 10416b51c; end: 10416b5eb;  */

void FUN_10416b51c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10416b03c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1d0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1d8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_10416afe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 10416b5ec; end: 10416b6ab;  */

void FUN_10416b5ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010416b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416b6ac; end: 10416b7ef;  */

void FUN_10416b6ac(undefined8 param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar9 = *param_2;
  lVar10 = param_2[2];
  uVar1 = *(ulong *)(lVar9 + 0x50);
  uVar11 = *(ulong *)(lVar9 + 0x58);
  uVar7 = *(undefined8 *)(lVar9 + 0x60);
  uVar3 = *(undefined8 *)(lVar9 + 0x68);
  uVar2 = *(undefined8 *)(lVar9 + 0x70);
  uVar4 = *(undefined8 *)(lVar9 + 0x78);
  uVar5 = 0;
  uStack_e8 = uVar1;
  uStack_e0 = uVar11;
  uStack_d8 = uVar7;
  uStack_d0 = uVar3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar4;
  uStack_a0 = uVar1;
  uStack_98 = uVar11;
  uStack_90 = uVar7;
  uStack_88 = uVar3;
  uStack_80 = uVar2;
  uStack_78 = uVar4;
  uStack_70 = param_1;
  FUN_10415a7ac(0,&uStack_e8);
  uVar6 = 0xff;
  uStack_e8 = uVar1;
  uStack_e0 = uVar11;
  uStack_d8 = uVar7;
  uStack_d0 = uVar3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar4;
  func_0x000104163ff0(0xff,&uStack_e8);
  uVar7 = 0;
  __sSqMa(0,uVar6);
  FUN_104146aa0(&uStack_e8,param_3,auStack_b0,lVar10,uVar5,uVar7);
  uVar11 = uStack_e0;
  uVar1 = uStack_e8;
  if ((((uStack_e8 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0) ||
     ((uStack_e0 & 0xf000000000000007) != 0xf000000000000007)) {
    if ((long)uStack_e0 < 0) {
      uVar11 = uStack_e0 & 0x7fffffffffffffff;
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar8 = (ulong *)PTR___ss5ErrorWS_11034ee10;
      _swift_allocError();
      *puVar8 = uVar11;
      _swift_continuation_throwingResumeWithError(uVar1,uVar7);
    }
    else {
      _swift_continuation_throwingResume(uStack_e8);
      FUN_10416ce94(uVar1,uVar11);
    }
  }
  return;
}



/* Entry: 10416b7f0; end: 10416ba47;  */

void FUN_10416b7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  uStack_d8 = param_3;
  uStack_c0 = param_6;
  uStack_b8 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&uStack_f0 - extraout_x8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d0 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_00;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x10))(lVar10,uStack_d8,lVar4);
  (**(code **)(lVar5 + 0x38))(lVar10,0,1,lVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar8,1,1,lVar3);
  uStack_88 = uStack_e8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_68 = uStack_b8;
  uVar7 = 0;
  uStack_90 = param_4;
  FUN_10415a7ac(0,&uStack_90);
  func_0x0001041606d8(uStack_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(lStack_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(lStack_d0 + 8))(lVar10,lStack_c8);
  (**(code **)(lVar9 + 8))(lVar11,lVar6);
  return;
}



/* Entry: 10416ba48; end: 10416bccb;  */

void FUN_10416ba48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar11 = *in_x4;
  uVar13 = *(undefined8 *)(lVar11 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar13;
  uVar14 = *(undefined8 *)(lVar11 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar14;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar13,uVar14,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar15 = *(undefined8 *)(lVar11 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar15;
  uVar16 = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar16;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar15,uVar16,puVar2,puVar1);
  uVar10 = *(undefined8 *)(lVar11 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar10;
  lVar12 = *(long *)(lVar11 + 0x60);
  *(long *)(unaff_x22 + 0x1e8) = lVar12;
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar12,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x1f0) = lVar11;
  lVar5 = 0xff;
  __sSqMa(0xff,lVar11);
  *(long *)(unaff_x22 + 0x1f8) = lVar5;
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,lVar5,0,0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar6;
  uVar4 = 0xff;
  __sSqMa(0xff,uVar6);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x208) = uVar3;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x210) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x218) = lVar7;
  uVar9 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
  *(ulong *)(unaff_x22 + 0x228) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar16;
  *(long *)(unaff_x22 + 0x68) = lVar12;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  uVar3 = 0xff;
  FUN_104163e18();
  *(undefined8 *)(unaff_x22 + 0x230) = uVar3;
  lVar7 = 0;
  __sSqMa(0,uVar3);
  *(long *)(unaff_x22 + 0x238) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x240) = lVar7;
  uVar9 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar9;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 600) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar11 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar12,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x288) = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416bccc,0,0);
  return;
}



/* Entry: 10416bccc; end: 10416bd6b;  */

void FUN_10416bccc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  lVar3 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_10416bd6c;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_10416b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 10416bd6c; end: 10416be3b;  */

void FUN_10416bd6c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10416be98,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1e0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1e8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_10416be3c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 10416be3c; end: 10416be97;  */

void FUN_10416be3c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10416bf58;
  }
  else {
    pcVar1 = FUN_10416c448;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10416be98; end: 10416bf57;  */

void FUN_10416be98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010416bf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416bf58; end: 10416c377;  */

void FUN_10416bf58(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = uVar13;
  (**(code **)(lVar17 + 0x30))(uVar13,1,uVar15);
  if ((int)uVar2 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x1f8));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar18;
    *(undefined8 *)(unaff_x22 + 400) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar13 = 0;
    FUN_10415a7ac(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar18;
    *(undefined8 *)(unaff_x22 + 200) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
    uVar2 = 0xff;
    func_0x0001041641a0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    uVar15 = 0;
    __sSqMa(0,uVar2);
    FUN_104146aa0(unaff_x22 + 0x118,FUN_10416d280,unaff_x22 + 0x170,uVar10,uVar13,uVar15);
    lVar17 = *(long *)(unaff_x22 + 0x118);
    if (lVar17 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
      lVar6 = *(long *)(unaff_x22 + 0x128);
      lVar11 = *(long *)(lVar6 + 0x10);
      if (lVar11 == 0) {
        _swift_retain(uVar2);
      }
      else {
        uVar15 = 0;
        __sScEMa();
        uVar13 = uVar15;
        func_0x000100f5abbc();
        _swift_retain(uVar2);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        puVar16 = (undefined8 *)(lVar6 + 0x20);
        do {
          uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar19 = *puVar16;
          uVar12 = uVar15;
          uVar14 = uVar13;
          _swift_allocError(uVar15,uVar13,0,0);
          __sS2cEycfC(uVar14);
          puVar4 = (undefined8 *)puVar1;
          _swift_allocError(uVar18,puVar1,0,0);
          *puVar4 = uVar12;
          _swift_continuation_throwingResumeWithError(uVar19,uVar18);
          lVar11 = lVar11 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar11 != 0);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar11 = *(long *)(unaff_x22 + 0x200);
      __sScT6cancelyyF(uVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar13,1,1,lVar11);
      _swift_storeEnumTagMultiPayload(uVar13,uVar15,0);
      func_0x000103969044(uVar13,lVar17,uVar15);
      _swift_release(uVar2);
      FUN_10416ce30(lVar17,uVar2,lVar6);
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
    lVar6 = *(long *)(unaff_x22 + 0x240);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar11 = *(long *)(unaff_x22 + 0x230);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(lVar17 + 0x20))(uVar3,uVar13,uVar15);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
    uVar2 = 0;
    FUN_10415a7ac(0);
    FUN_104146aa0(uVar9,FUN_10416ce60,unaff_x22 + 0x10,uVar8,uVar2,uVar7);
    (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar7);
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(uVar5,1);
    if ((int)uVar5 != 1) {
      puVar16 = *(undefined8 **)(unaff_x22 + 0x248);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar6 = *(long *)(unaff_x22 + 0x218);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x210);
      uVar14 = *puVar16;
      uVar2 = 0xff;
      __sSccMa(0xff,uVar12,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,uVar2,uVar12,"downstreamContinuation result ",0);
      (**(code **)(lVar6 + 0x20))(uVar15,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar12);
      (**(code **)(lVar6 + 0x10))(uVar13,uVar15,uVar12);
      func_0x000103969044(uVar13,uVar14,uVar12);
      (**(code **)(lVar6 + 8))(uVar15,uVar12);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar17 = *(long *)(unaff_x22 + 0x268);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
    (**(code **)(*(long *)(unaff_x22 + 0x240) + 8))
              (*(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x238));
    (**(code **)(lVar17 + 8))(uVar13,uVar2);
  }
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_10416c378;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_10416b6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 10416c378; end: 10416c447;  */

void FUN_10416c378(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10416be98,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1e0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1e8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_10416be3c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 10416c448; end: 10416c507;  */

void FUN_10416c448(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010416c504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416c508; end: 10416c75f;  */

void FUN_10416c508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  uStack_c8 = param_3;
  uStack_c0 = param_6;
  uStack_b8 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&uStack_f0 - extraout_x8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d8 = *(long *)(lVar5 + -8);
  lStack_d0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_00;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar10,1,1,lVar4);
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(lVar8,uStack_c8,lVar3);
  (**(code **)(lVar4 + 0x38))(lVar8,0,1,lVar3);
  uStack_88 = uStack_e8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_68 = uStack_b8;
  uVar7 = 0;
  uStack_90 = param_4;
  FUN_10415a7ac(0,&uStack_90);
  func_0x0001041606d8(uStack_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(lStack_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(lStack_d8 + 8))(lVar10,lStack_d0);
  (**(code **)(lVar9 + 8))(lVar11,lVar6);
  return;
}



/* Entry: 10416c760; end: 10416c783;  */

void FUN_10416c760(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10416c784; end: 10416c78f;  */

void FUN_10416c784(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f28ac);
  return;
}



/* Entry: 10416c790; end: 10416c7ef;  */

void FUN_10416c790(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_60;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10415a7ac();
  func_0x00010415f174();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Entry: 10416c7f0; end: 10416c81b;  */

void FUN_10416c7f0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 10416c81c; end: 10416c86f;  */

void FUN_10416c81c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *unaff_x20;
  long unaff_x22;
  long lVar9;
  
  plVar8 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10416c870;
  plVar8[2] = param_1;
  plVar8[3] = (long)unaff_x20;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar9 = *unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x70),*(undefined8 *)(lVar9 + 0x58),puVar2,puVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x78),*(undefined8 *)(lVar9 + 0x60),puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  uVar4 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar9 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  plVar8[4] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar8[5] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[6] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416835c,0,0);
  return;
}



/* Entry: 10416c870; end: 10416c8ab;  */

void FUN_10416c870(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010416c8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10416c8ac; end: 10416c8b3;  */

void FUN_10416c8ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  long *unaff_x20;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar12 = *unaff_x20;
  uVar8 = *(undefined8 *)(lVar12 + 0x68);
  uVar9 = *(ulong *)(lVar12 + 0x50);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,uVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar11 = *(undefined8 *)(lVar12 + 0x70);
  lVar15 = *(long *)(lVar12 + 0x58);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar11,lVar15,puVar2,puVar1);
  uVar16 = *(undefined8 *)(lVar12 + 0x78);
  lVar13 = *(long *)(lVar12 + 0x60);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar16,lVar13,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  lVar12 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  uVar4 = 0xff;
  lStack_f8 = lVar12;
  __sSqMa(0xff);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar12 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  lStack_100 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_110 + -extraout_x8;
  lVar12 = unaff_x20[2];
  uVar4 = 0;
  uStack_e8 = uVar9;
  lStack_e0 = lVar15;
  lStack_d8 = lVar13;
  uStack_d0 = uVar8;
  uStack_c8 = uVar11;
  uStack_c0 = uVar16;
  uStack_a0 = uVar9;
  lStack_98 = lVar15;
  lStack_90 = lVar13;
  uStack_88 = uVar8;
  uStack_80 = uVar11;
  uStack_78 = uVar16;
  FUN_10415a7ac(0,&uStack_e8);
  uVar5 = 0xff;
  uStack_e8 = uVar9;
  lStack_e0 = lVar15;
  lStack_d8 = lVar13;
  uStack_d0 = uVar8;
  uStack_c8 = uVar11;
  uStack_c0 = uVar16;
  func_0x000104167b58(0xff,&uStack_e8);
  uVar6 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(&uStack_e8,0x10416c974,auStack_b0,lVar12,uVar4,uVar6);
  lVar13 = lStack_d8;
  lVar12 = lStack_e0;
  uVar9 = uStack_e8;
  if (((uStack_e8 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)uStack_e8 < 0) {
      lVar15 = *(long *)(lStack_e0 + 0x10);
      if (lVar15 == 0) {
        _swift_retain(uStack_e8 & 0x7fffffffffffffff);
      }
      else {
        puVar10 = (undefined8 *)(lStack_e0 + 0x20);
        uVar5 = 0;
        __sScEMa();
        uVar4 = uVar5;
        func_0x000100f5abbc();
        _swift_retain(uVar9 & 0x7fffffffffffffff);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        do {
          uVar11 = *puVar10;
          uVar6 = uVar5;
          uVar8 = uVar4;
          _swift_allocError(uVar5,uVar4,0,0);
          __sS2cEycfC(uVar8);
          uVar8 = uVar3;
          puVar7 = (undefined8 *)puVar1;
          _swift_allocError(uVar3,puVar1,0,0);
          *puVar7 = uVar6;
          _swift_continuation_throwingResumeWithError(uVar11,uVar8);
          lVar15 = lVar15 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar15 != 0);
      }
      __sScT6cancelyyF(uVar9 & 0x7fffffffffffffff,PTR___sytN_11034f1b0 + 8,
                       PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      FUN_10416c990(uVar9,lVar12,lVar13);
      _swift_release(uVar9 & 0x7fffffffffffffff);
    }
    else {
      lVar15 = *(long *)(lStack_d8 + 0x10);
      lStack_108 = lStack_e0;
      if (lVar15 == 0) {
        _swift_retain(lStack_e0);
      }
      else {
        puVar10 = (undefined8 *)(lStack_d8 + 0x20);
        uVar5 = 0;
        __sScEMa();
        uVar4 = uVar5;
        func_0x000100f5abbc();
        _swift_retain(lVar12);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        do {
          uVar11 = *puVar10;
          uVar6 = uVar5;
          uVar8 = uVar4;
          _swift_allocError(uVar5,uVar4,0,0);
          __sS2cEycfC(uVar8);
          uVar8 = uVar3;
          puVar7 = (undefined8 *)puVar1;
          _swift_allocError(uVar3,puVar1,0,0);
          *puVar7 = uVar6;
          _swift_continuation_throwingResumeWithError(uVar11,uVar8);
          lVar15 = lVar15 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar15 != 0);
      }
      lVar12 = lStack_108;
      __sScT6cancelyyF(lStack_108,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(*(long *)(lStack_f8 + -8) + 0x38))(puVar14,1,1);
      lVar15 = lStack_100;
      _swift_storeEnumTagMultiPayload(puVar14,lStack_100,0);
      func_0x000103969044(puVar14,uVar9,lVar15);
      _swift_release(lVar12);
      FUN_10416c990(uVar9,lVar12,lVar13);
    }
  }
  return;
}



/* Entry: 10416c8b4; end: 10416c90b;  */

void FUN_10416c8b4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x10416c940;
  }
  else {
    pcVar1 = FUN_10416c90c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 10416c90c; end: 10416c98f;  */

void FUN_10416c90c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010416c93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416c990; end: 10416c9af;  */

void FUN_10416c990(ulong param_1,ulong param_2,ulong param_3)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (0x7fffffffffffffff < param_1) {
      param_3 = param_2;
      param_2 = param_1 & 0x7fffffffffffffff;
    }
    _swift_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  return;
}



/* Entry: 10416c9b0; end: 10416c9c7;  */

void FUN_10416c9b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1041687f0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10416c9c8; end: 10416caab;  */

void FUN_10416c9c8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar6 = uVar3 + 0x50 & (uVar3 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar2 + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar7 = uVar3 + uVar5 + 8 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  lVar2 = 0;
  __sSqMa(0,*(undefined8 *)(unaff_x20 + 0x30));
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + uVar5);
  plVar1 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10416caac;
  plVar1[0x2c] = unaff_x20 + uVar7;
  plVar1[0x2d] = unaff_x20 + (uVar7 + lVar4 + uVar3 & (uVar3 ^ 0xffffffffffffffff));
  plVar1[0x2a] = unaff_x20 + uVar6;
  plVar1[0x2b] = lVar2;
  plVar1[0x29] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041691b8,0,0);
  return;
}



/* Entry: 10416caac; end: 10416cb27;  */

void FUN_10416caac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010416cae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10416cb28; end: 10416cba7;  */

void FUN_10416cb28(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = *(long **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10416d2b0;
  plVar5[0x23] = lVar2;
  plVar5[0x24] = lVar4;
  plVar5[0x21] = lVar1;
  plVar5[0x22] = (long)plVar3;
  plVar5[0x1b] = param_2;
  plVar5[0x25] = *plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104169574,0,0);
  return;
}



/* Entry: 10416cba8; end: 10416cc43;  */

void FUN_10416cba8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar12 + 0x50 & (uVar12 ^ 0xffffffffffffffff);
  plVar15 = *(long **)(unaff_x20 + (*(long *)(lVar11 + 0x40) + uVar12 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10416d2b4;
  plVar9[0x36] = unaff_x20 + uVar12;
  plVar9[0x37] = (long)plVar15;
  lVar11 = *plVar15;
  lVar10 = *(long *)(lVar11 + 0x68);
  plVar9[0x38] = lVar10;
  lVar13 = *(long *)(lVar11 + 0x50);
  plVar9[0x39] = lVar13;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar9[0x3a] = lVar3;
  lVar14 = *(long *)(lVar11 + 0x70);
  plVar9[0x3b] = lVar14;
  lVar16 = *(long *)(lVar11 + 0x58);
  plVar9[0x3c] = lVar16;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar14,lVar16,puVar2,puVar1);
  lVar17 = *(long *)(lVar11 + 0x78);
  plVar9[0x3d] = lVar17;
  lVar18 = *(long *)(lVar11 + 0x60);
  plVar9[0x3e] = lVar18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar17,lVar18,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  lVar11 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,uVar4,uVar6,0,0);
  plVar9[0x3f] = lVar11;
  uVar4 = 0xff;
  __sSqMa(0xff,lVar11);
  lVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar9[0x40] = lVar11;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar4,lVar11,PTR___ss5ErrorWS_11034ee10);
  plVar9[0x41] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x42] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x43] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xb] = lVar13;
  plVar9[0x44] = uVar12;
  plVar9[0xc] = lVar16;
  plVar9[0xd] = lVar18;
  plVar9[0xe] = lVar10;
  plVar9[0xf] = lVar14;
  plVar9[0x10] = lVar17;
  lVar11 = 0xff;
  FUN_104163e18();
  plVar9[0x45] = lVar11;
  lVar7 = 0;
  __sSqMa(0,lVar11);
  plVar9[0x46] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x47] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x48] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x49] = uVar12;
  lVar11 = 0;
  __sSqMa(0,lVar3);
  plVar9[0x4a] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x4b] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4c] = uVar12;
  lVar11 = *(long *)(lVar3 + -8);
  plVar9[0x4d] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4e] = uVar12;
  lVar11 = *(long *)(lVar13 + -8);
  plVar9[0x4f] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x50] = uVar12;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar9[0x51] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x52] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x53] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416a2d4,0,0);
  return;
}



/* Entry: 10416cc44; end: 10416ccdf;  */

void FUN_10416cc44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar12 + 0x50 & (uVar12 ^ 0xffffffffffffffff);
  plVar15 = *(long **)(unaff_x20 + (*(long *)(lVar11 + 0x40) + uVar12 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10416d2b8;
  plVar9[0x36] = unaff_x20 + uVar12;
  plVar9[0x37] = (long)plVar15;
  lVar11 = *plVar15;
  lVar14 = *(long *)(lVar11 + 0x68);
  plVar9[0x38] = lVar14;
  lVar16 = *(long *)(lVar11 + 0x50);
  plVar9[0x39] = lVar16;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,lVar16,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar11 + 0x70);
  plVar9[0x3a] = lVar10;
  lVar13 = *(long *)(lVar11 + 0x58);
  plVar9[0x3b] = lVar13;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar10,lVar13,puVar2,puVar1);
  plVar9[0x3c] = lVar4;
  lVar17 = *(long *)(lVar11 + 0x78);
  plVar9[0x3d] = lVar17;
  lVar18 = *(long *)(lVar11 + 0x60);
  plVar9[0x3e] = lVar18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar17,lVar18,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  lVar11 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,lVar4,uVar6,0,0);
  plVar9[0x3f] = lVar11;
  uVar3 = 0xff;
  __sSqMa(0xff,lVar11);
  lVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar9[0x40] = lVar11;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar3,lVar11,PTR___ss5ErrorWS_11034ee10);
  plVar9[0x41] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x42] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x43] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xb] = lVar16;
  plVar9[0x44] = uVar12;
  plVar9[0xc] = lVar13;
  plVar9[0xd] = lVar18;
  plVar9[0xe] = lVar14;
  plVar9[0xf] = lVar10;
  plVar9[0x10] = lVar17;
  lVar11 = 0xff;
  FUN_104163e18();
  plVar9[0x45] = lVar11;
  lVar7 = 0;
  __sSqMa(0,lVar11);
  plVar9[0x46] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x47] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x48] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x49] = uVar12;
  lVar11 = 0;
  __sSqMa(0,lVar4);
  plVar9[0x4a] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x4b] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4c] = uVar12;
  lVar11 = *(long *)(lVar4 + -8);
  plVar9[0x4d] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4e] = uVar12;
  lVar11 = *(long *)(lVar13 + -8);
  plVar9[0x4f] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x50] = uVar12;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar9[0x51] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x52] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x53] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416ae70,0,0);
  return;
}



/* Entry: 10416cce0; end: 10416cd57;  */

void FUN_10416cce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10415a7ac(0,&uStack_70);
  func_0x00010416267c();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 10416cd58; end: 10416cd93;  */

void FUN_10416cd58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_errorRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 10416cd94; end: 10416ce2f;  */

void FUN_10416cd94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x30) + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar12 + 0x50 & (uVar12 ^ 0xffffffffffffffff);
  plVar15 = *(long **)(unaff_x20 + (*(long *)(lVar11 + 0x40) + uVar12 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10416d2bc;
  plVar9[0x36] = unaff_x20 + uVar12;
  plVar9[0x37] = (long)plVar15;
  lVar11 = *plVar15;
  lVar14 = *(long *)(lVar11 + 0x68);
  plVar9[0x38] = lVar14;
  lVar16 = *(long *)(lVar11 + 0x50);
  plVar9[0x39] = lVar16;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,lVar16,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar17 = *(long *)(lVar11 + 0x70);
  plVar9[0x3a] = lVar17;
  lVar18 = *(long *)(lVar11 + 0x58);
  plVar9[0x3b] = lVar18;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar17,lVar18,puVar2,puVar1);
  lVar10 = *(long *)(lVar11 + 0x78);
  plVar9[0x3c] = lVar10;
  lVar13 = *(long *)(lVar11 + 0x60);
  plVar9[0x3d] = lVar13;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar10,lVar13,puVar2,puVar1);
  plVar9[0x3e] = lVar5;
  lVar6 = 0xff;
  __sSqMa(0xff,lVar5);
  plVar9[0x3f] = lVar6;
  lVar11 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,lVar6,0,0);
  plVar9[0x40] = lVar11;
  uVar3 = 0xff;
  __sSqMa(0xff,lVar11);
  lVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar9[0x41] = lVar11;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar3,lVar11,PTR___ss5ErrorWS_11034ee10);
  plVar9[0x42] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x43] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x44] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xb] = lVar16;
  plVar9[0x45] = uVar12;
  plVar9[0xc] = lVar18;
  plVar9[0xd] = lVar13;
  plVar9[0xe] = lVar14;
  plVar9[0xf] = lVar17;
  plVar9[0x10] = lVar10;
  lVar11 = 0xff;
  FUN_104163e18();
  plVar9[0x46] = lVar11;
  lVar7 = 0;
  __sSqMa(0,lVar11);
  plVar9[0x47] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x48] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x49] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4a] = uVar12;
  lVar11 = *(long *)(lVar6 + -8);
  plVar9[0x4b] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4c] = uVar12;
  lVar11 = *(long *)(lVar5 + -8);
  plVar9[0x4d] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4e] = uVar12;
  lVar11 = *(long *)(lVar13 + -8);
  plVar9[0x4f] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x50] = uVar12;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar9[0x51] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x52] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x53] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10416bccc,0,0);
  return;
}



/* Entry: 10416ce30; end: 10416ce5f;  */

void FUN_10416ce30(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  return;
}



/* Entry: 10416ce60; end: 10416ce93;  */

void FUN_10416ce60(undefined8 param_1)

{
  func_0x00010416cf94(param_1,FUN_10416c508);
  return;
}



/* Entry: 10416ce94; end: 10416ceb7;  */

void FUN_10416ce94(ulong param_1,ulong param_2)

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



/* Entry: 10416ceb8; end: 10416cf07;  */

void FUN_10416ceb8(undefined8 param_1)

{
  FUN_10416cf08(param_1,0x104162080);
  return;
}



/* Entry: 10416cf08; end: 10416cf77;  */

void FUN_10416cf08(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_70;
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10415a7ac();
  (*param_3)();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Entry: 10416cf78; end: 10416cfd3;  */

void FUN_10416cf78(undefined8 param_1)

{
  func_0x00010416cf94(param_1,FUN_10416a990);
  return;
}



/* Entry: 10416cfd4; end: 10416d04f;  */

void FUN_10416cfd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_10415a7ac(0,&uStack_70);
  func_0x00010415fe94(param_3,uVar2,uVar1);
  *param_1 = param_3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10416d050; end: 10416d22f;  */

void FUN_10416d050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  lVar1 = 0;
  uStack_d0 = uVar2;
  uStack_b8 = param_1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  __sSqMa();
  lStack_c0 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)&uStack_e0 - extraout_x8;
  lVar8 = *(long *)(lVar3 + 0x58);
  lStack_c8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar3 + 0x50);
  lVar1 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_d8 = *(undefined8 *)(lVar3 + 0x68);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x70);
  uVar4 = *(undefined8 *)(lVar3 + 0x78);
  lVar3 = 0;
  lStack_90 = lVar11;
  lStack_88 = lVar8;
  uStack_80 = uVar2;
  uStack_78 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_68 = uVar4;
  FUN_10415a7ac(0,&lStack_90);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar9 - extraout_x8_02;
  (**(code **)(lVar1 + 0x10))(lVar9,uStack_b8,lVar11);
  (**(code **)(lStack_c8 + 0x10))(lVar10,uStack_a8,lVar8);
  (**(code **)(lStack_c0 + 0x10))(lVar7,uStack_a0,lStack_b0);
  *(undefined8 *)(lVar6 + -0x10) = uVar4;
  FUN_10415efdc(lVar6,lVar9,lVar10,lVar7,lVar11,lVar8,uStack_d0,uStack_d8,uStack_e0);
  lVar1 = lVar6;
  FUN_104146c54(lVar6,lVar3);
  (**(code **)(lVar5 + 8))(lVar6,lVar3);
  unaff_x20[2] = lVar1;
  return;
}



/* Entry: 10416d230; end: 10416d27f;  */

void FUN_10416d230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_10416d050(param_1,param_2,param_3);
  return;
}



/* Entry: 10416d280; end: 10416d2a7;  */

void FUN_10416d280(void)

{
  FUN_10416ceb8();
  return;
}



/* Entry: 10416d2a8; end: 10416d3b3;  */

void FUN_10416d2a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010416b0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10416d3b4; end: 10416d437;  */

void FUN_10416d3b4(undefined8 *param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = param_2;
  puVar4 = param_3;
  uVar5 = param_4;
  func_0x00010416d2e4();
  if (uVar3 == 0) {
    lVar8 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    uVar7 = -1L << (*param_3 & 0x3f);
    uVar1 = (uVar7 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_3[1] >> 6);
    uVar2 = 0;
    if (~uVar7 <= uVar1) {
      uVar2 = ~uVar7;
    }
    lVar8 = uVar1 - uVar2;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = uVar3;
  param_1[4] = puVar4;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = lVar8;
  *(undefined1 *)(param_1 + 8) = uVar6;
  return;
}



/* Entry: 10416d438; end: 10416d53b;  */

undefined1  [16] FUN_10416d438(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  if (unaff_x20[3] != 0) {
    uVar3 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar3 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar3 <= uVar1) {
      uVar2 = ~uVar3;
    }
    auVar4._0_8_ = uVar1 - uVar2;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 10416d53c; end: 10416d68f;  */

void FUN_10416d53c(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  
  lVar7 = unaff_x20[2] + 1;
  unaff_x20[2] = lVar7;
  uVar4 = *(ulong *)*unaff_x20 & 0x3f;
  lVar5 = 1L << (*(ulong *)*unaff_x20 & 0x3f);
  if (lVar7 == lVar5) {
    if ((*(byte *)(unaff_x20 + 6) & 1) != 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000024,0x800000010f1ee170,
                 "OrderedCollections/_HashTable+BucketIterator.swift",0x32,2,0xd5,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10416d690);
      (*pcVar3)();
    }
    lVar7 = 0;
    *(undefined1 *)(unaff_x20 + 6) = 1;
    unaff_x20[2] = 0;
  }
  uVar6 = unaff_x20[5];
  if ((long)uVar6 < (long)uVar4) {
    lVar8 = (long)(lVar7 * uVar4) >> 6;
    lVar7 = lVar8;
    if (uVar6 != 0) {
      lVar7 = uVar4 << uVar4;
      if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10416d644);
        (*pcVar3)();
      }
      lVar1 = lVar7 + 0x7e;
      if (0 < lVar7 + 0x40) {
        lVar1 = lVar7 + 0x3f;
      }
      lVar7 = 0;
      if (lVar8 + 1 != lVar1 >> 6) {
        lVar7 = lVar8 + 1;
      }
    }
    uVar9 = *(ulong *)(unaff_x20[1] + lVar7 * 8);
    unaff_x20[3] = (unaff_x20[4] | uVar9 << (uVar6 & 0x3f)) & lVar5 - 1U;
    uVar2 = uVar4 - uVar6;
    if (SBORROW8(uVar4,uVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10416d640);
      (*pcVar3)();
    }
    lVar5 = 0x20;
    if (lVar7 != 2 || uVar4 != 5) {
      lVar5 = 0x40;
    }
    unaff_x20[4] = uVar9 >> (uVar2 & 0x3f);
    lVar7 = lVar5 - uVar2;
    if (SBORROW8(lVar5,uVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10416d614);
      (*pcVar3)();
    }
  }
  else {
    unaff_x20[3] = unaff_x20[4] & lVar5 - 1U;
    unaff_x20[4] = (ulong)unaff_x20[4] >> uVar4;
    lVar7 = uVar6 - uVar4;
  }
  unaff_x20[5] = lVar7;
  return;
}



/* Entry: 10416d690; end: 10416d6bb;  */

long FUN_10416d690(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10416d6bc; end: 10416d8df;  */

int FUN_10416d6bc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0xc)) {
    uVar1 = *(byte *)(param_1 + 0xc) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10416d8e0; end: 10416da7f;  */

undefined1  [16] FUN_10416d8e0(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x32);
  _swift_bridgeObjectRelease(uStack_48);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  uStack_50 = 0x203a656c61637328;
  uStack_48 = 0xe800000000000000;
  uStack_58 = param_1 & 0x3f;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0xd000000000000011,0x800000010f1ee1a0);
  uStack_58 = param_2 & 0x3f;
  puVar4 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x203a73616962202c,0xe800000000000000);
  uStack_58 = (long)param_2 >> 6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar3 = 0x203a64656573202c;
  __sSS6appendyySSF(0x203a64656573202c,0xe800000000000000);
  uStack_58 = param_1;
  FUN_1040ba584();
  uVar6 = 0x10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&uStack_58,0x10,0,puVar2,uVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 10416da80; end: 10416db0b;  */

undefined1  [16] FUN_10416da80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_10416d8e0(param_1,param_2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  auVar1._8_8_ = 0x800000010f1ee1c0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 10416db0c; end: 10416db13;  */

undefined1  [16] FUN_10416db0c(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_10416d8e0(uVar1,uVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  auVar2._8_8_ = 0x800000010f1ee1c0;
  auVar2._0_8_ = 0xd000000000000011;
  return auVar2;
}



/* Entry: 10416db14; end: 10416dc8f;  */

undefined1  [16]
FUN_10416db14(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  puStack_68 = (ulong *)0x0;
  pcStack_60 = (code *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x16);
  __sSS6appendyySSF(param_1,param_2);
  uVar4 = param_3[1];
  FUN_10416d8e0(*param_3,uVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0xd000000000000010,0x800000010f1ee220);
  FUN_10416de20(param_3,param_4);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (&puStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  puStack_50 = puStack_68;
  uStack_48 = pcStack_60;
  if (1L << (*param_3 & 0x3f) < 0x80) {
    __sSS6appendyySSF(0x20200a,0xe300000000000000);
    FUN_10416deb8(param_3,param_4);
    pcStack_60 = FUN_10416dc90;
    uStack_58 = 0;
    uVar1 = 0x1130658d8;
    puStack_68 = param_3;
    func_0x0001000285a8(0x1130658d8,&UNK_10dcd99a0);
    uVar2 = uVar1;
    FUN_10416dd60();
    uVar3 = 0x20;
    uVar5 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,uVar1,uVar2);
    _swift_bridgeObjectRelease(param_3);
    __sSS6appendyySSF(uVar3,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    puStack_68 = puStack_50;
    pcStack_60 = (code *)uStack_48;
  }
  auVar6._8_8_ = pcStack_60;
  auVar6._0_8_ = puStack_68;
  return auVar6;
}



/* Entry: 10416dc90; end: 10416dcef;  */

void FUN_10416dc90(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    puVar2 = (undefined *)0xe100000000000000;
    puVar1 = (undefined *)0x5f;
  }
  else {
    puVar1 = PTR___sSiN_11034deb0;
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  return;
}



/* Entry: 10416dcf0; end: 10416dd5f;  */

undefined1  [16] FUN_10416dcf0(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auVar7 [16];
  ulong *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = (ulong *)*unaff_x20;
  uVar2 = unaff_x20[1];
  puStack_68 = (ulong *)0x0;
  pcStack_60 = (code *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x16);
  __sSS6appendyySSF(0xd000000000000017,0x800000010f1ee1e0);
  uVar5 = puVar1[1];
  FUN_10416d8e0(*puVar1,uVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(0xd000000000000010,0x800000010f1ee220);
  FUN_10416de20(puVar1,uVar2);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (&puStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  puStack_50 = puStack_68;
  uStack_48 = pcStack_60;
  if (1L << (*puVar1 & 0x3f) < 0x80) {
    __sSS6appendyySSF(0x20200a,0xe300000000000000);
    FUN_10416deb8(puVar1,uVar2);
    pcStack_60 = FUN_10416dc90;
    uStack_58 = 0;
    uVar2 = 0x1130658d8;
    puStack_68 = puVar1;
    func_0x0001000285a8(0x1130658d8,&UNK_10dcd99a0);
    uVar3 = uVar2;
    FUN_10416dd60();
    uVar4 = 0x20;
    uVar6 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,uVar2,uVar3);
    _swift_bridgeObjectRelease(puVar1);
    __sSS6appendyySSF(uVar4,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    puStack_68 = puStack_50;
    pcStack_60 = (code *)uStack_48;
  }
  auVar7._8_8_ = pcStack_60;
  auVar7._0_8_ = puStack_68;
  return auVar7;
}



/* Entry: 10416dd60; end: 10416ddcf;  */

void FUN_10416dd60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam00000001130658e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130658d8;
  func_0x00010002969c(0x1130658d8,&UNK_10dcd99a0);
  uVar2 = uVar1;
  FUN_10416ddd0();
  puVar3 = PTR___ss15LazyMapSequenceVyxq_GSKsSKRzrlMc_11034e710;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___ss15LazyMapSequenceVyxq_GSKsSKRzrlMc_11034e710,uVar1,&uStack_28);
  puRam00000001130658e0 = puVar3;
  return;
}



/* Entry: 10416ddd0; end: 10416de1f;  */

void FUN_10416ddd0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130658e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130658f0;
  func_0x00010002969c(0x1130658f0,&UNK_10dcd99a8);
  puVar2 = PTR___sSayxGSKsMc_11034dcf0;
  _swift_getWitnessTable(PTR___sSayxGSKsMc_11034dcf0,uVar1);
  puRam00000001130658e8 = puVar2;
  return;
}



/* Entry: 10416de20; end: 10416deb7;  */

/* WARNING: Removing unreachable block (ram,0x00010416de7c) */
/* WARNING: Removing unreachable block (ram,0x00010416de84) */
/* WARNING: Removing unreachable block (ram,0x00010416deb4) */

double FUN_10416de20(ulong *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010416d2e4();
  FUN_10416d53c();
  return (double)(lVar1 != 0) / (double)(1L << (*param_1 & 0x3f));
}



/* Entry: 10416deb8; end: 10416dfdf;  */

/* WARNING: Removing unreachable block (ram,0x00010416df98) */
/* WARNING: Removing unreachable block (ram,0x00010416dfa0) */

ulong FUN_10416deb8(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  
  lVar7 = 0;
  if ((*param_1 & 0x3f) != 0x3f) {
    lVar7 = 1L << (*param_1 & 0x3f);
  }
  uVar2 = 0;
  FUN_10416e440(0,lVar7,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x00010416d2e4();
  if (uVar3 == 0) {
    lVar7 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    uVar5 = -1L << (*param_1 & 0x3f);
    uVar3 = (uVar5 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_1[1] >> 6);
    uVar4 = 0;
    if (~uVar5 <= uVar3) {
      uVar4 = ~uVar5;
    }
    lVar7 = uVar3 - uVar4;
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10416e440(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  lVar1 = uVar4 + uVar3 * 0x10;
  *(long *)(lVar1 + 0x20) = lVar7;
  *(undefined1 *)(lVar1 + 0x28) = uVar6;
  FUN_10416d53c();
  return uVar4;
}



/* Entry: 10416dfe0; end: 10416e05f;  */

undefined1  [16] FUN_10416dfe0(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x402874656b637542;
  return auVar1;
}



/* Entry: 10416e060; end: 10416e3fb;  */

undefined1  [16] FUN_10416e060(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined8 *unaff_x20;
  long lVar21;
  undefined8 ***pppuStack_70;
  undefined8 **ppuStack_68;
  
  pppuStack_70 = (undefined8 ***)unaff_x20[2];
  pppuVar6 = (undefined8 ***)PTR___sSiN_11034deb0;
  pppuVar9 = (undefined8 ***)PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  pppuVar7 = pppuVar6;
  __sSS5countSivg();
  if ((long)pppuVar7 < 4) {
    if (SBORROW8(4,(long)pppuVar7)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10416e3f4);
      (*pcVar5)();
    }
    pppuVar8 = (undefined8 ***)0x20;
    pppuVar14 = (undefined8 ***)0xe100000000000000;
    __sSS9repeating5countSSSJ_SitcfC(0x20,0xe100000000000000,4 - (long)pppuVar7);
    pppuStack_70 = pppuVar8;
    ppuStack_68 = pppuVar14;
    _swift_bridgeObjectRetain(pppuVar14);
    __sSS6appendyySSF(pppuVar6,pppuVar9);
    _swift_bridgeObjectRelease(pppuVar14);
    _swift_bridgeObjectRelease(pppuVar9);
    pppuVar7 = pppuVar9;
    pppuVar9 = (undefined8 ***)ppuStack_68;
    pppuVar6 = pppuStack_70;
  }
  if (unaff_x20[3] == 0) {
    pppuVar14 = (undefined8 ***)0xe400000000000000;
    pppuVar8 = (undefined8 ***)0x6c696e20;
  }
  else {
    uVar20 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar20 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar20 <= uVar1) {
      uVar2 = ~uVar20;
    }
    pppuStack_70 = (undefined8 ***)(uVar1 - uVar2);
    pppuVar8 = (undefined8 ***)PTR___sSiN_11034deb0;
    pppuVar14 = (undefined8 ***)PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    pppuVar7 = pppuVar8;
    __sSS5countSivg();
    if ((long)pppuVar7 < 4) {
      if (SBORROW8(4,(long)pppuVar7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10416e3fc);
        (*pcVar5)();
      }
      pppuVar10 = (undefined8 ***)0x20;
      pppuVar15 = (undefined8 ***)0xe100000000000000;
      __sSS9repeating5countSSSJ_SitcfC(0x20,0xe100000000000000,4 - (long)pppuVar7);
      pppuStack_70 = pppuVar10;
      ppuStack_68 = pppuVar15;
      _swift_bridgeObjectRetain(pppuVar15);
      __sSS6appendyySSF(pppuVar8,pppuVar14);
      _swift_bridgeObjectRelease(pppuVar15);
      _swift_bridgeObjectRelease(pppuVar14);
      pppuVar7 = pppuVar14;
      pppuVar14 = (undefined8 ***)ppuStack_68;
      pppuVar8 = pppuStack_70;
    }
  }
  pppuStack_70 = (undefined8 ***)unaff_x20[4];
  FUN_10416e3fc();
  ppppuVar11 = &pppuStack_70;
  ppuVar16 = (undefined8 **)0x2;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(ppppuVar11,2,0,PTR___ss6UInt64VN_11034f048,pppuVar7);
  lVar21 = unaff_x20[5];
  ppppuVar12 = ppppuVar11;
  __sSS5countSivg();
  if ((long)ppppuVar12 < lVar21) {
    if (SBORROW8(lVar21,(long)ppppuVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10416e3f8);
      (*pcVar5)();
    }
    ppppuVar13 = (undefined8 ****)0x30;
    uVar17 = 0xe100000000000000;
    __sSS9repeating5countSSSJ_SitcfC(0x30,0xe100000000000000,lVar21 - (long)ppppuVar12);
    pppuStack_70 = ppppuVar13;
    ppuStack_68 = (undefined8 **)uVar17;
    _swift_bridgeObjectRetain(uVar17);
    __sSS6appendyySSF(ppppuVar11,ppuVar16);
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease(ppuVar16);
    ppuVar16 = ppuStack_68;
    ppppuVar11 = (undefined8 ****)pppuStack_70;
  }
  pppuStack_70 = (undefined8 ***)0x0;
  ppuStack_68 = (undefined8 **)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x44);
  __sSS6appendyySSF(0xd000000000000016,0x800000010f1ee240);
  puVar19 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar4 = PTR___sSiN_11034deb0;
  puVar18 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar18);
  __sSS6appendyySSF(0x74656b637562202c,0xea0000000000203a);
  __sSS6appendyySSF(pppuVar6,pppuVar9);
  _swift_bridgeObjectRelease(pppuVar9);
  __sSS6appendyySSF(0x3a65756c6176202c,0xe900000000000020);
  __sSS6appendyySSF(pppuVar8,pppuVar14);
  _swift_bridgeObjectRelease(pppuVar14);
  __sSS6appendyySSF(0x203a73746962202c,0xe800000000000000);
  __sSS6appendyySSF(ppppuVar11,ppuVar16);
  _swift_bridgeObjectRelease(ppuVar16);
  __sSS6appendyySSF(0x2820,0xe200000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar19);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar19);
  __sSS6appendyySSF(0x29297374696220,0xe700000000000000);
  auVar3._8_8_ = ppuStack_68;
  auVar3._0_8_ = pppuStack_70;
  return auVar3;
}



/* Entry: 10416e3fc; end: 10416e43b;  */

void FUN_10416e3fc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130658f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___ss6UInt64VSzsMc_11034f060;
  _swift_getWitnessTable(PTR___ss6UInt64VSzsMc_11034f060,PTR___ss6UInt64VN_11034f048);
  puRam00000001130658f8 = puVar1;
  return;
}



/* Entry: 10416e43c; end: 10416e43f;  */

undefined1  [16] FUN_10416e43c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined8 *unaff_x20;
  long lVar21;
  undefined8 ***pppuStack_70;
  undefined8 **ppuStack_68;
  
  pppuStack_70 = (undefined8 ***)unaff_x20[2];
  pppuVar6 = (undefined8 ***)PTR___sSiN_11034deb0;
  pppuVar9 = (undefined8 ***)PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  pppuVar7 = pppuVar6;
  __sSS5countSivg();
  if ((long)pppuVar7 < 4) {
    if (SBORROW8(4,(long)pppuVar7)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10416e3f4);
      (*pcVar5)();
    }
    pppuVar8 = (undefined8 ***)0x20;
    pppuVar14 = (undefined8 ***)0xe100000000000000;
    __sSS9repeating5countSSSJ_SitcfC(0x20,0xe100000000000000,4 - (long)pppuVar7);
    pppuStack_70 = pppuVar8;
    ppuStack_68 = pppuVar14;
    _swift_bridgeObjectRetain(pppuVar14);
    __sSS6appendyySSF(pppuVar6,pppuVar9);
    _swift_bridgeObjectRelease(pppuVar14);
    _swift_bridgeObjectRelease(pppuVar9);
    pppuVar7 = pppuVar9;
    pppuVar9 = (undefined8 ***)ppuStack_68;
    pppuVar6 = pppuStack_70;
  }
  if (unaff_x20[3] == 0) {
    pppuVar14 = (undefined8 ***)0xe400000000000000;
    pppuVar8 = (undefined8 ***)0x6c696e20;
  }
  else {
    uVar20 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar20 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar20 <= uVar1) {
      uVar2 = ~uVar20;
    }
    pppuStack_70 = (undefined8 ***)(uVar1 - uVar2);
    pppuVar8 = (undefined8 ***)PTR___sSiN_11034deb0;
    pppuVar14 = (undefined8 ***)PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    pppuVar7 = pppuVar8;
    __sSS5countSivg();
    if ((long)pppuVar7 < 4) {
      if (SBORROW8(4,(long)pppuVar7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10416e3fc);
        (*pcVar5)();
      }
      pppuVar10 = (undefined8 ***)0x20;
      pppuVar15 = (undefined8 ***)0xe100000000000000;
      __sSS9repeating5countSSSJ_SitcfC(0x20,0xe100000000000000,4 - (long)pppuVar7);
      pppuStack_70 = pppuVar10;
      ppuStack_68 = pppuVar15;
      _swift_bridgeObjectRetain(pppuVar15);
      __sSS6appendyySSF(pppuVar8,pppuVar14);
      _swift_bridgeObjectRelease(pppuVar15);
      _swift_bridgeObjectRelease(pppuVar14);
      pppuVar7 = pppuVar14;
      pppuVar14 = (undefined8 ***)ppuStack_68;
      pppuVar8 = pppuStack_70;
    }
  }
  pppuStack_70 = (undefined8 ***)unaff_x20[4];
  FUN_10416e3fc();
  ppppuVar11 = &pppuStack_70;
  ppuVar16 = (undefined8 **)0x2;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(ppppuVar11,2,0,PTR___ss6UInt64VN_11034f048,pppuVar7);
  lVar21 = unaff_x20[5];
  ppppuVar12 = ppppuVar11;
  __sSS5countSivg();
  if ((long)ppppuVar12 < lVar21) {
    if (SBORROW8(lVar21,(long)ppppuVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10416e3f8);
      (*pcVar5)();
    }
    ppppuVar13 = (undefined8 ****)0x30;
    uVar17 = 0xe100000000000000;
    __sSS9repeating5countSSSJ_SitcfC(0x30,0xe100000000000000,lVar21 - (long)ppppuVar12);
    pppuStack_70 = ppppuVar13;
    ppuStack_68 = (undefined8 **)uVar17;
    _swift_bridgeObjectRetain(uVar17);
    __sSS6appendyySSF(ppppuVar11,ppuVar16);
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease(ppuVar16);
    ppuVar16 = ppuStack_68;
    ppppuVar11 = (undefined8 ****)pppuStack_70;
  }
  pppuStack_70 = (undefined8 ***)0x0;
  ppuStack_68 = (undefined8 **)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x44);
  __sSS6appendyySSF(0xd000000000000016,0x800000010f1ee240);
  puVar19 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar4 = PTR___sSiN_11034deb0;
  puVar18 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar18);
  __sSS6appendyySSF(0x74656b637562202c,0xea0000000000203a);
  __sSS6appendyySSF(pppuVar6,pppuVar9);
  _swift_bridgeObjectRelease(pppuVar9);
  __sSS6appendyySSF(0x3a65756c6176202c,0xe900000000000020);
  __sSS6appendyySSF(pppuVar8,pppuVar14);
  _swift_bridgeObjectRelease(pppuVar14);
  __sSS6appendyySSF(0x203a73746962202c,0xe800000000000000);
  __sSS6appendyySSF(ppppuVar11,ppuVar16);
  _swift_bridgeObjectRelease(ppuVar16);
  __sSS6appendyySSF(0x2820,0xe200000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar19);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar19);
  __sSS6appendyySSF(0x29297374696220,0xe700000000000000);
  auVar3._8_8_ = ppuStack_68;
  auVar3._0_8_ = pppuStack_70;
  return auVar3;
}



/* Entry: 10416e440; end: 10416e53b;  */

undefined * FUN_10416e440(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10416e53c);
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
    puVar3 = (undefined *)0x113065900;
    func_0x0001000285a8(0x113065900,&UNK_10dcd9a00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    _memcpy();
  }
  else {
    if (puVar3 != param_4 || param_4 + uVar6 * 0x10 + 0x20 <= puVar3 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10416e53c; end: 10416e5db;  */

void FUN_10416e53c(ulong param_1,long param_2,ulong *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = (*param_3 & 0x3f) * param_2;
  lVar3 = (long)uVar4 >> 6;
  *(ulong *)(param_4 + lVar3 * 8) =
       ((-1L << (*param_3 & 0x3f)) + 1 << (uVar4 & 0x3f)) - 1U & *(ulong *)(param_4 + lVar3 * 8) |
       param_1 << (uVar4 & 0x3f);
  uVar4 = 0x40 - (uVar4 & 0x3f);
  uVar5 = *param_3 & 0x3f;
  if (uVar4 < uVar5) {
    lVar6 = uVar5 << uVar5;
    if (SCARRY8(lVar6,0x40)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10416e5dc);
      (*pcVar2)();
    }
    lVar1 = lVar6 + 0x7e;
    if (0 < lVar6 + 0x40) {
      lVar1 = lVar6 + 0x3f;
    }
    lVar6 = 0;
    if (lVar3 + 1 != lVar1 >> 6) {
      lVar6 = lVar3 + 1;
    }
    *(ulong *)(param_4 + lVar6 * 8) =
         *(ulong *)(param_4 + lVar6 * 8) & -1L << ((ulong)(uint)((int)*param_3 - (int)uVar4) & 0x3f)
         | param_1 >> (uVar4 & 0x3f);
  }
  return;
}



/* Entry: 10416e5dc; end: 10416e88f;  */

long FUN_10416e5dc(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  ulong *apuStack_b0 [3];
  ulong uStack_98;
  long lStack_78;
  char cStack_70;
  
  lVar7 = *(long *)(*(long *)(param_6 + 8) + 8);
  lVar4 = 0;
  uStack_100 = param_2;
  lStack_e0 = param_6;
  _swift_getAssociatedTypeWitness(0,lVar7,param_5,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620)
  ;
  lStack_108 = *(long *)(lVar4 + -8);
  lStack_f8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar10 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  lVar4 = 0;
  lStack_f0 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar7 + 8),param_5,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  lStack_110 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = lVar11 - extraout_x8_00;
  uVar5 = *param_3;
  uStack_e8 = param_1;
  lStack_d8 = param_7;
  __sSH13_rawHashValue4seedS2i_tFTj(uVar5,lVar4,param_7);
  lVar7 = 1L << (*param_3 & 0x3f);
  if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10416e890);
    (*pcVar3)();
  }
  FUN_10416d3b4(apuStack_b0,lVar7 - 1U & uVar5,param_3,param_4);
  if (cStack_70 != '\x01') {
    while( true ) {
      lVar7 = lStack_f0;
      __sSl10startIndex0B0QzvgTj(lVar10,param_5,lStack_f0);
      __sSk5index_8offsetBy5IndexQzAD_SitFTj(lVar11,lVar10,lStack_78,param_5,lStack_e0);
      lVar2 = lStack_f8;
      pcVar9 = *(code **)(lStack_108 + 8);
      (*pcVar9)(lVar10,lStack_f8);
      pcVar3 = (code *)auStack_d0;
      __sSly7ElementQz5IndexQzcirTj(pcVar3,lVar11,param_5,lVar7);
      lVar7 = lStack_110;
      (**(code **)(lStack_110 + 0x10))(uVar8);
      (*pcVar3)(auStack_d0,0);
      (*pcVar9)(lVar11,lVar2);
      uVar5 = uVar8;
      __sSQ2eeoiySbx_xtFZTj(uVar8,uStack_e8,lVar4,*(undefined8 *)(lStack_d8 + 8));
      (**(code **)(lVar7 + 8))(uVar8,lVar4);
      if ((uVar5 & 1) != 0) break;
      FUN_10416d53c();
      if (uStack_98 == 0) {
        return 0;
      }
      uVar6 = -1L << (*apuStack_b0[0] & 0x3f);
      uVar5 = (uVar6 ^ uStack_98 ^ 0xffffffffffffffff) + ((long)apuStack_b0[0][1] >> 6);
      uVar1 = 0;
      if (~uVar6 <= uVar5) {
        uVar1 = ~uVar6;
      }
      lStack_78 = uVar5 - uVar1;
    }
  }
  return lStack_78;
}



/* Entry: 10416e890; end: 10416e96b;  */

long FUN_10416e890(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *param_2;
  lVar6 = 1L << (uVar5 & 0x3f);
  do {
    lVar2 = lVar6;
    if (param_1 != 0) {
      lVar2 = param_1;
    }
    param_1 = lVar2 + -1;
    if (SBORROW8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10416e964);
      (*pcVar3)();
    }
    uVar8 = param_1 * (uVar5 & 0x3f);
    lVar4 = (long)uVar8 >> 6;
    uVar9 = *(ulong *)(param_3 + lVar4 * 8) >> (uVar8 & 0x3f);
    uVar8 = 0x40 - (uVar8 & 0x3f);
    if (uVar8 < (uVar5 & 0x3f)) {
      lVar7 = (uVar5 & 0x3f) << (uVar5 & 0x3f);
      if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10416e968);
        (*pcVar3)();
      }
      lVar1 = lVar7 + 0x7e;
      if (0 < lVar7 + 0x40) {
        lVar1 = lVar7 + 0x3f;
      }
      lVar7 = 0;
      if (lVar4 + 1 != lVar1 >> 6) {
        lVar7 = lVar4 + 1;
      }
      uVar9 = *(long *)(param_3 + lVar7 * 8) << (uVar8 & 0x3f) |
              uVar9 & (-1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
    }
  } while ((uVar9 & lVar6 - 1U) != 0);
  if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10416e96c);
    (*pcVar3)();
  }
  lVar6 = 0;
  if (lVar2 != 1L << (uVar5 & 0x3f)) {
    lVar6 = lVar2;
  }
  return lVar6;
}



/* Entry: 10416e96c; end: 10417047b;  */

void FUN_10416e96c(ulong param_1,undefined8 param_2,ulong *param_3,ulong param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined1 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  double dVar31;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong *puStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  puVar6 = PTR___sSlTL_11034dfe8;
  lVar29 = *(long *)(*(long *)(param_6 + 8) + 8);
  lVar8 = 0xff;
  puStack_120 = param_3;
  uStack_110 = param_4;
  uStack_c0 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,lVar29,param_5,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar11 = lVar29;
  _swift_getAssociatedConformanceWitness
            (lVar29,param_5,lVar8,puVar6,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar9 = 0;
  lStack_f8 = lVar11;
  __ss16PartialRangeUpToVMa(0,lVar8,lVar11);
  lStack_168 = *(long *)(lVar9 + -8);
  lStack_160 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = PTR___sSTTL_11034db40;
  lVar9 = 0;
  lStack_170 = (long)&lStack_190 - extraout_x8;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar29 + 8),param_5,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  lStack_b0 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar21 = ((long)&lStack_190 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12;
  lVar10 = 0;
  lStack_118 = lVar9;
  lStack_d0 = lVar21;
  __sSqMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  pcVar22 = (code *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pcStack_e8 = pcVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar22 = pcVar22 + -extraout_x12_00;
  lVar9 = 0;
  pcStack_f0 = pcVar22;
  _swift_getAssociatedTypeWitness(0,lVar29,param_5,puVar6,PTR___s11SubSequenceSlTl_11034d5d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)pcVar22 - extraout_x8_02;
  lVar10 = 0;
  lStack_140 = lVar21;
  __ss16PartialRangeFromVMa(0,lVar8,lVar11);
  lStack_188 = *(long *)(lVar10 + -8);
  lStack_180 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar21 - extraout_x8_03;
  lVar11 = lVar29;
  lStack_190 = lVar21;
  _swift_getAssociatedConformanceWitness
            (lVar29,param_5,lVar9,puVar6,PTR___sSl11SubSequenceSl_SlTn_11034df90);
  lStack_148 = *(long *)(lVar11 + 8);
  lVar11 = 0;
  lStack_138 = lVar9;
  _swift_getAssociatedTypeWitness(0,lStack_148,lVar9,puVar14,PTR___s8IteratorSTTl_11034d648);
  lStack_158 = *(long *)(lVar11 + -8);
  lStack_a8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  pcVar22 = (code *)(lVar21 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  pcStack_d8 = pcVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar22 = pcVar22 + -extraout_x12_01;
  lVar11 = *(long *)(lVar8 + -8);
  pcStack_e0 = pcVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)pcVar22 - extraout_x8_05;
  __sSl10startIndex0B0QzvgTj(lVar21,param_5,lVar29);
  lVar10 = lVar21;
  __sSk8distance4from2toSi5IndexQz_AEtFTj(lVar21,param_1,param_5,param_6);
  pcVar22 = *(code **)(lVar11 + 8);
  lStack_150 = lVar11;
  (*pcVar22)(lVar21,lVar8);
  lVar11 = 0;
  __sSnMa(0,lVar8,lStack_f8);
  iVar3 = *(int *)(lVar11 + 0x24);
  lStack_108 = lVar29;
  __sSl10startIndex0B0QzvgTj(lVar21,param_5,lVar29);
  lVar11 = lVar21;
  lStack_178 = (long)iVar3;
  uStack_128 = param_1;
  uStack_100 = param_2;
  __sSk8distance4from2toSi5IndexQz_AEtFTj(lVar21,param_1 + (long)iVar3,param_5,param_6);
  lStack_130 = lVar8;
  (*pcVar22)(lVar21,lVar8);
  lVar9 = lStack_108;
  lVar8 = lVar11 - lVar10;
  if (SBORROW8(lVar11,lVar10)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f834);
    (*pcVar22)();
  }
  if (lVar8 < 1) {
    return;
  }
  lVar23 = param_5;
  __sSl5countSivgTj(param_5,lStack_108);
  lVar13 = lStack_f8;
  uVar24 = uStack_110;
  lVar28 = lStack_118;
  puVar5 = puStack_120;
  uVar26 = uStack_128;
  lVar29 = lStack_130;
  lStack_b8 = lVar8;
  if (SBORROW8(lVar23,lVar8)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f840);
    (*pcVar22)();
  }
  if ((lVar23 - lVar8) / 2 <= lVar10) {
    lVar13 = param_5;
    __sSl5countSivgTj(param_5,lVar9);
    lVar28 = lStack_f8;
    uVar24 = uStack_110;
    lVar29 = lStack_118;
    puVar5 = puStack_120;
    uVar26 = uStack_128;
    lVar10 = lStack_130;
    lVar8 = lStack_178;
    if (SBORROW8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f844);
      (*pcVar22)();
    }
    if ((*puStack_120 & 0x3f) < 5) {
      if (4 < lVar13 - lVar11) goto LAB_10416efc8;
    }
    else {
      dVar31 = (double)(1L << (*puStack_120 & 0x3f)) * 0.75;
      if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f858);
        (*pcVar22)();
      }
      if (dVar31 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f864);
        (*pcVar22)();
      }
      if (9.223372036854776e+18 <= dVar31) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f86c);
        (*pcVar22)();
      }
      lVar23 = SUB168(SEXT816((long)dVar31) * SEXT816(0x5555555555555556),8);
      if (lVar23 - (lVar23 >> 0x3f) <= lVar13 - lVar11) {
LAB_10416efc8:
        uStack_70 = 0;
        puStack_a0 = puStack_120;
        uStack_98 = uStack_110;
        uStack_90 = 0;
        uVar12 = 0;
        puVar18 = puStack_120;
        func_0x00010416d2e4();
        lVar8 = lStack_b8;
        uVar26 = 0;
        uStack_88 = uVar12;
        puStack_80 = puVar18;
        uStack_78 = uVar24;
        do {
          uVar24 = uStack_88;
          if (uStack_88 != 0) {
            uVar25 = ~(-1L << (*puVar5 & 0x3f));
            uVar12 = ((long)puVar5[1] >> 6) + (uStack_88 ^ uVar25);
            uVar30 = 0;
            if (uVar25 <= uVar12) {
              uVar30 = uVar25;
            }
            lVar9 = uVar12 - uVar30;
            if (lVar11 <= lVar9) {
              if (SBORROW8(lVar9,lVar8)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f830);
                (*pcVar22)();
              }
              lVar9 = (lVar9 - lVar8) - ((long)puVar5[1] >> 6);
              uVar24 = (uVar25 & lVar9 >> 0x3f) + lVar9 ^ uVar25;
              uVar26 = (*puVar5 & 0x3f) * uVar26;
              lVar9 = (long)uVar26 >> 6;
              *(ulong *)(uStack_98 + lVar9 * 8) =
                   *(ulong *)(uStack_98 + lVar9 * 8) ^ (uVar24 ^ uStack_88) << (uVar26 & 0x3f);
              uVar26 = 0x40 - (uVar26 & 0x3f);
              uVar12 = *puVar5 & 0x3f;
              if (uVar26 < uVar12) {
                lVar10 = uVar12 << uVar12;
                if (SCARRY8(lVar10,0x40)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f83c);
                  (*pcVar22)();
                }
                lVar21 = lVar10 + 0x7e;
                if (0 < lVar10 + 0x40) {
                  lVar21 = lVar10 + 0x3f;
                }
                lVar10 = 0;
                if (lVar9 + 1 != lVar21 >> 6) {
                  lVar10 = lVar9 + 1;
                }
                *(ulong *)(uStack_98 + lVar10 * 8) =
                     *(ulong *)(uStack_98 + lVar10 * 8) ^ (uVar24 ^ uStack_88) >> (uVar26 & 0x3f);
              }
            }
          }
          uStack_88 = uVar24;
          FUN_10416d53c();
          uVar26 = uStack_90;
          puVar5 = puStack_a0;
        } while (uStack_90 != 0);
        return;
      }
    }
    uVar12 = uStack_128 + lStack_178;
    lStack_c8 = param_5;
    __sSQ2eeoiySbx_xtFZTj(uVar12,uStack_128 + lStack_178,lStack_130,*(undefined8 *)(lStack_f8 + 8));
    if ((uVar12 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f868);
      (*pcVar22)();
    }
    (**(code **)(lStack_150 + 0x10))(lVar21,uVar26 + lVar8,lVar10);
    lVar8 = lStack_190;
    __ss16PartialRangeFromVyAByxGxcfC(lStack_190,lVar21,lVar10,lVar28);
    lVar10 = lStack_180;
    puVar14 = PTR___ss16PartialRangeFromVyxGSXsMc_11034e770;
    _swift_getWitnessTable(PTR___ss16PartialRangeFromVyxGSXsMc_11034e770,lStack_180);
    __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
              (lStack_140,lVar8,lStack_c8,lVar10,lVar9,puVar14);
    lVar28 = lStack_138;
    lVar9 = lStack_148;
    __sST12makeIterator0B0QzyFTj(pcStack_e0,lStack_138,lStack_148);
    (**(code **)(lStack_188 + 8))(lVar8,lVar10);
    lVar8 = lStack_a8;
    _swift_getAssociatedConformanceWitness
              (lVar9,lVar28,lStack_a8,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
    pcVar22 = pcStack_f0;
    lStack_c8 = lVar9;
    __sSt4next7ElementQzSgyFTj(pcStack_f0,lVar8);
    pcStack_d8 = *(code **)(lStack_b0 + 0x30);
    pcVar15 = pcVar22;
    (*pcStack_d8)(pcVar22,1,lVar29);
    if ((int)pcVar15 != 1) {
      pcStack_e8 = *(code **)(lStack_b0 + 0x20);
      do {
        (*pcStack_e8)(lStack_d0,pcVar22,lVar29);
        uVar26 = *puVar5;
        __sSH13_rawHashValue4seedS2i_tFTj(uVar26,lVar29,uStack_c0);
        uVar30 = *puVar5;
        uVar25 = 1L << (uVar30 & 0x3f);
        uVar12 = uVar25 - 1;
        if (SBORROW8(uVar25,1)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f818);
          (*pcVar22)();
        }
        uVar26 = uVar12 & uVar26;
        uStack_70 = 0;
        puStack_a0 = puVar5;
        uStack_98 = uVar24;
        uVar16 = uVar26;
        puVar18 = puVar5;
        uVar19 = uVar24;
        uStack_90 = uVar26;
        func_0x00010416d2e4();
        uVar1 = uStack_90;
        uStack_88 = uVar16;
        puStack_80 = puVar18;
        uStack_78 = uVar19;
        uVar4 = uStack_70;
        if (uVar16 != 0) {
          uVar1 = ((long)puVar5[1] >> 6) + (uVar16 ^ uVar12);
          uVar20 = 0;
          if (uVar12 <= uVar1) {
            uVar20 = uVar12;
          }
          if (uVar1 - uVar20 == lVar11) {
            uVar1 = uVar26;
            uVar4 = 0;
          }
          else {
            uVar4 = false;
            uVar30 = uVar30 & 0x3f;
            lVar9 = uVar30 << uVar30;
            lVar8 = lVar9 + 0x7e;
            if (0 < lVar9 + 0x40) {
              lVar8 = lVar9 + 0x3f;
            }
            puVar17 = puVar18;
            uVar20 = uVar19;
            do {
              uVar26 = uVar26 + 1;
              if (uVar26 == uVar25) {
                uStack_88 = uVar16;
                puStack_80 = puVar18;
                uStack_78 = uVar19;
                if ((bool)uVar4) goto LAB_10416f86c;
                uVar26 = 0;
                uVar4 = true;
              }
              if ((long)uVar20 < (long)uVar30) {
                lVar28 = (long)(uVar26 * uVar30) >> 6;
                lVar10 = lVar28;
                if (uVar20 != 0) {
                  if (SCARRY8(lVar9,0x40)) {
                    /* WARNING: Does not return */
                    pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f810);
                    uStack_88 = uVar16;
                    puStack_80 = puVar18;
                    uStack_78 = uVar19;
                    (*pcVar22)();
                  }
                  lVar10 = 0;
                  if (lVar28 + 1 != lVar8 >> 6) {
                    lVar10 = lVar28 + 1;
                  }
                }
                uVar1 = uVar30 - uVar20;
                if (SBORROW8(uVar30,uVar20)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f804);
                  uStack_88 = uVar16;
                  puStack_80 = puVar18;
                  uStack_78 = uVar19;
                  (*pcVar22)();
                }
                lVar28 = 0x20;
                if (lVar10 != 2 || uVar30 != 5) {
                  lVar28 = 0x40;
                }
                uStack_78 = lVar28 - uVar1;
                if (SBORROW8(lVar28,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f808);
                  uStack_88 = uVar16;
                  puStack_80 = puVar18;
                  uStack_78 = uVar19;
                  (*pcVar22)();
                }
                uVar27 = *(ulong *)(uVar24 + lVar10 * 8);
                puVar17 = (ulong *)(uVar27 << (uVar20 & 0x3f) | (ulong)puVar17);
                puStack_80 = (ulong *)(uVar27 >> (uVar1 & 0x3f));
              }
              else {
                uStack_78 = uVar20 - uVar30;
                if (SBORROW8(uVar20,uVar30)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f7fc);
                  uStack_88 = uVar16;
                  puStack_80 = puVar18;
                  uStack_78 = uVar19;
                  (*pcVar22)();
                }
                puStack_80 = (ulong *)((ulong)puVar17 >> uVar30);
              }
              uStack_88 = (ulong)puVar17 & uVar12;
              uVar1 = uVar26;
              if (uStack_88 == 0) break;
              uVar27 = ((long)puVar5[1] >> 6) + (uStack_88 ^ uVar12);
              uVar2 = 0;
              if (uVar12 <= uVar27) {
                uVar2 = uVar12;
              }
              puVar17 = puStack_80;
              uVar20 = uStack_78;
            } while (uVar27 - uVar2 != lVar11);
          }
        }
        uStack_70 = uVar4;
        uStack_90 = uVar1;
        if (SBORROW8(lVar11,lStack_b8)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f824);
          (*pcVar22)();
        }
        func_0x00010416d47c(lVar11 - lStack_b8,0);
        (**(code **)(lStack_b0 + 8))(lStack_d0,lVar29);
        pcVar22 = pcStack_f0;
        bVar7 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f828);
          (*pcVar22)();
        }
        __sSt4next7ElementQzSgyFTj(pcStack_f0,lStack_a8,lStack_c8);
        pcVar15 = pcVar22;
        (*pcStack_d8)(pcVar22,1,lVar29);
      } while ((int)pcVar15 != 1);
    }
    (**(code **)(lStack_158 + 8))(pcStack_e0,lStack_a8);
    return;
  }
  if ((*puStack_120 & 0x3f) < 5) {
    if (4 < lVar10) goto LAB_10416ee08;
  }
  else {
    dVar31 = (double)(1L << (*puStack_120 & 0x3f)) * 0.75;
    if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f850);
      (*pcVar22)();
    }
    if (dVar31 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f854);
      (*pcVar22)();
    }
    if (9.223372036854776e+18 <= dVar31) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f860);
      (*pcVar22)();
    }
    lVar11 = SUB168(SEXT816((long)dVar31) * SEXT816(0x5555555555555556),8);
    if (lVar11 - (lVar11 >> 0x3f) <= lVar10) {
LAB_10416ee08:
      uStack_70 = 0;
      puStack_a0 = puStack_120;
      uStack_98 = uStack_110;
      uStack_90 = 0;
      uVar12 = 0;
      puVar18 = puStack_120;
      func_0x00010416d2e4();
      lVar11 = lStack_b8;
      uVar26 = 0;
      uStack_88 = uVar12;
      puStack_80 = puVar18;
      uStack_78 = uVar24;
      puVar18 = puVar5;
      do {
        uVar24 = uStack_88;
        if (uStack_88 != 0) {
          uVar25 = ~(-1L << (*puVar18 & 0x3f));
          uVar12 = ((long)puVar18[1] >> 6) + (uStack_88 ^ uVar25);
          uVar30 = 0;
          if (uVar25 <= uVar12) {
            uVar30 = uVar25;
          }
          lVar8 = uVar12 - uVar30;
          if (lVar8 < lVar10) {
            if (SCARRY8(lVar8,lVar11)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f82c);
              (*pcVar22)();
            }
            lVar8 = (lVar8 + lVar11) - ((long)puVar18[1] >> 6);
            uVar24 = (uVar25 & lVar8 >> 0x3f) + lVar8 ^ uVar25;
            uVar26 = (*puVar18 & 0x3f) * uVar26;
            lVar8 = (long)uVar26 >> 6;
            *(ulong *)(uStack_98 + lVar8 * 8) =
                 *(ulong *)(uStack_98 + lVar8 * 8) ^ (uVar24 ^ uStack_88) << (uVar26 & 0x3f);
            uVar12 = 0x40 - (uVar26 & 0x3f);
            uVar26 = *puVar18 & 0x3f;
            if (uVar12 < uVar26) {
              lVar9 = uVar26 << uVar26;
              if (SCARRY8(lVar9,0x40)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f838);
                (*pcVar22)();
              }
              lVar21 = lVar9 + 0x7e;
              if (0 < lVar9 + 0x40) {
                lVar21 = lVar9 + 0x3f;
              }
              lVar9 = 0;
              if (lVar8 + 1 != lVar21 >> 6) {
                lVar9 = lVar8 + 1;
              }
              *(ulong *)(uStack_98 + lVar9 * 8) =
                   *(ulong *)(uStack_98 + lVar9 * 8) ^ (uVar24 ^ uStack_88) >> (uVar12 & 0x3f);
            }
          }
        }
        uStack_88 = uVar24;
        FUN_10416d53c();
        uVar26 = uStack_90;
        puVar18 = puStack_a0;
      } while (uStack_90 != 0);
      goto LAB_10416f42c;
    }
  }
  uVar12 = uStack_128;
  __sSQ2eeoiySbx_xtFZTj(uStack_128,uStack_128,lStack_130,*(undefined8 *)(lStack_f8 + 8));
  if ((uVar12 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f85c);
    (*pcVar22)();
  }
  (**(code **)(lStack_150 + 0x10))(lVar21,uVar26,lVar29);
  lVar11 = lStack_170;
  __ss16PartialRangeUpToVyAByxGxcfC(lStack_170,lVar21,lVar29,lVar13);
  lVar8 = lStack_160;
  puVar14 = PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790;
  _swift_getWitnessTable(PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790,lStack_160);
  __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
            (lStack_140,lVar11,param_5,lVar8,lVar9,puVar14);
  lVar10 = lStack_138;
  lVar9 = lStack_148;
  __sST12makeIterator0B0QzyFTj(pcStack_d8,lStack_138,lStack_148);
  (**(code **)(lStack_168 + 8))(lVar11,lVar8);
  lVar11 = lStack_a8;
  _swift_getAssociatedConformanceWitness
            (lVar9,lVar10,lStack_a8,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
  pcVar22 = pcStack_e8;
  lStack_d0 = lVar9;
  __sSt4next7ElementQzSgyFTj(pcStack_e8,lVar11);
  pcStack_e0 = *(code **)(lStack_b0 + 0x30);
  pcVar15 = pcVar22;
  (*pcStack_e0)(pcVar22,1,lVar28);
  if ((int)pcVar15 != 1) {
    lVar11 = 0;
    pcStack_f0 = *(code **)(lStack_b0 + 0x20);
    do {
      (*pcStack_f0)(lStack_c8,pcVar22,lVar28);
      uVar26 = *puVar5;
      __sSH13_rawHashValue4seedS2i_tFTj(uVar26,lVar28,uStack_c0);
      uVar30 = *puVar5;
      uVar25 = 1L << (uVar30 & 0x3f);
      uVar12 = uVar25 - 1;
      if (SBORROW8(uVar25,1)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f814);
        (*pcVar22)();
      }
      uVar26 = uVar12 & uVar26;
      uStack_70 = 0;
      puStack_a0 = puVar5;
      uStack_98 = uVar24;
      uVar16 = uVar26;
      puVar18 = puVar5;
      uVar19 = uVar24;
      uStack_90 = uVar26;
      func_0x00010416d2e4();
      uVar1 = uStack_90;
      uStack_88 = uVar16;
      puStack_80 = puVar18;
      uStack_78 = uVar19;
      uVar4 = uStack_70;
      if (uVar16 != 0) {
        uVar1 = ((long)puVar5[1] >> 6) + (uVar16 ^ uVar12);
        uVar20 = 0;
        if (uVar12 <= uVar1) {
          uVar20 = uVar12;
        }
        if (uVar1 - uVar20 == lVar11) {
          uVar1 = uVar26;
          uVar4 = 0;
        }
        else {
          uVar4 = false;
          uVar30 = uVar30 & 0x3f;
          lVar9 = uVar30 << uVar30;
          lVar8 = lVar9 + 0x7e;
          if (0 < lVar9 + 0x40) {
            lVar8 = lVar9 + 0x3f;
          }
          puVar17 = puVar18;
          uVar20 = uVar19;
          do {
            uVar26 = uVar26 + 1;
            if (uVar26 == uVar25) {
              uStack_88 = uVar16;
              puStack_80 = puVar18;
              uStack_78 = uVar19;
              if ((bool)uVar4) {
LAB_10416f86c:
                *(undefined4 *)(lVar21 + -8) = 0;
                *(undefined8 *)(lVar21 + -0x10) = 0xd5;
                __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                          ("Fatal error",0xb,2,0xd000000000000024,0x800000010f1ee170,
                           "OrderedCollections/_HashTable+BucketIterator.swift",0x32,2);
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f8c0);
                (*pcVar22)();
              }
              uVar26 = 0;
              uVar4 = true;
            }
            if ((long)uVar20 < (long)uVar30) {
              lVar29 = (long)(uVar26 * uVar30) >> 6;
              lVar10 = lVar29;
              if (uVar20 != 0) {
                if (SCARRY8(lVar9,0x40)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f80c);
                  uStack_88 = uVar16;
                  puStack_80 = puVar18;
                  uStack_78 = uVar19;
                  (*pcVar22)();
                }
                lVar10 = 0;
                if (lVar29 + 1 != lVar8 >> 6) {
                  lVar10 = lVar29 + 1;
                }
              }
              uVar1 = uVar30 - uVar20;
              if (SBORROW8(uVar30,uVar20)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f7f8);
                uStack_88 = uVar16;
                puStack_80 = puVar18;
                uStack_78 = uVar19;
                (*pcVar22)();
              }
              lVar29 = 0x20;
              if (lVar10 != 2 || uVar30 != 5) {
                lVar29 = 0x40;
              }
              uStack_78 = lVar29 - uVar1;
              if (SBORROW8(lVar29,uVar1)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f800);
                uStack_88 = uVar16;
                puStack_80 = puVar18;
                uStack_78 = uVar19;
                (*pcVar22)();
              }
              uVar27 = *(ulong *)(uVar24 + lVar10 * 8);
              puVar17 = (ulong *)(uVar27 << (uVar20 & 0x3f) | (ulong)puVar17);
              puStack_80 = (ulong *)(uVar27 >> (uVar1 & 0x3f));
            }
            else {
              uStack_78 = uVar20 - uVar30;
              if (SBORROW8(uVar20,uVar30)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f7f4);
                uStack_88 = uVar16;
                puStack_80 = puVar18;
                uStack_78 = uVar19;
                (*pcVar22)();
              }
              puStack_80 = (ulong *)((ulong)puVar17 >> uVar30);
            }
            uStack_88 = (ulong)puVar17 & uVar12;
            uVar1 = uVar26;
            if (uStack_88 == 0) break;
            uVar27 = ((long)puVar5[1] >> 6) + (uStack_88 ^ uVar12);
            uVar2 = 0;
            if (uVar12 <= uVar27) {
              uVar2 = uVar12;
            }
            puVar17 = puStack_80;
            uVar20 = uStack_78;
          } while (uVar27 - uVar2 != lVar11);
        }
      }
      uStack_70 = uVar4;
      uStack_90 = uVar1;
      if (SCARRY8(lVar11,lStack_b8)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f81c);
        (*pcVar22)();
      }
      func_0x00010416d47c(lVar11 + lStack_b8,0);
      (**(code **)(lStack_b0 + 8))(lStack_c8,lVar28);
      pcVar22 = pcStack_e8;
      bVar7 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f820);
        (*pcVar22)();
      }
      __sSt4next7ElementQzSgyFTj(pcStack_e8,lStack_a8,lStack_d0);
      pcVar15 = pcVar22;
      (*pcStack_e0)(pcVar22,1,lVar28);
    } while ((int)pcVar15 != 1);
  }
  (**(code **)(lStack_158 + 8))(pcStack_d8,lStack_a8);
  lVar11 = lStack_b8;
LAB_10416f42c:
  lVar9 = (long)puVar5[1] >> 6;
  lVar8 = lVar9 - lVar11;
  if (SBORROW8(lVar9,lVar11)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f848);
    (*pcVar22)();
  }
  lVar11 = 1L << (*puVar5 & 0x3f);
  uVar26 = lVar11 - 1;
  if (!SBORROW8(lVar11,1)) {
    lVar8 = (uVar26 & lVar8 >> 0x3f) + lVar8;
    uVar24 = 0;
    if ((long)uVar26 <= lVar8) {
      uVar24 = uVar26;
    }
    puVar5[1] = puVar5[1] & 0x3f | (lVar8 - uVar24) * 0x40;
    return;
  }
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x10416f84c);
  (*pcVar22)();
}



/* Entry: 10417047c; end: 10417051f;  */

uint FUN_10417047c(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Entry: 104170520; end: 1041705d7;  */

long FUN_104170520(undefined8 param_1,long param_2,char param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_5;
  __sSl5countSivgTj(param_5,*(undefined8 *)(*(long *)(param_6 + 8) + 8));
  func_0x00010416d850();
  lVar2 = 0;
  if (param_3 != '\x01') {
    lVar2 = param_2;
  }
  if (lVar1 <= lVar2) {
    lVar1 = lVar2;
  }
  lVar2 = param_4;
  if (param_4 <= lVar1) {
    lVar2 = lVar1;
  }
  lVar1 = 0;
  if (4 < lVar2) {
    func_0x000104170bf0(lVar2,param_4);
    func_0x00010416f8c0(param_1,lVar2 + 0x10,lVar2 + 0x20,param_5,param_6,param_7);
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 1041705d8; end: 104170b6b;  */

long FUN_1041705d8(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  long param_5,long param_6,code *param_7,long param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  
  puVar9 = PTR___sSlTL_11034dfe8;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,param_4) & 0xffffffff000000ff;
  lVar14 = *(long *)(*(long *)(param_7 + 8) + 8);
  lVar2 = 0xff;
  uStack_f0 = param_1;
  pcStack_d8 = param_7;
  lStack_c8 = param_5;
  lStack_c0 = param_3;
  lStack_a8 = param_8;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,param_6,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___sSbN_11034dd40,lVar2,0,0);
  pcStack_e8 = (code *)lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_e0 = (long)&uStack_110 - extraout_x8;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar14 + 8),param_6,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  lStack_f8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar3 = ((long)&uStack_110 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar3 - extraout_x12;
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = uVar11 - extraout_x8_01;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar15 - extraout_x8_02;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,lVar14,param_6,puVar9,PTR___s7IndicesSlTl_11034d638);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar14;
  lStack_108 = lVar13 - extraout_x8_03;
  _swift_getAssociatedConformanceWitness
            (lVar14,param_6,lVar5,puVar9,PTR___sSl7IndicesSl_SlTn_11034dfc0);
  uStack_110 = *(undefined8 *)(lVar3 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uStack_110,lVar5,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_100 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = (lVar13 - extraout_x8_03) - extraout_x8_04;
  lVar6 = param_6;
  __sSl5countSivgTj(param_6,lVar14);
  func_0x00010416d850();
  lVar3 = 0;
  if ((int)uStack_d0 != 1) {
    lVar3 = lStack_c0;
  }
  if (lVar6 <= lVar3) {
    lVar6 = lVar3;
  }
  lVar3 = lStack_c8;
  if (lStack_c8 <= lVar6) {
    lVar3 = lVar6;
  }
  if (lVar3 < 5) {
    lVar3 = param_6;
    __sSl5countSivgTj(param_6,lVar14);
    if (lVar3 < 2) {
      __sSl8endIndex0B0QzvgTj(uStack_f0,param_6,lVar14);
    }
    else {
      uVar7 = 0;
      __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,lVar4);
      lVar3 = param_6;
      uStack_70 = uVar7;
      __sSl5countSivgTj(param_6,lVar14);
      uVar7 = 0;
      __sSaMa(0,lVar4);
      uStack_d0 = uVar7;
      lStack_c0 = param_2;
      __sSa15reserveCapacityyySiF(lVar3,uVar7);
      lStack_c8 = param_6;
      __sSl7indices7IndicesQzvgTj(lStack_108,param_6,lVar14);
      uVar7 = uStack_110;
      __sST12makeIterator0B0QzyFTj(lStack_a0,lVar5,uStack_110);
      lVar3 = lStack_b0;
      _swift_getAssociatedConformanceWitness
                (uVar7,lVar5,lStack_b0,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
      uVar16 = uStack_d0;
      lStack_e0 = uVar7;
      __sSt4next7ElementQzSgyFTj(lVar13,lVar3);
      lVar6 = lStack_98;
      pcStack_e8 = *(code **)(lStack_98 + 0x30);
      lVar5 = lVar13;
      (*pcStack_e8)(lVar13,1,lVar2);
      lVar3 = lStack_f8;
      if ((int)lVar5 != 1) {
        pcStack_d8 = *(code **)(lVar6 + 0x20);
        do {
          (*pcStack_d8)(lVar15,lVar13,lVar2);
          pcVar8 = (code *)auStack_90;
          __sSly7ElementQz5IndexQzcirTj(pcVar8,lVar15,lStack_c8,lVar14);
          pcVar12 = *(code **)(lVar3 + 0x10);
          (*pcVar12)(uVar11);
          (*pcVar8)(auStack_90,0);
          puVar9 = PTR___sSayxGSTsMc_11034dd08;
          _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar16);
          uVar10 = uVar11;
          __sSTsSQ7ElementRpzrlE8containsySbABF(uVar11,uVar16,puVar9,*(undefined8 *)(lStack_a8 + 8))
          ;
          lVar6 = lStack_b8;
          if ((uVar10 & 1) != 0) {
            (**(code **)(lVar3 + 8))(uVar11,lVar4);
            (**(code **)(lStack_100 + 8))(lStack_a0,lStack_b0);
            _swift_bridgeObjectRelease(uStack_70);
            (*pcStack_d8)(uStack_f0,lVar15,lVar2);
            goto LAB_104170b48;
          }
          (*pcVar12)(lStack_b8,uVar11,lVar4);
          uVar16 = uStack_d0;
          __sSa6appendyyxnF(lVar6,uStack_d0);
          (**(code **)(lVar3 + 8))(uVar11,lVar4);
          (**(code **)(lStack_98 + 8))(lVar15,lVar2);
          __sSt4next7ElementQzSgyFTj(lVar13,lStack_b0,lStack_e0);
          lVar6 = lVar13;
          (*pcStack_e8)(lVar13,1,lVar2);
        } while ((int)lVar6 != 1);
      }
      (**(code **)(lStack_100 + 8))(lStack_a0,lStack_b0);
      __sSl8endIndex0B0QzvgTj(uStack_f0,lStack_c8,lVar14);
      _swift_bridgeObjectRelease(uStack_70);
    }
LAB_104170b48:
    lVar3 = 0;
  }
  else {
    func_0x000104170bf0();
    lVar6 = lStack_e0;
    iVar1 = *(int *)((long)pcStack_e8 + 0x30);
    func_0x00010416fe00(lStack_e0 + iVar1,param_2,lVar3 + 0x10,lVar3 + 0x20,param_6,pcStack_d8,
                        lStack_a8);
    (**(code **)(lStack_98 + 0x20))(uStack_f0,lVar6 + iVar1,lVar2);
  }
  return lVar3;
}



/* Entry: 104170b6c; end: 104170c83;  */

long FUN_104170b6c(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar3 = (uVar5 & 0x3f) << (uVar5 & 0x3f);
  if (!SCARRY8(lVar3,0x40)) {
    lVar1 = lVar3 + 0x7e;
    if (0 < lVar3 + 0x40) {
      lVar1 = lVar3 + 0x3f;
    }
    lVar3 = 0;
    FUN_104170c84();
    _swift_allocObject();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(lVar3 + 0x10) = uVar5;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    _memcpy(lVar3 + 0x20,param_1 + 0x20,(lVar1 >> 6) * 8);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104170bf0);
  (*pcVar2)();
}



/* Entry: 104170c84; end: 104170cbb;  */

void FUN_104170c84(undefined8 param_1)

{
  if (lRam0000000113065908 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f299c);
  return;
}



/* Entry: 104170cbc; end: 104170ccb;  */

undefined1  [16] FUN_104170cbc(void)

{
  return ZEXT816(0x11074a200);
}



/* Entry: 104170ccc; end: 104170d07;  */

void FUN_104170ccc(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + lRam0000000113813160);
  return;
}



/* Entry: 104170d08; end: 104170d67;  */

void FUN_104170d08(void)

{
  if (lRam0000000113065908 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f299c);
  return;
}



/* Entry: 104170d68; end: 1041710a3;  */

void FUN_104170d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_f8 = *(long *)(param_6 + -8);
  uStack_100 = param_9;
  lVar5 = param_5;
  lVar7 = param_6;
  uStack_118 = param_4;
  uStack_110 = param_3;
  uStack_f0 = param_7;
  lStack_c0 = param_8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar10 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  lStack_b8 = lVar8;
  _swift_getTupleTypeMetadata2(0xff,lVar5,lVar7,"key value ",0);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d0 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_e0 = lVar8 - extraout_x12;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  __ss7EncoderP16unkeyedContainers015UnkeyedEncodingC0_pyFTj(auStack_90,uVar1,uVar2);
  uVar2 = uStack_110;
  uVar1 = uStack_118;
  uStack_a8 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_98 = 0;
  uVar6 = 0;
  uStack_b0 = param_2;
  func_0x000104173ee4(0,param_5,param_6,lStack_c0);
  uStack_120 = param_2;
  uStack_e8 = uVar6;
  _swift_retain(param_2);
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  lStack_108 = lVar4;
  do {
    lVar4 = lStack_d8;
    lVar5 = lStack_108;
    FUN_104173a50(lStack_d8,uStack_e8);
    lVar7 = lStack_e0;
    (**(code **)(lStack_d0 + 0x20))(lStack_e0,lVar4,lStack_c8);
    lVar8 = lVar7;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar7,1,lVar5);
    lVar4 = lStack_b8;
    if ((int)lVar8 == 1) {
LAB_104171058:
      _swift_release(uStack_118);
      _swift_release(uStack_110);
      _swift_release(uStack_120);
      func_0x0001000834e4(auStack_90);
      return;
    }
    iVar3 = *(int *)(lVar5 + 0x30);
    lStack_c0 = unaff_x21;
    (**(code **)(lVar9 + 0x20))(lStack_b8,lVar7,param_5);
    lVar5 = lStack_f8;
    (**(code **)(lStack_f8 + 0x20))(lVar10,lVar7 + iVar3,param_6);
    uVar2 = uStack_70;
    uVar1 = uStack_78;
    func_0x0001000c6518(auStack_90,uStack_78);
    unaff_x21 = lStack_c0;
    __ss24UnkeyedEncodingContainerP6encodeyyqd__KSERd__lFTj(lVar4,param_5,uStack_f0,uVar1,uVar2);
    uVar2 = uStack_70;
    uVar1 = uStack_78;
    if (unaff_x21 != 0) {
      (**(code **)(lVar5 + 8))(lVar10,param_6);
      (**(code **)(lVar9 + 8))(lStack_b8,param_5);
      goto LAB_104171058;
    }
    func_0x0001000c6518(auStack_90,uStack_78);
    __ss24UnkeyedEncodingContainerP6encodeyyqd__KSERd__lFTj(lVar10,param_6,uStack_100,uVar1,uVar2);
    (**(code **)(lVar5 + 8))(lVar10,param_6);
    (**(code **)(lVar9 + 8))(lStack_b8,param_5);
  } while( true );
}



/* Entry: 1041710a4; end: 1041710db;  */

void FUN_1041710a4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_104170d68(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + -8),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + -0x10));
  return;
}



/* Entry: 1041710dc; end: 104171683;  */

/* WARNING: Removing unreachable block (ram,0x000104171450) */

long FUN_1041710dc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_a0 [24];
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  __ss13DecodingErrorO7ContextVMa();
  lStack_118 = *(long *)(lVar3 + -8);
  lStack_128 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar14 = (long)&lStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_3 + -8);
  lStack_120 = lVar14;
  lStack_100 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar14 - extraout_x12;
  lVar15 = *(long *)(param_2 + -8);
  lStack_108 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = lVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar7);
  __ss7DecoderP16unkeyedContainers015UnkeyedDecodingC0_pyKFTj(auStack_a0,uVar7,uVar9);
  lVar1 = lStack_108;
  if (unaff_x21 == 0) {
    lVar4 = lStack_108;
    uVar9 = param_5;
    lStack_130 = param_1;
    lStack_f8 = lVar14;
    lStack_f0 = lVar13;
    lStack_e8 = lVar3;
    lStack_e0 = lVar15;
    FUN_104177b80();
    lVar14 = lStack_100;
    uVar5 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,lStack_100);
    __ss15ContiguousArrayV12arrayLiteralAByxGxd_tcfC();
    uVar7 = uStack_80;
    uVar6 = uStack_88;
    lStack_78 = lVar4;
    uStack_70 = uVar9;
    func_0x0001000a8868(auStack_a0,uStack_88);
    __ss24UnkeyedDecodingContainerP7isAtEndSbvgTj(uVar6,uVar7);
    lVar3 = lVar4;
    uVar8 = uStack_88;
    uVar7 = uStack_80;
    while ((uVar6 & 1) == 0) {
      uStack_88 = uVar8;
      uStack_80 = uVar7;
      func_0x0001000c6518(auStack_a0,uVar8);
      __ss24UnkeyedDecodingContainerP6decodeyqd__qd__mKSeRd__lFTj
                (lVar12,lVar1,lVar1,param_4,uVar8,uVar7);
      uVar9 = uStack_70;
      lStack_110 = lStack_78;
      lVar3 = lStack_78;
      uVar11 = uStack_70;
      func_0x00010417a89c(lVar12,lStack_78,uStack_70,lVar1,param_5);
      uVar7 = uStack_80;
      uVar8 = uStack_88;
      func_0x0001000a8868(auStack_a0,uStack_88);
      if (((uint)lVar3 & 0xff) != 1) {
        __ss24UnkeyedDecodingContainerP10codingPathSays9CodingKey_pGvgTj(uVar8,uVar7);
        __ss11_StringGutsV4growyySiF(0x1a);
        _swift_bridgeObjectRelease(0xe000000000000000);
        func_0x0001000a8868(auStack_a0,uStack_88);
        __ss24UnkeyedDecodingContainerP12currentIndexSivgTj(uStack_88,uStack_80);
        if (SBORROW8(uStack_88,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104171684);
          (*pcVar2)();
        }
        puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar10);
        lVar14 = lStack_120;
        __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
                  (lStack_120,uVar8,0xd000000000000018,0x800000010f1ee2a0,0);
        lVar15 = 0;
        __ss13DecodingErrorOMa();
        puVar10 = PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
        _swift_allocError();
        lVar13 = lStack_118;
        lVar3 = lStack_128;
        (**(code **)(lStack_118 + 0x10))(puVar10,lVar14,lStack_128);
        (**(code **)(*(long *)(lVar15 + -8) + 0x68))
                  (puVar10,*(undefined4 *)
                            PTR___ss13DecodingErrorO13dataCorruptedyA2B7ContextVcABmFWC_11034e588,
                   lVar15);
        _swift_willThrow();
        (**(code **)(lVar13 + 8))(lVar14,lVar3);
LAB_10417163c:
        (**(code **)(lStack_e0 + 8))(lVar12,lVar1);
        lVar3 = lStack_110;
        func_0x0001000834e4(auStack_a0);
        func_0x0001000834e4(lStack_130);
        _swift_release(uVar9);
        _swift_release(lVar3);
        _swift_release(uVar5);
        return lVar4;
      }
      __ss24UnkeyedDecodingContainerP7isAtEndSbvgTj(uVar8,uVar7);
      uVar7 = uStack_80;
      uVar6 = uStack_88;
      if ((uVar8 & 1) != 0) {
        lVar3 = 0;
        __ss13DecodingErrorOMa();
        puVar10 = PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
        _swift_allocError();
        func_0x0001000a8868(auStack_a0,uStack_88);
        __ss24UnkeyedDecodingContainerP10codingPathSays9CodingKey_pGvgTj(uStack_88,uStack_80);
        __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
                  (puVar10);
        (**(code **)(*(long *)(lVar3 + -8) + 0x68))
                  (puVar10,*(undefined4 *)
                            PTR___ss13DecodingErrorO13dataCorruptedyA2B7ContextVcABmFWC_11034e588,
                   lVar3);
        _swift_willThrow();
        goto LAB_10417163c;
      }
      func_0x0001000c6518(auStack_a0,uStack_88);
      lVar4 = lStack_e8;
      __ss24UnkeyedDecodingContainerP6decodeyqd__qd__mKSeRd__lFTj
                (lStack_e8,lVar14,lVar14,param_6,uVar6,uVar7);
      uVar7 = 0;
      FUN_10417b6a8(0,lVar1,param_5);
      FUN_1041761ac(lVar12,uVar11,uVar7);
      lVar13 = lStack_f0;
      lVar3 = lStack_f8;
      (**(code **)(lStack_f0 + 0x10))(lStack_f8,lVar4,lVar14);
      uVar7 = 0;
      __ss15ContiguousArrayVMa(0,lVar14);
      __ss15ContiguousArrayV6appendyyxnF(lVar3,uVar7);
      (**(code **)(lVar13 + 8))(lVar4,lVar14);
      (**(code **)(lStack_e0 + 8))(lVar12,lVar1);
      uVar7 = uStack_80;
      uVar6 = uStack_88;
      func_0x0001000a8868(auStack_a0,uStack_88);
      __ss24UnkeyedDecodingContainerP7isAtEndSbvgTj(uVar6,uVar7);
      lVar3 = lStack_78;
      uVar8 = uStack_88;
      uVar7 = uStack_80;
    }
    func_0x0001000834e4(auStack_a0);
    func_0x0001000834e4(lStack_130);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return lVar3;
}



/* Entry: 104171684; end: 1041716bf;  */

void FUN_104171684(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  FUN_1041710dc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return;
}



/* Entry: 1041716c0; end: 104171893;  */

void FUN_1041716c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_b0 = param_7;
  uStack_98 = param_1;
  __ss6MirrorV22AncestorRepresentationOMa();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar7 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10dictionaryyA2DmFWC_11034ef90;
  lVar3 = 0;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  __ss6MirrorV12DisplayStyleOMa();
  lVar9 = *(long *)(lVar3 + -8);
  (**(code **)(lVar9 + 0x68))(lVar8,uVar1,lVar3);
  (**(code **)(lVar9 + 0x38))(lVar8,0,1,lVar3);
  uVar2 = uStack_b0;
  uVar4 = 0;
  func_0x000104174f48(0,param_5,param_6,uStack_b0);
  uVar5 = 0;
  FUN_104172ce4(0,param_5,param_6,uVar2);
  puVar6 = &UNK_10dcd9f40;
  _swift_getWitnessTable(&UNK_10dcd9f40,uVar5);
  (**(code **)(lStack_a8 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___ss6MirrorV22AncestorRepresentationO9generatedyA2DmFWC_11034efd0,lStack_a0)
  ;
  _swift_retain_n(param_2,2);
  _swift_retain_n(param_3,2);
  _swift_retain_n(param_4,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (uStack_98,&uStack_78,&uStack_90,lVar8,lVar7,uVar4,uVar5,puVar6);
  return;
}



/* Entry: 104171894; end: 1041718d7;  */

void FUN_104171894(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)PTR___ss6MirrorV22AncestorRepresentationO9generatedyA2DmFWC_11034efd0;
  lVar2 = 0;
  __ss6MirrorV22AncestorRepresentationOMa();
                    /* WARNING: Could not recover jumptable at 0x0001041718d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x68))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 1041718d8; end: 1041718ef;  */

void FUN_1041718d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar11 = unaff_x20[2];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = 0;
  uStack_98 = param_1;
  __ss6MirrorV22AncestorRepresentationOMa();
  lStack_a8 = *(long *)(lVar7 + -8);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  uVar5 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10dictionaryyA2DmFWC_11034ef90;
  lVar7 = 0;
  uStack_90 = uVar1;
  uStack_88 = uVar3;
  uStack_80 = uVar11;
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar11;
  __ss6MirrorV12DisplayStyleOMa();
  lVar14 = *(long *)(lVar7 + -8);
  (**(code **)(lVar14 + 0x68))(lVar13,uVar5,lVar7);
  (**(code **)(lVar14 + 0x38))(lVar13,0,1,lVar7);
  uVar6 = uStack_b0;
  uVar8 = 0;
  func_0x000104174f48(0,uVar2,uVar4,uStack_b0);
  uVar9 = 0;
  FUN_104172ce4(0,uVar2,uVar4,uVar6);
  puVar10 = &UNK_10dcd9f40;
  _swift_getWitnessTable(&UNK_10dcd9f40,uVar9);
  (**(code **)(lStack_a8 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___ss6MirrorV22AncestorRepresentationO9generatedyA2DmFWC_11034efd0,lStack_a0
            );
  _swift_retain_n(uVar1,2);
  _swift_retain_n(uVar3,2);
  _swift_retain_n(uVar11,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (uStack_98,&uStack_78,&uStack_90,lVar13,lVar12,uVar8,uVar9,puVar10);
  return;
}



/* Entry: 1041718f0; end: 104171967;  */

void FUN_1041718f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_104172ce4(0,param_4,param_5,param_6);
  puVar2 = &UNK_10dcd9f40;
  _swift_getWitnessTable(&UNK_10dcd9f40,uVar1);
  func_0x000104187ae4(&uStack_48,param_4,param_5,uVar1,puVar2);
  return;
}



/* Entry: 104171968; end: 10417199f;  */

void FUN_104171968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_40 = unaff_x20[1];
  uStack_38 = unaff_x20[2];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = 0;
  FUN_104172ce4(0,uVar1,uVar2,*(undefined8 *)(param_1 + 0x20));
  puVar4 = &UNK_10dcd9f40;
  _swift_getWitnessTable(&UNK_10dcd9f40,uVar3);
  func_0x000104187ae4(&uStack_48,uVar1,uVar2,uVar3,puVar4);
  return;
}



/* Entry: 1041719a0; end: 104171a07;  */

void FUN_1041719a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_40 = unaff_x20[4];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = &UNK_10dcd9ce0;
  _swift_getWitnessTable(&UNK_10dcd9ce0,param_1);
  func_0x000104187ae4(&uStack_60,uVar1,uVar2,param_1,puVar3);
  return;
}



/* Entry: 104171a08; end: 104171a13;  */

void FUN_104171a08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_40 = unaff_x20[4];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = &UNK_10dcd9ce0;
  _swift_getWitnessTable(&UNK_10dcd9ce0,param_1);
  func_0x000104187ae4(&uStack_60,uVar1,uVar2,param_1,puVar3);
  return;
}



/* Entry: 104171a14; end: 104171b03;  */

void FUN_104171a14(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,uVar2,uVar4,"key value ",0);
  if (lVar1 <= lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000104171afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,1,1,lVar7);
    return;
  }
  iVar5 = *(int *)(lVar7 + 0x30);
  __ss15ContiguousArrayVyxSicig(param_1,lVar3,*(undefined8 *)(unaff_x20 + 8),uVar2);
  __ss15ContiguousArrayVyxSicig(param_1 + iVar5,lVar3,*(undefined8 *)(unaff_x20 + 0x10),uVar4);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,0,1,lVar7);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x20),1)) {
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x104171b04);
  (*pcVar6)();
}



/* Entry: 104171b04; end: 104171b27;  */

void FUN_104171b04(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,uVar2,uVar4,"key value ",0);
  if (lVar1 <= lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000104171afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,1,1,lVar7);
    return;
  }
  iVar5 = *(int *)(lVar7 + 0x30);
  __ss15ContiguousArrayVyxSicig(param_1,lVar3,*(undefined8 *)(unaff_x20 + 8),uVar2);
  __ss15ContiguousArrayVyxSicig(param_1 + iVar5,lVar3,*(undefined8 *)(unaff_x20 + 0x10),uVar4);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,0,1,lVar7);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x20),1)) {
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x104171b04);
  (*pcVar6)();
}



/* Entry: 104171b28; end: 104171b5b;  */

void FUN_104171b28(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcd9ce0;
  _swift_getWitnessTable(&UNK_10dcd9ce0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 104171b5c; end: 104171b63;  */

undefined8 FUN_104171b5c(void)

{
  return 2;
}



/* Entry: 104171b64; end: 104171bbf;  */

undefined8 * FUN_104171b64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  _swift_getWitnessTable(&UNK_10dcd9ce0,param_1);
  puVar1 = unaff_x20;
  func_0x0001020fc1f8();
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return puVar1;
}


