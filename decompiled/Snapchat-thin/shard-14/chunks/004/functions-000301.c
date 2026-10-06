/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b24a2d4; end: 10b24a313;  */

long * FUN_10b24a2d4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b24a314; end: 10b24a3b7;  */

void FUN_10b24a314(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  func_0x000107c2837c(auStack_70);
  func_0x000107c28378(auStack_70,param_2);
  lVar3 = *param_2;
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar2);
  lVar3 = *param_1;
  if (param_1[1] == lVar3) {
    puVar2 = (undefined1 *)*param_3;
  }
  else {
    while( true ) {
      puVar2 = auStack_70;
      FUN_10b24460c(auStack_70,lVar3,param_3);
      lVar3 = lVar3 + 8;
      if (lVar3 == param_1[1]) break;
      lVar1 = param_1[2] + param_1[3];
      func_0x000107c283a4();
      *param_3 = lVar1;
    }
  }
  *param_3 = (long)puVar2;
  return;
}



/* Entry: 10b24a3b8; end: 10b24a3cf;  */

void FUN_10b24a3b8(long *param_1,long param_2)

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



/* Entry: 10b24a3d0; end: 10b24a41b;  */

long * FUN_10b24a3d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b24635c(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b24a41c; end: 10b24a55b;  */

void FUN_10b24a41c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100100d8c(param_1,param_2,0,0);
  func_0x000100100dc8(0x30);
  func_0x0001005e782c();
  return;
}



/* Entry: 10b24a55c; end: 10b24a5af;  */

void FUN_10b24a55c(long param_1)

{
  int iStack_14;
  
  if ((((*(byte *)(param_1 + 0x10) & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x1c) == 1))
     && (iStack_14 = *(int *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x54), 0 < iStack_14)) {
    func_0x00010b24a50c(&iStack_14);
  }
  return;
}



/* Entry: 10b24a5b0; end: 10b24a63f;  */

ulong FUN_10b24a5b0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x1c) == 1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    uVar1 = *(uint *)(lVar3 + 0x5c);
    FUN_10b24b230();
    if (param_2 == 0) {
      uVar2 = (uint)param_1;
      FUN_10b24b2b4();
    }
    else {
      uVar2 = 0;
    }
    if (((uint)(uVar1 != 0) & ((uint)param_1 | uVar2)) == 0) {
      uVar1 = param_2;
    }
    if (uVar1 != 0) {
      if ((ulong)uVar1 == 0) {
        return 0;
      }
      return (ulong)(*(long *)(lVar3 + 0x38) << 3) / (ulong)uVar1;
    }
  }
  return 0;
}



/* Entry: 10b24a640; end: 10b24a68f;  */

undefined4 FUN_10b24a640(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x1c) == 1)) {
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 100);
  }
  return uVar1;
}



/* Entry: 10b24a690; end: 10b24a6ef;  */

void FUN_10b24a690(void)

{
  func_0x00010b24a6a8();
  return;
}



/* Entry: 10b24a6f0; end: 10b24a9f3;  */

undefined8 * FUN_10b24a6f0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined4 *puVar7;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [32];
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_d8 [88];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if ((uVar1 != 0) && (*param_3 != param_3[1])) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0x3f800000;
    if ((bRam00000001137f4370 & 1) == 0) {
      iVar3 = 0x137f4370;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107c2835c(0x1137f4378,"\\{[^}]+\\}",0);
        ___cxa_guard_release(0x1137f4370);
      }
    }
    uVar1 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar6 = param_2;
    }
    func_0x00010688dfac(auStack_110,puVar6,(long)puVar6 + uVar1,0x1137f4378,0);
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_15f = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    while( true ) {
      puVar5 = auStack_110;
      func_0x00010688dc94(puVar5,&uStack_1a0);
      if (((ulong)puVar5 & 1) != 0) break;
      puVar5 = auStack_d8;
      if (puStack_e8 != puStack_f0) {
        puVar5 = puStack_f0;
      }
      func_0x000107c28358(&uStack_1d8,puVar5);
      puVar6 = &uStack_1d8;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(puVar6,0x7c,0);
      if (puVar6 != (undefined8 *)0xffffffffffffffff) {
        func_0x000107c27fb4(&uStack_1b8,&uStack_1d8,1,(long)puVar6 + -1);
        puVar6 = &uStack_1b8;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar6,0,10)
        ;
        puStack_50 = (undefined8 *)CONCAT44(puStack_50._4_4_,(int)puVar6);
        FUN_10af73928(&uStack_80,&puStack_50);
        func_0x000107c27b9c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1d8);
      func_0x00010688ded8(auStack_110);
    }
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c31930(&uStack_1b8,param_3[1] - *param_3 >> 2);
    puVar2 = (undefined4 *)param_3[1];
    for (puVar7 = (undefined4 *)*param_3; puVar7 != puVar2; puVar7 = puVar7 + 1) {
      uStack_1d8 = CONCAT44(uStack_1d8._4_4_,*puVar7);
      puVar6 = &uStack_80;
      func_0x000107c2909c(puVar6,&uStack_1d8);
      if (puVar6 != (undefined8 *)0x0) {
        func_0x000107c281e8(&uStack_1b8,puVar6 + 3);
      }
    }
    uStack_1d8 = uStack_1b8;
    uStack_1d0 = uStack_1b0;
    puStack_1c8 = &DAT_10f68f19e;
    uStack_1c0 = 2;
    puStack_50 = &uStack_1d8;
    puStack_48 = &UNK_1072ac1a8;
    func_0x00010b24b448();
    func_0x00010b24b43c();
    func_0x000107c278a8(&uStack_1b8);
    func_0x000107c28324(&uStack_180);
    func_0x000107c28324(&puStack_f0);
    puVar6 = &uStack_80;
    func_0x000107c286c8(puVar6);
    return puVar6;
  }
  puVar4 = &DAT_10f56e05e;
  func_0x00010002b82c(param_1,&DAT_10f56e05e);
  func_0x000107c613d0(puVar4);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar4);
  return unaff_x20;
}



/* Entry: 10b24a9f4; end: 10b24abb7;  */

ulong * FUN_10b24a9f4(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  uint *puVar5;
  ulong *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*param_3 == param_3[1]) {
    puVar2 = &DAT_10f56e05e;
    func_0x00010002b82c(param_1,&DAT_10f56e05e);
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x000107c31930(&uStack_c8,(param_3[1] - *param_3) / 0x30);
  puVar1 = (uint *)param_3[1];
  for (puVar5 = (uint *)*param_3; puVar5 != puVar1; puVar5 = puVar5 + 0xc) {
    lVar3 = param_4;
    FUN_10b243bcc(param_4,puVar5);
    if (lVar3 == 0) {
      uStack_b0 = (ulong)*puVar5;
      puStack_a0 = *(undefined **)(puVar5 + 2);
      uStack_a8 = 0;
      uStack_98 = 0;
      func_0x000107c2793c(&UNK_10f73b3a3);
      func_0x000107c3173c(&puStack_e0);
      func_0x00010b24b454();
    }
    else {
      uStack_b0 = (ulong)*(uint *)(lVar3 + 0x18);
      puStack_a0 = *(undefined **)(lVar3 + 0x20);
      uStack_90 = *(undefined8 *)(lVar3 + 0x28);
      uStack_80 = *(undefined8 *)(lVar3 + 0x30);
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_70 = param_2;
      func_0x000107c2793c(&UNK_10f73b35e);
      func_0x000107c3173c(&puStack_e0);
      func_0x00010b24b454();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_e0);
  }
  uStack_b0 = uStack_c8;
  uStack_a8 = uStack_c0;
  puStack_a0 = &DAT_10f68f19e;
  uStack_98 = 2;
  puStack_e0 = &uStack_b0;
  puStack_d8 = &UNK_1072ac1a8;
  func_0x00010b24b448();
  func_0x00010b24b43c();
  puVar4 = &uStack_c8;
  func_0x000107c278a8(puVar4);
  return puVar4;
}



/* Entry: 10b24abb8; end: 10b24ac07;  */

void FUN_10b24abb8(undefined8 param_1)

{
  func_0x000107c2793c(&UNK_10f73b3bf);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10b24ac08; end: 10b24ad1b;  */

void FUN_10b24ac08(undefined8 param_1,long param_2,long param_3)

{
  if (((*(char *)(param_2 + 0xb8) != '\x01') || (*(double *)(param_2 + 0xa8) <= 0.0)) ||
     (*(double *)(param_3 + 0x20) <= 0.0)) {
    FUN_10b58ce58();
    func_0x000107c27e5c();
    func_0x000107c2793c(&UNK_10f73b403);
  }
  else {
    FUN_10b58ce58();
    func_0x000107c27e5c();
    func_0x000107c2793c(&UNK_10f73b3cc);
  }
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10b24ad1c; end: 10b24ae2b;  */

void FUN_10b24ad1c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [16];
  undefined8 auStack_50 [2];
  long alStack_40 [2];
  
  FUN_10b24ae2c(auStack_60);
  func_0x00010b24b39c(param_1,auStack_50[0]);
  iVar1 = (int)auStack_60;
  func_0x000107c2798c();
  if (*param_1 == 0) {
    FUN_10b4a1840(alStack_40);
    if (alStack_40[0] != 0) {
      func_0x000107c2bf0c();
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      FUN_10b4a1894(auStack_60,alStack_40[0],uVar2);
      FUN_10b4a1894(auStack_50,alStack_40[0],1);
      func_0x00010b24ae58(param_1,auStack_60);
      func_0x000107c2bef4(auStack_60);
      func_0x00010b24b39c(auStack_80,param_1);
      func_0x00010b24ae88(param_2,auStack_80);
      func_0x000107c35230();
    }
    func_0x000107c27f58(alStack_40);
  }
  return;
}



/* Entry: 10b24ae2c; end: 10b24aebf;  */

void FUN_10b24ae2c(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b24aec0; end: 10b24af7b;  */

ulong FUN_10b24aec0(void)

{
  ulong uVar1;
  ulong uStack_60;
  long lStack_58;
  byte bStack_50;
  char cStack_48;
  long alStack_40 [2];
  long alStack_30 [2];
  
  FUN_10b4a1840(alStack_30);
  if (alStack_30[0] == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    func_0x000107c30044(alStack_40,alStack_30[0] + 0xb8);
    if (alStack_40[0] == 0) {
      uVar1 = 0xffffffffffffffff;
    }
    else {
      FUN_10b4a6cd4(&uStack_60);
      uVar1 = 0xffffffffffffffff;
      if (((cStack_48 == '\x01') && ((bStack_50 & 1) != 0)) && (uStack_60 != 0)) {
        uVar1 = 0;
        if (uStack_60 != 0) {
          uVar1 = (ulong)(lStack_58 << 3) / uStack_60;
        }
      }
    }
    func_0x000107c2bf10(alStack_40);
  }
  func_0x000107c27f58(alStack_30);
  return uVar1;
}



/* Entry: 10b24af7c; end: 10b24b013;  */

undefined1  [16] FUN_10b24af7c(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *aplStack_50 [2];
  long *plStack_40;
  
  bVar1 = *(byte *)(param_2 + 0x40);
  bVar2 = *(byte *)(param_2 + 0x20);
  FUN_10b24ad1c(aplStack_50);
  if (aplStack_50[0] == (long *)0x0) {
    plVar3 = (long *)0xffffffffffffffff;
  }
  else {
    (**(code **)(*aplStack_50[0] + 0x10))();
    plVar3 = aplStack_50[0];
  }
  plVar4 = plVar3;
  if (((bVar1 & bVar2 & 1) != 0) && (plStack_40 != (long *)0x0)) {
    (**(code **)(*plStack_40 + 0x10))();
    plVar4 = plStack_40;
  }
  func_0x000107c35230();
  auVar5._8_8_ = plVar4;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10b24b014; end: 10b24b15b;  */

void FUN_10b24b014(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_78 [16];
  long lStack_68;
  undefined1 uStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  uStack_60 = 1;
  lStack_68 = param_2;
  __ZNSt3__15mutex4lockEv();
  plVar4 = (long *)(param_2 + 0x40);
  lVar5 = *plVar4;
  lVar6 = *(long *)(param_2 + 0x48);
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_58 = plVar4;
  lStack_50 = lVar5;
  lStack_48 = lVar6;
  func_0x000107c2798c(&lStack_68);
  if (lVar5 == 0) {
    FUN_10b4a1840(&lStack_68);
    if (lStack_68 != 0) {
      FUN_10b4a1908(auStack_78);
      FUN_10b24b15c(&lStack_50,auStack_78);
      func_0x000107c2bef8(auStack_78);
      lStack_88 = lStack_48;
      lStack_90 = lStack_50;
      if (lStack_48 != 0) {
        plVar1 = (long *)(lStack_48 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      __ZNSt3__15mutex4lockEv(param_2);
      FUN_10b24b15c(plVar4,&lStack_90);
      __ZNSt3__15mutex6unlockEv(param_2);
      func_0x00010b24b434();
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1 = &lStack_50;
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x000107c27f58(&lStack_68);
  }
  else {
    *param_1 = lVar5;
    param_1[1] = lVar6;
    lStack_50 = 0;
    lStack_48 = 0;
  }
  func_0x000107c2bef8(&lStack_50);
  return;
}



/* Entry: 10b24b15c; end: 10b24b19b;  */

undefined8 * FUN_10b24b15c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b24b434();
  return param_1;
}



/* Entry: 10b24b19c; end: 10b24b22f;  */

void FUN_10b24b19c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [32];
  long *aplStack_40 [2];
  
  FUN_10b24b014(aplStack_40);
  if (aplStack_40[0] == (long *)0x0) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    (**(code **)(*aplStack_40[0] + 0x10))(auStack_60,aplStack_40[0],param_3,param_4);
    FUN_10b24b3e8(param_1,auStack_60);
    func_0x000107c2be38(auStack_60);
  }
  func_0x000107c2bef8(aplStack_40);
  return;
}



/* Entry: 10b24b230; end: 10b24b23b;  */

undefined1 FUN_10b24b230(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uStack_28;
  
  iVar2 = 0x10cca770;
  if ((bRam000000011336c870 & 1) == 0) {
    func_0x000107c35228(0x11336c870);
    if (iVar2 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c868 = uVar1;
      ___cxa_guard_release(0x11336c870);
    }
  }
  return uRam000000011336c868;
}



/* Entry: 10b24b23c; end: 10b24b2b3;  */

undefined1 FUN_10b24b23c(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam000000011336c870 & 1) == 0) {
    func_0x000107c35228(0x11336c870);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c868 = uVar1;
      ___cxa_guard_release(0x11336c870);
    }
  }
  return uRam000000011336c868;
}



/* Entry: 10b24b2b4; end: 10b24b2bf;  */

undefined1 FUN_10b24b2b4(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uStack_28;
  
  iVar2 = 0x10cca788;
  if ((bRam000000011336c880 & 1) == 0) {
    func_0x000107c35228(0x11336c880);
    if (iVar2 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c878 = uVar1;
      ___cxa_guard_release(0x11336c880);
    }
  }
  return uRam000000011336c878;
}



/* Entry: 10b24b2c0; end: 10b24b337;  */

undefined1 FUN_10b24b2c0(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam000000011336c880 & 1) == 0) {
    func_0x000107c35228(0x11336c880);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c878 = uVar1;
      ___cxa_guard_release(0x11336c880);
    }
  }
  return uRam000000011336c878;
}



/* Entry: 10b24b338; end: 10b24b3e7;  */

int * FUN_10b24b338(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0xd6;
  piVar1 = param_1;
  do {
    uVar4 = uVar3 >> 1;
    piVar2 = piVar1 + uVar4 * 4 + 4;
    uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
    if (*param_2 <= piVar1[uVar4 * 4]) {
      piVar2 = piVar1;
      uVar3 = uVar4;
    }
    piVar1 = piVar2;
  } while (uVar3 != 0);
  if ((piVar2 == param_1 + 0x358) || (*piVar2 != *param_2)) {
    piVar2 = (int *)0x0;
  }
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
  }
  return piVar1;
}



/* Entry: 10b24b3e8; end: 10b24b403;  */

void FUN_10b24b3e8(long param_1)

{
  FUN_10b24b404();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b24b404; end: 10b24b45f;  */

void FUN_10b24b404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b24b460; end: 10b24b4ff;  */

undefined8 FUN_10b24b460(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113839710 & 1) == 0) {
    iVar1 = 0x13839710;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10b24b500(auStack_68);
      puVar2 = auStack_68;
      func_0x000107c301a0();
      puRam0000000113839708 = puVar2;
      func_0x000107c27974(auStack_68);
      ___cxa_guard_release(0x113839710);
    }
  }
  return 0x113839708;
}



/* Entry: 10b24b500; end: 10b24c6f7;  */

/* WARNING: Possible PIC construction at 0x00010b24b548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b24b56c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b24b54c) */
/* WARNING: Removing unreachable block (ram,0x00010b24b570) */
/* WARNING: Removing unreachable block (ram,0x00010b24c634) */
/* WARNING: Removing unreachable block (ram,0x00010b24c644) */
/* WARNING: Removing unreachable block (ram,0x00010b24c684) */
/* WARNING: Removing unreachable block (ram,0x00010b24c698) */
/* WARNING: Removing unreachable block (ram,0x00010b24c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010b24c6e0) */
/* WARNING: Removing unreachable block (ram,0x00010b24c66c) */

void FUN_10b24b500(void)

{
  undefined *puVar1;
  undefined1 auStack_1598 [5472];
  undefined8 uStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f73b977;
  func_0x00010002b82c(auStack_1598,&UNK_10f73b977);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b24c6f8; end: 10b24c743;  */

void FUN_10b24c6f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b24c744; end: 10b24c76b;  */

long FUN_10b24c744(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b24c76c; end: 10b24c7a7;  */

undefined8 FUN_10b24c76c(undefined8 param_1)

{
  func_0x00010b24cf88();
  func_0x00010b24c70c();
  return param_1;
}



/* Entry: 10b24c7a8; end: 10b24c7ab;  */

long FUN_10b24c7a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b24c7ac; end: 10b24c7bf;  */

void FUN_10b24c7ac(void)

{
  FUN_10b24c744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24c7c0; end: 10b24c7e3;  */

undefined ** FUN_10b24c7c0(void)

{
  return &PTR_DAT_110cca970;
}



/* Entry: 10b24c7e4; end: 10b24c88b;  */

long * FUN_10b24c7e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_1;
    FUN_10b24cf34();
    plVar6 = (long *)param_1[2];
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(plVar6,uVar2);
    param_2 = plVar6;
  }
  if ((char)param_1[3] == '\x01') {
    FUN_10b24cf34();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar6);
    func_0x00010b24cf64();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b24c88c; end: 10b24c8df;  */

long FUN_10b24c88c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b24c8e0; end: 10b24c917;  */

void FUN_10b24c8e0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b24c7cc();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b24c918; end: 10b24c933;  */

undefined1  [16] FUN_10b24c918(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x19);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x19);
  return auVar6;
}



/* Entry: 10b24c934; end: 10b24c963;  */

long FUN_10b24c934(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b24c964(param_1);
  return param_1;
}



/* Entry: 10b24c964; end: 10b24c9cb;  */

void FUN_10b24c964(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b24c744();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b24c744();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b24c744();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b24c744();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b24c744();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24c9cc; end: 10b24c9cf;  */

long FUN_10b24c9cc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b24c964(param_1);
  return param_1;
}



/* Entry: 10b24c9d0; end: 10b24c9e3;  */

void FUN_10b24c9d0(void)

{
  FUN_10b24c934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24c9e4; end: 10b24c9ef;  */

undefined ** FUN_10b24c9e4(void)

{
  return &PTR_DAT_110cca9d8;
}



/* Entry: 10b24c9f0; end: 10b24ca87;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24c9f0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b24c7cc(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b24c7cc(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b24c7cc(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b24c7cc(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b24c7cc(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b24ca88; end: 10b24cc57;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b24ca88(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar2 = param_1;
    FUN_10b24cf34();
    param_2 = (long *)0x8;
    func_0x000107c280a8(8,lVar2);
    func_0x00010b24cf64();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b24cf54(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1c));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b24cf54(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1c));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b24cf54(4,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010b24cf54(5,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c));
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (long *)0x6;
    func_0x00010b24cf54(6,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1c));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if ((long)(int)uVar3 <= *param_3 - (long)param_2) {
      _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
      return (long *)((long)param_2 + (long)(int)uVar3);
    }
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  return param_2;
}



/* Entry: 10b24cc58; end: 10b24cc83;  */

long FUN_10b24cc58(long param_1)

{
  FUN_10b24c88c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b24cc84; end: 10b24cc87;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24cc84(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x30));
        *(long *)(param_1 + 0x30) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x38));
        *(long *)(param_1 + 0x38) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24cc88; end: 10b24cddf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24cc88(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x30));
        *(long *)(param_1 + 0x30) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x38));
        *(long *)(param_1 + 0x38) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24cde0; end: 10b24ce17;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24cde0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b24c9f0();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x30));
        *(long *)(param_1 + 0x30) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) {
        func_0x00010b24cf4c(0,*(undefined8 *)(param_2 + 0x38));
        *(long *)(param_1 + 0x38) = lVar2;
      }
      else {
        func_0x00010b24c70c();
      }
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24ce18; end: 10b24ce53;  */

undefined1  [16] FUN_10b24ce18(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x41);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x41);
  return auVar7;
}



/* Entry: 10b24ce54; end: 10b24cf33;  */

void FUN_10b24ce54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cca8e0;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b24cf34; end: 10b24cfcb;  */

ulong * FUN_10b24cf34(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b24cfcc; end: 10b24cfef;  */

undefined8 FUN_10b24cfcc(undefined8 param_1)

{
  func_0x00010b24de1c();
  return param_1;
}



/* Entry: 10b24cff0; end: 10b24cff3;  */

undefined8 FUN_10b24cff0(undefined8 param_1)

{
  func_0x00010b24de1c();
  return param_1;
}



/* Entry: 10b24cff4; end: 10b24d007;  */

void FUN_10b24cff4(void)

{
  FUN_10b24cfcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24d008; end: 10b24d027;  */

undefined ** FUN_10b24d008(void)

{
  return &PTR_DAT_110ccab58;
}



/* Entry: 10b24d028; end: 10b24d0af;  */

long * FUN_10b24d028(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b24d0b0; end: 10b24d0fb;  */

ulong FUN_10b24d0b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b24d0fc; end: 10b24d163;  */

void FUN_10b24d0fc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x000107c30258(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b24cfcc();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b24d164; end: 10b24d1eb;  */

undefined8 * FUN_10b24d164(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110ccaac8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b24de24();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  if (iVar1 == 3) {
    param_3 = param_3 + 0x18;
    func_0x000107c2809c(param_3,param_2);
  }
  else {
    if (iVar1 != 2) {
      return param_1;
    }
    FUN_10b24dc08(param_2,*(undefined8 *)(param_3 + 0x18));
    param_3 = param_2;
  }
  param_1[3] = param_3;
  return param_1;
}



/* Entry: 10b24d1ec; end: 10b24d217;  */

undefined8 FUN_10b24d1ec(undefined8 param_1)

{
  func_0x00010b24de1c();
  FUN_10b24d218(param_1);
  return param_1;
}



/* Entry: 10b24d218; end: 10b24d22b;  */

void FUN_10b24d218(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x000107c30258(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b24cfcc();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b24d22c; end: 10b24d23f;  */

void FUN_10b24d22c(void)

{
  FUN_10b24d1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24d240; end: 10b24d24b;  */

undefined ** FUN_10b24d240(void)

{
  return &PTR_DAT_110ccab98;
}



/* Entry: 10b24d24c; end: 10b24d283;  */

void FUN_10b24d24c(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10b24d0fc();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b24d284; end: 10b24d377;  */

long * FUN_10b24d284(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  func_0x00010b24de44();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b24de04();
    unaff_x20 = *(long **)(unaff_x21 + 0x10);
    uVar1 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280ac(unaff_x20,uVar1);
  }
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    puVar8 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)puVar8 + 0x17);
    puVar3 = puVar8;
    if (lVar4 < 0) {
      lVar4 = puVar8[1];
      puVar3 = (undefined8 *)*puVar8;
    }
    func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f73cc7c);
    plVar2 = param_3;
    func_0x000107c280a0(param_3,3,puVar8,unaff_x20);
  }
  else {
    plVar2 = unaff_x20;
    if (*(int *)(unaff_x21 + 0x24) == 2) {
      plVar2 = (long *)0x2;
      func_0x000107c303cc(2,*(long *)(unaff_x21 + 0x18),
                          *(undefined4 *)(*(long *)(unaff_x21 + 0x18) + 0x18),unaff_x20,param_3);
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar7);
    }
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  return plVar2;
}



/* Entry: 10b24d378; end: 10b24d417;  */

ulong FUN_10b24d378(long param_1)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    func_0x000107c282a0();
    lVar1 = uVar3 + uVar2;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b24d3e8;
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_10b24d0b0();
    func_0x00010b24dde0();
    lVar1 = uVar3 + lVar1 + extraout_x8;
  }
  uVar3 = lVar1 + 1;
LAB_10b24d3e8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return uVar3;
}



/* Entry: 10b24d418; end: 10b24d41b;  */

void FUN_10b24d418(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b24de44();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar3 = *(int *)(unaff_x20 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(unaff_x21 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_10b24d0fc();
      }
      *(int *)(unaff_x21 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(unaff_x21 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x24) != 3) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      if (iVar4 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 2) {
          ppuVar1 = &PTR_PTR_11336cc18;
        }
        func_0x00010b24cfa4(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        FUN_10b24dc08(uVar5,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar5;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b24d41c; end: 10b24d537;  */

void FUN_10b24d41c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b24de44();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar3 = *(int *)(unaff_x20 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(unaff_x21 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_10b24d0fc();
      }
      *(int *)(unaff_x21 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(unaff_x21 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x24) != 3) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      if (iVar4 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 2) {
          ppuVar1 = &PTR_PTR_11336cc18;
        }
        func_0x00010b24cfa4(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        FUN_10b24dc08(uVar5,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar5;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b24d538; end: 10b24d56f;  */

void FUN_10b24d538(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b24d24c();
  func_0x00010b24de44(param_1,param_2);
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar3 = *(int *)(unaff_x20 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(unaff_x21 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_10b24d0fc();
      }
      *(int *)(unaff_x21 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(unaff_x21 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x24) != 3) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      if (iVar4 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 2) {
          ppuVar1 = &PTR_PTR_11336cc18;
        }
        func_0x00010b24cfa4(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        FUN_10b24dc08(uVar5,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar5;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b24d570; end: 10b24d5d3;  */

void FUN_10b24d570(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  return;
}



/* Entry: 10b24d5d4; end: 10b24d633;  */

undefined8 * FUN_10b24d5d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ccab18;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b24de24();
  }
  FUN_10b24daf0(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b24d634; end: 10b24d65f;  */

long FUN_10b24d634(long param_1)

{
  func_0x00010b24de1c();
  FUN_10b24db40(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b24d660; end: 10b24d663;  */

long FUN_10b24d660(long param_1)

{
  func_0x00010b24de1c();
  FUN_10b24db40(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b24d664; end: 10b24d677;  */

void FUN_10b24d664(void)

{
  FUN_10b24d634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24d678; end: 10b24d69b;  */

undefined ** FUN_10b24d678(void)

{
  return &PTR_DAT_110ccabd0;
}



/* Entry: 10b24d69c; end: 10b24d6f3;  */

void FUN_10b24d69c(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10500480020,0);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b24d6f4; end: 10b24d8a3;  */

long **** FUN_10b24d6f4(long ****param_1,undefined8 param_2,long ****param_3)

{
  uint uVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long ****unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long ***ppplStack_70;
  long **applStack_68 [3];
  
  func_0x00010b24de44();
  uVar1 = *(uint *)(param_1 + 2);
  uVar7 = (ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b24de10();
      pppplVar2 = param_1;
      while (param_1 = pppplVar2, (long ***)applStack_68[0] != (long ***)0x0) {
        func_0x00010b24ddd0();
        func_0x00010b24ddc0();
        pppplVar2 = (long ****)applStack_68;
        func_0x000107c27d54(pppplVar2);
        unaff_x20 = param_1;
      }
    }
    else {
      pppplVar2 = (long ****)(uVar7 << 3);
      __Znam();
      ppplStack_70 = (long ***)pppplVar2;
      func_0x00010b24de10();
      while ((long ***)applStack_68[0] != (long ***)0x0) {
        *pppplVar2 = (long ***)(applStack_68[0] + 1);
        func_0x000107c27d54(applStack_68);
        pppplVar2 = pppplVar2 + 1;
      }
      pppplVar2 = (long ****)ppplStack_70;
      func_0x000105991c2c(ppplStack_70,ppplStack_70 + uVar7);
      uVar8 = uVar7 << 3;
      while (pppplVar3 = pppplVar2, uVar7 != 0) {
        func_0x00010b24ddd0();
        pppplVar2 = pppplVar3;
        func_0x00010b24ddc0();
        uVar8 = uVar8 - 8;
        unaff_x20 = pppplVar3;
        uVar7 = uVar8;
      }
      param_1 = &ppplStack_70;
      func_0x000105991ac8(param_1);
    }
  }
  if (*(char *)(unaff_x21 + 0x30) == '\x01') {
    func_0x00010b24de04();
    unaff_x20 = (long ****)(ulong)*(byte *)(unaff_x21 + 0x30);
    uVar4 = 0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000107c280a8(unaff_x20,uVar4);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    func_0x0001053930c4(param_3,lVar5,lVar6,unaff_x20);
    unaff_x20 = param_3;
  }
  return unaff_x20;
}



/* Entry: 10b24d8a4; end: 10b24d93f;  */

void FUN_10b24d8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int extraout_w8;
  uint extraout_w9;
  long *unaff_x20;
  int unaff_w21;
  
  uVar2 = param_4;
  func_0x00010b24de44();
  func_0x000107c28094(uVar2,param_3);
  uVar3 = 10;
  func_0x000107c280a8(10,uVar2);
  func_0x000107c282a0();
  func_0x00010b24de30((int)unaff_x20[4]);
  func_0x000107c280a8(unaff_w21 + extraout_w8 + (extraout_w9 >> 6) + 2,uVar3);
  uVar3 = 1;
  func_0x0001059928f0(1);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  lVar1 = unaff_x20[4];
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0((int)lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 10b24d940; end: 10b24d9fb;  */

void FUN_10b24d940(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long alStack_38 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x00010564c19c(alStack_38);
  while (alStack_38[0] != 0) {
    lVar2 = alStack_38[0] + 8;
    func_0x00010b24d9c4(lVar2,alStack_38[0] + 0x20);
    uVar3 = lVar2 + uVar3;
    func_0x000107c27d54(alStack_38);
  }
  iVar1 = (int)uVar3 + (uint)*(byte *)(param_1 + 0x30) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  return;
}



/* Entry: 10b24d9fc; end: 10b24d9ff;  */

void FUN_10b24d9fc(long param_1,long param_2)

{
  FUN_10b24dc98(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b24da00; end: 10b24dad7;  */

void FUN_10b24da00(long param_1,long param_2)

{
  FUN_10b24dc98(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b24dad8; end: 10b24daef;  */

void FUN_10b24dad8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110ccaa78;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b24daf0; end: 10b24db3f;  */

undefined8 * FUN_10b24daf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_10b24dc98(param_1,param_3);
  return param_1;
}



/* Entry: 10b24db40; end: 10b24db83;  */

long FUN_10b24db40(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500480020,0);
  }
  return param_1;
}



/* Entry: 10b24db84; end: 10b24dc07;  */

void FUN_10b24db84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110ccaac8;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b24dc08; end: 10b24dc7b;  */

undefined8 * FUN_10b24dc08(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110ccaa78;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010b24cfa4();
  return puVar1;
}



/* Entry: 10b24dc7c; end: 10b24dc97;  */

long FUN_10b24dc7c(long param_1)

{
  long extraout_x8;
  
  FUN_10b24d378();
  func_0x00010b24dde0();
  return param_1 + extraout_x8;
}



/* Entry: 10b24dc98; end: 10b24dd87;  */

void FUN_10b24dc98(int *param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  long alStack_58 [3];
  
  func_0x00010564c19c(alStack_58);
  while (lVar1 = alStack_58[0], alStack_58[0] != 0) {
    piVar2 = (int *)(alStack_58[0] + 8);
    func_0x000107c28188();
    func_0x00010b24dd9c();
    if (piVar2 == (int *)0x0) {
      uVar3 = (ulong)(*param_1 + 1);
      piVar2 = param_1;
      func_0x000107c27d60(param_1,uVar3);
      if ((int)piVar2 != 0) {
        func_0x000107c28188(lVar1 + 8);
        func_0x00010b24dd9c();
        param_2 = uVar3;
      }
      piVar2 = param_1;
      func_0x000107c27d64(param_1,0x48);
      func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_1 + 6),lVar1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 6);
      *(undefined ***)(piVar2 + 8) = &PTR_DAT_110ccaac8;
      *(undefined8 *)(piVar2 + 10) = uVar4;
      piVar2[0x10] = 0;
      piVar2[0x11] = 0;
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      func_0x000107c27d68(param_1,param_2,piVar2);
      *param_1 = *param_1 + 1;
    }
    param_2 = lVar1 + 0x20;
    FUN_10b24d538(piVar2 + 8);
    func_0x000107c27d54(alStack_58);
  }
  return;
}



/* Entry: 10b24dd88; end: 10b24de4f;  */

void FUN_10b24dd88(void)

{
  return;
}



/* Entry: 10b24de50; end: 10b24df03;  */

undefined * FUN_10b24de50(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam0000000113839720 & 1) == 0) {
    iVar2 = 0x13839720;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b2509d4();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam0000000113839718 = uVar1;
      param_1 = 0x13839720;
      ___cxa_guard_release();
    }
  }
  func_0x00010b2509d4();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x113839728);
  }
  return puVar3;
}



/* Entry: 10b24df04; end: 10b24df67;  */

void FUN_10b24df04(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b2507c0();
  func_0x00010b2509c8(&PTR_FUN_110ccac68);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  func_0x000107c282d4(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x4c) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  return;
}



/* Entry: 10b24df68; end: 10b24df93;  */

long FUN_10b24df68(long param_1)

{
  func_0x00010b2508d4();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b24df94; end: 10b24df97;  */

long FUN_10b24df94(long param_1)

{
  func_0x00010b2508d4();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b24df98; end: 10b24dfab;  */

void FUN_10b24df98(void)

{
  FUN_10b24df68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24dfac; end: 10b24dfd7;  */

undefined ** FUN_10b24dfac(void)

{
  return &PTR_DAT_110ccade8;
}



/* Entry: 10b24dfd8; end: 10b24e14b;  */

byte * FUN_10b24dfd8(byte *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  func_0x00010b250928();
  if (*(long *)(param_1 + 0x28) != 0) {
    param_1 = unaff_x19;
    func_0x000105991a14();
    param_3 = param_4;
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    param_1 = unaff_x19;
    func_0x000107c282cc();
    param_3 = param_4;
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b250708();
    func_0x00010b25098c();
    func_0x00010b250714();
    param_4 = param_1;
  }
  pbVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b250708();
    pbVar2 = (byte *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b25077c();
    param_4 = pbVar2;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b250708();
    func_0x00010b2509ac();
    func_0x00010b250714();
    param_4 = pbVar2;
  }
  uVar6 = *(uint *)(unaff_x20 + 0x20);
  if (0 < (int)uVar6) {
    func_0x00010b250708();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 0x32;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      pbVar4[-1] = (byte)uVar6 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar6;
    piVar7 = *(int **)(unaff_x20 + 0x18);
    piVar1 = piVar7 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b250708();
      uVar5 = (ulong)*piVar7;
      pbVar4 = pbVar2;
      while( true ) {
        param_4 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_4;
      }
      piVar7 = piVar7 + 1;
      *pbVar4 = (byte)uVar5;
    } while (piVar7 < piVar1);
  }
  pbVar2 = param_4;
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    pbVar2 = unaff_x19;
    func_0x00010598f468();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b250974();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(byte **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)pbVar2 < (long)(int)param_3) {
      while( true ) {
        iVar9 = ((int)*(undefined8 *)unaff_x19 - (int)pbVar2) + 0x10;
        iVar8 = (int)param_3;
        uVar6 = iVar8 - iVar9;
        param_3 = (byte *)(ulong)uVar6;
        if (uVar6 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        pbVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return pbVar2 + iVar8;
    }
    _memcpy(pbVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return pbVar2 + (int)param_3;
  }
  return pbVar2;
}



/* Entry: 10b24e14c; end: 10b24e223;  */

void FUN_10b24e14c(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  lVar2 = param_1 + 0x10;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x20) = (int)lVar2;
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x00010b250768((long)(int)lVar2);
    iVar1 = extraout_w8 + 1;
  }
  iVar1 = iVar1 + (int)lVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b2506e8();
    iVar1 = extraout_w8_00 + iVar1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010b2506e8();
    iVar1 = extraout_w8_01 + iVar1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010b2506e8();
    iVar1 = extraout_w8_02 + iVar1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010b250768();
    iVar1 = iVar1 + extraout_w8_03 + 1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x00010b250768();
    iVar1 = iVar1 + extraout_w8_04 + 1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b250968();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return;
}



/* Entry: 10b24e224; end: 10b24e227;  */

void FUN_10b24e224(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}


