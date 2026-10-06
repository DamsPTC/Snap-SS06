/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10865f3b8; end: 10865f537;  */

void FUN_10865f3b8(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c31e24();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uStack_78 = 0;
  bVar3 = uVar5 <= uVar1;
  puStack_80 = param_1;
  if (uVar1 - uVar5 != 0) {
    lVar4 = (long)(uVar1 - uVar5) / 0x50;
    func_0x000108660344();
    if (bVar3) {
      FUN_10865ef74();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10865f504);
      (*pcVar2)();
    }
    FUN_10865ef88();
    *unaff_x19 = lVar4;
    unaff_x19[1] = lVar4;
    plStack_70 = unaff_x19 + 2;
    *plStack_70 = lVar4 + (long)param_2 * 0x50;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar4;
    for (; lStack_48 = lVar4, uVar5 != uVar1; uVar5 = uVar5 + 0x50) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar4,uVar5);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(uVar5 + 0x18);
      FUN_10865ecd8(lVar4 + 0x20,uVar5 + 0x20);
      uVar6 = *(undefined8 *)(uVar5 + 0x40);
      *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(uVar5 + 0x48);
      *(undefined8 *)(lVar4 + 0x40) = uVar6;
      lVar4 = lStack_48 + 0x50;
    }
    uStack_58 = 1;
    func_0x00010865efc0(&plStack_70);
    unaff_x19[1] = lVar4;
  }
  uStack_78 = 1;
  FUN_10865f538(&puStack_80);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  unaff_x19[4] = *(long *)(unaff_x20 + 0x20);
  unaff_x19[3] = lVar4;
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  unaff_x19[6] = *(long *)(unaff_x20 + 0x30);
  unaff_x19[5] = lVar7;
  if (lVar4 != 0) {
    do {
      func_0x000107c31de8();
    } while (extraout_w10 != 0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  unaff_x19[8] = *(long *)(unaff_x20 + 0x40);
  unaff_x19[7] = lVar7;
  if (lVar4 != 0) {
    do {
      func_0x000107c31de8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10865f538; end: 10865f583;  */

long FUN_10865f538(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10865ee7c(param_1);
  }
  return param_1;
}



/* Entry: 10865f584; end: 10865f597;  */

void FUN_10865f584(void)

{
  func_0x00010865f564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865f598; end: 10865f5d3;  */

undefined8 FUN_10865f598(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm(0x50);
  FUN_10865f8d8();
  return uVar1;
}



/* Entry: 10865f5d4; end: 10865f5ff;  */

void FUN_10865f5d4(long param_1,undefined8 param_2)

{
  func_0x000108660330(param_2,param_1 + 8);
  FUN_10865f3b8();
  return;
}



/* Entry: 10865f600; end: 10865f893;  */

void FUN_10865f600(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined ***pppuVar4;
  code *extraout_x10;
  code *extraout_x10_00;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  bVar2 = *(byte *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if ((bVar2 & 1) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_110a609a8;
    uStack_60 = 0;
    uStack_48 = 0x249;
    func_0x000108660134(&ppuStack_68,0x11);
    func_0x00010866022c();
    (*extraout_x10_00)(uVar5);
    func_0x000108660184();
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_110a609a8;
    uStack_88 = 0;
    uStack_70 = 0x246;
    pppuVar4 = &ppuStack_90;
    func_0x000108660134(pppuVar4,0x11);
    func_0x000107c2884c(&ppuStack_68,pppuVar4);
    func_0x0001086602e8();
    func_0x000108660214();
    func_0x000108660184();
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_110a609a8;
    uStack_60 = 0;
    uStack_48 = 0x249;
    pppuVar4 = &ppuStack_68;
    func_0x000108660114(pppuVar4);
    func_0x000107c278b8(auStack_a8,&UNK_10f4afcbc);
    lVar3 = param_2;
    FUN_108843ae8(param_2);
    func_0x000107c28824(pppuVar4,auStack_a8,lVar3);
    func_0x00010866022c();
    (*extraout_x10)(uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    func_0x000108660184();
    plVar6 = *(long **)(param_1 + 0x40);
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_110a609a8;
    uStack_88 = 0;
    uStack_70 = 0x246;
    pppuVar4 = &ppuStack_90;
    func_0x000108660114(pppuVar4);
    func_0x000107c278b8(auStack_c0,&UNK_10f4afcbc);
    FUN_108843ae8(param_2);
    func_0x000107c28824(pppuVar4,auStack_c0,param_2);
    func_0x000107c2884c(&ppuStack_68,pppuVar4);
    (**(code **)(*plVar6 + 0x50))(plVar6,&ppuStack_68);
    func_0x000108660184();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  }
  func_0x000107c2882c(&ppuStack_90);
  FUN_108848684(auStack_d8);
  func_0x000107c29e04(&ppuStack_90,auStack_d8);
  func_0x000107c31e54();
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar3 = *(long *)(param_1 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
              (*(long **)(param_1 + 0x30),lVar3,*(undefined4 *)(lVar3 + 0x40),
               *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x48),lVar3 + 0x20,&ppuStack_90
               ,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),bVar2 ^ 1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_90);
  return;
}



/* Entry: 10865f894; end: 10865f8cb;  */

long FUN_10865f894(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a60f60);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10865f8cc; end: 10865f8d7;  */

undefined ** FUN_10865f8cc(void)

{
  return &PTR_DAT_110a60f60;
}



/* Entry: 10865f8d8; end: 10865f93b;  */

void FUN_10865f8d8(void)

{
  func_0x000108660330();
  FUN_10865f3b8();
  return;
}



/* Entry: 10865f93c; end: 10865f95f;  */

void FUN_10865f93c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60eb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865f960; end: 10865f983;  */

void FUN_10865f960(long param_1)

{
  func_0x000107c31e64();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10865f984; end: 10865f9a7;  */

void FUN_10865f984(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104bee630();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10865f9a8; end: 10865f9bf;  */

void FUN_10865f9a8(long param_1)

{
  func_0x000107c31e14();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10865f9c0; end: 10865fa17;  */

void FUN_10865f9c0(void)

{
  func_0x000107c31e1c();
  func_0x00010865f9e0();
  func_0x000107c31e00();
  return;
}



/* Entry: 10865fa18; end: 10865fa67;  */

void FUN_10865fa18(void)

{
  undefined1 auStack_1d8 [424];
  
  func_0x000107c31e1c();
  func_0x00010068df2c(auStack_1d8);
  func_0x000107c31e34();
  func_0x0001006906a0();
  func_0x000107c31e3c();
  func_0x0001006906a0();
  func_0x00010068e154(auStack_1d8);
  return;
}



/* Entry: 10865fa68; end: 10865fa97;  */

void FUN_10865fa68(void)

{
  func_0x000107c31dec();
  func_0x000107c31e40();
  FUN_10865fa98();
  func_0x000107c31e0c();
  return;
}



/* Entry: 10865fa98; end: 10865fb7b;  */

void FUN_10865fa98(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *apuStack_60 [2];
  char cStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  byte bStack_28;
  
  FUN_10865fb7c(&uStack_40);
  if ((bStack_28 & 1) == 0) {
    FUN_10865fc54(apuStack_60,param_2);
    func_0x00010069077c(&uStack_40,apuStack_60);
    func_0x00010068e19c(apuStack_60);
    if ((bStack_28 & 1) == 0) {
      func_0x00010bd3f434(apuStack_60,&UNK_10f4afccc,0x2e,&DAT_10f3b93c3);
      if (-1 < cStack_49) {
        apuStack_60[0] = (undefined1 *)apuStack_60;
      }
      func_0x00010bd3f4e0(apuStack_60[0],"unknown",0x91);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10865fb5c);
      (*pcVar1)();
    }
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x00010068e19c(&uStack_40);
  return;
}



/* Entry: 10865fb7c; end: 10865fc53;  */

void FUN_10865fb7c(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  long lStack_60;
  ulong *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puVar2 = (ulong *)*param_2;
  do {
    puVar3 = (ulong *)param_2[1];
    puStack_58 = puVar2;
    if (puVar2 == puVar3) {
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[2] = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      uVar1 = 1;
LAB_10865fc24:
      *(undefined1 *)(param_1 + 3) = uVar1;
      func_0x000104bee630(&uStack_50);
      return;
    }
    if ((ulong)((long)puVar3 - (long)puVar2) < 8) {
LAB_10865fbfc:
      uVar1 = 0;
      *(undefined1 *)param_1 = 0;
      goto LAB_10865fc24;
    }
    puStack_58 = puVar2 + 1;
    if ((ulong)((long)puVar3 - (long)puStack_58) < *puVar2) goto LAB_10865fbfc;
    iVar4 = (int)*puVar2;
    lStack_60 = (long)puStack_58 + (long)iVar4;
    FUN_10865fe10(&uStack_50,&puStack_58,&lStack_60);
    puVar2 = (ulong *)((long)puStack_58 + (long)iVar4);
  } while( true );
}



/* Entry: 10865fc54; end: 10865fe0f;  */

void FUN_10865fc54(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 auStack_c8 [48];
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_70 [8];
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_98 = (uint *)*param_2;
  while( true ) {
    puVar4 = (uint *)param_2[1];
    if (puStack_98 == puVar4) {
      param_1[1] = uStack_88;
      *param_1 = uStack_90;
      param_1[2] = uStack_80;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      func_0x000104bee630(&uStack_90);
      return;
    }
    if ((ulong)((long)puVar4 - (long)puStack_98) < 4) break;
    puVar3 = puStack_98 + 1;
    uVar1 = *puStack_98;
    puStack_98 = puVar3;
    if ((ulong)((long)puVar4 - (long)puVar3) < (ulong)uVar1) {
      func_0x000108660308((long)puVar3 - *param_2);
      func_0x000107c2793c(&UNK_10f4afd9d);
      func_0x000107c3173c(auStack_c8);
      func_0x000108660274();
      func_0x0001086602b0();
      func_0x0001086602f4();
      func_0x00010bd3f4e0();
      goto LAB_10865fdcc;
    }
    alStack_70[0] = (long)(int)uVar1 + (long)puVar3;
    FUN_10865fe10(&uStack_90,&puStack_98,alStack_70);
    puStack_98 = (uint *)((long)puStack_98 + (long)(int)uVar1);
  }
  func_0x000108660308((long)puStack_98 - *param_2);
  func_0x000107c2793c(&UNK_10f4afcfb);
  func_0x000107c3173c(auStack_c8);
  func_0x000108660274();
  func_0x0001086602b0();
  func_0x0001086602f4();
  func_0x00010bd3f4e0();
LAB_10865fdcc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10865fdd0);
  (*pcVar2)();
}



/* Entry: 10865fe10; end: 10865fe4b;  */

long FUN_10865fe10(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10865fe4c();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10865fe80();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10865fe4c; end: 10865fe7f;  */

void FUN_10865fe4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10865ff1c(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10865fe80; end: 10865ff1b;  */

long FUN_10865fe80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x00010528d690(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x00010528d530(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  FUN_10865ff1c(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x18;
  func_0x000107c31e3c();
  func_0x00010528d4ec();
  lVar2 = param_1[1];
  func_0x00010528d5a4(auStack_58);
  return lVar2;
}



/* Entry: 10865ff1c; end: 10865ff27;  */

undefined8 * FUN_10865ff1c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001078dbb98();
  return param_1;
}



/* Entry: 10865ff28; end: 10865ff4b;  */

undefined8 FUN_10865ff28(undefined8 param_1)

{
  FUN_10865ff4c(param_1,0);
  return param_1;
}



/* Entry: 10865ff4c; end: 10865ff63;  */

void FUN_10865ff4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1088f161c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10865ff64; end: 10865ff7f;  */

void FUN_10865ff64(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1088f161c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865ff80; end: 108660087;  */

void FUN_10865ff80(ulong *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong unaff_x19;
  ulong *unaff_x20;
  ulong *puVar3;
  ulong *puVar4;
  
  func_0x000107c31e1c();
  puVar3 = *(ulong **)(param_2 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar4 = (ulong *)unaff_x20[2];
  if ((puVar4 == puVar3) && (param_1 = unaff_x20, func_0x0001053a91c8(), (int)param_1 == 0)) {
    puVar3 = unaff_x20;
    if ((*unaff_x20 & 1) != 0) {
      puVar3 = (ulong *)(*unaff_x20 + 7);
    }
    uVar2 = unaff_x20[1];
    puVar4 = unaff_x20;
    func_0x000107c28174();
    if ((int)uVar2 < (int)puVar4) {
      uVar2 = puVar3[(int)unaff_x20[1]];
      puVar4 = unaff_x20;
      func_0x000107c28174();
      puVar3[(int)puVar4] = uVar2;
    }
    uVar2 = unaff_x20[1];
    *(int *)(unaff_x20 + 1) = (int)uVar2 + 1;
    puVar3[(int)uVar2] = unaff_x19;
    uVar2 = *unaff_x20;
    if ((uVar2 & 1) != 0) {
      *(int *)(uVar2 - 1) = *(int *)(uVar2 - 1) + 1;
    }
    return;
  }
  func_0x000107c31e34();
  func_0x000107c31e24();
  if ((puVar3 == (ulong *)0x0) && (puVar4 != (ulong *)0x0)) {
    if (unaff_x20 != (ulong *)0x0) {
      func_0x00010866018c();
    }
  }
  else if (puVar4 != puVar3) {
    FUN_108660088();
    func_0x0001086601c8();
    param_1 = puVar4;
  }
  func_0x000107c31e48();
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar2 = *param_1;
  }
  else {
    puVar3 = param_1;
    func_0x0001053a91c8();
    uVar2 = param_1[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar2 == (int)puVar3;
    if ((int)uVar2 < (int)puVar3) {
      uVar1 = (*param_1 & 1) == 0;
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar2 = *puVar3;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar2;
      goto code_r0x0001053a9270;
    }
    uVar2 = *param_1;
    if ((uVar2 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar2);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108660088; end: 1086600c3;  */

void FUN_108660088(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x00010866021c();
  }
  else {
    func_0x0001086602dc();
  }
  func_0x000108660174(&UNK_110a8c378);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 1086600c4; end: 10866035f;  */

void FUN_1086600c4(void)

{
  return;
}



/* Entry: 108660360; end: 10866079f;  */

/* WARNING: Removing unreachable block (ram,0x0001086604b4) */
/* WARNING: Removing unreachable block (ram,0x0001086605a0) */
/* WARNING: Removing unreachable block (ram,0x0001086605fc) */
/* WARNING: Removing unreachable block (ram,0x0001086605b0) */
/* WARNING: Removing unreachable block (ram,0x000108660604) */
/* WARNING: Removing unreachable block (ram,0x000108660624) */
/* WARNING: Removing unreachable block (ram,0x00010866061c) */
/* WARNING: Removing unreachable block (ram,0x000108660628) */

void FUN_108660360(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined4 extraout_w8_02;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  undefined4 extraout_w9_00;
  long *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint *in_stack_00000048;
  
  func_0x00010866739c();
  puVar7 = (undefined8 *)0xe0;
  __Znwm();
  *puVar7 = FUN_1086665ec;
  puVar7[1] = FUN_1086668f0;
  puVar7[0x19] = param_3;
  puVar7[0x1a] = param_4;
  puVar7[0x17] = param_1;
  puVar7[0x18] = param_2;
  func_0x000108653f98(puVar7 + 2);
  puVar8 = puVar7 + 2;
  FUN_108653ba0(extraout_x8);
  puVar7[0x14] = 0;
  func_0x000107c28258();
  puVar7[0x15] = puVar8;
  *(undefined1 *)(puVar7 + 0x16) = 1;
  FUN_1086607a0(puVar7 + 0xe,param_1,param_2,param_3,param_4);
  puVar7[4] = puVar7[0xe];
  do {
    func_0x00010866694c();
  } while (extraout_w10 != 0);
  func_0x000108666be8(puVar7[4]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x1b) = 0;
    lVar12 = puVar7[4];
    func_0x00010866692c();
    lVar13 = *(long *)param_1;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *(long *)param_1;
    }
    plVar14 = (long *)(lVar12 + 0x10);
    do {
      if (*plVar14 == 0) {
        func_0x000108666a88();
        plVar14 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar11 = extraout_x11_00;
      }
      else {
        func_0x000108666c88();
        plVar14 = extraout_x8_00;
        uVar3 = extraout_w10_00;
        uVar11 = extraout_x11;
      }
      if ((uVar11 & 1) != 0) {
        func_0x000108666b74();
        if ((bool)in_ZR) {
          func_0x000108666a54();
          uVar6 = extraout_w8;
          if ((bool)in_CY) {
            uVar6 = extraout_w9;
          }
          func_0x000108666978();
          *(undefined1 *)param_1 = uVar6;
          func_0x000108666a2c(0);
          *(uint **)(lVar12 + 0x90) = param_1;
        }
        func_0x000108666b5c();
        *(long *)(extraout_x8_02 + 0x20) = lVar13;
        func_0x000108666a10(*(undefined8 *)(lVar12 + 0x90));
        *(undefined8 *)(lVar12 + 0x10) = 0;
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  func_0x000108667154();
  uVar2 = *param_1;
  uVar4 = param_1[1];
  func_0x000108666bd0();
  func_0x000108666b34();
  lVar12 = puVar7[0x1a];
  *(undefined4 *)(lVar12 + 0x38) = 0;
  *(undefined1 *)(lVar12 + 0x3c) = 0;
  *(uint *)(lVar12 + 0x40) = uVar2;
  *(byte *)(lVar12 + 0x44) = (byte)uVar4;
  func_0x000108666e98();
  uVar6 = true;
  uVar5 = 1;
  lVar12 = *extraout_x9;
  lVar13 = extraout_x9[1];
  func_0x000108666c64();
  uVar3 = extraout_w8_01 & 0xffff | 0x60000;
  if ((bool)uVar6) {
    uVar3 = uVar3 + 1;
  }
  plVar14 = *(long **)(extraout_x12 + 0x28);
  func_0x000108666dac();
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  func_0x0001086672d0();
  func_0x0001086672a4();
  func_0x000107c278b8(&stack0x00000048,PTR_DAT_113268ca0);
  func_0x000108666d38(lVar13 - lVar12);
  lVar12 = 0x6b0;
  if (!(bool)uVar5 || (bool)uVar6) {
    lVar12 = 0x6b8;
  }
  func_0x000107c28824(param_1,&stack0x00000048,
                      *(undefined8 *)((long)&PTR_s_success_113269028 + lVar12));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000048);
  FUN_108660fe8(param_1,uVar3);
  puVar9 = param_1;
  func_0x000108666f0c();
  in_stack_00000048 = puVar9;
  (**(code **)(*plVar14 + 0x18))(plVar14,param_1,&stack0x00000048);
  puVar10 = &stack0x00000020;
  func_0x000107c2882c(puVar10);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  func_0x000108666dac();
  func_0x0001086672d0();
  func_0x0001086672a4();
  FUN_108660fe8();
  func_0x000107c2884c(puVar7 + 4,puVar10);
  func_0x000107c2882c(&stack0x00000020);
  func_0x000108666fe0(puVar7[0x18]);
  uVar1 = extraout_w8_02;
  if ((bool)uVar5) {
    uVar1 = extraout_w9_00;
  }
  func_0x000108666cec(uVar1,puVar7 + 4);
  if (((byte)uVar4 & 1) != 0) {
    if (0x46 < uVar2 >> 0x11) {
      func_0x000108666d7c();
    }
    func_0x000107c278b8(puVar7 + 0xe);
    if (0x2b7 < (uVar2 & 0xffff)) {
      func_0x000108666d64();
    }
    func_0x000108667128();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7 + 0xe);
  }
  func_0x00010866720c();
  func_0x000108667368();
  func_0x000108666f1c();
  func_0x000108666b4c();
  func_0x000108666e04();
  func_0x000108666c80();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 1086607a0; end: 108660f5f;  */

/* WARNING: Removing unreachable block (ram,0x000108660ba8) */

void FUN_1086607a0(long param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong *puVar10;
  ulong *puVar11;
  int iVar12;
  undefined1 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong *puVar13;
  ulong uVar14;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined1 extraout_w9;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *extraout_x9;
  long lVar17;
  long extraout_x9_00;
  int extraout_w10;
  undefined8 uVar18;
  long extraout_x11;
  long *extraout_x11_00;
  undefined4 uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined *puVar22;
  long *plVar23;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  char in_stack_00000058;
  
  func_0x00010866739c();
  puVar6 = (undefined8 *)0x138;
  __Znwm();
  *puVar6 = FUN_1086660fc;
  puVar6[1] = FUN_1086665c0;
  puVar6[0x1a] = param_3;
  puVar6[0x1b] = param_4;
  puVar6[0x18] = param_1;
  puVar6[0x19] = param_2;
  func_0x000108666efc();
  FUN_1086610a0(extraout_x8,puVar6[2]);
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  uVar15 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  cVar2 = *(char *)(uVar15 + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)(uVar15 + 8) == 0) goto LAB_108660884;
LAB_108660824:
    if ((*(uint *)(param_2 + 0x10) & 1) == 0) {
      if (*param_3 == param_3[1]) {
        func_0x00010866706c();
        iVar12 = extraout_w8_03 + -1;
      }
      else {
        uVar15 = (long)(param_3[1] - *param_3) / 0x30;
        if ((uVar15 < 0xb) && (uVar15 < 2 || *(int *)(param_2 + 0xa8) == 0)) {
          if ((*(uint *)(param_2 + 0x10) >> 5 & 1) == 0) {
            if (*(int *)(param_2 + 0xb0) != 2) {
              func_0x000107c28258();
              func_0x000108666b3c();
              lVar21 = param_1;
              FUN_10866113c();
              puVar6[0x1c] = lVar21;
              plVar23 = *(long **)(param_1 + 0x28);
              func_0x000108666f0c();
              func_0x000108666fb0();
              (**(code **)(*plVar23 + 0x10))(plVar23,0x200,&stack0x00000028);
              if ((*(byte *)(lVar21 + 0x40) & 1) == 0) {
                func_0x000108666adc();
                func_0x00010866693c();
                func_0x000108666d58(0xec);
                func_0x000108666918();
                goto LAB_108660ec0;
              }
              FUN_108664290(&stack0x00000028);
              puVar20 = (undefined8 *)((long)puVar6 + 0x104);
              if (((in_stack_00000058 == '\x01') &&
                  ((long)in_stack_00000030 - (long)in_stack_00000028 == 0x10)) &&
                 (in_stack_00000048 - (long)in_stack_00000040 == 0xc)) {
                uVar18 = *in_stack_00000028;
                *(undefined8 *)((long)puVar6 + 0x10c) = in_stack_00000028[1];
                *puVar20 = uVar18;
                uVar18 = *in_stack_00000040;
                *(undefined4 *)((long)puVar6 + 0x11c) = *(undefined4 *)(in_stack_00000040 + 1);
                *(undefined8 *)((long)puVar6 + 0x114) = uVar18;
                FUN_10866432c(&stack0x00000028);
                uVar18 = param_4;
              }
              else {
                FUN_10866432c(&stack0x00000028);
                plVar23 = *(long **)(param_1 + 0x38);
                (**(code **)(*plVar23 + 0x10))();
                plVar7 = *(long **)(param_1 + 0x38);
                uVar18 = param_4;
                (**(code **)(*plVar7 + 0x18))();
                *puVar20 = plVar23;
                *(undefined8 *)((long)puVar6 + 0x10c) = param_4;
                *(long **)((long)puVar6 + 0x114) = plVar7;
                *(int *)((long)puVar6 + 0x11c) = (int)uVar18;
              }
              uVar8 = *(undefined8 *)(param_1 + 0x38);
              func_0x000107c31e84();
              (*extraout_x8_00)();
              puVar6[0x24] = uVar8;
              puVar6[0x25] = uVar18;
              *(undefined1 *)((long)puVar6 + 0x131) = 1;
              puVar6[0x12] = 0;
              puVar6[0x13] = 0;
              puVar6[0x11] = 0;
              uVar15 = *param_3;
              uVar14 = param_3[1];
              bVar5 = false;
              if (uVar14 - uVar15 != 0) {
                uVar15 = (long)(uVar14 - uVar15) / 0x30;
                if (uVar15 >> 0x3c != 0) {
                  FUN_108664368();
                  goto LAB_108660ec0;
                }
                FUN_10866437c(&stack0x00000028,uVar15,0);
                lVar21 = (long)in_stack_00000030 - (puVar6[0x12] - puVar6[0x11]);
                _memcpy(lVar21);
                in_stack_00000028 = (undefined8 *)puVar6[0x11];
                puVar6[0x11] = lVar21;
                puVar16 = (undefined8 *)puVar6[0x13];
                puVar6[0x13] = in_stack_00000040;
                puVar6[0x12] = in_stack_00000038;
                in_stack_00000030 = in_stack_00000028;
                in_stack_00000038 = in_stack_00000028;
                in_stack_00000040 = puVar16;
                FUN_1086643d4(&stack0x00000028);
                uVar15 = *param_3;
                uVar14 = param_3[1];
                bVar5 = uVar14 - uVar15 == 0x30;
              }
              puVar6[0x1d] = uVar14;
              *(bool *)((long)puVar6 + 0x132) = bVar5;
              *(undefined4 *)(puVar6 + 0x20) = *(undefined4 *)(param_2 + 0xa8);
              ppuVar9 = &PTR___tlv_bootstrap_11340e278;
              (*(code *)PTR___tlv_bootstrap_11340e278)();
              uVar14 = extraout_x8_01;
              while( true ) {
                puVar6[0x1e] = uVar15;
                uVar4 = uVar14 <= uVar15;
                if (uVar15 == uVar14) break;
                puVar10 = (ulong *)0x48;
                __Znwm();
                puVar11 = puVar10;
                func_0x000108666e78();
                if ((bool)uVar4) {
                  func_0x0001086670cc();
                  if (extraout_x11 != 0) {
                    FUN_108664368();
                    goto LAB_108660ec0;
                  }
                  func_0x000108666e58();
                  func_0x000108667164();
                  puVar13 = (ulong *)puVar6[6];
                  *puVar13 = uVar15;
                  puVar13[1] = (ulong)puVar10;
                  puVar13 = puVar13 + 2;
                  puVar10 = (ulong *)(puVar6[5] - (puVar6[0x12] - puVar6[0x11]));
                  puVar11 = puVar10;
                  _memcpy();
                  uVar18 = puVar6[0x11];
                  puVar6[0x11] = puVar10;
                  puVar6[0x12] = puVar13;
                  func_0x000108666c3c(uVar18);
                }
                else {
                  *extraout_x9 = uVar15;
                  extraout_x9[1] = (ulong)puVar10;
                  puVar13 = extraout_x9 + 2;
                }
                puVar6[0x1f] = puVar13;
                func_0x0001086670b4(*(undefined4 *)(puVar6 + 0x20));
                puVar6[0x12] = puVar13;
                func_0x000108666d38(extraout_x11_00[1] - *extraout_x11_00);
                FUN_10866134c(puVar6 + 0x17);
                puVar6[4] = puVar6[0x17];
                do {
                  func_0x00010866694c();
                } while (extraout_w10 != 0);
                func_0x000108666be8(puVar6[4]);
                if ((extraout_w8_05 >> 1 & 1) == 0) {
                  *(undefined1 *)(puVar6 + 0x26) = 0;
                  lVar21 = puVar6[4];
                  puVar22 = *ppuVar9;
                  if (puVar22 == (undefined *)0x0) {
                    func_0x000107c3a5c0();
                    puVar22 = (undefined *)*puVar11;
                  }
                  plVar23 = (long *)(lVar21 + 0x10);
                  do {
                    lVar17 = *plVar23;
                    if (lVar17 == 0) {
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar5) {
                        *plVar23 = 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      bVar5 = cVar2 == '\0';
                      if (bVar5) {
                        uVar4 = 1;
                        func_0x000108666b74();
                        if (bVar5) {
                          func_0x000108666a54();
                          uVar1 = extraout_w8;
                          if ((bool)uVar4) {
                            uVar1 = extraout_w9;
                          }
                          func_0x000108666b10();
                          *(undefined1 *)puVar11 = uVar1;
                          func_0x000108666a2c(0);
                          *(ulong **)(lVar21 + 0x90) = puVar11;
                        }
                        func_0x000108666b5c();
                        *(undefined **)(extraout_x8_02 + 0x20) = puVar22;
                        func_0x000108666a10(*(undefined8 *)(lVar21 + 0x90));
                        *(undefined8 *)(lVar21 + 0x10) = 0;
                        return;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                  } while (((uint)lVar17 >> 1 & 1) == 0);
                }
                func_0x000108667154();
                uVar15 = *puVar11;
                func_0x000108666bd0();
                func_0x000108666b54();
                if ((uVar15 >> 0x20 & 1) != 0) {
                  lVar21 = puVar6[3];
                  goto LAB_108660e4c;
                }
                uVar19 = *(undefined4 *)(*(long *)(puVar6[0x1f] + -8) + 0x18);
                plVar23 = *(long **)(puVar6[0x18] + 0x28);
                puVar6[6] = 0;
                puVar6[7] = 0;
                puVar6[4] = &PTR_FUN_110a609a8;
                puVar6[5] = 0;
                *(undefined4 *)(puVar6 + 8) = 0x205;
                func_0x000107c278b8(puVar6 + 0x14,&UNK_10f4afe60);
                func_0x000107c28af4(uVar19);
                func_0x00010866713c();
                func_0x000108666c64(puVar6[0x1b]);
                FUN_108660fe8();
                func_0x000108666f44();
                (**(code **)(*plVar23 + 0x50))(plVar23,puVar6 + 9);
                lVar21 = puVar6[0x1e];
                func_0x000108666b4c();
                func_0x000108666f3c();
                func_0x000108666c80();
                uVar15 = lVar21 + 0x30;
                uVar14 = puVar6[0x1d];
              }
              lVar21 = puVar6[0x19];
              *(undefined1 *)(puVar6[0x1b] + 0x48) = *(undefined1 *)((long)puVar6 + 0x131);
              func_0x000108666f2c();
              func_0x000108666b3c();
              FUN_108667c48(puVar6 + 4,puVar20,(long)puVar6 + 0x114,
                            *(ulong *)(lVar21 + 0x60) & 0xfffffffffffffffc);
              plVar23 = *(long **)(puVar6[0x18] + 0x28);
              func_0x000108666f0c();
              func_0x000108666fb0();
              (**(code **)(*plVar23 + 0x10))(plVar23,0x201,&stack0x00000028);
              if ((*(byte *)(puVar6 + 7) & 1) == 0) {
                uVar19 = 0x2000f0;
LAB_108660eb0:
                func_0x000108666adc();
                func_0x00010866693c();
                *(undefined4 *)(plVar23 + 1) = uVar19;
                func_0x000108666918();
LAB_108660ec0:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x108660ec4);
                (*pcVar3)();
              }
              lVar21 = puVar6[0x18];
              func_0x000108666f2c();
              func_0x000108666b3c();
              if ((*(byte *)(lVar21 + 0xf0) & 1) == 0) {
                lVar17 = *(long *)puVar6[0x1c];
                FUN_108657b48(&stack0x00000028,lVar17,((long *)puVar6[0x1c])[1] - lVar17);
                plVar23 = (long *)(lVar21 + 0xd8);
                func_0x0001052b2b60(plVar23,&stack0x00000028);
                func_0x00010866718c();
                if ((*(byte *)(lVar21 + 0xf0) & 1) == 0) {
                  uVar19 = 0x2000f2;
                  goto LAB_108660eb0;
                }
              }
              func_0x000108667078();
              uVar18 = *(undefined8 *)(lVar21 + 0xd8);
              uVar19 = *(undefined4 *)(extraout_x9_00 + 0x30);
              func_0x00010539283c(extraout_x8_03 + 0x60);
              lVar21 = puVar6[0x19];
              FUN_108655060();
              func_0x0001086649e8();
              if ((*(ulong *)(lVar21 + 8) & 1) != 0) {
                func_0x000108666c58();
              }
              func_0x000108666eec(lVar21 + 0x28,puVar20);
              if ((*(ulong *)(lVar21 + 8) & 1) != 0) {
                func_0x000108666c58();
              }
              func_0x0001086671f0(lVar21 + 0x10);
              if ((*(ulong *)(lVar21 + 8) & 1) != 0) {
                func_0x000108666c58();
              }
              func_0x000108666eec(lVar21 + 0x18,puVar6 + 0x24);
              if ((*(ulong *)(lVar21 + 8) & 1) != 0) {
                func_0x000108666c58();
              }
              func_0x00010539283c(lVar21 + 0x20,uVar18);
              *(undefined4 *)(lVar21 + 0x30) = uVar19;
              puVar16 = (undefined8 *)puVar6[0x12];
              for (puVar20 = (undefined8 *)puVar6[0x11]; puVar20 != puVar16; puVar20 = puVar20 + 2)
              {
                func_0x000108655070(*puVar20);
                puVar20[1] = 0;
                FUN_1089088c8();
              }
              plVar23 = *(long **)(puVar6[0x18] + 0x28);
              func_0x000108666f0c();
              func_0x000108666fb0();
              (**(code **)(*plVar23 + 0x10))(plVar23,0x204,&stack0x00000028);
              func_0x000108666be0();
              func_0x000108666ebc();
              goto LAB_108660e74;
            }
            func_0x00010866706c();
            iVar12 = extraout_w8_00 + 0xb;
          }
          else {
            func_0x00010866706c();
            iVar12 = extraout_w8_04 + 7;
          }
        }
        else {
          iVar12 = 0x1f00de;
        }
      }
    }
    else {
      func_0x00010866706c();
      iVar12 = extraout_w8_02 + -2;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_108660824;
LAB_108660884:
    func_0x00010866706c();
    iVar12 = extraout_w8_01 + -3;
  }
  FUN_1086610e8(puVar6 + 2,iVar12);
  goto LAB_1086608bc;
  while (((uint)in_stack_00000028 >> 1 & 1) == 0) {
LAB_108660e4c:
    in_stack_00000028 = (undefined8 *)0x0;
    lVar17 = lVar21 + 0x10;
    func_0x000108666ab8(lVar17,&stack0x00000028);
    if ((int)lVar17 != 0) {
      func_0x000108666b94();
      break;
    }
  }
  func_0x0001086671cc();
LAB_108660e74:
  func_0x000108666e18();
LAB_1086608bc:
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 108660f60; end: 108660f9b;  */

long FUN_108660f60(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108666cd8();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108666d04();
  func_0x000108667260();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108660f90);
  (*pcVar1)();
}



/* Entry: 108660f9c; end: 108660fe7;  */

undefined8 FUN_108660f9c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31e78(param_1,PTR_DAT_113268c80);
  func_0x000108666b84((uint)param_2 & 0xcf);
  func_0x000108667248();
  func_0x00010866695c();
  return param_2;
}



/* Entry: 108660fe8; end: 108661043;  */

void FUN_108660fe8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x000108666d24();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108666d10();
  }
  else {
    func_0x000108666d7c();
  }
  func_0x000107c31e78();
  if (unaff_w20 < 0x2b8) {
    func_0x000108666b84();
  }
  else {
    func_0x000108666d64();
  }
  func_0x000108666cf8();
  func_0x00010866695c();
  return;
}



/* Entry: 108661044; end: 10866109f;  */

void FUN_108661044(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x000108666d24();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108666d10();
  }
  else {
    func_0x000108666d7c();
  }
  func_0x000107c31e78();
  if (unaff_w20 < 0x2b8) {
    func_0x000108666b84();
  }
  else {
    func_0x000108666d64();
  }
  func_0x000108666cf8();
  func_0x00010866695c();
  return;
}



/* Entry: 1086610a0; end: 1086610e7;  */

void FUN_1086610a0(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_18;
  
  lStack_18 = param_2;
  if (param_2 == 0) {
    lStack_18 = 0;
  }
  else {
    do {
      func_0x00010866694c();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_18;
  lStack_18 = 0;
  func_0x000107c27f9c(&lStack_18);
  return;
}



/* Entry: 1086610e8; end: 10866113b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1086610e8(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uStack_38;
  
  plVar5 = (long *)(param_1 + 8);
  lVar6 = *plVar5;
  do {
    func_0x000108666a64();
    if ((int)param_1 != 0) {
      *(undefined4 *)(lVar6 + 0x98) = param_2;
      *(undefined1 *)(lVar6 + 0x9c) = 1;
      func_0x0001086669d0();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *plVar5 = 0;
  return;
}



/* Entry: 10866113c; end: 108661347;  */

long FUN_10866113c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *extraout_x8;
  byte bVar8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  char cStack_38;
  
  if (*(char *)(param_1 + 0x170) == '\x01') {
    lVar5 = *(long *)(param_1 + 0x48);
    func_0x000107c31e84();
    (*extraout_x8)();
    bVar8 = *(byte *)(param_1 + 0x170) ^ 1 | *(long *)(param_1 + 0x168) <= lVar5;
  }
  else {
    bVar8 = 0;
  }
  if ((*(char *)(param_1 + 0xd0) == '\x01') && ((bVar8 & 1) == 0)) goto LAB_108661318;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(&lStack_70);
  if (cStack_38 == '\x01') {
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      uVar6 = param_1 + 0xa8;
      func_0x0001006760a8(uVar6,&uStack_58);
      if ((uVar6 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x48))(*(long **)(param_1 + 0x28),0x20b,1);
        if (*(char *)(param_1 + 0xd0) == '\x01') {
          func_0x000108664a84(param_1 + 0x90);
          *(undefined1 *)(param_1 + 0xd0) = 0;
        }
        goto LAB_10866120c;
      }
    }
    else {
LAB_10866120c:
      func_0x0001052b2bac(param_1 + 0xd8);
      func_0x0001086641e4(param_1 + 0x118);
      func_0x000108664220(*(undefined8 *)(param_1 + 0x108));
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(long *)(param_1 + 0x100) = param_1 + 0x108;
      FUN_10866409c(param_1 + 0x130);
      lVar7 = lStack_70;
      FUN_108657e30(lStack_70,lStack_68 - lStack_70);
      FUN_108657b48(&lStack_b0,lStack_70,lStack_68 - lStack_70);
      func_0x0001052b2b60(param_1 + 0xd8,&lStack_b0);
      func_0x000108667218();
      uVar4 = uStack_48;
      uVar3 = uStack_50;
      uStack_98 = uStack_58;
      uVar2 = uStack_60;
      lVar1 = lStack_68;
      lVar5 = lStack_70;
      lStack_b0 = lStack_70;
      lStack_a8 = lStack_68;
      lStack_70 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_a0 = uVar2;
      uStack_90 = uStack_50;
      uStack_88 = uStack_48;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_78 = (undefined1)((ulong)lVar7 >> 0x20);
      uStack_7c = (undefined4)lVar7;
      uStack_80 = uStack_40;
      if (*(char *)(param_1 + 0xd0) == '\x01') {
        func_0x000107c3194c(param_1 + 0x90,&lStack_b0);
        func_0x000107c3194c(param_1 + 0xa8,&uStack_98);
        func_0x000108667354();
      }
      else {
        *(long *)(param_1 + 0x90) = lVar5;
        *(long *)(param_1 + 0x98) = lVar1;
        lStack_a8 = 0;
        uStack_a0 = 0;
        lStack_b0 = 0;
        *(undefined8 *)(param_1 + 0xa0) = uVar2;
        *(undefined8 *)(param_1 + 0xa8) = uStack_98;
        *(undefined8 *)(param_1 + 0xb0) = uVar3;
        *(undefined8 *)(param_1 + 0xb8) = uVar4;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        func_0x000108667354();
        *(undefined1 *)(param_1 + 0xd0) = 1;
      }
      func_0x000108664a84(&lStack_b0);
    }
    if (((bVar8 & 1) != 0) && (*(char *)(param_1 + 0x170) == '\x01')) {
      *(undefined1 *)(param_1 + 0x170) = 0;
    }
  }
  FUN_1086566c8(&lStack_70);
LAB_108661318:
  return param_1 + 0x90;
}



/* Entry: 108661348; end: 10866134b;  */

void FUN_108661348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10866134c; end: 108661d57;  */

void FUN_10866134c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,int param_7,undefined1 param_8,int param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  undefined ***pppuVar19;
  ulong uVar20;
  int extraout_w8;
  int extraout_w8_00;
  int iVar21;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined **ppuVar22;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  uint extraout_w9;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined **ppuVar23;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long lVar24;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  int extraout_w10_07;
  uint extraout_w10_08;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined **ppuStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  long alStack_218 [6];
  byte bStack_1e8;
  undefined8 uStack_1a0;
  char cStack_70;
  
  puVar13 = (undefined8 *)0x320;
  __Znwm();
  *puVar13 = FUN_108665bf8;
  puVar13[1] = FUN_108666074;
  puVar13[0x61] = param_11;
  puVar13[0x60] = param_10;
  *(undefined1 *)((long)puVar13 + 0x319) = param_8;
  puVar13[0x5f] = param_5;
  puVar13[0x5e] = param_4;
  puVar13[0x5d] = param_3;
  puVar13[0x5c] = param_2;
  func_0x000108666efc();
  FUN_1086610a0(param_1,puVar13[2]);
  bVar9 = *(int *)(param_6 + 0x28) == 1;
  if (!bVar9) {
    func_0x000108666bd8(puVar13 + 2,0xdf);
    goto LAB_108661608;
  }
  func_0x000108666fc0(*(undefined8 *)(*(long *)(param_6 + 0x20) + 0x18));
  uVar5 = extraout_x9;
  if (!bVar9) {
    uVar5 = extraout_x8;
  }
  func_0x000100696384(puVar13 + 0x53,uVar5);
  FUN_10885edd8(&ppuStack_3d8,*(undefined8 *)(param_2 + 8),puVar13 + 0x53);
  FUN_108663a10(alStack_218,&ppuStack_3d8);
  FUN_108656820(&ppuStack_3d8);
  if ((bStack_1e8 & 1) == 0) {
    *(undefined1 *)(puVar13 + 4) = 0;
    *(undefined1 *)(puVar13 + 0x3e) = 0;
  }
  else {
    func_0x000107c29f64(puVar13 + 4,*(undefined8 *)(param_2 + 8),alStack_218,1);
  }
  plVar14 = alStack_218;
  FUN_1086569a0();
  if ((*(byte *)(puVar13 + 0x3e) & 1) == 0) {
    func_0x000108666adc();
    func_0x00010866693c();
    func_0x000108666d58(0xea);
    func_0x000108666918();
    goto LAB_108661c54;
  }
  if ((*(int *)((long)puVar13 + 0x13c) != 8) && (*(int *)((long)puVar13 + 0x13c) != 7)) {
    *(bool *)(param_12 + 0x68) = *(int *)(puVar13 + 0x25) == 1;
    func_0x00010866700c();
    *(byte *)(extraout_x12 + 0x69) =
         *(byte *)(extraout_x12 + 0x69) & *(byte *)(extraout_x9_00 + 0x10);
    func_0x00010866700c();
    if (*(int *)(extraout_x9_01 + 0x1c) == 1) {
      ppuVar23 = *(undefined ***)(extraout_x9_01 + 0x10);
    }
    else {
      ppuVar23 = &PTR_PTR_11326be60;
    }
    lVar24 = extraout_x12_00;
    iVar21 = extraout_w8;
    if (((*(char *)((long)ppuVar23 + 0x22) != '\x01') ||
        (func_0x00010866700c(), lVar24 = extraout_x12_01, iVar21 = extraout_w8_00, param_7 == 0)) ||
       ((*(byte *)(extraout_x9_02 + 0x18) & 1) == 0)) {
      puVar1 = puVar13 + 0x3f;
      puVar15 = puVar13 + 0x44;
      if (iVar21 == 1) {
        uVar10 = *(uint *)(puVar13 + 0xb) == 10;
        if ((*(uint *)(puVar13 + 0xb) < 0xb) && (param_9 == 0)) {
          func_0x0001086672b0();
          FUN_108661dac();
          *puVar1 = *puVar15;
          do {
            func_0x00010866694c();
          } while (extraout_w10 != 0);
          func_0x000108666be8(*puVar1);
          if ((extraout_w8_01 >> 1 & 1) == 0) {
            *(undefined1 *)(puVar13 + 99) = 0;
            func_0x00010866692c();
            if (*plVar14 == 0) {
              func_0x000107c3a5c0();
            }
            func_0x000108666f7c();
            plVar14 = extraout_x8_00;
            do {
              if (*plVar14 == 0) {
                func_0x000108666a88();
                plVar14 = extraout_x8_02;
                uVar11 = extraout_w10_01;
                uVar25 = extraout_x11_00;
              }
              else {
                func_0x000108666c88();
                plVar14 = extraout_x8_01;
                uVar11 = extraout_w10_00;
                uVar25 = extraout_x11;
              }
              if ((uVar25 & 1) != 0) {
LAB_108661a48:
                func_0x000108666cac();
                if ((bool)uVar10) {
                  func_0x000108666a54();
                  func_0x000108666978();
                  func_0x000108666a40();
                  func_0x000108666fd0();
                }
                func_0x000108666988();
                return;
              }
            } while ((uVar11 >> 1 & 1) == 0);
          }
          puVar15 = puVar1;
          FUN_108660f60();
          uVar25 = *puVar15;
LAB_108661768:
          func_0x000107c27f9c(puVar1);
          func_0x000108666ca4();
          if ((uVar25 >> 0x20 & 1) == 0) {
            FUN_108661d58();
          }
          else {
            FUN_108662958(puVar13 + 2,uVar25);
          }
          goto LAB_108661600;
        }
      }
      else if (iVar21 == 0) {
        puVar2 = puVar13 + 0x56;
        puVar18 = puVar13 + 0x59;
        uVar25 = puVar13[10];
        puVar3 = puVar13 + 0x5a;
        uVar10 = (uVar25 & 1) == 0;
        puVar17 = puVar13 + 10;
        if (!(bool)uVar10) {
          puVar17 = (ulong *)(uVar25 + 7);
        }
        lVar26 = (long)*(int *)(puVar13 + 0xb) << 3;
LAB_108661668:
        if (lVar26 != 0) goto code_r0x00010866166c;
        plVar14 = puVar13 + 0x53;
        func_0x0001006760a8(plVar14,param_2 + 0x70);
        if ((int)plVar14 != 0) {
          func_0x0001086672b0();
          FUN_1086625c4();
          *puVar1 = *puVar15;
          do {
            func_0x00010866694c();
          } while (extraout_w10_02 != 0);
          func_0x000108666be8(*puVar1);
          if ((extraout_w8_02 >> 1 & 1) == 0) {
            *(undefined1 *)(puVar13 + 99) = 1;
            func_0x00010866692c();
            if (*plVar14 == 0) {
              func_0x000107c3a5c0();
            }
            func_0x000108666f7c();
            plVar14 = extraout_x8_03;
            do {
              if (*plVar14 == 0) {
                func_0x000108666a88();
                plVar14 = extraout_x8_05;
                uVar11 = extraout_w10_04;
                uVar25 = extraout_x11_02;
              }
              else {
                func_0x000108666c88();
                plVar14 = extraout_x8_04;
                uVar11 = extraout_w10_03;
                uVar25 = extraout_x11_01;
              }
              if ((uVar25 & 1) != 0) goto LAB_108661a48;
            } while ((uVar11 >> 1 & 1) == 0);
          }
          puVar15 = puVar1;
          FUN_108660f60();
          uVar25 = *puVar15;
          goto LAB_108661768;
        }
        func_0x000108666adc();
        func_0x00010866693c();
        *(undefined4 *)(plVar14 + 1) = 0x2000eb;
        func_0x000108666918();
        goto LAB_108661c54;
      }
    }
  }
LAB_1086615fc:
  FUN_1086610e8();
  goto LAB_108661600;
code_r0x00010866166c:
  uVar25 = *puVar17;
  ppuVar22 = *(undefined ***)(uVar25 + 0x18);
  uVar10 = ppuVar22 == (undefined **)0x0;
  ppuVar23 = &PTR_PTR_11326cb58;
  if (!(bool)uVar10) {
    ppuVar23 = ppuVar22;
  }
  uVar27 = param_2 + 0x58;
  func_0x0001006933e4(uVar27,ppuVar23);
  lVar26 = lVar26 + -8;
  puVar17 = puVar17 + 1;
  if ((uVar27 & 1) == 0) goto code_r0x000108661694;
  goto LAB_108661668;
code_r0x000108661694:
  ppuVar22 = *(undefined ***)(uVar25 + 0x18);
  puVar13[0x62] = ppuVar22;
  ppuVar23 = &PTR_PTR_11326cb58;
  if (ppuVar22 != (undefined **)0x0) {
    ppuVar23 = ppuVar22;
  }
  ppuVar22 = ppuVar23;
  FUN_1086a5fbc();
  if ((int)ppuVar22 != 0) {
    func_0x000108666c94();
    goto LAB_1086615fc;
  }
  uVar10 = param_7 == 1;
  if (((bool)uVar10) && ((*(byte *)(lVar24 + 0x78) & 1) != 0)) {
    FUN_108862de8(&ppuStack_3d8,*(undefined8 *)(param_2 + 8),puVar13 + 0x53,
                  *(undefined8 *)(lVar24 + 0x70));
    func_0x0001006b90c8(alStack_218,&ppuStack_3d8);
    func_0x0001006928f0(&ppuStack_3d8);
    uVar10 = cStack_70 == '\x01';
    if ((!(bool)uVar10) ||
       ((func_0x000108667374(uStack_1a0), -1 < *(char *)(extraout_x8_06 + 0x10) ||
        ((*(byte *)(*(long *)(extraout_x8_06 + 0xa0) + 0x10) & 1) == 0)))) {
      func_0x0001006928bc(alStack_218);
      goto LAB_108661804;
    }
    func_0x000108666c94();
    FUN_1086610e8();
    func_0x0001006928bc(alStack_218);
  }
  else {
LAB_108661804:
    func_0x000100696384(puVar15,ppuVar23);
    plVar14 = (long *)(param_2 + 0x18);
    FUN_1086682a4(puVar18,plVar14,puVar15);
    *puVar2 = *puVar18;
    do {
      func_0x00010866694c();
    } while (extraout_w10_05 != 0);
    func_0x000108666be8(*puVar2);
    if ((extraout_w8_03 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar13 + 99) = 2;
      func_0x00010866692c();
      if (*plVar14 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108666f7c();
      plVar14 = extraout_x8_07;
      lVar24 = extraout_x9_03;
      do {
        if (*plVar14 == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar24;
            cVar7 = ExclusiveMonitorsStatus();
          }
          uVar10 = cVar7 == '\0';
          uVar25 = (ulong)-(uint)(byte)uVar10;
          uVar11 = 0;
        }
        else {
          func_0x000108666c88();
          plVar14 = extraout_x8_08;
          lVar24 = extraout_x9_04;
          uVar25 = extraout_x11_03;
          uVar11 = extraout_w10_06;
        }
        if ((uVar25 & 1) != 0) goto LAB_108661a48;
      } while ((uVar11 >> 1 & 1) == 0);
    }
    puVar16 = puVar2;
    FUN_10866291c(puVar2);
    FUN_10865a17c(puVar1,puVar16);
    func_0x000108666ca4();
    func_0x000108666f64();
    puVar17 = puVar15;
    func_0x000107c27914();
    iVar21 = (int)*puVar1;
    if (iVar21 == 1) {
      if ((*(char *)(puVar13 + 0x43) != '\x01') || (puVar13[0x40] == puVar13[0x41])) {
LAB_108661bb4:
        func_0x000108666adc();
        func_0x00010866693c();
        *(undefined4 *)(puVar17 + 1) = 0x2000ee;
        func_0x000108666918();
LAB_108661c54:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x108661c58);
        (*pcVar8)();
      }
LAB_108661908:
      uVar10 = 0;
      puVar13[0x57] = 0;
      puVar13[0x58] = 0;
      *puVar2 = 0;
      plVar14 = (long *)(puVar13[0x5c] + 0x18);
      FUN_1086682a4(puVar3,plVar14,puVar13[0x5c] + 0x58);
      *puVar18 = *puVar3;
      do {
        func_0x00010866694c();
      } while (extraout_w10_07 != 0);
      func_0x000108666be8(*puVar18);
      if ((extraout_w8_04 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar13 + 99) = 3;
        func_0x00010866692c();
        if (*plVar14 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108666f7c();
        plVar14 = extraout_x8_09;
        lVar24 = extraout_x9_05;
        do {
          if (*plVar14 == 0) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar24;
              cVar7 = ExclusiveMonitorsStatus();
            }
            uVar10 = cVar7 == '\0';
            uVar25 = (ulong)-(uint)(byte)uVar10;
            uVar11 = 0;
          }
          else {
            func_0x000108666c88();
            plVar14 = extraout_x8_10;
            lVar24 = extraout_x9_06;
            uVar25 = extraout_x11_04;
            uVar11 = extraout_w10_08;
          }
          if ((uVar25 & 1) != 0) goto LAB_108661a48;
        } while ((uVar11 >> 1 & 1) == 0);
      }
      FUN_10866291c(puVar18);
      FUN_10865a17c(puVar15,puVar18);
      uVar6 = 0x30011;
      func_0x000108666f64();
      func_0x000107c27f9c(puVar3);
      func_0x00010866709c();
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      ppuStack_3d8 = &PTR_FUN_110a609a8;
      lStack_3d0 = 0;
      uStack_3b8 = 0x1fb;
      uVar4 = uVar6;
      if ((extraout_w8_05 & extraout_w9) == 0) {
        uVar4 = 0x30012;
      }
      pppuVar19 = &ppuStack_3d8;
      FUN_108659af8(pppuVar19,uVar4);
      func_0x000107c2884c(puVar13 + 0x49,pppuVar19);
      func_0x000108667368();
      func_0x000108666f1c();
      func_0x000107c2882c(puVar13 + 0x49);
      func_0x000108667294();
      if ((extraout_w8_05 & extraout_w9 & 1) != 0) {
        FUN_10865a5a8(puVar2,puVar13 + 0x45);
      }
      uVar25 = puVar13[0x56];
      uVar27 = puVar13[0x57];
      do {
        if (uVar25 == uVar27) {
          ppuStack_3d8 = (undefined **)0x0;
          lStack_3d0 = 0;
          uStack_3c8 = 0;
          FUN_108662340(puVar2,puVar13[0x5f],&ppuStack_3d8,puVar13[0x5f] + 0x30);
          uVar11 = (uint)&ppuStack_3d8;
          func_0x000107c27914();
          break;
        }
        uVar20 = uVar25;
        func_0x0001006760a8();
        uVar11 = (uint)uVar20;
        uVar25 = uVar25 + 0x38;
      } while ((uVar20 & 1) == 0);
      func_0x0001086671e4();
      uVar12 = uVar11;
      func_0x0001086671c0();
      uVar10 = (uVar11 & uVar12) == 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      ppuStack_3d8 = &PTR_FUN_110a609a8;
      lStack_3d0 = 0;
      uStack_3b8 = 0x1fc;
      if ((bool)uVar10) {
        uVar6 = 0x30012;
      }
      pppuVar19 = &ppuStack_3d8;
      FUN_108659af8(pppuVar19,uVar6);
      func_0x000108666af4();
      func_0x000107c2884c(puVar13 + 0x4e,pppuVar19);
      func_0x000108667368();
      func_0x000108666f1c();
      func_0x000107c2882c(puVar13 + 0x4e);
      func_0x000108667294();
      if (((uVar11 & uVar12 & 1) == 0) && (func_0x00010866730c(), (bool)uVar10)) {
        func_0x000108666c94();
        FUN_1086610e8();
      }
      else {
        ppuVar23 = &PTR_PTR_11326cb58;
        if ((undefined **)puVar13[0x62] != (undefined **)0x0) {
          ppuVar23 = (undefined **)puVar13[0x62];
        }
        pppuVar19 = &ppuStack_3d8;
        func_0x00010865ed24(pppuVar19,ppuVar23);
        func_0x0001086669f8();
        FUN_108662450();
        func_0x0001086669f8();
        ppuStack_3d8 = pppuVar19[0xb];
        lStack_3d0 = (long)pppuVar19[0xc] - (long)ppuStack_3d8;
        FUN_108662450();
        func_0x000108666be0();
      }
      func_0x000108666f04();
      FUN_108648f44(puVar2);
    }
    else {
      if (iVar21 != 2) {
        if (iVar21 == 0) goto LAB_108661bb4;
        goto LAB_108661908;
      }
      func_0x000108666c94();
      FUN_1086610e8();
    }
    func_0x000108666dd0();
  }
LAB_108661600:
  func_0x000108666dc0();
  func_0x000108666e28();
LAB_108661608:
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 108661d58; end: 108661dab;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108661d58(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint in_stack_ffffffffffffffd8;
  
  plVar5 = (long *)(param_1 + 8);
  lVar6 = *plVar5;
  do {
    func_0x000108666a64();
    if ((int)param_1 != 0) {
      *(undefined1 *)(lVar6 + 0x98) = 0;
      *(undefined1 *)(lVar6 + 0x9c) = 0;
      func_0x0001086669d0(1);
      break;
    }
  } while ((in_stack_ffffffffffffffd8 >> 1 & 1) == 0);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *plVar5 = 0;
  return;
}



/* Entry: 108661dac; end: 108662303;  */

void FUN_108661dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint extraout_w8;
  undefined8 *puVar15;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar17;
  ulong *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar10 = (undefined8 *)0x128;
  __Znwm();
  *puVar10 = FUN_10866569c;
  puVar10[1] = FUN_10866597c;
  puVar10[0x20] = param_6;
  puVar10[0x21] = param_7;
  puVar10[0x1e] = param_3;
  puVar10[0x1f] = param_4;
  puVar10[0x1c] = param_1;
  puVar10[0x1d] = param_2;
  func_0x000108666efc();
  func_0x0001086671a8();
  uVar23 = *(undefined8 *)(param_1 + 0x28);
  puVar15 = puVar10 + 4;
  puVar10[5] = *(undefined8 *)(param_1 + 0x30);
  *puVar15 = uVar23;
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x000107c31e68();
    } while (extraout_w10 != 0);
  }
  puVar10[6] = 0;
  puVar10[7] = 0;
  *(undefined1 *)(puVar10 + 8) = 0;
  *(undefined1 *)(puVar10 + 9) = 0;
  *(undefined1 *)((long)puVar10 + 0x4c) = 0;
  FUN_108681a98(puVar15,0x202);
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0x22] = 0;
  puVar10[0x23] = 0;
  uVar9 = (*param_5 & 1) == 0;
  uVar8 = 0;
  puVar18 = param_5;
  if (!(bool)uVar9) {
    puVar18 = (ulong *)(*param_5 + 7);
  }
  lVar21 = (long)(int)param_5[1] << 3;
  while (lVar21 != 0) {
    uVar8 = 1;
    uVar9 = *(undefined ***)(*puVar18 + 0x18) == (undefined **)0x0;
    ppuVar1 = &PTR_PTR_11326cb58;
    if (!(bool)uVar9) {
      ppuVar1 = *(undefined ***)(*puVar18 + 0x18);
    }
    func_0x000100696384(puVar10 + 0x12,ppuVar1);
    func_0x000107c29ee4(&lStack_88,puVar10 + 0x12);
    plVar20 = &lStack_88;
    FUN_1086a5fbc();
    func_0x000107c2a2e0(&lStack_88);
    if ((int)plVar20 == 0) {
      puVar11 = puVar10 + 0x22;
      func_0x000108659f30(puVar11,puVar10 + 0x12);
      if ((int)puVar11 != 0) {
        func_0x000108666adc();
        func_0x00010866693c();
        func_0x000108666d58(0xeb);
        func_0x000108666918();
        goto LAB_108662260;
      }
      FUN_108847238(&lStack_88,puVar10 + 0x12);
      func_0x000108648150(puVar10 + 0xf,&lStack_88);
      func_0x000108666bb8();
    }
    else {
      FUN_1086610e8(puVar10 + 2,0x1f00e1);
    }
    func_0x000107c27914(puVar10 + 0x12);
    puVar18 = puVar18 + 1;
    lVar21 = lVar21 + -8;
    if (((ulong)plVar20 & 1) != 0) goto LAB_10866219c;
  }
  plVar20 = (long *)(param_1 + 0x18);
  FUN_1086683d8(puVar10 + 0x18,plVar20,puVar10 + 0xf);
  puVar10[0x12] = puVar10[0x18];
  do {
    func_0x00010866694c();
  } while (extraout_w10_00 != 0);
  func_0x000108666be8(puVar10[0x12]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar10 + 0x24) = 0;
    func_0x00010866692c();
    if (*plVar20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108666f7c();
    plVar20 = extraout_x8;
    do {
      if (*plVar20 == 0) {
        func_0x000108666a88();
        plVar20 = extraout_x8_01;
        uVar6 = extraout_w10_02;
        uVar17 = extraout_w11_00;
      }
      else {
        func_0x000108666c88();
        plVar20 = extraout_x8_00;
        uVar6 = extraout_w10_01;
        uVar17 = extraout_w11;
      }
      if ((uVar17 & 1) != 0) {
        func_0x000108666cac();
        if ((bool)uVar9) {
          func_0x000108666a54();
          func_0x000108666978();
          func_0x000108666a40();
          func_0x000108666fd0();
        }
        func_0x000108666988();
        return;
      }
    } while ((uVar6 >> 1 & 1) == 0);
  }
  puVar11 = puVar10 + 0x12;
  FUN_108662304(puVar11);
  FUN_1086644a4(puVar10 + 0x15,puVar11);
  func_0x000108666f54();
  func_0x000108666e30();
  lVar21 = puVar10[0x15];
  lVar2 = puVar10[0x16];
  func_0x0001086670e4(lVar2 - lVar21);
  if (!(bool)uVar8 || (bool)uVar9) {
    lVar16 = puVar10[0x1f];
    lVar22 = puVar10[0x1c];
    func_0x000108666dac();
    for (; lVar21 != lVar2; lVar21 = lVar21 + 0x40) {
      lVar19 = lVar21;
      FUN_108847298(puVar10 + 0x18);
      iVar4 = *(int *)(lVar21 + 0x18);
      if (iVar4 == 1) {
        if ((*(char *)(lVar21 + 0x38) != '\x01') ||
           (*(long *)(lVar21 + 0x20) == *(long *)(lVar21 + 0x28))) {
          func_0x000108666adc();
          func_0x00010866693c();
          *(undefined4 *)(lVar19 + 8) = 0x2000ee;
          func_0x000108666918();
LAB_108662260:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x108662264);
          (*pcVar7)();
        }
      }
      else if ((iVar4 == 0) || (iVar4 == 2)) {
        func_0x000108666968();
        func_0x000108666d50();
        goto LAB_108662198;
      }
      puVar11 = puVar10 + 0x18;
      func_0x0001006760a8(puVar11,lVar22 + 0x58);
      if ((int)puVar11 != 0) {
        uVar13 = *(ulong *)(lVar21 + 0x20);
        uVar3 = *(ulong *)(lVar21 + 0x28);
        do {
          if (uVar13 == uVar3) {
            lStack_88 = 0;
            lStack_80 = 0;
            uStack_78 = 0;
            FUN_108662340((ulong *)(lVar21 + 0x20),puVar10[0x1f],&lStack_88,lVar16 + 0x30);
            func_0x000108666bb8();
            break;
          }
          uVar12 = uVar13;
          func_0x0001006760a8();
          uVar13 = uVar13 + 0x38;
        } while ((uVar12 & 1) == 0);
      }
      lVar19 = puVar10[0x1c];
      uVar13 = *(ulong *)(lVar21 + 0x20);
      FUN_108662428(uVar13,*(undefined8 *)(lVar21 + 0x28));
      plVar20 = *(long **)(lVar19 + 0x28);
      lStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0x1fc;
      uVar5 = 0x30011;
      if ((int)uVar13 == 0) {
        uVar5 = 0x30012;
      }
      plVar14 = &lStack_88;
      lStack_88 = extraout_x8_02 + 0x10;
      FUN_108659af8(plVar14,uVar5);
      func_0x000108667268();
      func_0x000107c2884c(puVar10 + 10,plVar14);
      func_0x0001086671fc(*(undefined8 *)(*plVar20 + 0x50));
      func_0x000108666f74();
      func_0x000108666ecc();
      if ((uVar13 & 1) == 0) {
        *(undefined1 *)puVar10[0x20] = 0;
      }
      func_0x000108666d50();
    }
    FUN_108681a98(puVar15,0x203);
    lVar2 = puVar10[0x16];
    for (lVar21 = puVar10[0x15]; lVar21 != lVar2; lVar21 = lVar21 + 0x40) {
      FUN_108847298(&lStack_88,lVar21);
      lStack_90 = lStack_80 - lStack_88;
      lStack_98 = lStack_88;
      FUN_108662450(puVar10[0x1c],puVar10[0x1d],puVar10[0x1e],puVar10[0x1f],&lStack_98,
                    *(undefined8 *)(lVar21 + 0x20),*(undefined8 *)(lVar21 + 0x28),puVar10[0x21]);
      func_0x000108666bb8();
    }
    func_0x000108681b7c(puVar15);
    func_0x000108666be0();
  }
  else {
    func_0x000108666968();
  }
LAB_108662198:
  func_0x000108666f5c();
LAB_10866219c:
  func_0x000108666db8();
  func_0x000107c288a4(puVar15);
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 108662304; end: 10866233f;  */

long FUN_108662304(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108666cd8();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108666d04();
  func_0x000108667260();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108662334);
  (*pcVar1)();
}



/* Entry: 108662340; end: 108662427;  */

void FUN_108662340(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x000108666ed4(uVar3);
    lVar2 = uVar3 + 0x38;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_1086495d8(param_1,(long)(uVar3 - *param_1) / 0x38 + 1);
    FUN_10864933c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x38,param_1 + 2);
    func_0x000108666ed4(lStack_58);
    lStack_58 = lStack_58 + 0x38;
    FUN_1086492b0(param_1,auStack_68);
    lVar2 = param_1[1];
    func_0x00010864956c(auStack_68);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108662428; end: 10866244f;  */

bool FUN_108662428(long param_1,long param_2)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    if (lVar1 == param_2) break;
    param_1 = lVar1 + 0x38;
  } while (9 < *(int *)(lVar1 + 0x30));
  return lVar1 == param_2;
}



/* Entry: 108662450; end: 1086625c3;  */

void FUN_108662450(void)

{
  code *pcVar1;
  long *plVar2;
  long *in_x5;
  long *in_x6;
  long in_x7;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long *plVar3;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  byte in_stack_00000058;
  
  func_0x00010866739c();
  func_0x00010866703c();
  while( true ) {
    if (in_x5 == in_x6) {
      return;
    }
    plVar2 = (long *)(unaff_x26 + 0x130);
    func_0x000108667178();
    plVar3 = plVar2;
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)*in_x5;
      FUN_108657bec(&stack0x00000040,plVar2,in_x5[1] - (long)plVar2,*(long *)(unaff_x23 + 0x18),
                    *(long *)(unaff_x23 + 0x20) - *(long *)(unaff_x23 + 0x18));
      if (in_stack_00000058 == 1) {
        plVar2 = (long *)(unaff_x26 + 0x130);
        func_0x000108667170();
        plVar3 = plVar2;
      }
      else {
        plVar3 = (long *)0x0;
      }
      func_0x000108667204();
    }
    if (((plVar3 == (long *)0x0) || (in_x5[1] - *in_x5 != 0x41)) || (plVar3[1] - *plVar3 != 0x20))
    break;
    plVar2 = unaff_x25;
    FUN_108667d54(&stack0x00000040);
    if ((in_stack_00000058 & 1) == 0) goto LAB_108662590;
    FUN_10865f14c(in_x7 + 0x10);
    func_0x000108667e14();
    func_0x000108667204();
    in_x5 = in_x5 + 7;
  }
  func_0x000108666adc();
  func_0x00010866693c();
  func_0x000108666d58(0xef);
  func_0x000108666918();
LAB_108662590:
  func_0x000108666adc();
  func_0x00010866693c();
  *(undefined4 *)(plVar2 + 1) = 0x2000f1;
  func_0x000108666918();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086625b0);
  (*pcVar1)();
}



/* Entry: 1086625c4; end: 10866291b;  */

void FUN_1086625c4(void)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 in_w5;
  undefined8 in_x6;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *plVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  long lVar12;
  undefined8 unaff_x22;
  long lVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  
  func_0x00010866703c();
  puVar6 = (undefined8 *)0x100;
  __Znwm();
  *puVar6 = FUN_1086659b0;
  puVar6[1] = FUN_108665bc8;
  *(undefined1 *)((long)puVar6 + 0xf9) = in_w5;
  puVar6[0x1d] = unaff_x22;
  puVar6[0x1e] = in_x6;
  puVar6[0x1b] = unaff_x24;
  puVar6[0x1c] = unaff_x23;
  puVar6[0x19] = unaff_x26;
  puVar6[0x1a] = unaff_x25;
  func_0x000108666efc();
  func_0x0001086671a8();
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  plVar7 = (long *)(unaff_x26 + 0x18);
  FUN_1086682a4(puVar6 + 0x17,plVar7,unaff_x26 + 0x58);
  puVar6[0x16] = puVar6[0x17];
  do {
    func_0x00010866694c();
  } while (extraout_w10 != 0);
  func_0x000108666be8(puVar6[0x16]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x1f) = 0;
    lVar12 = puVar6[0x16];
    func_0x00010866692c();
    lVar13 = *plVar7;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar7;
    }
    plVar10 = (long *)(lVar12 + 0x10);
    do {
      if (*plVar10 == 0) {
        func_0x000108666a88();
        plVar10 = extraout_x8_00;
        uVar4 = extraout_w10_01;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x000108666c88();
        plVar10 = extraout_x8;
        uVar4 = extraout_w10_00;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        func_0x000108666b74();
        if ((bool)in_ZR) {
          func_0x000108666a54();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x000108666978();
          *(undefined1 *)plVar7 = uVar1;
          func_0x000108666a2c(0);
          *(long **)(lVar12 + 0x90) = plVar7;
        }
        func_0x000108666b5c();
        *(long *)(extraout_x8_01 + 0x20) = lVar13;
        func_0x000108666a10(*(undefined8 *)(lVar12 + 0x90));
        *(undefined8 *)(lVar12 + 0x10) = 0;
        return;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar8 = puVar6 + 0x16;
  FUN_10866291c(puVar8);
  FUN_10865a17c(puVar6 + 4,puVar8);
  func_0x000108666ec4();
  func_0x000108666b54();
  plVar7 = puVar6 + 5;
  lVar12 = *plVar7;
  bVar2 = *(byte *)(puVar6 + 8);
  lVar13 = puVar6[6];
  func_0x000108666c34();
  func_0x000108666f44();
  func_0x000108667090();
  func_0x000108666de0();
  func_0x000108666b4c();
  func_0x000108666ae4();
  if ((bVar2 & lVar12 != lVar13) != 0) {
    FUN_10865a5a8(puVar6 + 0x13,plVar7);
    puVar14 = (undefined1 *)puVar6[0x1d];
    uVar9 = puVar6[0x13];
    FUN_108662428(uVar9,puVar6[0x14]);
    *puVar14 = (char)uVar9;
    func_0x000108666c34();
    func_0x000108666af4();
    func_0x000107c2884c(puVar6 + 0xe,uVar9);
    func_0x000108667090();
    func_0x000108666de0();
    cVar3 = *(char *)((long)puVar6 + 0xf9);
    pbVar15 = (byte *)puVar6[0x1d];
    func_0x000107c2882c(puVar6 + 0xe);
    func_0x000108666ae4();
    if ((cVar3 == '\x01') && ((*pbVar15 & 1) == 0)) {
      func_0x000108666bd8(puVar6 + 2,0xe3);
    }
    else {
      func_0x000108666e38();
      func_0x000108666eb4();
      func_0x000108666be0();
    }
    FUN_108648f24(plVar7);
    func_0x000108666f14();
    func_0x000108666ac4();
    func_0x000108666ad4();
    return;
  }
  func_0x000108666adc();
  func_0x00010866693c();
  func_0x000108666d58(0xf4);
  func_0x000108666918();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108662890);
  (*pcVar5)();
}



/* Entry: 10866291c; end: 108662957;  */

long FUN_10866291c(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108666cd8();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108666d04();
  func_0x000108667260();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10866294c);
  (*pcVar1)();
}



/* Entry: 108662958; end: 1086629a7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108662958(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uStack_38;
  
  plVar5 = (long *)(param_1 + 8);
  lVar6 = *plVar5;
  do {
    func_0x000108666a64();
    if ((int)param_1 != 0) {
      *(undefined8 *)(lVar6 + 0x98) = param_2;
      func_0x0001086669d0(1);
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *plVar5 = 0;
  return;
}



/* Entry: 1086629a8; end: 1086629df;  */

long FUN_1086629a8(long param_1)

{
  long unaff_x19;
  
  func_0x000108667280();
  if (unaff_x19 + 0x10 == param_1) {
    param_1 = 0;
  }
  else {
    func_0x0001086671b4();
    param_1 = param_1 + 0x40;
  }
  return param_1;
}



/* Entry: 1086629e0; end: 108662a2b;  */

undefined8 FUN_1086629e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108666d70();
  func_0x000107c27994();
  FUN_108664f0c();
  func_0x000108666b28();
  func_0x000107c27914();
  return param_3;
}



/* Entry: 108662a2c; end: 108663123;  */

undefined8 FUN_108662a2c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined ***pppuVar12;
  uint uVar13;
  long extraout_x8;
  ulong uVar14;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  long unaff_x19;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  uint *puVar17;
  ulong *puVar18;
  undefined **ppuVar19;
  ulong *puVar20;
  long lVar21;
  uint uStack_1c8;
  char cStack_1c4;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  uint *puStack_1a8;
  long **pplStack_190;
  undefined4 *puStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_168;
  undefined4 uStack_15c;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [24];
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  uint uStack_94;
  char cStack_90;
  uint uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  byte bStack_70;
  
  func_0x000108666f88();
  uVar5 = 0x60018;
  puStack_158 = (undefined *)0x0;
  func_0x000107c28258();
  uStack_148 = 1;
  if (*(char *)((long)param_3 + 0xf) == '\0') {
    uVar5 = 0x60019;
  }
  ppuVar19 = *(undefined ***)(unaff_x20 + 0x30);
  lVar8 = unaff_x19;
  uStack_15c = uVar5;
  uStack_150 = param_1;
  FUN_10866113c();
  puStack_1a8 = (uint *)((ulong)puStack_1a8 & 0xffffffffffffff00);
  uStack_168 = 0;
  if (*(char *)(lVar8 + 0x40) == '\x01') {
    func_0x000107c27994(&puStack_1a8,lVar8);
    func_0x000107c27994(&pplStack_190,lVar8 + 0x18);
    uStack_178 = *(undefined8 *)(lVar8 + 0x30);
    uStack_170 = *(undefined1 *)(lVar8 + 0x38);
    uStack_168 = 1;
    ppuVar9 = &PTR_PTR_113286e08;
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar9 = ppuVar19;
    }
    ppuVar9 = ppuVar9 + 0x1b;
    FUN_108667ea0(ppuVar9,unaff_x19 + 0x58,(long)&uStack_178 + 4,5);
    if ((int)ppuVar9 != 0) {
      (**(code **)(**(long **)(unaff_x19 + 0x28) + 0x48))(*(long **)(unaff_x19 + 0x28),0x20c,1);
      plVar15 = *(long **)(unaff_x19 + 0x28);
      uStack_b0 = 0;
      uStack_a8 = 0;
      ppuStack_c0 = &PTR_FUN_110a609a8;
      uStack_b8 = 0;
      uStack_a0 = 0x206;
      pppuVar12 = &ppuStack_c0;
      FUN_108663124(pppuVar12,0x1a00d1);
      func_0x00010866729c();
      ppuVar19 = &puStack_158;
      func_0x000107c2825c();
      ppuStack_e8 = ppuVar19;
      (**(code **)(*plVar15 + 0x18))(plVar15,pppuVar12,&ppuStack_e8);
      func_0x000108666f4c();
      func_0x000108667194();
      return 4;
    }
  }
  func_0x000108667194();
  if ((*(byte *)((long)param_3 + 0xe) & 1) == 0) {
    puStack_1b8 = *(undefined8 **)(unaff_x19 + 0x30);
    plStack_1c0 = *(long **)(unaff_x19 + 0x28);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      do {
        func_0x000107c31e68();
      } while (extraout_w10 != 0);
    }
  }
  else {
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110a61100;
    plStack_1c0 = puVar10 + 3;
    *plStack_1c0 = (long)&PTR_DAT_110a61150;
    puStack_1b8 = puVar10;
  }
  bVar7 = *(undefined ***)(unaff_x20 + 0x28) == (undefined **)0x0;
  ppuVar19 = &PTR_PTR_113280c30;
  if (!bVar7) {
    ppuVar19 = *(undefined ***)(unaff_x20 + 0x28);
  }
  func_0x000108666a98(ppuVar19);
  if (bVar7) {
    func_0x00010866700c();
    func_0x00010866700c();
    if (*(int *)(extraout_x9 + 0x1c) != 5) goto LAB_108662d54;
    puVar17 = *(uint **)(extraout_x8 + 0x10);
    lVar21 = *(long *)(extraout_x9 + 0x10);
    lVar8 = unaff_x19;
    FUN_10866113c();
    if (*(char *)(lVar8 + 0x40) == '\x01') {
      uStack_88 = 0;
      bStack_70 = 0;
      uStack_8c = 0;
      uStack_94 = uStack_94 & 0xffffff00;
      pplStack_190 = (long **)&uStack_8c;
      ppuStack_180 = (undefined **)&uStack_88;
      ppuVar19 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(unaff_x20 + 0x18) != (undefined **)0x0) {
        ppuVar19 = *(undefined ***)(unaff_x20 + 0x18);
      }
      cStack_90 = '\0';
      puStack_1a8 = puVar17;
      func_0x00010865ed24(&ppuStack_c0,ppuVar19);
      puVar10 = (undefined8 *)(*(ulong *)(puVar17 + 8) & 0xfffffffffffffffc);
      bVar3 = *(byte *)((long)puVar10 + 0x17);
      uVar11 = puVar10[1];
      if (-1 < (char)bVar3) {
        uVar11 = (ulong)bVar3;
      }
      puVar2 = (undefined8 *)*puVar10;
      if (-1 < (char)bVar3) {
        puVar2 = puVar10;
      }
      FUN_1086634c0(&puStack_1a8,&ppuStack_c0,puVar2,uVar11,puVar17[0xc],lVar21 + 0x10);
      puVar18 = (ulong *)(lVar21 + 0x28);
      puVar20 = puVar18;
      if ((*puVar18 & 1) != 0) {
        puVar20 = (ulong *)(*puVar18 + 7);
      }
      while (plVar15 = plStack_1c0, (bStack_70 & 1) == 0) {
        puVar1 = puVar18;
        if ((*(ulong *)(lVar21 + 0x28) & 1) != 0) {
          puVar1 = (ulong *)(*(ulong *)(lVar21 + 0x28) + 7);
        }
        if (puVar20 == puVar1 + *(int *)(lVar21 + 0x30)) break;
        ppuVar19 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(*puVar20 + 0x38) != (undefined **)0x0) {
          ppuVar19 = *(undefined ***)(*puVar20 + 0x38);
        }
        func_0x00010865ed24(&ppuStack_c0,ppuVar19);
        uVar14 = *puVar20;
        puVar10 = (undefined8 *)(*(ulong *)(uVar14 + 0x30) & 0xfffffffffffffffc);
        bVar3 = *(byte *)((long)puVar10 + 0x17);
        uVar11 = puVar10[1];
        if (-1 < (char)bVar3) {
          uVar11 = (ulong)bVar3;
        }
        puVar2 = (undefined8 *)*puVar10;
        if (-1 < (char)bVar3) {
          puVar2 = puVar10;
        }
        FUN_1086634c0(&puStack_1a8,&ppuStack_c0,puVar2,uVar11,*(undefined4 *)(uVar14 + 0x40),
                      uVar14 + 0x18);
        puVar20 = puVar20 + 1;
      }
      uStack_d8 = 0;
      uStack_d0 = 0;
      ppuStack_e8 = &PTR_FUN_110a609a8;
      uStack_e0 = 0;
      uStack_c8 = 0x207;
      func_0x000107c278b8(auStack_100,&UNK_10f4afe60);
      uVar11 = (ulong)uStack_8c;
      func_0x000107c28af4(uVar11);
      pppuVar12 = &ppuStack_e8;
      func_0x000107c28824(pppuVar12,auStack_100,uVar11);
      func_0x00010866729c();
      func_0x000107c2884c(&ppuStack_c0,pppuVar12);
      func_0x0001086671fc(*(undefined8 *)(*plVar15 + 0x50));
      func_0x000108666f4c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
      func_0x000108667118();
      plVar15 = plStack_1c0;
      uStack_118 = 0;
      uStack_110 = 0;
      ppuStack_128 = &PTR_FUN_110a609a8;
      uStack_120 = 0;
      uStack_108 = 0x208;
      func_0x000107c278b8(auStack_140,&UNK_10f4afe60);
      uVar11 = (ulong)*(uint *)(lVar21 + 0x18);
      func_0x000107c28af4(uVar11);
      pppuVar12 = &ppuStack_128;
      func_0x000107c28824(pppuVar12,auStack_140,uVar11);
      func_0x00010866729c();
      func_0x000107c2884c(&ppuStack_e8,pppuVar12);
      func_0x0001086671fc(*(undefined8 *)(*plVar15 + 0x50));
      func_0x000108667118();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
      func_0x000107c2882c(&ppuStack_128);
      if ((bStack_70 & 1) == 0) {
        if (cStack_90 == '\x01') {
          uStack_1c8 = uStack_94 & 0xffffff00;
          uVar13 = uStack_94;
        }
        else if (uStack_8c == 0) {
          if ((*(byte *)(unaff_x19 + 0x170) & 1) == 0) {
            func_0x000107c31e84(*(undefined8 *)(unaff_x19 + 0x48));
            (*extraout_x8_00)();
            func_0x000107c31e80();
            if ((*(byte *)(unaff_x19 + 0x170) & 1) == 0) {
              *(undefined1 *)(unaff_x19 + 0x170) = 1;
            }
            *(undefined8 *)(unaff_x19 + 0x168) = extraout_x8_01;
          }
          uStack_1c8 = 0x210000;
          uVar13 = 0xfd;
        }
        else {
          uStack_1c8 = 0x210000;
          uVar13 = 0xfa;
        }
        cVar6 = '\x01';
      }
      else {
        puVar10 = (undefined8 *)(*(ulong *)(puVar17 + 4) & 0xfffffffffffffffc);
        ppuVar19 = &PTR_PTR_113280c30;
        if (*(undefined ***)(unaff_x20 + 0x28) != (undefined **)0x0) {
          ppuVar19 = *(undefined ***)(unaff_x20 + 0x28);
        }
        puVar2 = (undefined8 *)*puVar10;
        uVar11 = puVar10[1];
        if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
          puVar2 = puVar10;
          uVar11 = (ulong)*(byte *)((long)puVar10 + 0x17);
        }
        FUN_1086692c8(&puStack_1a8,CONCAT71(uStack_87,uStack_88),
                      lStack_80 - CONCAT71(uStack_87,uStack_88),puVar2,uVar11,
                      (ulong)ppuVar19[0xc] & 0xfffffffffffffffc);
        if (((ulong)pplStack_190 & 1) == 0) {
          uVar13 = 0xfb;
          cVar6 = '\x01';
        }
        else {
          lVar8 = unaff_x20;
          FUN_108653db8();
          if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
            func_0x000108666c58();
          }
          func_0x00010539283c(lVar8 + 0x60);
          FUN_108653db8();
          FUN_108655060();
          func_0x0001086649e8();
          if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
            func_0x000108666c58();
          }
          func_0x00010539283c(unaff_x20 + 0x28);
          cVar6 = '\0';
          uVar13 = 0;
        }
        func_0x00010866718c();
        uStack_1c8 = 0x210000;
      }
      func_0x000107c279c4(&uStack_88);
      uVar13 = uVar13 & 0xff;
      cStack_1c4 = cVar6;
      goto LAB_108662d60;
    }
    uVar13 = 0xf8;
  }
  else {
LAB_108662d54:
    uVar13 = 0xf5;
  }
  uStack_1c8 = 0x210000;
  cStack_1c4 = '\x01';
LAB_108662d60:
  uStack_1c8 = uStack_1c8 | uVar13;
  *(char *)(param_3 + 1) = cStack_1c4;
  *param_3 = uStack_1c8;
  if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
    uVar4 = *(undefined1 *)(unaff_x19 + 200);
    param_3[2] = *(uint *)(unaff_x19 + 0xc4);
    *(undefined1 *)(param_3 + 3) = uVar4;
    if ((*(byte *)((long)param_3 + 0xd) & 1) == 0) {
      *(undefined1 *)((long)param_3 + 0xd) = 1;
    }
  }
  puStack_1a8 = &uStack_1c8;
  pplStack_190 = &plStack_1c0;
  puStack_188 = &uStack_15c;
  ppuStack_180 = &puStack_158;
  if (cStack_1c4 == '\0') {
    FUN_108663170(&puStack_1a8,0);
    uVar16 = 2;
  }
  else {
    FUN_108663170(&puStack_1a8,&UNK_1001e00da);
    uVar16 = 3;
  }
  func_0x000107c288a4(&plStack_1c0);
  return uVar16;
}



/* Entry: 108663124; end: 10866316f;  */

undefined8 FUN_108663124(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31e78(param_1,PTR_DAT_113268c88);
  func_0x000108666b84((uint)param_2 & 0xd1);
  func_0x000108667248();
  func_0x00010866695c();
  return param_2;
}



/* Entry: 108663170; end: 1086634bf;  */

void FUN_108663170(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar7;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long *plVar8;
  long lVar9;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  func_0x000108666f88();
  lVar9 = param_1[1];
  uVar5 = *(char *)(*param_1 + 4) == '\0';
  uVar4 = 0x1a00d0;
  if (!(bool)uVar5) {
    uVar4 = 0x1a00d1;
  }
  func_0x000108666fc0(*(undefined8 *)(param_1[2] + 0x18));
  uVar2 = extraout_x9;
  if (!(bool)uVar5) {
    uVar2 = extraout_x8;
  }
  puVar6 = (undefined1 *)(lVar9 + 0x58);
  func_0x0001006933e4(puVar6,uVar2);
  if ((int)puVar6 != 0) {
    func_0x000108667388();
    func_0x000108666a98();
    if ((bool)uVar5) {
      ppuVar7 = *(undefined ***)(extraout_x8_00 + 0x10);
    }
    else {
      ppuVar7 = &PTR_PTR_113280818;
    }
    func_0x000108667320(ppuVar7[4]);
    if (*(char *)(lVar9 + 0xf0) == '\x01') {
      ppuStack_b0 = *(undefined ***)(lVar9 + 0xd8);
      lStack_a8 = *(long *)(lVar9 + 0xe0) - (long)ppuStack_b0;
      puVar6 = auStack_88;
      FUN_108664790(puVar6,&ppuStack_b0);
      lVar9 = 0x151;
      if ((int)puVar6 == 0) {
        lVar9 = 0x152;
      }
    }
    else {
      lVar9 = 0x152;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = &PTR_FUN_110a609a8;
    uStack_d0 = 0;
    uStack_b8 = 0x209;
    func_0x000108667234();
    func_0x000107c278b8(auStack_78,PTR_DAT_113268d70);
    func_0x000107c28824(puVar6,auStack_78,(&PTR_s_success_113269028)[lVar9]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    func_0x000107c2884c(&ppuStack_b0,puVar6);
    func_0x000108667240();
    if (*(char *)((undefined4 *)*unaff_x19 + 1) == '\x01') {
      FUN_108664730(&ppuStack_b0,*(undefined4 *)*unaff_x19);
    }
    func_0x000107c2884c(auStack_100,&ppuStack_b0);
    func_0x000108667090();
    func_0x000108666de0();
    func_0x000107c2882c(auStack_100);
    func_0x00010866722c();
  }
  plVar8 = *(long **)unaff_x19[3];
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_110a609a8;
  lStack_a8 = 0;
  uStack_90 = 0x206;
  FUN_108663124(&ppuStack_b0,uVar4);
  FUN_108660fe8();
  ppuVar7 = (undefined **)unaff_x19[5];
  func_0x000107c2825c();
  ppuStack_d8 = ppuVar7;
  func_0x0001086671d8(*(undefined8 *)(*plVar8 + 0x18));
  func_0x00010866722c();
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppuStack_d8 = &PTR_FUN_110a609a8;
  uStack_d0 = 0;
  uStack_b8 = 0x206;
  func_0x000108667234();
  FUN_108660fe8();
  func_0x000107c2884c(&ppuStack_b0,ppuVar7);
  func_0x000108667240();
  cVar3 = *(char *)((undefined4 *)*unaff_x19 + 1);
  uVar5 = cVar3 != '\0';
  if (cVar3 == '\x01') {
    FUN_108664730(&ppuStack_b0,*(undefined4 *)*unaff_x19);
  }
  if (unaff_x20 >> 0x20 != 0) {
    if (0x46 < ((uint)(unaff_x20 >> 0x11) & 0x7fff)) {
      func_0x000108666d7c();
    }
    func_0x000107c278b8(&ppuStack_d8);
    uVar1 = (uint)unaff_x20 & 0xfff8;
    uVar5 = 0x2b6 < uVar1;
    if (0x2b7 < uVar1) {
      func_0x000108666d64();
    }
    func_0x000107c28824(&ppuStack_b0,&ppuStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_d8);
  }
  func_0x000108667388();
  func_0x000108666fe0();
  uVar4 = extraout_w8;
  if ((bool)uVar5) {
    uVar4 = extraout_w9;
  }
  func_0x000108666cec(uVar4,&ppuStack_b0);
  plVar8 = *(long **)unaff_x19[3];
  func_0x000107c2884c(auStack_128,&ppuStack_b0);
  (**(code **)(*plVar8 + 0x50))(plVar8,auStack_128);
  func_0x000108666ae4();
  func_0x00010866722c();
  return;
}



/* Entry: 1086634c0; end: 108663a0f;  */

void FUN_1086634c0(long *param_1,long param_2,ulong param_3,ulong *param_4,int param_5,
                  ulong *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  undefined1 *extraout_x8;
  int extraout_w9;
  ulong uVar12;
  ulong *unaff_x20;
  int iVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lStack_1c0;
  undefined1 auStack_1b8 [48];
  char cStack_188;
  ulong *puStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  int iStack_154;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_130;
  long lStack_128;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  char cStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  long alStack_d8 [3];
  long *plStack_c0;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(long *)(param_2 + 8) == 0x10;
  iStack_154 = param_5;
  if ((((bool)uVar5) && (uVar5 = param_4 == (ulong *)0x21, (bool)uVar5)) && (param_5 != 0)) {
    uVar12 = *(ulong *)(*param_1 + 0x18) & 0xfffffffffffffffc;
    cVar4 = *(char *)(uVar12 + 0x17);
    unaff_x20 = param_6;
    if (cVar4 < '\0') {
      if (*(long *)(uVar12 + 8) == 0) goto LAB_1086636a4;
    }
    else if (cVar4 == '\0') goto LAB_1086636a4;
    lVar14 = param_1[2];
    puVar10 = (ulong *)(lVar14 + 0x108);
    puVar16 = puVar10;
    puVar15 = puVar10;
    while (puVar17 = (ulong *)*puVar16, puVar17 != (ulong *)0x0) {
      uVar12 = puVar17[4];
      func_0x000107c289b8(uVar12,puVar17[5],param_3,param_3 + 0x21,&lStack_110,&lStack_130,
                          &lStack_130);
      bVar6 = (int)uVar12 == 0;
      lVar7 = 8;
      if (bVar6) {
        lVar7 = 0;
      }
      puVar16 = (ulong *)((long)puVar17 + lVar7);
      if (bVar6) {
        puVar15 = puVar17;
      }
    }
    if ((puVar10 == puVar15) ||
       (uVar12 = param_3, func_0x000107c289bc(param_3,param_3 + 0x21,puVar15[4],puVar15[5]),
       (uVar12 & 1) != 0)) {
      func_0x000108657b5c(&lStack_110,param_3);
      puVar15 = (ulong *)0x2100f9;
      uVar5 = cStack_f8 == '\x01';
      if (((bool)uVar5) && (uVar5 = lStack_108 - lStack_110 == 0x41, (bool)uVar5)) {
        lVar7 = lVar14;
        FUN_10866113c();
        if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
          puVar15 = (ulong *)0x2100f8;
          goto LAB_108663700;
        }
        param_4 = (ulong *)(lStack_108 - lStack_110);
        FUN_108657bec(&lStack_130,lStack_110,param_4,*(long *)(lVar7 + 0x18),
                      *(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18));
        puVar15 = (ulong *)0x2100fc;
        uVar5 = cStack_118 == '\x01';
        if (((bool)uVar5) && (uVar5 = lStack_128 - lStack_130 == 0x20, (bool)uVar5)) {
          func_0x000107c27d7c(&uStack_150,param_3,param_3 + 0x21);
          if (lStack_128 - lStack_130 != 0) {
            _memcpy(alStack_d8,lStack_130,lStack_128 - lStack_130);
          }
          puVar16 = puVar10;
          puVar15 = puVar10;
          if (lStack_108 != lStack_110) {
            _memcpy(auStack_b8,lStack_110,lStack_108 - lStack_110);
          }
          while (puVar17 = (ulong *)*puVar16, puVar17 != (ulong *)0x0) {
            puVar16 = puVar17 + 4;
            FUN_108664d0c(puVar16,&uStack_150);
            bVar6 = -1 < (char)puVar16;
            lVar7 = 8;
            if (bVar6) {
              lVar7 = 0;
            }
            puVar16 = (ulong *)((long)puVar17 + lVar7);
            if (bVar6) {
              puVar15 = puVar17;
            }
          }
          if (puVar10 == puVar15) {
LAB_108663824:
            puVar15 = (ulong *)0xa8;
            __Znwm();
            uVar12 = uStack_140;
            puVar17 = puVar15 + 4;
            puVar15[5] = uStack_148;
            *puVar17 = uStack_150;
            uStack_e0 = 1;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_140 = 0;
            puVar15[6] = uVar12;
            puVar15[7] = lVar14 + 0x118;
            puStack_f0 = puVar15;
            puStack_e8 = puVar10;
            func_0x0001086670fc(puVar15 + 8);
            puVar15 = *(ulong **)(lVar14 + 0x108);
            puVar16 = puVar10;
            while (puVar15 != (ulong *)0x0) {
              while (puVar16 = puVar15, puVar15 = puVar17, FUN_108664d0c(puVar17,puVar16 + 4),
                    (char)puVar15 < '\0') {
                puVar15 = (ulong *)*puVar16;
                puVar10 = puVar16;
                if ((ulong *)*puVar16 == (ulong *)0x0) goto LAB_1086638b8;
              }
              puVar15 = puVar16 + 4;
              FUN_108664d0c(puVar15,puVar17);
              if (-1 < (char)puVar15) {
                puVar15 = (ulong *)*puVar10;
                if (puVar15 != (ulong *)0x0) goto LAB_1086638f4;
                break;
              }
              puVar10 = puVar16 + 1;
              puVar15 = (ulong *)*puVar10;
            }
LAB_1086638b8:
            puVar15 = puStack_f0;
            *puStack_f0 = 0;
            puStack_f0[1] = 0;
            puStack_f0[2] = (ulong)puVar16;
            *puVar10 = (ulong)puStack_f0;
            if (**(long **)(lVar14 + 0x100) != 0) {
              *(long *)(lVar14 + 0x100) = **(long **)(lVar14 + 0x100);
            }
            func_0x000107c27be4(*(undefined8 *)(lVar14 + 0x108),puStack_f0);
            *(long *)(lVar14 + 0x110) = *(long *)(lVar14 + 0x110) + 1;
            puStack_f0 = (ulong *)0x0;
LAB_1086638f4:
            FUN_108665490(&puStack_f0);
          }
          else {
            puVar16 = &uStack_150;
            FUN_108664d0c(puVar16,puVar15 + 4);
            if ((char)puVar16 < '\0') goto LAB_108663824;
            func_0x0001086670fc(puVar15 + 8);
          }
          param_4 = puVar15;
          FUN_1086653f8(lVar14 + 0xf8);
          uVar5 = *(ulong *)(lVar14 + 0x128) == *(ulong *)(lVar14 + 0xf8);
          if (*(ulong *)(lVar14 + 0xf8) < *(ulong *)(lVar14 + 0x128)) {
            puVar16 = *(ulong **)(*(long *)(lVar14 + 0x118) + 0x10);
            puVar10 = puVar16;
            func_0x000107c27be0();
            uVar5 = *(ulong **)(lVar14 + 0x100) == puVar16;
            if ((bool)uVar5) {
              *(ulong **)(lVar14 + 0x100) = puVar10;
            }
            *(long *)(lVar14 + 0x110) = *(long *)(lVar14 + 0x110) + -1;
            param_4 = puVar16;
            func_0x00010530d618(*(undefined8 *)(lVar14 + 0x108));
            func_0x000107c27914(puVar16 + 4);
            __ZdlPv(puVar16);
            lVar7 = **(long **)(lVar14 + 0x118);
            plVar8 = (long *)(*(long **)(lVar14 + 0x118))[1];
            *(long **)(lVar7 + 8) = plVar8;
            *plVar8 = lVar7;
            *(long *)(lVar14 + 0x128) = *(long *)(lVar14 + 0x128) + -1;
            __ZdlPv();
          }
          puVar15 = puVar15 + 8;
          func_0x000107c27914(&uStack_150);
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        func_0x000107c279c4(&lStack_130);
      }
      else {
LAB_108663700:
        bVar6 = true;
      }
      plVar8 = &lStack_110;
      func_0x000107c279c4();
      if (bVar6) {
        puVar11 = (undefined4 *)param_1[1];
        *puVar11 = (int)puVar15;
        param_1 = plVar8;
        goto LAB_1086636b4;
      }
    }
    else {
      param_4 = puVar15;
      FUN_1086653f8(lVar14 + 0xf8);
      puVar15 = puVar15 + 8;
    }
    lVar7 = param_1[4];
    lVar2 = param_1[5];
    lVar1 = *param_1;
    lVar3 = param_1[1];
    plVar8 = (long *)0x50;
    __Znwm();
    *plVar8 = (long)&PTR_DAT_110a61030;
    plVar8[1] = lVar3;
    plVar8[2] = lVar2;
    plVar8[3] = param_2;
    plVar8[4] = (long)(puVar15 + 4);
    plVar8[5] = (long)&iStack_154;
    plVar8[6] = lVar14;
    plVar8[7] = lVar7;
    plVar8[8] = (long)puVar15;
    plVar8[9] = lVar1;
    plStack_c0 = plVar8;
    func_0x0001086647cc(param_6);
    iVar13 = 0;
    do {
      do {
        puVar10 = param_6;
        if ((*param_6 & 1) != 0) {
          puVar10 = (ulong *)(*param_6 + 7);
        }
        uVar5 = 1;
        if (param_4 == puVar10) goto LAB_1086637d8;
        param_4 = param_4 + -1;
        func_0x000108667320(*(undefined8 *)(*param_4 + 0x10));
        uVar5 = extraout_w9 == 0;
        lStack_128 = 5;
        plVar9 = &lStack_110;
        lStack_130 = lVar7 + 0x34;
        func_0x000108664790(plVar9,&lStack_130);
      } while ((int)plVar9 == 0);
      plVar9 = plVar8;
      (**(code **)(*plVar8 + 0x30))(plVar8,*param_4);
      iVar13 = iVar13 + 1;
    } while ((int)plVar9 == 0);
LAB_1086637d8:
    *(int *)param_1[3] = *(int *)param_1[3] + iVar13;
    param_1 = alStack_d8;
    FUN_1086649a4();
  }
  else {
LAB_1086636a4:
    puVar11 = (undefined4 *)param_1[1];
    *puVar11 = 0x2100fe;
LAB_1086636b4:
    *(undefined1 *)(puVar11 + 1) = 1;
    param_6 = unaff_x20;
  }
  func_0x0001086672f8(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c279c4(&lStack_130);
  func_0x000107c279c4(&lStack_110);
  func_0x000108666acc();
  pcStack_168 = FUN_108663a10;
  puStack_180 = param_6;
  plStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_1086569c0(&lStack_1c0);
  if (cStack_188 == '\x01') {
    func_0x000108667220();
    if (lStack_1c0 != 0) {
      plVar8 = &lStack_1c0;
      FUN_1086569d8(plVar8);
      FUN_1086654d4(extraout_x8,plVar8);
      goto LAB_108663a78;
    }
  }
  else {
    func_0x000108667220();
  }
  *extraout_x8 = 0;
  extraout_x8[0x30] = 0;
LAB_108663a78:
  FUN_1086569a0(auStack_1b8);
  return;
}



/* Entry: 108663a10; end: 108663aa3;  */

void FUN_108663a10(undefined1 *param_1)

{
  long *plVar1;
  long lStack_60;
  undefined1 auStack_58 [48];
  char cStack_28;
  
  FUN_1086569c0(&lStack_60);
  if (cStack_28 == '\x01') {
    func_0x000108667220();
    if (lStack_60 != 0) {
      plVar1 = &lStack_60;
      FUN_1086569d8(plVar1);
      FUN_1086654d4(param_1,plVar1);
      goto LAB_108663a78;
    }
  }
  else {
    func_0x000108667220();
  }
  *param_1 = 0;
  param_1[0x30] = 0;
LAB_108663a78:
  FUN_1086569a0(auStack_58);
  return;
}



/* Entry: 108663aa4; end: 108663cf3;  */

void FUN_108663aa4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long *plVar4;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_e8 [40];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long alStack_98 [5];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000108667000();
  uStack_70 = 0;
  func_0x000107c28258();
  uStack_60 = 1;
  uStack_68 = param_1;
  func_0x000108667374(*(undefined8 *)(unaff_x21 + 0x28));
  func_0x000108666a98();
  if ((bool)in_ZR) {
    uVar7 = *(ulong *)(*(long *)(extraout_x8_00 + 0x10) + 0x28) & 0xfffffffffffffffc;
    if (*(char *)(uVar7 + 0x17) < '\0') {
      if (*(long *)(uVar7 + 8) != 0) goto LAB_108663b0c;
    }
    else if (*(char *)(uVar7 + 0x17) != '\0') {
LAB_108663b0c:
      uVar5 = *(ulong *)(*(long *)(extraout_x8_00 + 0x10) + 0x10) & 0xfffffffffffffffc;
      if (*(char *)(uVar5 + 0x17) < '\0') {
        if (*(long *)(uVar5 + 8) != 0) goto LAB_108663b20;
      }
      else if (*(char *)(uVar5 + 0x17) != '\0') {
LAB_108663b20:
        FUN_108656434(alStack_98);
        lVar6 = alStack_98[0];
        if (*(int *)(alStack_98[0] + 0x1c) == 6) {
          uVar8 = *(ulong *)(alStack_98[0] + 0x10);
        }
        else {
          func_0x000100690c2c(alStack_98[0]);
          *(undefined4 *)(lVar6 + 0x1c) = 6;
          uVar8 = *(ulong *)(lVar6 + 8);
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          func_0x000108664aa0();
          *(ulong *)(lVar6 + 0x10) = uVar8;
        }
        uVar3 = *(ulong *)(uVar8 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar8 + 0x18,uVar7,uVar3);
        uVar7 = *(ulong *)(uVar8 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar8 + 0x10,uVar5,uVar7);
        lVar6 = alStack_98[0];
        *extraout_x8 = 1;
        alStack_98[0] = 0;
        *(long *)(extraout_x8 + 2) = lVar6;
        func_0x000108656b9c(alStack_98);
        lVar6 = 0xd2;
        goto LAB_108663b58;
      }
    }
  }
  *extraout_x8 = 2;
  *(undefined8 *)(extraout_x8 + 2) = 0;
  lVar6 = 0xd3;
LAB_108663b58:
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x000108666dac();
  puStack_c0 = (undefined8 *)(extraout_x8_01 + 0x10);
  uStack_b8 = 0;
  uStack_a0 = 0x20a;
  func_0x000107c278b8(auStack_58,PTR_DAT_113268c90);
  ppuVar1 = &puStack_c0;
  func_0x000107c28824(ppuVar1,auStack_58,(&PTR_s_success_113269028)[lVar6]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000107c2884c(alStack_98,ppuVar1);
  func_0x000107c2882c(&puStack_c0);
  func_0x000107c2884c(auStack_e8,alStack_98);
  func_0x000108667018();
  func_0x000108666de8();
  func_0x000108666ae4();
  plVar4 = *(long **)(unaff_x20 + 0x28);
  puVar2 = &uStack_70;
  func_0x000107c2825c();
  puStack_c0 = puVar2;
  (**(code **)(*plVar4 + 0x18))(plVar4,alStack_98,&puStack_c0);
  func_0x000108667240();
  return;
}



/* Entry: 108663cf4; end: 10866409b;  */

void FUN_108663cf4(void)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined **ppuVar13;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  ulong uVar14;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar15;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_88 [24];
  char cStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000108667000();
  puVar7 = (undefined8 *)0x88;
  __Znwm();
  *puVar7 = FUN_108665520;
  puVar7[1] = FUN_108665668;
  puVar7[0xf] = unaff_x20;
  func_0x000107c27f94(puVar7 + 2);
  func_0x000107c287c4(extraout_x8,puVar7 + 2);
  uVar5 = *(uint *)(unaff_x21 + 0x20);
  if (*(int *)(unaff_x21 + 0xf0) == 1 && 10 < uVar5) {
    func_0x000108666ef4();
  }
  else {
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    uVar14 = *(ulong *)(unaff_x21 + 0x18);
    puVar1 = (ulong *)(unaff_x21 + 0x18);
    if ((uVar14 & 1) != 0) {
      puVar1 = (ulong *)(uVar14 + 7);
    }
    for (lVar18 = (long)(int)uVar5 << 3; lVar18 != 0; lVar18 = lVar18 + -8) {
      uVar14 = *puVar1;
      ppuVar13 = *(undefined ***)(uVar14 + 0x18);
      ppuVar2 = &PTR_PTR_11326cb58;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar2 = ppuVar13;
      }
      func_0x000100696384(auStack_68,ppuVar2);
      func_0x000107c29ee4(auStack_88,auStack_68);
      uVar8 = 0;
      FUN_1086a5fbc();
      if (((uVar8 & 1) == 0) &&
         (puVar9 = &UNK_10df3fda5, func_0x000108659f30(&UNK_10df3fda5,auStack_68),
         ((ulong)puVar9 & 1) == 0)) {
        ppuVar13 = *(undefined ***)(uVar14 + 0x18);
        ppuVar2 = &PTR_PTR_11326cb58;
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar2 = ppuVar13;
        }
        uVar14 = unaff_x20 + 0x58;
        func_0x0001006933e4(uVar14,ppuVar2);
        func_0x000107c2a2e0(auStack_88);
        if ((uVar14 & 1) == 0) {
          func_0x000107c28840(puVar7 + 4,auStack_68);
        }
      }
      else {
        func_0x000107c2a2e0(auStack_88);
      }
      func_0x000108666bb8();
      puVar1 = puVar1 + 1;
    }
    if (puVar7[4] == puVar7[5]) {
      func_0x000108666ef4();
    }
    else {
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      FUN_108647df0(puVar7 + 7,(long)(puVar7[5] - puVar7[4]) / 0x18);
      lVar3 = puVar7[5];
      for (lVar18 = puVar7[4]; uVar6 = lVar18 == lVar3, !(bool)uVar6; lVar18 = lVar18 + 0x18) {
        FUN_108847238(auStack_88,lVar18);
        func_0x000108648150(puVar7 + 7,auStack_88);
        func_0x000108666b6c();
      }
      plVar10 = (long *)(unaff_x20 + 0x18);
      FUN_1086683d8(puVar7 + 0xe,plVar10,puVar7 + 7);
      puVar7[0xd] = puVar7[0xe];
      do {
        func_0x00010866694c();
      } while (extraout_w10 != 0);
      func_0x000108666be8(puVar7[0xd]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar7 + 0x10) = 0;
        func_0x00010866692c();
        if (*plVar10 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108666f7c();
        plVar10 = extraout_x8_00;
        do {
          if (*plVar10 == 0) {
            func_0x000108666a88();
            plVar10 = extraout_x8_02;
            uVar5 = extraout_w10_01;
            uVar15 = extraout_w11_00;
          }
          else {
            func_0x000108666c88();
            plVar10 = extraout_x8_01;
            uVar5 = extraout_w10_00;
            uVar15 = extraout_w11;
          }
          if ((uVar15 & 1) != 0) {
            func_0x000108666cac();
            if ((bool)uVar6) {
              func_0x000108666a54();
              func_0x000108666978();
              func_0x000108666a40();
              func_0x000108666fd0();
            }
            func_0x000108666988();
            return;
          }
        } while ((uVar5 >> 1 & 1) == 0);
      }
      puVar11 = puVar7 + 0xd;
      FUN_108662304(puVar11);
      FUN_1086644a4(puVar7 + 10,puVar11);
      lVar18 = puVar7[0xf];
      func_0x000108666ee4();
      func_0x000108666b34();
      FUN_10866113c();
      if ((*(byte *)(lVar18 + 0x40) & 1) != 0) {
        lVar17 = puVar7[0xf];
        lVar3 = puVar7[0xb];
        for (lVar18 = puVar7[10]; lVar18 != lVar3; lVar18 = lVar18 + 0x40) {
          if ((*(int *)(lVar18 + 0x18) == 1) && (*(char *)(lVar18 + 0x38) == '\x01')) {
            lVar4 = *(long *)(lVar18 + 0x28);
            for (lVar16 = *(long *)(lVar18 + 0x20); lVar16 != lVar4; lVar16 = lVar16 + 0x38) {
              lVar12 = lVar17 + 0x130;
              func_0x000108667178();
              if (lVar12 == 0) {
                func_0x000108667334();
                FUN_108657bec(auStack_88);
                if (cStack_70 == '\x01') {
                  func_0x000108667170(lVar17 + 0x130);
                }
                func_0x000107c279c4(auStack_88);
              }
            }
          }
        }
      }
      func_0x000108666ef4();
      func_0x000108666f6c();
      func_0x000108666dd8();
    }
    func_0x000108666dc8();
  }
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 10866409c; end: 1086640bf;  */

void FUN_10866409c(void)

{
  long unaff_x19;
  undefined8 *puVar1;
  
  func_0x000108666f94();
  func_0x000108664100();
  puVar1 = (undefined8 *)(unaff_x19 + 0x10);
  func_0x000108664160((undefined8 *)(unaff_x19 + 8),*puVar1);
  *(undefined8 *)(unaff_x19 + 8) = puVar1;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 1086640c0; end: 1086640c3;  */

undefined8 * FUN_1086640c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60f90;
  FUN_1086640d8(param_1 + 0x26);
  func_0x0001086641bc(param_1 + 0x1f);
  func_0x000107c279c4(param_1 + 0x1b);
  FUN_10866425c(param_1 + 0x12);
  func_0x000107c27914(param_1 + 0xe);
  func_0x000107c27914(param_1 + 0xb);
  func_0x000107c28800(param_1 + 9);
  func_0x000107c289ac(param_1 + 7);
  func_0x000107c288a4(param_1 + 5);
  func_0x000107c286cc(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 1086640c4; end: 1086640d7;  */

void FUN_1086640c4(void)

{
  func_0x000108664ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086640d8; end: 10866425b;  */

void FUN_1086640d8(void)

{
  long unaff_x19;
  
  func_0x000108666f94();
  func_0x000108664100();
  func_0x00010866413c(unaff_x19 + 8);
  return;
}



/* Entry: 10866425c; end: 10866428f;  */

void FUN_10866425c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000108664a84();
  }
  return;
}



/* Entry: 108664290; end: 1086642c7;  */

undefined1 * FUN_108664290(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_1086642c8();
  return param_1;
}



/* Entry: 1086642c8; end: 1086642db;  */

void FUN_1086642c8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1086642f8();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086642dc; end: 1086642f7;  */

void FUN_1086642dc(long param_1)

{
  FUN_1086642f8();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086642f8; end: 10866432b;  */

void FUN_1086642f8(long param_1)

{
  long unaff_x20;
  
  func_0x000108666f88();
  func_0x000107c27994();
  func_0x000107c27994(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10866432c; end: 10866434b;  */

void FUN_10866432c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10866434c();
  }
  return;
}



/* Entry: 10866434c; end: 108664367;  */

void FUN_10866434c(void)

{
  func_0x000108667274();
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 108664368; end: 10866437b;  */

long * FUN_108664368(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000108666f88();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = plVar1[1];
      while (lVar3 = plVar1[2], lVar2 != lVar3) {
        plVar1[2] = lVar3 + -0x10;
        func_0x000108664420(lVar3 + -8);
      }
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      return plVar1;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar3 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar3;
  unaff_x19[2] = lVar3;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10866437c; end: 1086643d3;  */

long * FUN_10866437c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108666f88();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar2 = param_1[2], lVar1 != lVar2) {
        param_1[2] = lVar2 + -0x10;
        func_0x000108664420(lVar2 + -8);
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 << 4;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x10;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 1086643d4; end: 10866444f;  */

long * FUN_1086643d4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x10;
    func_0x000108664420(lVar1 + -8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108664450; end: 1086644a3;  */

long * FUN_108664450(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
      func_0x000108664420(lVar1 + -8);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1086644a4; end: 1086644db;  */

undefined8 * FUN_1086644a4(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1086644dc(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 6);
  return param_1;
}



/* Entry: 1086644dc; end: 108664553;  */

void FUN_1086644dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000108666ff0();
    FUN_108664554();
    FUN_10866458c(param_1);
  }
  uStack_38 = 1;
  FUN_108664694(&uStack_40);
  return;
}



/* Entry: 108664554; end: 10866458b;  */

void FUN_108664554(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3a == 0) {
    plVar1 = param_1 + 2;
    func_0x00010864a78c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 8);
  }
  else {
    FUN_10864a6b0();
    plVar1 = param_1 + 2;
    FUN_1086645c0();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10866458c; end: 1086645bf;  */

void FUN_10866458c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1086645c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1086645c0; end: 1086645d3;  */

void FUN_1086645c0(void)

{
  FUN_1086645d4();
  return;
}



/* Entry: 1086645d4; end: 10866465f;  */

long FUN_1086645d4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_108664660(param_4,param_2);
    param_4 = lStack_38 + 0x40;
  }
  uStack_48 = 1;
  FUN_10864a910(&uStack_60);
  return param_4;
}



/* Entry: 108664660; end: 108664693;  */

void FUN_108664660(long param_1)

{
  long unaff_x20;
  
  func_0x000108666f88();
  func_0x000107c27994();
  FUN_10865a17c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 108664694; end: 1086646bf;  */

long FUN_108664694(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010864a488(param_1);
  }
  return param_1;
}



/* Entry: 1086646c0; end: 10866472f;  */

undefined8
FUN_1086646c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c27994(auStack_48);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_108648d68(param_1,auStack_48,&uStack_60,*param_4);
  func_0x000107c27914(&uStack_60);
  func_0x000107c27914(auStack_48);
  return param_1;
}



/* Entry: 108664730; end: 10866478f;  */

void FUN_108664730(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x000108666d24();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108666d10();
  }
  else {
    func_0x000108666d7c();
  }
  func_0x000107c31e78();
  if (unaff_w20 < 0x2b8) {
    func_0x000108666b84();
  }
  else {
    func_0x000108666d64();
  }
  func_0x000108666cf8();
  func_0x000107c31e74();
  return;
}



/* Entry: 108664790; end: 1086647f3;  */

bool FUN_108664790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (param_1[1] == param_2[1]) {
    func_0x000107c610b0(uVar1,*param_2,param_1[1]);
    return (int)uVar1 == 0;
  }
  return false;
}



/* Entry: 1086647f4; end: 108664833;  */

undefined8 * FUN_1086647f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *puVar1 = &PTR_DAT_110a61030;
  _memcpy(puVar1 + 1,param_1 + 8,0x48);
  return puVar1;
}



/* Entry: 108664834; end: 10866486b;  */

void FUN_108664834(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a61030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_2 + 1,param_1 + 8,0x48);
  return;
}



/* Entry: 10866486c; end: 108664997;  */

byte FUN_10866486c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined1 auStack_40 [32];
  
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) != 0) goto LAB_1086648a0;
  }
  else if (*(char *)(uVar3 + 0x17) != '\0') {
LAB_1086648a0:
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x58);
      lVar2 = **(long **)(param_1 + 0x38);
      FUN_1086690c4(auStack_40,uVar3,**(undefined8 **)(param_1 + 0x18),
                    (*(undefined8 **)(param_1 + 0x18))[1],*(undefined8 *)(param_1 + 0x20),0x41,
                    **(undefined4 **)(param_1 + 0x28),lVar1,
                    *(long *)(*(long *)(param_1 + 0x30) + 0x60) - lVar1,lVar2,
                    (*(long **)(param_1 + 0x38))[1] - lVar2,*(int *)(param_2 + 0x20));
      func_0x0001052b2b60(*(undefined8 *)(param_1 + 0x10),auStack_40);
      func_0x000107c279c4(auStack_40);
      bVar4 = *(byte *)(*(long *)(param_1 + 0x10) + 0x18);
      goto LAB_10866494c;
    }
  }
  bVar4 = 0;
  puVar5 = *(undefined4 **)(param_1 + 8);
  *puVar5 = 0x2100fe;
  *(undefined1 *)(puVar5 + 1) = 1;
LAB_10866494c:
  return bVar4 & 1;
}



/* Entry: 108664998; end: 1086649a3;  */

undefined ** FUN_108664998(void)

{
  return &PTR_DAT_110a610a0;
}



/* Entry: 1086649a4; end: 108664b67;  */

long * FUN_1086649a4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 108664b68; end: 108664bdf;  */

undefined8 * FUN_108664b68(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar2 = puVar1;
  func_0x000107c31510();
  *puVar2 = &PTR_FUN_110a610c0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x14) = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  func_0x000107c27f98(&uStack_28);
  func_0x000107c27f9c(&uStack_40);
  *param_1 = puVar1;
  param_1[1] = puVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c27fec(&uStack_40);
  return param_1;
}



/* Entry: 108664be0; end: 108664be3;  */

undefined8 * FUN_108664be0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108664be4; end: 108664c13;  */

void FUN_108664be4(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108664c14; end: 108664c73;  */

void FUN_108664c14(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_28;
  
  plVar3 = (long *)(param_1 + 0x20);
  plVar2 = *(long **)(param_2 + 0x38);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar2 != plVar3) {
    if ((plVar1 != plVar2) && (plVar3 = (long *)plVar2[1], plVar1 != plVar3)) {
      lVar4 = *plVar2;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar3 = lVar4;
      lVar4 = *plVar1;
      *(long **)(lVar4 + 8) = plVar2;
      *plVar2 = lVar4;
      *plVar1 = (long)plVar2;
      plVar2[1] = (long)plVar1;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    }
    return;
  }
  lStack_28 = param_2;
  FUN_108664ddc(plVar3,plVar1,&lStack_28);
  *(long **)(param_2 + 0x38) = plVar3;
  return;
}



/* Entry: 108664c74; end: 108664d0b;  */

long FUN_108664c74(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  
  func_0x000108666f88();
  func_0x000108664cc0();
  if ((unaff_x19 + 8 == param_1) || (FUN_108664d0c(), (unaff_w20 >> 7 & 1) != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 108664d0c; end: 108664d1f;  */

void FUN_108664d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  FUN_108664d40(*param_1,param_1[1],*param_2,param_2[1],&uStack_11);
  return;
}



/* Entry: 108664d20; end: 108664d3f;  */

void FUN_108664d20(void)

{
  FUN_108664d40();
  return;
}



/* Entry: 108664d40; end: 108664ddb;  */

uint FUN_108664d40(byte *param_1,long param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_2 - (long)param_1;
  uVar5 = param_4 - (long)param_3;
  uVar6 = uVar5;
  if ((long)uVar4 <= (long)uVar5) {
    uVar6 = uVar4;
  }
  uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  while( true ) {
    if (uVar6 == 0) {
      uVar3 = (uint)((long)uVar5 < (long)uVar4);
      if ((long)uVar4 < (long)uVar5) {
        uVar3 = 0xffffffff;
      }
      return uVar3;
    }
    bVar1 = *param_1;
    bVar2 = *param_3;
    if (bVar1 != bVar2) break;
    uVar6 = uVar6 - 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  }
  uVar3 = (uint)(bVar2 < bVar1);
  if (bVar1 < bVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Entry: 108664ddc; end: 108664e23;  */

void FUN_108664ddc(long *param_1)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001086672c4();
  FUN_108664e24();
  lVar1 = *unaff_x19;
  *(long **)(lVar1 + 8) = param_1;
  *param_1 = lVar1;
  *unaff_x19 = (long)param_1;
  param_1[1] = (long)unaff_x19;
  *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + 1;
  return;
}



/* Entry: 108664e24; end: 108664ea7;  */

undefined8 *
FUN_108664e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 1;
  FUN_108664ea8(auStack_50);
  puVar2 = puStack_40;
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  puStack_40[2] = *param_4;
  puStack_40 = (undefined8 *)0x0;
  FUN_108664efc();
  func_0x0001086672f8(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar1[1] = uVar3;
  puVar2 = puVar1;
  FUN_108664ed0();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 108664ea8; end: 108664ecf;  */

long FUN_108664ea8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108664ed0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}


