/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10287d504; end: 10287d56f;  */

void FUN_10287d504(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x130);
  uVar2 = *(undefined8 *)(lVar4 + 0x120);
  lVar3 = *(long *)(lVar4 + 0x128);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x138));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287d570,0,0);
  return;
}



/* Entry: 10287d570; end: 10287d5bb;  */

void FUN_10287d570(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  FUN_10287ce08(*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010287d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287d5bc; end: 10287d6d3; -[_TtC33ConvoLiveActivityServicesProvider28ConvoLiveActivityManagerImpl startActivityWithConversationId:userId:recipientSnapchatter:groupId:conversationSubType:displayName:] */

/* WARNING: Possible PIC construction at 0x00010287d69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287d6ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287d6a0) */
/* WARNING: Removing unreachable block (ram,0x00010287d6b0) */

void FUN_10287d5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar3 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = uVar3;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar4 = uVar3;
  }
  func_0x000107c5faec();
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10287c59c(param_3,param_2,param_4,uVar1,param_5,param_6,uVar4,param_7,param_8,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10287d6d4; end: 10287d6eb;  */

void FUN_10287d6d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287d6ec,0,0);
  return;
}



/* Entry: 10287d6ec; end: 10287d8fb;  */

void FUN_10287d6ec(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x30) = lVar6;
  if (lVar6 != 0) {
    uVar3 = 0x112ec5788;
    func_0x0001000285a8(0x112ec5788,&UNK_10dae59f8);
    func_0x000107c5f008();
    if (uVar3 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar2 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10287d8fc);
          (*pcVar1)();
        }
        uVar5 = *(undefined8 *)(uVar3 + 0x20);
        func_0x000107c6157c(uVar5);
      }
      else {
        uVar5 = 0;
        FUN_10288116c(0,uVar3);
      }
      *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
      func_0x000107c6142c(uVar3);
      lVar6 = 0x112ec58a0;
      func_0x0001000285a8(0x112ec58a0,&UNK_10dae5c38);
      *(long *)(unaff_x22 + 0x40) = lVar6;
      lVar6 = *(long *)(lVar6 + -8);
      *(long *)(unaff_x22 + 0x48) = lVar6;
      uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x50) = uVar3;
      lVar6 = 0x112ec58a8;
      func_0x0001000285a8(0x112ec58a8,&UNK_10dae5c40);
      lVar7 = *(long *)(lVar6 + -8);
      uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar2);
      func_0x000107c5f014(uVar2);
      func_0x000107c5f000(uVar3,lVar6);
      (**(code **)(lVar7 + 8))(uVar2,lVar6);
      func_0x000107c615c0(uVar2);
      lVar6 = 0x112ec58b0;
      func_0x0001000285a8(0x112ec58b0,&UNK_10dc12c30);
      uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x58) = uVar3;
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C0A12StateUpdatesV8IteratorV4nextAA0aC0OSgyYaFTu_11034b230
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x60) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10287d8fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb5648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___s11ActivityKit0A0C0A12StateUpdatesV8IteratorV4nextAA0aC0OSgyYaF_11034b228)
                (plVar4,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
      return;
    }
    func_0x000107c61170(lVar6);
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010287d8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287d8fc; end: 10287d943;  */

void FUN_10287d8fc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287d944,0,0);
  return;
}



/* Entry: 10287d944; end: 10287db93;  */

void FUN_10287d944(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = 0;
  func_0x000107c5f040();
  lVar12 = *(long *)(lVar3 + -8);
  uVar10 = uVar9;
  (**(code **)(lVar12 + 0x30))(uVar9,1,lVar3);
  puVar7 = PTR___s11ActivityKit0A5StateO6activeyA2CmFWC_11034b2e0;
  if ((int)uVar10 == 1) {
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c61170(uVar11);
    (**(code **)(lVar3 + 8))(uVar10,uVar1);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010287d9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar12 + 0x20))();
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar12 + 0x10))();
  uVar6 = uVar5;
  (**(code **)(lVar12 + 0x58))(uVar5,lVar3);
  iVar2 = (int)uVar6;
  if ((puVar7 == (undefined *)0x0) || (iVar2 != *(int *)puVar7)) {
    if (((PTR___s11ActivityKit0A5StateO5endedyA2CmFWC_11034b2d0 == (undefined *)0x0) ||
        (iVar2 != *(int *)PTR___s11ActivityKit0A5StateO5endedyA2CmFWC_11034b2d0)) &&
       ((PTR___s11ActivityKit0A5StateO9dismissedyA2CmFWC_11034b2e8 == (undefined *)0x0 ||
        (iVar2 != *(int *)PTR___s11ActivityKit0A5StateO9dismissedyA2CmFWC_11034b2e8)))) {
      if ((PTR___s11ActivityKit0A5StateO5staleyA2CmFWC_11034b2d8 == (undefined *)0x0) ||
         (iVar2 != *(int *)PTR___s11ActivityKit0A5StateO5staleyA2CmFWC_11034b2d8)) {
        (**(code **)(lVar12 + 8))(uVar5,lVar3);
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
        puVar7 = &UNK_11055bbf0;
        func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,uVar10);
        func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5c58,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574();
        func_0x000107c61574(puVar7);
      }
    }
    else {
      FUN_10287e010();
    }
  }
  func_0x000107c615c0(uVar5);
  (**(code **)(lVar12 + 8))(uVar4,lVar3);
  func_0x000107c615c0(uVar4);
  plVar8 = (long *)(ulong)*(uint *)(
                                   PTR___s11ActivityKit0A0C0A12StateUpdatesV8IteratorV4nextAA0aC0OSgyYaFTu_11034b230
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10287d8fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb5648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s11ActivityKit0A0C0A12StateUpdatesV8IteratorV4nextAA0aC0OSgyYaF_11034b228)
            (plVar8,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 10287db94; end: 10287dbab;  */

void FUN_10287db94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dbac,0,0);
  return;
}



/* Entry: 10287dbac; end: 10287dca7;  */

void FUN_10287dbac(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x10287dc30;
    plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dcc0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010287dc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287dca8; end: 10287dcbf;  */

void FUN_10287dca8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dcc0,0,0);
  return;
}



/* Entry: 10287dcc0; end: 10287de7f;  */

void FUN_10287dcc0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = 0x112ec5788;
  func_0x0001000285a8(0x112ec5788,&UNK_10dae59f8);
  func_0x000107c5f008();
  if (uVar1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar4 = uVar1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((uVar1 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10287de80);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar5 = *(undefined8 *)(uVar1 + 0x20);
      func_0x000107c6157c(uVar5);
    }
    else {
      uVar5 = 0;
      FUN_10288116c();
    }
    *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
    func_0x000107c6142c(uVar1);
    lVar2 = 0x112ec5898;
    func_0x0001000285a8(0x112ec5898,&UNK_10dae5c30);
    uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x20) = uVar1;
    func_0x000107c5f01c(uVar1);
    lVar2 = 0x112ec5790;
    func_0x0001000285a8(0x112ec5790,&UNK_10dae5a10);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,0,1,lVar2);
    lVar2 = 0;
    func_0x000107c5f038();
    *(long *)(unaff_x22 + 0x28) = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    *(long *)(unaff_x22 + 0x30) = lVar2;
    uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x38) = uVar4;
    func_0x000107c5f034(uVar4);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                     + 4);
    UNRECOVERED_JUMPTABLE =
         (code *)(
                 PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                 + *(int *)
                    PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                 );
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10287de80;
                    /* WARNING: Could not recover jumptable at 0x00010287de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,uVar4);
    return;
  }
  func_0x000107c6142c();
                    /* WARNING: Could not recover jumptable at 0x00010287de60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287de80; end: 10287df0f;  */

void FUN_10287de80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x38);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  lVar3 = *(long *)(lVar4 + 0x30);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  FUN_102881d74(uVar5,0x112ec5898,&UNK_10dae5c30);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287df10,0,0);
  return;
}



/* Entry: 10287df10; end: 10287df47;  */

void FUN_10287df10(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10287e010();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010287df44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287df48; end: 10287e00f;  */

void FUN_10287df48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11055bbf0;
    func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    uVar2 = 6;
    func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5c68,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10287e010; end: 10287e18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287e010(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  lVar2 = _DAT_112ec5720;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec5720);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_48);
  func_0x000107c61574(uVar4);
  puVar1 = PTR___sytN_11034f1b0;
  if (lStack_48 != 0) {
    func_0x000107c61574();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(&lStack_48);
    func_0x000107c61574(uVar4);
    lVar3 = lStack_48;
    if (lStack_48 != 0) {
      func_0x000107c5f848();
      func_0x000107c61574(lVar3);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar4);
    func_0x000100075034(0x10288206c,0,puVar1 + 8);
    func_0x000107c61574(uVar4);
  }
  lVar2 = _DAT_112ec5718;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec5718);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_48);
  func_0x000107c61574(uVar4);
  if (lStack_48 != *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ec5730);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x000107c6157c(uVar4);
      func_0x0001000c74f0(&lStack_48);
      func_0x000107c61574(uVar4);
      func_0x000107c427f4(lVar3);
      func_0x000107c615e8(lVar3);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar4);
    func_0x000100075034(FUN_10287e190,0,puVar1 + 8);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 10287e190; end: 10287e1bf;  */

void FUN_10287e190(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  return;
}



/* Entry: 10287e1c0; end: 10287e243;  */

void FUN_10287e1c0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x1e8);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x1b0,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x200) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x208) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10287e244;
    plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dcc0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010287e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287e244; end: 10287e2a7;  */

void FUN_10287e244(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x208));
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x210) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_10287e2a8;
  lVar4 = *(long *)(lVar3 + 0x200);
  lVar2 = *(long *)(lVar3 + 0x1f0);
  plVar1[0x12] = *(long *)(lVar3 + 0x1f8);
  plVar1[0x13] = lVar4;
  plVar1[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287eaf0,0,0);
  return;
}



/* Entry: 10287e2a8; end: 10287e2f7;  */

void FUN_10287e2a8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x218) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287e2f8,0,0);
  return;
}



/* Entry: 10287e2f8; end: 10287e507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287e2f8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x218);
  if (uVar6 == 0) {
    lVar7 = *(long *)(unaff_x22 + 0x200);
    goto LAB_10287e4e4;
  }
  uVar2 = uVar6;
  func_0x000107c406dc();
  if (uVar2 < 6 && uVar2 != 3) {
    uVar2 = uVar6;
    func_0x000107c406e8();
    lVar7 = *(long *)(unaff_x22 + 0x200);
    if (uVar2 == 1) {
      func_0x0001000d224c(unaff_x22 + 0x1c8);
      lVar7 = *(long *)(unaff_x22 + 0x200);
      if (*(long *)(unaff_x22 + 0x1c8) == 0) {
        lVar7 = *(long *)(lVar7 + _DAT_112ec5750);
        func_0x000107c5c734();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 600) = lVar7;
        if (lVar7 != 0) {
          *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x1d0;
          *(long *)(unaff_x22 + 0x110) = unaff_x22;
          *(code **)(unaff_x22 + 0x118) = FUN_10287e790;
          func_0x000107c61448(unaff_x22 + 0x110,0);
          FUN_10287f42c();
          lVar7 = unaff_x22 + 0x110;
LAB_10287e4ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(lVar7);
          return;
        }
        goto LAB_10287e4c4;
      }
    }
    else if (uVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar7 + _DAT_112ec5770);
      uVar1 = ((undefined8 *)(lVar7 + _DAT_112ec5770))[1];
      func_0x000107c61434(uVar1);
      uVar5 = uVar1;
      func_0x000107c5fadc(uVar3);
      func_0x000107c6142c(uVar1);
      uVar2 = uVar6;
      func_0x000107c4fa6c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      lVar7 = *(long *)(unaff_x22 + 0x200);
      if (uVar2 != 0) {
        uVar4 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        *(ulong *)(unaff_x22 + 0x220) = uVar4;
        *(undefined8 *)(unaff_x22 + 0x228) = uVar5;
        lVar7 = *(long *)(lVar7 + _DAT_112ec5758);
        func_0x000107c61434(uVar5);
        func_0x000107c5c734();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x230) = lVar7;
        if (lVar7 != 0) {
          *(long *)(unaff_x22 + 0x178) = unaff_x22 + 0x1e0;
          *(long *)(unaff_x22 + 0x150) = unaff_x22;
          *(code **)(unaff_x22 + 0x158) = FUN_10287e508;
          func_0x000107c61448(unaff_x22 + 0x150,0);
          FUN_10287f26c();
          lVar7 = unaff_x22 + 0x150;
          goto LAB_10287e4ac;
        }
        lVar7 = *(long *)(unaff_x22 + 0x200);
        func_0x000107c61430(uVar5,2);
      }
    }
  }
  else {
LAB_10287e4c4:
    lVar7 = *(long *)(unaff_x22 + 0x200);
  }
  func_0x000107c61170(uVar6);
LAB_10287e4e4:
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010287e504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287e508; end: 10287e547;  */

void FUN_10287e508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287e548,0,0);
  return;
}



/* Entry: 10287e548; end: 10287e657;  */

void FUN_10287e548(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
  func_0x000107c615e8(uVar4);
  lVar2 = *(long *)(unaff_x22 + 0x1e0);
  *(long *)(unaff_x22 + 0x238) = lVar2;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x218);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x200));
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar6 = *(ulong *)(unaff_x22 + 0x220);
    lVar5 = lVar2;
    func_0x000107c61174(lVar2);
    FUN_10287cc2c(uVar6,uVar4,lVar2);
    func_0x000107c6142c(uVar4);
    if ((uVar6 & 1) != 0) {
      plVar1 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x240) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_10287e658;
      lVar5 = *(long *)(unaff_x22 + 0x200);
      plVar1[0xc] = lVar2;
      plVar1[0xd] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10287f5fc,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x200);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010287e654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287e658; end: 10287e6af;  */

void FUN_10287e658(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x248) = param_1;
  *(undefined8 *)(lVar1 + 0x250) = param_2;
  *(undefined4 *)(lVar1 + 0x280) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287e6b0,0,0);
  return;
}



/* Entry: 10287e6b0; end: 10287e78f;  */

void FUN_10287e6b0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(unaff_x22 + 0x280);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  lVar2 = 0x112ec5838;
  func_0x0001000285a8(0x112ec5838,&UNK_10dae5bf0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  FUN_102881ab8(uVar5,uVar4,uVar1);
  FUN_10287f8cc(lVar2);
  func_0x000107c61574(lVar2);
  func_0x000102881ac4(uVar5,uVar4,uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010287e78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287e790; end: 10287e7cf;  */

void FUN_10287e790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287e7d0,0,0);
  return;
}



/* Entry: 10287e7d0; end: 10287e947;  */

void FUN_10287e7d0(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 600));
  lVar6 = *(long *)(unaff_x22 + 0x1d0);
  *(long *)(unaff_x22 + 0x260) = lVar6;
  if (lVar6 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x218);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x200));
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010287e8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c615f0(lVar6);
  *(long *)(unaff_x22 + 0x1a0) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar5;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    func_0x0001000285a8(0x112ec5828,&UNK_10dae5bd8);
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615f0(lVar6);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x268) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10287e948;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  func_0x000107c615f0(lVar6);
  uVar5 = 0x112ec5828;
  func_0x0001000285a8(0x112ec5828,&UNK_10dae5bd8);
  func_0x000107c615ac(unaff_x22 + 0x10,uVar5);
  *(long *)(unaff_x22 + 0x1d8) = unaff_x22 + 0x10;
  plVar7 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x270) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10287e990;
  lVar4 = *(long *)(unaff_x22 + 0x200);
  plVar7[0xe] = lVar6;
  plVar7[0xf] = lVar4;
  plVar7[0xd] = unaff_x22 + 0x1d8;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x10] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar3;
  lVar6 = 0x112ec5890;
  func_0x0001000285a8(0x112ec5890,&UNK_10dae5c00);
  plVar7[0x12] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar7[0x13] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x14] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287fe90,0,0);
  return;
}



/* Entry: 10287e948; end: 10287e98f;  */

void FUN_10287e948(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x268));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287ea88,0,0);
  return;
}



/* Entry: 10287e990; end: 10287ea03;  */

void FUN_10287e990(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x270));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x278) = plVar1;
  func_0x0001000285a8(0x112ec5830,&UNK_10dae5be0);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_10287ea04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 10287ea04; end: 10287ea87;  */

void FUN_10287ea04(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10287ea4c,0,0);
  return;
}



/* Entry: 10287ea88; end: 10287ead3;  */

void FUN_10287ea88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x218);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x200));
  func_0x000107c615ec(uVar2,3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010287ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287ead4; end: 10287eaef;  */

void FUN_10287ead4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287eaf0,0,0);
  return;
}



/* Entry: 10287eaf0; end: 10287ec3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287eaf0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x22;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ec5748);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10287ec3c;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,0);
    uVar5 = uVar8;
    func_0x000107c5fadc(uVar8,uVar1);
    puVar6 = &UNK_11055be18;
    func_0x000107c613fc(&UNK_11055be18,0x28,7);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar6 + 0x10) = uVar8;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    puVar7 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar7 = puVar2;
    *(long *)(puVar6 + 0x20) = lVar4;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x102881d68;
    *(undefined **)(unaff_x22 + 0x78) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100e46b24;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11055be30;
    func_0x000107c60bc4(puVar7);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(uVar8);
    func_0x000107c43050(lVar3);
    func_0x000107c60bd0(puVar7);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010287ec38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10287ec3c; end: 10287ecaf;  */

void FUN_10287ec3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10287ec7c,0,0);
  return;
}



/* Entry: 10287ecb0; end: 10287eda3; -[_TtC33ConvoLiveActivityServicesProvider28ConvoLiveActivityManagerImpl handleConversationEnteredWithConversationId:] */

void FUN_10287ecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = &UNK_11055bbf0;
  func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11055bcb0;
  func_0x000107c613fc(&UNK_11055bcb0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar3 = 6;
  func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5bb0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10287eda4; end: 10287f1ff;  */

/* WARNING: Possible PIC construction at 0x00010287f050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287f12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010287f194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287f130) */
/* WARNING: Removing unreachable block (ram,0x00010287f178) */
/* WARNING: Removing unreachable block (ram,0x00010287f140) */
/* WARNING: Removing unreachable block (ram,0x00010287f054) */
/* WARNING: Removing unreachable block (ram,0x00010287f168) */
/* WARNING: Removing unreachable block (ram,0x00010287f060) */
/* WARNING: Removing unreachable block (ram,0x00010287f198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287eda4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long alStack_e0 [4];
  undefined auStack_c0 [8];
  ulong uStack_b8;
  code *pcStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12_01;
  FUN_102881c68(unaff_x20 + _DAT_112ec5768,puVar5,0x112d36580,&UNK_10d9016d0);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_102881d74(puVar5,0x112d36580,&UNK_10d9016d0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    func_0x000107c60e78();
    *(long *)(lVar12 + -0x20) = unaff_x20;
    *(long *)(lVar12 + -0x18) = lVar1;
    *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar12 + -8) = FUN_10287f200;
    func_0x000107c61174();
    FUN_10287eda4();
  }
  else {
    pcVar9 = *(code **)(lVar6 + 0x20);
    lStack_98 = lVar7;
    (*pcVar9)(lVar11,puVar5,lVar1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110df82b8;
    func_0x000107c5faec();
    lVar4 = 0;
    lStack_88 = lVar12;
    ppuStack_78 = ppuVar3;
    puStack_70 = puVar5;
    func_0x000107c5ed68();
    lVar8 = *(long *)(lVar4 + -8);
    lStack_90 = lVar12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uStack_b8 = extraout_x12_02 + 0xfU & 0xfffffffffffffff0;
    lVar12 = lVar12 - uStack_b8;
    pcStack_b0 = *(code **)(lVar8 + 0x68);
    lVar7 = lVar12;
    (*pcStack_b0)(lVar12,*(undefined4 *)
                          PTR___s10Foundation3URLV13DirectoryHintO02isC0yA2EmFWC_110345358,lVar4);
    func_0x000100e8b654();
    lStack_a0 = lVar7;
    func_0x000107c5edd8(lVar10,&ppuStack_78,lVar12,PTR___sSSN_11034da80);
    (**(code **)(lVar8 + 8))(lVar12,lVar4);
    (**(code **)(lVar6 + 8))(lVar11,lVar1);
    lVar6 = lStack_88;
    func_0x000107c6142c(puVar5);
    (*pcVar9)(lVar6,lVar10,lVar1);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5edc0(1);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar10);
    func_0x000107c43418(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10287f200; end: 10287f26b; -[_TtC33ConvoLiveActivityServicesProvider28ConvoLiveActivityManagerImpl handleConversationExit] */

void FUN_10287f200(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10287eda4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10287f26c; end: 10287f3e7;  */

void FUN_10287f26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  func_0x0001000295c4(0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1)
  ;
  lVar3 = lVar6;
  func_0x000107c5fff0(lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  puVar4 = &UNK_11055bd28;
  func_0x000107c613fc(&UNK_11055bd28,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  uStack_70 = 0x102881bdc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101043a98;
  puStack_78 = &UNK_11055bd40;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_68;
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c5b49c(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10287f3e8; end: 10287f42b;  */

void FUN_10287f3e8(long param_1)

{
  long in_x4;
  
  if (param_1 == 0) {
    **(undefined8 **)(*(long *)(in_x4 + 0x40) + 0x28) = 0;
  }
  else {
    **(long **)(*(long *)(in_x4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(in_x4);
  return;
}



/* Entry: 10287f42c; end: 10287f59f;  */

void FUN_10287f42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  puVar3 = &UNK_11055bdc8;
  func_0x000107c613fc(&UNK_11055bdc8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_60 = FUN_102881d5c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101306b38;
  puStack_68 = &UNK_11055bde0;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_58;
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar3);
  func_0x0001000295c4(0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1)
  ;
  lVar5 = lVar6;
  func_0x000107c5fff0(lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  func_0x000107c440a8(param_2);
  func_0x000107c61170(lVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10287f5a0; end: 10287f5e3;  */

void FUN_10287f5a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_1 == 0) {
    **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = 0;
  }
  else {
    **(long **)(*(long *)(param_4 + 0x40) + 0x28) = param_1;
    func_0x000107c615f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_4);
  return;
}



/* Entry: 10287f5e4; end: 10287f5fb;  */

void FUN_10287f5e4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287f5fc,0,0);
  return;
}



/* Entry: 10287f5fc; end: 10287f827;  */

void FUN_10287f5fc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x60);
  if (uVar5 != 0) {
    param_1 = uVar5;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      *(undefined8 *)(unaff_x22 + 0x70) = param_2;
      uVar1 = param_1;
      uVar4 = param_2;
      func_0x000108ffe710();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      uVar3 = uVar1;
      func_0x000107c3fdc8();
      *(int *)(unaff_x22 + 0x88) = (int)uVar3;
      func_0x000107c61170(uVar1);
      uVar1 = uVar5;
      func_0x000107c3e9e8();
      func_0x000107c61180();
      if (uVar1 != 0) {
        uVar2 = uVar1;
        func_0x000107c3e978();
        func_0x000107c61180();
        func_0x000107c61170(uVar1);
        if (uVar2 != 0) {
          func_0x000107c5faec(uVar2);
          uVar6 = uVar4;
          func_0x000107c61170(uVar2);
          *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar3 = uVar5;
            func_0x000107c3ea1c();
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            if (uVar3 != 0) {
              func_0x000107c5faec(uVar3);
              func_0x000107c61170(uVar3);
              goto LAB_10287f7c0;
            }
          }
          uVar6 = 0;
LAB_10287f7c0:
          *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10287f828;
          func_0x000107c61448(unaff_x22 + 0x10,0);
          FUN_102880968();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
      }
      func_0x000107c6142c(param_2);
      goto LAB_10287f78c;
    }
  }
  func_0x00010011df08();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar5 = param_1;
  func_0x000108ffe710(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar5;
  func_0x000107c3fdc8(uVar5);
  func_0x000107c61170(uVar5);
LAB_10287f78c:
                    /* WARNING: Could not recover jumptable at 0x00010287f7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3 & 0xffffffff,0x2000000000000000,0);
  return;
}



/* Entry: 10287f828; end: 10287f867;  */

void FUN_10287f828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287f868,0,0);
  return;
}



/* Entry: 10287f868; end: 10287f8cb;  */

void FUN_10287f868(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  uVar6 = *(ulong *)(unaff_x22 + 0x58) >> 0x3c;
  uVar2 = (ulong)*(uint *)(unaff_x22 + 0x88);
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(unaff_x22 + 0x50);
  }
  uVar3 = 0x2000000000000000;
  if (uVar6 < 0xf) {
    uVar3 = *(ulong *)(unaff_x22 + 0x58);
  }
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(uint *)(unaff_x22 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x00010287f8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3,uVar1);
  return;
}



/* Entry: 10287f8cc; end: 10287fde7;  */

/* WARNING: Removing unreachable block (ram,0x00010287fce4) */
/* WARNING: Removing unreachable block (ram,0x00010287fd64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287f8cc(undefined **param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar17;
  long unaff_x20;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined auStack_d0 [8];
  ulong uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = 0x112d36580;
  puVar16 = &UNK_10d9016d0;
  ppuStack_90 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_d0 + -extraout_x8;
  pcVar2 = (code *)0x0;
  func_0x000107c5ede0();
  lVar19 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar22 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar24 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined1 *)(lVar23 - extraout_x12_01);
  FUN_102881c68(unaff_x20 + _DAT_112ec5768,puVar14,0x112d36580);
  puVar3 = puVar14;
  (**(code **)(lVar19 + 0x30))(puVar14,1,pcVar2);
  if ((int)puVar3 == 1) {
    pcVar15 = (code *)0x112d36580;
    pppuVar6 = (undefined ***)&UNK_10d9016d0;
    FUN_102881d74(puVar14);
    puVar1 = puVar17;
    pcVar18 = pcVar2;
  }
  else {
    pcStack_a8 = *(code **)(lVar19 + 0x20);
    lStack_98 = lVar22;
    (*pcStack_a8)(lVar24,puVar14,pcVar2);
    ppuVar7 = &PTR____CFConstantStringClassReference_110df82b8;
    func_0x000107c5faec();
    lVar4 = 0;
    ppuStack_78 = ppuVar7;
    puStack_70 = puVar14;
    func_0x000107c5ed68();
    lVar20 = *(long *)(lVar4 + -8);
    pcVar18 = *(code **)(lVar20 + 0x40);
    puStack_b0 = puVar17;
    pcStack_88 = pcVar2;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uStack_c8 = (ulong)(pcVar18 + 0xf) & 0xfffffffffffffff0;
    lVar21 = (long)puVar17 - uStack_c8;
    pcStack_c0 = *(code **)(lVar20 + 0x68);
    lVar22 = lVar21;
    (*pcStack_c0)(lVar21,*(undefined4 *)
                          PTR___s10Foundation3URLV13DirectoryHintO02isC0yA2EmFWC_110345358,lVar4);
    func_0x000100e8b654();
    lStack_b8 = lVar22;
    func_0x000107c5edd8(lVar23,&ppuStack_78,lVar21,PTR___sSSN_11034da80);
    pcVar2 = *(code **)(lVar20 + 8);
    (*pcVar2)(lVar21,lVar4);
    pcStack_a0 = *(code **)(lVar19 + 8);
    (*pcStack_a0)(lVar24,pcStack_88);
    func_0x000107c6142c(puVar14);
    pcVar15 = pcStack_88;
    puVar1 = puStack_b0;
    (*pcStack_a8)(puVar17,lVar23,pcStack_88);
    lVar19 = lStack_98;
    pppuVar5 = (undefined ***)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    pppuVar6 = pppuVar5;
    func_0x000107c415e0();
    func_0x000107c61180();
    ppuVar7 = (undefined **)0x1;
    func_0x000107c5edc0();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar23);
    pppuVar8 = pppuVar6;
    func_0x000107c43418();
    func_0x000107c61170(pppuVar6);
    func_0x000107c61170();
    if (((ulong)pppuVar8 & 1) == 0) {
      func_0x000107c415e0();
      func_0x000107c61180();
      pppuVar8 = pppuVar5;
      func_0x000107c5ed90();
      ppuStack_78 = (undefined **)0x0;
      puVar16 = (undefined *)0x1;
      pppuVar9 = pppuVar5;
      pppuVar6 = pppuVar8;
      func_0x000107c409e4();
      func_0x000107c61170(pppuVar5);
      func_0x000107c61170(pppuVar8);
      ppuVar7 = ppuStack_78;
      if ((int)pppuVar9 == 0) {
        ppuVar11 = ppuStack_78;
        func_0x000107c61174(ppuStack_78);
        func_0x000107c5ed30(ppuVar7);
        func_0x000107c61170(ppuVar11);
        func_0x000107c61654();
        (*pcStack_a0)(puVar17);
        func_0x000107c614ac(ppuVar7);
        goto LAB_10287fdac;
      }
      func_0x000107c61174();
    }
    FUN_102886d54();
    ppuStack_78 = (undefined **)*ppuVar7;
    puVar16 = ppuVar7[1];
    puStack_70 = puVar16;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar23 = (long)puVar1 - uStack_c8;
    (*pcStack_c0)(lVar23,*(undefined4 *)
                          PTR___s10Foundation3URLV13DirectoryHintO03notC0yA2EmFWC_110345360,lVar4);
    func_0x000107c61434(puVar16);
    func_0x000107c5edd8(lVar19,&ppuStack_78,lVar23,PTR___sSSN_11034da80);
    (*pcVar2)(lVar23,lVar4);
    func_0x000107c6142c(puVar16);
    uVar10 = 0;
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c5eb50();
    ppuStack_78 = ppuStack_90;
    puVar3 = (undefined *)0x112ec5840;
    func_0x0001000285a8(0x112ec5840,&UNK_10dae5bf8);
    FUN_102881ad0();
    pppuVar5 = &ppuStack_78;
    func_0x000107c5eb4c();
    pcVar18 = pcStack_a0;
    pppuVar6 = pppuVar5;
    puVar16 = puVar3;
    func_0x000107c5ee40(lVar19,0);
    func_0x00010006c090(pppuVar5,puVar3);
    func_0x000107c61574(uVar10);
    pcVar15 = pcStack_88;
    (*pcVar18)(lVar19,pcStack_88);
    (*pcVar18)(puVar17);
  }
LAB_10287fdac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(ulong *)(puVar1 + -0x10) = (ulong)&stack0xfffffffffffffff0 | 0x1000000000000000;
    *(code **)(puVar1 + -8) = FUN_10287fde8;
    *(code **)(puVar1 + -0x18) = pcVar18;
    *(undefined ****)(pcVar18 + 0x70) = pppuVar6;
    *(undefined **)(pcVar18 + 0x78) = puVar16;
    *(code **)(pcVar18 + 0x68) = pcVar15;
    lVar23 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar13 = *(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xf;
    uVar12 = uVar13 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(pcVar18 + 0x80) = uVar12;
    uVar13 = uVar13 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(pcVar18 + 0x88) = uVar13;
    lVar23 = 0x112ec5890;
    func_0x0001000285a8(0x112ec5890,&UNK_10dae5c00);
    *(long *)(pcVar18 + 0x90) = lVar23;
    lVar23 = *(long *)(lVar23 + -8);
    *(long *)(pcVar18 + 0x98) = lVar23;
    uVar13 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(pcVar18 + 0xa0) = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10287fe90,0,0);
    return;
  }
  return;
}



/* Entry: 10287fde8; end: 10287fe8f;  */

void FUN_10287fde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar3 = 0x112ec5890;
  func_0x0001000285a8(0x112ec5890,&UNK_10dae5c00);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287fe90,0,0);
  return;
}



/* Entry: 10287fe90; end: 1028804df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287fe90(void)

{
  ulong *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong in_x3;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  long unaff_x22;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *puStack_a0;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  puVar13 = (undefined8 *)(*(long *)(unaff_x22 + 0x78) + _DAT_112ec5770);
  uVar3 = *puVar13;
  func_0x000107c5fadc(uVar3,puVar13[1]);
  func_0x000108ef2144(uVar4,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028804c0);
    (*pcVar2)();
  }
  uVar3 = 0x112d64d20;
  func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
  uVar12 = uVar4;
  func_0x000107c5fc54(uVar4,uVar3);
  func_0x000107c61170(uVar4);
  if (uVar12 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    uVar11 = uVar4;
    if (2 < uVar4) {
      uVar11 = 3;
    }
    if ((long)uVar4 < (long)uVar11) {
LAB_1028804dc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028804e0);
      (*pcVar2)();
    }
  }
  else {
    uVar4 = uVar12 & 0xffffffffffffff8;
    if ((uVar12 & 0x8000000000000000) != 0) {
      uVar4 = uVar12;
    }
    uVar11 = uVar4;
    func_0x000107c60480();
    uVar5 = uVar4;
    func_0x000107c60480();
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028804b4);
      (*pcVar2)();
    }
    if (2 < uVar11) {
      uVar11 = 3;
    }
    func_0x000107c60480();
    if ((long)uVar4 < (long)uVar11) goto LAB_1028804dc;
  }
  if ((uVar12 & 0xc000000000000001) == 0) {
    func_0x000107c61434(uVar12);
  }
  else {
    func_0x000107c61434(uVar12);
    if (((uVar11 != 0) && (func_0x000107c60318(0,uVar12,uVar3), uVar11 != 1)) &&
       (func_0x000107c60318(1,uVar12,uVar3), uVar11 != 2)) {
      func_0x000107c60318(2,uVar12,uVar3);
    }
  }
  func_0x000107c6142c(uVar12);
  if (uVar12 >> 0x3e == 0) {
    uVar4 = 0;
    uVar5 = uVar12 & 0xffffffffffffff8;
    uVar12 = uVar5 + 0x20;
    in_x3 = uVar11;
  }
  else {
    uVar4 = uVar12 & 0xffffffffffffff8;
    if ((uVar12 & 0x8000000000000000) != 0) {
      uVar4 = uVar12;
    }
    uVar5 = 0;
    func_0x000107c60484();
    func_0x000107c6142c(uVar12);
    in_x3 = in_x3 >> 1;
    uVar12 = uVar11;
  }
  *(ulong *)(unaff_x22 + 0xa8) = uVar5;
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = in_x3 - uVar4;
  if (SBORROW8(in_x3,uVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028804b8);
    (*pcVar2)();
  }
  puVar1 = (ulong *)(uVar12 + uVar4 * 8);
  if (uVar11 == 0) {
  }
  else {
    uVar12 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000102881024(0,uVar12,0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028804bc);
      (*pcVar2)();
    }
    uVar20 = in_x3;
    if ((long)in_x3 <= (long)uVar4) {
      uVar20 = uVar4;
    }
    lVar21 = uVar20 - uVar4;
    puVar18 = puVar1;
    uVar20 = uVar11;
    do {
      if (lVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102880488);
        (*pcVar2)();
      }
      uVar16 = *puVar18;
      uVar15 = uVar16;
      func_0x000107c615f0();
      func_0x000107c3fdb8();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x00010011df08();
        func_0x000107c61180();
        if (uVar15 == 0) {
          func_0x000107c5faec();
          uVar6 = uVar12;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar12);
          uVar12 = uVar6;
        }
        uVar6 = uVar15;
        func_0x000108ffe710();
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        uVar7 = uVar6;
        func_0x000107c3fdc8();
        func_0x000107c615e8(uVar16);
        func_0x000107c61170(uVar6);
      }
      else {
        uVar7 = uVar15;
        func_0x000107c3fdc8();
        func_0x000107c61170(uVar15);
        func_0x000107c615e8(uVar16);
      }
      uVar16 = *(ulong *)(puStack_a0 + 0x10);
      uVar15 = uVar16 + 1;
      if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar16) {
        uVar12 = uVar15;
        func_0x000102881024(1 < *(ulong *)(puStack_a0 + 0x18),uVar15,1);
      }
      *(ulong *)(puStack_a0 + 0x10) = uVar15;
      *(ulong *)(puStack_a0 + uVar16 * 0x18 + 0x20) = uVar7 & 0xffffffff;
      *(undefined8 *)(puStack_a0 + uVar16 * 0x18 + 0x28) = 0x2000000000000000;
      *(undefined4 *)(puStack_a0 + uVar16 * 0x18 + 0x30) = 0;
      lVar21 = lVar21 + -1;
      puVar18 = puVar18 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  func_0x000107c615f0(uVar5);
  if (uVar4 != in_x3) {
    uVar12 = 0;
    if ((long)in_x3 <= (long)uVar4) {
      in_x3 = uVar4;
    }
    do {
      if (in_x3 - uVar4 == uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10288048c);
        (*pcVar2)();
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102880490);
        (*pcVar2)();
      }
      uVar15 = puVar1[uVar12];
      uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar20 = *(ulong *)(unaff_x22 + 0x78);
      lVar21 = 0;
      func_0x000107c5fd0c();
      lVar19 = *(long *)(lVar21 + -8);
      (**(code **)(lVar19 + 0x38))(uVar14,1,1,lVar21);
      puVar9 = &UNK_11055bd78;
      func_0x000107c613fc(&UNK_11055bd78,0x38,7);
      plVar8 = (long *)(puVar9 + 0x10);
      *plVar8 = 0;
      *(undefined8 *)(puVar9 + 0x18) = 0;
      *(ulong *)(puVar9 + 0x20) = uVar15;
      *(ulong *)(puVar9 + 0x28) = uVar20;
      *(ulong *)(puVar9 + 0x30) = uVar12;
      FUN_102881c68(uVar14,uVar3,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar19 + 0x30))(uVar3,1,lVar21);
      func_0x000107c615f4(uVar15,2);
      func_0x000107c61174(uVar20);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
      if ((int)uVar3 == 1) {
        FUN_102881d74(uVar14,0x112d453c8,&UNK_10d90ac60);
        uVar20 = 0x3100;
        lVar21 = *plVar8;
        if (lVar21 == 0) goto LAB_102880404;
LAB_1028803a0:
        lVar22 = *(long *)(puVar9 + 0x18);
        lVar19 = lVar21;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar21);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar21);
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar19 + 8))(uVar14,lVar21);
        uVar20 = uVar20 & 0xff | 0x3100;
        lVar21 = *plVar8;
        if (lVar21 != 0) goto LAB_1028803a0;
LAB_102880404:
        lVar19 = 0;
        lVar22 = 0;
      }
      uVar14 = **(undefined8 **)(unaff_x22 + 0x68);
      puVar10 = &UNK_11055bda0;
      func_0x000107c613fc(&UNK_11055bda0,0x20,7);
      *(undefined **)(puVar10 + 0x10) = &UNK_10dae5c18;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      func_0x000107c6157c(puVar9);
      uVar3 = 0x112ec5828;
      func_0x0001000285a8(0x112ec5828,&UNK_10dae5bd8);
      puVar13 = (undefined8 *)0x0;
      if (lVar22 != 0 || lVar19 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar19;
        *(long *)(unaff_x22 + 0x28) = lVar22;
        puVar13 = (undefined8 *)(unaff_x22 + 0x10);
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
      *(undefined8 *)(unaff_x22 + 0x50) = 1;
      *(undefined8 **)(unaff_x22 + 0x58) = puVar13;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
      func_0x000107c615bc(uVar20,unaff_x22 + 0x50,uVar3,&UNK_10dae5c28,puVar10);
      func_0x000107c61574(puVar9);
      func_0x000107c615e8(uVar15);
      func_0x000107c61574(uVar20);
      FUN_102881d74(uVar17,0x112d453c8,&UNK_10d90ac60);
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar13 = *(undefined8 **)(unaff_x22 + 0x68);
  func_0x000107c615e8(uVar5);
  uVar14 = *puVar13;
  uVar3 = 0x112ec5828;
  func_0x0001000285a8(0x112ec5828,&UNK_10dae5bd8);
  func_0x000107c5fcc4(uVar17,uVar14,uVar3);
  *(undefined **)(unaff_x22 + 0xb0) = puStack_a0;
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1028804e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar8,unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 1028804e0; end: 102880527;  */

void FUN_1028804e0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102880528,0,0);
  return;
}



/* Entry: 102880528; end: 10288067f;  */

void FUN_102880528(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x22;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar13 = *(ulong *)(unaff_x22 + 0x30);
  uVar12 = *(ulong *)(unaff_x22 + 0x40);
  uVar9 = uVar12 & 0x3000000000000000;
  if (uVar9 == 0x1000000000000000) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x90));
    FUN_10287f8cc(uVar2);
    func_0x000107c615e8(uVar14);
    func_0x000107c6142c(uVar2);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102880664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (uVar9 != 0x3000000000000000) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined4 *)(unaff_x22 + 0x48);
    uVar9 = *(ulong *)(unaff_x22 + 0xb0);
    func_0x000107c61558();
    lVar11 = *(long *)(unaff_x22 + 0xb0);
    if ((uVar9 & 1) == 0) {
      func_0x000102880ff8();
    }
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10288067c);
      (*pcVar7)();
    }
    if (*(ulong *)(lVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102880680);
      (*pcVar7)();
    }
    lVar10 = lVar11 + uVar13 * 0x18;
    uVar1 = *(undefined8 *)(lVar10 + 0x20);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    uVar6 = *(undefined4 *)(lVar10 + 0x30);
    *(undefined8 *)(lVar10 + 0x20) = uVar14;
    *(ulong *)(lVar10 + 0x28) = uVar12;
    *(undefined4 *)(lVar10 + 0x30) = uVar5;
    func_0x000102881ac4(uVar1,uVar2,uVar6);
    *(long *)(unaff_x22 + 0xb0) = lVar11;
  }
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1028804e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar8,(ulong *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 102880680; end: 102880713;  */

long FUN_102880680(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c3fdb8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x00010011df08();
    func_0x000107c61180();
    lVar1 = param_1;
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      lVar1 = param_1;
    }
    param_1 = lVar1;
    func_0x000108ffe710(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  lVar1 = param_1;
  func_0x000107c3fdc8(param_1);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102880714; end: 10288072f;  */

void FUN_102880714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102880730,0,0);
  return;
}



/* Entry: 102880730; end: 1028808a3;  */

/* WARNING: Removing unreachable block (ram,0x0001028808a0) */

void FUN_102880730(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x22;
  undefined **ppuVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x68);
    func_0x000107c5faec();
    uVar2 = param_2;
    func_0x000107c61170(lVar1);
    *(undefined8 *)(unaff_x22 + 0x80) = param_2;
    func_0x000107c3e978();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c5faec();
      uVar3 = uVar2;
      func_0x000107c61170(lVar5);
      ppuVar6 = &PTR____CFConstantStringClassReference_110dd70d8;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110dd70d8);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd70d8);
      func_0x000107c61170(ppuVar6);
      *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1028808a4;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_102880968();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(param_2);
  }
  puVar4 = *(undefined8 **)(unaff_x22 + 0x60);
  *puVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar4[2] = 0x3000000000000000;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010288089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028808a4; end: 1028808e3;  */

void FUN_1028808a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028808e4,0,0);
  return;
}



/* Entry: 1028808e4; end: 102880967;  */

void FUN_1028808e4(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar4);
  uVar5 = *(ulong *)(unaff_x22 + 0x58);
  if (uVar5 >> 0x3c < 0xf) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = (undefined4)*(undefined8 *)(unaff_x22 + 0x68);
    FUN_102880680();
  }
  else {
    uVar4 = 0;
    uVar2 = 0;
    uVar5 = 0x3000000000000000;
  }
  puVar3 = *(undefined8 **)(unaff_x22 + 0x60);
  *puVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  *(undefined4 *)(puVar3 + 3) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102880964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102880968; end: 102880cb7;  */

/* WARNING: Possible PIC construction at 0x000102880a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102880c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102880c64) */
/* WARNING: Removing unreachable block (ram,0x000102880c44) */
/* WARNING: Removing unreachable block (ram,0x000102880b00) */
/* WARNING: Removing unreachable block (ram,0x000102880c94) */
/* WARNING: Removing unreachable block (ram,0x000102880b1c) */
/* WARNING: Removing unreachable block (ram,0x000102880ae8) */
/* WARNING: Removing unreachable block (ram,0x000102880ad0) */
/* WARNING: Removing unreachable block (ram,0x000102880ab8) */
/* WARNING: Removing unreachable block (ram,0x000102880a98) */
/* WARNING: Removing unreachable block (ram,0x000102880a5c) */
/* WARNING: Removing unreachable block (ram,0x000102880a68) */
/* WARNING: Removing unreachable block (ram,0x000102880a78) */
/* WARNING: Removing unreachable block (ram,0x000102880a24) */
/* WARNING: Removing unreachable block (ram,0x000102880c74) */

void FUN_102880968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = PTR_PTR_1126afd38;
  func_0x000107c610f8(PTR_PTR_1126afd38);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5e868(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102880cb8; end: 102880d7f;  */

void FUN_102880cb8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar6 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  uVar5 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,lVar6,param_3,param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x0001000b44c0(param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102880d80; end: 102880d87;  */

void FUN_102880d80(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb821c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF_1103510b0)(*unaff_x20);
  return;
}



/* Entry: 102880d88; end: 102880e57;  */

void FUN_102880d88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  char cStack_28;
  
  uStack_30 = 0;
  cStack_28 = '\x01';
  func_0x000107c5fe44(param_1,&uStack_30);
  uVar1 = 0;
  if (cStack_28 != '\x01') {
    uVar1 = uStack_30;
  }
  *param_2 = uVar1;
  *(bool *)(param_2 + 1) = cStack_28 == '\x01';
  return;
}



/* Entry: 102880e58; end: 102880e87;  */

bool FUN_102880e58(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102880e88; end: 102880f1b;  */

void FUN_102880e88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ec5818;
  FUN_102881974(0x112ec5818,FUN_1028818c4,&UNK_10dae5b60);
  uVar2 = 0x112ec5820;
  FUN_102881974(0x112ec5820,FUN_1028818c4,&UNK_10dae5b20);
  func_0x000107c604b8(param_1,param_2,uVar1,uVar2,PTR___sSiSHsWP_11034dec0);
  return;
}



/* Entry: 102880f1c; end: 102880f23;  */

void FUN_102880f1c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb8258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSi9hashValueSivg_11034dea0)(*unaff_x20);
  return;
}



/* Entry: 102880f24; end: 102880f4b;  */

void FUN_102880f24(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 102880f4c; end: 102880f53;  */

void FUN_102880f4c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb9c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ_11034ef28)(param_1,*unaff_x20);
  return;
}



/* Entry: 102880f54; end: 102880fb7;  */

void FUN_102880f54(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102880fb8;
                    /* WARNING: Could not recover jumptable at 0x000102880fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 102880fb8; end: 102881047;  */

void FUN_102880fb8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102880ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102881048; end: 10288116b;  */

undefined *
FUN_102881048(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10288116c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112ec5838;
    func_0x0001000285a8(0x112ec5838,&UNK_10dae5bf0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_11055c6a0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar2;
}



/* Entry: 10288116c; end: 10288131f;  */

ulong FUN_10288116c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102881254);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102881258);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112ec5788;
    func_0x0001000285a8(0x112ec5788,&UNK_10dae59f8);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112ec5788;
    func_0x0001000285a8(0x112ec5788,&UNK_10dae59f8);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f0c3bb0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102881320);
  (*pcVar2)();
}



/* Entry: 102881320; end: 1028815eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102881320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ec5718;
  uStack_68 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  func_0x0001000285a8(0x112ec5708,&UNK_10dae59e0);
  func_0x000107c613fc();
  puVar2 = &uStack_68;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ec5720;
  uStack_68 = 0;
  func_0x0001000285a8(0x112ec5710,&UNK_10dae59e8);
  func_0x000107c613fc();
  puVar2 = &uStack_68;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ec5728;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5730) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5738) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5740) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5748) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5750) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5758) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec5760) = param_9;
  FUN_102881c68(param_10,unaff_x20 + _DAT_112ec5768,0x112d36580,&UNK_10d9016d0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ec5770);
  *puVar2 = param_11;
  puVar2[1] = param_12;
  puVar4 = PTR_PTR_1126ab5f8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ec5778) = puVar4;
  func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
  func_0x0001000bda74(param_7);
  uVar3 = 0;
  FUN_10287bfb8(0);
  pcVar5 = FUN_10287bf8c;
  func_0x0001000cb480(FUN_10287bf8c,0,uVar3);
  func_0x000107c61574(param_7);
  *(code **)(unaff_x20 + _DAT_112ec5780) = pcVar5;
  puVar6 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10287bfcc(param_1);
  func_0x000107c61170(puVar6);
  FUN_102881d74(param_10,0x112d36580,&UNK_10d9016d0);
  return puVar6;
}



/* Entry: 1028815ec; end: 1028815fb;  */

void FUN_1028815ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1028815fc; end: 1028816b3;  */

void FUN_1028815fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  plVar5 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102882090;
  plVar5[0x1d] = lVar6;
  plVar5[0x1e] = unaff_x20 + 0x58;
  plVar5[0x1b] = lVar2;
  plVar5[0x1c] = lVar1;
  plVar5[0x1a] = lVar3;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar5[0x1f] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x20] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x21] = uVar4;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x22] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287d308,0,0);
  return;
}



/* Entry: 1028816b4; end: 102881773;  */

void FUN_1028816b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae5e28;
  func_0x000107c61520(&UNK_10dae5e28,&UNK_11055c248);
  puRam0000000112ec5798 = puVar1;
  return;
}



/* Entry: 102881774; end: 1028817df;  */

void FUN_102881774(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102882080;
  plVar2[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287d6ec,0,0,uVar3);
  return;
}



/* Entry: 1028817e0; end: 1028817e7;  */

void FUN_1028817e0(void)

{
  if (lRam0000000112ec57e0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6f8b0c);
  return;
}



/* Entry: 1028817e8; end: 10288181f;  */

void FUN_1028817e8(undefined8 param_1)

{
  if (lRam0000000112ec57e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6f8b0c);
  return;
}



/* Entry: 102881820; end: 1028818c3;  */

void FUN_102881820(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_90 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = puVar1;
  puStack_78 = puVar1;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puVar1;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar2 + -8) + 0x40;
    puStack_50 = &UNK_10dae5a80;
    puStack_40 = PTR___sBoWV_11034d678 + 0x40;
    puStack_48 = puVar1;
    puStack_38 = puStack_40;
    puStack_30 = puStack_40;
    puStack_28 = puStack_40;
    func_0x000107c61630(param_1,0x100,0xe,&puStack_90,param_1 + 0x50);
  }
  return;
}



/* Entry: 1028818c4; end: 1028818d7;  */

void FUN_1028818c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11055bc88;
  if (lRam0000000112ec57f8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ec57f8 = param_1;
  }
  return;
}



/* Entry: 1028818d8; end: 10288191b;  */

void FUN_1028818d8(long param_1,long *param_2,long param_3)

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



/* Entry: 10288191c; end: 102881973;  */

void FUN_10288191c(void)

{
  FUN_102881974(0x112ec5800,FUN_1028818c4,&UNK_10db901d0);
  return;
}



/* Entry: 102881974; end: 1028819b3;  */

void FUN_102881974(long *param_1,code *param_2,long param_3)

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



/* Entry: 1028819b4; end: 1028819df;  */

void FUN_1028819b4(void)

{
  FUN_102881974(0x112ec5810,FUN_1028818c4,&UNK_10db90210);
  return;
}



/* Entry: 1028819e0; end: 102881a4b;  */

void FUN_1028819e0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102882084;
  plVar3[0x3e] = lVar2;
  plVar3[0x3f] = lVar4;
  plVar3[0x3d] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287e1c0,0,0);
  return;
}



/* Entry: 102881a4c; end: 102881ab7;  */

void FUN_102881a4c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102882088;
  plVar4[0xe] = lVar5;
  plVar4[0xf] = lVar1;
  plVar4[0xd] = param_2;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar3;
  lVar5 = 0x112ec5890;
  func_0x0001000285a8(0x112ec5890,&UNK_10dae5c00);
  plVar4[0x12] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x13] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287fe90,0,0);
  return;
}



/* Entry: 102881ab8; end: 102881acf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102881ab8(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if ((param_2 >> 0x3d & 1) != 0) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 102881ad0; end: 102881b3f;  */

void FUN_102881ad0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ec5848 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec5840;
  func_0x00010002969c(0x112ec5840,&UNK_10dae5bf8);
  uVar2 = uVar1;
  FUN_102881b40();
  puVar3 = PTR___sSayxGSEsSERzlMc_11034dce0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSEsSERzlMc_11034dce0,uVar1,&uStack_28);
  puRam0000000112ec5848 = puVar3;
  return;
}



/* Entry: 102881b40; end: 102881b7f;  */

void FUN_102881b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec5850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae65a0;
  func_0x000107c61520(&UNK_10dae65a0,&UNK_11055c6a0);
  puRam0000000112ec5850 = puVar1;
  return;
}



/* Entry: 102881b80; end: 102881bbf;  */

void FUN_102881b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100de78a0();
  puVar1 = *(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 102881bc0; end: 102881be7;  */

void FUN_102881bc0(long param_1,long param_2)

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



/* Entry: 102881be8; end: 102881c67;  */

void FUN_102881be8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10288208c;
  plVar3[0xe] = lVar2;
  plVar3[0xf] = lVar4;
  plVar3[0xc] = param_1;
  plVar3[0xd] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102880730,0,0);
  return;
}



/* Entry: 102881c68; end: 102881caf;  */

undefined8 FUN_102881c68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102881cb0; end: 102881d1f;  */

void FUN_102881cb0(undefined8 param_1)

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
  plVar5[1] = (long)FUN_102881d20;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102880fb8;
                    /* WARNING: Could not recover jumptable at 0x000102880fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 102881d20; end: 102881d5b;  */

void FUN_102881d20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102881d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102881d5c; end: 102881d73;  */

void FUN_102881d5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = 0;
  }
  else {
    **(long **)(*(long *)(lVar3 + 0x40) + 0x28) = param_1;
    func_0x000107c615f0(param_1,uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 102881d74; end: 102881db3;  */

undefined8 FUN_102881d74(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102881db4; end: 102881e07;  */

void FUN_102881db4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102882094;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dbac,0,0);
  return;
}



/* Entry: 102881e08; end: 102881e13;  */

void FUN_102881e08(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 102881e14; end: 102881e3f;  */

void FUN_102881e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102881e40; end: 102881e4b;  */

void FUN_102881e40(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11055bbf0;
    func_0x000107c613fc(&UNK_11055bbf0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    uVar3 = 6;
    func_0x0001001ca524(6,0,0x28,4,0,0,&UNK_10dae5c68,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102881e4c; end: 102881e83;  */

void FUN_102881e4c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c61574(*param_1);
  *param_1 = unaff_x20;
  func_0x000107c6157c();
  return;
}



/* Entry: 102881e84; end: 102881ed7;  */

void FUN_102881e84(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102881ed8;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10287dbac,0,0);
  return;
}



/* Entry: 102881ed8; end: 102881f13;  */

void FUN_102881ed8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102881f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


