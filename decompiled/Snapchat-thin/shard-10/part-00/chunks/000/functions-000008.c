/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10732fa10; end: 10732fa7b;  */

void FUN_10732fa10(void)

{
  func_0x000107348054();
  func_0x00010725b1d4();
  return;
}



/* Entry: 10732fa7c; end: 10732fabb;  */

void FUN_10732fa7c(int param_1)

{
  func_0x000100a2b988();
  func_0x000107347780();
  func_0x000107347bdc();
  if (param_1 != 0) {
    func_0x000107347dcc();
    FUN_10732fabc();
  }
  func_0x00010734613c();
  return;
}



/* Entry: 10732fabc; end: 10732fc5b;  */

void FUN_10732fabc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long alStack_90 [2];
  undefined8 auStack_80 [6];
  int iStack_50;
  char cStack_48;
  
  lVar4 = *param_1;
  FUN_107329ba8(auStack_80,lVar4 + 0x58);
  if (cStack_48 == '\x01' && iStack_50 != 1) {
    puVar1 = auStack_80;
    FUN_10732fdf0();
    (**(code **)(*(long *)*puVar1 + 0x20))(alStack_90);
    plVar5 = (long *)(alStack_90[0] + 0x10);
    while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
      lVar2 = lVar4 + 0x2e8;
      lVar3 = (long)(plVar5 + 2);
      FUN_10732fc5c();
      if (lVar2 != 0) {
        (**(code **)(*(long *)*puVar1 + 0x18))(auStack_a0,(long *)*puVar1,plVar5 + 2);
        FUN_10732fc90(auStack_b0,param_1 + 1,auStack_a0);
        FUN_10732f208(auStack_d0,lVar4,auStack_b0);
        FUN_10732f24c(auStack_e8,lVar4,plVar5 + 2,auStack_d0);
        (**(code **)(**(long **)(lVar3 + 0x38) + 0x48))
                  (*(long **)(lVar3 + 0x38),auStack_e8,auStack_b0);
        FUN_10732f298(lVar4 + 0x308,plVar5 + 2);
        FUN_10732f7e8();
        func_0x0001073462e8();
        func_0x000107347294();
        func_0x00010726dd08(auStack_b0);
        func_0x000107331000(auStack_a0);
      }
    }
    func_0x000107283194(alStack_90);
  }
  FUN_10732a3d0(auStack_80);
  return;
}



/* Entry: 10732fc5c; end: 10732fc8f;  */

long FUN_10732fc5c(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong uVar2;
  long unaff_x28;
  
  func_0x000100a2b988();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  puVar1 = param_2;
  func_0x000107345dfc();
  func_0x0001073459d0();
  func_0x000107345658();
  func_0x000107346220(*param_2 >> 0xc ^ (ulong)puVar1 >> 7);
  do {
    func_0x000107346214();
    for (uVar2 = extraout_x8 & 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      func_0x000107346cfc();
      FUN_10732ab7c();
      if ((int)param_2 != 0) {
        return *unaff_x19 + unaff_x28;
      }
    }
    func_0x0001073450b0();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 10732fc90; end: 10732fdef;  */

ulong * FUN_10732fc90(undefined8 param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x28;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *aplStack_128 [2];
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [24];
  undefined1 *puStack_c0;
  code *apcStack_b8 [6];
  int iStack_88;
  undefined8 uStack_48;
  
  func_0x000107345878();
  func_0x0001073447e0();
  uStack_48 = extraout_x8;
  FUN_107330040();
  puVar4 = (ulong *)0x0;
  while( true ) {
    puVar2 = (ulong *)*unaff_x20;
    (**(code **)(*puVar2 + 0x10))();
    bVar1 = puVar4 == puVar2;
    if (puVar2 <= puVar4) break;
    (**(code **)(*(long *)*unaff_x20 + 0x18))(aplStack_128,(long *)*unaff_x20,puVar4);
    FUN_10732fea0(auStack_d8);
    param_3 = aplStack_128[0];
    (**(code **)(*aplStack_128[0] + 0x20))();
    func_0x00010732ff78(auStack_118,aplStack_128[0]);
    func_0x0001072d8ab4(apcStack_b8,auStack_d8,param_3,auStack_118);
    func_0x000104c319e0(auStack_118);
    func_0x000104c3365c(auStack_d8);
    if (iStack_88 != 4) {
      FUN_107330018();
    }
    func_0x000107269394(apcStack_b8);
    FUN_107330fdc(aplStack_128);
    puVar4 = (ulong *)((long)puVar4 + 1);
  }
  func_0x0001073447cc(uStack_48);
  if (!bVar1) {
    ___stack_chk_fail();
    func_0x000107269394(apcStack_b8);
    FUN_107330fdc(aplStack_128);
    puVar4 = unaff_x19;
    func_0x00010726dd08();
    func_0x000107345614();
    if ((int)puVar4[6] == 0) {
      return puVar4;
    }
    pcStack_138 = FUN_10732fdf0;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010563ab98();
    pcVar3 = FUN_10732fe08;
    func_0x0001073459d0();
    puStack_c0 = (undefined1 *)&puStack_140;
    apcStack_b8[0] = pcVar3;
    func_0x000107345658();
    func_0x000107346220(*puVar4 >> 0xc ^ (ulong)param_3 >> 7);
    do {
      func_0x000107346214();
      for (uVar5 = extraout_x8_00 & 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
        func_0x000107346cfc();
        FUN_10732ab7c();
        if ((int)puVar4 != 0) {
          return (ulong *)(*unaff_x19 + unaff_x28);
        }
      }
      func_0x0001073450b0();
    } while ((extraout_x8_01 & 1) == 0);
    return (ulong *)0x0;
  }
  return puVar2;
}



/* Entry: 10732fdf0; end: 10732fe07;  */

ulong * FUN_10732fdf0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong uVar3;
  long unaff_x28;
  
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  if ((int)param_1[6] == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x0001073459d0();
  func_0x000107345658();
  func_0x000107346220(*param_1 >> 0xc ^ CONCAT44(uVar2,uVar1) >> 7);
  do {
    func_0x000107346214();
    for (uVar3 = extraout_x8 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      func_0x000107346cfc();
      FUN_10732ab7c();
      if ((int)param_1 != 0) {
        return (ulong *)(*unaff_x19 + unaff_x28);
      }
    }
    func_0x0001073450b0();
  } while ((extraout_x8_00 & 1) == 0);
  return (ulong *)0x0;
}



/* Entry: 10732fe08; end: 10732fe9f;  */

long FUN_10732fe08(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong uVar3;
  long unaff_x28;
  
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  func_0x0001073459d0();
  func_0x000107345658();
  func_0x000107346220(*param_1 >> 0xc ^ CONCAT44(uVar2,uVar1) >> 7);
  do {
    func_0x000107346214();
    for (uVar3 = extraout_x8 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      func_0x000107346cfc();
      FUN_10732ab7c();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
    }
    func_0x0001073450b0();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 10732fea0; end: 107330017;  */

void FUN_10732fea0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *extraout_x8;
  undefined8 *unaff_x21;
  undefined1 auVar3 [16];
  undefined1 auStack_40 [16];
  
  func_0x000107346ea8();
  (**(code **)(*(long *)*param_2 + 0x38))(auStack_40);
  plVar2 = (long *)auStack_40;
  FUN_107330078();
  plVar1 = (long *)*plVar2;
  if ((plVar1 == (long *)plVar2[1]) || (plVar1[1] - *plVar1 != 4)) {
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    *(undefined4 *)extraout_x8 = 7;
  }
  else {
    (**(code **)(*(long *)*unaff_x21 + 0x48))();
    func_0x00010786ea0c(auStack_40);
    *(undefined4 *)extraout_x8 = 6;
    auVar3 = NEON_ext(auStack_40,auStack_40,8,1);
    extraout_x8[2] = auVar3._8_8_;
    extraout_x8[1] = auVar3._0_8_;
  }
  return;
}



/* Entry: 107330018; end: 10733003f;  */

long FUN_107330018(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  func_0x000100a2b988();
  func_0x000107330ea4();
  lVar3 = *unaff_x20;
  uVar1 = *(ulong *)(lVar3 + 8);
  if (uVar1 < *(ulong *)(lVar3 + 0x10)) {
    func_0x00010726d754();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = lVar3;
    func_0x00010726d778();
  }
  *(long *)(lVar3 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 107330040; end: 107330057;  */

void FUN_107330040(void)

{
  FUN_107330058();
  return;
}



/* Entry: 107330058; end: 107330077;  */

void FUN_107330058(void)

{
  func_0x000107347740();
  func_0x000107272ba0();
  return;
}



/* Entry: 107330078; end: 1073300bf;  */

undefined * FUN_107330078(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 0) {
    func_0x0001073300a4();
    return (undefined *)*param_1;
  }
  return &UNK_10de4bec0;
}



/* Entry: 1073300c0; end: 1073300c7;  */

long FUN_1073300c0(ulong *param_1)

{
  ulong *puVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong uVar2;
  long unaff_x28;
  
  param_1 = (ulong *)*param_1;
  func_0x000100a2b988();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x0001072cb490(*param_1);
  puVar1 = param_1;
  func_0x000107345dfc();
  func_0x0001073459d0();
  func_0x000107345658();
  func_0x000107346220(*param_1 >> 0xc ^ (ulong)puVar1 >> 7);
  do {
    func_0x000107346214();
    for (uVar2 = extraout_x8 & 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      func_0x000107346cfc();
      FUN_107330190();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
    }
    func_0x0001073450b0();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 1073300c8; end: 1073300f7;  */

long FUN_1073300c8(ulong *param_1)

{
  ulong *puVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong uVar2;
  long unaff_x28;
  
  func_0x000100a2b988();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x0001072cb490(*param_1);
  puVar1 = param_1;
  func_0x000107345dfc();
  func_0x0001073459d0();
  func_0x000107345658();
  func_0x000107346220(*param_1 >> 0xc ^ (ulong)puVar1 >> 7);
  do {
    func_0x000107346214();
    for (uVar2 = extraout_x8 & 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      func_0x000107346cfc();
      FUN_107330190();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
    }
    func_0x0001073450b0();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 1073300f8; end: 10733018f;  */

long FUN_1073300f8(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong uVar3;
  long unaff_x28;
  
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  func_0x0001073459d0();
  func_0x000107345658();
  func_0x000107346220(*param_1 >> 0xc ^ CONCAT44(uVar2,uVar1) >> 7);
  do {
    func_0x000107346214();
    for (uVar3 = extraout_x8 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      func_0x000107346cfc();
      FUN_107330190();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
    }
    func_0x0001073450b0();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 107330190; end: 1073301ef;  */

bool FUN_107330190(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1073301f0; end: 10733022f;  */

int * FUN_1073301f0(undefined8 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int *piVar3;
  int *extraout_x8;
  int *extraout_x8_00;
  int *extraout_x8_01;
  int *piVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_100 [96];
  undefined8 ******ppppppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [96];
  
  puVar1 = auStack_80;
  pppppppuVar5 = (undefined8 *******)&stack0xfffffffffffffff0;
  piVar3 = param_2;
  func_0x0001073447e0();
  func_0x000107347b28();
  func_0x000107345d3c();
  func_0x000107345468();
  func_0x000107346900();
  func_0x000107345728();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return param_2;
  }
  pcVar6 = FUN_107330230;
  ___stack_chk_fail();
  uVar2 = *param_2 == 4;
  piVar4 = extraout_x8;
  if ((bool)uVar2) {
    param_2 = *(int **)(param_2 + 2);
    puVar1 = auStack_100;
    pcStack_88 = FUN_107330230;
    piVar3 = param_2;
    ppppppuStack_90 = pppppppuVar5;
    func_0x0001073447e0();
    func_0x000107347b34();
    func_0x000107345d3c();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345728();
    func_0x00010734471c();
    if ((bool)uVar2) {
      return param_2;
    }
    pcVar6 = FUN_10733030c;
    ___stack_chk_fail();
    piVar4 = extraout_x8_00;
    pppppppuVar5 = &ppppppuStack_90;
  }
  uVar2 = *param_2 == 3;
  if ((bool)uVar2) {
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar5;
    *(code **)(puVar1 + -8) = pcVar6;
    pppppppuVar5 = (undefined8 *******)(puVar1 + -0x10);
    func_0x0001073447e0(uVar7);
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    if ((bool)uVar2) {
      return piVar3;
    }
    pcVar6 = FUN_1073303f8;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x80;
    param_2 = piVar3;
    piVar4 = extraout_x8_01;
  }
  if (*param_2 == 2) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar5;
    *(code **)(puVar1 + -8) = pcVar6;
    *piVar4 = 0;
    func_0x000104c2fe00(piVar4 + 2,param_2 + 2);
    return piVar4;
  }
  *piVar4 = 4;
  return param_2;
}



/* Entry: 107330230; end: 10733024f;  */

int * FUN_107330230(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *extraout_x8;
  int *extraout_x8_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar2;
  undefined1 auStack_80 [96];
  
  uVar1 = *param_2 == 4;
  if ((bool)uVar1) {
    param_2 = *(int **)(param_2 + 2);
    unaff_x29 = &stack0xfffffffffffffff0;
    param_3 = param_2;
    func_0x0001073447e0();
    func_0x000107347b34();
    func_0x000107345d3c();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345728();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_2;
    }
    unaff_x30 = FUN_10733030c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    param_1 = extraout_x8;
  }
  uVar1 = *param_2 == 3;
  if ((bool)uVar1) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001073447e0(uVar2);
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_3;
    }
    unaff_x30 = FUN_1073303f8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_2 = param_3;
    param_1 = extraout_x8_00;
  }
  if (*param_2 == 2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *param_1 = 0;
    func_0x000104c2fe00(param_1 + 2,param_2 + 2);
    return param_1;
  }
  *param_1 = 4;
  return param_2;
}



/* Entry: 107330250; end: 10733030b;  */

/* WARNING: Possible PIC construction at 0x000107330270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330274) */
/* WARNING: Removing unreachable block (ram,0x000107330298) */
/* WARNING: Removing unreachable block (ram,0x000107330290) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

undefined8 FUN_107330250(undefined8 param_1)

{
  undefined1 auStack_3d [29];
  
  func_0x0001073447e0(param_1,param_1);
  func_0x000100a2b988(auStack_3d);
  func_0x0001003b0470(param_1);
  func_0x000107345dfc();
  func_0x0001003b04f4();
  return param_1;
}



/* Entry: 10733030c; end: 107330327;  */

int * FUN_10733030c(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_80 [96];
  
  uVar1 = *param_2 == 3;
  if ((bool)uVar1) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001073447e0(*(undefined8 *)(param_2 + 2));
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_3;
    }
    unaff_x30 = FUN_1073303f8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    param_2 = param_3;
    param_1 = extraout_x8;
  }
  if (*param_2 != 2) {
    *param_1 = 4;
    return param_2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *param_1 = 0;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107330328; end: 107330373;  */

undefined1 * FUN_107330328(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_3c [20];
  undefined8 uStack_28;
  
  func_0x0001073447e0(param_1,param_1);
  uStack_28 = extraout_x8;
  FUN_107330374(auStack_3c);
  puVar2 = auStack_3c;
  puVar1 = unaff_x19;
  func_0x00010015492c();
  func_0x0001073447cc(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107345c14();
  puVar1 = (undefined1 *)-(long)puVar2;
  if (-1 < (long)puVar2) {
    puVar1 = puVar2;
  }
  func_0x0001003b0470(puVar1);
  if (unaff_x21 < 0) {
    *unaff_x19 = 0x2d;
  }
  func_0x000107345ba8();
  func_0x0001003b04f4();
  return puVar2;
}



/* Entry: 107330374; end: 1073303bb;  */

long FUN_107330374(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *unaff_x19;
  long unaff_x21;
  
  func_0x000107345c14();
  lVar1 = -param_2;
  if (-1 < param_2) {
    lVar1 = param_2;
  }
  func_0x0001003b0470(lVar1);
  if (unaff_x21 < 0) {
    *unaff_x19 = 0x2d;
  }
  func_0x000107345ba8();
  func_0x0001003b04f4();
  return param_2;
}



/* Entry: 1073303bc; end: 1073303f7;  */

int * FUN_1073303bc(int *param_1)

{
  undefined1 in_ZR;
  int *extraout_x8;
  
  func_0x0001073447e0();
  func_0x000107346c3c();
  func_0x000107347b54();
  func_0x000107345468();
  func_0x000107346900();
  func_0x000107345944();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*param_1 == 2) {
    *extraout_x8 = 0;
    func_0x000104c2fe00(extraout_x8 + 2,param_1 + 2);
    return extraout_x8;
  }
  *extraout_x8 = 4;
  return param_1;
}



/* Entry: 1073303f8; end: 107330413;  */

int * FUN_1073303f8(int *param_1,int *param_2)

{
  if (*param_2 == 2) {
    *param_1 = 0;
    func_0x000104c2fe00(param_1 + 2,param_2 + 2);
    return param_1;
  }
  *param_1 = 4;
  return param_2;
}



/* Entry: 107330414; end: 10733044b;  */

void FUN_107330414(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10733044c(*param_2,param_1);
  return;
}



/* Entry: 10733044c; end: 1073304d3;  */

void FUN_10733044c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  dVar1 = param_1;
  if ((long)param_1 < 0) {
    uStack_28 = 0x10000000000;
    dVar1 = -param_1;
  }
  if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    FUN_1073304d4(param_2,ABS(dVar1) == INFINITY,&UNK_10de4bed8,&uStack_28);
  }
  else {
    func_0x00010bd48ae4();
    func_0x000107346270();
    FUN_107330548();
  }
  return;
}



/* Entry: 1073304d4; end: 107330547;  */

void FUN_1073304d4(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  uint auStack_20 [2];
  char *pcStack_18;
  
  bVar3 = (*(uint *)(param_4 + 4) & 0x10000) != 0;
  pcStack_18 = "inf";
  if (bVar3) {
    pcStack_18 = "INF";
  }
  pcVar2 = "nan";
  if (bVar3) {
    pcVar2 = "NAN";
  }
  if (param_2 == 0) {
    pcStack_18 = pcVar2;
  }
  auStack_20[0] = *(uint *)(param_4 + 4) >> 8 & 0xff;
  uVar1 = 3;
  if (auStack_20[0] != 0) {
    uVar1 = 4;
  }
  FUN_1073307e8(param_1,param_3,uVar1,auStack_20);
  return;
}



/* Entry: 107330548; end: 1073307e7;  */

undefined8
FUN_107330548(undefined8 param_1,undefined8 *param_2,int *param_3,ulong param_4,char param_5)

{
  int iVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  int iStack_94;
  ulong uStack_90;
  int iStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  char cStack_69;
  ulong uStack_68;
  
  uVar15 = *param_2;
  puVar10 = param_2;
  uStack_78 = uVar15;
  cStack_69 = param_5;
  uStack_68 = param_4;
  FUN_10733092c();
  uVar6 = (uint)(param_4 >> 0x20);
  uStack_80 = uVar6 >> 8 & 0xff;
  uVar8 = (uint)puVar10;
  uVar13 = uVar8;
  if ((param_4 >> 0x28 & 0xff) != 0) {
    uVar13 = uVar8 + 1;
  }
  uVar14 = (ulong)uVar13;
  iVar1 = *(int *)(param_2 + 1) + uVar8;
  iVar5 = iVar1 + -1;
  iVar9 = (int)&uStack_90;
  uStack_90 = param_4;
  iStack_88 = iVar5;
  uStack_7c = uVar8;
  func_0x000107330934();
  uVar13 = (uint)param_4;
  if (iVar9 != 0) {
    cVar3 = '\0';
    if (uVar8 != 1) {
      cVar3 = param_5;
    }
    uVar13 = uVar13 - uVar8 & ((int)(uVar13 - uVar8) >> 0x1f ^ 0xffffffffU);
    bVar7 = (param_4 >> 0x20 & 0x100000) != 0;
    if (bVar7) {
      cVar3 = param_5;
    }
    uVar4 = 0;
    if (bVar7) {
      uVar14 = uVar13 + uVar14;
      uVar4 = uVar13;
    }
    iVar9 = 1 - iVar1;
    if (1 - iVar1 == 0 || 1 < iVar1) {
      iVar9 = iVar5;
    }
    lVar11 = 3;
    if (999 < iVar9) {
      lVar11 = 4;
    }
    if (iVar9 < 100) {
      lVar11 = 2;
    }
    lVar2 = 2;
    if (cVar3 != '\0') {
      lVar2 = 3;
    }
    uVar12 = 0x65;
    if ((param_4 >> 0x20 & 0x10000) != 0) {
      uVar12 = 0x45;
    }
    uStack_d0 = (uint *)(CONCAT44(uStack_d0._4_4_,uVar6 >> 8) & 0xffffffff000000ff);
    uStack_c0._0_5_ = CONCAT14(cVar3,uVar8);
    uStack_b8._0_5_ = CONCAT14(uVar12,uVar4);
    puStack_b0 = (ulong *)CONCAT44(puStack_b0._4_4_,iVar5);
    puStack_c8 = (uint *)uVar15;
    if (0 < *param_3) {
      func_0x000107330978(param_1,param_3,uVar14 + lVar2 + lVar11,&uStack_d0);
      return param_1;
    }
    uVar15 = param_1;
    FUN_107330880(param_1,uVar14 + lVar2 + lVar11);
    FUN_107330984(&uStack_d0,uVar15);
    return param_1;
  }
  uVar4 = *(uint *)(param_2 + 1);
  iStack_94 = uVar4 + uVar8;
  if ((int)uVar4 < 0) {
    if (0 < iStack_94) {
      uStack_98 = uVar13 - uVar8 & (int)(uVar6 << 0xb) >> 0x1f;
      uStack_d0 = &uStack_80;
      puStack_c8 = (uint *)&uStack_78;
      uStack_c0 = &uStack_7c;
      uStack_b8 = (ulong *)&iStack_94;
      puStack_b0 = (ulong *)&cStack_69;
      puStack_a8 = &uStack_98;
      func_0x000107330a00(param_1,param_3,
                          ((uStack_98 & ((int)uStack_98 >> 0x1f ^ 0xffffffffU)) + 1) + uVar14,
                          &uStack_d0);
      return param_1;
    }
    uStack_98 = uVar13;
    if ((int)(uVar13 + iStack_94) < 0 == SCARRY4(uVar13,iStack_94)) {
      uStack_98 = -iStack_94;
    }
    if (0x7fffffff < uVar13 || uVar8 != 0) {
      uStack_98 = -iStack_94;
    }
    uStack_d0 = &uStack_80;
    puStack_c8 = &uStack_98;
    uStack_c0 = &uStack_7c;
    uStack_b8 = &uStack_68;
    puStack_b0 = (ulong *)&cStack_69;
    puStack_a8 = (uint *)&uStack_78;
    func_0x000107330a0c(param_1,param_3,(uStack_98 + 2) + uVar14,&uStack_d0);
    return param_1;
  }
  lVar11 = uVar4 + uVar14;
  uStack_98 = uVar13 - iStack_94;
  if ((uVar6 >> 0x14 & 1) != 0) {
    if ((uVar6 & 0xff) == 2 || 0 < (int)uStack_98) {
      if ((int)uStack_98 < 1) goto LAB_107330740;
    }
    else {
      uStack_98 = 1;
    }
    lVar11 = lVar11 + (ulong)uStack_98;
  }
LAB_107330740:
  uStack_d0 = &uStack_80;
  puStack_c8 = (uint *)&uStack_78;
  uStack_c0 = &uStack_7c;
  puStack_b0 = &uStack_68;
  puStack_a8 = (uint *)&cStack_69;
  puStack_a0 = &uStack_98;
  uStack_b8 = param_2;
  FUN_1073309f4(param_1,param_3,lVar11,&uStack_d0);
  return param_1;
}



/* Entry: 1073307e8; end: 1073307f3;  */

void FUN_1073307e8(undefined2 *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  func_0x000107345658();
  FUN_107330880();
  func_0x0001073457dc();
  puVar2 = param_1;
  if (*param_4 != 0) {
    puVar2 = (undefined2 *)((long)param_1 + 1);
    *(undefined *)param_1 = (&UNK_10e60dacd)[*param_4];
  }
  uVar1 = **(undefined2 **)(param_4 + 2);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(*(undefined2 **)(param_4 + 2) + 1);
  *puVar2 = uVar1;
  func_0x0001073457d0((undefined1 *)((long)puVar2 + 3));
  return;
}



/* Entry: 1073307f4; end: 10733087f;  */

void FUN_1073307f4(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint *in_x4;
  
  func_0x000107345658();
  FUN_107330880();
  func_0x0001073457dc();
  puVar2 = param_1;
  if (*in_x4 != 0) {
    puVar2 = (undefined2 *)((long)param_1 + 1);
    *(undefined *)param_1 = (&UNK_10e60dacd)[*in_x4];
  }
  uVar1 = **(undefined2 **)(in_x4 + 2);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(*(undefined2 **)(in_x4 + 2) + 1);
  *puVar2 = uVar1;
  func_0x0001073457d0((undefined1 *)((long)puVar2 + 3));
  return;
}



/* Entry: 107330880; end: 1073308c3;  */

long FUN_107330880(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
  }
  func_0x0001001548a8(param_1,lVar2 + param_2);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  return (long)plVar1 + lVar2;
}



/* Entry: 1073308c4; end: 10733092b;  */

undefined1 * FUN_1073308c4(undefined1 *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0001073450dc();
  bVar1 = *(byte *)(param_3 + 4);
  if (bVar1 != 1) {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      if (bVar1 != 0) {
        _memmove(unaff_x21);
      }
      unaff_x21 = unaff_x21 + bVar1;
    }
    return unaff_x21;
  }
  func_0x0001073461d0();
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = *unaff_x19;
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* Entry: 10733092c; end: 107330983;  */

int FUN_10733092c(ulong *param_1)

{
  return (uint)*(ushort *)(&UNK_10de4aa4a + (LZCOUNT(*param_1 | 1) ^ 0x3fU) * 2) -
         (uint)(*param_1 <
               *(ulong *)(&UNK_10e60ceb0 +
                         (ulong)*(ushort *)(&UNK_10de4aa4a + (LZCOUNT(*param_1 | 1) ^ 0x3fU) * 2) *
                         8));
}



/* Entry: 107330984; end: 1073309f3;  */

undefined2 * FUN_107330984(int *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 uVar7;
  long unaff_x19;
  
  func_0x000107345760();
  puVar3 = extraout_x8;
  if (*param_1 != 0) {
    func_0x0001073465f8();
    puVar3 = extraout_x8_00;
  }
  FUN_107330a4c(puVar3,*(undefined8 *)(unaff_x19 + 8),*(undefined4 *)(unaff_x19 + 0x10),1,
                (long)*(char *)(unaff_x19 + 0x14));
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    func_0x0001073475cc();
    puVar3 = extraout_x8_01;
    func_0x000107330b24();
  }
  *puVar3 = *(undefined1 *)(unaff_x19 + 0x1c);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar7 = 0x2d;
  if (-1 < (int)uVar2) {
    uVar7 = 0x2b;
  }
  uVar6 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar6 = uVar2;
  }
  puVar4 = (undefined2 *)(puVar3 + 2);
  puVar3[1] = uVar7;
  if (99 < uVar6) {
    lVar1 = (ulong)(uVar6 / 100) * 2;
    puVar5 = puVar4;
    if (999 < uVar6) {
      puVar5 = (undefined2 *)(puVar3 + 3);
      puVar3[2] = (&UNK_10e60d9f4)[lVar1];
    }
    puVar4 = (undefined2 *)((long)puVar5 + 1);
    *(undefined *)puVar5 = (&UNK_10e60d9f5)[lVar1];
    uVar6 = uVar6 % 100;
  }
  *puVar4 = *(undefined2 *)(&UNK_10e60d9f4 + (ulong)uVar6 * 2);
  return puVar4 + 1;
}



/* Entry: 1073309f4; end: 107330a17;  */

void FUN_1073309f4(void)

{
  func_0x0001073449d8();
  func_0x0001073457dc();
  func_0x000107346d48();
  FUN_107330b70();
  func_0x0001073457d0();
  return;
}



/* Entry: 107330a18; end: 107330a4b;  */

void FUN_107330a18(void)

{
  func_0x0001073449d8();
  func_0x0001073457dc();
  func_0x000107346d48();
  FUN_107330984();
  func_0x0001073457d0();
  return;
}



/* Entry: 107330a4c; end: 107330abf;  */

undefined8
FUN_107330a4c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  if (param_5 == 0) {
    func_0x0001003b04f4(param_1);
  }
  else {
    func_0x0001003b04f4(param_1 + 1);
    if (param_4 != 0) {
      if (param_4 == 1) {
        *param_1 = param_1[1];
      }
      else {
        _memmove(param_1,param_1 + 1,(long)param_4);
      }
    }
    param_1[param_4] = (char)param_5;
  }
  return param_2;
}



/* Entry: 107330ac0; end: 107330b3b;  */

undefined2 * FUN_107330ac0(uint param_1,undefined1 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar5 = 0x2d;
  if (-1 < (int)param_1) {
    uVar5 = 0x2b;
  }
  uVar4 = -param_1;
  if (-1 < (int)param_1) {
    uVar4 = param_1;
  }
  puVar2 = (undefined2 *)(param_2 + 1);
  *param_2 = uVar5;
  if (99 < uVar4) {
    lVar1 = (ulong)(uVar4 / 100) * 2;
    puVar3 = puVar2;
    if (999 < uVar4) {
      puVar3 = (undefined2 *)(param_2 + 2);
      param_2[1] = (&UNK_10e60d9f4)[lVar1];
    }
    puVar2 = (undefined2 *)((long)puVar3 + 1);
    *(undefined *)puVar3 = (&UNK_10e60d9f5)[lVar1];
    uVar4 = uVar4 % 100;
  }
  *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + (ulong)uVar4 * 2);
  return puVar2 + 1;
}



/* Entry: 107330b3c; end: 107330b6f;  */

void FUN_107330b3c(void)

{
  func_0x0001073449d8();
  func_0x0001073457dc();
  func_0x000107346d48();
  FUN_107330b70();
  func_0x0001073457d0();
  return;
}



/* Entry: 107330b70; end: 107330bf7;  */

/* WARNING: Possible PIC construction at 0x000107330bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330bb8) */
/* WARNING: Removing unreachable block (ram,0x000107330bc4) */
/* WARNING: Removing unreachable block (ram,0x000107330bf0) */
/* WARNING: Removing unreachable block (ram,0x0001073455fc) */
/* WARNING: Removing unreachable block (ram,0x000107330be0) */

void FUN_107330b70(undefined8 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar5;
  long unaff_x19;
  
  func_0x000107345760();
  uVar5 = extraout_x8;
  if (*(int *)*param_1 != 0) {
    func_0x0001073465f8();
    uVar5 = extraout_x8_00;
  }
  puVar2 = (undefined1 *)**(undefined8 **)(unaff_x19 + 8);
  puVar4 = (undefined1 *)(ulong)**(uint **)(unaff_x19 + 0x10);
  func_0x0001003b04f4(uVar5);
  uVar3 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x18) + 8);
  func_0x0001073475cc();
  while (iVar1 = (int)uVar3, uVar3 = (ulong)(iVar1 - 1), 0 < iVar1) {
    *puVar2 = *puVar4;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* Entry: 107330bf8; end: 107330c2b;  */

void FUN_107330bf8(void)

{
  func_0x0001073449d8();
  func_0x0001073457dc();
  func_0x000107346d48();
  FUN_107330c2c();
  func_0x0001073457d0();
  return;
}



/* Entry: 107330c2c; end: 107330c93;  */

void FUN_107330c2c(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long unaff_x19;
  
  func_0x000107345760();
  puVar1 = extraout_x8;
  if (*(int *)*param_1 != 0) {
    func_0x0001073465f8();
    puVar1 = extraout_x8_00;
  }
  puVar4 = (undefined1 *)(ulong)**(uint **)(unaff_x19 + 0x10);
  FUN_107330a4c(puVar1,**(undefined8 **)(unaff_x19 + 8),puVar4,**(undefined4 **)(unaff_x19 + 0x18),
                (long)**(char **)(unaff_x19 + 0x20));
  uVar3 = (ulong)**(uint **)(unaff_x19 + 0x28);
  if (0 < (int)**(uint **)(unaff_x19 + 0x28)) {
    func_0x0001073475cc();
    while (iVar2 = (int)uVar3, uVar3 = (ulong)(iVar2 - 1), 0 < iVar2) {
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
    }
    return;
  }
  return;
}



/* Entry: 107330c94; end: 107330cc7;  */

void FUN_107330c94(void)

{
  func_0x0001073449d8();
  func_0x0001073457dc();
  func_0x000107346d48();
  FUN_107330cc8();
  func_0x0001073457d0();
  return;
}



/* Entry: 107330cc8; end: 107330d67;  */

undefined1 * FUN_107330cc8(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  
  puVar2 = param_2;
  if (*(uint *)*param_1 != 0) {
    puVar2 = param_2 + 1;
    *param_2 = (&UNK_10e60dacd)[*(uint *)*param_1];
  }
  puVar1 = puVar2 + 1;
  *puVar2 = 0x30;
  if (((*(int *)param_1[1] != 0) || (*(int *)param_1[2] != 0)) ||
     ((*(byte *)(param_1[3] + 6) >> 4 & 1) != 0)) {
    puVar2[1] = *(undefined1 *)param_1[4];
    func_0x0001073475cc(*(undefined4 *)param_1[1],puVar1);
    func_0x000107330b24(puVar2 + 2,extraout_x8);
    puVar1 = *(undefined1 **)param_1[5];
    func_0x0001003b04f4();
  }
  return puVar1;
}



/* Entry: 107330d68; end: 107330d9f;  */

int * FUN_107330d68(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *extraout_x8;
  int *extraout_x8_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar4;
  undefined1 auStack_80 [96];
  
  if (*param_2 == 4) {
    *param_1 = 4;
    return param_2;
  }
  uVar1 = *param_2 == 3;
  if ((bool)uVar1) {
    param_2 = *(int **)(param_2 + 2);
    unaff_x29 = &stack0xfffffffffffffff0;
    param_3 = param_2;
    func_0x0001073447e0();
    func_0x000107347b28();
    func_0x000107345d3c();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345728();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_2;
    }
    unaff_x30 = FUN_107330de0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    param_1 = extraout_x8;
  }
  uVar1 = *param_2 == 2;
  if ((bool)uVar1) {
    param_2 = *(int **)(param_2 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = param_2;
    func_0x0001073447e0();
    func_0x000107347b34();
    func_0x000107345d3c();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345728();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_2;
    }
    unaff_x30 = FUN_107330e40;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = extraout_x8_00;
  }
  uVar1 = *param_2 == 1;
  if ((bool)uVar1) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0001073447e0(uVar4);
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_3;
    }
    ___stack_chk_fail();
    piVar3 = (int *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x107330ea4;
    piVar2 = param_3;
    func_0x00010726dd50();
    if (1 < (long)piVar2) {
      FUN_107330f0c((undefined1 *)((long)register0x00000008 + -0xb0),*(undefined8 *)param_3);
      func_0x000107346020();
      func_0x000107330ee8();
      func_0x00010726dd8c((undefined1 *)((long)register0x00000008 + -0xb0));
      piVar2 = piVar3;
    }
    return piVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *param_1 = 0;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107330da0; end: 107330ddf;  */

int * FUN_107330da0(undefined8 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int *piVar3;
  int *extraout_x8;
  int *extraout_x8_00;
  int *piVar4;
  int *piVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_100 [96];
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [96];
  
  puVar1 = auStack_80;
  ppppuVar6 = (undefined8 ****)&stack0xfffffffffffffff0;
  piVar3 = param_2;
  func_0x0001073447e0();
  func_0x000107347b28();
  func_0x000107345d3c();
  func_0x000107345468();
  func_0x000107346900();
  func_0x000107345728();
  func_0x00010734471c();
  if (!(bool)in_ZR) {
    pcVar7 = FUN_107330de0;
    ___stack_chk_fail();
    uVar2 = *param_2 == 2;
    piVar5 = param_2;
    piVar4 = extraout_x8;
    if ((bool)uVar2) {
      piVar5 = *(int **)(param_2 + 2);
      puVar1 = auStack_100;
      pcStack_88 = FUN_107330de0;
      piVar3 = piVar5;
      pppuStack_90 = ppppuVar6;
      func_0x0001073447e0();
      func_0x000107347b34();
      func_0x000107345d3c();
      func_0x000107345468();
      func_0x000107346900();
      func_0x000107345728();
      func_0x00010734471c();
      if ((bool)uVar2) {
        return piVar5;
      }
      pcVar7 = FUN_107330e40;
      ___stack_chk_fail();
      piVar4 = extraout_x8_00;
      ppppuVar6 = &pppuStack_90;
    }
    param_2 = piVar3;
    uVar2 = *piVar5 == 1;
    if (!(bool)uVar2) {
      *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
      *(undefined8 *****)(puVar1 + -0x10) = ppppuVar6;
      *(code **)(puVar1 + -8) = pcVar7;
      *piVar4 = 0;
      func_0x000104c2fe00(piVar4 + 2,piVar5 + 2);
      return piVar4;
    }
    uVar8 = *(undefined8 *)(piVar5 + 2);
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar6;
    *(code **)(puVar1 + -8) = pcVar7;
    func_0x0001073447e0(uVar8);
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      piVar5 = (int *)(puVar1 + -0xb0);
      *(undefined8 *)(puVar1 + -0xa0) = unaff_x20;
      *(undefined8 *)(puVar1 + -0x98) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
      *(undefined8 *)(puVar1 + -0x88) = 0x107330ea4;
      piVar3 = param_2;
      func_0x00010726dd50();
      if (1 < (long)piVar3) {
        FUN_107330f0c(puVar1 + -0xb0,*(undefined8 *)param_2);
        func_0x000107346020();
        func_0x000107330ee8();
        func_0x00010726dd8c(puVar1 + -0xb0);
        piVar3 = piVar5;
      }
      return piVar3;
    }
  }
  return param_2;
}



/* Entry: 107330de0; end: 107330dff;  */

int * FUN_107330de0(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar4;
  undefined1 auStack_80 [96];
  
  uVar1 = *param_2 == 2;
  if ((bool)uVar1) {
    param_2 = *(int **)(param_2 + 2);
    unaff_x29 = &stack0xfffffffffffffff0;
    param_3 = param_2;
    func_0x0001073447e0();
    func_0x000107347b34();
    func_0x000107345d3c();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345728();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_2;
    }
    unaff_x30 = FUN_107330e40;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    param_1 = extraout_x8;
  }
  uVar1 = *param_2 == 1;
  if ((bool)uVar1) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0001073447e0(uVar4);
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    if ((bool)uVar1) {
      return param_3;
    }
    ___stack_chk_fail();
    piVar3 = (int *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x107330ea4;
    piVar2 = param_3;
    func_0x00010726dd50();
    if (1 < (long)piVar2) {
      FUN_107330f0c((undefined1 *)((long)register0x00000008 + -0xb0),*(undefined8 *)param_3);
      func_0x000107346020();
      func_0x000107330ee8();
      func_0x00010726dd8c((undefined1 *)((long)register0x00000008 + -0xb0));
      piVar2 = piVar3;
    }
    return piVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *param_1 = 0;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107330e00; end: 107330e3f;  */

int * FUN_107330e00(undefined8 param_1,int *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *extraout_x8;
  int aiStack_130 [4];
  
  piVar2 = param_2;
  func_0x0001073447e0();
  func_0x000107347b34();
  func_0x000107345d3c();
  func_0x000107345468();
  func_0x000107346900();
  func_0x000107345728();
  func_0x00010734471c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = *param_2 == 1;
    if (!(bool)uVar1) {
      *extraout_x8 = 0;
      func_0x000104c2fe00(extraout_x8 + 2,param_2 + 2);
      return extraout_x8;
    }
    func_0x0001073447e0(*(undefined8 *)(param_2 + 2));
    func_0x000107346c3c();
    func_0x000107347b54();
    func_0x000107345468();
    func_0x000107346900();
    func_0x000107345944();
    func_0x00010734471c();
    param_2 = piVar2;
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      piVar4 = aiStack_130;
      piVar3 = piVar2;
      func_0x00010726dd50();
      if (1 < (long)piVar3) {
        FUN_107330f0c(aiStack_130,*(undefined8 *)piVar2);
        func_0x000107346020();
        func_0x000107330ee8();
        func_0x00010726dd8c(aiStack_130);
        piVar3 = piVar4;
      }
      return piVar3;
    }
  }
  return param_2;
}



/* Entry: 107330e40; end: 107330e67;  */

undefined8 * FUN_107330e40(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_b0 [2];
  
  uVar1 = *param_2 == 1;
  if (!(bool)uVar1) {
    *(undefined4 *)param_1 = 0;
    func_0x000104c2fe00(param_1 + 1,param_2 + 2);
    return param_1;
  }
  func_0x0001073447e0(*(undefined8 *)(param_2 + 2));
  func_0x000107346c3c();
  func_0x000107347b54();
  func_0x000107345468();
  func_0x000107346900();
  func_0x000107345944();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_b0;
  puVar2 = param_3;
  func_0x00010726dd50();
  if (1 < (long)puVar2) {
    FUN_107330f0c(auStack_b0,*param_3);
    func_0x000107346020();
    func_0x000107330ee8();
    func_0x00010726dd8c(auStack_b0);
    puVar2 = puVar3;
  }
  return puVar2;
}



/* Entry: 107330e68; end: 107330f0b;  */

void FUN_107330e68(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 auStack_b0 [16];
  
  func_0x0001073447e0();
  func_0x000107346c3c();
  func_0x000107347b54();
  func_0x000107345468();
  func_0x000107346900();
  func_0x000107345944();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x00010726dd50();
  if (1 < (long)puVar1) {
    FUN_107330f0c(auStack_b0,*param_1);
    func_0x000107346020();
    func_0x000107330ee8();
    func_0x00010726dd8c(auStack_b0);
  }
  return;
}



/* Entry: 107330f0c; end: 107330f27;  */

void FUN_107330f0c(void)

{
  func_0x000107345eb4();
  FUN_107330f28();
  return;
}



/* Entry: 107330f28; end: 107330f8b;  */

void FUN_107330f28(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073447e0();
  func_0x000107346378();
  func_0x000107272ca8();
  FUN_107330f8c(uStack_30,param_2);
  func_0x000107344a14();
  func_0x000107272d18();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  func_0x000107272d18();
  func_0x000107345604();
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109966c0);
  FUN_107330fc4();
  return;
}



/* Entry: 107330f8c; end: 107330fc3;  */

void FUN_107330f8c(void)

{
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109966c0);
  FUN_107330fc4();
  return;
}



/* Entry: 107330fc4; end: 107330fdb;  */

void FUN_107330fc4(long param_1)

{
  func_0x0001072729e0();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 107330fdc; end: 107331073;  */

void FUN_107330fdc(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107331074; end: 10733108b;  */

void FUN_107331074(void)

{
  func_0x0001072c0298();
  return;
}



/* Entry: 10733108c; end: 1073310ef;  */

void FUN_10733108c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar1;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_1073310f0();
  func_0x000107347fbc();
  func_0x000107347710();
  uVar1 = *param_2;
  *(undefined8 *)(extraout_x8_00 + 0x20) = param_2[1];
  *(undefined8 *)(extraout_x8_00 + 0x18) = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107344a14();
  func_0x000107331164();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107346404();
  FUN_107331110();
  func_0x0001073465ec();
  return;
}



/* Entry: 1073310f0; end: 10733110f;  */

void FUN_1073310f0(void)

{
  func_0x000107346404();
  FUN_107331110();
  func_0x0001073465ec();
  return;
}



/* Entry: 107331110; end: 107331133;  */

void FUN_107331110(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a39c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107331134; end: 107331137;  */

void FUN_107331134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a39c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107331138; end: 10733114b;  */

void FUN_107331138(void)

{
  func_0x000107331158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733114c; end: 107331173;  */

void FUN_10733114c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar1;
  func_0x0001072c5d20();
  pcVar2 = pcRam00000001138369a8;
  if ((puVar3 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    uStack_30 = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    (*pcVar2)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x0001072c6dc4(puVar1);
  return;
}



/* Entry: 107331174; end: 107331193;  */

long FUN_107331174(long param_1)

{
  func_0x000107346078();
  FUN_107331194();
  return param_1 + 0x48;
}



/* Entry: 107331194; end: 107331397;  */

undefined1  [16] FUN_107331194(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  undefined1 in_NG;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  func_0x000107346728();
  func_0x000104c2fe38();
  uVar7 = param_3[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x27 = uVar8 & param_4;
      uVar1 = true;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_4 - uVar7) < 0;
      uVar1 = param_4 == uVar7;
      unaff_x27 = param_4;
      if (uVar7 <= param_4) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_4 / uVar7;
        }
        unaff_x27 = param_4 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*param_3 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_107331254;
          func_0x0001073476a4();
          if (!(bool)uVar1) break;
          plVar5 = plVar6 + 2;
          func_0x000104c32db4();
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_107331368;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = extraout_x8 & uVar8;
        }
        else {
          uVar3 = extraout_x8;
          if (uVar7 <= extraout_x8) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = extraout_x8 / uVar7;
            }
            uVar3 = extraout_x8 - uVar3 * uVar7;
          }
        }
        in_NG = (long)(uVar3 - unaff_x27) < 0;
        uVar1 = 1;
      } while (uVar3 == unaff_x27);
    }
  }
LAB_107331254:
  func_0x000107345ba8(aplStack_78);
  FUN_107331398();
  func_0x000107345980();
  if ((uVar7 == 0) || (func_0x000107347ca8(param_1,param_2,(float)uVar7), (bool)in_NG)) {
    func_0x00010734530c(uVar7 << 1);
    FUN_1073313fc(param_3);
    uVar7 = param_3[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & param_4;
    }
    else {
      unaff_x27 = param_4;
      if (uVar7 <= param_4) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_4 / uVar7;
        }
        unaff_x27 = param_4 - uVar8 * uVar7;
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar4 = *param_3;
  plVar5 = *(long **)(lVar4 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_3 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar4 + unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_3[3] = param_3[3] + 1;
  FUN_10733157c(aplStack_78);
  uVar2 = 1;
LAB_107331368:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 107331398; end: 1073313e3;  */

void FUN_107331398(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  puVar2 = puVar1 + 2;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x000104c2fe00(puVar2,*param_5);
  puVar2[7] = 0;
  puVar2[8] = 0;
  return;
}



/* Entry: 1073313e4; end: 1073313fb;  */

void FUN_1073313e4(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1073313fc; end: 107331487;  */

void FUN_1073313fc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar5;
  long *extraout_x9_00;
  long *plVar6;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = param_1;
  if (param_2 - 1 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = param_2;
    if ((param_2 & param_2 - 1) != 0) {
      func_0x000107347be4();
      uVar5 = uVar3;
    }
  }
  uVar8 = *(ulong *)(param_1 + 8);
  uVar2 = uVar8 <= uVar5;
  if (uVar8 < uVar5) {
LAB_107331440:
    func_0x000107345ba8();
    if (param_2 == 0) {
      FUN_10733154c(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_107331564(lVar4);
      FUN_10733154c(uVar3,lVar4);
      func_0x00010734732c();
      for (uVar5 = extraout_x9; param_2 != uVar5; uVar5 = uVar5 + 1) {
        *(undefined8 *)(extraout_x8 + uVar5 * 8) = 0;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x000107346570();
        func_0x000107346554();
        lVar4 = extraout_x8_00;
        plVar7 = extraout_x9_00;
        uVar3 = extraout_x10;
        uVar5 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((param_2 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar5 = uVar8;
            }
            else {
              func_0x000107345664();
              lVar4 = extraout_x8_01;
              plVar7 = extraout_x9_01;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)uVar2) {
    func_0x0001073458b8();
    if (((bool)uVar2) && ((uVar8 & uVar8 - 1) == 0)) {
      func_0x000107345684();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010734731c();
    if (!(bool)uVar2) goto LAB_107331440;
  }
  return;
}



/* Entry: 107331488; end: 10733154b;  */

void FUN_107331488(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10733154c(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_107331564(lVar2);
    FUN_10733154c(param_1,lVar2);
    func_0x00010734732c();
    for (uVar3 = extraout_x9; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(extraout_x8 + uVar3 * 8) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107346570();
      func_0x000107346554();
      lVar2 = extraout_x8_00;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107345664();
            lVar2 = extraout_x8_01;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10733154c; end: 107331563;  */

void FUN_10733154c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107331564; end: 10733157b;  */

void FUN_107331564(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107346294();
  FUN_10733159c();
  return;
}



/* Entry: 10733157c; end: 10733159b;  */

void FUN_10733157c(void)

{
  func_0x000107346294();
  FUN_10733159c();
  return;
}



/* Entry: 10733159c; end: 1073315b3;  */

void FUN_10733159c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010734743c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001073315ec(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073315b4; end: 10733165f;  */

void FUN_1073315b4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010734743c();
  if ((bool)in_ZR) {
    func_0x0001073315ec(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107331660; end: 1073316cb;  */

void FUN_107331660(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_40;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_1073316cc();
  func_0x00010734671c(uStack_40);
  FUN_107331708();
  func_0x000107344a14();
  func_0x00010733176c();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  func_0x00010733176c();
  func_0x000107345604();
  func_0x000107346404();
  FUN_1073316ec();
  func_0x0001073465ec();
  return;
}



/* Entry: 1073316cc; end: 1073316eb;  */

void FUN_1073316cc(void)

{
  func_0x000107346404();
  FUN_1073316ec();
  func_0x0001073465ec();
  return;
}



/* Entry: 1073316ec; end: 107331707;  */

void FUN_1073316ec(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x38 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3a00);
  FUN_10737a064();
  return;
}



/* Entry: 107331708; end: 10733173f;  */

void FUN_107331708(void)

{
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3a00);
  FUN_10737a064();
  return;
}



/* Entry: 107331740; end: 107331743;  */

void FUN_107331740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107331744; end: 107331757;  */

void FUN_107331744(void)

{
  func_0x000107331760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107331758; end: 10733177b;  */

void FUN_107331758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073478dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10733177c; end: 1073317a3;  */

undefined8 FUN_10733177c(undefined8 param_1)

{
  FUN_1073317a4(param_1);
  return param_1;
}



/* Entry: 1073317a4; end: 1073317b7;  */

void FUN_1073317a4(undefined8 param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    if ((bRam00000001131ad3c8 & 1) == 0) {
      iVar1 = 0x131ad3c8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10733183c(0x1131ad3b8);
        ___cxa_guard_release(0x1131ad3c8);
      }
    }
    func_0x00010734741c();
    if (extraout_x8 != 0) {
      do {
        func_0x000107345624();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x000107345eb4(param_2);
  FUN_107331984();
  return;
}



/* Entry: 1073317b8; end: 10733183b;  */

void FUN_1073317b8(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad3c8 & 1) == 0) {
    iVar1 = 0x131ad3c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10733183c(0x1131ad3b8);
      ___cxa_guard_release(0x1131ad3c8);
    }
  }
  func_0x00010734741c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10733183c; end: 107331857;  */

void FUN_10733183c(void)

{
  undefined1 uStack_11;
  
  FUN_107331858(&uStack_11);
  return;
}



/* Entry: 107331858; end: 1073318c3;  */

void FUN_107331858(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_1073318c4();
  func_0x000107347fbc();
  func_0x000107347710();
  *(undefined8 *)(extraout_x8_00 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  *(undefined4 *)(extraout_x8_00 + 0x38) = 0x3f800000;
  func_0x000107344a14();
  FUN_107331958();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107346404();
  FUN_1073318e4();
  func_0x0001073465ec();
  return;
}



/* Entry: 1073318c4; end: 1073318e3;  */

void FUN_1073318c4(void)

{
  func_0x000107346404();
  FUN_1073318e4();
  func_0x0001073465ec();
  return;
}



/* Entry: 1073318e4; end: 107331903;  */

void FUN_1073318e4(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *unaff_x30;
  
  func_0x000107348088();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *unaff_x30 = &PTR_FUN_1109a3a60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107331904; end: 107331907;  */

void FUN_107331904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3a60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107331908; end: 10733191b;  */

void FUN_107331908(void)

{
  func_0x000107331928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733191c; end: 107331933;  */

undefined8 FUN_10733191c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107347300(param_1 + 0x18);
  func_0x000107331b68();
  func_0x000107346294();
  FUN_107331bbc();
  return unaff_x19;
}



/* Entry: 107331934; end: 107331957;  */

void FUN_107331934(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107331958; end: 107331967;  */

void FUN_107331958(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107331968; end: 107331983;  */

void FUN_107331968(void)

{
  func_0x000107345eb4();
  FUN_107331984();
  return;
}



/* Entry: 107331984; end: 1073319e7;  */

void FUN_107331984(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_1073318c4();
  FUN_1073319e8(uStack_30,param_2);
  func_0x000107344a14();
  FUN_107331958();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  FUN_107331958();
  func_0x000107345604();
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3a50);
  FUN_107331a14();
  return;
}



/* Entry: 1073319e8; end: 107331a13;  */

void FUN_1073319e8(void)

{
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3a50);
  FUN_107331a14();
  return;
}



/* Entry: 107331a14; end: 107331a2b;  */

void FUN_107331a14(long param_1)

{
  FUN_107331a2c();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 107331a2c; end: 107331a9b;  */

void FUN_107331a2c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 107331a9c; end: 107331ae3;  */

void FUN_107331a9c(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_107331ae4();
  if ((lVar1 == 1) && (func_0x0001073464b0(), extraout_x8 != 0)) {
    func_0x000107346aa8();
    func_0x000107346e70();
    func_0x000107346e68();
  }
  FUN_107331934(param_1);
  return;
}



/* Entry: 107331ae4; end: 107331b1f;  */

long FUN_107331ae4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107331b20; end: 107331bbb;  */

void FUN_107331b20(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}


