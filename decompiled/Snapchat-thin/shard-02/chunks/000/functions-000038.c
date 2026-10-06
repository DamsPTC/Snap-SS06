/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10171c0b4; end: 10171c12f;  */

void FUN_10171c0b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  FUN_10171c130(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
  func_0x000107c45788();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 10171c130; end: 10171c2f3;  */

undefined * FUN_10171c130(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10171c2f4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001007165a4(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_10171dc34(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x0001007165a4(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10171c2f4; end: 10171c38f;  */

void FUN_10171c2f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(long *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10171c340;
  plVar3[0x15] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171c390; end: 10171c46b;  */

void FUN_10171c390(long *param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  if (lVar4 != 0) {
    FUN_10171c660();
    *(long **)(unaff_x22 + 0xd8) = param_1;
    if (param_1 != (long *)0x0) {
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 200);
      *(long *)(unaff_x22 + 0x78) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x98) = 0xc000000000000000;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      piVar3 = *(int **)(*param_1 + 0xb0);
      iVar1 = *piVar3;
      plVar2 = (long *)(ulong)(uint)piVar3[1];
      func_0x000107c61434();
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10171c46c;
                    /* WARNING: Could not recover jumptable at 0x00010171c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x70,unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010171c468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10171c46c; end: 10171c50f;  */

void FUN_10171c46c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar6 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xe0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(param_1,param_2);
    plVar3 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(lVar6 + 0xf0) = plVar3;
    *plVar3 = lVar5;
    plVar3[1] = (long)FUN_10171c510;
    lVar5 = *(long *)(lVar6 + 0xb8);
    plVar3[0x1a] = lVar5;
    plVar2 = (long *)0xf0;
    func_0x000107c615b8();
    plVar3[0x1b] = (long)plVar2;
    *plVar2 = (long)plVar3;
    plVar2[1] = 0x10171bdfc;
    plVar2[0x15] = lVar5;
    lVar5 = 0;
    func_0x000107c5f804();
    plVar2[0x16] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar2[0x17] = lVar5;
    uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0x18] = uVar1;
    pcVar4 = FUN_10171b528;
  }
  else {
    pcVar4 = FUN_10171c5f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 10171c510; end: 10171c55f;  */

void FUN_10171c510(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171c560,0,0);
  return;
}



/* Entry: 10171c560; end: 10171c5f7;  */

void FUN_10171c560(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x48);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  func_0x000107c6157c(uVar5);
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010171c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 10171c5f8; end: 10171c65f;  */

void FUN_10171c5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c614ac(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010171c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10171c660; end: 10171c863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10171c660(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  long lStack_100;
  undefined8 auStack_f8 [5];
  long alStack_d0 [3];
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x60);
  puVar5 = puVar4;
  if (puVar4 == (undefined8 *)0x1) {
    func_0x000100083b20(alStack_d0);
    lVar2 = alStack_d0[0];
    lVar1 = *(long *)(alStack_d0[0] + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar3 = 0xd00000000000001a;
      func_0x000107c5fadc(0xd00000000000001a,0x800000010efb93c0);
      lVar1 = lVar2;
      func_0x000107c4e60c(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      alStack_d0[0] = -0x2fffffffffffffe8;
      alStack_d0[1] = 0x800000010ef1b1f0;
      alStack_d0[2] = 0;
      uStack_b8 = 0x201;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      func_0x000100083b20(auStack_f8);
      func_0x000103e3687c(auStack_120);
      func_0x000107c61170(auStack_f8[0]);
      FUN_10171dc10(auStack_120,uStack_108);
      pcVar6 = *(code **)(lStack_100 + 8);
      func_0x000107c615f0(lVar1);
      (*pcVar6)(auStack_f8,0xd00000000000001c,0x800000010efb93e0,alStack_d0,lVar1,uStack_108,
                lStack_100);
      func_0x000100e1b054(alStack_d0);
      func_0x000107c615ec(lVar1,2);
      func_0x000107c615e8(lVar2);
      FUN_10171dbb0(auStack_120);
      func_0x00010171fcbc(0);
      func_0x000107c613fc();
      puVar5 = auStack_f8;
      FUN_10171de48();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 **)(unaff_x20 + 0x60) = puVar5;
    func_0x000107c6157c(puVar5);
    FUN_10171d3b0(uVar3);
  }
  FUN_10171db78(puVar4);
  return puVar5;
}



/* Entry: 10171c864; end: 10171c9a7; -[_TtC38StoryReplyMutingServicesImplementation27StoryReplyMutingServiceImpl muteRepliesFrom:completionHandler:] */

void FUN_10171c864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fe548;
  func_0x000107c613fc(&UNK_1103fe548,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fe570;
  func_0x000107c613fc(&UNK_1103fe570,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981d38;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fe598;
  func_0x000107c613fc(&UNK_1103fe598,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981d40;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d981d48,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10171c9a8; end: 10171ca1f;  */

void FUN_10171c9a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  long *plVar4;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x20) = param_2;
  plVar4 = (long *)0x100;
  func_0x000107c6157c(param_3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10171ca20;
  plVar4[0x16] = param_2;
  plVar4[0x17] = param_3;
  plVar4[0x15] = param_1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar4[0x18] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x10171c340;
  plVar3[0x15] = param_3;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171ca20; end: 10171ca8b;  */

void FUN_10171ca20(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  lVar2 = *(long *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar3);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010171ca88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 10171ca8c; end: 10171cb27;  */

void FUN_10171ca8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(long *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10171cad8;
  plVar3[0x15] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171cb28; end: 10171cc03;  */

void FUN_10171cb28(long *param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  if (lVar4 != 0) {
    FUN_10171c660();
    *(long **)(unaff_x22 + 0xd8) = param_1;
    if (param_1 != (long *)0x0) {
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 200);
      *(long *)(unaff_x22 + 0x78) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x98) = 0xc000000000000000;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      piVar3 = *(int **)(*param_1 + 0xb8);
      iVar1 = *piVar3;
      plVar2 = (long *)(ulong)(uint)piVar3[1];
      func_0x000107c61434();
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10171cc04;
                    /* WARNING: Could not recover jumptable at 0x00010171cbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x70,unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010171cc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10171cc04; end: 10171cca7;  */

void FUN_10171cc04(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar6 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xe0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(param_1,param_2);
    plVar3 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(lVar6 + 0xf0) = plVar3;
    *plVar3 = lVar5;
    plVar3[1] = (long)FUN_10171cca8;
    lVar5 = *(long *)(lVar6 + 0xb8);
    plVar3[0x1a] = lVar5;
    plVar2 = (long *)0xf0;
    func_0x000107c615b8();
    plVar3[0x1b] = (long)plVar2;
    *plVar2 = (long)plVar3;
    plVar2[1] = 0x10171bdfc;
    plVar2[0x15] = lVar5;
    lVar5 = 0;
    func_0x000107c5f804();
    plVar2[0x16] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar2[0x17] = lVar5;
    uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0x18] = uVar1;
    pcVar4 = FUN_10171b528;
  }
  else {
    pcVar4 = (code *)0x10171ddd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 10171cca8; end: 10171ccf7;  */

void FUN_10171cca8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171ddd4,0,0);
  return;
}



/* Entry: 10171ccf8; end: 10171ce3b; -[_TtC38StoryReplyMutingServicesImplementation27StoryReplyMutingServiceImpl unmuteRepliesFrom:completionHandler:] */

void FUN_10171ccf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fe4d0;
  func_0x000107c613fc(&UNK_1103fe4d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fe4f8;
  func_0x000107c613fc(&UNK_1103fe4f8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981d18;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fe520;
  func_0x000107c613fc(&UNK_1103fe520,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981d20;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d981d28,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10171ce3c; end: 10171ceb3;  */

void FUN_10171ce3c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  long *plVar4;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x20) = param_2;
  plVar4 = (long *)0x100;
  func_0x000107c6157c(param_3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10171dddc;
  plVar4[0x16] = param_2;
  plVar4[0x17] = param_3;
  plVar4[0x15] = param_1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar4[0x18] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x10171cad8;
  plVar3[0x15] = param_3;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171ceb4; end: 10171d0c7;  */

void FUN_10171ceb4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auStack_400 [120];
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2c0 [32];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_260 [48];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_200 [64];
  undefined1 uStack_1c0;
  undefined1 auStack_1a0 [96];
  undefined1 auStack_140 [96];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar14 = *unaff_x20;
  lVar13 = *(long *)(lVar14 + 0x10);
  if (lVar13 != 0) {
    puStack_388 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010171d994(0,lVar13,0);
    puVar15 = (undefined8 *)(lVar14 + 0x20);
    do {
      puVar2 = puStack_388;
      uStack_d8 = puVar15[1];
      uStack_e0 = *puVar15;
      uStack_c8 = puVar15[3];
      uStack_d0 = puVar15[2];
      uStack_b8 = puVar15[5];
      uStack_c0 = puVar15[4];
      uStack_a8 = puVar15[7];
      uStack_b0 = puVar15[6];
      uStack_98 = puVar15[9];
      uStack_a0 = puVar15[8];
      uStack_88 = puVar15[0xb];
      uStack_90 = puVar15[10];
      uStack_78 = puVar15[0xd];
      uStack_80 = puVar15[0xc];
      uStack_70 = puVar15[0xe];
      FUN_10171d9b0(&uStack_e0,auStack_400);
      FUN_101723488(&uStack_380);
      uVar3 = uStack_378;
      uVar12 = uStack_380;
      func_0x000107c61434(uStack_378);
      func_0x00010171d9ec(&uStack_380);
      uVar11 = uStack_e0;
      FUN_101723488(auStack_320);
      uVar5 = uStack_308;
      uVar4 = uStack_310;
      func_0x000107c61434(uStack_308);
      func_0x00010171d9ec(auStack_320);
      FUN_101723488(auStack_2c0);
      uVar7 = uStack_298;
      uVar6 = uStack_2a0;
      func_0x000107c61434(uStack_298);
      func_0x00010171d9ec(auStack_2c0);
      FUN_101723488(auStack_260);
      uVar9 = uStack_228;
      uVar8 = uStack_230;
      func_0x000107c61434(uStack_228);
      func_0x00010171d9ec(auStack_260);
      FUN_101723488(auStack_200);
      func_0x00010171d9ec(auStack_200);
      uVar10 = uStack_1c0;
      FUN_101723488(auStack_1a0);
      func_0x00010171d9ec(auStack_1a0);
      FUN_101723488(auStack_140);
      func_0x00010171d9ec(auStack_140);
      func_0x0001007165a4(0);
      func_0x000107c610f8();
      func_0x000103fdf1f8(uVar12,uVar3,uVar11,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
      func_0x00010171da20(&uStack_e0);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_388 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x00010171d994(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_388 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_388 + uVar1 * 8 + 0x20) = uVar12;
      puVar15 = puVar15 + 0xf;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 10171d0c8; end: 10171d1f3; -[_TtC38StoryReplyMutingServicesImplementation27StoryReplyMutingServiceImpl getMutedUsersWithCompletionHandler:] */

void FUN_10171d0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fe458;
  func_0x000107c613fc(&UNK_1103fe458,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fe480;
  func_0x000107c613fc(&UNK_1103fe480,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981ce0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fe4a8;
  func_0x000107c613fc(&UNK_1103fe4a8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981cf0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d981d00,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10171d1f4; end: 10171d24b;  */

void FUN_10171d1f4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar4 = (long *)0x110;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10171d24c;
  plVar4[0x1a] = param_2;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar4[0x1b] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x10171bdfc;
  plVar3[0x15] = param_2;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171d24c; end: 10171d2d7;  */

void FUN_10171d24c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x20));
  func_0x000107c61574(uVar2);
  uVar1 = 0;
  func_0x0001007165a4(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010171d2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 10171d2d8; end: 10171d31f;  */

void FUN_10171d2d8(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10171dde0;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171bc74,0,0);
  return;
}



/* Entry: 10171d320; end: 10171d353;  */

undefined8 FUN_10171d320(undefined8 param_1)

{
  (*(code *)(undefined *)0x101739754)();
  return param_1;
}



/* Entry: 10171d354; end: 10171d3af;  */

void FUN_10171d354(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_10171d3b0(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10171d3b0; end: 10171d3bf;  */

void FUN_10171d3b0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10171d3c0; end: 10171d3df;  */

void FUN_10171d3c0(void)

{
  FUN_10171d354();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10171d3e0; end: 10171d3ef;  */

undefined1  [16] FUN_10171d3e0(void)

{
  return ZEXT816(0x1103fe438);
}



/* Entry: 10171d3f0; end: 10171d453;  */

void FUN_10171d3f0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10171ddfc;
  plVar4[2] = lVar2;
  plVar4[3] = lVar1;
  plVar5 = (long *)0x110;
  func_0x000107c6157c(lVar1);
  func_0x000107c615b8();
  plVar4[4] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)FUN_10171d24c;
  plVar5[0x1a] = lVar1;
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  plVar5[0x1b] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x10171bdfc;
  plVar4[0x15] = lVar1;
  lVar2 = 0;
  func_0x000107c5f804();
  plVar4[0x16] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x17] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171d454; end: 10171d4cb;  */

void FUN_10171d454(void)

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
  plVar5[1] = 0x10171dde4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171d4cc; end: 10171d507;  */

void FUN_10171d4cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010171d504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10171d508; end: 10171d58b;  */

void FUN_10171d508(undefined8 param_1)

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
  plVar5[1] = 0x10171ddec;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171d58c; end: 10171d5cb;  */

void FUN_10171d58c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010171d5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10171d5cc; end: 10171d637;  */

void FUN_10171d5cc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10171ddf0;
  plVar3[2] = lVar4;
  plVar3[3] = lVar5;
  func_0x000107c5faec();
  plVar3[4] = lVar4;
  plVar6 = (long *)0x100;
  func_0x000107c6157c(lVar5);
  func_0x000107c615b8();
  plVar3[5] = (long)plVar6;
  *plVar6 = (long)plVar3;
  plVar6[1] = 0x10171dddc;
  plVar6[0x16] = lVar4;
  plVar6[0x17] = lVar5;
  plVar6[0x15] = lVar1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[0x18] = (long)plVar3;
  *plVar3 = (long)plVar6;
  plVar3[1] = 0x10171cad8;
  plVar3[0x15] = lVar5;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171d638; end: 10171d6af;  */

void FUN_10171d638(void)

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
  plVar5[1] = 0x10171ddf4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171d6b0; end: 10171d733;  */

void FUN_10171d6b0(undefined8 param_1)

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
  plVar5[1] = 0x10171ddf8;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171d734; end: 10171d767;  */

void FUN_10171d734(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10171d768; end: 10171d7d3;  */

void FUN_10171d768(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10171d7d4;
  plVar3[2] = lVar4;
  plVar3[3] = lVar5;
  func_0x000107c5faec();
  plVar3[4] = lVar4;
  plVar6 = (long *)0x100;
  func_0x000107c6157c(lVar5);
  func_0x000107c615b8();
  plVar3[5] = (long)plVar6;
  *plVar6 = (long)plVar3;
  plVar6[1] = (long)FUN_10171ca20;
  plVar6[0x16] = lVar4;
  plVar6[0x17] = lVar5;
  plVar6[0x15] = lVar1;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[0x18] = (long)plVar3;
  *plVar3 = (long)plVar6;
  plVar3[1] = 0x10171c340;
  plVar3[0x15] = lVar5;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171d7d4; end: 10171d80f;  */

void FUN_10171d7d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010171d80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10171d810; end: 10171d887;  */

void FUN_10171d810(void)

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
  plVar5[1] = 0x10171de00;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171d888; end: 10171d8b3;  */

void FUN_10171d888(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10171d8b4; end: 10171d937;  */

void FUN_10171d8b4(undefined8 param_1)

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
  plVar5[1] = 0x10171de04;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171d938; end: 10171d9af;  */

void FUN_10171d938(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001007165a4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc4470;
  plVar5 = (long *)&UNK_10d981d50;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10171d9b0; end: 10171da53;  */

undefined8 FUN_10171d9b0(undefined8 param_1,undefined8 param_2)

{
  FUN_10173764c(param_2,param_1);
  return param_2;
}



/* Entry: 10171da54; end: 10171db77;  */

undefined * FUN_10171da54(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10171db78);
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
    FUN_10171d938();
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
    func_0x0001007165a4(0);
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



/* Entry: 10171db78; end: 10171db97;  */

void FUN_10171db78(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10171db98; end: 10171dbaf;  */

void FUN_10171db98(long param_1)

{
  FUN_10171dbb0(param_1 + 0x20);
  return;
}



/* Entry: 10171dbb0; end: 10171dbcf;  */

void FUN_10171dbb0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010171dbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10171dbd0; end: 10171dc0f;  */

void FUN_10171dbd0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10171dc10; end: 10171dc33;  */

long * FUN_10171dc10(long *param_1,long param_2)

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



/* Entry: 10171dc34; end: 10171ddd3;  */

ulong FUN_10171dc34(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10171dd08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10171dd0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001007165a4(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar3 = 0;
    func_0x0001007165a4(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x657355646574754d,0xe900000000000072);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10171ddd4);
  (*pcVar2)();
}



/* Entry: 10171ddd4; end: 10171de07;  */

void FUN_10171ddd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x48);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  func_0x000107c6157c(uVar5);
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010171c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 10171de08; end: 10171de47;  */

long FUN_10171de08(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 10171de48; end: 10171de63;  */

void FUN_10171de48(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 10171de64; end: 10171de7f;  */

void FUN_10171de64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171de80,0,0);
  return;
}



/* Entry: 10171de80; end: 10171dfd7;  */

/* WARNING: Removing unreachable block (ram,0x00010171df14) */

void FUN_10171de80(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  func_0x00010171e0dc();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_110400668,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171e11c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171dfd8;
                    /* WARNING: Could not recover jumptable at 0x00010171dfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000035,0x800000010efb9400,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1104006f0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171dfd8; end: 10171e04b;  */

void FUN_10171dfd8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10171e04c;
  }
  else {
    pcVar2 = FUN_10171e0a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10171e04c; end: 10171e0a7;  */

void FUN_10171e04c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x40);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010171e0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171e0a8; end: 10171e15b;  */

void FUN_10171e0a8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010171e0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171e15c; end: 10171e17b;  */

void FUN_10171e15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171e17c,0,0);
  return;
}



/* Entry: 10171e17c; end: 10171e2e3;  */

/* WARNING: Removing unreachable block (ram,0x00010171e218) */

void FUN_10171e17c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa0) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
  func_0x00010171e3cc();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_110400568,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  plVar6 = plVar5;
  func_0x00010171e40c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171e2e4;
                    /* WARNING: Could not recover jumptable at 0x00010171e2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x58,0xd000000000000031,0x800000010efb9440,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x98),&UNK_1104005e8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171e2e4; end: 10171e357;  */

void FUN_10171e2e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  uVar4 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10171e358;
  }
  else {
    pcVar2 = FUN_10171e398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10171e358; end: 10171e397;  */

void FUN_10171e358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010171e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 10171e398; end: 10171e44b;  */

void FUN_10171e398(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010171e3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171e44c; end: 10171e46b;  */

void FUN_10171e44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171e46c,0,0);
  return;
}



/* Entry: 10171e46c; end: 10171e5d7;  */

/* WARNING: Removing unreachable block (ram,0x00010171e508) */

void FUN_10171e46c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
  func_0x00010171e6d0();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_110400880,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171e710();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171e5d8;
                    /* WARNING: Could not recover jumptable at 0x00010171e5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x38,0xd00000000000002d,0x800000010efb9480,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_110400998,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171e5d8; end: 10171e64b;  */

void FUN_10171e5d8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  uVar4 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10171e64c;
  }
  else {
    pcVar2 = FUN_10171e69c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10171e64c; end: 10171e69b;  */

void FUN_10171e64c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010171e698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 10171e69c; end: 10171e74f;  */

void FUN_10171e69c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010171e6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171e750; end: 10171e76b;  */

void FUN_10171e750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171e76c,0,0);
  return;
}



/* Entry: 10171e76c; end: 10171e8c3;  */

/* WARNING: Removing unreachable block (ram,0x00010171e800) */

void FUN_10171e76c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_10171e938();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_1103feb28,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171e978();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171e8c4;
                    /* WARNING: Could not recover jumptable at 0x00010171e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000028,0x800000010efb94b0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1103febb0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171e8c4; end: 10171e937;  */

void FUN_10171e8c4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10171fcdc;
  }
  else {
    pcVar2 = (code *)0x10171fce4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10171e938; end: 10171e9b7;  */

void FUN_10171e938(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc44b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d981ee0;
  func_0x000107c61520(&DAT_10d981ee0,&UNK_1103feb28);
  puRam0000000112dc44b0 = puVar1;
  return;
}



/* Entry: 10171e9b8; end: 10171e9d3;  */

void FUN_10171e9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  *(undefined8 *)(unaff_x22 + 0x110) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x100) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171e9d4,0,0);
  return;
}



/* Entry: 10171e9d4; end: 10171eb2b;  */

/* WARNING: Removing unreachable block (ram,0x00010171ea68) */

void FUN_10171e9d4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x100);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x110) + 0x10,unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar3 = *(long *)(unaff_x22 + 0xe0);
  lVar4 = unaff_x22 + 0xc0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x98) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  func_0x00010171ec24();
  func_0x000100075890(unaff_x22 + 0xe8,0,0,&UNK_1103fec38,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar5;
  plVar6 = plVar5;
  func_0x00010171ec64();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171eb2c;
                    /* WARNING: Could not recover jumptable at 0x00010171eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000027,0x800000010efb94e0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x108),&UNK_1103fecc0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171eb2c; end: 10171eb97;  */

void FUN_10171eb2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
    pcVar1 = FUN_10171eb98;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
    pcVar1 = (code *)0x10171ebf0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10171eb98; end: 10171eca3;  */

void FUN_10171eb98(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010171ebec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171eca4; end: 10171ecbf;  */

void FUN_10171eca4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171ecc0,0,0);
  return;
}



/* Entry: 10171ecc0; end: 10171ee17;  */

/* WARNING: Removing unreachable block (ram,0x00010171ed54) */

void FUN_10171ecc0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_10171ee8c();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_1103fed40,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171eecc();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171ee18;
                    /* WARNING: Could not recover jumptable at 0x00010171ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000002a,0x800000010efb9510,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_1103fedc8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171ee18; end: 10171ee8b;  */

void FUN_10171ee18(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa8);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x10171fcf4;
  }
  else {
    uVar1 = 0x10171fcec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10171ee8c; end: 10171ef0b;  */

void FUN_10171ee8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc44d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d982240;
  func_0x000107c61520(&DAT_10d982240,&UNK_1103fed40);
  puRam0000000112dc44d0 = puVar1;
  return;
}



/* Entry: 10171ef0c; end: 10171ef27;  */

void FUN_10171ef0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171ef28,0,0);
  return;
}



/* Entry: 10171ef28; end: 10171f07f;  */

/* WARNING: Removing unreachable block (ram,0x00010171efbc) */

void FUN_10171ef28(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_10171f0f4();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_110400f08,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171f134();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171f080;
                    /* WARNING: Could not recover jumptable at 0x00010171f07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000002b,0x800000010efb9540,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_110400f90,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171f080; end: 10171f0f3;  */

void FUN_10171f080(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 200);
  uVar3 = *(undefined8 *)(lVar2 + 0xc0);
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x10171fce0;
  }
  else {
    uVar1 = 0x10171fce8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10171f0f4; end: 10171f173;  */

void FUN_10171f0f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc44e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d983b50;
  func_0x000107c61520(&DAT_10d983b50,&UNK_110400f08);
  puRam0000000112dc44e0 = puVar1;
  return;
}



/* Entry: 10171f174; end: 10171f18f;  */

void FUN_10171f174(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171f190,0,0);
  return;
}



/* Entry: 10171f190; end: 10171f2e7;  */

/* WARNING: Removing unreachable block (ram,0x00010171f224) */

void FUN_10171f190(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  func_0x00010171f3d0();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_110401018,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171f410();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171f2e8;
                    /* WARNING: Could not recover jumptable at 0x00010171f2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000002a,0x800000010efb9570,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_1104010a0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171f2e8; end: 10171f35b;  */

void FUN_10171f2e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  uVar4 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10171f35c;
  }
  else {
    pcVar2 = FUN_10171f39c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10171f35c; end: 10171f39b;  */

void FUN_10171f35c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010171f398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 10171f39c; end: 10171f44f;  */

void FUN_10171f39c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010171f3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171f450; end: 10171f46b;  */

void FUN_10171f450(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171f46c,0,0);
  return;
}



/* Entry: 10171f46c; end: 10171f5c3;  */

/* WARNING: Removing unreachable block (ram,0x00010171f500) */

void FUN_10171f46c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_10171f638();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_110401120,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  func_0x00010171f678();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171f5c4;
                    /* WARNING: Could not recover jumptable at 0x00010171f5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000002d,0x800000010efb95a0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_1104011a8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171f5c4; end: 10171f637;  */

void FUN_10171f5c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa8);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x10171fcf8;
  }
  else {
    uVar1 = 0x10171fcf0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10171f638; end: 10171f6b7;  */

void FUN_10171f638(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d983eb0;
  func_0x000107c61520(&DAT_10d983eb0,&UNK_110401120);
  puRam0000000112dc4500 = puVar1;
  return;
}



/* Entry: 10171f6b8; end: 10171f6d3;  */

void FUN_10171f6b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171f6d4,0,0);
  return;
}



/* Entry: 10171f6d4; end: 10171f82f;  */

/* WARNING: Removing unreachable block (ram,0x00010171f768) */

void FUN_10171f6d4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x90);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa0) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  func_0x00010171f92c();
  func_0x000100075890(unaff_x22 + 0x80,0,0,&UNK_110400778,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  plVar6 = plVar5;
  func_0x00010171f96c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10171f830;
                    /* WARNING: Could not recover jumptable at 0x00010171f82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000029,0x800000010efb95d0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x98),&UNK_110400800,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10171f830; end: 10171f8a3;  */

void FUN_10171f830(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  uVar4 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10171f8a4;
  }
  else {
    pcVar2 = FUN_10171f8f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10171f8a4; end: 10171f8f3;  */

void FUN_10171f8a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010171f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar1,uVar2);
  return;
}



/* Entry: 10171f8f4; end: 10171f9ab;  */

void FUN_10171f8f4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010171f928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10171f9ac; end: 10171f9c7;  */

void FUN_10171f9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171f9c8,0,0);
  return;
}


