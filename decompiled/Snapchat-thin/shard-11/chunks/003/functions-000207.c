/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083e8890; end: 1083e8897;  */

void FUN_1083e8890(void)

{
  return;
}



/* Entry: 1083e8898; end: 1083e8907;  */

ulong FUN_1083e8898(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0xc) == 0x29) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1083e897c();
    iVar2 = (int)*(undefined8 *)(param_2 + 0x10);
    FUN_1083e897c();
    if (iVar1 == iVar2) {
      uVar3 = (ulong)(*(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18));
    }
    else {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0xffffffff;
}



/* Entry: 1083e8908; end: 1083e891b;  */

undefined8 FUN_1083e8908(void)

{
  return 1;
}



/* Entry: 1083e891c; end: 1083e897b;  */

void FUN_1083e891c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x29;
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_110a459e0;
  puVar1[3] = uVar3;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083e897c; end: 1083e8987;  */

void FUN_1083e897c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083e8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* Entry: 1083e8988; end: 1083e8b43;  */

void FUN_1083e8988(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  if ((uVar1 >> 0xe & 1) != 0) {
    FUN_1083e8cd0(param_2,&UNK_10f49331e);
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if (((uVar1 >> 4 & 1) != 0) || ((uVar1 >> 5 & 1) != 0)) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    FUN_1083e8cd0();
    uVar1 = *param_2;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    FUN_1083e8cd0();
  }
  return;
}



/* Entry: 1083e8b44; end: 1083e8b8f;  */

void FUN_1083e8b44(long param_1)

{
  ulong uVar1;
  
  FUN_1083e8988();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 != 0) {
    func_0x00010791316c(param_1);
  }
  return;
}



/* Entry: 1083e8b90; end: 1083e8ccf;  */

undefined8 FUN_1083e8b90(uint *param_1,long param_2,undefined4 param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  uVar5 = *param_1;
  uVar4 = 1;
  ppuVar6 = &PTR_DAT_110a45a40;
  lVar7 = 0x130;
  do {
    uVar2 = *(uint *)(ppuVar6 + -1);
    if ((uVar2 & uVar5) != 0) {
      if ((uVar2 & param_4) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        func_0x000107c278b8(auStack_a8,*ppuVar6);
        func_0x0001004c3cd0(auStack_90,&UNK_10f49342b,auStack_a8);
        func_0x00010048a6c8(&ppuStack_78,auStack_90,&UNK_10f49342d);
        uVar1 = uStack_70;
        pppuVar3 = (undefined8 ***)ppuStack_78;
        if (-1 < (char)bStack_61) {
          uVar1 = (ulong)bStack_61;
          pppuVar3 = &ppuStack_78;
        }
        FUN_1083c8a60(uVar4,param_3,pppuVar3,uVar1);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_78);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
        uVar4 = 0;
      }
      uVar5 = uVar5 & (uVar2 ^ 0xffffffff);
    }
    lVar7 = lVar7 + -0x10;
    ppuVar6 = ppuVar6 + 2;
  } while (lVar7 != 0);
  return uVar4;
}



/* Entry: 1083e8cd0; end: 1083e8ce3;  */

void FUN_1083e8cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc_110346290)();
  return;
}



/* Entry: 1083e8ce4; end: 1083e8da7;  */

void FUN_1083e8ce4(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  bVar3 = *(byte *)(*(long *)(param_2 + 8) + 1);
  if (bVar3 < 7) {
    if ((((int)param_3[0xb] < 0) && ((int)param_3[0xc] < 0)) && ((int)param_3[0xd] < 0)) {
FUN_1083e8da8:
      puVar4 = (undefined8 *)0x48;
      FUN_1083d3a60();
      uVar1 = param_3[0xe];
      *(undefined4 *)(puVar4 + 1) = *param_3;
      *(undefined4 *)((long)puVar4 + 0xc) = 5;
      *puVar4 = &PTR_FUN_110a45b78;
      uVar7 = *(undefined8 *)(param_3 + 5);
      uVar6 = *(undefined8 *)(param_3 + 0xb);
      uVar5 = *(undefined8 *)(param_3 + 9);
      uVar2 = param_3[0xd];
      uVar9 = *(undefined8 *)(param_3 + 3);
      uVar8 = *(undefined8 *)(param_3 + 1);
      puVar4[5] = *(undefined8 *)(param_3 + 7);
      puVar4[4] = uVar7;
      puVar4[7] = uVar6;
      puVar4[6] = uVar5;
      puVar4[3] = uVar9;
      puVar4[2] = uVar8;
      *(undefined4 *)(puVar4 + 8) = uVar2;
      *(undefined4 *)((long)puVar4 + 0x44) = uVar1;
      *param_1 = puVar4;
      return;
    }
    if (((param_3[0xb] == 0) || (param_3[0xc] == 0)) || (param_3[0xd] == 0)) {
      FUN_1083e8edc();
    }
    else if (bVar3 == 2) {
      if (param_3[0xe] == 0x10) goto FUN_1083e8da8;
      FUN_1083e8edc();
    }
    else {
      FUN_1083e8edc();
    }
  }
  else {
    FUN_1083e8edc();
  }
  FUN_1083c8a60();
  *param_1 = 0;
  return;
}



/* Entry: 1083e8da8; end: 1083e8db7;  */

void FUN_1083e8da8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)0x48;
  FUN_1083d3a60();
  uVar1 = param_3[0xe];
  *(undefined4 *)(puVar3 + 1) = *param_3;
  *(undefined4 *)((long)puVar3 + 0xc) = 5;
  *puVar3 = &PTR_FUN_110a45b78;
  uVar6 = *(undefined8 *)(param_3 + 5);
  uVar5 = *(undefined8 *)(param_3 + 0xb);
  uVar4 = *(undefined8 *)(param_3 + 9);
  uVar2 = param_3[0xd];
  uVar8 = *(undefined8 *)(param_3 + 3);
  uVar7 = *(undefined8 *)(param_3 + 1);
  puVar3[5] = *(undefined8 *)(param_3 + 7);
  puVar3[4] = uVar6;
  puVar3[7] = uVar5;
  puVar3[6] = uVar4;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  *(undefined4 *)(puVar3 + 8) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x44) = uVar1;
  *param_1 = puVar3;
  return;
}



/* Entry: 1083e8db8; end: 1083e8e27;  */

void FUN_1083e8db8(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)0x48;
  FUN_1083d3a60();
  uVar1 = *param_4;
  *(undefined4 *)(puVar3 + 1) = *param_2;
  *(undefined4 *)((long)puVar3 + 0xc) = 5;
  *puVar3 = &PTR_FUN_110a45b78;
  uVar6 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  uVar2 = *(undefined4 *)(param_3 + 6);
  uVar8 = param_3[1];
  uVar7 = *param_3;
  puVar3[5] = param_3[3];
  puVar3[4] = uVar6;
  puVar3[7] = uVar5;
  puVar3[6] = uVar4;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  *(undefined4 *)(puVar3 + 8) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x44) = uVar1;
  *param_1 = puVar3;
  return;
}



/* Entry: 1083e8e28; end: 1083e8e2f;  */

void FUN_1083e8e28(void)

{
  return;
}



/* Entry: 1083e8e30; end: 1083e8edb;  */

void FUN_1083e8e30(undefined8 param_1,long param_2)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_1083e7ea0(auStack_50,param_2 + 0x10);
  FUN_1083e8b44(auStack_68,param_2 + 0x44);
  func_0x00010533a9c0(auStack_38,auStack_50,auStack_68);
  func_0x000107525ea8(param_1,auStack_38,0x3b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 1083e8edc; end: 1083e8ee7;  */

undefined1  [16] FUN_1083e8edc(long param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x10);
  auVar1._8_4_ = *param_2;
  auVar1._12_4_ = 0;
  return auVar1;
}



/* Entry: 1083e8ee8; end: 1083e9107;  */

void FUN_1083e8ee8(undefined8 *param_1,long param_2,ulong param_3,ulong *param_4,undefined1 param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [24];
  undefined1 *puStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined1 uStack_41;
  
  plVar1 = *(long **)(*param_4 + 0x10);
  uVar2 = param_3;
  uStack_41 = param_5;
  (**(code **)(*plVar1 + 0xe0))();
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = *(long **)(*param_4 + 0x10);
    (**(code **)(*plVar1 + 0x50))();
    (**(code **)(*plVar1 + 0x40))();
    if ((uint)plVar1 < 3) {
      uVar2 = *param_4;
      FUN_1083c3394(uVar2,2,*(undefined8 *)(param_2 + 0x10));
      if ((uVar2 & 1) != 0) {
        uVar2 = *param_4;
        *param_4 = 0;
        puVar3 = (undefined8 *)0x28;
        FUN_1083d3a60();
        uVar5 = *(undefined8 *)(uVar2 + 0x10);
        *(int *)(puVar3 + 1) = (int)param_3;
        *(undefined4 *)((long)puVar3 + 0xc) = 0x2c;
        *puVar3 = &PTR_FUN_110a45bb8;
        puVar3[2] = uVar5;
        puVar3[3] = uVar2;
        *(undefined1 *)(puVar3 + 4) = param_5;
        pppuStack_60 = (undefined8 ***)0x0;
        *param_1 = puVar3;
        FUN_1083e9350(&pppuStack_60);
        return;
      }
      goto LAB_1083e9078;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  puVar4 = &uStack_41;
  FUN_1083cb29c();
  puStack_d0 = puVar4;
  uStack_c8 = uVar2;
  func_0x000107c27958(auStack_c0,&puStack_d0);
  func_0x0001004c3cd0(auStack_a8,&DAT_10f638984,auStack_c0);
  func_0x00010048a6c8(auStack_90,auStack_a8,&UNK_10f492630);
  FUN_10831d8f8(auStack_e8,*(undefined8 *)(*param_4 + 0x10));
  func_0x00010533a9c0(auStack_78,auStack_90,auStack_e8);
  func_0x00010048a6c8(&pppuStack_60,auStack_78,&DAT_10f638984);
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    pppuStack_60 = &pppuStack_60;
  }
  FUN_1083c8a60(uVar5,param_3 & 0xffffffff,pppuStack_60,uStack_58);
  FUN_1083e938c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x0001083e9394();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
LAB_1083e9078:
  *param_1 = 0;
  return;
}



/* Entry: 1083e9108; end: 1083e925b;  */

void FUN_1083e9108(undefined8 param_1,long param_2,uint param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_d8 [31];
  undefined1 uStack_b9;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  pcVar1 = "(";
  if (2 < param_3) {
    pcVar1 = "";
  }
  func_0x000107c278b8(auStack_78,pcVar1);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x38))(auStack_90,*(long **)(param_2 + 0x18),2);
  puVar3 = auStack_90;
  func_0x00010533a9c0(auStack_60,auStack_78);
  uStack_b9 = *(undefined1 *)(param_2 + 0x20);
  puVar2 = &uStack_b9;
  FUN_1083cb29c();
  puStack_b8 = puVar2;
  puStack_b0 = puVar3;
  func_0x000107c27958(auStack_a8,&puStack_b8);
  func_0x00010533a9c0(auStack_48,auStack_60,auStack_a8);
  pcVar1 = ")";
  if (2 < param_3) {
    pcVar1 = "";
  }
  func_0x000107c278b8(auStack_d8,pcVar1);
  func_0x00010533a9c0(param_1,auStack_48,auStack_d8);
  func_0x0001083e9394();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x0001083e938c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 1083e925c; end: 1083e929b;  */

void FUN_1083e925c(void)

{
  func_0x0001083e939c();
  return;
}



/* Entry: 1083e929c; end: 1083e934f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083e929c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long alStack_40 [2];
  
  plVar3 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar3 + 0x30))(alStack_40,plVar3,(int)plVar3[1]);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  puVar4 = (undefined8 *)0x28;
  FUN_1083d3a60();
  lVar2 = alStack_40[0];
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined4 *)(puVar4 + 1) = param_3;
  *(undefined4 *)((long)puVar4 + 0xc) = 0x2c;
  *puVar4 = &PTR_FUN_110a45bb8;
  puVar4[2] = uVar5;
  puVar4[3] = lVar2;
  *(undefined1 *)(puVar4 + 4) = uVar1;
  *param_1 = puVar4;
  FUN_1083e9350(alStack_40 + 1);
  lVar2 = alStack_40[0];
  alStack_40[0] = 0;
  if (lVar2 != 0) {
    func_0x0001083e93a8();
  }
  return;
}



/* Entry: 1083e9350; end: 1083e938b;  */

long * FUN_1083e9350(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083c8734(lVar1 + 0x18);
    FUN_1083d3a98(lVar1);
  }
  return param_1;
}



/* Entry: 1083e938c; end: 1083e93bb;  */

void FUN_1083e938c(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0x50);
  return;
}



/* Entry: 1083e93bc; end: 1083e97a7;  */

void FUN_1083e93bc(undefined8 *param_1,ulong param_2,ulong param_3,byte param_4,ulong *param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plStack_100;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  byte *pbStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 ******ppppppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  byte bStack_51;
  
  plVar8 = *(long **)(*param_5 + 0x10);
  uVar2 = (uint)param_4;
  bStack_51 = param_4;
  if (uVar2 - 0x20 < 2) {
    uVar4 = param_2;
    func_0x0001083ea250();
    uVar2 = (uint)uVar4;
    if ((uVar4 & 1) == 0) {
      func_0x0001083ea260();
      func_0x0001083ea2cc();
      if (uVar2 < 3) {
        uVar4 = *param_5;
        FUN_1083c3394(uVar4,2,*(undefined8 *)(param_2 + 0x10));
        if ((uVar4 & 1) != 0) goto LAB_1083e95ec;
        goto LAB_1083e9690;
      }
    }
    func_0x0001083ea2f0();
    func_0x0001083ea2bc();
    func_0x0001083ea298();
    func_0x0001083ea270();
    func_0x0001083ea2d8();
    func_0x0001083ea2ac();
    func_0x0001083ea214();
    func_0x0001083ea238();
    func_0x0001083ea318();
LAB_1083e9668:
    func_0x0001083ea358();
    func_0x0001083ea350();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pbStack_b8);
    puVar7 = auStack_d0;
  }
  else {
    if (uVar2 == 0xb) {
      uVar5 = *(ulong *)(param_2 + 8);
      uVar4 = param_3;
      FUN_1083c5ae8();
      if ((int)uVar5 == 0) {
        func_0x0001083ea250();
        iVar3 = (int)uVar5;
        if ((uVar5 & 1) == 0) {
          func_0x0001083ea260();
          func_0x0001083ea2cc();
          if ((iVar3 - 1U & 0xff) < 2) goto LAB_1083e95ec;
        }
        func_0x0001083ea2f0();
        func_0x0001083ea2bc();
        func_0x0001083ea298();
        func_0x0001083ea270();
        func_0x0001083ea2d8();
        func_0x0001083ea2ac();
        func_0x0001083ea214();
        func_0x0001083ea238();
        func_0x0001083ea318();
        goto LAB_1083e9668;
      }
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      pbVar6 = &bStack_51;
      FUN_1083cb29c();
      pbStack_b8 = pbVar6;
      uStack_b0 = uVar4;
      func_0x000107c27958(auStack_a0,&pbStack_b8);
      func_0x0001083ea2e4(&UNK_10f49267c);
      func_0x00010048a6c8(&ppppppuStack_70,auStack_88,&UNK_10f492687);
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        ppppppuStack_70 = &ppppppuStack_70;
      }
      FUN_1083c8a60(uVar9,param_3 & 0xffffffff,ppppppuStack_70,uStack_68);
    }
    else if (uVar2 == 1) {
      uVar4 = param_2;
      func_0x0001083ea250();
      uVar2 = (uint)uVar4;
      if ((uVar4 & 1) == 0) {
        func_0x0001083ea260();
        func_0x0001083ea2cc();
        if (uVar2 < 3) goto LAB_1083e95ec;
      }
      func_0x0001083ea360();
      func_0x0001083ea2e4(&UNK_10f493546);
      func_0x0001083ea214();
      func_0x0001083ea238();
      func_0x0001083ea318();
    }
    else {
      if (uVar2 == 7) {
        (**(code **)(*plVar8 + 0x40))();
        if ((int)plVar8 == 3) {
LAB_1083e95ec:
          plStack_100 = (long *)*param_5;
          *param_5 = 0;
          FUN_1083e97a8(param_1,param_2,param_3 & 0xffffffff,param_4,&plStack_100);
          if (plStack_100 == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001083e9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plStack_100 + 8))();
          return;
        }
        func_0x0001083ea2f0();
        func_0x0001083ea2bc();
        func_0x0001083ea298();
        func_0x0001083ea270();
        func_0x0001083ea2d8();
        func_0x0001083ea2ac();
        func_0x0001083ea214();
        func_0x0001083ea238();
        func_0x0001083ea318();
        goto LAB_1083e9668;
      }
      if (param_4 != 0) {
        FUN_10841076c(&UNK_10f49355e);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083e96d0);
        (*pcVar1)();
      }
      uVar4 = param_2;
      func_0x0001083ea250();
      uVar2 = (uint)uVar4;
      if ((uVar4 & 1) == 0) {
        func_0x0001083ea260();
        func_0x0001083ea2cc();
        if (uVar2 < 3) goto LAB_1083e95ec;
      }
      func_0x0001083ea360();
      func_0x0001083ea2e4(&UNK_10f49352e);
      func_0x0001083ea214();
      func_0x0001083ea238();
      func_0x0001083ea318();
    }
    func_0x0001083ea358();
    func_0x0001083ea350();
    puVar7 = auStack_a0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
LAB_1083e9690:
  *param_1 = 0;
  return;
}



/* Entry: 1083e97a8; end: 1083e9b4b;  */

void FUN_1083e97a8(long *param_1,long param_2,ulong param_3,char param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long *plVar6;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar5 = (long *)*param_5;
  if (param_4 == '\v') {
    plVar6 = (long *)plVar5[2];
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0xc0))();
    if ((int)plVar5 != 0) {
      (**(code **)(*plVar6 + 200))(plVar6);
      lStack_70 = *param_5;
      *param_5 = 0;
      FUN_1083f1310(&lStack_48);
      lVar4 = lStack_48;
      lStack_48 = 0;
      lVar2 = *param_5;
      *param_5 = lVar4;
      if (lVar2 != 0) {
        func_0x0001083ea22c();
        lVar4 = lStack_48;
        lStack_48 = 0;
        if (lVar4 != 0) {
          func_0x0001083ea22c();
        }
      }
      lVar4 = lStack_70;
      lStack_70 = 0;
      if (lVar4 != 0) {
        func_0x0001083ea22c();
      }
    }
    plVar5 = (long *)*param_5;
    *param_5 = 0;
    plVar6 = plVar5;
    plStack_78 = plVar5;
    func_0x0001083c6674();
    iVar1 = *(int *)((long)plVar6 + 0xc);
    if ((iVar1 == 0x1d) || (iVar1 == 0x22)) {
LAB_1083e9964:
      FUN_1083ea0cc(param_1,param_2,param_3 & 0xffffffff,plVar6,0x1083ea1c8);
      if (*param_1 != 0) goto LAB_1083e9aa0;
      func_0x0001083ea3a4();
    }
    else if (iVar1 == 0x2d) {
      if ((char)plVar5[3] == '\v') {
LAB_1083e9a68:
        *(int *)(plVar5[4] + 8) = (int)param_3;
        lVar4 = plVar5[4];
        plVar5[4] = 0;
LAB_1083e9a78:
        *param_1 = lVar4;
        goto LAB_1083e9aa0;
      }
    }
    else if (iVar1 == 0x29) goto LAB_1083e9964;
    FUN_1083ea068(&lStack_48,param_3,0xb,&plStack_78);
    func_0x0001083ea284();
    plVar5 = plStack_78;
  }
  else if (param_4 == '\x01') {
    *param_5 = 0;
    plStack_60 = plVar5;
    FUN_1083e9d80(param_1,param_2,param_3 & 0xffffffff,plVar5);
    if (*param_1 != 0) goto LAB_1083e9aa0;
    func_0x0001083ea3a4();
    FUN_1083ea068(&lStack_48,param_3,1,&plStack_60);
    func_0x0001083ea284();
    plVar5 = plStack_60;
  }
  else {
    if (param_4 != '\a') {
      if (param_4 == '\0') {
        *(int *)(plVar5 + 1) = (int)param_3;
        lVar4 = *param_5;
        *param_5 = 0;
        *param_1 = lVar4;
        return;
      }
      func_0x0001083ea39c();
      lVar4 = *param_5;
      *param_5 = 0;
      func_0x0001083ea320(lVar4);
      *(char *)(param_2 + 0x18) = param_4;
      *(undefined8 *)(param_2 + 0x20) = extraout_x8;
      lStack_48 = 0;
      *param_1 = param_2;
      FUN_1083ea1d8(&lStack_48);
      return;
    }
    *param_5 = 0;
    plVar6 = plVar5;
    plStack_68 = plVar5;
    func_0x0001083c6674();
    iVar1 = *(int *)((long)plVar6 + 0xc);
    if (iVar1 == 0x19) {
      if (*(byte *)(plVar5 + 4) - 0x10 < 6) {
        uVar3 = *(undefined8 *)(&UNK_10df25b18 + ((ulong)(*(byte *)(plVar5 + 4) - 0x10) & 0xff) * 8)
        ;
        lStack_50 = plVar5[3];
        plVar5[3] = 0;
        lStack_58 = plVar5[5];
        plVar5[5] = 0;
        FUN_1083d9ab4(param_1,param_2,param_3 & 0xffffffff,&lStack_50,uVar3,&lStack_58,plVar5[2]);
        lVar4 = lStack_58;
        lStack_58 = 0;
        if (lVar4 != 0) {
          func_0x0001083ea22c();
        }
        lVar4 = lStack_50;
        lStack_50 = 0;
        if (lVar4 != 0) {
          func_0x0001083ea22c();
        }
        goto LAB_1083e9aa0;
      }
    }
    else if (iVar1 == 0x2d) {
      if ((char)plVar5[3] == '\a') goto LAB_1083e9a68;
    }
    else if (iVar1 == 0x29) {
      func_0x0001083c7bc0(&lStack_48,param_3 & 0xffffffff,(double)plVar6[3] == 0.0,plVar5[2]);
      lVar4 = lStack_48;
      goto LAB_1083e9a78;
    }
    FUN_1083ea068(&lStack_48,param_3,7,&plStack_68);
    func_0x0001083ea284();
    plVar5 = plStack_68;
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
LAB_1083e9aa0:
  (**(code **)(*plVar5 + 8))(plVar5);
  return;
}



/* Entry: 1083e9b4c; end: 1083e9caf;  */

void FUN_1083e9b4c(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [31];
  undefined1 uStack_a1;
  undefined1 *puStack_a0;
  char *pcStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  pcVar2 = "(";
  if (3 < param_3) {
    pcVar2 = "";
  }
  func_0x000107c278b8(auStack_78);
  uStack_a1 = *(undefined1 *)(param_2 + 0x18);
  puVar1 = &uStack_a1;
  FUN_1083cb29c();
  puStack_a0 = puVar1;
  pcStack_98 = pcVar2;
  func_0x000107c27958(auStack_90,&puStack_a0);
  func_0x00010533a9c0(auStack_60,auStack_78,auStack_90);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x38))(auStack_c0,*(long **)(param_2 + 0x20),3);
  func_0x00010533a9c0(auStack_48,auStack_60,auStack_c0);
  pcVar2 = ")";
  if (3 < param_3) {
    pcVar2 = "";
  }
  func_0x000107c278b8(auStack_d8,pcVar2);
  func_0x00010533a9c0(param_1,auStack_48,auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 1083e9cb0; end: 1083e9cef;  */

void FUN_1083e9cb0(void)

{
  func_0x0001083ea3ac();
  return;
}



/* Entry: 1083e9cf0; end: 1083e9d7f;  */

void FUN_1083e9cf0(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  plVar3 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar3 + 0x30))(&uStack_40,plVar3,(int)plVar3[1]);
  func_0x0001083ea39c();
  uVar2 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001083ea320(uVar2);
  *(undefined1 *)(plVar3 + 3) = uVar1;
  plVar3[4] = extraout_x8;
  *param_1 = (long)plVar3;
  puVar4 = &uStack_38;
  FUN_1083ea1d8();
  func_0x0001083ea3b8();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x0001083ea22c();
  }
  return;
}



/* Entry: 1083e9d80; end: 1083ea067;  */

void FUN_1083e9d80(undefined8 param_1,undefined4 param_2,long **param_3,long ***param_4)

{
  int iVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  undefined8 extraout_x8;
  long **pplVar10;
  long **pplVar11;
  long ***unaff_x19;
  long **UNRECOVERED_JUMPTABLE;
  undefined4 unaff_w21;
  long lVar12;
  undefined1 **ppuStack_a0;
  undefined1 ***pppuStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined1 **appuStack_78 [2];
  long **pplStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppplVar8 = (long ***)&ppuStack_a0;
  func_0x0001083ea370();
  ppplVar9 = param_4;
  uStack_58 = extraout_x8;
  func_0x0001083c6674();
  iVar1 = *(int *)((long)param_4 + 0xc);
  uVar4 = iVar1 + -0x1b == 7;
  ppplVar7 = param_4;
  switch(iVar1 + -0x1b) {
  case 0:
    FUN_1083c2fd8();
    if ((int)ppplVar7 == 0) break;
    UNRECOVERED_JUMPTABLE = param_4[2];
    pplStack_68 = (long **)appuStack_78;
    uStack_60 = 0x400000000;
    param_2 = *(undefined4 *)(param_4 + 6);
    func_0x0001083c7ec0(&pplStack_68);
    pplVar10 = param_4[5];
    for (lVar12 = (long)*(int *)(param_4 + 6) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
      func_0x0001083ea340();
      if ((long **)ppuStack_80 == (long **)0x0) {
        plVar6 = *pplVar10;
        (**(code **)(*plVar6 + 0x30))(&pppuStack_98,plVar6,(int)plVar6[1]);
        FUN_1083ea068(&lStack_90);
        lStack_88 = lStack_90;
        lStack_90 = 0;
        param_2 = SUB84(&lStack_88,0);
        FUN_1083c7ed8(&pplStack_68);
        lVar2 = lStack_88;
        lStack_88 = 0;
        if (lVar2 != 0) {
          func_0x0001083ea22c();
        }
        FUN_1083ea1d8(&lStack_90);
        ppplVar7 = (long ***)pppuStack_98;
        pppuStack_98 = (undefined1 ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          func_0x0001083ea22c();
        }
      }
      else {
        ppplVar7 = &pplStack_68;
        param_2 = SUB84(&ppuStack_80,0);
        FUN_1083c7ed8();
      }
      func_0x0001083ea3c4();
      if (ppplVar7 != (long ***)0x0) {
        func_0x0001083ea22c();
      }
      pplVar10 = pplVar10 + 1;
    }
    param_4 = (long ***)appuStack_78;
    func_0x0001083ea38c();
    FUN_1083dbd64();
    ppplVar7 = &pplStack_68;
    FUN_1083c81d4();
    goto LAB_1083e9fac;
  case 1:
  case 3:
  case 5:
  case 6:
    break;
  case 2:
  case 7:
code_r0x0001083e9ee4:
    ppplVar7 = unaff_x19;
    param_2 = unaff_w21;
    FUN_1083ea0cc();
    if (*unaff_x19 != (long **)0x0) goto LAB_1083e9fac;
    func_0x0001083ea3a4();
    param_3 = UNRECOVERED_JUMPTABLE;
    ppplVar9 = param_4;
    break;
  case 4:
    FUN_1083c2fd8();
    if ((int)ppplVar7 != 0) {
      ppplVar9 = (long ***)param_4[3];
      func_0x0001083ea340();
      ppuVar3 = ppuStack_80;
      if ((long **)ppuStack_80 != (long **)0x0) {
        UNRECOVERED_JUMPTABLE = param_4[2];
        ppuStack_80 = (undefined1 **)0x0;
        ppuStack_a0 = ppuVar3;
        func_0x0001083ea38c();
        FUN_1083dd20c();
        func_0x0001083ea3b8();
        param_4 = ppplVar8;
        if (ppplVar7 != (long ***)0x0) {
          func_0x0001083ea22c();
          param_4 = ppplVar8;
        }
        func_0x0001083ea3c4();
        if (ppplVar7 != (long ***)0x0) {
          func_0x0001083ea22c();
        }
        goto LAB_1083e9fac;
      }
    }
    break;
  default:
    if (iVar1 == 0x2d) {
      bVar5 = *(char *)(param_4 + 3) == '\x01';
      uVar4 = 0;
      if (bVar5) {
        ppplVar7 = (long ***)param_4[4];
        UNRECOVERED_JUMPTABLE = (long **)(*ppplVar7)[6];
        func_0x0001083ea2fc(uStack_58);
        if (bVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001083e9fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)UNRECOVERED_JUMPTABLE)();
          return;
        }
        goto LAB_1083e9fd4;
      }
    }
    else {
      uVar4 = iVar1 == 0x29;
      if ((bool)uVar4) goto code_r0x0001083e9ee4;
    }
  }
  param_4 = ppplVar9;
  UNRECOVERED_JUMPTABLE = param_3;
  *unaff_x19 = (long **)0x0;
LAB_1083e9fac:
  func_0x0001083ea2fc(uStack_58);
  ppplVar9 = param_4;
  if ((bool)uVar4) {
    return;
  }
LAB_1083e9fd4:
  uVar4 = SUB81(UNRECOVERED_JUMPTABLE,0);
  ___stack_chk_fail();
  func_0x0001083ea3b8();
  if (ppplVar7 != (long ***)0x0) {
    func_0x0001083ea22c();
  }
  func_0x0001083ea3c4();
  if (ppplVar7 != (long ***)0x0) {
    func_0x0001083ea22c();
  }
  func_0x0001083ea310();
  ppplVar8 = ppplVar7;
  func_0x0001083ea39c();
  pplVar10 = *ppplVar9;
  *ppplVar9 = (long **)0x0;
  pplVar11 = (long **)pplVar10[2];
  *(undefined4 *)(ppplVar8 + 1) = param_2;
  *(undefined4 *)((long)ppplVar8 + 0xc) = 0x2d;
  ppplVar8[2] = pplVar11;
  *ppplVar8 = (long **)&PTR_FUN_110a45c20;
  *(undefined1 *)(ppplVar8 + 3) = uVar4;
  ppplVar8[4] = pplVar10;
  *ppplVar7 = (long **)ppplVar8;
  return;
}



/* Entry: 1083ea068; end: 1083ea0cb;  */

void FUN_1083ea068(undefined8 *param_1,undefined4 param_2,undefined1 param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x0001083ea39c();
  lVar2 = *param_4;
  *param_4 = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x2d;
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_110a45c20;
  *(undefined1 *)(puVar1 + 3) = param_3;
  puVar1[4] = lVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083ea0cc; end: 1083ea1bf;  */

long * FUN_1083ea0cc(long *param_1)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *in_x3;
  code *in_x4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long *plVar7;
  long alStack_e8 [16];
  undefined8 uStack_68;
  
  plVar3 = in_x3;
  func_0x0001083ea370();
  plVar3 = (long *)plVar3[2];
  uStack_68 = extraout_x8;
  (**(code **)(*plVar3 + 0x50))();
  plVar4 = (long *)in_x3[2];
  (**(code **)(*plVar4 + 0x80))();
  uVar1 = plVar4 == (long *)0x10;
  if (plVar4 < (long *)0x11) {
    plVar7 = (long *)0x0;
    do {
      uVar1 = plVar4 == plVar7;
      if ((bool)uVar1) {
        func_0x0001083ea38c();
        FUN_1083dcad4();
        goto LAB_1083ea17c;
      }
      plVar5 = in_x3;
      plVar6 = plVar7;
      (**(code **)(*in_x3 + 0x28))();
      if (((ulong)plVar6 & 1) == 0) break;
      (*in_x4)();
      alStack_e8[(long)plVar7] = (long)plVar5;
      iVar2 = (int)plVar3;
      FUN_1083f1734();
      plVar7 = (long *)((long)plVar7 + 1);
      param_1 = plVar5;
    } while (iVar2 == 0);
  }
  *unaff_x19 = 0;
LAB_1083ea17c:
  func_0x0001083ea2fc(uStack_68);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  return (long *)-(double)param_1;
}



/* Entry: 1083ea1c0; end: 1083ea1d7;  */

double FUN_1083ea1c0(double param_1)

{
  return -param_1;
}



/* Entry: 1083ea1d8; end: 1083ea213;  */

long * FUN_1083ea1d8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083c8734(lVar1 + 0x20);
    FUN_1083d3a98(lVar1);
  }
  return param_1;
}



/* Entry: 1083ea214; end: 1083ea3cf;  */

void FUN_1083ea214(void)

{
  long unaff_x29;
  
  func_0x000107c60c58(unaff_x29 + -0x60,unaff_x29 + -0x78,&DAT_10f638984);
  func_0x00010048a6e8();
  return;
}



/* Entry: 1083ea3d0; end: 1083ea527;  */

undefined8 *
FUN_1083ea3d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  uVar4 = *param_2;
  *param_2 = 0;
  uVar6 = *param_3;
  *param_3 = 0;
  param_1[1] = uVar6;
  *param_1 = uVar4;
  lVar5 = param_4[1];
  uVar4 = *param_4;
  param_1[3] = param_4[1];
  param_1[2] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = 0;
  uVar4 = *param_6;
  *param_6 = 0;
  param_1[5] = uVar4;
  uVar4 = *param_7;
  *param_7 = 0;
  param_1[6] = uVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar4 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = uVar4;
  param_1[9] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1083d6f98(&uStack_68,param_1);
  uVar4 = uStack_68;
  uStack_68 = 0;
  FUN_1083c6444(param_1 + 4,uVar4);
  func_0x0001083c6424(&uStack_68);
  return param_1;
}



/* Entry: 1083ea528; end: 1083ea5df;  */

long FUN_1083ea528(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *extraout_x8;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  ppuVar2 = &PTR___tlv_bootstrap_11340dca8;
  if (puVar3 != (undefined8 *)0x0) {
    ppuVar1 = ppuVar2;
    (*(code *)PTR___tlv_bootstrap_11340dca8)(*puVar3);
    *ppuVar1 = extraout_x8;
  }
  FUN_1083c63bc(param_1 + 0x38);
  FUN_1083ea5e0(param_1 + 0x10);
  FUN_1083c5f2c(param_1 + 0x28,0);
  if (puVar3 != (undefined8 *)0x0) {
    (*(code *)PTR___tlv_bootstrap_11340dca8)();
    *ppuVar2 = (undefined *)0x0;
  }
  func_0x0001083ea668(param_1 + 0x50);
  func_0x0001083c635c(param_1 + 0x38);
  FUN_1083c6160((undefined8 *)(param_1 + 0x30));
  func_0x0001083c5f0c(param_1 + 0x28);
  func_0x0001083c6424(param_1 + 0x20);
  func_0x0001083c5ee4(param_1 + 0x10);
  func_0x0001083c6128(param_1 + 8);
  func_0x0001073f21b4(param_1,0);
  return param_1;
}



/* Entry: 1083ea5e0; end: 1083ea60b;  */

void FUN_1083ea5e0(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1083c5ee4(&uStack_20);
  return;
}



/* Entry: 1083ea60c; end: 1083ea69b;  */

void FUN_1083ea60c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  _strlen(param_2);
  FUN_1083c9bd0(uVar2,param_2,uVar1);
  return;
}



/* Entry: 1083ea69c; end: 1083ea6b3;  */

void FUN_1083ea69c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083ea6b4; end: 1083ea8cb;  */

undefined8 FUN_1083ea6b4(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *apuStack_108 [7];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372b330 & 1) == 0) {
    unaff_x19 = 0x11372b330;
    lVar3 = unaff_x19;
    ___cxa_guard_acquire();
    if ((int)lVar3 != 0) {
      apuStack_108[0] = &UNK_10f493624;
      apuStack_108[2] = (undefined *)0x1b;
      apuStack_108[1] = (undefined *)0x1a;
      apuStack_108[3] = &UNK_10f49363f;
      apuStack_108[5] = (undefined *)0x1c;
      apuStack_108[4] = (undefined *)0x2b;
      apuStack_108[6] = &UNK_10f49366b;
      uStack_c8 = 0x1a;
      uStack_d0 = 0x1c;
      puStack_c0 = &UNK_10f493688;
      uStack_b0 = 0x11;
      uStack_b8 = 0xd;
      uStack_98 = 7;
      uStack_a0 = 0xe;
      puStack_a8 = &UNK_10f493696;
      puStack_90 = &UNK_10f4936a5;
      uStack_80 = 0x14;
      uStack_88 = 0x19;
      uStack_68 = 0x25;
      uStack_70 = 0x1b;
      puStack_78 = &UNK_10f4936bf;
      puStack_60 = &UNK_10f4936db;
      uStack_50 = 0x28;
      uStack_58 = 0x16;
      uStack_130 = 0;
      uStack_128 = 0;
      FUN_1083eab20(&uStack_130,0x10);
      lVar3 = 0;
      do {
        if (lVar3 == 0xc0) goto LAB_1083ea870;
        uStack_118 = *(undefined8 *)((long)apuStack_108 + lVar3 + 8);
        uStack_120 = *(undefined8 *)((long)apuStack_108 + lVar3);
        uStack_110 = *(undefined8 *)((long)apuStack_108 + lVar3 + 0x10);
        if (uStack_130._4_4_ * 3 <= (int)uStack_130 * 4) {
          iVar1 = uStack_130._4_4_ << 1;
          if (uStack_130._4_4_ < 1) {
            iVar1 = 4;
          }
          FUN_1083eab20(&uStack_130,iVar1);
        }
        FUN_1083eac14(&uStack_130,&uStack_120);
        lVar3 = lVar3 + 0x18;
      } while( true );
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
LAB_1083ea870:
    uVar2 = uStack_128;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 8) = uStack_130;
    uStack_128 = 0;
    FUN_1083eabfc((undefined8 *)(unaff_x19 + 0x10),uVar2);
    uStack_130 = 0;
    FUN_1083ead54(&uStack_128);
    ___cxa_guard_release(unaff_x19);
  }
  return 0x11372b338;
}



/* Entry: 1083ea8cc; end: 1083eaa2b;  */

void FUN_1083ea8cc(undefined8 *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if (*(byte *)(param_2[1] + 1) < 0xf &&
      (1 << (ulong)(*(byte *)(param_2[1] + 1) & 0x1f) & 0x6380U) != 0) {
    FUN_1083c8a60(param_2[2],param_3,&UNK_10f4935ed,0x1a);
  }
  else {
    FUN_1083ea6b4();
    lVar2 = 0x11372b338;
    FUN_1083eaa2c(0x11372b338,param_4);
    if (lVar2 != 0) {
      uStack_40 = *(ulong *)(*param_2 + 0xc0);
      FUN_1083eaaac(&uStack_38,&stack0xffffffffffffffdc,&stack0xffffffffffffffd0,&uStack_40);
      uVar1 = uStack_38;
      uStack_38 = 0;
      *param_1 = uVar1;
      func_0x0001083ead84(&uStack_38);
      return;
    }
    lVar2 = param_2[2];
    func_0x000107c27958(auStack_78,param_4);
    func_0x0001004c3cd0(auStack_60,&UNK_10f493608,auStack_78);
    func_0x00010048a6c8(&pppuStack_48,auStack_60,&UNK_10f493622);
    if (-1 < (char)uStack_38._7_1_) {
      uStack_40 = (ulong)uStack_38._7_1_;
      pppuStack_48 = &pppuStack_48;
    }
    FUN_1083c8a60(lVar2,param_3,pppuStack_48,uStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083eaa2c; end: 1083eaa4b;  */

long FUN_1083eaa2c(long param_1)

{
  long lVar1;
  
  FUN_1083eadc8();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}



/* Entry: 1083eaa4c; end: 1083eaaab;  */

void FUN_1083eaa4c(undefined8 *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_40 = *(undefined8 *)(*param_2 + 0xc0);
  uStack_30 = param_4;
  uStack_24 = param_3;
  FUN_1083eaaac(&uStack_38,&uStack_24,&uStack_30,&uStack_40);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  func_0x0001083ead84(&uStack_38);
  return;
}



/* Entry: 1083eaaac; end: 1083eab0b;  */

void FUN_1083eaaac(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar2 = *param_3;
  uVar3 = *param_4;
  *(undefined4 *)(puVar1 + 1) = *param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x2e;
  *puVar1 = &PTR_DAT_110a45c88;
  puVar1[2] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083eab0c; end: 1083eab1f;  */

void FUN_1083eab0c(long param_1,long param_2)

{
  undefined8 uStack_20;
  undefined1 uStack_15;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  uStack_15 = *(undefined1 *)(param_2 + *(long *)(param_1 + 0x18));
  func_0x0001083c7c48(&uStack_14,&uStack_15,&uStack_20);
  return;
}



/* Entry: 1083eab20; end: 1083eabfb;  */

void FUN_1083eab20(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar3 = (long *)(param_1 + 2);
  lVar5 = *plVar3;
  *plVar3 = 0;
  lVar6 = (long)param_2;
  puVar2 = (undefined8 *)(lVar6 << 5 | 0x10);
  if (param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  lStack_48 = lVar5;
  __Znam();
  *puVar2 = 0x20;
  puVar2[1] = lVar6;
  if (param_2 != 0) {
    lVar6 = lVar6 << 5;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar2 + 4;
    } while (lVar6 != 0);
  }
  FUN_1083eabfc(plVar3);
  lVar5 = lVar5 + 8;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*(int *)(lVar5 + -8) != 0) {
      FUN_1083eac14(param_1,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  FUN_1083ead54(&lStack_48);
  return;
}



/* Entry: 1083eabfc; end: 1083eac13;  */

void FUN_1083eabfc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 5;
      do {
        if (*(int *)(lVar1 + -0x20 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x20 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083eac14; end: 1083eace7;  */

void FUN_1083eac14(int *param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong uVar6;
  
  puVar4 = param_2;
  FUN_1083ead14();
  uVar2 = param_1[1];
  uVar5 = (ulong)uVar2;
  uVar3 = (uint)puVar4;
  while( true ) {
    if ((int)uVar5 < 1) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)(uVar2 - 1 & uVar3) * 0x20);
    if (*puVar1 == 0) break;
    if (uVar3 == *puVar1) {
      uVar5 = *param_2;
      FUN_10821b208(uVar5,param_2[1],*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      if ((uVar5 & 1) != 0) {
        if (*puVar1 != 0) {
          *puVar1 = 0;
        }
        uVar6 = param_2[1];
        uVar5 = *param_2;
        *(ulong *)(puVar1 + 6) = param_2[2];
        *(ulong *)(puVar1 + 4) = uVar6;
        *(ulong *)(puVar1 + 2) = uVar5;
        *puVar1 = uVar3;
        return;
      }
    }
    func_0x0001083eafd8();
    uVar5 = extraout_x8;
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(ulong *)(puVar1 + 6) = param_2[2];
  *(ulong *)(puVar1 + 4) = uVar6;
  *(ulong *)(puVar1 + 2) = uVar5;
  *puVar1 = uVar3;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1083eace8; end: 1083ead13;  */

void FUN_1083eace8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) << 5;
    do {
      if (*(int *)(param_1 + -0x20 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x20 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083ead14; end: 1083ead53;  */

uint FUN_1083ead14(uint param_1)

{
  func_0x0001083ead30();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083ead54; end: 1083eadab;  */

long * FUN_1083ead54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083eace8();
  }
  return param_1;
}



/* Entry: 1083eadac; end: 1083eadc7;  */

void FUN_1083eadac(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083eadc8; end: 1083eae5f;  */

uint * FUN_1083eadc8(long param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  
  puVar3 = param_2;
  FUN_1083ead14();
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar4 < 1) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)(uVar2 - 1 & (uint)puVar3) * 0x20);
    if (*puVar1 == 0) break;
    if ((uint)puVar3 == *puVar1) {
      uVar4 = *param_2;
      FUN_10821b208(uVar4,param_2[1],*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      if ((uVar4 & 1) != 0) {
        return puVar1 + 2;
      }
    }
    func_0x0001083eafd8();
    uVar4 = extraout_x8;
  }
  return (uint *)0x0;
}



/* Entry: 1083eae60; end: 1083eae63;  */

void FUN_1083eae60(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083eae64; end: 1083eaecf;  */

void FUN_1083eae64(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x2e;
  *puVar1 = &PTR_DAT_110a45c88;
  puVar1[2] = uVar3;
  puVar1[3] = uVar2;
  uStack_38 = 0;
  *param_1 = puVar1;
  func_0x0001083ead84(&uStack_38);
  return;
}



/* Entry: 1083eaed0; end: 1083eafcf;  */

void FUN_1083eaed0(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  FUN_1083ea6b4();
  uVar3 = 0;
  piVar5 = piRam000000011372b340;
  while ((uVar4 = (ulong)uRam000000011372b33c,
         (uRam000000011372b33c & ((int)uRam000000011372b33c >> 0x1f ^ 0xffffffffU)) != uVar3 &&
         (uVar4 = uVar3, *piVar5 == 0))) {
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + 8;
  }
  do {
    if ((uint)uVar4 == uRam000000011372b33c) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083eafc0);
      (*pcVar2)();
    }
    lVar6 = (long)(int)(uint)uVar4;
    if (*(long *)(piRam000000011372b340 + lVar6 * 8 + 6) == *(long *)(param_2 + 0x18)) {
      uStack_48 = *(undefined8 *)(piRam000000011372b340 + lVar6 * 8 + 4);
      uStack_50 = *(undefined8 *)(piRam000000011372b340 + lVar6 * 8 + 2);
      func_0x000107c27958(auStack_38,&uStack_50);
      func_0x0001004c3cd0(param_1,&UNK_10f4936f2,auStack_38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
      return;
    }
    uVar3 = uVar4;
    piVar5 = piRam000000011372b340 + lVar6 * 8 + 8;
    do {
      lVar6 = lVar6 + 1;
      uVar4 = (ulong)uRam000000011372b33c;
      if ((int)uRam000000011372b33c <= lVar6) break;
      iVar1 = *piVar5;
      uVar3 = (ulong)((int)uVar3 + 1);
      uVar4 = uVar3;
      piVar5 = piVar5 + 8;
    } while (iVar1 == 0);
  } while( true );
}



/* Entry: 1083eafd0; end: 1083eafef;  */

void FUN_1083eafd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083eaff0; end: 1083eb0ff;  */

void FUN_1083eaff0(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_1083d2d60(auStack_58,param_6);
  FUN_1083efbdc(&lStack_48,param_2,param_3,param_4,param_5,auStack_58,0);
  func_0x0001083d2d14(auStack_58);
  lStack_60 = lStack_48;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lStack_48 = 0;
  FUN_1083e7a3c(uVar2,param_2,&lStack_60);
  lVar1 = lStack_60;
  lStack_60 = 0;
  if (lVar1 != 0) {
    func_0x0001083eb2d0();
  }
  FUN_1083eb100(param_1,param_3,uVar2);
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    func_0x0001083eb2d0();
  }
  return;
}



/* Entry: 1083eb100; end: 1083eb123;  */

void FUN_1083eb100(undefined4 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_1083eb124(&uStack_14);
  return;
}



/* Entry: 1083eb124; end: 1083eb177;  */

void FUN_1083eb124(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  FUN_1083d3a60();
  *(undefined4 *)(puVar1 + 1) = *param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 6;
  *puVar1 = &PTR_FUN_110a45cf0;
  puVar1[2] = param_3;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083eb178; end: 1083eb2c7;  */

void FUN_1083eb178(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c278b8(param_1,&UNK_10f48d203);
  uStack_48 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x18);
  uStack_50 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  func_0x0001073727b8(param_1,&uStack_50);
  puVar2 = &UNK_10f4936fb;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
  plVar1 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar1 + 0x90))();
  for (lVar3 = (long)puVar2 * 0x58; lVar3 != 0; lVar3 = lVar3 + -0x58) {
    FUN_1083e8484(&uStack_50,(long)plVar1 + 4);
    func_0x0001083eb2dc();
    func_0x0001083eb2e8();
    FUN_1083e8b44(&uStack_50,plVar1 + 7);
    func_0x0001083eb2dc();
    func_0x0001083eb2e8();
    func_0x0001083eb2f0();
    (**(code **)(*(long *)plVar1[10] + 0x10))(&uStack_50);
    func_0x0001083eb2dc();
    func_0x0001083eb2e8();
    func_0x0001083eb2f0();
    func_0x0001073727b8(param_1,plVar1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,"; ");
    plVar1 = plVar1 + 0xb;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (param_1,&UNK_10f48d5e2);
  return;
}



/* Entry: 1083eb2c8; end: 1083eb2fb;  */

void FUN_1083eb2c8(void)

{
  return;
}



/* Entry: 1083eb2fc; end: 1083eb3af;  */

void FUN_1083eb2fc(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  FUN_1083d3a60();
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x17;
  *puVar1 = &PTR_FUN_110a45d30;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = param_3;
  puVar1[4] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083eb3b0; end: 1083eb4e3;  */

void FUN_1083eb3b0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(auStack_38);
    func_0x0001004c3cd0(param_1,&UNK_10f4936ff,auStack_38);
    puVar1 = auStack_38;
  }
  else {
    __ZNSt3__19to_stringEx(auStack_68,*(undefined8 *)(param_2 + 0x18));
    func_0x0001004c3cd0(auStack_50,&UNK_10f48d1dc,auStack_68);
    func_0x00010048a6c8(auStack_38,auStack_50,&UNK_10f49370a);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(auStack_80);
    func_0x00010533a9c0(param_1,auStack_38,auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    puVar1 = auStack_68;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  return;
}



/* Entry: 1083eb4e4; end: 1083eb523;  */

void FUN_1083eb4e4(void)

{
  func_0x0001083eb530();
  return;
}



/* Entry: 1083eb524; end: 1083eb53b;  */

void FUN_1083eb524(void)

{
  return;
}



/* Entry: 1083eb53c; end: 1083eb623;  */

void FUN_1083eb53c(undefined8 param_1,long param_2)

{
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x38))(auStack_68,*(long **)(param_2 + 0x10),0x11);
  func_0x0001004c3cd0(auStack_50,&UNK_10f48d1c6,auStack_68);
  func_0x00010048a6c8(auStack_38,auStack_50,&UNK_10f48d1ae);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(auStack_80);
  func_0x00010533a9c0(param_1,auStack_38,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  func_0x0001083ec328();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 1083eb624; end: 1083ebf2b;  */

void FUN_1083eb624(undefined8 *param_1,long *param_2,undefined4 param_3,long *param_4,long param_5,
                  long param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  long **pplVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  bool bVar25;
  undefined8 uStack_140;
  long *plStack_138;
  long *aplStack_130 [3];
  undefined **appuStack_118 [3];
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  byte bStack_e9;
  long *plStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [32];
  long alStack_90 [2];
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(*param_2 + 0x40);
  lStack_c0 = *param_4;
  *param_4 = 0;
  FUN_1083f1310(alStack_90,uVar6,&lStack_c0,param_2);
  lVar15 = alStack_90[0];
  alStack_90[0] = 0;
  lVar7 = *param_4;
  *param_4 = lVar15;
  if (lVar7 != 0) {
    FUN_1083ec2f8();
    lVar15 = alStack_90[0];
    alStack_90[0] = 0;
    if (lVar15 != 0) {
      FUN_1083ec2f8();
    }
  }
  lVar15 = lStack_c0;
  lStack_c0 = 0;
  if (lVar15 != 0) {
    FUN_1083ec2f8();
  }
  if (*param_4 == 0) {
    *param_1 = 0;
  }
  else {
    plStack_80 = alStack_90;
    uStack_78 = 0x400000000;
    for (lVar15 = 0; lVar15 < *(int *)(param_5 + 0x18); lVar15 = lVar15 + 1) {
      lVar7 = *(long *)(*(long *)(param_5 + 0x10) + lVar15 * 8);
      if (lVar7 == 0) {
        if (*(int *)(param_6 + 0x18) <= lVar15) {
LAB_1083ebd9c:
          func_0x0001083ec314();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1083ebda4);
          (*pcVar5)();
        }
        lStack_d8 = *(long *)(*(long *)(param_6 + 0x10) + lVar15 * 8);
        *(undefined8 *)(*(long *)(param_6 + 0x10) + lVar15 * 8) = 0;
        func_0x0001083eb354(appuStack_118,param_3,&lStack_d8);
        uStack_100 = appuStack_118[0];
        appuStack_118[0] = (undefined **)0x0;
        pplVar9 = &plStack_80;
        FUN_1083d09d4(pplVar9,&uStack_100);
        func_0x0001083ec360();
        if (pplVar9 != (long **)0x0) {
          FUN_1083ec2f8();
        }
        func_0x0001083ec2c0(appuStack_118);
        lVar7 = lStack_d8;
        lStack_d8 = 0;
        if (lVar7 != 0) {
          FUN_1083ec2f8();
        }
      }
      else {
        uVar3 = *(undefined4 *)(lVar7 + 8);
        uVar6 = *(undefined8 *)(*param_4 + 0x10);
        *(undefined8 *)(*(long *)(param_5 + 0x10) + lVar15 * 8) = 0;
        lStack_c8 = lVar7;
        FUN_1083f1310(&uStack_100,uVar6,&lStack_c8,param_2);
        lVar7 = lStack_c8;
        lStack_c8 = 0;
        if (lVar7 != 0) {
          FUN_1083ec2f8();
        }
        if (uStack_100 == (undefined **)0x0) {
          *param_1 = 0;
          goto LAB_1083ebcc8;
        }
        ppuVar8 = uStack_100;
        FUN_1083c6640(uStack_100,appuStack_118);
        if (((ulong)ppuVar8 & 1) == 0) {
          lVar7 = param_2[2];
          FUN_1083c8a60(lVar7,uVar3,&UNK_10f49370e,0x25);
        }
        else {
          if (*(int *)(param_6 + 0x18) <= lVar15) goto LAB_1083ebd9c;
          lStack_d0 = *(long *)(*(long *)(param_6 + 0x10) + lVar15 * 8);
          *(undefined8 *)(*(long *)(param_6 + 0x10) + lVar15 * 8) = 0;
          FUN_1083eb2fc(&plStack_e8,uVar3,appuStack_118[0],&lStack_d0);
          aplStack_130[0] = plStack_e8;
          plStack_e8 = (long *)0x0;
          FUN_1083d09d4(&plStack_80,aplStack_130);
          plVar20 = aplStack_130[0];
          aplStack_130[0] = (long *)0x0;
          if (plVar20 != (long *)0x0) {
            FUN_1083ec2f8();
          }
          func_0x0001083ec2c0(&plStack_e8);
          lVar7 = lStack_d0;
          lStack_d0 = 0;
          if (lVar7 != 0) {
            FUN_1083ec2f8();
          }
        }
        func_0x0001083ec360();
        if (lVar7 != 0) {
          FUN_1083ec2f8();
        }
        if (((ulong)ppuVar8 & 1) == 0) {
          func_0x0001083ec314();
          goto LAB_1083ebcc8;
        }
      }
    }
    bVar25 = false;
    func_0x0001083ec314();
    plStack_e8 = (long *)0x0;
    uStack_e0 = 0x100000000;
    uStack_100 = (undefined **)0x0;
    ppuStack_f8 = (undefined **)0x0;
    plVar21 = plStack_80 + (int)uStack_78;
    for (plVar20 = plStack_80; ppuVar8 = ppuStack_f8, plVar20 != plVar21; plVar20 = plVar20 + 1) {
      if (*(char *)(*plVar20 + 0x10) == '\x01') {
        if (bVar25) {
          func_0x0001083ec354();
        }
        bVar25 = true;
      }
      else {
        plVar23 = *(long **)(*plVar20 + 0x18);
        uVar4 = uStack_100._4_4_;
        uVar22 = (uint)&plStack_b8;
        plStack_b8 = plVar23;
        FUN_1083ec018();
        uVar1 = uVar22 & uVar4 - 1;
        uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        uVar16 = (ulong)uVar2;
        uVar11 = uVar16;
        while (uVar2 != 0) {
          uVar2 = *(uint *)(ppuVar8 + (long)(int)uVar1 * 2);
          if (uVar2 == 0) break;
          if ((uVar22 == uVar2) && (plVar23 == (long *)(ppuVar8 + (long)(int)uVar1 * 2)[1])) {
            func_0x0001083ec354();
            goto LAB_1083eb9e4;
          }
          uVar2 = 0;
          if ((int)uVar1 < 1) {
            uVar2 = uVar4;
          }
          uVar1 = (uVar1 + uVar2) - 1;
          uVar2 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar2;
        }
        aplStack_130[0] = plVar23;
        if ((int)(uVar4 * 3) <= (int)uStack_100 * 4) {
          uVar22 = uVar4 << 1;
          if ((int)uVar4 < 1) {
            uVar22 = 4;
          }
          uStack_100 = (undefined **)((ulong)uVar22 << 0x20);
          ppuStack_f8 = (undefined **)0x0;
          appuStack_118[0] = ppuVar8;
          puVar10 = (undefined8 *)(((ulong)(uVar22 >> 1) & 0x3fffffff) << 5 | 0x10);
          __Znam();
          *puVar10 = 0x10;
          puVar10[1] = (ulong)uVar22;
          ppuStack_f8 = (undefined **)(puVar10 + 2);
          if (uVar22 != 0) {
            lVar15 = (ulong)uVar22 << 4;
            ppuVar12 = ppuStack_f8;
            do {
              *(undefined4 *)ppuVar12 = 0;
              lVar15 = lVar15 + -0x10;
              ppuVar12 = ppuVar12 + 2;
            } while (lVar15 != 0);
          }
          ppuVar8 = ppuVar8 + 1;
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            if (*(int *)(ppuVar8 + -1) != 0) {
              FUN_1083ec03c(&uStack_100,ppuVar8);
            }
            ppuVar8 = ppuVar8 + 2;
          }
          FUN_1083ec104(appuStack_118);
        }
        FUN_1083ec03c(&uStack_100,aplStack_130);
      }
LAB_1083eb9e4:
    }
    func_0x0001083ec348();
    if ((int)uStack_e0 == 0) {
      FUN_1083f8808(aplStack_130,param_2,alStack_90,*param_7,param_3);
      lVar15 = *param_4;
      *param_4 = 0;
      FUN_1083d0a60(auStack_b0,alStack_90);
      uStack_140 = *param_7;
      *param_7 = 0;
      FUN_1083da37c(&plStack_138,param_3,auStack_b0,1,&uStack_140);
      plVar20 = plStack_138;
      plVar21 = plStack_138;
      plStack_138 = (long *)0x0;
      if ((*(char *)(param_2[1] + 0x1c) == '\x01') &&
         (lVar7 = lVar15, FUN_1083c6640(lVar15,appuStack_118), (int)lVar7 != 0)) {
        plVar19 = plVar20 + 5;
        plVar23 = (long *)*plVar19;
        uVar22 = *(uint *)(plVar20 + 6);
        uVar16 = (ulong)uVar22;
        lVar7 = 0;
        for (uVar11 = 0; (-(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) != uVar11;
            uVar11 = uVar11 + 8) {
          lVar14 = *(long *)((long)plVar23 + uVar11);
          lVar24 = lVar14;
          if (((*(byte *)(lVar14 + 0x10) & 1) == 0) &&
             (lVar24 = lVar7, lVar7 = lVar14, *(undefined ***)(lVar14 + 0x18) == appuStack_118[0]))
          goto LAB_1083ebbc0;
          lVar7 = lVar24;
        }
        if (lVar7 == 0) {
          func_0x0001083d2880(plVar19);
        }
        else {
LAB_1083ebbc0:
          lVar24 = (long)(int)uVar22 << 3;
          for (plVar13 = plVar23;
              (plVar18 = plVar23 + (int)uVar22, plVar17 = plVar23 + (int)uVar22, lVar24 != 0 &&
              (plVar18 = plVar13, plVar17 = plVar13, *plVar13 != lVar7)); plVar13 = plVar13 + 1) {
            lVar24 = lVar24 + -8;
          }
          while (plVar13 = plVar18, plVar18 != plVar23 + (int)uVar16) {
            lVar7 = *plVar18;
            uVar11 = *(ulong *)(lVar7 + 0x20);
            FUN_1083d9468();
            if ((uVar11 & 1) != 0) goto LAB_1083ebc2c;
            uVar11 = *(ulong *)(lVar7 + 0x20);
            FUN_1083d9344();
            plVar13 = plVar18 + 1;
            if ((uVar11 & 1) != 0) break;
            uVar16 = (ulong)*(uint *)(plVar20 + 6);
            plVar18 = plVar18 + 1;
            plVar23 = (long *)plVar20[5];
          }
          uVar11 = 0;
          uVar22 = (uint)((ulong)((long)plVar13 - (long)plVar17) >> 3);
          while( true ) {
            if (uVar11 == (uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU))) break;
            if ((long)(int)plVar20[6] <= (long)uVar11) goto LAB_1083ebda8;
            func_0x0001083ec130(*plVar19 + uVar11 * 8,*plVar17 + 0x20);
            uVar11 = uVar11 + 1;
            plVar17 = plVar17 + 1;
          }
          FUN_1083ec164(plVar19,(int)plVar20[6] - uVar22);
          if (plVar18 != plVar23 + (int)uVar16) {
            if ((int)plVar20[6] == 0) goto LAB_1083ebda8;
            uStack_100 = &PTR_FUN_110a45dc0;
            FUN_1083ec1d8(&uStack_100,*plVar19 + (long)(int)plVar20[6] * 8 + -8);
          }
        }
      }
      else {
LAB_1083ebc2c:
        plVar21 = (long *)0x20;
        FUN_1083d3a60();
        *(undefined4 *)(plVar21 + 1) = param_3;
        *(undefined4 *)((long)plVar21 + 0xc) = 0x16;
        *plVar21 = (long)&PTR_FUN_110a45d78;
        plVar21[2] = lVar15;
        plVar21[3] = (long)plVar20;
        lVar15 = 0;
      }
      plStack_b8 = plVar21;
      func_0x0001083d3070(&plStack_138);
      func_0x0001083c5f0c(&uStack_140);
      func_0x0001083ec340(auStack_b0);
      if (lVar15 != 0) {
        func_0x0001083ec330();
      }
      if (aplStack_130[0] == (long *)0x0) {
        func_0x0001083ec314();
      }
      else {
        FUN_1083d09d4(aplStack_130[0] + 5,&plStack_b8);
        plVar21 = plStack_b8;
        plVar20 = aplStack_130[0];
        aplStack_130[0] = (long *)0x0;
        *param_1 = plVar20;
        plStack_b8 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          FUN_1083ec2f8();
        }
      }
      func_0x0001083d3070(aplStack_130);
    }
    else {
      plVar20 = plStack_e8;
      for (lVar15 = (long)(int)uStack_e0 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
        lVar7 = *plVar20;
        lVar24 = param_2[2];
        uVar3 = *(undefined4 *)(lVar7 + 8);
        if (*(char *)(lVar7 + 0x10) == '\x01') {
          FUN_1083c8a60(lVar24,uVar3,&UNK_10f493734,0x16);
        }
        else {
          __ZNSt3__19to_stringEx(aplStack_130,*(undefined8 *)(lVar7 + 0x18));
          func_0x0001004c3cd0(appuStack_118,&UNK_10f49374b,aplStack_130);
          func_0x00010048a6c8(&uStack_100,appuStack_118,&DAT_10f638984);
          ppuVar8 = ppuStack_f8;
          ppuVar12 = uStack_100;
          if (-1 < (char)bStack_e9) {
            ppuVar8 = (undefined **)(ulong)bStack_e9;
            ppuVar12 = (undefined **)&uStack_100;
          }
          FUN_1083c8a60(lVar24,uVar3,ppuVar12,ppuVar8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_118);
          func_0x0001083ec328();
        }
        plVar20 = plVar20 + 1;
      }
      *param_1 = 0;
    }
    func_0x0001083ec294(&plStack_e8);
LAB_1083ebcc8:
    func_0x0001083ec340(alStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1083ebda8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1083ebdac);
  (*pcVar5)();
}



/* Entry: 1083ebf2c; end: 1083ebf2f;  */

long FUN_1083ebf2c(long param_1)

{
  func_0x0001082da4ec(param_1 + 0x18);
  FUN_1083c8734(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083ebf30; end: 1083ebf43;  */

void FUN_1083ebf30(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083ec268();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083ebf44; end: 1083ec017;  */

long * FUN_1083ebf44(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long alStack_40 [2];
  
  plVar2 = alStack_40;
  iVar5 = (int)param_1[1];
  if (iVar5 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    *(long *)(*param_1 + (long)iVar5 * 8) = param_2;
    plVar3 = param_1;
  }
  else {
    if (iVar5 == 0x7fffffff) {
      func_0x00010bdb1a68();
      uVar1 = (uint)param_1;
      FUN_108343308();
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      return (long *)(ulong)uVar1;
    }
    alStack_40[1] = 0x7fffffff;
    alStack_40[0] = 8;
    uVar4 = (ulong)(iVar5 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    iVar5 = (int)param_1[1];
    plVar2[iVar5] = param_2;
    plVar3 = plVar2;
    if (iVar5 != 0) {
      _memcpy(plVar2,*param_1,(long)iVar5 << 3);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      plVar3 = (long *)*param_1;
      _free(plVar3);
    }
    uVar4 = uVar4 >> 3;
    if (0x7ffffffe < uVar4) {
      uVar4 = 0x7fffffff;
    }
    *param_1 = (long)plVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar4 << 1 | 1;
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + 1;
  return plVar3;
}



/* Entry: 1083ec018; end: 1083ec03b;  */

uint FUN_1083ec018(undefined8 param_1)

{
  uint uVar1;
  
  FUN_108343308(param_1,8,0);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1083ec03c; end: 1083ec0d7;  */

void FUN_1083ec03c(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  plVar7 = param_2;
  FUN_1083ec018();
  uVar5 = param_1[1];
  uVar6 = (uint)plVar7;
  uVar2 = uVar5 - 1 & uVar6;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar6 == *puVar1) && (*param_2 == *(long *)(puVar1 + 2))) {
      *puVar1 = uVar6;
      return;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  *(long *)(puVar1 + 2) = *param_2;
  *puVar1 = uVar6;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1083ec0d8; end: 1083ec103;  */

void FUN_1083ec0d8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) << 4;
    do {
      if (*(int *)(param_1 + -0x10 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x10 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083ec104; end: 1083ec163;  */

long * FUN_1083ec104(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083ec0d8();
  }
  return param_1;
}



/* Entry: 1083ec164; end: 1083ec1d7;  */

void FUN_1083ec164(long *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = (ulong)*(uint *)(param_1 + 1);
  lVar5 = uVar4 * 8;
  uVar6 = uVar4;
  while( true ) {
    lVar5 = lVar5 + -8;
    iVar1 = (int)uVar6 - param_2;
    iVar3 = (int)uVar4;
    if (iVar3 <= iVar1) {
      *(int *)(param_1 + 1) = iVar1;
      return;
    }
    uVar4 = (ulong)(iVar3 - 1);
    if (iVar3 < 1 || (int)uVar6 < iVar3) break;
    func_0x0001082da4ec(*param_1 + lVar5);
    uVar6 = (ulong)*(uint *)(param_1 + 1);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083ec1d8);
  (*pcVar2)();
}



/* Entry: 1083ec1d8; end: 1083ec257;  */

long * FUN_1083ec1d8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  if (*(int *)(*param_2 + 0xc) == 0xd) {
    FUN_1083cfa70(&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
    lVar2 = *param_2;
    *param_2 = lVar1;
    if (lVar2 != 0) {
      FUN_1083ec2f8();
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        FUN_1083ec2f8();
      }
    }
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001083ec254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return param_1;
}



/* Entry: 1083ec258; end: 1083ec267;  */

void FUN_1083ec258(void)

{
  return;
}



/* Entry: 1083ec268; end: 1083ec2f7;  */

long FUN_1083ec268(long param_1)

{
  func_0x0001082da4ec(param_1 + 0x18);
  FUN_1083c8734(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083ec2f8; end: 1083ec36b;  */

void FUN_1083ec2f8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083ec300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083ec36c; end: 1083ec3d7;  */

void FUN_1083ec36c(undefined8 *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (uVar2 = (ulong)(byte)param_2[4]; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar1 = (long)*param_2;
    FUN_1083ec3d8(lVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,lVar1);
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 1083ec3d8; end: 1083ec3f3;  */

long FUN_1083ec3d8(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x12) {
    return (long)(char)(&UNK_10df25cec)[(int)param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083ec3f4);
  (*pcVar1)();
}



/* Entry: 1083ec3f4; end: 1083ecbdf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083ec3f4(undefined8 **param_1,ulong param_2,undefined8 **param_3,undefined8 **param_4,
                  byte *param_5,ulong param_6)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  undefined8 **ppuVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 **extraout_x8;
  undefined8 **extraout_x8_00;
  undefined8 **extraout_x8_01;
  undefined8 **extraout_x8_02;
  undefined8 *extraout_x8_03;
  ulong uVar22;
  undefined8 *extraout_x8_04;
  long extraout_x8_05;
  undefined1 uVar23;
  int iVar24;
  ulong uVar25;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  undefined8 **extraout_x11;
  undefined8 **extraout_x11_00;
  undefined8 **extraout_x11_01;
  undefined8 **extraout_x11_02;
  ulong uVar29;
  long lVar30;
  int iVar31;
  long *unaff_x19;
  undefined1 *puVar32;
  undefined8 **unaff_x21;
  undefined8 **ppuVar33;
  undefined8 **unaff_x22;
  undefined8 **unaff_x24;
  undefined8 **ppuVar34;
  long *plVar35;
  undefined1 *unaff_x25;
  ulong uVar36;
  undefined8 **unaff_x26;
  ulong uVar37;
  byte *unaff_x27;
  long *plVar38;
  undefined1 *unaff_x28;
  long lVar39;
  char acStack_285 [4];
  byte bStack_281;
  long *plStack_280;
  long *plStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined8 **ppuStack_260;
  undefined4 uStack_24c;
  undefined1 auStack_245 [4];
  char cStack_241;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined4 uStack_224;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  char *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1a0;
  byte *pbStack_198;
  undefined8 **ppuStack_190;
  undefined1 *puStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_105 [4];
  byte bStack_101;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [11];
  undefined1 auStack_ed [4];
  byte bStack_e9;
  undefined8 uStack_e8;
  undefined8 *apuStack_d0 [3];
  byte abStack_b5 [4];
  byte bStack_b1;
  undefined8 *apuStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  ppuVar33 = param_3;
  func_0x0001083ed938();
  uVar8 = param_6 == 5;
  if (param_6 < 5) {
    bStack_b1 = 0;
    unaff_x24 = param_3;
    bVar4 = bStack_b1;
    for (; bStack_b1 = bVar4, param_6 != 0; param_6 = param_6 - 1) {
      bVar26 = *param_5;
      uVar27 = (uint)bVar26;
      iVar10 = uVar27 - 0x61;
      cVar7 = SBORROW4(iVar10,0x19);
      iVar24 = uVar27 - 0x7a;
      uVar8 = iVar10 == 0x19;
      uVar28 = (uint)bVar26;
      switch(iVar10) {
      case 0:
        bVar26 = 7;
        break;
      case 1:
        bVar26 = 6;
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x14:
      case 0x15:
LAB_1083ec878:
        cVar6 = iVar24 < 0;
        func_0x0001083ed8f4((int)(char)bVar26);
        puVar19 = (undefined1 *)((ulong)unaff_x24 & 0xffffff | 0x1000000);
        func_0x0001083ed860();
        ppuVar21 = extraout_x11_02;
        if (cVar6 == cVar7) {
          ppuVar21 = extraout_x8_02;
        }
        func_0x0001083ed90c();
        goto LAB_1083ec898;
      case 6:
        bVar26 = 5;
        break;
      case 0xf:
        bVar26 = 10;
        break;
      case 0x10:
        bVar26 = 0xb;
        break;
      case 0x11:
        bVar26 = 4;
        break;
      case 0x12:
        bVar26 = 8;
        break;
      case 0x13:
        bVar26 = 9;
        break;
      case 0x16:
        bVar26 = 3;
        break;
      case 0x17:
        bVar26 = 0;
        break;
      case 0x18:
        bVar26 = 1;
        break;
      case 0x19:
        bVar26 = 2;
        break;
      default:
        if (uVar27 == 0x30) {
          bVar26 = 0x10;
        }
        else if (bVar26 == 0x54) {
          bVar26 = 0xd;
        }
        else if (bVar26 == 0x42) {
          bVar26 = 0xf;
        }
        else if (bVar26 == 0x4c) {
          bVar26 = 0xc;
        }
        else if (bVar26 == 0x52) {
          bVar26 = 0xe;
        }
        else {
          cVar7 = SBORROW4(uVar28,0x31);
          iVar24 = uVar28 - 0x31;
          uVar8 = uVar28 == 0x31;
          if (!(bool)uVar8) goto LAB_1083ec878;
          bVar26 = 0x11;
        }
      }
      bStack_b1 = bVar4 + 1;
      abStack_b5[bVar4] = bVar26;
      unaff_x24 = (undefined8 **)((long)unaff_x24 + 1);
      param_5 = param_5 + 1;
      bVar4 = bStack_b1;
    }
    puVar19 = (undefined1 *)0x0;
    iVar24 = 0;
    bVar9 = false;
    puVar32 = (undefined1 *)(ulong)bVar4;
    while( true ) {
      cVar6 = SBORROW8((long)puVar32,(long)puVar19);
      cVar7 = (long)puVar32 - (long)puVar19 < 0;
      uVar8 = puVar32 == puVar19;
      if ((bool)uVar8) break;
      bVar26 = abStack_b5[(long)puVar19];
      cVar7 = SBORROW4((uint)bVar26,0x11);
      iVar10 = bVar26 - 0x11;
      uVar8 = bVar26 == 0x11;
      iVar31 = 0;
      switch(bVar26) {
      case 4:
      case 5:
      case 6:
      case 7:
        iVar31 = 1;
        break;
      case 8:
      case 9:
      case 10:
      case 0xb:
        iVar31 = 2;
      case 0:
      case 1:
      case 2:
      case 3:
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        iVar31 = 3;
        break;
      case 0x10:
      case 0x11:
        goto code_r0x0001083ec5d8;
      default:
        goto LAB_1083ec798;
      }
      if (bVar9) {
        cVar7 = SBORROW4(iVar24,iVar31);
        iVar10 = iVar24 - iVar31;
        uVar8 = iVar24 == iVar31;
        if (!(bool)uVar8) {
LAB_1083ec798:
          cVar6 = iVar10 < 0;
          FUN_1083ec36c(&uStack_e8,abStack_b5);
          func_0x0001083ed998(&UNK_10f4937a5);
          func_0x0001083ed8cc();
          func_0x0001083ed860();
          ppuVar21 = extraout_x11;
          if (cVar6 == cVar7) {
            ppuVar21 = extraout_x8;
          }
          puVar19 = (undefined1 *)((ulong)param_3 & 0xffffffff);
          func_0x0001083ed90c();
          goto LAB_1083ec82c;
        }
        bVar9 = true;
      }
      else {
        bVar9 = true;
        iVar24 = iVar31;
      }
code_r0x0001083ec5d8:
      puVar19 = puVar19 + 1;
    }
    unaff_x24 = (undefined8 **)(*param_4)[2];
    ppuVar21 = param_4;
    uStack_130 = param_2;
    ppuStack_128 = param_1;
    (*(code *)(*unaff_x24)[0x19])();
    ppuVar34 = unaff_x24;
    (*(code *)(*unaff_x24)[0x1a])();
    if ((((ulong)ppuVar34 & 1) == 0) &&
       (func_0x0001083ed8e4((*unaff_x24)[0x17]), ((ulong)ppuVar34 & 1) == 0)) {
      FUN_10831d8f8(&uStack_e8,unaff_x24);
      func_0x0001083ed998(&UNK_10f4937bc);
      func_0x0001083ed8cc();
      func_0x0001083ed860();
      ppuVar21 = extraout_x11_00;
      if (cVar7 == cVar6) {
        ppuVar21 = extraout_x8_00;
      }
      puVar19 = (undefined1 *)(uStack_130 & 0xffffffff);
      func_0x0001083ed90c();
LAB_1083ec82c:
      func_0x0001083ed9a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_d0);
      param_1 = (undefined8 **)&uStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_1083ec840;
    }
    bVar9 = false;
    bStack_e9 = 0;
    unaff_x27 = abStack_b5;
    unaff_x28 = auStack_ed;
    unaff_x21 = (undefined8 **)&UNK_10df25cca;
    unaff_x26 = param_3;
    for (unaff_x25 = puVar32; unaff_x25 != (undefined1 *)0x0; unaff_x25 = unaff_x25 + -1) {
      bVar26 = *unaff_x27;
      cVar7 = SBORROW4((uint)bVar26,0x11);
      iVar24 = bVar26 - 0x11;
      uVar8 = bVar26 == 0x11;
      uVar23 = 0;
      switch(bVar26) {
      case 0:
      case 4:
      case 8:
      case 0xc:
        break;
      case 1:
      case 5:
      case 9:
      case 0xd:
        func_0x0001083ed9cc();
        func_0x0001083ed8e4();
        uVar8 = (int)ppuVar34 == 1;
        if ((int)ppuVar34 < 2) goto code_r0x0001083ec684;
        uVar23 = 1;
        break;
      case 2:
      case 6:
      case 10:
      case 0xe:
code_r0x0001083ec684:
        func_0x0001083ed9cc();
        func_0x0001083ed8e4();
        uVar8 = (int)ppuVar34 == 2;
        if ((int)ppuVar34 < 3) goto code_r0x0001083ec69c;
        uVar23 = 2;
        break;
      case 3:
      case 7:
      case 0xb:
      case 0xf:
code_r0x0001083ec69c:
        func_0x0001083ed9cc();
        func_0x0001083ed8e4();
        iVar10 = (int)ppuVar34;
        cVar7 = SBORROW4(iVar10,3);
        iVar24 = iVar10 + -3;
        uVar8 = iVar10 == 3;
        if (iVar10 < 4) goto LAB_1083ec848;
        uVar23 = 3;
        break;
      case 0x10:
      case 0x11:
        goto code_r0x0001083ec6c4;
      default:
LAB_1083ec848:
        cVar6 = iVar24 < 0;
        param_1 = (undefined8 **)(ulong)(uint)(int)(char)bVar26;
        FUN_1083ec3d8();
        func_0x0001083ed8f4((long)(int)param_1);
        puVar19 = (undefined1 *)((ulong)unaff_x26 & 0xffffff | 0x1000000);
        func_0x0001083ed860();
        ppuVar21 = extraout_x11_01;
        if (cVar6 == cVar7) {
          ppuVar21 = extraout_x8_01;
        }
        func_0x0001083ed90c();
LAB_1083ec898:
        func_0x0001083ed9a4();
        goto LAB_1083ec89c;
      }
      uVar25 = (ulong)bStack_e9;
      bStack_e9 = bStack_e9 + 1;
      unaff_x28[uVar25] = uVar23;
      bVar9 = true;
code_r0x0001083ec6c4:
      unaff_x26 = (undefined8 **)((long)unaff_x26 + 1);
      unaff_x27 = unaff_x27 + 1;
    }
    if (bVar9) {
      func_0x0001083ed9e4();
      unaff_x21 = ppuStack_128;
      puVar19 = auStack_f8;
      ppuVar33 = ppuStack_128;
      FUN_1083f1310(&uStack_90,unaff_x24);
      ppuVar34 = uStack_90;
      uStack_90 = (undefined8 **)0x0;
      puVar11 = *param_4;
      *param_4 = ppuVar34;
      param_1 = (undefined8 **)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        func_0x0001083ed854();
        param_1 = uStack_90;
        uStack_90 = (undefined8 **)0x0;
        if (param_1 != (undefined8 **)0x0) {
          func_0x0001083ed854();
        }
      }
      func_0x0001083ed9f0();
      if (param_1 != (undefined8 **)0x0) {
        func_0x0001083ed854();
      }
      bVar26 = bStack_e9;
      puVar11 = *param_4;
      if (puVar11 == (undefined8 *)0x0) goto LAB_1083ec89c;
      *param_4 = (undefined8 *)0x0;
      param_4 = (undefined8 **)(ulong)bStack_e9;
      uStack_90._0_5_ = CONCAT14(bStack_e9,(undefined4)uStack_90);
      puStack_100 = puVar11;
      _memcpy(&uStack_90,auStack_ed,param_4);
      unaff_x25 = (undefined1 *)(uStack_130 & 0xffffffff);
      ppuVar33 = &puStack_100;
      ppuVar21 = (undefined8 **)&uStack_90;
      param_1 = unaff_x21;
      puVar19 = unaff_x25;
      FUN_1083ecbe0(apuStack_d0);
      func_0x0001083ed9c0();
      if (param_1 != (undefined8 **)0x0) {
        func_0x0001083ed854();
      }
      uVar8 = bVar26 == bVar4;
      if ((bool)uVar8) {
        *unaff_x19 = (long)apuStack_d0[0];
        ppuVar34 = unaff_x24;
      }
      else {
        puStack_80 = &uStack_90;
        uStack_78 = 0x400000000;
        func_0x0001083c7ec0(&puStack_80,3);
        FUN_1083c7ed8(&puStack_80,apuStack_d0);
        (*(code *)(*unaff_x24)[10])();
        ppuVar34 = (undefined8 **)0x0;
        bStack_101 = 0;
        unaff_x26 = (undefined8 **)0xffffffff;
        unaff_x27 = abStack_b5;
        unaff_x28 = auStack_105;
        ppuVar33 = (undefined8 **)0xffffffff;
        ppuVar21 = unaff_x24;
        param_3 = ppuStack_128;
        for (; ppuStack_128 = param_3, puVar32 != (undefined1 *)0x0; puVar32 = puVar32 + -1) {
          ppuVar14 = param_4;
          if (*unaff_x27 == 0x11) {
            uVar8 = (int)ppuVar33 == -1;
            ppuVar12 = ppuVar33;
            if ((bool)uVar8) {
              func_0x0001083ed974(&puStack_110,0x3ff0000000000000);
              uStack_e8 = puStack_110;
              puStack_110 = (undefined8 *)0x0;
              func_0x0001083ed98c();
              func_0x0001083ed91c();
              if (ppuVar21 != (undefined8 **)0x0) {
                func_0x0001083ed854();
              }
              func_0x0001083ed968();
              if (ppuVar21 != (undefined8 **)0x0) {
                func_0x0001083ed854();
              }
              ppuVar14 = (undefined8 **)(ulong)((int)param_4 + 1);
              ppuVar12 = param_4;
              ppuVar33 = param_4;
            }
          }
          else {
            uVar8 = *unaff_x27 == 0x10;
            if ((bool)uVar8) {
              uVar8 = (int)unaff_x26 == -1;
              ppuVar12 = unaff_x26;
              if ((bool)uVar8) {
                func_0x0001083ed974(&puStack_110,0);
                uStack_e8 = puStack_110;
                puStack_110 = (undefined8 *)0x0;
                func_0x0001083ed98c();
                func_0x0001083ed91c();
                if (ppuVar21 != (undefined8 **)0x0) {
                  func_0x0001083ed854();
                }
                func_0x0001083ed968();
                if (ppuVar21 != (undefined8 **)0x0) {
                  func_0x0001083ed854();
                }
                ppuVar14 = (undefined8 **)(ulong)((int)param_4 + 1);
                ppuVar12 = param_4;
                unaff_x26 = param_4;
              }
            }
            else {
              ppuVar12 = ppuVar34;
              ppuVar34 = (undefined8 **)(ulong)((int)ppuVar34 + 1);
            }
          }
          uVar25 = (ulong)bStack_101;
          bStack_101 = bStack_101 + 1;
          unaff_x28[uVar25] = (char)ppuVar12;
          unaff_x27 = unaff_x27 + 1;
          param_4 = ppuVar14;
          param_3 = ppuStack_128;
        }
        func_0x0001083ed8ec(unaff_x24,param_3,param_4);
        FUN_1083c8078(apuStack_b0,&uStack_90);
        unaff_x21 = apuStack_b0;
        FUN_1083dc648(&uStack_e8,param_3,unaff_x25,unaff_x24,apuStack_b0);
        puVar11 = apuStack_d0[0];
        apuStack_d0[0] = uStack_e8;
        uStack_e8 = (undefined8 *)0x0;
        if (puVar11 != (undefined8 *)0x0) {
          func_0x0001083ed854();
          func_0x0001083ed91c();
          if (puVar11 != (undefined8 *)0x0) {
            func_0x0001083ed854();
          }
        }
        FUN_1083c81d4(auStack_a0);
        puStack_118 = apuStack_d0[0];
        apuStack_d0[0] = (undefined8 *)0x0;
        uStack_e8._0_5_ = CONCAT14(bStack_101,(undefined4)uStack_e8);
        _memcpy(&uStack_e8,auStack_105);
        ppuVar33 = &puStack_118;
        ppuVar21 = (undefined8 **)&uStack_e8;
        puVar19 = unaff_x25;
        FUN_1083ecbe0(unaff_x19,param_3);
        puVar11 = puStack_118;
        puStack_118 = (undefined8 *)0x0;
        if (puVar11 != (undefined8 *)0x0) {
          func_0x0001083ed854();
        }
        param_1 = &puStack_80;
        FUN_1083c81d4();
        func_0x0001083ed9b4();
        param_4 = unaff_x24;
        if (param_1 != (undefined8 **)0x0) {
          func_0x0001083ed854();
        }
      }
    }
    else {
      param_1 = (undefined8 **)ppuStack_128[2];
      puVar19 = (undefined1 *)((ulong)param_3 & 0xffffffff);
      ppuVar33 = (undefined8 **)&UNK_10f4937db;
      ppuVar21 = (undefined8 **)0x25;
      FUN_1083c8a60();
LAB_1083ec89c:
      *unaff_x19 = 0;
      ppuVar34 = unaff_x24;
    }
  }
  else {
    param_1 = (undefined8 **)param_1[2];
    puVar19 = (undefined1 *)
              ((ulong)((int)param_3 + 0xfc000000) & 0xff000000 |
              (ulong)((int)param_3 + 4) & 0xffffff);
    ppuVar33 = (undefined8 **)&UNK_10f493762;
    ppuVar21 = (undefined8 **)0x23;
    FUN_1083c8a60();
    param_4 = unaff_x22;
LAB_1083ec840:
    *unaff_x19 = 0;
    ppuVar34 = unaff_x24;
  }
  func_0x0001083ed950();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = puStack_118;
  puStack_118 = (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    func_0x0001083ed854();
  }
  ppuVar14 = &puStack_80;
  FUN_1083c81d4();
  func_0x0001083ed9b4();
  if (ppuVar14 != (undefined8 **)0x0) {
    func_0x0001083ed854();
  }
  func_0x0001083ed914();
  pcStack_148 = FUN_1083ecbe0;
  ppuVar12 = ppuVar14;
  ppuVar20 = ppuVar33;
  puStack_1a0 = unaff_x28;
  pbStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  ppuStack_180 = ppuVar34;
  ppuStack_178 = param_3;
  ppuStack_170 = param_4;
  ppuStack_168 = unaff_x21;
  puStack_160 = &uStack_90;
  ppuStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001083ed938();
  uVar27 = (uint)ppuVar12;
  uStack_24c = (int)puVar19;
  plVar35 = (long *)(*ppuVar20)[2];
  func_0x0001083ed8e4(*(undefined8 *)(*plVar35 + 0xb8));
  bVar4 = *(byte *)((long)ppuVar21 + 4);
  if (uVar27 == 0) {
    func_0x0001083ed9cc();
    func_0x0001083ed8e4();
    if (uVar27 == bVar4) {
      uVar25 = 0;
      do {
        uVar8 = *(byte *)((long)ppuVar21 + 4) == uVar25;
        if ((bool)uVar8) {
          *(int *)(*ppuVar33 + 1) = (int)puVar19;
          func_0x0001083ed9e4();
          *param_1 = extraout_x8_03;
          goto LAB_1083ed028;
        }
        bVar9 = uVar25 == (long)*(char *)((long)ppuVar21 + uVar25);
        uVar25 = uVar25 + 1;
      } while (bVar9);
    }
    plVar13 = *ppuVar33;
    uVar8 = *(int *)((long)plVar13 + 0xc) == 0x2f;
    if ((bool)uVar8) {
      uStack_1e0._0_5_ = (uint5)(uint)uStack_1e0;
      uVar25 = (ulong)*(byte *)((long)ppuVar21 + 4);
      plVar16 = (long *)uStack_1e0;
      for (; uStack_1e0._4_1_ = (byte)((ulong)plVar16 >> 0x20), uVar25 != 0; uVar25 = uVar25 - 1) {
        uVar29 = (ulong)uStack_1e0._4_1_;
        uStack_1e0._5_3_ = (undefined3)((ulong)plVar16 >> 0x28);
        uStack_1e0._0_4_ = (uint)plVar16;
        uStack_1e0._0_5_ = CONCAT14(uStack_1e0._4_1_ + 1,(uint)uStack_1e0);
        *(undefined1 *)((long)&uStack_1e0 + uVar29) =
             *(undefined1 *)((long)plVar13 + (long)*(char *)ppuVar21 + 0x20);
        ppuVar21 = (undefined8 **)((long)ppuVar21 + 1);
        plVar16 = (long *)uStack_1e0;
      }
      ppuStack_260 = (undefined8 **)plVar13[3];
      plVar13[3] = 0;
      uStack_200._1_4_ = CONCAT13(uStack_1e0._4_1_,uStack_200._1_3_);
      uStack_1e0 = (undefined8 **)plVar16;
      _memcpy(&uStack_200,&uStack_1e0);
      func_0x0001083ed9d8();
      FUN_1083ecbe0();
      ppuVar14 = ppuStack_260;
      ppuStack_260 = (undefined8 **)0x0;
    }
    else {
      func_0x0001083c6674();
      iVar24 = *(int *)((long)plVar13 + 0xc);
      if (iVar24 == 0x1d) {
        bStack_281 = *(byte *)((long)ppuVar21 + 4);
        pcVar15 = acStack_285;
        _memcpy(pcVar15,ppuVar21);
        uVar27 = *(uint *)(plVar13 + 6);
        uVar25 = (ulong)(int)uVar27;
        if (uVar27 == 0) {
LAB_1083ed2c8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1083ed2cc);
          (*pcVar5)();
        }
        uVar29 = (ulong)puVar19 & 0xffffffff;
        lVar39 = plVar13[5];
        func_0x0001083ed88c();
        uVar36 = (ulong)bStack_281;
        plVar13 = (long *)plVar13[2];
        (**(code **)(*plVar13 + 0x60))();
        iVar24 = 0;
        uStack_1b8 = 0;
        plVar35 = (long *)((ulong)&uStack_1b8 | 1);
        for (puVar19 = (undefined1 *)0x0;
            uVar8 = puVar19 == (undefined1 *)(ulong)(uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)),
            !(bool)uVar8; puVar19 = puVar19 + 1) {
          plVar38 = *(long **)(*(long *)(lVar39 + (long)puVar19 * 8) + 0x10);
          plVar16 = plVar38;
          (**(code **)(*plVar38 + 0xb8))();
          if ((((ulong)plVar16 & 1) == 0) &&
             (plVar16 = plVar38, (**(code **)(*plVar38 + 0xd0))(), ((ulong)plVar16 & 1) == 0))
          goto LAB_1083ecfe4;
          (**(code **)(*plVar38 + 0x80))();
          uVar3 = (uint)plVar38 & ((int)(uint)plVar38 >> 0x1f ^ 0xffffffffU);
          lVar30 = (long)iVar24;
          iVar24 = uVar3 + iVar24;
          puVar32 = (undefined1 *)((long)plVar35 + lVar30 * 2);
          for (uVar28 = 0; uVar3 != uVar28; uVar28 = uVar28 + 1) {
            puVar32[-1] = (char)puVar19;
            *puVar32 = (char)uVar28;
            puVar32 = puVar32 + 2;
          }
        }
        uStack_224 = 0;
        for (uVar22 = 0; uVar36 != uVar22; uVar22 = uVar22 + 1) {
          lVar30 = (long)*(char *)((long)&uStack_1b8 + (long)acStack_285[uVar22] * 2);
          auStack_220[lVar30 + -4] = auStack_220[lVar30 + -4] + '\x01';
        }
        puVar19 = (undefined1 *)
                  ((ulong)((uint)plVar13 & ((int)(uint)plVar13 >> 0x1f ^ 0xffffffffU)) << 1);
        plVar35 = &uStack_1b8;
        for (puVar32 = (undefined1 *)0x0; puVar19 != puVar32; puVar32 = puVar32 + 2) {
          uVar22 = (ulong)*(char *)((long)plVar35 + (long)puVar32);
          if (uVar25 <= uVar22) goto LAB_1083ed2c8;
          uVar37 = *(ulong *)(lVar39 + uVar22 * 8);
          cVar7 = auStack_220[uVar22 - 4];
          uVar8 = cVar7 == '\x02';
          if (cVar7 < '\x02') {
            uVar8 = cVar7 == '\x01';
            if (!(bool)uVar8) goto LAB_1083ecfd0;
          }
          else {
            uVar22 = uVar37;
            FUN_1083d6eb4();
            if ((uVar22 & 1) == 0) goto LAB_1083ecfe4;
LAB_1083ecfd0:
            FUN_1083d64e8();
            if ((uVar37 & 1) != 0) goto LAB_1083ecfe4;
          }
        }
        pcStack_1c8 = (char *)&uStack_1e0;
        uStack_1c0 = 0x800000000;
        for (uVar22 = 0; uVar8 = uVar36 == uVar22, !(bool)uVar8; uVar22 = uVar22 + 1) {
          lVar30 = (long)acStack_285[uVar22] * 2;
          cVar7 = *(char *)((long)&uStack_1b8 + lVar30);
          if (uVar25 <= (ulong)(long)cVar7) goto LAB_1083ed2c8;
          plVar35 = *(long **)(*(long *)(lVar39 + (long)cVar7 * 8) + 0x10);
          (**(code **)(*plVar35 + 0xb8))();
          if ((int)plVar35 == 0) {
            if (((int)uStack_1c0 == 0) || (pcStack_1c8[(long)(int)uStack_1c0 * 6 + -6] != cVar7)) {
              uStack_200._0_1_ = cVar7;
              lStack_230 = CONCAT71(lStack_230._1_7_,*(undefined1 *)((long)&uStack_1b8 + lVar30 + 1)
                                   );
              func_0x0001083e6300((long)&uStack_200 + 1,&lStack_230,1);
              func_0x0001083ed928();
            }
            else {
              bVar4 = pcStack_1c8[(long)(int)uStack_1c0 * 6 + -1];
              cVar7 = *(char *)((long)&uStack_1b8 + lVar30 + 1);
              pcStack_1c8[(long)(int)uStack_1c0 * 6 + -1] = bVar4 + 1;
              pcStack_1c8[(ulong)bVar4 + (long)(int)uStack_1c0 * 6 + -5] = cVar7;
            }
          }
          else {
            uStack_200._1_4_ = 0;
            uStack_200._5_1_ = 0;
            uStack_200._0_1_ = cVar7;
            func_0x0001083ed928();
          }
        }
        pcStack_1f0 = (char *)&uStack_200;
        uStack_1e8 = 0x400000000;
        plVar35 = &uStack_200;
        func_0x0001083c7ec0(&pcStack_1f0,uVar36);
        pcVar1 = pcStack_1c8 + 1;
        pcVar2 = pcStack_1c8;
        for (lVar30 = (long)(int)uStack_1c0 * 6; lVar30 != 0; lVar30 = lVar30 + -6) {
          uVar22 = (ulong)*pcVar2;
          uVar8 = uVar22 == uVar25;
          if (uVar25 <= uVar22) goto LAB_1083ed2c8;
          func_0x0001083ed8bc(*(undefined8 *)(lVar39 + uVar22 * 8));
          (*extraout_x9_01)(&lStack_230);
          lVar17 = lStack_230;
          if (pcVar2[5] == '\0') {
            FUN_1083c7ed8(&pcStack_1f0,&lStack_230);
          }
          else {
            lStack_230 = 0;
            lStack_240 = lVar17;
            cStack_241 = pcVar2[5];
            _memcpy(auStack_245,pcVar1);
            FUN_1083ecbe0(&lStack_238,ppuVar14,uVar29,&lStack_240,auStack_245);
            FUN_1083c7ed8(&pcStack_1f0,&lStack_238);
            lVar17 = lStack_238;
            lStack_238 = 0;
            if (lVar17 != 0) {
              func_0x0001083ed854();
            }
            func_0x0001083ed9b4();
            if (lVar17 != 0) {
              func_0x0001083ed854();
            }
          }
          lVar17 = lStack_230;
          lStack_230 = 0;
          if (lVar17 != 0) {
            func_0x0001083ed854();
          }
          pcVar2 = pcVar2 + 6;
          pcVar1 = pcVar1 + 6;
        }
        func_0x0001083ed8ec(pcVar15,ppuVar14,uVar36);
        FUN_1083c8078(auStack_220,&uStack_200);
        puVar19 = auStack_220;
        FUN_1083dc648(param_1,ppuVar14,uVar29,pcVar15,auStack_220);
        FUN_1083c81d4(auStack_210);
        FUN_1083c81d4(&pcStack_1f0);
        FUN_1083ed720();
        if (*param_1 != (undefined8 *)0x0) goto LAB_1083ed028;
        goto LAB_1083ecfec;
      }
      if (iVar24 == 0x1e) {
        plVar16 = plVar13;
        func_0x0001083ed88c();
        func_0x0001083ed8ec();
        func_0x0001083ed8bc(plVar13[3]);
        (*extraout_x9_00)(auStack_270);
        uStack_200._1_4_ = CONCAT13(*(char *)((long)ppuVar21 + 4),uStack_200._1_3_);
        _memcpy(&uStack_200,ppuVar21);
        FUN_1083ecbe0(&uStack_1e0,ppuVar14,(ulong)puVar19 & 0xffffffff,auStack_270,&uStack_200);
        func_0x0001083ed9c0();
        if (ppuVar14 != (undefined8 **)0x0) {
          func_0x0001083ed854();
        }
        (**(code **)(*plVar16 + 0x60))();
        plVar13 = (long *)uStack_1e0;
        uStack_1e0 = (undefined8 **)0x0;
        uVar8 = (int)plVar16 == 2;
        if ((int)plVar16 < 2) {
          plStack_280 = plVar13;
          func_0x0001083ed9d8();
          FUN_1083ddb18();
          func_0x0001083ed968();
        }
        else {
          plStack_278 = plVar13;
          func_0x0001083ed9d8();
          FUN_1083dcda4();
          plVar16 = plStack_278;
          plStack_278 = (long *)0x0;
        }
        if (plVar16 != (long *)0x0) {
          func_0x0001083ed854();
        }
        ppuVar14 = uStack_1e0;
        uStack_1e0 = (undefined8 **)0x0;
      }
      else {
        uVar8 = iVar24 == 0x22;
        if (!(bool)uVar8) goto LAB_1083ecff4;
        func_0x0001083ed88c();
        func_0x0001083ed8ec();
        ppuVar14 = (undefined8 **)plVar13[3];
        func_0x0001083ed8bc();
        (*extraout_x9)(auStack_268);
        func_0x0001083ed9d8();
        FUN_1083dde68();
        func_0x0001083ed9f0();
      }
    }
  }
  else {
    func_0x0001083ed8ec(plVar35,ppuVar14,bVar4);
    func_0x0001083ed9e4();
    FUN_1083dde68(param_1);
    func_0x0001083ed91c();
  }
  if (ppuVar14 != (undefined8 **)0x0) {
    func_0x0001083ed854();
  }
  goto LAB_1083ed028;
LAB_1083ecfe4:
  *param_1 = (undefined8 *)0x0;
LAB_1083ecfec:
  FUN_1083c8734(param_1);
LAB_1083ecff4:
  FUN_1083ed3ec(&uStack_1e0,ppuVar14,&uStack_24c,ppuVar33,ppuVar21);
  plVar13 = (long *)uStack_1e0;
  uStack_1e0 = (undefined8 **)0x0;
  *param_1 = plVar13;
  FUN_1083ed7ec();
LAB_1083ed028:
  func_0x0001083ed950();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083c81d4(puVar19 + 0x10);
  FUN_1083c81d4(plVar35 + 2);
  FUN_1083ed720(&uStack_1e0);
  func_0x0001083ed914();
  uVar18 = 0x28;
  FUN_1083d3a60();
  func_0x0001083ed9e4();
  FUN_1083ed74c();
  *extraout_x8_04 = uVar18;
  if (extraout_x8_05 != 0) {
    func_0x0001083ed854();
  }
  return;
}



/* Entry: 1083ecbe0; end: 1083ed3eb;  */

void FUN_1083ecbe0(long param_1,undefined1 *param_2,long *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  undefined1 in_ZR;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long extraout_x8;
  ulong uVar15;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  ulong uVar17;
  long lVar18;
  long *unaff_x19;
  undefined1 *puVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  char acStack_145 [4];
  byte bStack_141;
  long *plStack_140;
  long *plStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  long lStack_120;
  undefined4 uStack_10c;
  undefined1 auStack_105 [4];
  char cStack_101;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar25 = param_1;
  plVar20 = param_3;
  func_0x0001083ed938();
  uVar8 = (uint)lVar25;
  plVar20 = *(long **)(*plVar20 + 0x10);
  uStack_10c = (int)param_2;
  func_0x0001083ed8e4(*(undefined8 *)(*plVar20 + 0xb8));
  bVar4 = param_4[4];
  if (uVar8 == 0) {
    func_0x0001083ed9cc();
    func_0x0001083ed8e4();
    if (uVar8 == bVar4) {
      uVar16 = 0;
      do {
        in_ZR = (byte)param_4[4] == uVar16;
        if ((bool)in_ZR) {
          *(int *)(*param_3 + 8) = (int)param_2;
          func_0x0001083ed9e4();
          *unaff_x19 = extraout_x8;
          goto LAB_1083ed028;
        }
        bVar7 = uVar16 == (long)param_4[uVar16];
        uVar16 = uVar16 + 1;
      } while (bVar7);
    }
    plVar9 = (long *)*param_3;
    in_ZR = *(int *)((long)plVar9 + 0xc) == 0x2f;
    if ((bool)in_ZR) {
      uStack_a0._0_5_ = (uint5)(uint)uStack_a0;
      uVar16 = (ulong)(byte)param_4[4];
      plVar11 = uStack_a0;
      for (; uStack_a0._4_1_ = (byte)((ulong)plVar11 >> 0x20), uVar16 != 0; uVar16 = uVar16 - 1) {
        uVar17 = (ulong)uStack_a0._4_1_;
        uStack_a0._5_3_ = (undefined3)((ulong)plVar11 >> 0x28);
        uStack_a0._0_4_ = (uint)plVar11;
        uStack_a0._0_5_ = CONCAT14(uStack_a0._4_1_ + 1,(uint)uStack_a0);
        *(undefined1 *)((long)&uStack_a0 + uVar17) =
             *(undefined1 *)((long)plVar9 + (long)*param_4 + 0x20);
        param_4 = param_4 + 1;
        plVar11 = uStack_a0;
      }
      lStack_120 = plVar9[3];
      plVar9[3] = 0;
      uStack_c0._1_4_ = CONCAT13(uStack_a0._4_1_,uStack_c0._1_3_);
      uStack_a0 = plVar11;
      _memcpy(&uStack_c0,&uStack_a0);
      func_0x0001083ed9d8();
      FUN_1083ecbe0();
      param_1 = lStack_120;
      lStack_120 = 0;
    }
    else {
      func_0x0001083c6674();
      iVar22 = *(int *)((long)plVar9 + 0xc);
      if (iVar22 == 0x1d) {
        bStack_141 = param_4[4];
        pcVar10 = acStack_145;
        _memcpy(pcVar10,param_4);
        uVar8 = *(uint *)(plVar9 + 6);
        uVar16 = (ulong)(int)uVar8;
        if (uVar8 == 0) {
LAB_1083ed2c8:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1083ed2cc);
          (*pcVar6)();
        }
        uVar17 = (ulong)param_2 & 0xffffffff;
        lVar25 = plVar9[5];
        func_0x0001083ed88c();
        uVar21 = (ulong)bStack_141;
        plVar9 = (long *)plVar9[2];
        (**(code **)(*plVar9 + 0x60))();
        iVar22 = 0;
        uStack_78 = 0;
        plVar20 = (long *)((ulong)&uStack_78 | 1);
        for (param_2 = (undefined1 *)0x0;
            in_ZR = param_2 == (undefined1 *)(ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)),
            !(bool)in_ZR; param_2 = param_2 + 1) {
          plVar24 = *(long **)(*(long *)(lVar25 + (long)param_2 * 8) + 0x10);
          plVar11 = plVar24;
          (**(code **)(*plVar24 + 0xb8))();
          if ((((ulong)plVar11 & 1) == 0) &&
             (plVar11 = plVar24, (**(code **)(*plVar24 + 0xd0))(), ((ulong)plVar11 & 1) == 0))
          goto LAB_1083ecfe4;
          (**(code **)(*plVar24 + 0x80))();
          uVar3 = (uint)plVar24 & ((int)(uint)plVar24 >> 0x1f ^ 0xffffffffU);
          lVar18 = (long)iVar22;
          iVar22 = uVar3 + iVar22;
          puVar19 = (undefined1 *)((long)plVar20 + lVar18 * 2);
          for (uVar14 = 0; uVar3 != uVar14; uVar14 = uVar14 + 1) {
            puVar19[-1] = (char)param_2;
            *puVar19 = (char)uVar14;
            puVar19 = puVar19 + 2;
          }
        }
        uStack_e4 = 0;
        for (uVar15 = 0; uVar21 != uVar15; uVar15 = uVar15 + 1) {
          lVar18 = (long)*(char *)((long)&uStack_78 + (long)acStack_145[uVar15] * 2);
          auStack_e0[lVar18 + -4] = auStack_e0[lVar18 + -4] + '\x01';
        }
        param_2 = (undefined1 *)
                  ((ulong)((uint)plVar9 & ((int)(uint)plVar9 >> 0x1f ^ 0xffffffffU)) << 1);
        plVar20 = &uStack_78;
        for (puVar19 = (undefined1 *)0x0; param_2 != puVar19; puVar19 = puVar19 + 2) {
          uVar15 = (ulong)*(char *)((long)plVar20 + (long)puVar19);
          if (uVar16 <= uVar15) goto LAB_1083ed2c8;
          uVar23 = *(ulong *)(lVar25 + uVar15 * 8);
          cVar5 = auStack_e0[uVar15 - 4];
          in_ZR = cVar5 == '\x02';
          if (cVar5 < '\x02') {
            in_ZR = cVar5 == '\x01';
            if (!(bool)in_ZR) goto LAB_1083ecfd0;
          }
          else {
            uVar15 = uVar23;
            FUN_1083d6eb4();
            if ((uVar15 & 1) == 0) goto LAB_1083ecfe4;
LAB_1083ecfd0:
            FUN_1083d64e8();
            if ((uVar23 & 1) != 0) goto LAB_1083ecfe4;
          }
        }
        pcStack_88 = (char *)&uStack_a0;
        uStack_80 = 0x800000000;
        for (uVar15 = 0; in_ZR = uVar21 == uVar15, !(bool)in_ZR; uVar15 = uVar15 + 1) {
          lVar18 = (long)acStack_145[uVar15] * 2;
          cVar5 = *(char *)((long)&uStack_78 + lVar18);
          if (uVar16 <= (ulong)(long)cVar5) goto LAB_1083ed2c8;
          plVar20 = *(long **)(*(long *)(lVar25 + (long)cVar5 * 8) + 0x10);
          (**(code **)(*plVar20 + 0xb8))();
          if ((int)plVar20 == 0) {
            if (((int)uStack_80 == 0) || (pcStack_88[(long)(int)uStack_80 * 6 + -6] != cVar5)) {
              uStack_c0._0_1_ = cVar5;
              lStack_f0 = CONCAT71(lStack_f0._1_7_,*(undefined1 *)((long)&uStack_78 + lVar18 + 1));
              func_0x0001083e6300((long)&uStack_c0 + 1,&lStack_f0,1);
              func_0x0001083ed928();
            }
            else {
              bVar4 = pcStack_88[(long)(int)uStack_80 * 6 + -1];
              cVar5 = *(char *)((long)&uStack_78 + lVar18 + 1);
              pcStack_88[(long)(int)uStack_80 * 6 + -1] = bVar4 + 1;
              pcStack_88[(ulong)bVar4 + (long)(int)uStack_80 * 6 + -5] = cVar5;
            }
          }
          else {
            uStack_c0._1_4_ = 0;
            uStack_c0._5_1_ = 0;
            uStack_c0._0_1_ = cVar5;
            func_0x0001083ed928();
          }
        }
        pcStack_b0 = (char *)&uStack_c0;
        uStack_a8 = 0x400000000;
        plVar20 = &uStack_c0;
        func_0x0001083c7ec0(&pcStack_b0,uVar21);
        pcVar1 = pcStack_88 + 1;
        pcVar2 = pcStack_88;
        for (lVar18 = (long)(int)uStack_80 * 6; lVar18 != 0; lVar18 = lVar18 + -6) {
          uVar15 = (ulong)*pcVar2;
          in_ZR = uVar15 == uVar16;
          if (uVar16 <= uVar15) goto LAB_1083ed2c8;
          func_0x0001083ed8bc(*(undefined8 *)(lVar25 + uVar15 * 8));
          (*extraout_x9_01)(&lStack_f0);
          lVar12 = lStack_f0;
          if (pcVar2[5] == '\0') {
            FUN_1083c7ed8(&pcStack_b0,&lStack_f0);
          }
          else {
            lStack_f0 = 0;
            lStack_100 = lVar12;
            cStack_101 = pcVar2[5];
            _memcpy(auStack_105,pcVar1);
            FUN_1083ecbe0(&lStack_f8,param_1,uVar17,&lStack_100,auStack_105);
            FUN_1083c7ed8(&pcStack_b0,&lStack_f8);
            lVar12 = lStack_f8;
            lStack_f8 = 0;
            if (lVar12 != 0) {
              func_0x0001083ed854();
            }
            func_0x0001083ed9b4();
            if (lVar12 != 0) {
              func_0x0001083ed854();
            }
          }
          lVar12 = lStack_f0;
          lStack_f0 = 0;
          if (lVar12 != 0) {
            func_0x0001083ed854();
          }
          pcVar2 = pcVar2 + 6;
          pcVar1 = pcVar1 + 6;
        }
        func_0x0001083ed8ec(pcVar10,param_1,uVar21);
        FUN_1083c8078(auStack_e0,&uStack_c0);
        param_2 = auStack_e0;
        FUN_1083dc648(unaff_x19,param_1,uVar17,pcVar10,auStack_e0);
        FUN_1083c81d4(auStack_d0);
        FUN_1083c81d4(&pcStack_b0);
        FUN_1083ed720();
        if (*unaff_x19 != 0) goto LAB_1083ed028;
        goto LAB_1083ecfec;
      }
      if (iVar22 == 0x1e) {
        plVar11 = plVar9;
        func_0x0001083ed88c();
        func_0x0001083ed8ec();
        func_0x0001083ed8bc(plVar9[3]);
        (*extraout_x9_00)(auStack_130);
        uStack_c0._1_4_ = CONCAT13(param_4[4],uStack_c0._1_3_);
        _memcpy(&uStack_c0,param_4);
        FUN_1083ecbe0(&uStack_a0,param_1,(ulong)param_2 & 0xffffffff,auStack_130,&uStack_c0);
        func_0x0001083ed9c0();
        if (param_1 != 0) {
          func_0x0001083ed854();
        }
        (**(code **)(*plVar11 + 0x60))();
        plVar9 = uStack_a0;
        uStack_a0 = (long *)0x0;
        in_ZR = (int)plVar11 == 2;
        if ((int)plVar11 < 2) {
          plStack_140 = plVar9;
          func_0x0001083ed9d8();
          FUN_1083ddb18();
          func_0x0001083ed968();
        }
        else {
          plStack_138 = plVar9;
          func_0x0001083ed9d8();
          FUN_1083dcda4();
          plVar11 = plStack_138;
          plStack_138 = (long *)0x0;
        }
        if (plVar11 != (long *)0x0) {
          func_0x0001083ed854();
        }
        param_1 = (long)uStack_a0;
        uStack_a0 = (long *)0x0;
      }
      else {
        in_ZR = iVar22 == 0x22;
        if (!(bool)in_ZR) goto LAB_1083ecff4;
        func_0x0001083ed88c();
        func_0x0001083ed8ec();
        param_1 = plVar9[3];
        func_0x0001083ed8bc();
        (*extraout_x9)(auStack_128);
        func_0x0001083ed9d8();
        FUN_1083dde68();
        func_0x0001083ed9f0();
      }
    }
  }
  else {
    func_0x0001083ed8ec(plVar20,param_1,bVar4);
    func_0x0001083ed9e4();
    FUN_1083dde68();
    func_0x0001083ed91c();
  }
  if (param_1 != 0) {
    func_0x0001083ed854();
  }
  goto LAB_1083ed028;
LAB_1083ecfe4:
  *unaff_x19 = 0;
LAB_1083ecfec:
  FUN_1083c8734(unaff_x19);
LAB_1083ecff4:
  FUN_1083ed3ec(&uStack_a0,param_1,&uStack_10c,param_3,param_4);
  plVar9 = uStack_a0;
  uStack_a0 = (long *)0x0;
  *unaff_x19 = (long)plVar9;
  FUN_1083ed7ec();
LAB_1083ed028:
  func_0x0001083ed950();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1083c81d4(param_2 + 0x10);
    FUN_1083c81d4(plVar20 + 2);
    FUN_1083ed720(&uStack_a0);
    func_0x0001083ed914();
    uVar13 = 0x28;
    FUN_1083d3a60();
    func_0x0001083ed9e4();
    FUN_1083ed74c();
    *extraout_x8_00 = uVar13;
    if (extraout_x8_01 != 0) {
      func_0x0001083ed854();
    }
    return;
  }
  return;
}



/* Entry: 1083ed3ec; end: 1083ed47f;  */

void FUN_1083ed3ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  
  uVar1 = 0x28;
  FUN_1083d3a60();
  func_0x0001083ed9e4();
  FUN_1083ed74c();
  *param_1 = uVar1;
  if (extraout_x8 != 0) {
    func_0x0001083ed854();
  }
  return;
}



/* Entry: 1083ed480; end: 1083ed537;  */

void FUN_1083ed480(undefined8 param_1,long param_2)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_2 + 0x18) + 0x38))(auStack_50,*(long **)(param_2 + 0x18),2);
  func_0x00010048a6c8(auStack_38,auStack_50,&DAT_10f62a9de);
  FUN_1083ec36c(auStack_68,param_2 + 0x20);
  func_0x00010533a9c0(param_1,auStack_38,auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 1083ed538; end: 1083ed573;  */

void FUN_1083ed538(void)

{
  func_0x0001083ed980();
  return;
}



/* Entry: 1083ed574; end: 1083ed603;  */

void FUN_1083ed574(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *extraout_x9;
  undefined8 uStack_48;
  
  puVar2 = (undefined8 *)0x28;
  FUN_1083d3a60();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001083ed8bc(*(undefined8 *)(param_2 + 0x18));
  (*extraout_x9)(&uStack_48);
  *(undefined4 *)(puVar2 + 1) = param_3;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x2f;
  *puVar2 = &PTR_FUN_110a45e20;
  puVar2[2] = uVar1;
  puVar2[3] = uStack_48;
  *(undefined1 *)((long)puVar2 + 0x24) = 0;
  *(undefined1 *)((long)puVar2 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  _memcpy(puVar2 + 4,param_2 + 0x20);
  *param_1 = puVar2;
  return;
}



/* Entry: 1083ed604; end: 1083ed71f;  */

long * FUN_1083ed604(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long alStack_50 [2];
  
  plVar4 = alStack_50;
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar5 = param_1;
    func_0x0001083ed89c(*param_1 + (long)iVar3 * 6);
  }
  else {
    if (iVar3 == 0x7fffffff) {
      func_0x00010bdb1a68();
      if ((*(byte *)((long)param_1 + 0x24) & 1) != 0) {
        _free(param_1[3]);
      }
      return param_1;
    }
    alStack_50[1] = 0x7fffffff;
    alStack_50[0] = 6;
    uVar6 = (ulong)(iVar3 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    plVar5 = plVar4;
    func_0x0001083ed89c((undefined1 *)((long)plVar4 + (long)(int)param_1[1] * 6));
    lVar7 = 0;
    for (lVar8 = 0; lVar8 < (int)param_1[1]; lVar8 = lVar8 + 1) {
      puVar1 = (undefined1 *)((long)plVar4 + lVar7);
      puVar2 = (undefined1 *)(*param_1 + lVar7);
      *puVar1 = *puVar2;
      puVar1[5] = 0;
      puVar1[5] = puVar2[5];
      plVar5 = (long *)(puVar1 + 1);
      _memcpy(plVar5,puVar2 + 1);
      lVar7 = lVar7 + 6;
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      plVar5 = (long *)*param_1;
      _free(plVar5);
    }
    uVar6 = uVar6 / 6;
    if (0x7ffffffe < uVar6) {
      uVar6 = 0x7fffffff;
    }
    *param_1 = (long)plVar4;
    *(uint *)((long)param_1 + 0xc) = (int)uVar6 << 1 | 1;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return plVar5;
}



/* Entry: 1083ed720; end: 1083ed74b;  */

long FUN_1083ed720(long param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 1083ed74c; end: 1083ed753;  */

undefined8 *
FUN_1083ed74c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_4 + 0x10);
  (**(code **)(*plVar1 + 0x50))();
  func_0x0001083ed8ec();
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0x2f;
  *param_1 = &PTR_FUN_110a45e20;
  lVar2 = *param_4;
  *param_4 = 0;
  param_1[2] = plVar1;
  param_1[3] = lVar2;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)(param_5 + 4);
  _memcpy(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 1083ed754; end: 1083ed7eb;  */

undefined8 *
FUN_1083ed754(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_4 + 0x10);
  (**(code **)(*plVar1 + 0x50))();
  func_0x0001083ed8ec();
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0x2f;
  *param_1 = &PTR_FUN_110a45e20;
  lVar2 = *param_4;
  *param_4 = 0;
  param_1[2] = plVar1;
  param_1[3] = lVar2;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)(param_5 + 4);
  _memcpy(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 1083ed7ec; end: 1083ed80f;  */

undefined8 FUN_1083ed7ec(undefined8 param_1)

{
  FUN_1083ed810(param_1,0);
  return param_1;
}



/* Entry: 1083ed810; end: 1083ed827;  */

void FUN_1083ed810(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083c8734(plVar1 + 3);
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083ed828; end: 1083ed853;  */

void FUN_1083ed828(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083c8734(param_2 + 3);
  }
  FUN_1083d3bc4(param_2);
  if (*param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083ed854; end: 1083ed9fb;  */

void FUN_1083ed854(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083ed85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083ed9fc; end: 1083edb57;  */

void FUN_1083ed9fc(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uStack_34 = param_4;
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 8:
    FUN_1083e6200(&lStack_40,param_4,*(undefined8 *)(param_2 + 0x28),0);
    lStack_50 = lStack_40;
    lStack_40 = 0;
    FUN_1083df484(param_1,param_3,param_4,&lStack_50,*(undefined4 *)(param_2 + 0x30),1);
    lVar1 = lStack_50;
    lStack_50 = 0;
    if (lVar1 != 0) {
      func_0x0001083edc58();
    }
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x0001083edc58();
    }
    break;
  case 9:
    lStack_48 = param_2;
    FUN_1083edb58(&lStack_40,param_3,&uStack_34,&lStack_48);
    func_0x0001083edc70();
    FUN_1083edc18();
    break;
  case 10:
    FUN_1083f2f08(&lStack_40,param_3,param_4,param_2);
    func_0x0001083edc70();
    func_0x0001083e74b4();
    break;
  case 0xb:
    uStack_34 = param_4 & 0xffffff;
    FUN_1083e6258(&lStack_40,&stack0xffffffffffffffdc,&stack0xffffffffffffffd0,(long)&uStack_34 + 3)
    ;
    lVar1 = lStack_40;
    lStack_40 = 0;
    *param_1 = lVar1;
    FUN_1083e62c4(&lStack_40);
    return;
  default:
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083edb58; end: 1083edbb3;  */

void FUN_1083edb58(undefined8 *param_1,long *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar2 = *param_4;
  uVar3 = *(undefined8 *)(*param_2 + 0xe0);
  *(undefined4 *)(puVar1 + 1) = *param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x26;
  *puVar1 = &PTR_FUN_110a45e88;
  puVar1[2] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083edbb4; end: 1083edbbb;  */

void FUN_1083edbb4(void)

{
  return;
}



/* Entry: 1083edbbc; end: 1083edc07;  */

void FUN_1083edbbc(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  *puVar1 = &PTR_FUN_110a45e88;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x26;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083edc08; end: 1083edc17;  */

void FUN_1083edc08(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f493801;
  func_0x00010002b82c(param_1,&UNK_10f493801);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1083edc18; end: 1083edc3f;  */

undefined8 FUN_1083edc18(undefined8 param_1)

{
  FUN_1083edc40(param_1,0);
  return param_1;
}


