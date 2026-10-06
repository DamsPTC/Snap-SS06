/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104151398; end: 104151423;  */

void FUN_104151398(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000104151420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104151424; end: 1041514eb;  */

void FUN_104151424(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar2 = *(long *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar2 + 8))(uVar4,uVar6);
  (**(code **)(lVar1 + 8))(uVar3,uVar5);
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001041514e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041514ec; end: 104151577;  */

void FUN_1041514ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000104151574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104151578; end: 1041515cb;  */

void FUN_104151578(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  
  plVar6 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x104153e50;
  plVar6[0x14] = param_1;
  plVar6[0x15] = (long)unaff_x20;
  lVar10 = *unaff_x20;
  lVar8 = *(long *)(lVar10 + 0x68);
  plVar6[0x16] = lVar8;
  lVar7 = *(long *)(lVar10 + 0x50);
  plVar6[0x17] = lVar7;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar8,lVar7,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar6[0x18] = lVar1;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  __ss6ResultOMa(0,lVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar6[0x19] = lVar3;
  lVar1 = *(long *)(lVar3 + -8);
  plVar6[0x1a] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1b] = uVar4;
  lVar9 = *(long *)(lVar10 + 0x60);
  plVar6[0x1c] = lVar9;
  lVar1 = 0;
  __sSqMa(0,lVar9);
  plVar6[0x1d] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar6[0x1e] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1f] = uVar4;
  lVar11 = *(long *)(lVar10 + 0x58);
  plVar6[0x20] = lVar11;
  lVar1 = *(long *)(lVar11 + -8);
  plVar6[0x21] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x22] = uVar4;
  lVar1 = *(long *)(lVar7 + -8);
  plVar6[0x23] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x24] = uVar4;
  lVar1 = *(long *)(lVar10 + 0x70);
  plVar6[0x25] = lVar1;
  lVar3 = *(long *)(lVar10 + 0x78);
  plVar6[2] = lVar7;
  plVar6[0x26] = lVar3;
  plVar6[3] = lVar11;
  plVar6[4] = lVar9;
  plVar6[5] = lVar8;
  plVar6[6] = lVar1;
  plVar6[7] = lVar3;
  lVar1 = 0;
  FUN_10414cd74();
  plVar6[0x27] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar6[0x28] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x29] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x2a] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104150db0,0,0);
  return;
}



/* Entry: 1041515cc; end: 10415188f;  */

void FUN_1041515cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar20 = *unaff_x20;
  uVar9 = *(undefined8 *)(lVar20 + 0x60);
  lVar4 = 0;
  uStack_f0 = param_2;
  uStack_e8 = param_3;
  uStack_d8 = param_4;
  __sSqMa();
  lVar10 = *(long *)(lVar4 + -8);
  lStack_d0 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_d0 + 0xfU & 0xfffffffffffffff0);
  puVar24 = auStack_110 + -extraout_x8;
  lVar19 = *(long *)(lVar20 + 0x58);
  lVar11 = *(long *)(lVar19 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  puStack_f8 = puVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = (long)puVar24 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(lVar20 + 0x50);
  lVar18 = *(long *)(lVar17 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  lStack_100 = lVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar22 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d453c8;
  lStack_108 = lVar13;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e0 = lVar13 - extraout_x8_00;
  __sScPMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar13 - extraout_x8_00,1,1,lVar5);
  (**(code **)(lVar18 + 0x10))(lVar13,uStack_f0,lVar17);
  (**(code **)(lVar11 + 0x10))(lVar22,uStack_e8,lVar19);
  (**(code **)(lVar10 + 0x10))(puVar24,uStack_d8,lVar4);
  bVar1 = *(byte *)(lVar18 + 0x50);
  uVar25 = (ulong)bVar1 + 0x58 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar16 = lVar15 + (ulong)bVar2 + uVar25 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar10 + 0x50);
  uVar26 = lVar12 + (ulong)bVar3 + uVar16 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110749740;
  _swift_allocObject(&UNK_110749740,uVar26 + lStack_d0,bVar1 | bVar2 | bVar3 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(long *)(puVar6 + 0x20) = lVar17;
  *(long *)(puVar6 + 0x28) = lVar19;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  uVar14 = *(undefined8 *)(lVar20 + 0x68);
  *(undefined8 *)(puVar6 + 0x38) = uVar14;
  uVar23 = *(undefined8 *)(lVar20 + 0x70);
  *(undefined8 *)(puVar6 + 0x40) = uVar23;
  uVar21 = *(undefined8 *)(lVar20 + 0x78);
  *(undefined8 *)(puVar6 + 0x48) = uVar21;
  *(long **)(puVar6 + 0x50) = unaff_x20;
  (**(code **)(lVar18 + 0x20))(puVar6 + uVar25,lStack_108);
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar16,lStack_100,lVar19);
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar26,puStack_f8,lVar4);
  _swift_retain(unaff_x20);
  uVar7 = 0;
  func_0x0001000abba4(0,0,lStack_e0,&UNK_10dcd9318,puVar6);
  uVar8 = 0;
  lStack_98 = lVar17;
  lStack_90 = lVar19;
  uStack_88 = uVar9;
  uStack_80 = uVar14;
  uStack_78 = uVar23;
  uStack_70 = uVar21;
  FUN_104149d78(0,&lStack_98);
  FUN_10414b7dc(uVar7,uVar8);
  _swift_release(uVar7);
  return;
}



/* Entry: 104151890; end: 10415193f;  */

void FUN_104151890(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x88),auStack_48,0x21,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  uStack_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  uStack_60 = *(undefined8 *)(lVar2 + 0x70);
  uVar1 = 0;
  FUN_104149d78(0,&uStack_80);
  FUN_10414cbac(param_1,uVar1);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(param_2[2]);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      _swift_continuation_throwingResume(*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Entry: 104151940; end: 104151c73;  */

void FUN_104151940(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar12 = *param_1;
  uVar9 = *(undefined8 *)(lVar12 + 0x68);
  uVar11 = *(ulong *)(lVar12 + 0x50);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,uVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = param_1[2];
  lStack_88 = *(long *)(lVar12 + 0x60);
  lStack_90 = *(long *)(lVar12 + 0x58);
  uStack_70 = *(undefined8 *)(lVar12 + 0x78);
  uStack_78 = *(undefined8 *)(lVar12 + 0x70);
  uVar4 = 0;
  uStack_98 = uVar11;
  uStack_80 = uVar9;
  func_0x0001041502fc(0,&uStack_98);
  FUN_104146b1c(&uStack_98,FUN_104151d18,param_1,lVar14,uVar4);
  lVar12 = lStack_90;
  uVar11 = uStack_98;
  uVar8 = (uint)(uStack_98 >> 0x3e);
  if (uVar8 == 0) {
    lStack_a8 = lStack_88;
    lVar14 = *(long *)(lStack_88 + 0x10);
    lStack_a0 = lStack_90;
    lStack_c0 = (long)&lStack_c0 - extraout_x8;
    lStack_b8 = lVar2;
    lStack_b0 = lVar3;
    if (lVar14 == 0) {
      _swift_retain(lStack_90);
    }
    else {
      puVar13 = (undefined8 *)(lStack_88 + 0x20);
      uVar9 = 0;
      __sScEMa();
      uVar4 = uVar9;
      func_0x000100f5abbc();
      _swift_retain(lVar12);
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      do {
        uVar10 = *puVar13;
        uVar5 = uVar9;
        uVar6 = uVar4;
        _swift_allocError(uVar9,uVar4,0,0);
        __sS2cEycfC(uVar6);
        uVar6 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar7 = (undefined8 *)puVar1;
        _swift_allocError();
        *puVar7 = uVar5;
        _swift_continuation_throwingResumeWithError(uVar10,uVar6);
        lVar14 = lVar14 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar14 != 0);
    }
    lVar2 = lStack_a0;
    __sScT6cancelyyF(lStack_a0,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar12 = lStack_c0;
    (**(code **)(*(long *)(lStack_b8 + -8) + 0x38))(lStack_c0,1,1);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x00010176fed4(lVar12,uVar11,lStack_b0,uVar4,PTR___ss5ErrorWS_11034ee10);
    _swift_release(lVar2);
    FUN_1041500c0(uVar11,lVar2,lStack_a8);
  }
  else if (uVar8 == 1) {
    lStack_a8 = lStack_88;
    lStack_a0 = lStack_90;
    lVar12 = *(long *)(lStack_90 + 0x10);
    if (lVar12 == 0) {
      _swift_retain(uStack_98 & 0x3fffffffffffffff);
    }
    else {
      puVar13 = (undefined8 *)(lStack_90 + 0x20);
      uVar9 = 0;
      __sScEMa();
      uVar4 = uVar9;
      func_0x000100f5abbc();
      _swift_retain(uVar11 & 0x3fffffffffffffff);
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      do {
        uVar10 = *puVar13;
        uVar5 = uVar9;
        uVar6 = uVar4;
        _swift_allocError(uVar9,uVar4,0,0);
        __sS2cEycfC(uVar6);
        uVar6 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar7 = (undefined8 *)puVar1;
        _swift_allocError();
        *puVar7 = uVar5;
        _swift_continuation_throwingResumeWithError(uVar10,uVar6);
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar12 != 0);
    }
    __sScT6cancelyyF(uVar11 & 0x3fffffffffffffff,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88
                     ,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    FUN_1041500c0(uVar11,lStack_a0,lStack_a8);
    _swift_release(uVar11 & 0x3fffffffffffffff);
  }
  return;
}



/* Entry: 104151c74; end: 104151c7b;  */

void FUN_104151c74(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar12 = *unaff_x20;
  uVar9 = *(undefined8 *)(lVar12 + 0x68);
  uVar11 = *(ulong *)(lVar12 + 0x50);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,uVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_88 = *(long *)(lVar12 + 0x60);
  lStack_90 = *(long *)(lVar12 + 0x58);
  uStack_70 = *(undefined8 *)(lVar12 + 0x78);
  uStack_78 = *(undefined8 *)(lVar12 + 0x70);
  uStack_98 = uVar11;
  uStack_80 = uVar9;
  func_0x0001041502fc(0,&uStack_98);
  FUN_104146b1c(&uStack_98,FUN_104151d18);
  lVar12 = lStack_90;
  uVar11 = uStack_98;
  uVar8 = (uint)(uStack_98 >> 0x3e);
  if (uVar8 == 0) {
    lStack_a8 = lStack_88;
    lVar13 = *(long *)(lStack_88 + 0x10);
    lStack_a0 = lStack_90;
    lStack_c0 = (long)&lStack_c0 - extraout_x8;
    lStack_b8 = lVar2;
    lStack_b0 = lVar3;
    if (lVar13 == 0) {
      _swift_retain(lStack_90);
    }
    else {
      puVar14 = (undefined8 *)(lStack_88 + 0x20);
      uVar4 = 0;
      __sScEMa();
      uVar9 = uVar4;
      func_0x000100f5abbc();
      _swift_retain(lVar12);
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      do {
        uVar10 = *puVar14;
        uVar5 = uVar4;
        uVar6 = uVar9;
        _swift_allocError(uVar4,uVar9,0,0);
        __sS2cEycfC(uVar6);
        uVar6 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar7 = (undefined8 *)puVar1;
        _swift_allocError();
        *puVar7 = uVar5;
        _swift_continuation_throwingResumeWithError(uVar10,uVar6);
        lVar13 = lVar13 + -1;
        puVar14 = puVar14 + 1;
      } while (lVar13 != 0);
    }
    lVar2 = lStack_a0;
    __sScT6cancelyyF(lStack_a0,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar12 = lStack_c0;
    (**(code **)(*(long *)(lStack_b8 + -8) + 0x38))(lStack_c0,1,1);
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x00010176fed4(lVar12,uVar11,lStack_b0,uVar9,PTR___ss5ErrorWS_11034ee10);
    _swift_release(lVar2);
    FUN_1041500c0(uVar11,lVar2,lStack_a8);
  }
  else if (uVar8 == 1) {
    lStack_a8 = lStack_88;
    lStack_a0 = lStack_90;
    lVar12 = *(long *)(lStack_90 + 0x10);
    if (lVar12 == 0) {
      _swift_retain(uStack_98 & 0x3fffffffffffffff);
    }
    else {
      puVar14 = (undefined8 *)(lStack_90 + 0x20);
      uVar4 = 0;
      __sScEMa();
      uVar9 = uVar4;
      func_0x000100f5abbc();
      _swift_retain(uVar11 & 0x3fffffffffffffff);
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      do {
        uVar10 = *puVar14;
        uVar5 = uVar4;
        uVar6 = uVar9;
        _swift_allocError(uVar4,uVar9,0,0);
        __sS2cEycfC(uVar6);
        uVar6 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar7 = (undefined8 *)puVar1;
        _swift_allocError();
        *puVar7 = uVar5;
        _swift_continuation_throwingResumeWithError(uVar10,uVar6);
        lVar12 = lVar12 + -1;
        puVar14 = puVar14 + 1;
      } while (lVar12 != 0);
    }
    __sScT6cancelyyF(uVar11 & 0x3fffffffffffffff,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88
                     ,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    FUN_1041500c0(uVar11,lStack_a0,lStack_a8);
    _swift_release(uVar11 & 0x3fffffffffffffff);
  }
  return;
}



/* Entry: 104151c7c; end: 104151d17;  */

void FUN_104151c7c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar2 = &uStack_90;
  lVar4 = *param_2;
  uVar3 = 0x21;
  _swift_beginAccess((long)param_2 + *(long *)(lVar4 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  uStack_90 = *(undefined8 *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uStack_68 = *(undefined8 *)(lVar4 + 0x78);
  uStack_70 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  FUN_104149d78();
  func_0x00010414c414();
  _swift_endAccess(auStack_58);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = uVar3;
  return;
}



/* Entry: 104151d18; end: 104151d47;  */

void FUN_104151d18(void)

{
  FUN_104151c7c();
  return;
}



/* Entry: 104151d48; end: 104151d67;  */

void FUN_104151d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104151d68,0,0);
  return;
}



/* Entry: 104151d68; end: 104151eaf;  */

void FUN_104151d68(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = 0x104151e5c;
    puVar1 = PTR___sytN_11034f1b0 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar5,*(undefined8 *)(unaff_x22 + 0x148),puVar1,puVar1,0,0,&UNK_10dcd9328,unaff_x22 + 0x110,
      puVar1,puVar1);
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar6 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104151eb0;
  lVar2 = *(long *)(unaff_x22 + 0x168);
  plVar5 = *(long **)(unaff_x22 + 0x150);
  lVar3 = *(long *)(unaff_x22 + 0x158);
  plVar6[0x19] = *(long *)(unaff_x22 + 0x160);
  plVar6[0x1a] = lVar2;
  plVar6[0x17] = (long)plVar5;
  plVar6[0x18] = lVar3;
  plVar6[0x16] = unaff_x22 + 0x140;
  plVar6[0x1b] = *plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104152238,0,0);
  return;
}



/* Entry: 104151eb0; end: 104151f5b;  */

void FUN_104151eb0(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x178));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104151fd4,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x188) = plVar1;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_104151f5c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 104151f5c; end: 104151fd3;  */

void FUN_104151f5c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104151fa4,0,0);
  return;
}



/* Entry: 104151fd4; end: 10415206f;  */

void FUN_104151fd4(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  __sScg9cancelAllyyF(uVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar2;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104152070;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 104152070; end: 1041520b7;  */

void FUN_104152070(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041520b8,0,0);
  return;
}



/* Entry: 1041520b8; end: 1041520fb;  */

void FUN_1041520b8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 1041520fc; end: 1041521d3;  */

void FUN_1041520fc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar5 = uVar4 + 0x58 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar6 = uVar5 + *(long *)(lVar2 + 0x40) + uVar4 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar3 + 0x40);
  lVar2 = 0;
  __sSqMa(0,*(undefined8 *)(unaff_x20 + 0x30));
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  plVar1 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1041521d4;
  plVar1[0x2c] = unaff_x20 + uVar6;
  plVar1[0x2d] = unaff_x20 + (uVar6 + lVar3 + uVar4 & (uVar4 ^ 0xffffffffffffffff));
  plVar1[0x2a] = lVar2;
  plVar1[0x2b] = unaff_x20 + uVar5;
  plVar1[0x29] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104151d68,0,0);
  return;
}



/* Entry: 1041521d4; end: 10415220f;  */

void FUN_1041521d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010415220c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104152210; end: 104152237;  */

void FUN_104152210(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 **)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = *param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104152238,0,0);
  return;
}



/* Entry: 104152238; end: 104152497;  */

void FUN_104152238(void)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(lVar4 + 0x68);
  FUN_104152a78(*(undefined8 *)(unaff_x22 + 0xc0),uVar7);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar4 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(lVar4 + 0x70);
  FUN_104152a78(uVar1,uVar7);
  lVar11 = *(long *)(lVar4 + 0x60);
  *(long *)(unaff_x22 + 0x100) = lVar11;
  lVar12 = *(long *)(lVar11 + -8);
  uVar3 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  lVar4 = 0;
  __sSqMa(0,lVar11);
  lVar9 = *(long *)(lVar4 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar9 + 0x10))();
  uVar6 = uVar5;
  (**(code **)(lVar12 + 0x30))(uVar5,1,lVar11);
  if ((int)uVar6 == 1) {
    (**(code **)(lVar9 + 8))(uVar5,lVar4);
    _swift_task_dealloc(uVar5);
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    (**(code **)(lVar12 + 0x20))(uVar3,uVar5,lVar11);
    _swift_task_dealloc(uVar5);
    FUN_104152a78(uVar3,uVar7,lVar11,*(undefined8 *)(lVar4 + 0x78));
    (**(code **)(lVar12 + 8))(uVar3,lVar11);
  }
  puVar10 = *(ulong **)(unaff_x22 + 0xb0);
  _swift_task_dealloc(uVar3);
  uVar3 = *puVar10;
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
  uVar6 = uVar3;
  __sScg7isEmptySbvg(uVar3,PTR___sytN_11034f1b0 + 8,uVar7,PTR___ss5ErrorWS_11034ee10);
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001041523dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x120) = iVar2;
  if (iVar2 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar8;
    uVar7 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_104152498;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x124,0,0,uVar7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x125,uVar3,FUN_1041524f4,unaff_x22 + 0x10);
  return;
}



/* Entry: 104152498; end: 1041524f3;  */

void FUN_104152498(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10415251c;
  }
  else {
    *(long *)(lVar2 + 0x118) = unaff_x20;
    pcVar1 = FUN_104152600;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1041524f4; end: 10415251b;  */

void FUN_1041524f4(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10415251c;
  }
  else {
    *(long *)(unaff_x22 + 0x118) = unaff_x20;
    pcVar1 = FUN_104152600;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10415251c; end: 1041525ff;  */

void FUN_10415251c(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar4 = **(ulong **)(unaff_x22 + 0xb0);
  uVar1 = uVar4;
  __sScg7isEmptySbvg(uVar4,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x108),
                     PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104152570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(int *)(unaff_x22 + 0x120) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_104152498;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x124,0,0,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x125,uVar4,FUN_1041524f4,unaff_x22 + 0x10);
  return;
}



/* Entry: 104152600; end: 1041529f7;  */

void FUN_104152600(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0xa0) = *(long *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd8) + 0x78);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
  uVar10 = 0;
  func_0x00010414e0dc(0,(undefined8 *)(unaff_x22 + 0x38));
  FUN_104146b1c(unaff_x22 + 0x68,FUN_104152cb0,unaff_x22 + 0x90,uVar11,uVar10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(ulong *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar9 = (uint)(uVar6 >> 0x3e);
  if (uVar9 == 0) {
    lVar12 = *(long *)(lVar1 + 0x10);
    if (lVar12 == 0) {
      _swift_retain(uVar10);
    }
    else {
      uVar4 = 0;
      __sScEMa();
      uVar11 = uVar4;
      func_0x000100f5abbc();
      _swift_retain(uVar10);
      puVar17 = PTR___ss5ErrorWS_11034ee10;
      puVar16 = (undefined8 *)(lVar1 + 0x20);
      do {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar18 = *puVar16;
        uVar5 = uVar4;
        uVar15 = uVar11;
        _swift_allocError(uVar4,uVar11,0,0);
        __sS2cEycfC(uVar15);
        puVar8 = (undefined8 *)puVar17;
        _swift_allocError(uVar14,puVar17,0,0);
        *puVar8 = uVar5;
        _swift_continuation_throwingResumeWithError(uVar18,uVar14);
        lVar12 = lVar12 + -1;
        puVar16 = puVar16 + 1;
      } while (lVar12 != 0);
    }
    puVar17 = PTR___sytN_11034f1b0;
    __sScT6cancelyyF(uVar10,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    _swift_release(uVar10);
  }
  else {
    puVar17 = PTR___sytN_11034f1b0;
    if (uVar9 == 1) {
      lVar12 = *(long *)(lVar2 + 0x10);
      if (lVar12 == 0) {
        _swift_errorRetain(lVar1);
        _swift_retain(uVar6 & 0x3fffffffffffffff);
      }
      else {
        _swift_errorRetain(lVar1);
        uVar4 = 0;
        __sScEMa();
        uVar11 = uVar4;
        func_0x000100f5abbc();
        _swift_retain(uVar6 & 0x3fffffffffffffff);
        puVar17 = PTR___ss5ErrorWS_11034ee10;
        puVar16 = (undefined8 *)(lVar2 + 0x20);
        do {
          uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
          uVar18 = *puVar16;
          uVar5 = uVar4;
          uVar15 = uVar11;
          _swift_allocError(uVar4,uVar11,0,0);
          __sS2cEycfC(uVar15);
          puVar8 = (undefined8 *)puVar17;
          _swift_allocError(uVar14,puVar17,0,0);
          *puVar8 = uVar5;
          _swift_continuation_throwingResumeWithError(uVar18,uVar14);
          lVar12 = lVar12 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar12 != 0);
      }
      puVar17 = PTR___sytN_11034f1b0;
      uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      __sScT6cancelyyF(uVar6 & 0x3fffffffffffffff,PTR___sytN_11034f1b0 + 8,
                       PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      *(long *)(unaff_x22 + 0x88) = lVar1;
      uVar5 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar4,uVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar11 = 0;
      __sSqMa(0,uVar5);
      FUN_104137c80(unaff_x22 + 0x88,uVar10,uVar11,uVar15,PTR___ss5ErrorWS_11034ee10);
      _swift_release(uVar6 & 0x3fffffffffffffff);
    }
  }
  puVar3 = PTR___ss5ErrorWS_11034ee10;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
  __sScg9cancelAllyyF(**(undefined8 **)(unaff_x22 + 0xb0),puVar17 + 8,
                      *(undefined8 *)(unaff_x22 + 0x108),PTR___ss5ErrorWS_11034ee10);
  FUN_10414de20(uVar10,lVar1,uVar6,lVar2);
  _swift_errorRelease(uVar11);
  uVar13 = **(ulong **)(unaff_x22 + 0xb0);
  uVar6 = uVar13;
  __sScg7isEmptySbvg(uVar13,puVar17 + 8,*(undefined8 *)(unaff_x22 + 0x108),puVar3);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(unaff_x22 + 0x120) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
                (unaff_x22 + 0x125,uVar13,FUN_1041524f4,unaff_x22 + 0x10);
      return;
    }
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar7;
    uVar10 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_104152498;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x124,0,0,uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104152948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041529f8; end: 104152a77;  */

void FUN_1041529f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x104153e4c;
  plVar5[0x19] = lVar2;
  plVar5[0x1a] = lVar4;
  plVar5[0x17] = (long)plVar1;
  plVar5[0x18] = lVar3;
  plVar5[0x16] = param_2;
  plVar5[0x1b] = *plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104152238,0,0);
  return;
}



/* Entry: 104152a78; end: 104152c03;  */

void FUN_104152a78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar10 = *unaff_x20;
  lVar9 = *(long *)(param_3 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  uStack_68 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8;
  lVar1 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar6,1,1,lVar1);
  (**(code **)(lVar9 + 0x10))(puVar5,param_1,param_3);
  uVar3 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar4 = uVar3 + 0x60 & (uVar3 ^ 0xffffffffffffffff);
  uVar8 = lVar7 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_110749768;
  _swift_allocObject(&UNK_110749768,uVar8 + 8,uVar3 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  uVar11 = *(undefined8 *)(lVar10 + 0x50);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar10 + 0x58);
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(lVar10 + 0x60);
  *(long *)(puVar2 + 0x38) = param_3;
  uVar11 = *(undefined8 *)(lVar10 + 0x68);
  *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(lVar10 + 0x70);
  *(undefined8 *)(puVar2 + 0x40) = uVar11;
  *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(lVar10 + 0x78);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  (**(code **)(lVar9 + 0x20))(puVar2 + uVar4,puVar5,param_3);
  *(long **)(puVar2 + uVar8) = unaff_x20;
  _swift_retain();
  func_0x000101e9558c(lVar6,&UNK_10dcd9338,puVar2);
  func_0x0001000abe54(lVar6);
  return;
}



/* Entry: 104152c04; end: 104152caf;  */

void FUN_104152c04(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_2;
  uVar2 = 0x21;
  uVar3 = 0;
  _swift_beginAccess((long)param_2 + *(long *)(lVar4 + 0x88),auStack_58);
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  uStack_90 = *(undefined8 *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uStack_68 = *(undefined8 *)(lVar4 + 0x78);
  uStack_70 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  FUN_104149d78(0,&uStack_90);
  func_0x00010414c220();
  _swift_endAccess(auStack_58);
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



/* Entry: 104152cb0; end: 104152cc7;  */

void FUN_104152cb0(void)

{
  long unaff_x20;
  
  FUN_104152c04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104152cc8; end: 104152e7b;  */

void FUN_104152cc8(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x3;
  long *in_x4;
  long in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(long *)(unaff_x22 + 0x130) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x138) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x120) = in_x3;
  *(long **)(unaff_x22 + 0x128) = in_x4;
  lVar5 = *in_x4;
  uVar10 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar7;
  uVar8 = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar8;
  uVar11 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar11;
  uVar9 = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar9;
  uVar6 = *(undefined8 *)(lVar5 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
  *(undefined8 *)(unaff_x22 + 200) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar6;
  lVar5 = 0;
  FUN_10414dd80();
  *(long *)(unaff_x22 + 0x170) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar3;
  puVar1 = PTR___sSciTL_11034fea8;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,uVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 400) = lVar5;
  lVar4 = 0;
  __sSqMa(0,lVar5);
  *(long *)(unaff_x22 + 0x198) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar3;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar3;
  lVar5 = *(long *)(in_x5 + -8);
  *(long *)(unaff_x22 + 0x1d0) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar3;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,in_x6,in_x5,puVar1,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x1e0) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104152e7c,0,0);
  return;
}



/* Entry: 104152e7c; end: 104152f0f;  */

void FUN_104152e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  (**(code **)(*(long *)(unaff_x22 + 0x1d0) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x120),uVar1);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar3,uVar1,uVar2);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_104152f10;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1041538c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 104152f10; end: 104152fdf;  */

void FUN_104152f10(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x30) != 0) {
    *(long *)(lVar4 + 0x208) = *(long *)(lVar4 + 0x30);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10415303c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x138);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x130),*(undefined8 *)(lVar4 + 0x1e0),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x1f8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104152fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x1b0),*(undefined8 *)(lVar4 + 0x1e0),uVar1);
  return;
}



/* Entry: 104152fe0; end: 10415303b;  */

void FUN_104152fe0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1041530e8;
  }
  else {
    pcVar1 = FUN_10415372c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10415303c; end: 1041530e7;  */

void FUN_10415303c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x1e0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001041530e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041530e8; end: 10415365b;  */

void FUN_1041530e8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar13 = *(long *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 400);
  uVar11 = uVar3;
  (**(code **)(lVar13 + 0x30))(uVar3,1,uVar10);
  if ((int)uVar11 != 1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar8 = *(long *)(unaff_x22 + 0x178);
    lVar9 = *(long *)(unaff_x22 + 0x128);
    pcVar17 = *(code **)(lVar13 + 0x20);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
    (*pcVar17)(uVar14,uVar3,uVar10);
    uVar3 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
    *(long *)(unaff_x22 + 0x70) = lVar9;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar14;
    FUN_104146b1c(uVar16,FUN_104153bd4,unaff_x22 + 0x50,uVar3,uVar4);
    (**(code **)(lVar8 + 0x10))(uVar11,uVar16,uVar4);
    uVar3 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    uVar4 = 0xff;
    __sSccMa(0xff,uVar7,uVar3,PTR___ss5ErrorWS_11034ee10);
    lVar13 = 0;
    _swift_getTupleTypeMetadata2(0,uVar4,uVar10,"downstreamContinuation element ",0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x30))(uVar11,1,lVar13);
    if ((int)uVar11 == 1) {
      lVar13 = *(long *)(unaff_x22 + 0x1b8);
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
                (*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x170));
      pcVar17 = *(code **)(lVar13 + 8);
    }
    else {
      lVar8 = *(long *)(unaff_x22 + 0x1b8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar11 = *(undefined8 *)(unaff_x22 + 400);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar9 = *(long *)(unaff_x22 + 0x178);
      uVar15 = **(undefined8 **)(unaff_x22 + 0x180);
      (*pcVar17)(uVar4,(long)*(undefined8 **)(unaff_x22 + 0x180) + (long)*(int *)(lVar13 + 0x30),
                 uVar11);
      (**(code **)(lVar8 + 0x10))(uVar14,uVar4,uVar11);
      (**(code **)(lVar8 + 0x38))(uVar14,0,1,uVar11);
      func_0x00010176fed4(uVar14,uVar15,uVar16,uVar3,PTR___ss5ErrorWS_11034ee10);
      pcVar17 = *(code **)(lVar8 + 8);
      (*pcVar17)(uVar4,uVar11);
      (**(code **)(lVar9 + 8))(uVar7,uVar10);
    }
    (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x1c8),*(undefined8 *)(unaff_x22 + 400));
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10415365c;
    _swift_continuation_init(unaff_x22 + 0x10,1);
    FUN_1041538c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  lVar13 = *(long *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x198));
  uVar11 = *(undefined8 *)(lVar13 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar16;
  *(long *)(unaff_x22 + 0xa0) = lVar13;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar10;
  uVar3 = 0;
  func_0x00010414d04c(0,(undefined8 *)(unaff_x22 + 0xd8));
  FUN_104146b1c(unaff_x22 + 0x108,FUN_104153b6c,unaff_x22 + 0x80,uVar11,uVar3);
  uVar1 = *(ulong *)(unaff_x22 + 0x108);
  lVar13 = *(long *)(unaff_x22 + 0x110);
  lVar8 = *(long *)(unaff_x22 + 0x118);
  uVar6 = (uint)(uVar1 >> 0x3e);
  if (uVar6 == 0) {
    lVar9 = *(long *)(lVar13 + 0x10);
    if (lVar9 != 0) {
      uVar11 = 0;
      __sScEMa();
      uVar3 = uVar11;
      func_0x000100f5abbc();
      puVar2 = PTR___ss5ErrorWS_11034ee10;
      puVar12 = (undefined8 *)(lVar13 + 0x20);
      do {
        uVar16 = *puVar12;
        uVar10 = uVar11;
        uVar4 = uVar3;
        _swift_allocError(uVar11,uVar3,0,0);
        __sS2cEycfC(uVar4);
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar5 = (undefined8 *)puVar2;
        _swift_allocError();
        *puVar5 = uVar10;
        _swift_continuation_throwingResumeWithError(uVar16,uVar4);
        lVar9 = lVar9 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar9 != 0);
    }
    __sScT6cancelyyF(uVar1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
  }
  else {
    if (uVar6 != 1) goto LAB_1041535d4;
    lVar9 = *(long *)(lVar8 + 0x10);
    if (lVar9 != 0) {
      uVar11 = 0;
      __sScEMa();
      uVar3 = uVar11;
      func_0x000100f5abbc();
      puVar2 = PTR___ss5ErrorWS_11034ee10;
      puVar12 = (undefined8 *)(lVar8 + 0x20);
      do {
        uVar16 = *puVar12;
        uVar10 = uVar11;
        uVar4 = uVar3;
        _swift_allocError(uVar11,uVar3,0,0);
        __sS2cEycfC(uVar4);
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar5 = (undefined8 *)puVar2;
        _swift_allocError();
        *puVar5 = uVar10;
        _swift_continuation_throwingResumeWithError(uVar16,uVar4);
        lVar9 = lVar9 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar9 != 0);
    }
    lVar9 = *(long *)(unaff_x22 + 0x1b8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 400);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
    __sScT6cancelyyF(lVar13,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                     PTR___ss5NeverOs5ErrorsWP_11034ee90);
    (**(code **)(lVar9 + 0x38))(uVar10,1,1,uVar3);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x00010176fed4(uVar10,uVar1 & 0x3fffffffffffffff,uVar11,uVar3,PTR___ss5ErrorWS_11034ee10);
  }
  FUN_104153b88(uVar1,lVar13,lVar8);
LAB_1041535d4:
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))(uVar16,*(undefined8 *)(unaff_x22 + 0x1e0));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000104153658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10415365c; end: 10415372b;  */

void FUN_10415365c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x30) != 0) {
    *(long *)(lVar4 + 0x208) = *(long *)(lVar4 + 0x30);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10415303c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x138);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x130),*(undefined8 *)(lVar4 + 0x1e0),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x1f8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104152fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x1b0),*(undefined8 *)(lVar4 + 0x1e0),uVar1);
  return;
}



/* Entry: 10415372c; end: 1041537d7;  */

void FUN_10415372c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x1e0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001041537d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041537d8; end: 104153887;  */

void FUN_1041537d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  lVar10 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x58);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar7 = uVar7 + 0x60 & (uVar7 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar14 = *(long **)(unaff_x20 +
                      (*(long *)(*(long *)(lVar10 + -8) + 0x40) + uVar7 + 7 & 0xffffffffffffff8));
  plVar4 = (long *)0x210;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104153888;
  plVar4[0x26] = lVar10;
  plVar4[0x27] = lVar12;
  plVar4[0x24] = unaff_x20 + uVar7;
  plVar4[0x25] = (long)plVar14;
  lVar5 = *plVar14;
  lVar11 = *(long *)(lVar5 + 0x50);
  plVar4[0x28] = lVar11;
  lVar6 = *(long *)(lVar5 + 0x58);
  plVar4[0x29] = lVar6;
  lVar8 = *(long *)(lVar5 + 0x60);
  plVar4[0x2a] = lVar8;
  lVar13 = *(long *)(lVar5 + 0x68);
  plVar4[0x2b] = lVar13;
  lVar9 = *(long *)(lVar5 + 0x70);
  plVar4[0x2c] = lVar9;
  lVar5 = *(long *)(lVar5 + 0x78);
  plVar4[0x15] = lVar11;
  plVar4[0x2d] = lVar5;
  plVar4[0x16] = lVar6;
  plVar4[0x17] = lVar8;
  plVar4[0x18] = lVar13;
  plVar4[0x19] = lVar9;
  plVar4[0x1a] = lVar5;
  lVar5 = 0;
  FUN_10414dd80(0,plVar4 + 0x15,uVar1);
  plVar4[0x2e] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x2f] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x30] = uVar3;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x31] = uVar7;
  puVar2 = PTR___sSciTL_11034fea8;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar13,lVar11,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[0x32] = lVar5;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  plVar4[0x33] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar4[0x34] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x35] = uVar3;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x36] = uVar7;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x37] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x38] = uVar3;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x39] = uVar7;
  lVar5 = *(long *)(lVar10 + -8);
  plVar4[0x3a] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x3b] = uVar7;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,lVar12,lVar10,puVar2,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar4[0x3c] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x3d] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x3e] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104152e7c,0,0);
  return;
}



/* Entry: 104153888; end: 1041538c3;  */

void FUN_104153888(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001041538c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1041538c4; end: 104153997;  */

void FUN_1041538c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar4 = *param_2;
  lVar6 = param_2[2];
  uStack_98 = *(ulong *)(lVar4 + 0x58);
  uStack_a0 = *(undefined8 *)(lVar4 + 0x50);
  uStack_88 = *(undefined8 *)(lVar4 + 0x68);
  uStack_90 = *(undefined8 *)(lVar4 + 0x60);
  uStack_78 = *(undefined8 *)(lVar4 + 0x78);
  uStack_80 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  uStack_50 = param_3;
  uStack_48 = param_4;
  plStack_40 = param_2;
  uStack_38 = param_1;
  func_0x00010414cf78(0,&uStack_a0);
  FUN_104146b1c(&uStack_a0,0x104153bf0,auStack_60,lVar6,uVar1);
  uVar1 = uStack_a0;
  uVar5 = (uint)(uStack_98 >> 0x3e);
  if (uVar5 == 0) {
    _swift_continuation_throwingResume(uStack_a0);
  }
  else if (uVar5 == 1) {
    uVar7 = uStack_98 & 0x3fffffffffffffff;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar3 = (ulong *)PTR___ss5ErrorWS_11034ee10;
    _swift_allocError();
    *puVar3 = uVar7;
    _swift_continuation_throwingResumeWithError(uVar1,uVar2);
  }
  return;
}



/* Entry: 104153998; end: 104153a37;  */

void FUN_104153998(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  uStack_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  uStack_70 = *(undefined8 *)(lVar2 + 0x70);
  uVar1 = 0;
  FUN_104149d78(0,&uStack_90);
  func_0x00010414b9e8();
  _swift_endAccess(auStack_58);
  *param_1 = param_3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 104153a38; end: 104153acf;  */

void FUN_104153a38(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  uStack_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  uStack_70 = *(undefined8 *)(lVar2 + 0x70);
  uVar1 = 0;
  FUN_104149d78(0,&uStack_90);
  func_0x00010414bbf8(param_1,param_3,uVar1);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 104153ad0; end: 104153b6b;  */

void FUN_104153ad0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar2 = &uStack_90;
  lVar4 = *param_2;
  uVar3 = 0x21;
  _swift_beginAccess((long)param_2 + *(long *)(lVar4 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  uStack_90 = *(undefined8 *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uStack_68 = *(undefined8 *)(lVar4 + 0x78);
  uStack_70 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  FUN_104149d78();
  func_0x00010414bfc4();
  _swift_endAccess(auStack_58);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = uVar3;
  return;
}



/* Entry: 104153b6c; end: 104153b87;  */

void FUN_104153b6c(void)

{
  long unaff_x20;
  
  FUN_104153ad0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104153b88; end: 104153bd3;  */

void FUN_104153b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x3e);
  if ((uVar1 != 0) && (param_1 = param_2, param_2 = param_3, uVar1 != 1)) {
    return;
  }
  _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104153bd4; end: 104153c0b;  */

void FUN_104153bd4(void)

{
  long unaff_x20;
  
  FUN_104153a38(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104153c0c; end: 104153df7;  */

void FUN_104153c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
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
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar4 + 0x60);
  lVar1 = 0;
  uStack_d0 = uVar3;
  uStack_b0 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  __sSqMa();
  lStack_b8 = *(long *)(lVar1 + -8);
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = *(long *)(lVar4 + 0x58);
  lStack_c8 = *(long *)(lVar8 + -8);
  lStack_c0 = (long)&uStack_e0 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = ((long)&uStack_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar4 + 0x50);
  lVar1 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_d8 = *(undefined8 *)(lVar4 + 0x68);
  uStack_e0 = *(undefined8 *)(lVar4 + 0x70);
  uVar6 = *(undefined8 *)(lVar4 + 0x78);
  lVar4 = 0;
  lStack_90 = lVar11;
  lStack_88 = lVar8;
  uStack_80 = uVar3;
  uStack_78 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_68 = uVar6;
  FUN_104149d78(0,&lStack_90);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar9 - extraout_x8_02;
  puVar2 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar2 = 0;
  unaff_x20[2] = (long)puVar2;
  (**(code **)(lVar1 + 0x10))(lVar9,uStack_b0,lVar11);
  (**(code **)(lStack_c8 + 0x10))(lVar10,uStack_a0,lVar8);
  lVar1 = lStack_c0;
  (**(code **)(lStack_b8 + 0x10))(lStack_c0,uStack_98,lStack_a8);
  *(undefined8 *)(lVar5 + -0x10) = uVar6;
  FUN_10414b48c(lVar5,lVar9,lVar10,lVar1,lVar11,lVar8,uStack_d0,uStack_d8,uStack_e0);
  (**(code **)(lVar7 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88),lVar5,lVar4);
  return;
}



/* Entry: 104153df8; end: 104153e47;  */

void FUN_104153df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_104153c0c(param_1,param_2,param_3);
  return;
}



/* Entry: 104153e48; end: 104153e53;  */

void FUN_104153e48(void)

{
  FUN_104151890();
  return;
}



/* Entry: 104153e54; end: 104153f77;  */

void FUN_104153e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(long *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(param_5 + 8) + 8),param_3,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar1 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104153f78,0,0);
  return;
}



/* Entry: 104153f78; end: 104154053;  */

void FUN_104153f78(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  __sSmxycfCTj(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x20),
               *(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 0x10))(uVar4,uVar3,uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar7,uVar2,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_getAssociatedConformanceWitness
            (uVar5,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x80),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104154054;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar6,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x80),uVar5);
  return;
}



/* Entry: 104154054; end: 1041540af;  */

void FUN_104154054(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1041540b0;
  }
  else {
    pcVar1 = FUN_104154240;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1041540b0; end: 10415423f;  */

void FUN_1041540b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar3 = uVar8;
  (**(code **)(lVar1 + 0x30))(uVar8,1,uVar4);
  if ((int)uVar3 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
              (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010415416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(lVar1 + 0x20))(uVar2,uVar8,uVar4);
  (**(code **)(lVar1 + 0x10))(uVar3,uVar2,uVar4);
  __sSm6appendyy7ElementQznFTj(uVar3,uVar7,uVar6);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x80),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104154054;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x80),uVar4);
  return;
}



/* Entry: 104154240; end: 1041542f7;  */

void FUN_104154240(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar1 + 8))(uVar7,uVar8);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar6,lVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001041542f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041542f8; end: 10415430f;  */

void FUN_1041542f8(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104154310; end: 10415440b;  */

void FUN_104154310(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar3 + -8);
  lVar1 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))((long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x0001031acf04(param_1,param_2,puVar4);
  if (unaff_x21 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    _swift_allocError(lVar3,uVar2,0,0);
    (**(code **)(lVar5 + 0x20))(uVar2,puVar4,lVar3);
  }
  return;
}



/* Entry: 10415440c; end: 10415453b;  */

void FUN_10415440c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(long *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,PTR___ss10SetAlgebraTL_11034e360,
             PTR___s7Elements10SetAlgebraPTl_11034d630);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  lVar1 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10415453c,0,0);
  return;
}



/* Entry: 10415453c; end: 104154617;  */

void FUN_10415453c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  __ss10SetAlgebraPxycfCTj
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x20),
             *(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 0x10))(uVar4,uVar3,uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar7,uVar2,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_getAssociatedConformanceWitness
            (uVar5,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x88),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104154618;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar6,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x88),uVar5);
  return;
}



/* Entry: 104154618; end: 104154673;  */

void FUN_104154618(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104154674;
  }
  else {
    pcVar1 = FUN_104154830;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104154674; end: 10415482f;  */

void FUN_104154674(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar3 = uVar10;
  (**(code **)(lVar1 + 0x30))(uVar10,1,uVar4);
  if ((int)uVar3 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
    (**(code **)(lVar1 + 8))(uVar2,uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000104154744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(lVar1 + 0x20))(uVar2,uVar10,uVar4);
  (**(code **)(lVar1 + 0x10))(uVar7,uVar2,uVar4);
  __ss10SetAlgebraP6insertySb8inserted_7ElementQz17memberAfterInserttAFnFTj(uVar3,uVar7,uVar9,uVar8)
  ;
  pcVar6 = *(code **)(lVar1 + 8);
  (*pcVar6)(uVar3,uVar4);
  (*pcVar6)(uVar2,uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x88),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104154618;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x88),uVar4);
  return;
}



/* Entry: 104154830; end: 1041548f7;  */

void FUN_104154830(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar1 + 8))(uVar7,uVar8);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar6,lVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001041548f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041548f8; end: 104154917;  */

void FUN_1041548f8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010415490c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_1,param_2);
  return;
}



/* Entry: 104154918; end: 1041549f3;  */

void FUN_104154918(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&lStack_28,param_1 + 0x18);
  }
  return;
}



/* Entry: 1041549f4; end: 104154a03;  */

void FUN_1041549f4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104154a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 104154a04; end: 104154ac3;  */

undefined8 FUN_104154a04(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x10))();
  return param_1;
}



/* Entry: 104154ac4; end: 104154bb7;  */

uint * FUN_104154ac4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_104154b5c;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_104154af4;
    }
    if (1 < uVar7) goto LAB_104154af0;
  }
  else {
LAB_104154af0:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_104154af4:
    if (uVar7 != 0) {
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        uVar3 = 4;
        if (uVar4 < 4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_104154b5c:
                    /* WARNING: Could not recover jumptable at 0x000104154b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Entry: 104154bb8; end: 104154d63;  */

void FUN_104154bb8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar6);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104154d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Entry: 104154d64; end: 104154d6f;  */

void FUN_104154d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f22e8);
  return;
}



/* Entry: 104154d70; end: 104154e63;  */

void FUN_104154d70(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar2;
  lStack_70 = lVar2;
  FUN_10416c784(0,&uStack_80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))((long)&uStack_80 - extraout_x8,1,1,lVar2);
  FUN_10416d230();
  (**(code **)(lVar3 + 8))((long)&uStack_80 - extraout_x8,lVar1);
  FUN_104154e64(unaff_x20);
  return;
}



/* Entry: 104154e64; end: 104154f23;  */

void FUN_104154e64(long *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  uStack_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x68);
  lVar1 = 0;
  FUN_104155e00(0,&uStack_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 104154f24; end: 104154f43;  */

void FUN_104154f24(void)

{
  func_0x000104154ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104154f44; end: 10415506b;  */

void FUN_104154f44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long unaff_x22;
  long lVar9;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar9 = *unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  uVar5 = 0xff;
  __sSqMa(0xff,uVar4);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar9 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar5,0,0);
  *(long *)(unaff_x22 + 0x38) = lVar9;
  lVar6 = 0;
  __sSqMa(0,lVar9);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar7;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar8;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10415506c,0,0);
  return;
}



/* Entry: 10415506c; end: 10415511b;  */

void FUN_10415506c(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1041550c0;
  plVar1[2] = *(long *)(unaff_x22 + 0x50);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041680c4,0,0);
  return;
}



/* Entry: 10415511c; end: 104155337;  */

void FUN_10415511c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar9 = *(long *)(unaff_x22 + 0x58);
  lVar17 = *(long *)(unaff_x22 + 0x38);
  uVar11 = uVar1;
  (**(code **)(lVar9 + 0x30))(uVar1,1,lVar17);
  if ((int)uVar11 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x40));
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,uVar11,uVar14,0,0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar13,1,1,lVar9);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar15 = *(long *)(unaff_x22 + 0x60);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    lVar19 = *(long *)(unaff_x22 + 0x10);
    pcVar12 = *(code **)(lVar9 + 0x20);
    (*pcVar12)(uVar11,uVar1,lVar17);
    lVar10 = 0;
    _swift_getTupleTypeMetadata2(0,lVar16,lVar3,0,0);
    iVar5 = *(int *)(lVar10 + 0x30);
    (**(code **)(lVar9 + 0x10))(lVar2,uVar11,lVar17);
    iVar6 = *(int *)(lVar17 + 0x30);
    iVar7 = *(int *)(lVar17 + 0x40);
    lVar9 = *(long *)(lVar16 + -8);
    (**(code **)(lVar9 + 0x20))(lVar19,lVar2,lVar16);
    (*pcVar12)(lVar15,uVar11,lVar17);
    iVar8 = *(int *)(lVar17 + 0x40);
    lVar18 = *(long *)(lVar3 + -8);
    (**(code **)(lVar18 + 0x20))(lVar19 + iVar5,lVar15 + *(int *)(lVar17 + 0x30),lVar3);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar19,0,1,lVar10);
    pcVar12 = *(code **)(*(long *)(lVar4 + -8) + 8);
    (*pcVar12)(lVar15 + iVar8,lVar4);
    (**(code **)(lVar9 + 8))(lVar15,lVar16);
    (*pcVar12)(lVar2 + iVar7,lVar4);
    (**(code **)(lVar18 + 8))(lVar2 + iVar6,lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000104155334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104155338; end: 104155393;  */

void FUN_104155338(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000104155390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104155394; end: 1041553ab;  */

void FUN_104155394(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041553ac,0,0);
  return;
}



/* Entry: 1041553ac; end: 10415543b;  */

void FUN_1041553ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x22;
  long lVar10;
  
  plVar9 = (long *)**(long **)(unaff_x22 + 0x18);
  plVar8 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x104155400;
  plVar8[2] = *(long *)(unaff_x22 + 0x10);
  plVar8[3] = (long)plVar9;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar10 = *plVar9;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x50),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar8[4] = lVar3;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  plVar8[5] = lVar4;
  lVar10 = 0xff;
  __sSqMa(0xff,lVar4);
  plVar8[6] = lVar10;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,lVar4,lVar10,0,0);
  plVar8[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar8[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar8[9] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar6;
  lVar3 = *(long *)(lVar5 + -8);
  plVar8[0xb] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xd] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xe] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10415506c,0,0);
  return;
}



/* Entry: 10415543c; end: 10415548b;  */

void FUN_10415543c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10415548c;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041553ac,0,0);
  return;
}



/* Entry: 10415548c; end: 1041554c7;  */

void FUN_10415548c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001041554c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1041554c8; end: 10415559f;  */

void FUN_1041554c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
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
  plVar3[1] = (long)FUN_1041555a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1041555a0; end: 10415560f;  */

void FUN_1041555a0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010415560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104155610; end: 104155657;  */

void FUN_104155610(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_104154d70();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 104155658; end: 1041556e7;  */

void FUN_104155658(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1041556e8; end: 1041556f7;  */

void FUN_1041556e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd93c0,param_1);
  return;
}



/* Entry: 1041556f8; end: 104155783;  */

void FUN_1041556f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x30);
    }
  }
  return;
}



/* Entry: 104155784; end: 10415584f;  */

long * FUN_104155784(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar1 = *(long *)(lVar4 + 0x40) + uVar5;
  uVar3 = *(uint *)(lVar4 + 0x50) | *(uint *)(lVar7 + 0x50);
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 && (uVar3 & 0x100000) == 0) &&
      (uVar1 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) < 0x19) {
    (**(code **)(lVar4 + 0x10))(param_1);
    (**(code **)(lVar7 + 0x10))(uVar1 + (long)param_1 & ~uVar5,uVar1 + (long)param_2 & ~uVar5,lVar6)
    ;
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104155850; end: 104155a57;  */

void FUN_104155850(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001041558a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Entry: 104155a58; end: 104155ba3;  */

uint * FUN_104155a58(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(uint *)(lVar9 + 0x54);
  lVar10 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar4) {
    uVar3 = uVar4;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = *(long *)(lVar9 + 0x40) + uVar11;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_104155b1c;
  lVar2 = (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar8 = (uint)lVar2;
  uVar5 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar12 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
    if (0xff < uVar12) {
      if (uVar12 >> 0x10 == 0) {
        uVar12 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar12 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_104155ab4;
    }
    if (1 < uVar12) goto LAB_104155ab0;
  }
  else {
LAB_104155ab0:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_104155ab4:
    if (uVar12 != 0) {
      uVar4 = 0;
      if (uVar8 < 4) {
        uVar4 = uVar12 - 1 << (ulong)(uVar5 & 0x1f);
      }
      if (uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar8 < 4) {
          uVar7 = uVar8;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar7 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_104155b1c:
  if (uVar7 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000104155b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  puVar6 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar11);
                    /* WARNING: Could not recover jumptable at 0x000104155b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(puVar6,uVar7,*(long *)(param_3 + 0x18));
  return puVar6;
}



/* Entry: 104155ba4; end: 104155d9f;  */

void FUN_104155ba4(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  
  lVar8 = *(long *)(param_4 + 0x10);
  lVar9 = *(long *)(param_4 + 0x18);
  lVar10 = *(long *)(lVar8 + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar11 + 0x54);
  uVar3 = uVar4;
  if (uVar4 <= uVar7) {
    uVar3 = uVar7;
  }
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar1 = *(long *)(lVar10 + 0x40) + uVar12;
  lVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  uVar13 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar15 = 0;
  }
  else if (uVar13 < 4) {
    uVar6 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar13 << 3 & 0x1f)) >> (ulong)(uVar13 << 3 & 0x1f)
            ) + 1;
    bVar15 = 2;
    if (0xffff < uVar6) {
      bVar15 = 4;
    }
    if (uVar6 < 0x100) {
      bVar15 = 1 < uVar6;
    }
  }
  else {
    bVar15 = 1;
  }
  uVar6 = (uint)param_2;
  if (uVar3 < uVar6) {
    uVar6 = uVar6 + ~uVar3;
    if (uVar13 < 4) {
      iVar14 = (uVar6 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar3 = uVar6 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar6;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = uVar6;
      iVar14 = 1;
    }
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar14;
      }
    }
    else if (bVar15 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar14;
    }
  }
  else {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar15 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar6 != 0) {
      if (uVar7 < uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar12);
        lVar8 = lVar9;
        uVar7 = uVar4;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x000104155d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar8);
      return;
    }
  }
  return;
}



/* Entry: 104155da0; end: 104155dbb;  */

void FUN_104155da0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f2318);
  return;
}



/* Entry: 104155dbc; end: 104155dff;  */

void FUN_104155dbc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 104155e00; end: 104155e13;  */

void FUN_104155e00(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f23a8);
  return;
}



/* Entry: 104155e14; end: 104155f1b;  */

void FUN_104155e14(long param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_80 - extraout_x8;
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  lStack_70 = lVar3;
  FUN_10416c784(0,&uStack_80);
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x48),lVar3);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,lVar3);
  FUN_10416d230();
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  FUN_104155f1c(unaff_x20);
  return;
}



/* Entry: 104155f1c; end: 104155fdf;  */

void FUN_104155f1c(long *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_48 = *(undefined8 *)(lVar1 + 0x58);
  uStack_50 = *(undefined8 *)(lVar1 + 0x50);
  uStack_38 = *(undefined8 *)(lVar1 + 0x68);
  uStack_40 = *(undefined8 *)(lVar1 + 0x60);
  uStack_28 = *(undefined8 *)(lVar1 + 0x78);
  uStack_30 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_10415720c(0,&uStack_50);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 104155fe0; end: 104155fff;  */

void FUN_104155fe0(void)

{
  func_0x000104155fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104156000; end: 104156157;  */

void FUN_104156000(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long unaff_x22;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar10 = *unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x50),
             PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x70),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x60),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  *(long *)(unaff_x22 + 0x40) = lVar10;
  lVar7 = 0;
  __sSqMa(0,lVar10);
  *(long *)(unaff_x22 + 0x48) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar8;
  lVar10 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar10;
  uVar8 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar9;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar9;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104156158,0,0);
  return;
}



/* Entry: 104156158; end: 104156207;  */

void FUN_104156158(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1041561ac;
  plVar1[2] = *(long *)(unaff_x22 + 0x58);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041680c4,0,0);
  return;
}



/* Entry: 104156208; end: 1041564db;  */

void FUN_104156208(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  lVar14 = *(long *)(unaff_x22 + 0x40);
  uVar7 = uVar1;
  (**(code **)(lVar8 + 0x30))(uVar1,1,lVar14);
  if ((int)uVar7 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x48));
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,uVar15,uVar7,uVar12,0,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar17,1,1,lVar8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    lVar20 = *(long *)(unaff_x22 + 0x70);
    lVar13 = *(long *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    lVar21 = *(long *)(unaff_x22 + 0x20);
    lVar10 = *(long *)(unaff_x22 + 0x10);
    (**(code **)(lVar8 + 0x20))(uVar12,uVar1,lVar14);
    lVar9 = 0;
    _swift_getTupleTypeMetadata3(0,lVar21,lVar13,lVar3,0,0);
    iVar5 = *(int *)(lVar9 + 0x30);
    pcVar19 = *(code **)(lVar8 + 0x10);
    (*pcVar19)(uVar7,uVar12,lVar14);
    lVar11 = *(long *)(lVar21 + -8);
    (**(code **)(lVar11 + 0x20))(lVar10,uVar7,lVar21);
    (*pcVar19)(lVar20,uVar12,lVar14);
    lVar21 = *(long *)(lVar13 + -8);
    (**(code **)(lVar21 + 0x20))(lVar10 + iVar5,lVar20 + *(int *)(lVar14 + 0x30),lVar13);
    (*pcVar19)(lVar2,uVar12,lVar14);
    lVar13 = (long)*(int *)(lVar14 + 0x40);
    lVar20 = *(long *)(lVar3 + -8);
    lVar8 = lVar2 + lVar13;
    (**(code **)(lVar20 + 0x30))(lVar8,1);
    if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x1041564dc);
      (*pcVar19)();
    }
    lVar8 = *(long *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x68);
    lVar4 = *(long *)(unaff_x22 + 0x70);
    lVar10 = *(long *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar22 = *(long *)(unaff_x22 + 0x10);
    iVar5 = *(int *)(lVar9 + 0x40);
    iVar6 = *(int *)(lVar14 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x40));
    (**(code **)(lVar20 + 0x20))(lVar22 + iVar5,lVar2 + lVar13,uVar7);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar22,0,1,lVar9);
    pcVar19 = *(code **)(lVar21 + 8);
    (*pcVar19)(lVar3 + iVar6,uVar1);
    pcVar16 = *(code **)(lVar11 + 8);
    (*pcVar16)(lVar3,uVar12);
    pcVar18 = *(code **)(*(long *)(lVar10 + -8) + 8);
    (*pcVar18)(lVar4 + lVar13,lVar10);
    (*pcVar16)(lVar4,uVar12);
    (*pcVar18)(lVar8 + lVar13,lVar10);
    (*pcVar19)(lVar8 + iVar6,uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001041564d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041564dc; end: 10415653f;  */

void FUN_1041564dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010415653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104156540; end: 104156557;  */

void FUN_104156540(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104156558,0,0);
  return;
}


