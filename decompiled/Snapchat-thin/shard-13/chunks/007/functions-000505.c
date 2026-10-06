/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac587e4; end: 10ac58897;  */

void FUN_10ac587e4(long param_1,undefined8 param_2)

{
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  func_0x000107c2b054(auStack_70,&UNK_10f69e32c);
  FUN_10a107e2c(auStack_58,param_2,auStack_70,0);
  FUN_10a1e4260(param_1 + 0xa8,auStack_58);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10ac58898; end: 10ac58b63;  */

void FUN_10ac58898(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  long *plStack_98;
  char cStack_89;
  undefined8 uStack_88;
  char cStack_71;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar3);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c5f9c0);
  if ((int)plVar3 == 0) {
    func_0x000107c2b054(auStack_b8,&UNK_10f69e32c);
    FUN_10a0fed30(&uStack_a0,param_2,&PTR_DAT_110c5f9e0,auStack_b8);
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x248))(param_2);
    FUN_10a107e2c(auStack_68,&uStack_a0,plVar3,0);
    FUN_10a1e4260(param_1 + 0x15,auStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    if (cStack_89 < '\0') {
      __ZdlPv(uStack_a0);
    }
  }
  else {
    FUN_10a1e3e54(&uStack_a0);
    (**(code **)(*param_2 + 0x230))(auStack_68,param_2,&PTR_DAT_110c5f9c0,&uStack_a0);
    FUN_10a1e4260(param_1 + 0x15,auStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    auStack_b8[0] = uStack_a0;
    cStack_a1 = cStack_89;
    if (cStack_71 < '\0') {
      __ZdlPv(uStack_88);
      auStack_b8[0] = uStack_a0;
      cStack_a1 = cStack_89;
    }
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  FUN_10a08d2e0(&uStack_a0,param_1 + 0x16);
  FUN_10ac58714(auStack_68,param_1,&uStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  FUN_10ac7c69c(&uStack_a0,auStack_68,0);
  func_0x00010a41cc44(param_1 + 0x20,&uStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar3 = plStack_98 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(param_1[0x20] + 0x48));
  lVar4 = 0;
  if (param_1[0x20] != 0) {
    lVar4 = param_1[0x20] + 0x20;
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,lVar4);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10ac58b64; end: 10ac58c47;  */

void FUN_10ac58b64(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x248))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x78,param_2);
  return;
}



/* Entry: 10ac58c48; end: 10ac58c9b;  */

void FUN_10ac58c48(long param_1,int param_2)

{
  if (param_2 - 1U < 0x2edff) {
    *(int *)(param_1 + 0x124) = param_2;
    if (*(long *)(param_1 + 0x100) != 0) {
      *(int *)(*(long *)(param_1 + 0x100) + 0x48) = param_2;
    }
    if (*(long **)(param_1 + 0x110) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ac58c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x110) + 0x40))();
      return;
    }
  }
  return;
}



/* Entry: 10ac58c9c; end: 10ac58d8b;  */

long * FUN_10ac58c9c(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x100) == 0) {
    puVar3 = &UNK_10f69e41d;
    FUN_10a00946c();
    __ZdlPv();
    __Unwind_Resume();
    puVar4 = (undefined8 *)*param_2;
    if (param_3 <= (ulong)puVar4[1]) {
      plVar1 = *(long **)(puVar3 + 0x110);
      if (plVar1 == (long *)0x0) {
        FUN_10ac58c9c(puVar3);
        plVar1 = *(long **)(puVar3 + 0x110);
        puVar4 = (undefined8 *)*param_2;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,*puVar4,param_3);
      *(float *)(puVar3 + 0x118) = (float)plVar1;
      return plVar1;
    }
    FUN_10a00946c(&UNK_10f69e3d7);
    return (long *)0x4000;
  }
  plVar1 = (long *)0x18;
  __Znwm();
  FUN_10ad1f544();
  plVar2 = *(long **)(param_1 + 0x110);
  *(long **)(param_1 + 0x110) = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    plVar1 = *(long **)(param_1 + 0x110);
  }
  (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined4 *)(param_1 + 0xf8));
  plVar1 = *(long **)(param_1 + 0x110);
  if (*(char *)(param_1 + 0x128) == '\x01') {
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(*(long *)(param_1 + 0x100) + 0x48));
    plVar1 = *(long **)(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010ac58d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,*(long *)(param_1 + 0x100) + 0x30);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,*(long *)(param_1 + 0x100) + 0x30);
  plVar1 = *(long **)(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010ac58d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(*(long *)(param_1 + 0x100) + 0x48));
  return plVar1;
}



/* Entry: 10ac58d8c; end: 10ac58e0f;  */

long * FUN_10ac58d8c(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if (param_3 <= (ulong)puVar2[1]) {
    plVar1 = *(long **)(param_1 + 0x110);
    if (plVar1 == (long *)0x0) {
      FUN_10ac58c9c(param_1);
      plVar1 = *(long **)(param_1 + 0x110);
      puVar2 = (undefined8 *)*param_2;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,*puVar2,param_3);
    *(float *)(param_1 + 0x118) = (float)plVar1;
    return plVar1;
  }
  FUN_10a00946c(&UNK_10f69e3d7);
  return (long *)0x4000;
}



/* Entry: 10ac58e10; end: 10ac58e97;  */

undefined8 FUN_10ac58e10(void)

{
  return 0x4000;
}



/* Entry: 10ac58e98; end: 10ac58eeb;  */

bool FUN_10ac58e98(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf69fa67;
    _memcmp(&UNK_10f69fa67,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x72656469766f7250 && param_2[1] == 0x5072656b72614d2e) &&
      *(long *)((long)param_2 + 0xf) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac58eec; end: 10ac58ef3;  */

bool FUN_10ac58eec(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if ((param_3 == 0x20) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x736142656c69462e) &&
      param_2[2] == 0x72656b72614d6465) && param_2[3] == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0x25) {
    iVar2 = 0xf69fa67;
    _memcmp(&UNK_10f69fa67,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x72656469766f7250 && param_2[1] == 0x5072656b72614d2e) &&
      *(long *)((long)param_2 + 0xf) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac58ef4; end: 10ac58f4b;  */

void FUN_10ac58ef4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f69e32c;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac58f4c(param_1,&uStack_58);
  FUN_10ac7c824();
  return;
}



/* Entry: 10ac58f4c; end: 10ac59023;  */

/* WARNING: Removing unreachable block (ram,0x00010ac58fe4) */

undefined1  [16] FUN_10ac58f4c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69f668,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac7c728(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac59024; end: 10ac59103;  */

void FUN_10ac59024(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  FUN_10ac59104();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c5f9c0);
  if ((int)plVar1 != 0) {
    FUN_10a1e3e54(auStack_90);
    (**(code **)(*param_2 + 0x230))(auStack_58,param_2,&PTR_DAT_110c5f9c0,auStack_90);
    FUN_10a1e4260(param_1 + 0xf0,auStack_58);
    if (cStack_29 < '\0') {
      __ZdlPv(uStack_40);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
  }
  return;
}



/* Entry: 10ac59104; end: 10ac592d3;  */

undefined ** FUN_10ac59104(long param_1,undefined **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  uVar3 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c62030);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  ppuVar2 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c62050,*(undefined4 *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = (int)ppuVar2;
  ppuVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c62070);
  if ((int)ppuVar2 != 0) {
    FUN_10a4cd514(param_2,&PTR_DAT_110c62070,param_1 + 0xa0);
  }
  ppuVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c62090);
  if ((int)ppuVar2 != 0) {
    ppuVar2 = &PTR_DAT_110c62090;
    (**(code **)(*param_2 + 0x1d8))(&uStack_38);
    if ((bStack_28 & 1) == 0) {
      FUN_10a108fd4(&PTR_DAT_110c62090);
    }
    else if ((uStack_30 & 7) == 0) {
      func_0x000108a851e4((undefined8 *)(param_1 + 0xb8),uStack_30 >> 3);
      if ((bStack_28 & 1) != 0) {
        ppuVar2 = *(undefined ***)(param_1 + 0xb8);
        _memcpy(ppuVar2,uStack_38,uStack_30);
        return ppuVar2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4cd584);
      (*pcVar1)();
    }
    FUN_10a324f10();
    *ppuVar2 = (undefined *)&PTR_DAT_110be7a28;
    FUN_10a505720(ppuVar2 + 2);
    FUN_10a5056f8(ppuVar2 + 1);
    return ppuVar2;
  }
  return ppuVar2;
}



/* Entry: 10ac592d4; end: 10ac594e3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac59324) */
/* WARNING: Removing unreachable block (ram,0x00010ac593d0) */

void FUN_10ac592d4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_140;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a08d2e0(auStack_80,param_1 + 0xf8);
  FUN_10ad03508(auStack_68,auStack_80);
  uStack_110 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  puStack_140 = (undefined8 *)0x0;
  uStack_108 = 0x3f800000;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0x3f800000;
  uStack_50 = 0x3f847ae147ae147b;
  lStack_d0 = 0;
  uStack_c8 = 0;
  lStack_d8 = 0;
  FUN_10a0cf024(&lStack_d8,&uStack_50,&lStack_48,1);
  lStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  uStack_88 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&puStack_140,auStack_68);
  FUN_10ac594e4(param_1,&puStack_140);
  func_0x000107c2827c(&uStack_128,auStack_68,auStack_68);
  FUN_10a818a34(param_2 + 0x118);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  func_0x00010a22de78(&uStack_100);
  puVar1 = &uStack_128;
  func_0x000107c2826c();
  if (lStack_130 < 0) {
    puVar1 = puStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a4caa2c(&puStack_140);
    __Unwind_Resume();
    if ((undefined8 *)((long)ppuVar2 + 0x68) != puVar1 + 0x14) {
      func_0x00010a0e2360();
    }
    if ((undefined8 *)((long)ppuVar2 + 0x80) != puVar1 + 0x17) {
      func_0x00010a0e2360();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              ((undefined1 *)((long)ppuVar2 + 0x98),puVar1 + 0x1a);
    *(undefined4 *)((long)ppuVar2 + 0xb0) = *(undefined4 *)(puVar1 + 0x1d);
    *(undefined4 *)((long)ppuVar2 + 0xb4) = *(undefined4 *)((long)puVar1 + 0x9c);
    return;
  }
  return;
}



/* Entry: 10ac594e4; end: 10ac5955f;  */

void FUN_10ac594e4(long param_1,long param_2)

{
  if (param_2 + 0x68 != param_1 + 0xa0) {
    func_0x00010a0e2360();
  }
  if (param_2 + 0x80 != param_1 + 0xb8) {
    func_0x00010a0e2360();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_2 + 0x98,param_1 + 0xd0);
  *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_1 + 0x9c);
  return;
}



/* Entry: 10ac59560; end: 10ac5967b;  */

undefined8 * FUN_10ac59560(long param_1,long param_2,int param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  if (*(long *)(param_2 + 0xa0) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    FUN_10a08d2e0(auStack_70,param_1 + 0xf8);
    FUN_10ad03508(&ppuStack_58,auStack_70);
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    puVar8 = *(undefined8 **)(*(long *)(param_2 + 0xa0) + 0x30);
    puVar4 = *(undefined8 **)(*(long *)(param_2 + 0xa0) + 0x38);
    if (puVar8 != puVar4) {
      uVar6 = uStack_50;
      pppuVar1 = (undefined8 ***)ppuStack_58;
      if (-1 < (char)bStack_41) {
        uVar6 = (ulong)bStack_41;
        pppuVar1 = &ppuStack_58;
      }
      do {
        if (*(int *)(puVar8 + 3) == param_3) {
          bVar5 = *(byte *)((long)puVar8 + 0x17);
          uVar2 = puVar8[1];
          if (-1 < (char)bVar5) {
            uVar2 = (ulong)bVar5;
          }
          if (uVar6 == uVar2) {
            puVar3 = (undefined8 *)*puVar8;
            if (-1 < (char)bVar5) {
              puVar3 = puVar8;
            }
            pppuVar7 = pppuVar1;
            _memcmp(pppuVar1,puVar3,uVar6);
            if ((int)pppuVar7 == 0) goto LAB_10ac59630;
          }
        }
        puVar8 = puVar8 + 0xc;
      } while (puVar8 != puVar4);
    }
    puVar8 = (undefined8 *)0x0;
LAB_10ac59630:
    if ((char)bStack_41 < '\0') {
      __ZdlPv(ppuStack_58);
    }
  }
  return puVar8;
}



/* Entry: 10ac5967c; end: 10ac5969b;  */

undefined1  [16] FUN_10ac5967c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f662ad3;
  return auVar1;
}



/* Entry: 10ac5969c; end: 10ac59703;  */

bool FUN_10ac5969c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf662ad3;
    _memcmp(&UNK_10f662ad3,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1b) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x72546f696475412e) &&
      param_2[2] == 0x69766f72506b6361) && *(long *)((long)param_2 + 0x13) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac59704; end: 10ac5970b;  */

bool FUN_10ac59704(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf662ad3;
    _memcmp(&UNK_10f662ad3,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1b) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x72546f696475412e) &&
      param_2[2] == 0x69766f72506b6361) && *(long *)((long)param_2 + 0x13) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac5970c; end: 10ac599e7;  */

void FUN_10ac5970c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662ad3,0x22);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c674a8;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x9e;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c674a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c5efc0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac599c8;
    FUN_10a054dac(param_1,&UNK_10f69e3ba,FUN_10ac7c8e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac599c8;
    FUN_10a054dac(param_1,&UNK_10f69e3c8,FUN_10ac7ca98,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10ac7cbf4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f5adece,FUN_10ac7cd2c,FUN_10ac7cde8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662ad3,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac599c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac599cc);
  (*pcVar6)();
}



/* Entry: 10ac599e8; end: 10ac59b8b;  */

undefined8 * FUN_10ac599e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x2a) = 0x100;
  puVar1 = param_1;
  FUN_10ac1b018(param_1,&PTR_PTR_110c5fbd0,param_2);
  *puVar1 = &PTR_DAT_110c62f50;
  puVar1[2] = &PTR_FUN_110c56130;
  puVar1[5] = &PTR_DAT_110c56160;
  puVar1[0x27] = &PTR_DAT_110c63038;
  FUN_10a1e394c(puVar1 + 0x15);
  *param_1 = &PTR_DAT_110c5fa18;
  param_1[2] = &PTR_FUN_110c5fad0;
  param_1[5] = &PTR_DAT_110c5fb00;
  param_1[0x27] = &PTR_DAT_110c5fb88;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x21] = puVar1 + 3;
  param_1[0x22] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x21);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((long)param_1 + 0x125) = 0;
  *(undefined4 *)(param_1 + 0x26) = 1;
  *(undefined4 *)((long)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(bool *)((long)param_1 + 300) = 0x145 < *(int *)(*(long *)(param_1[0x12] + 0xa20) + 0x18);
  FUN_10a5ae998(param_1[0x21],&PTR_DAT_110c674a8,param_2,param_1);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  return param_1;
}



/* Entry: 10ac59b8c; end: 10ac59bb3;  */

void FUN_10ac59b8c(long param_1)

{
  func_0x00010a3a4b08(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



/* Entry: 10ac59bb4; end: 10ac59cb7;  */

void FUN_10ac59bb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long *plStack_48;
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    FUN_10a08d2e0(&uStack_50,param_1 + 0xb0);
    FUN_10ac58714(auStack_38,param_1,&uStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    FUN_10ac7c69c(&uStack_50,auStack_38,1);
    func_0x00010a41cc44((long *)(param_1 + 0xf8),&uStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    *(undefined4 *)(param_1 + 0x74) = 2;
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 2;
  }
  return;
}



/* Entry: 10ac59cb8; end: 10ac59cbf;  */

void FUN_10ac59cb8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long *plStack_48;
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    FUN_10a08d2e0(&uStack_50,param_1 + 0xa0);
    FUN_10ac58714(auStack_38,param_1 + -0x10,&uStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    FUN_10ac7c69c(&uStack_50,auStack_38,1);
    func_0x00010a41cc44((long *)(param_1 + 0xe8),&uStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    *(undefined4 *)(param_1 + 100) = 2;
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 2;
  }
  return;
}



/* Entry: 10ac59cc0; end: 10ac59f03;  */

void FUN_10ac59cc0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  long *plStack_78;
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar3);
  func_0x000107c2b054(auStack_98,&UNK_10f69e32c);
  FUN_10a0fed30(&uStack_80,param_2,&PTR_DAT_110c5f9e0,auStack_98);
  func_0x000107c2b054(auStack_b0,&UNK_10f69e32c);
  FUN_10a107e2c(auStack_68,&uStack_80,auStack_b0,0);
  FUN_10a1e4260(param_1 + 0x15,auStack_68);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  FUN_10a08d2e0(&uStack_80,param_1 + 0x16);
  FUN_10ac58714(auStack_68,param_1,&uStack_80);
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  FUN_10ac7c69c(&uStack_80,auStack_68,1);
  func_0x00010a41cc44(param_1 + 0x1f,&uStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(param_1[0x1f] + 0x48));
  lVar4 = 0;
  if (param_1[0x1f] != 0) {
    lVar4 = param_1[0x1f] + 0x20;
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,lVar4);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10ac59f04; end: 10ac59fcf;  */

void FUN_10ac59f04(long param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  puStack_38 = &UNK_10f662ad3;
  uStack_30 = 0x22;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_38);
  FUN_10a08d2e0(&puStack_38,param_1 + 0xb0);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c5f9e0,&puStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(puStack_38);
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar1 = *(long *)(param_1 + 0xf8) + 0x20;
  }
  (**(code **)(*param_2 + 0x120))(param_2,lVar1,0);
  return;
}



/* Entry: 10ac59fd0; end: 10ac5a047;  */

long * FUN_10ac59fd0(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  
  if (param_3 <= *(ulong *)(*param_2 + 8)) {
    FUN_10ac5a048();
    plVar1 = *(long **)(param_1 + 0x118);
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)*param_2,param_3);
    *(float *)(param_1 + 0x120) = (float)plVar1;
    return plVar1;
  }
  plVar1 = (long *)&UNK_10f69e447;
  FUN_10a00946c();
  if (plVar1[0x23] != 0) {
    return plVar1;
  }
  if (plVar1[0x1f] == 0) {
    puVar4 = &UNK_10f69e490;
    FUN_10a00946c(&UNK_10f69e490);
    __ZdlPv();
    __Unwind_Resume(puVar4);
    return (long *)0x4000;
  }
  plVar2 = (long *)0x18;
  __Znwm();
  FUN_10ad1f544();
  plVar3 = (long *)plVar1[0x23];
  plVar1[0x23] = (long)plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar2 = (long *)plVar1[0x23];
  }
  (**(code **)(*plVar2 + 0x48))(plVar2,(int)plVar1[0x26]);
  plVar2 = (long *)plVar1[0x23];
  if (*(char *)((long)plVar1 + 300) == '\x01') {
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(plVar1[0x1f] + 0x48));
    plVar2 = (long *)plVar1[0x23];
                    /* WARNING: Could not recover jumptable at 0x00010ac5a0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1[0x1f] + 0x30);
    return plVar2;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,plVar1[0x1f] + 0x30);
  plVar2 = (long *)plVar1[0x23];
                    /* WARNING: Could not recover jumptable at 0x00010ac5a128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(plVar1[0x1f] + 0x48));
  return plVar2;
}



/* Entry: 10ac5a048; end: 10ac5a14b;  */

long * FUN_10ac5a048(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  
  if (param_1[0x23] != 0) {
    return param_1;
  }
  if (param_1[0x1f] != 0) {
    plVar1 = (long *)0x18;
    __Znwm();
    FUN_10ad1f544();
    plVar2 = (long *)param_1[0x23];
    param_1[0x23] = (long)plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      plVar1 = (long *)param_1[0x23];
    }
    (**(code **)(*plVar1 + 0x48))(plVar1,(int)param_1[0x26]);
    plVar1 = (long *)param_1[0x23];
    if (*(char *)((long)param_1 + 300) == '\x01') {
      (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_1[0x1f] + 0x48));
      plVar1 = (long *)param_1[0x23];
                    /* WARNING: Could not recover jumptable at 0x00010ac5a0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1[0x1f] + 0x30);
      return plVar1;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[0x1f] + 0x30);
    plVar1 = (long *)param_1[0x23];
                    /* WARNING: Could not recover jumptable at 0x00010ac5a128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_1[0x1f] + 0x48));
    return plVar1;
  }
  puVar3 = &UNK_10f69e490;
  FUN_10a00946c(&UNK_10f69e490);
  __ZdlPv();
  __Unwind_Resume(puVar3);
  return (long *)0x4000;
}



/* Entry: 10ac5a14c; end: 10ac5a187;  */

undefined8 FUN_10ac5a14c(void)

{
  return 0x4000;
}



/* Entry: 10ac5a188; end: 10ac5a2db;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5a268) */

void FUN_10ac5a188(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  char cStack_59;
  undefined1 auStack_50 [31];
  undefined1 uStack_31;
  
  lVar2 = param_2;
  func_0x00010ad031c0();
  FUN_10a0f2388(auStack_88,param_2 + 8);
  FUN_10ad016b8(auStack_50,lVar2,auStack_88);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  uVar1 = *(ulong *)(lVar2 + 8);
  if (-1 < (char)*(byte *)(lVar2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(lVar2 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (auStack_a0,auStack_50,uVar1,0xffffffffffffffff,&uStack_31);
  FUN_10a107e2c(auStack_88,auStack_a0,lVar2,0);
  FUN_10ac5a2dc(param_2,auStack_88,param_3);
  FUN_10a08d2e0(param_1);
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  return;
}



/* Entry: 10ac5a2dc; end: 10ac5a4df;  */

undefined1 * FUN_10ac5a2dc(undefined1 *param_1,undefined8 *param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_10ac5a47c;
  FUN_10a08d2e0(auStack_58,param_2);
  uVar1 = 0;
  FUN_10ad02150();
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if ((uVar1 & 1) == 0) {
    FUN_10a08d2e0(auStack_58,param_1 + 8);
    puVar2 = auStack_58;
    FUN_10ad015f0(puVar2,0x4000);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    if ((int)puVar2 == 0) {
      FUN_10a08d2e0(auStack_58,param_1 + 8);
      puVar2 = auStack_58;
      FUN_10ad015f0(puVar2,0x8000);
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if ((int)puVar2 == 0) goto LAB_10ac5a414;
      FUN_10a08d2e0(auStack_58,param_1 + 8);
      FUN_10a08d2e0(auStack_70,param_2);
      FUN_10ad01348(auStack_58,auStack_70);
    }
    else {
      FUN_10a08d2e0(auStack_58,param_1 + 8);
      FUN_10a08d2e0(auStack_70,param_2);
      FUN_10ad00fd8(auStack_58,auStack_70);
    }
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
LAB_10ac5a414:
  if ((char)param_1[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if ((char)param_1[0x37] < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x30) = param_2[5];
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 6);
  *param_1 = param_3;
  FUN_10aad7680(param_1 + 0x40);
LAB_10ac5a47c:
  return param_1 + 8;
}



/* Entry: 10ac5a4e0; end: 10ac5a5c7;  */

undefined1  [16] FUN_10ac5a4e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f66344a;
  return auVar1;
}



/* Entry: 10ac5a5c8; end: 10ac5a683;  */

undefined8 * FUN_10ac5a5c8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5fc08;
  param_1[2] = &PTR_FUN_110c5fca8;
  param_1[5] = &PTR_DAT_110c5fcd8;
  param_1[0x1a] = &PTR_DAT_110c5fd60;
  plVar5 = (long *)param_1[0x19];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_DAT_110c632c8;
  param_1[2] = &PTR_FUN_110c66ac8;
  param_1[5] = &PTR_DAT_110c66af8;
  param_1[0x1a] = &PTR_DAT_110c63398;
  FUN_10ac78228(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar6 = (undefined **)(param_1 + 0xb);
  puVar8 = (undefined8 *)param_1[0xc];
  for (puVar7 = (undefined8 *)*ppuVar6; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar6);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar4 = *(long *)(param_1[0x12] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar6;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar5;
  *plVar5 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5a684; end: 10ac5a6a7;  */

undefined8 * FUN_10ac5a684(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5fc08;
  param_1[2] = &PTR_FUN_110c5fca8;
  param_1[5] = &PTR_DAT_110c5fcd8;
  param_1[0x1a] = &PTR_DAT_110c5fd60;
  plVar5 = (long *)param_1[0x19];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_DAT_110c632c8;
  param_1[2] = &PTR_FUN_110c66ac8;
  param_1[5] = &PTR_DAT_110c66af8;
  param_1[0x1a] = &PTR_DAT_110c63398;
  FUN_10ac78228(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar6 = (undefined **)(param_1 + 0xb);
  puVar8 = (undefined8 *)param_1[0xc];
  for (puVar7 = (undefined8 *)*ppuVar6; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar6);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar4 = *(long *)(param_1[0x12] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar6;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar5;
  *plVar5 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5a6a8; end: 10ac5a6eb;  */

void FUN_10ac5a6a8(void)

{
  FUN_10ac5a5c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac5a6ec; end: 10ac5a777;  */

void FUN_10ac5a6ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac5a5c8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac5a778; end: 10ac5a91f;  */

void FUN_10ac5a778(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_b0;
  long lStack_a8;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    lVar7 = (long)*(char *)(param_1 + 0xbf);
    if (lVar7 < 0) {
      lVar7 = *(long *)(param_1 + 0xb0);
    }
    if (lVar7 != 0) {
      FUN_10ac58714(auStack_98,param_1,param_1 + 0xa8);
      FUN_10a0ff18c(auStack_68,auStack_98,2);
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      FUN_10ac5a920(auStack_98,param_1,param_1 + 0xa8,0);
      FUN_10a0f1f4c(&lStack_b0,auStack_98);
      lVar4 = lStack_a8;
      lVar7 = lStack_b0;
      puVar5 = (undefined8 *)0x78;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar6 = puVar5 + 3;
      *puVar5 = &PTR_FUN_110c66fd8;
      FUN_10a32f1dc(puVar6,auStack_68,lVar7,lVar4 - lVar7);
      plVar8 = *(long **)(param_1 + 200);
      *(undefined8 **)(param_1 + 0xc0) = puVar6;
      *(undefined8 **)(param_1 + 200) = puVar5;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        __ZdlPv();
      }
      FUN_10a0f1ea0(auStack_98);
      if (cStack_39 < '\0') {
        __ZdlPv(uStack_50);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
    }
  }
  return;
}



/* Entry: 10ac5a920; end: 10ac5aa57;  */

void FUN_10ac5a920(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x21;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 2) {
    FUN_10a0f1978(&uStack_38,param_3);
    FUN_10a0f1a50(param_1,&uStack_38,0,0);
    if (unaff_x21 < 0) {
      __ZdlPv(uStack_38);
    }
    return;
  }
  if (param_4 == 1) {
    func_0x00010ad03330();
    FUN_10a0b4df8(&uStack_50);
    FUN_10a0f19e0(param_1,&uStack_50,0);
  }
  else {
    FUN_10a099f6c(auStack_68,param_3);
    uVar1 = *(ulong *)(param_2 + 0x80);
    puVar2 = *(undefined8 **)(param_2 + 0x78);
    if (-1 < (char)*(byte *)(param_2 + 0x8f)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x8f);
      puVar2 = (undefined8 *)(param_2 + 0x78);
    }
    puVar3 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,puVar2,uVar1);
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    lStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    FUN_10a0f19e0(param_1,&uStack_50,0);
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10ac5aa58; end: 10ac5aa67;  */

void FUN_10ac5aa58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_b0;
  long lStack_a8;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    lVar7 = (long)*(char *)(param_1 + 0xaf);
    if (lVar7 < 0) {
      lVar7 = *(long *)(param_1 + 0xa0);
    }
    if (lVar7 != 0) {
      FUN_10ac58714(auStack_98,param_1 + -0x10,param_1 + 0x98);
      FUN_10a0ff18c(auStack_68,auStack_98,2);
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      FUN_10ac5a920(auStack_98,param_1 + -0x10,param_1 + 0x98,0);
      FUN_10a0f1f4c(&lStack_b0,auStack_98);
      lVar4 = lStack_a8;
      lVar7 = lStack_b0;
      puVar5 = (undefined8 *)0x78;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar6 = puVar5 + 3;
      *puVar5 = &PTR_FUN_110c66fd8;
      FUN_10a32f1dc(puVar6,auStack_68,lVar7,lVar4 - lVar7);
      plVar8 = *(long **)(param_1 + 0xb8);
      *(undefined8 **)(param_1 + 0xb0) = puVar6;
      *(undefined8 **)(param_1 + 0xb8) = puVar5;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        __ZdlPv();
      }
      FUN_10a0f1ea0(auStack_98);
      if (cStack_39 < '\0') {
        __ZdlPv(uStack_50);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
    }
  }
  return;
}



/* Entry: 10ac5aa68; end: 10ac5ab27;  */

void FUN_10ac5aa68(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  func_0x000107c2b054(auStack_50,&UNK_10f69e32c);
  FUN_10a0fed30(&uStack_38,param_2,&PTR_DAT_110c5f9e0,auStack_50);
  if (*(char *)(param_1 + 0xbf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xb0) = uStack_30;
  *(ulong *)(param_1 + 0xa8) = CONCAT71(uStack_37,uStack_38);
  *(ulong *)(param_1 + 0xb8) = CONCAT17(uStack_21,uStack_28);
  uStack_21 = 0;
  uStack_38 = 0;
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 10ac5ab28; end: 10ac5ab97;  */

void FUN_10ac5ab28(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f66344a;
  uStack_28 = 0x1e;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c5f9e0,param_1 + 0xa8);
  return;
}



/* Entry: 10ac5ab98; end: 10ac5abb7;  */

undefined1  [16] FUN_10ac5ab98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x21;
  auVar1._0_8_ = &UNK_10f6631d6;
  return auVar1;
}



/* Entry: 10ac5abb8; end: 10ac5ac87;  */

bool FUN_10ac5abb8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf6631d6;
    _memcmp(&UNK_10f6631d6,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac5ac88; end: 10ac5ac8f;  */

bool FUN_10ac5ac88(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf6631d6;
    _memcmp(&UNK_10f6631d6,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac5ac90; end: 10ac5ad67;  */

undefined8 * FUN_10ac5ac90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x2a) = 0x100;
  puVar1 = param_1;
  FUN_10a1dbb98(param_1,&PTR_PTR_110c5ffb8,param_2);
  puVar1[0x15] = 0xffffffffffffffff;
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar1 + 0xba) = 0;
  *(undefined2 *)(puVar1 + 0x17) = 1;
  *puVar1 = &PTR_FUN_110c63668;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x27] = &PTR_FUN_110c63768;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  FUN_10a1e394c(puVar1 + 0x1d);
  *param_1 = &PTR_FUN_110c5fde0;
  param_1[2] = &PTR_FUN_110c5feb0;
  param_1[5] = &PTR_DAT_110c5fee0;
  param_1[0x27] = &PTR_DAT_110c5ff68;
  return param_1;
}



/* Entry: 10ac5ad68; end: 10ac5adf7;  */

undefined8 * FUN_10ac5ad68(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  FUN_10a1e3810(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c63668;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x27] = &PTR_FUN_110c63768;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c63900;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x27] = &PTR_DAT_110c639d0;
  func_0x00010a1f9d14(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5adf8; end: 10ac5afbf;  */

void FUN_10ac5adf8(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar2);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c5f9c0);
  if ((int)plVar2 == 0) {
    func_0x000107c2b054(auStack_58,&UNK_10f69e32c);
    FUN_10a0fed30(auStack_90,param_2,&PTR_DAT_110c5f9e0,auStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    FUN_10a0ff18c(auStack_58,auStack_90,0);
    (**(code **)(*param_2 + 0x248))(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_40,param_2);
    FUN_10a1e4260(param_1 + 0xe8,auStack_58);
    uStack_78 = auStack_58[0];
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
      uStack_78 = auStack_58[0];
    }
  }
  else {
    FUN_10a1e3e54(auStack_90);
    (**(code **)(*param_2 + 0x230))(auStack_58,param_2,&PTR_DAT_110c5f9c0,auStack_90);
    FUN_10a1e4260(param_1 + 0xe8,auStack_58);
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
    bVar1 = cStack_41 < '\0';
    cStack_41 = cStack_61;
    if (bVar1) {
      __ZdlPv(auStack_58[0]);
      cStack_41 = cStack_61;
    }
  }
  if (cStack_41 < '\0') {
    __ZdlPv(uStack_78);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  return;
}



/* Entry: 10ac5afc0; end: 10ac5b04b;  */

void FUN_10ac5afc0(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f6631d6;
  uStack_28 = 0x21;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c5f9c0,param_1 + 0xf0);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c5f9e0,param_1 + 0xf0);
  return;
}



/* Entry: 10ac5b04c; end: 10ac5b0a7;  */

void FUN_10ac5b04c(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [55];
  undefined1 uStack_21;
  
  FUN_10ac5b0a8(auStack_58,param_2,param_2 + 0xf0);
  FUN_10a842f10(param_1,&uStack_21,auStack_58);
  FUN_10a0f1ea0(auStack_58);
  return;
}



/* Entry: 10ac5b0a8; end: 10ac5b113;  */

void FUN_10ac5b0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a08d2e0(auStack_38,param_3);
  FUN_10a0f19e0(param_1,auStack_38,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10ac5b114; end: 10ac5b19b;  */

undefined1  [16] FUN_10ac5b114(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f663214;
  return auVar1;
}



/* Entry: 10ac5b19c; end: 10ac5b257;  */

undefined8 * FUN_10ac5b19c(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5fff8;
  param_1[2] = &PTR_FUN_110c600a8;
  param_1[5] = &PTR_DAT_110c600d8;
  param_1[0x26] = &PTR_DAT_110c60160;
  FUN_10a20e3dc(param_1 + 0x23);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_DAT_110c63b88;
  param_1[2] = &PTR_FUN_110bb3338;
  param_1[5] = &PTR_DAT_110bb3368;
  param_1[0x26] = &PTR_DAT_110c63c58;
  FUN_10a1f534c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5b258; end: 10ac5b27b;  */

undefined8 * FUN_10ac5b258(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5fff8;
  param_1[2] = &PTR_FUN_110c600a8;
  param_1[5] = &PTR_DAT_110c600d8;
  param_1[0x26] = &PTR_DAT_110c60160;
  FUN_10a20e3dc(param_1 + 0x23);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_DAT_110c63b88;
  param_1[2] = &PTR_FUN_110bb3338;
  param_1[5] = &PTR_DAT_110bb3368;
  param_1[0x26] = &PTR_DAT_110c63c58;
  FUN_10a1f534c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5b27c; end: 10ac5b2bf;  */

void FUN_10ac5b27c(void)

{
  FUN_10ac5b19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac5b2c0; end: 10ac5b2ef;  */

void FUN_10ac5b2c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac5b19c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac5b2f0; end: 10ac5b49f;  */

undefined8 * FUN_10ac5b2f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x29) = 0x100;
  puVar1 = param_1;
  FUN_10a5787b0(param_1,&PTR_PTR_110c601a8,param_2);
  *puVar1 = &PTR_FUN_110c5fff8;
  puVar1[2] = &PTR_FUN_110c600a8;
  puVar1[5] = &PTR_DAT_110c600d8;
  puVar1[0x26] = &PTR_DAT_110c60160;
  func_0x000107c2b054(auStack_38,&UNK_10f69e32c);
  func_0x000107c2b054(auStack_50,&UNK_10f69e32c);
  FUN_10a107e2c(param_1 + 0x15,auStack_38,auStack_50,0);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  func_0x000107c2b054(auStack_38,&UNK_10f69e32c);
  func_0x000107c2b054(auStack_50,&UNK_10f69e32c);
  FUN_10a107e2c(param_1 + 0x1c,auStack_38,auStack_50,0);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



/* Entry: 10ac5b4a0; end: 10ac5b4a7;  */

void FUN_10ac5b4a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ac5b4a8; end: 10ac5b503;  */

void FUN_10ac5b4a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ac5b504; end: 10ac5b527;  */

void FUN_10ac5b504(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 0x128) = 1;
  if ((*(long *)(param_1 + 0x118) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x118) + 0x58) >> 1 & 1) == 0)) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ac5b528; end: 10ac5bb07;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5b738) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b8c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b5e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b5f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b93c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b960) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b748) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac5b528(long param_1,int param_2)

{
  undefined8 ******ppppppuVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 ******ppppppuVar7;
  long *******ppppppplVar8;
  long **pplVar9;
  undefined8 *******pppppppuVar10;
  long *plVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  undefined8 *****pppppuVar13;
  int iVar14;
  bool bVar15;
  long *******ppppppplStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 uStack_f8;
  char cStack_e1;
  undefined8 *******pppppppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  long *plStack_80;
  long *plStack_78;
  short asStack_68 [11];
  char cStack_51;
  undefined8 *******pppppppuStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if (param_2 != 2) {
    return;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xbf) < '\0') {
    func_0x000107c3192c(&pppppppuStack_50,*(undefined8 *)(param_1 + 0xa8),
                        *(undefined8 *)(param_1 + 0xb0));
  }
  else {
    plStack_48 = *(long **)(param_1 + 0xb0);
    pppppppuStack_50 = *(undefined8 ********)(param_1 + 0xa8);
    plStack_40 = *(long **)(param_1 + 0xb8);
  }
  plVar6 = plStack_48;
  pppppppuVar10 = pppppppuStack_50;
  if (-1 < (long)plStack_40) {
    plVar6 = (long *)((ulong)plStack_40 >> 0x38);
    pppppppuVar10 = &pppppppuStack_50;
  }
  if (plVar6 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    do {
      plVar11 = plVar6;
      if (plVar11 == (long *)0x0) break;
      plVar6 = (long *)((long)plVar11 - 1);
    } while (*(char *)((long)pppppppuVar10 + ((long)plVar11 - 1U)) != '.');
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (asStack_68,&pppppppuStack_50,plVar11,0xffffffffffffffff,&ppppppplStack_110);
  bVar15 = cStack_51 == '\x02' && asStack_68[0] == 0x736c;
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    pbVar5 = (byte *)0x1138364b0;
    FUN_10a08f69c();
    if ((*pbVar5 & 1) != 0) goto LAB_10ac5b62c;
    iVar14 = (int)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x870);
    FUN_10a4617d4();
    puVar3 = &UNK_10f69e4c0;
    if (iVar14 != 0) {
      puVar3 = &UNK_10f69e4c9;
    }
    func_0x000107c2b054(&plStack_80,puVar3);
    lVar12 = *(long *)(*(long *)(param_1 + 0x90) + 0x870);
    FUN_10a461678(lVar12);
    func_0x00010989b348(*(undefined8 *)(*(long *)(lVar12 + 0xd0) + 8));
    __ZNSt3__19to_stringEj(&pppppppuStack_98);
    pppppppuVar10 = pppppppuStack_98;
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
      pppppppuVar10 = &pppppppuStack_98;
    }
    pplVar9 = &plStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar9,pppppppuVar10,uStack_90);
    plStack_c8 = pplVar9[1];
    pppppppuStack_d0 = (undefined8 *******)*pplVar9;
    plStack_c0 = pplVar9[2];
    pplVar9[1] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    pppppppuVar10 = &pppppppuStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar10,&UNK_10f5adb65,2);
    ppppppuStack_108 = pppppppuVar10[1];
    ppppppplStack_110 = (long *******)*pppppppuVar10;
    ppppppuStack_100 = pppppppuVar10[2];
    pppppppuVar10[1] = (undefined8 ******)0x0;
    pppppppuVar10[2] = (undefined8 ******)0x0;
    *pppppppuVar10 = (undefined8 ******)0x0;
    if ((long)plStack_c0 < 0) {
      __ZdlPv(pppppppuStack_d0);
    }
    if ((char)bStack_81 < '\0') {
      __ZdlPv(pppppppuStack_98);
    }
    FUN_10a08d2e0(&plStack_80,param_1 + 0xa8);
    ppppppuVar7 = ppppppuStack_108;
    ppppppplVar8 = ppppppplStack_110;
    if (-1 < (long)ppppppuStack_100) {
      ppppppuVar7 = (undefined8 ******)((ulong)ppppppuStack_100 >> 0x38);
      ppppppplVar8 = (long *******)&ppppppplStack_110;
    }
    pplVar9 = &plStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar9,ppppppplVar8,ppppppuVar7);
    plStack_c8 = pplVar9[1];
    pppppppuStack_d0 = (undefined8 *******)*pplVar9;
    plStack_c0 = pplVar9[2];
    pplVar9[1] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    iVar14 = (int)&pppppppuStack_d0;
    FUN_10ad01a04();
    if ((long)plStack_c0 < 0) {
      __ZdlPv(pppppppuStack_d0);
    }
    if (iVar14 != 0) {
      FUN_10a0b4df8(&pppppppuStack_d0,&pppppppuStack_50,&ppppppplStack_110);
      plStack_48 = plStack_c8;
      pppppppuStack_50 = pppppppuStack_d0;
      plStack_40 = plStack_c0;
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f69e4d3,&UNK_10f69e510,99,&UNK_10f69e560,in_x6,in_x7,
                            &pppppppuStack_50);
      }
      bVar15 = false;
    }
    if ((long)ppppppuStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
  }
  else {
LAB_10ac5b62c:
    iVar14 = 0;
  }
  FUN_10a107e2c(&ppppppplStack_110,&pppppppuStack_50,param_1 + 0xc0,*(undefined4 *)(param_1 + 0xd8))
  ;
  FUN_10ac5b0a8(&pppppppuStack_d0);
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  if ((long)ppppppuStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  bVar2 = bVar15 | 2;
  if (iVar14 == 0) {
    bVar2 = bVar15;
  }
  if (*(char *)(param_1 + 0xf7) < '\0') {
    if (*(long *)(param_1 + 0xe8) != 0) goto LAB_10ac5b688;
  }
  else if (*(char *)(param_1 + 0xf7) != '\0') {
LAB_10ac5b688:
    FUN_10ac5b0a8(&ppppppplStack_110);
    plVar6 = (long *)0x90;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar11 = plVar6 + 3;
    *plVar6 = (long)&PTR_FUN_110bb36c0;
    FUN_10ab65c68(plVar11,&pppppppuStack_d0,&ppppppplStack_110,bVar2);
    plStack_80 = plVar11;
    plStack_78 = plVar6;
    func_0x00010a1ebf9c(param_1 + 0x118,&plStack_80);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        lVar12 = *plVar11;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar15) {
          *plVar11 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    FUN_10a0f1ea0(&ppppppplStack_110);
    goto LAB_10ac5b710;
  }
  ppppppuVar7 = (undefined8 ******)0x90;
  __Znwm();
  ppppppuVar7[1] = (undefined8 *****)0x0;
  ppppppuVar7[2] = (undefined8 *****)0x0;
  ppppppplVar8 = (long *******)(ppppppuVar7 + 3);
  *ppppppuVar7 = (undefined8 *****)&PTR_FUN_110bb36c0;
  FUN_10ab65a38(ppppppplVar8,&pppppppuStack_d0,bVar2);
  ppppppplStack_110 = ppppppplVar8;
  ppppppuStack_108 = ppppppuVar7;
  func_0x00010a1ebf9c(param_1 + 0x118,&ppppppplStack_110);
  ppppppuVar7 = ppppppuStack_108;
  if (ppppppuStack_108 != (undefined8 ******)0x0) {
    ppppppuVar1 = ppppppuStack_108 + 1;
    do {
      pppppuVar13 = *ppppppuVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar15) {
        *ppppppuVar1 = (undefined8 *****)((long)pppppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar13 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuStack_108)[2])(ppppppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
    }
  }
LAB_10ac5b710:
  FUN_10a0f1ea0(&pppppppuStack_d0);
  lVar12 = *(long *)(param_1 + 0x118);
  *(undefined4 *)(lVar12 + 0x20) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar12 + 0x40,&pppppppuStack_50);
  return;
}



/* Entry: 10ac5bb08; end: 10ac5bb2b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5b738) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b8c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b5e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b5f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b93c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b960) */
/* WARNING: Removing unreachable block (ram,0x00010ac5b748) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac5bb08(long param_1,int param_2)

{
  undefined8 ******ppppppuVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 ******ppppppuVar7;
  long *******ppppppplVar8;
  long **pplVar9;
  undefined8 *******pppppppuVar10;
  long *plVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  undefined8 *****pppppuVar13;
  int iVar14;
  bool bVar15;
  long *******ppppppplStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 uStack_f8;
  char cStack_e1;
  undefined8 *******pppppppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  long *plStack_80;
  long *plStack_78;
  short asStack_68 [11];
  char cStack_51;
  undefined8 *******pppppppuStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if (param_2 != 2) {
    return;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xaf) < '\0') {
    func_0x000107c3192c(&pppppppuStack_50,*(undefined8 *)(param_1 + 0x98),
                        *(undefined8 *)(param_1 + 0xa0));
  }
  else {
    plStack_48 = *(long **)(param_1 + 0xa0);
    pppppppuStack_50 = *(undefined8 ********)(param_1 + 0x98);
    plStack_40 = *(long **)(param_1 + 0xa8);
  }
  plVar6 = plStack_48;
  pppppppuVar10 = pppppppuStack_50;
  if (-1 < (long)plStack_40) {
    plVar6 = (long *)((ulong)plStack_40 >> 0x38);
    pppppppuVar10 = &pppppppuStack_50;
  }
  if (plVar6 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    do {
      plVar11 = plVar6;
      if (plVar11 == (long *)0x0) break;
      plVar6 = (long *)((long)plVar11 - 1);
    } while (*(char *)((long)pppppppuVar10 + ((long)plVar11 - 1U)) != '.');
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (asStack_68,&pppppppuStack_50,plVar11,0xffffffffffffffff,&ppppppplStack_110);
  bVar15 = cStack_51 == '\x02' && asStack_68[0] == 0x736c;
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    pbVar5 = (byte *)0x1138364b0;
    FUN_10a08f69c();
    if ((*pbVar5 & 1) != 0) goto LAB_10ac5b62c;
    iVar14 = (int)*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x870);
    FUN_10a4617d4();
    puVar3 = &UNK_10f69e4c0;
    if (iVar14 != 0) {
      puVar3 = &UNK_10f69e4c9;
    }
    func_0x000107c2b054(&plStack_80,puVar3);
    lVar12 = *(long *)(*(long *)(param_1 + 0x80) + 0x870);
    FUN_10a461678(lVar12);
    func_0x00010989b348(*(undefined8 *)(*(long *)(lVar12 + 0xd0) + 8));
    __ZNSt3__19to_stringEj(&pppppppuStack_98);
    pppppppuVar10 = pppppppuStack_98;
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
      pppppppuVar10 = &pppppppuStack_98;
    }
    pplVar9 = &plStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar9,pppppppuVar10,uStack_90);
    plStack_c8 = pplVar9[1];
    pppppppuStack_d0 = (undefined8 *******)*pplVar9;
    plStack_c0 = pplVar9[2];
    pplVar9[1] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    pppppppuVar10 = &pppppppuStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar10,&UNK_10f5adb65,2);
    ppppppuStack_108 = pppppppuVar10[1];
    ppppppplStack_110 = (long *******)*pppppppuVar10;
    ppppppuStack_100 = pppppppuVar10[2];
    pppppppuVar10[1] = (undefined8 ******)0x0;
    pppppppuVar10[2] = (undefined8 ******)0x0;
    *pppppppuVar10 = (undefined8 ******)0x0;
    if ((long)plStack_c0 < 0) {
      __ZdlPv(pppppppuStack_d0);
    }
    if ((char)bStack_81 < '\0') {
      __ZdlPv(pppppppuStack_98);
    }
    FUN_10a08d2e0(&plStack_80,param_1 + 0x98);
    ppppppuVar7 = ppppppuStack_108;
    ppppppplVar8 = ppppppplStack_110;
    if (-1 < (long)ppppppuStack_100) {
      ppppppuVar7 = (undefined8 ******)((ulong)ppppppuStack_100 >> 0x38);
      ppppppplVar8 = (long *******)&ppppppplStack_110;
    }
    pplVar9 = &plStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar9,ppppppplVar8,ppppppuVar7);
    plStack_c8 = pplVar9[1];
    pppppppuStack_d0 = (undefined8 *******)*pplVar9;
    plStack_c0 = pplVar9[2];
    pplVar9[1] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    iVar14 = (int)&pppppppuStack_d0;
    FUN_10ad01a04();
    if ((long)plStack_c0 < 0) {
      __ZdlPv(pppppppuStack_d0);
    }
    if (iVar14 != 0) {
      FUN_10a0b4df8(&pppppppuStack_d0,&pppppppuStack_50,&ppppppplStack_110);
      plStack_48 = plStack_c8;
      pppppppuStack_50 = pppppppuStack_d0;
      plStack_40 = plStack_c0;
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f69e4d3,&UNK_10f69e510,99,&UNK_10f69e560,in_x6,in_x7,
                            &pppppppuStack_50);
      }
      bVar15 = false;
    }
    if ((long)ppppppuStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
  }
  else {
LAB_10ac5b62c:
    iVar14 = 0;
  }
  FUN_10a107e2c(&ppppppplStack_110,&pppppppuStack_50,param_1 + 0xb0,*(undefined4 *)(param_1 + 200));
  FUN_10ac5b0a8(&pppppppuStack_d0);
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  if ((long)ppppppuStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  bVar2 = bVar15 | 2;
  if (iVar14 == 0) {
    bVar2 = bVar15;
  }
  if (*(char *)(param_1 + 0xe7) < '\0') {
    if (*(long *)(param_1 + 0xd8) != 0) goto LAB_10ac5b688;
  }
  else if (*(char *)(param_1 + 0xe7) != '\0') {
LAB_10ac5b688:
    FUN_10ac5b0a8(&ppppppplStack_110);
    plVar6 = (long *)0x90;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar11 = plVar6 + 3;
    *plVar6 = (long)&PTR_FUN_110bb36c0;
    FUN_10ab65c68(plVar11,&pppppppuStack_d0,&ppppppplStack_110,bVar2);
    plStack_80 = plVar11;
    plStack_78 = plVar6;
    func_0x00010a1ebf9c(param_1 + 0x108,&plStack_80);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        lVar12 = *plVar11;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar15) {
          *plVar11 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    FUN_10a0f1ea0(&ppppppplStack_110);
    goto LAB_10ac5b710;
  }
  ppppppuVar7 = (undefined8 ******)0x90;
  __Znwm();
  ppppppuVar7[1] = (undefined8 *****)0x0;
  ppppppuVar7[2] = (undefined8 *****)0x0;
  ppppppplVar8 = (long *******)(ppppppuVar7 + 3);
  *ppppppuVar7 = (undefined8 *****)&PTR_FUN_110bb36c0;
  FUN_10ab65a38(ppppppplVar8,&pppppppuStack_d0,bVar2);
  ppppppplStack_110 = ppppppplVar8;
  ppppppuStack_108 = ppppppuVar7;
  func_0x00010a1ebf9c(param_1 + 0x108,&ppppppplStack_110);
  ppppppuVar7 = ppppppuStack_108;
  if (ppppppuStack_108 != (undefined8 ******)0x0) {
    ppppppuVar1 = ppppppuStack_108 + 1;
    do {
      pppppuVar13 = *ppppppuVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar15) {
        *ppppppuVar1 = (undefined8 *****)((long)pppppuVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar13 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuStack_108)[2])(ppppppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
    }
  }
LAB_10ac5b710:
  FUN_10a0f1ea0(&pppppppuStack_d0);
  lVar12 = *(long *)(param_1 + 0x108);
  *(undefined4 *)(lVar12 + 0x20) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar12 + 0x40,&pppppppuStack_50);
  return;
}



/* Entry: 10ac5bb2c; end: 10ac5be1f;  */

void FUN_10ac5bb2c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long lStack_88;
  char cStack_71;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined4 uStack_38;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c5f9c0);
  if ((int)plVar1 == 0) {
    func_0x000107c2b054(auStack_68,&UNK_10f69e32c);
    FUN_10a0fed30(auStack_a0,param_2,&PTR_DAT_110c5f9e0,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x248))();
    if (*(char *)((long)plVar1 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_c0,*plVar1,plVar1[1]);
    }
    else {
      lStack_b8 = plVar1[1];
      lStack_c0 = *plVar1;
      lStack_b0 = plVar1[2];
    }
    FUN_10a107e2c(auStack_68,auStack_a0,&lStack_c0,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xa8,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xc0,auStack_50);
    *(undefined4 *)(param_1 + 0xd8) = uStack_38;
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    lVar2 = lStack_c0;
    if (-1 < lStack_b0) goto LAB_10ac5bcd4;
  }
  else {
    FUN_10a1e3e54(auStack_a0);
    (**(code **)(*param_2 + 0x230))(auStack_68,param_2,&PTR_DAT_110c5f9c0,auStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xa8,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xc0,auStack_50);
    *(undefined4 *)(param_1 + 0xd8) = uStack_38;
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    lVar2 = lStack_88;
    if (-1 < cStack_71) goto LAB_10ac5bcd4;
  }
  __ZdlPv(lVar2);
LAB_10ac5bcd4:
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c601c8);
  if ((int)plVar1 != 0) {
    FUN_10a1e3e54(auStack_a0);
    (**(code **)(*param_2 + 0x230))(auStack_68,param_2,&PTR_DAT_110c601c8,auStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xe0,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xf8,auStack_50);
    *(undefined4 *)(param_1 + 0x110) = uStack_38;
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(lStack_88);
    }
    if (cStack_89 < '\0') {
      __ZdlPv(auStack_a0[0]);
    }
  }
  return;
}



/* Entry: 10ac5be20; end: 10ac5bed7;  */

void FUN_10ac5be20(long param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f663214;
  uStack_28 = 0x1b;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c5f9c0,param_1 + 0xa8);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c5f9e0,param_1 + 0xa8);
  lVar1 = (long)*(char *)(param_1 + 0xf7);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0xe8);
  }
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c601c8,param_1 + 0xe0);
  }
  return;
}



/* Entry: 10ac5bed8; end: 10ac5bf5f;  */

undefined1  [16] FUN_10ac5bed8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f6631f8;
  return auVar1;
}



/* Entry: 10ac5bf60; end: 10ac5bfdf;  */

long * FUN_10ac5bf60(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c602c8;
  param_1[5] = (long)&PTR_DAT_110c602f8;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  FUN_10a1f7334(param_1 + 0x1a);
  func_0x00010a183e14(param_1 + 0x17);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110baf830;
  param_1[5] = (long)&PTR_DAT_110baf860;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  FUN_10a203d94(param_1 + 0x15);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb1d70;
  param_1[5] = (long)&PTR_DAT_110bb1da0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a1f4508(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5bfe0; end: 10ac5c023;  */

undefined8 * FUN_10ac5bfe0(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c60200;
  param_1[2] = &PTR_FUN_110c602c8;
  param_1[5] = &PTR_DAT_110c602f8;
  param_1[0x26] = &PTR_DAT_110c60380;
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  FUN_10a1f7334(param_1 + 0x1a);
  func_0x00010a183e14(param_1 + 0x17);
  *param_1 = &PTR_DAT_110c63cc0;
  param_1[2] = &PTR_FUN_110baf830;
  param_1[5] = &PTR_DAT_110baf860;
  param_1[0x26] = &PTR_DAT_110c63db8;
  FUN_10a203d94(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c63e08;
  param_1[2] = &PTR_FUN_110bb1d70;
  param_1[5] = &PTR_DAT_110bb1da0;
  param_1[0x26] = &PTR_DAT_110c63ed8;
  FUN_10a1f4508(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5c024; end: 10ac5c07f;  */

void FUN_10ac5c024(undefined8 param_1)

{
  FUN_10ac5bf60(param_1,&PTR_PTR_110c603b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac5c080; end: 10ac5c0b7;  */

void FUN_10ac5c080(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac5bf60((long)param_1 + lVar1,&PTR_PTR_110c603b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac5c0b8; end: 10ac5c20f;  */

undefined8 * FUN_10ac5c0b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x29) = 0x100;
  puVar1 = param_1;
  FUN_10a1e6678(param_1,&PTR_PTR_110c603c8,param_2);
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *puVar1 = &PTR_FUN_110c60200;
  puVar1[2] = &PTR_FUN_110c602c8;
  puVar1[5] = &PTR_DAT_110c602f8;
  puVar1[0x17] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x26] = &PTR_DAT_110c60380;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined4 *)(puVar1 + 0x1e) = 0x3f800000;
  func_0x000107c2b054(auStack_48,&UNK_10f69e32c);
  func_0x000107c2b054(auStack_60,&UNK_10f69e32c);
  FUN_10a107e2c(param_1 + 0x1f,auStack_48,auStack_60,0);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10ac5c210; end: 10ac5c32f;  */

void FUN_10ac5c210(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  
  plVar1 = param_1 + 0x1f;
  if ((int)param_2[6] == (int)param_1[0x25]) {
    bVar5 = *(byte *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    bVar6 = *(byte *)((long)param_1 + 0x10f);
    uVar3 = param_1[0x20];
    if (-1 < (char)bVar6) {
      uVar3 = (ulong)bVar6;
    }
    if (uVar2 == uVar3) {
      plVar7 = (long *)*param_2;
      if (-1 < (char)bVar5) {
        plVar7 = param_2;
      }
      plVar4 = (long *)*plVar1;
      if (-1 < (char)bVar6) {
        plVar4 = plVar1;
      }
      _memcmp(plVar7,plVar4);
      if ((int)plVar7 == 0) {
        bVar5 = *(byte *)((long)param_2 + 0x2f);
        uVar2 = param_2[4];
        if (-1 < (char)bVar5) {
          uVar2 = (ulong)bVar5;
        }
        bVar6 = *(byte *)((long)param_1 + 0x127);
        uVar3 = param_1[0x23];
        if (-1 < (char)bVar6) {
          uVar3 = (ulong)bVar6;
        }
        if (uVar2 == uVar3) {
          plVar7 = (long *)param_2[3];
          if (-1 < (char)bVar5) {
            plVar7 = param_2 + 3;
          }
          plVar4 = (long *)param_1[0x22];
          if (-1 < (char)bVar6) {
            plVar4 = param_1 + 0x22;
          }
          _memcmp(plVar7,plVar4);
          if ((int)plVar7 == 0) {
            return;
          }
        }
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x22,param_2 + 3);
  *(int *)(param_1 + 0x25) = (int)param_2[6];
                    /* WARNING: Could not recover jumptable at 0x00010ac5c31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



/* Entry: 10ac5c330; end: 10ac5c48b;  */

undefined8 FUN_10ac5c330(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined4 uStack_38;
  
  FUN_10ac5c0b8();
  func_0x000107c2b054(auStack_80,&UNK_10f69e32c);
  func_0x000107c2b054(auStack_98,&UNK_10f69e32c);
  FUN_10a107e2c(auStack_68,auStack_80,auStack_98,0);
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  puVar1 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1,param_3);
  uStack_38 = 0;
  if ((param_2 == 0) || ((param_4 & 1) != 0)) {
    uStack_38 = 1;
    func_0x00010ad03330();
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x100) + 0x220);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_50,puVar1);
  FUN_10ac5c210(param_1,auStack_68);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return param_1;
}



/* Entry: 10ac5c48c; end: 10ac5df0f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5d89c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5d8ac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac5c48c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *****ppppplVar5;
  long *plVar6;
  long *******ppppppplVar7;
  byte bVar8;
  char cVar9;
  long *****ppppplVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  long lVar18;
  char **ppcVar19;
  long ****pppplVar20;
  ulong *****pppppuVar21;
  undefined8 in_x6;
  undefined8 in_x7;
  char cVar22;
  uint uVar23;
  long lVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  ulong *******pppppppuVar27;
  long ******pppppplVar28;
  long *******ppppppplVar29;
  long ****pppplVar30;
  long *****ppppplVar31;
  long lVar32;
  char *pcVar33;
  ulong *******pppppppuVar34;
  long ******pppppplVar35;
  long lVar36;
  char *pcVar37;
  char *pcVar38;
  long *******ppppppplVar39;
  char *pcVar40;
  short *psVar41;
  byte *pbVar42;
  long ******pppppplVar43;
  ulong ******ppppppuVar44;
  ulong uVar45;
  char **ppcVar46;
  long *****ppppplVar47;
  long *plVar48;
  char **ppcVar49;
  undefined8 uVar50;
  ulong uVar51;
  ulong *******pppppppuVar52;
  long *******ppppppplVar53;
  uint uVar54;
  long *******ppppppplVar55;
  ulong uVar56;
  char **ppcVar57;
  long *****ppppplVar58;
  ulong uVar59;
  ulong uVar60;
  long *******ppppppplVar61;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined4 uStack_420;
  undefined4 uStack_418;
  undefined1 auStack_410 [40];
  undefined8 uStack_3e8;
  long *plStack_3e0;
  uint uStack_3d0;
  undefined1 auStack_3c8 [40];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined4 uStack_370;
  long *******ppppppplStack_360;
  long *****ppppplStack_358;
  long *****ppppplStack_350;
  long *******ppppppplStack_348;
  long ***appplStack_340 [3];
  long ***appplStack_328 [3];
  long ***appplStack_310 [3];
  long ***appplStack_2f8 [3];
  ulong *******pppppppuStack_2e0;
  long ******pppppplStack_2d8;
  long ******pppppplStack_2d0;
  ulong *******pppppppuStack_2c8;
  short *psStack_2c0;
  short *psStack_2b8;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [56];
  byte bStack_268;
  long *******ppppppplStack_140;
  long *****ppppplStack_138;
  undefined8 uStack_130;
  ulong *******pppppppuStack_128;
  long ******pppppplStack_120;
  undefined8 uStack_118;
  long ****pppplStack_110;
  long *****ppppplStack_108;
  char *pcStack_100;
  char **ppcStack_f8;
  undefined8 *******pppppppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long ****pppplStack_c0;
  ulong *******pppppppuStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  float fStack_a0;
  long lStack_90;
  long *plStack_88;
  long *****ppppplStack_80;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  
  plVar48 = (long *)(param_1 + 0xb8);
  if (*plVar48 != 0) {
    return;
  }
  if ((((int)param_2 != 2) && (*(long *)(param_1 + 0x90) != 0)) &&
     (*(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa20) + 0x18) < 0x5c)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0xf8);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    func_0x000107c3192c(&uStack_3a0,*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100)
                       );
  }
  else {
    uStack_398 = *(undefined8 *)(param_1 + 0x100);
    uStack_3a0 = *plVar1;
    lStack_390 = *(long *)(param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x127) < '\0') {
    func_0x000107c3192c(&uStack_388,*(undefined8 *)(param_1 + 0x110),
                        *(undefined8 *)(param_1 + 0x118));
  }
  else {
    uStack_380 = *(undefined8 *)(param_1 + 0x118);
    uStack_388 = *(undefined8 *)(param_1 + 0x110);
    lStack_378 = *(long *)(param_1 + 0x120);
  }
  uStack_370 = *(undefined4 *)(param_1 + 0x128);
  lVar14 = *(long *)(param_1 + 0x90);
  FUN_10a2421c8();
  uVar50 = *(undefined8 *)(lVar14 + 0x218);
  FUN_10a08d2e0(&ppppppplStack_360,plVar1);
  FUN_10a241a50(&pppppppuStack_2e0,uVar50,&ppppppplStack_360);
  if ((long)ppppplStack_350 < 0) {
    __ZdlPv(ppppppplStack_360);
  }
  if (bStack_268 == 1) {
    FUN_10a240380(&ppppppplStack_360,uVar50,&pppppppuStack_2e0);
    FUN_10a2741f8(plVar48,&ppppppplStack_360);
    ppppplVar31 = ppppplStack_358;
    if (ppppplStack_358 != (long *****)0x0) {
      ppppplVar58 = ppppplStack_358 + 1;
      do {
        pppplVar30 = *ppppplVar58;
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppplVar58,0x10);
        if (bVar12) {
          *ppppplVar58 = (long ****)((long)pppplVar30 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppplVar30 == (long ****)0x0) {
        (*(code *)(*ppppplStack_358)[2])(ppppplStack_358);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar31);
      }
    }
    if ((bStack_268 & 1) == 0) goto LAB_10ac5dcb8;
    *(undefined4 *)(param_1 + 200) = uStack_2a8;
    FUN_10ac7cf9c(param_1 + 0xd0,auStack_2a0);
    FUN_10a1e67f8(param_1,param_2);
    FUN_10ac78344(&pppppppuStack_2e0);
    goto LAB_10ac5db30;
  }
  pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
  FUN_10ac78344();
  FUN_10a08fd8c();
  plVar15 = *(long **)(lVar14 + 0x228);
  if (((ulong)pppppppuVar27 & 0xa0) == 0) {
    FUN_10ac5df10(plVar15,&uStack_3a0);
  }
  else {
    (**(code **)(*plVar15 + 0x68))();
    pppppppuVar16 = (ulong *******)(plVar15 + 9);
    uVar3 = plVar15[10];
    pppppppuVar27 = (ulong *******)*pppppppuVar16;
    if (-1 < (char)*(byte *)((long)plVar15 + 0x5f)) {
      uVar3 = (ulong)*(byte *)((long)plVar15 + 0x5f);
      pppppppuVar27 = pppppppuVar16;
    }
    if (((uVar3 == 3) &&
        (*(short *)pppppppuVar27 == 0x7073 && *(char *)((long)pppppppuVar27 + 2) == 'v')) &&
       (FUN_10a08fd8c(), ((uint)pppppppuVar16 >> 8 & 1) != 0)) {
      if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
        plVar15 = plVar1;
        if (*(char *)(param_1 + 0x10f) < '\0') {
          plVar15 = (long *)*plVar1;
        }
        pppppppuVar16 = (ulong *******)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x1e1,&UNK_10f69e760,in_x6,in_x7,
                            plVar15);
      }
LAB_10ac5c784:
      cVar9 = *(char *)((long)pppppppuVar27 + 2);
      bVar12 = *(short *)pppppppuVar27 == 0x7073;
      cVar22 = 'v';
LAB_10ac5c798:
      if (bVar12 && cVar9 == cVar22) {
        FUN_10a3ca004();
        ppppppuVar44 = pppppppuVar16[0xb];
        if (ppppppuVar44 == (ulong ******)0x0) {
          FUN_10a3ca05c(pppppppuVar16,4);
          ppppppuVar44 = pppppppuVar16[0xb];
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_3a0,plVar1)
        ;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_388,param_1 + 0x110);
        uStack_370 = *(undefined4 *)(param_1 + 0x128);
        pppppuVar21 = ppppppuVar44[0x45];
        FUN_10ac5df10(pppppuVar21,&uStack_3a0);
        if (((ulong)pppppuVar21 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_3a0,plVar1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_388,param_1 + 0x110);
          uStack_370 = *(undefined4 *)(param_1 + 0x128);
          FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
          iVar13 = (int)&pppppppuStack_2e0;
          FUN_10ad01a04();
          if ((long)pppppplStack_2d0 < 0) {
            __ZdlPv(pppppppuStack_2e0);
          }
          if (iVar13 == 0) {
            if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
              FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
              pppppppuVar27 = pppppppuStack_2e0;
              if (-1 < (long)pppppplStack_2d0) {
                pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
              }
              func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x218,&UNK_10f69e81c,in_x6,in_x7
                                  ,pppppppuVar27);
              goto LAB_10ac5dc68;
            }
          }
          else if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
            FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
            pppppppuVar27 = pppppppuStack_2e0;
            if (-1 < (long)pppppplStack_2d0) {
              pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
            }
            func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x215,&UNK_10f69e7e0,in_x6,in_x7,
                                pppppppuVar27);
LAB_10ac5dc68:
            if ((long)pppppplStack_2d0 < 0) {
              __ZdlPv(pppppppuStack_2e0);
            }
          }
        }
        else if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
          FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
          pppppppuVar27 = pppppppuStack_2e0;
          if (-1 < (long)pppppplStack_2d0) {
            pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
          }
          func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x21b,&UNK_10f69e84d,in_x6,in_x7,
                              pppppppuVar27);
          goto LAB_10ac5dc68;
        }
      }
    }
    else {
      pppppppuVar16 = *(ulong ********)(lVar14 + 0x228);
      FUN_10ac5df10(pppppppuVar16,&uStack_3a0);
      if (((ulong)pppppppuVar16 & 1) == 0) {
        if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
          FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
          pppppppuVar52 = pppppppuStack_2e0;
          if (-1 < (long)pppppplStack_2d0) {
            pppppppuVar52 = (ulong *******)&pppppppuStack_2e0;
          }
          pppppppuVar16 = (ulong *******)0x1;
          func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x1e3,&UNK_10f69e7b6,in_x6,in_x7,
                              pppppppuVar52);
          if ((long)pppppplStack_2d0 < 0) {
            pppppppuVar16 = pppppppuStack_2e0;
            __ZdlPv();
          }
        }
        if (uVar3 == 5) {
          cVar9 = *(char *)((long)pppppppuVar27 + 4);
          bVar12 = *(int *)pppppppuVar27 == 0x6174656d;
          cVar22 = 'l';
          goto LAB_10ac5c798;
        }
        if (uVar3 == 3) goto LAB_10ac5c784;
      }
    }
  }
  FUN_10a240380(&pppppppuStack_2e0,*(undefined8 *)(lVar14 + 0x218),&uStack_3a0);
  FUN_10a2741f8(plVar48,&pppppppuStack_2e0);
  pppppplVar43 = pppppplStack_2d8;
  if (pppppplStack_2d8 != (long ******)0x0) {
    pppppplVar28 = pppppplStack_2d8 + 1;
    do {
      ppppplVar31 = *pppppplVar28;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *pppppplVar28 = (long *****)((long)ppppplVar31 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (ppppplVar31 == (long *****)0x0) {
      (*(code *)(*pppppplStack_2d8)[2])(pppppplStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar43);
    }
  }
  lVar24 = *plVar48;
  plStack_88 = *(long **)(lVar24 + 0x60);
  lStack_90 = *(long *)(lVar24 + 0x58);
  if (-1 < (char)*(byte *)(lVar24 + 0x6f)) {
    plStack_88 = (long *)(ulong)*(byte *)(lVar24 + 0x6f);
    lStack_90 = lVar24 + 0x58;
  }
  pppppppuStack_b8 = (ulong *******)0x0;
  pppplStack_c0 = (long ****)0x0;
  lStack_a8 = 0;
  ppppppplStack_b0 = (long *******)0x0;
  fStack_a0 = 1.0;
  func_0x000107c2b054(&pppppppuStack_d8,&UNK_10f648437);
  func_0x000107c2b054(&pppppppuStack_f0,&UNK_10f648454);
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppppppuStack_d8 = &pppppppuStack_d8;
  }
  plVar48 = &lStack_90;
  FUN_10a0ee2b4(plVar48,pppppppuStack_d8,uStack_d0,0);
  lVar24 = lStack_90;
  if (plVar48 == (long *)0xffffffffffffffff) goto LAB_10ac5d3a8;
  if (plStack_88 < plVar48 || (long)plStack_88 - (long)plVar48 == 0) {
LAB_10ac5d374:
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e5ce,0xff,&UNK_10f69e647);
    }
  }
  else {
    lVar17 = lStack_90 + (long)plVar48;
    _memchr(lVar17,10,(long)plStack_88 - (long)plVar48);
    if ((lVar17 == 0) ||
       (plVar48 = (long *)(lVar17 - lVar24), plVar48 == (long *)0xffffffffffffffff))
    goto LAB_10ac5d374;
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
      pppppppuStack_f0 = &pppppppuStack_f0;
    }
    lVar24 = (long)plVar48 + 1;
    plVar15 = &lStack_90;
    FUN_10a0ee2b4(plVar15,pppppppuStack_f0,uStack_e8,lVar24);
    lVar17 = lStack_90;
    if (plVar15 == (long *)0xffffffffffffffff) {
      if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e5ce,0x103,&UNK_10f69e68d);
      }
    }
    else {
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88;
        if (plVar15 < plStack_88) {
          plVar6 = (long *)((long)plVar15 + 1);
        }
        lVar36 = -(long)plVar6;
        pcVar40 = (char *)((long)plVar6 + lStack_90);
        do {
          pcVar40 = pcVar40 + -1;
          if (lVar36 == 0) goto LAB_10ac5d7dc;
          lVar36 = lVar36 + 1;
        } while (*pcVar40 != '\n');
        if ((lVar36 != 1) && (plVar48 <= (long *)-lVar36)) {
          if (-(long)plVar48 != lVar36) {
            if (plStack_88 <= plVar48) {
              FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10ac5dcb8:
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10ac5dcbc);
              (*pcVar11)();
            }
            uVar3 = (long)plStack_88 - lVar24;
            if (~(ulong)plVar48 - lVar36 <= (ulong)((long)plStack_88 - lVar24)) {
              uVar3 = ~(ulong)plVar48 - lVar36;
            }
            if (uVar3 != 0) {
              lVar24 = lStack_90 + lVar24;
              uVar45 = 0;
              do {
                uVar51 = uVar3 - uVar45;
                lVar36 = lVar24 + uVar45;
                lVar18 = lVar36;
                _memchr(lVar36,10,uVar51);
                lVar32 = lVar18 - lVar24;
                uVar59 = uVar51;
                if (lVar32 - uVar45 <= uVar51) {
                  uVar59 = lVar32 - uVar45;
                }
                uVar4 = uVar3;
                if (lVar32 != -1 && lVar18 != 0) {
                  uVar4 = lVar32 + 1;
                  uVar51 = uVar59;
                }
                uVar59 = 0;
                uVar60 = uVar59;
                if (uVar51 != 0) {
                  do {
                    bVar8 = *(byte *)(lVar36 + uVar59);
                    if ((long)(char)bVar8 < 0) {
                      uVar23 = (uint)bVar8;
                      ___maskrune(bVar8,0x4000);
                    }
                    else {
                      uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                        (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                    }
                    uVar60 = uVar59;
                  } while ((uVar23 != 0) && (uVar59 = uVar59 + 1, uVar60 = uVar51, uVar51 != uVar59)
                          );
                }
                ppcVar49 = (char **)(uVar51 - uVar60);
                pbVar42 = (byte *)((long)plVar48 + uVar51 + uVar45 + lVar17);
                ppcVar57 = ppcVar49;
                uVar59 = uVar51;
                do {
                  ppcVar19 = ppcVar57;
                  if (uVar59 <= uVar60) break;
                  uVar59 = uVar59 - 1;
                  if (uVar51 <= uVar59) goto LAB_10ac5dcb8;
                  bVar8 = *pbVar42;
                  if ((long)(char)bVar8 < 0) {
                    uVar23 = (uint)bVar8;
                    ___maskrune(bVar8,0x4000);
                  }
                  else {
                    uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                      (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                  }
                  pbVar42 = pbVar42 + -1;
                  ppcVar57 = (char **)((long)ppcVar19 + -1);
                } while (uVar23 != 0);
                pcVar40 = (char *)(lVar36 + uVar60);
                ppcStack_f8 = ppcVar49;
                if (ppcVar19 <= ppcVar49) {
                  ppcStack_f8 = ppcVar19;
                }
                pcStack_100 = pcVar40;
                if (ppcStack_f8 != (char **)0x0) {
                  ppcVar57 = ppcStack_f8;
                  if ((char **)0x1 < ppcStack_f8) {
                    ppcVar57 = (char **)0x2;
                  }
                  pcVar2 = pcVar40 + (long)ppcVar57;
                  pcVar37 = pcVar40;
                  pcVar38 = pcVar2;
                  do {
                    while (pcVar33 = pcVar38, pcVar38 = pcVar37, pcVar37 = pcVar38 + 1,
                          *pcVar38 == '/') {
                      if (pcVar37 == pcVar2) goto LAB_10ac5cad4;
                      if (*pcVar37 != '/') {
                        pcVar38 = pcVar33;
                      }
                    }
                    pcVar38 = pcVar33;
                  } while (pcVar37 != pcVar2);
LAB_10ac5cad4:
                  if ((pcVar33 != pcVar2) && (pcVar33 == pcVar40)) {
                    if (ppcStack_f8 == (char **)0x1) {
                      FUN_109ffdddc(&UNK_10f2fca6e);
                      goto LAB_10ac5dcb8;
                    }
                    uVar59 = (long)ppcStack_f8 - 2;
                    if (uVar59 == 0) {
                      uVar51 = 0;
                    }
                    else {
                      uVar56 = 0;
                      ppcVar57 = ppcVar19;
                      if (ppcVar49 <= ppcVar19) {
                        ppcVar57 = ppcVar49;
                      }
                      do {
                        bVar8 = pcVar40[uVar56 + 2];
                        if ((long)(char)bVar8 < 0) {
                          uVar23 = (uint)bVar8;
                          ___maskrune(bVar8,0x4000);
                        }
                        else {
                          uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                            (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                        }
                        uVar51 = uVar56;
                      } while ((uVar23 != 0) &&
                              (uVar56 = uVar56 + 1, uVar51 = uVar59, (long)ppcVar57 - 2U != uVar56))
                      ;
                    }
                    if (ppcVar49 <= ppcVar19) {
                      ppcVar19 = ppcVar49;
                    }
                    pbVar42 = (byte *)((long)plVar48 + uVar45 + uVar60 + lVar17 + (long)ppcVar19);
                    uVar45 = (long)ppcVar19 - 3;
                    ppcVar57 = (char **)((long)ppcVar19 + (-2 - uVar51));
                    do {
                      ppcVar49 = ppcVar57;
                      if (uVar45 + 1 <= uVar51) break;
                      if (uVar59 <= uVar45) goto LAB_10ac5dcb8;
                      bVar8 = *pbVar42;
                      if ((long)(char)bVar8 < 0) {
                        uVar23 = (uint)bVar8;
                        ___maskrune(bVar8,0x4000);
                      }
                      else {
                        uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                          (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                      }
                      pbVar42 = pbVar42 + -1;
                      uVar45 = uVar45 - 1;
                      ppcVar57 = (char **)((long)ppcVar49 + -1);
                    } while (uVar23 != 0);
                    pcStack_100 = pcVar40 + uVar51 + 2;
                    ppcStack_f8 = (char **)(uVar59 - uVar51);
                    if (ppcVar49 <= (char **)(uVar59 - uVar51)) {
                      ppcStack_f8 = ppcVar49;
                    }
                    if (ppcStack_f8 == (char **)0x0) goto LAB_10ac5d360;
                  }
                  ppcVar57 = ppcStack_f8;
                  pcVar40 = pcStack_100;
                  pppplStack_110 = (long ****)0x0;
                  ppppplStack_108 = (long *****)0x0;
                  ppcVar19 = &pcStack_100;
                  FUN_10a3515d4(ppcVar19,&DAT_10f6025a4,0);
                  ppcVar49 = ppcStack_f8;
                  pcVar2 = pcStack_100;
                  if (ppcVar19 != (char **)0xffffffffffffffff) {
                    lVar36 = (long)ppcStack_f8 - (long)ppcVar19;
                    ppcVar57 = ppcStack_f8;
                    if (ppcStack_f8 >= ppcVar19) {
                      ppcVar57 = ppcVar19;
                    }
                    if (ppcStack_f8 < ppcVar19 || lVar36 == 0) {
                      FUN_109ffdddc(&UNK_10f2fca6e);
                      goto LAB_10ac5dcb8;
                    }
                    lVar18 = (long)ppcVar19 + 1;
                    uVar45 = 0;
                    uVar59 = (long)ppcStack_f8 - lVar18;
                    uVar51 = uVar45;
                    if (uVar59 != 0) {
                      do {
                        bVar8 = pcVar2[uVar45 + lVar18];
                        if ((long)(char)bVar8 < 0) {
                          uVar23 = (uint)bVar8;
                          ___maskrune(bVar8,0x4000);
                        }
                        else {
                          uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                            (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                        }
                        uVar51 = uVar45;
                      } while ((uVar23 != 0) &&
                              (uVar45 = uVar45 + 1, uVar51 = uVar59, uVar59 != uVar45));
                    }
                    lVar32 = (long)ppcVar49 + -1;
                    uVar45 = lVar36 - 2;
                    ppppplVar31 = (long *****)((lVar32 - (long)ppcVar19) - uVar51);
                    do {
                      ppppplVar58 = ppppplVar31;
                      if (uVar45 + 1 <= uVar51) break;
                      if (uVar59 <= uVar45) goto LAB_10ac5dcb8;
                      bVar8 = pcVar2[lVar32];
                      if ((long)(char)bVar8 < 0) {
                        uVar23 = (uint)bVar8;
                        ___maskrune(bVar8,0x4000);
                      }
                      else {
                        uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                          (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                      }
                      lVar32 = lVar32 + -1;
                      uVar45 = uVar45 - 1;
                      ppppplVar31 = (long *****)((long)ppppplVar58 + -1);
                    } while (uVar23 != 0);
                    ppppplStack_108 = (long *****)(uVar59 - uVar51);
                    if (ppppplVar58 <= (long *****)(uVar59 - uVar51)) {
                      ppppplStack_108 = ppppplVar58;
                    }
                    pppplStack_110 = (long ****)(pcVar2 + uVar51 + lVar18);
                    pcVar40 = pcVar2;
                  }
                  ppcVar49 = (char **)0x0;
                  ppcVar19 = ppcVar49;
                  if (ppcVar57 != (char **)0x0) {
                    do {
                      bVar8 = pcVar40[(long)ppcVar49];
                      if ((long)(char)bVar8 < 0) {
                        uVar23 = (uint)bVar8;
                        ___maskrune(bVar8,0x4000);
                      }
                      else {
                        uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                          (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                      }
                      ppcVar19 = ppcVar49;
                    } while ((uVar23 != 0) &&
                            (ppcVar49 = (char **)((long)ppcVar49 + 1), ppcVar19 = ppcVar57,
                            ppcVar57 != ppcVar49));
                  }
                  pppppplVar43 = (long ******)((long)ppcVar57 - (long)ppcVar19);
                  pppppplVar28 = pppppplVar43;
                  ppcVar49 = ppcVar57;
                  do {
                    pppppplVar35 = pppppplVar28;
                    ppcVar46 = (char **)((long)ppcVar49 - 1);
                    if (ppcVar49 <= ppcVar19) break;
                    if (ppcVar57 <= ppcVar46) goto LAB_10ac5dcb8;
                    bVar8 = pcVar40[(long)ppcVar46];
                    if ((long)(char)bVar8 < 0) {
                      uVar23 = (uint)bVar8;
                      ___maskrune(bVar8,0x4000);
                    }
                    else {
                      uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                        (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                    }
                    pppppplVar28 = (long ******)((long)pppppplVar35 + -1);
                    ppcVar49 = ppcVar46;
                  } while (uVar23 != 0);
                  if (pppppplVar35 <= pppppplVar43) {
                    pppppplVar43 = pppppplVar35;
                  }
                  if (pppppplVar43 != (long ******)0x0) {
                    if (ppppplStack_108 != (long *****)0x0) {
                      ppppplVar31 = &pppplStack_110;
                      FUN_10a166af4(ppppplVar31,"//",0);
                      pppplVar30 = pppplStack_110;
                      if (ppppplVar31 != (long *****)0xffffffffffffffff) {
                        ppppplVar58 = (long *****)0x0;
                        ppppplVar5 = ppppplStack_108;
                        if (ppppplVar31 <= ppppplStack_108) {
                          ppppplVar5 = ppppplVar31;
                        }
                        ppppplVar31 = ppppplVar58;
                        if (ppppplVar5 != (long *****)0x0) {
                          do {
                            bVar8 = *(byte *)((long)pppplVar30 + (long)ppppplVar58);
                            if ((long)(char)bVar8 < 0) {
                              uVar23 = (uint)bVar8;
                              ___maskrune(bVar8,0x4000);
                            }
                            else {
                              uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                                (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                            }
                            ppppplVar31 = ppppplVar58;
                          } while ((uVar23 != 0) &&
                                  (ppppplVar58 = (long *****)((long)ppppplVar58 + 1),
                                  ppppplVar31 = ppppplVar5, ppppplVar5 != ppppplVar58));
                        }
                        ppppplVar25 = (long *****)((long)ppppplVar5 - (long)ppppplVar31);
                        ppppplVar10 = ppppplVar25;
                        ppppplVar58 = ppppplVar5;
                        do {
                          ppppplVar26 = ppppplVar10;
                          ppppplVar47 = (long *****)((long)ppppplVar58 - 1);
                          if (ppppplVar58 <= ppppplVar31) break;
                          if (ppppplVar5 <= ppppplVar47) goto LAB_10ac5dcb8;
                          bVar8 = *(byte *)((long)pppplVar30 + (long)ppppplVar47);
                          if ((long)(char)bVar8 < 0) {
                            uVar23 = (uint)bVar8;
                            ___maskrune(bVar8,0x4000);
                          }
                          else {
                            uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                              (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                          }
                          ppppplVar10 = (long *****)((long)ppppplVar26 + -1);
                          ppppplVar58 = ppppplVar47;
                        } while (uVar23 != 0);
                        pppplStack_110 = (long ****)((long)pppplVar30 + (long)ppppplVar31);
                        ppppplStack_108 = ppppplVar25;
                        if (ppppplVar26 <= ppppplVar25) {
                          ppppplStack_108 = ppppplVar26;
                        }
                      }
                    }
                    if ((long ******)0x7ffffffffffffff7 < pppppplVar43) {
                      func_0x000109ffde50();
                      goto LAB_10ac5dcb8;
                    }
                    if (pppppplVar43 < (long ******)0x17) {
                      uStack_118 = (long ******)CONCAT17((char)pppppplVar43,(undefined7)uStack_118);
                      pppppppuVar16 = (ulong *******)&pppppppuStack_128;
                    }
                    else {
                      pppppppuVar27 = (ulong *******)0x19;
                      if (((ulong)pppppplVar43 | 7) != 0x17) {
                        pppppppuVar27 = (ulong *******)(((ulong)pppppplVar43 | 7) + 1);
                      }
                      pppppppuVar16 = pppppppuVar27;
                      __Znwm();
                      uStack_118 = (long ******)((ulong)pppppppuVar27 | 0x8000000000000000);
                      pppppppuStack_128 = pppppppuVar16;
                      pppppplStack_120 = pppppplVar43;
                    }
                    _memmove(pppppppuVar16,pcVar40 + (long)ppcVar19,pppppplVar43);
                    pppppplStack_2d0 = uStack_118;
                    *(undefined1 *)((long)pppppppuVar16 + (long)pppppplVar43) = 0;
                    pppppplStack_2d8 = pppppplStack_120;
                    pppppppuStack_2e0 = pppppppuStack_128;
                    pppppplStack_120 = (long ******)0x0;
                    pppppppuStack_128 = (ulong *******)0x0;
                    uStack_118 = (long ******)0x0;
                    pppppppuStack_2c8 = (ulong *******)0x0;
                    func_0x000107c2b080(&pppppppuStack_2e0);
                    pppppppuVar52 = pppppppuStack_b8;
                    pppppppuVar27 = pppppppuStack_2c8;
                    if (pppppppuStack_b8 != (ulong *******)0x0) {
                      uVar45 = (long)pppppppuStack_b8 - 1;
                      if (((ulong)pppppppuStack_b8 & uVar45) == 0) {
                        pppppppuVar16 = (ulong *******)(uVar45 & (ulong)pppppppuStack_2c8);
                      }
                      else {
                        pppppppuVar16 = pppppppuStack_2c8;
                        if (pppppppuStack_b8 <= pppppppuStack_2c8) {
                          uVar59 = 0;
                          if (pppppppuStack_b8 != (ulong *******)0x0) {
                            uVar59 = (ulong)pppppppuStack_2c8 / (ulong)pppppppuStack_b8;
                          }
                          pppppppuVar16 =
                               (ulong *******)
                               ((long)pppppppuStack_2c8 - uVar59 * (long)pppppppuStack_b8);
                        }
                      }
                      if (pppplStack_c0[(long)pppppppuVar16] != (long ***)0x0) {
                        for (ppppppplVar55 = (long *******)*pppplStack_c0[(long)pppppppuVar16];
                            ppppppplVar55 != (long *******)0x0;
                            ppppppplVar55 = (long *******)*ppppppplVar55) {
                          pppppppuVar34 = (ulong *******)ppppppplVar55[1];
                          if (pppppppuVar34 == pppppppuStack_2c8) {
                            if ((ulong *******)ppppppplVar55[5] == pppppppuStack_2c8)
                            goto LAB_10ac5d0e8;
                          }
                          else {
                            if (((ulong)pppppppuStack_b8 & uVar45) == 0) {
                              pppppppuVar34 = (ulong *******)((ulong)pppppppuVar34 & uVar45);
                            }
                            else if (pppppppuStack_b8 <= pppppppuVar34) {
                              uVar59 = 0;
                              if (pppppppuStack_b8 != (ulong *******)0x0) {
                                uVar59 = (ulong)pppppppuVar34 / (ulong)pppppppuStack_b8;
                              }
                              pppppppuVar34 =
                                   (ulong *******)
                                   ((long)pppppppuVar34 - uVar59 * (long)pppppppuStack_b8);
                            }
                            if (pppppppuVar34 != pppppppuVar16) break;
                          }
                        }
                      }
                    }
                    ppppppplVar55 = (long *******)0x58;
                    __Znwm();
                    pppppplVar43 = pppppplStack_2d0;
                    ppppplStack_358 = &pppplStack_c0;
                    ppppplStack_350 = (long *****)0x1;
                    *ppppppplVar55 = (long ******)0x0;
                    ppppppplVar55[1] = (long ******)pppppppuVar27;
                    ppppppplVar55[3] = pppppplStack_2d8;
                    ppppppplVar55[2] = (long ******)pppppppuStack_2e0;
                    pppppppuStack_2e0 = (ulong *******)0x0;
                    pppppplStack_2d8 = (long ******)0x0;
                    pppppplStack_2d0 = (long ******)0x0;
                    ppppppplVar55[4] = pppppplVar43;
                    ppppppplVar55[5] = (long ******)pppppppuVar27;
                    ppppppplVar55[7] = (long ******)0x0;
                    ppppppplVar55[6] = (long ******)0x0;
                    ppppppplVar55[9] = (long ******)0x0;
                    ppppppplVar55[8] = (long ******)0x0;
                    *(undefined4 *)(ppppppplVar55 + 10) = 0x3f800000;
                    ppppppplStack_360 = ppppppplVar55;
                    if ((pppppppuVar52 == (ulong *******)0x0) ||
                       (fStack_a0 * (float)pppppppuVar52 < (float)(lStack_a8 + 1))) {
                      if (pppppppuVar52 < (ulong *******)0x3) {
                        uVar45 = 1;
                      }
                      else {
                        uVar45 = (ulong)(((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) != 0);
                      }
                      uVar45 = uVar45 | (long)pppppppuVar52 << 1;
                      uVar59 = (ulong)((float)(lStack_a8 + 1) / fStack_a0);
                      if (uVar45 <= uVar59) {
                        uVar45 = uVar59;
                      }
                      FUN_10a275048(&pppplStack_c0,uVar45);
                      pppppppuVar52 = pppppppuStack_b8;
                      if (((ulong)pppppppuStack_b8 & (long)pppppppuStack_b8 - 1U) == 0) {
                        pppppppuVar16 =
                             (ulong *******)((long)pppppppuStack_b8 - 1U & (ulong)pppppppuVar27);
                      }
                      else {
                        pppppppuVar16 = pppppppuVar27;
                        if (pppppppuStack_b8 <= pppppppuVar27) {
                          uVar45 = 0;
                          if (pppppppuStack_b8 != (ulong *******)0x0) {
                            uVar45 = (ulong)pppppppuVar27 / (ulong)pppppppuStack_b8;
                          }
                          pppppppuVar16 =
                               (ulong *******)
                               ((long)pppppppuVar27 - uVar45 * (long)pppppppuStack_b8);
                        }
                      }
                    }
                    pppplVar30 = (long ****)pppplStack_c0[(long)pppppppuVar16];
                    if (pppplVar30 == (long ****)0x0) {
                      *ppppppplVar55 = (long ******)ppppppplStack_b0;
                      pppplStack_c0[(long)pppppppuVar16] = (long ***)&ppppppplStack_b0;
                      ppppppplStack_b0 = ppppppplVar55;
                      if (*ppppppplVar55 != (long ******)0x0) {
                        pppppppuVar27 = (ulong *******)(*ppppppplVar55)[1];
                        if (((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) == 0) {
                          pppppppuVar27 =
                               (ulong *******)((ulong)pppppppuVar27 & (long)pppppppuVar52 - 1U);
                        }
                        else if (pppppppuVar52 <= pppppppuVar27) {
                          uVar45 = 0;
                          if (pppppppuVar52 != (ulong *******)0x0) {
                            uVar45 = (ulong)pppppppuVar27 / (ulong)pppppppuVar52;
                          }
                          pppppppuVar27 =
                               (ulong *******)((long)pppppppuVar27 - uVar45 * (long)pppppppuVar52);
                        }
                        pppplVar30 = pppplStack_c0 + (long)pppppppuVar27;
                        goto LAB_10ac5d0d8;
                      }
                    }
                    else {
                      *ppppppplVar55 = (long ******)*pppplVar30;
LAB_10ac5d0d8:
                      *pppplVar30 = (long ***)ppppppplVar55;
                    }
                    lStack_a8 = lStack_a8 + 1;
LAB_10ac5d0e8:
                    ppppplVar31 = ppppplStack_108;
                    pppplVar30 = pppplStack_110;
                    if ((long *****)0x7ffffffffffffff7 < ppppplStack_108) {
                      func_0x000109ffde50();
                      goto LAB_10ac5dcb8;
                    }
                    if (ppppplStack_108 < (long *****)0x17) {
                      uStack_130 = (long *****)
                                   CONCAT17((char)ppppplStack_108,(undefined7)uStack_130);
                      ppppppplVar61 = (long *******)&ppppppplStack_140;
                      if (ppppplStack_108 != (long *****)0x0) goto LAB_10ac5d144;
                    }
                    else {
                      ppppppplVar7 = (long *******)0x19;
                      if (((ulong)ppppplStack_108 | 7) != 0x17) {
                        ppppppplVar7 = (long *******)(((ulong)ppppplStack_108 | 7) + 1);
                      }
                      ppppppplVar61 = ppppppplVar7;
                      __Znwm();
                      uStack_130 = (long *****)((ulong)ppppppplVar7 | 0x8000000000000000);
                      ppppplStack_138 = ppppplVar31;
                      ppppppplStack_140 = ppppppplVar61;
LAB_10ac5d144:
                      _memmove(ppppppplVar61,pppplVar30,ppppplVar31);
                    }
                    *(undefined1 *)((long)ppppppplVar61 + (long)ppppplVar31) = 0;
                    ppppppplVar7 = ppppppplVar55 + 6;
                    ppppplStack_358 = ppppplStack_138;
                    ppppppplStack_360 = ppppppplStack_140;
                    ppppplStack_350 = uStack_130;
                    ppppppplStack_348 = (long *******)0x0;
                    func_0x000107c2b080(&ppppppplStack_360);
                    ppppppplVar29 = ppppppplStack_348;
                    ppppppplVar53 = (long *******)ppppppplVar55[7];
                    if (ppppppplVar53 != (long *******)0x0) {
                      uVar45 = (long)ppppppplVar53 - 1;
                      if (((ulong)ppppppplVar53 & uVar45) == 0) {
                        ppppppplVar61 = (long *******)(uVar45 & (ulong)ppppppplStack_348);
                      }
                      else {
                        ppppppplVar61 = ppppppplStack_348;
                        if (ppppppplVar53 <= ppppppplStack_348) {
                          uVar59 = 0;
                          if (ppppppplVar53 != (long *******)0x0) {
                            uVar59 = (ulong)ppppppplStack_348 / (ulong)ppppppplVar53;
                          }
                          ppppppplVar61 =
                               (long *******)
                               ((long)ppppppplStack_348 - uVar59 * (long)ppppppplVar53);
                        }
                      }
                      ppppplVar31 = (*ppppppplVar7)[(long)ppppppplVar61];
                      if (ppppplVar31 != (long *****)0x0) {
                        do {
                          while( true ) {
                            ppppplVar31 = (long *****)*ppppplVar31;
                            if (ppppplVar31 == (long *****)0x0) goto LAB_10ac5d200;
                            ppppppplVar39 = (long *******)ppppplVar31[1];
                            if (ppppppplVar39 != ppppppplStack_348) break;
                            if ((long *******)ppppplVar31[5] == ppppppplStack_348)
                            goto LAB_10ac5d330;
                          }
                          if (((ulong)ppppppplVar53 & uVar45) == 0) {
                            ppppppplVar39 = (long *******)((ulong)ppppppplVar39 & uVar45);
                          }
                          else if (ppppppplVar53 <= ppppppplVar39) {
                            uVar59 = 0;
                            if (ppppppplVar53 != (long *******)0x0) {
                              uVar59 = (ulong)ppppppplVar39 / (ulong)ppppppplVar53;
                            }
                            ppppppplVar39 =
                                 (long *******)((long)ppppppplVar39 - uVar59 * (long)ppppppplVar53);
                          }
                        } while (ppppppplVar39 == ppppppplVar61);
                      }
                    }
LAB_10ac5d200:
                    pppppplVar43 = (long ******)0x30;
                    __Znwm();
                    ppppplVar31 = ppppplStack_350;
                    uStack_70 = 1;
                    *pppppplVar43 = (long *****)0x0;
                    pppppplVar43[1] = (long *****)ppppppplVar29;
                    pppppplVar43[3] = ppppplStack_358;
                    pppppplVar43[2] = (long *****)ppppppplStack_360;
                    ppppppplStack_360 = (long *******)0x0;
                    ppppplStack_358 = (long *****)0x0;
                    ppppplStack_350 = (long *****)0x0;
                    pppppplVar43[4] = ppppplVar31;
                    pppppplVar43[5] = (long *****)ppppppplVar29;
                    ppppppplStack_78 = ppppppplVar7;
                    if ((ppppppplVar53 == (long *******)0x0) ||
                       (*(float *)(ppppppplVar55 + 10) * (float)ppppppplVar53 <
                        (float)((long)ppppppplVar55[9] + 1))) {
                      uVar45 = 1;
                      if ((long *******)0x2 < ppppppplVar53) {
                        uVar45 = (ulong)(((ulong)ppppppplVar53 & (long)ppppppplVar53 - 1U) != 0);
                      }
                      uVar45 = uVar45 | (long)ppppppplVar53 << 1;
                      uVar59 = (ulong)((float)((long)ppppppplVar55[9] + 1) /
                                      *(float *)(ppppppplVar55 + 10));
                      if (uVar45 <= uVar59) {
                        uVar45 = uVar59;
                      }
                      FUN_10a2755b8(ppppppplVar7,uVar45);
                      ppppppplVar53 = (long *******)ppppppplVar55[7];
                      if (((ulong)ppppppplVar53 & (long)ppppppplVar53 - 1U) == 0) {
                        ppppppplVar61 =
                             (long *******)((long)ppppppplVar53 - 1U & (ulong)ppppppplVar29);
                      }
                      else {
                        ppppppplVar61 = ppppppplVar29;
                        if (ppppppplVar53 <= ppppppplVar29) {
                          uVar45 = 0;
                          if (ppppppplVar53 != (long *******)0x0) {
                            uVar45 = (ulong)ppppppplVar29 / (ulong)ppppppplVar53;
                          }
                          ppppppplVar61 =
                               (long *******)((long)ppppppplVar29 - uVar45 * (long)ppppppplVar53);
                        }
                      }
                    }
                    pppppplVar35 = *ppppppplVar7;
                    pppppplVar28 = (long ******)pppppplVar35[(long)ppppppplVar61];
                    if (pppppplVar28 == (long ******)0x0) {
                      ppppppplVar29 = ppppppplVar55 + 8;
                      *pppppplVar43 = (long *****)*ppppppplVar29;
                      *ppppppplVar29 = pppppplVar43;
                      pppppplVar35[(long)ppppppplVar61] = (long *****)ppppppplVar29;
                      if (*pppppplVar43 != (long *****)0x0) {
                        ppppppplVar61 = (long *******)(*pppppplVar43)[1];
                        if (((ulong)ppppppplVar53 & (long)ppppppplVar53 - 1U) == 0) {
                          ppppppplVar61 =
                               (long *******)((ulong)ppppppplVar61 & (long)ppppppplVar53 - 1U);
                        }
                        else if (ppppppplVar53 <= ppppppplVar61) {
                          uVar45 = 0;
                          if (ppppppplVar53 != (long *******)0x0) {
                            uVar45 = (ulong)ppppppplVar61 / (ulong)ppppppplVar53;
                          }
                          ppppppplVar61 =
                               (long *******)((long)ppppppplVar61 - uVar45 * (long)ppppppplVar53);
                        }
                        pppppplVar28 = *ppppppplVar7 + (long)ppppppplVar61;
                        goto LAB_10ac5d320;
                      }
                    }
                    else {
                      *pppppplVar43 = *pppppplVar28;
LAB_10ac5d320:
                      *pppppplVar28 = (long *****)pppppplVar43;
                    }
                    ppppppplVar55[9] = (long ******)((long)ppppppplVar55[9] + 1);
LAB_10ac5d330:
                    if ((long)ppppplStack_350 < 0) {
                      __ZdlPv(ppppppplStack_360);
                    }
                    if ((long)pppppplStack_2d0 < 0) {
                      __ZdlPv(pppppppuStack_2e0);
                    }
                    if ((long)uStack_118 < 0) {
                      __ZdlPv(pppppppuStack_128);
                    }
                  }
                }
LAB_10ac5d360:
                uVar45 = uVar4;
              } while (uVar4 < uVar3);
            }
          }
          goto LAB_10ac5d3a8;
        }
      }
LAB_10ac5d7dc:
      if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e5ce,0x107,&UNK_10f69e6c3);
      }
    }
  }
LAB_10ac5d3a8:
  lVar24 = 0;
  do {
    plVar48 = &lStack_90;
    FUN_10a166af4(plVar48,*(undefined8 *)((long)&PTR_DAT_110c603e8 + lVar24),0);
    if (plVar48 != (long *)0xffffffffffffffff) {
      uVar23 = 1;
      goto LAB_10ac5d3e4;
    }
    lVar24 = lVar24 + 8;
  } while (lVar24 != 0x10);
  uVar23 = 0;
LAB_10ac5d3e4:
  lVar24 = 0;
  do {
    if (0xd7 < *(uint *)(&UNK_10e509740 + lVar24)) goto LAB_10ac5dcb8;
    func_0x000107c2b074(&pppppppuStack_2e0,
                        &PTR_DAT_110c50c00 + (ulong)*(uint *)(&UNK_10e509740 + lVar24) * 5);
    pppppppuVar27 = pppppppuStack_2e0;
    if (-1 < (long)pppppplStack_2d0) {
      pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
    }
    plVar48 = &lStack_90;
    FUN_10a166af4(plVar48,pppppppuVar27,0);
    if ((long)pppppplStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if (plVar48 != (long *)0xffffffffffffffff) {
      uVar23 = uVar23 | 2;
      break;
    }
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0x18);
  lVar24 = 0;
  do {
    func_0x000107c2b054(&pppppppuStack_2e0,*(undefined8 *)((long)&PTR_DAT_110c603f8 + lVar24));
    pppppplVar43 = pppppplStack_2d8;
    pppppppuVar27 = pppppppuStack_2e0;
    if (-1 < (long)pppppplStack_2d0) {
      pppppplVar43 = (long ******)((ulong)pppppplStack_2d0 >> 0x38);
      pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
    }
    plVar48 = &lStack_90;
    FUN_10a0ee2b4(plVar48,pppppppuVar27,pppppplVar43,0);
    if ((long)pppppplStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if (plVar48 == (long *)0xffffffffffffffff) goto LAB_10ac5d4d8;
    lVar24 = lVar24 + 8;
  } while (lVar24 != 0x20);
  uVar23 = uVar23 | 4;
LAB_10ac5d4d8:
  pppplVar30 = (long ****)&pppplStack_c0;
  FUN_10a1e6458(pppplVar30,lStack_90,plStack_88);
  uVar54 = uVar23 | 0x20;
  if ((int)pppplVar30 == 0) {
    uVar54 = uVar23;
  }
  func_0x000107c2b07c(&pppppppuStack_2e0,&UNK_10f69e6f6);
  pppplVar30 = (long ****)&pppplStack_c0;
  func_0x00010ac7cf00(pppplVar30,pppppppuStack_2c8);
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  if (pppplVar30 != (long ****)0x0) {
    func_0x000107c2b07c(&pppppppuStack_2e0,&DAT_10f68e7b6);
    pppplVar20 = pppplVar30 + 6;
    func_0x00010a203cf4(pppplVar20,&pppppppuStack_2e0);
    if ((long)pppppplStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if (pppplVar20 == (long ****)0x0) {
      func_0x000107c2b07c(&pppppppuStack_2e0,&DAT_10f69e70a);
      pppplVar20 = pppplVar30 + 6;
      func_0x00010a203cf4(pppplVar20,&pppppppuStack_2e0);
      if ((long)pppppplStack_2d0 < 0) {
        __ZdlPv(pppppppuStack_2e0);
      }
      if (pppplVar20 == (long ****)0x0) {
        func_0x000107c2b07c(&pppppppuStack_2e0,&DAT_10f42ad2b);
        pppplVar30 = pppplVar30 + 6;
        func_0x00010a203cf4(pppplVar30,&pppppppuStack_2e0);
        if ((long)pppppplStack_2d0 < 0) {
          __ZdlPv(pppppppuStack_2e0);
        }
        uVar23 = 0;
        if (pppplVar30 != (long ****)0x0) {
          uVar23 = 0x40;
        }
      }
      else {
        uVar23 = 0x80;
      }
    }
    else {
      uVar23 = 0xc0;
    }
    uVar54 = uVar23 | uVar54;
  }
  lVar24 = lStack_90;
  func_0x000109237818(lStack_90,plStack_88);
  if (199 < (uint)lVar24) {
    func_0x000109237af0(&pppppppuStack_2e0,lStack_90,plStack_88);
    pppppplVar43 = pppppplStack_2d0;
    if (pppppplStack_2d8 != pppppplStack_2d0) {
      pppppplVar28 = pppppplStack_2d8;
      do {
        func_0x000107c2ac14(&ppppppplStack_360,pppppplVar28);
        if ((ppppplStack_358 != ppppplStack_350) ||
           (pppplVar30 = appplStack_340, FUN_10a15c150(), (int)pppplVar30 != 0)) {
          uVar54 = uVar54 | 8;
          ppppplStack_80 = (long *****)appplStack_2f8;
          func_0x000107c2b0d8(&ppppplStack_80);
          ppppplStack_80 = (long *****)appplStack_310;
          func_0x000107c2b0d0(&ppppplStack_80);
          ppppplStack_80 = (long *****)appplStack_328;
          func_0x000107c2b0cc(&ppppplStack_80);
          ppppplStack_80 = (long *****)appplStack_340;
          func_0x000107c2b0c8(&ppppplStack_80);
          ppppplStack_80 = (long *****)&ppppplStack_358;
          func_0x000107c2b0c0(&ppppplStack_80);
          break;
        }
        ppppplStack_80 = (long *****)appplStack_2f8;
        func_0x000107c2b0d8(&ppppplStack_80);
        ppppplStack_80 = (long *****)appplStack_310;
        func_0x000107c2b0d0(&ppppplStack_80);
        ppppplStack_80 = (long *****)appplStack_328;
        func_0x000107c2b0cc(&ppppplStack_80);
        ppppplStack_80 = (long *****)appplStack_340;
        func_0x000107c2b0c8(&ppppplStack_80);
        ppppplStack_80 = (long *****)&ppppplStack_358;
        func_0x000107c2b0c0(&ppppplStack_80);
        pppppplVar28 = pppppplVar28 + 0x10;
      } while (pppppplVar28 != pppppplVar43);
    }
    if ((uVar54 >> 2 & 1) != 0) {
      for (; psStack_2c0 != psStack_2b8; psStack_2c0 = psStack_2c0 + 0x10) {
        if (*(char *)((long)psStack_2c0 + 0x17) < '\0') {
          if (*(long *)(psStack_2c0 + 4) == 2) {
            psVar41 = *(short **)psStack_2c0;
            goto LAB_10ac5d7c0;
          }
        }
        else {
          psVar41 = psStack_2c0;
          if (*(char *)((long)psStack_2c0 + 0x17) == '\x02') {
LAB_10ac5d7c0:
            if (*psVar41 == 0x7675) {
              if (*(uint *)(psStack_2c0 + 0xe) < 0x28 &&
                  (1L << ((ulong)*(uint *)(psStack_2c0 + 0xe) & 0x3f) & 0xff0038e38eU) != 0) {
                uVar54 = uVar54 | 0x10;
              }
              break;
            }
          }
        }
      }
    }
    func_0x00010923ff08(&pppppppuStack_2e0);
  }
  uStack_3d0 = uVar54;
  FUN_10a274fd4(auStack_3c8,&pppplStack_c0);
  FUN_10a1f7334(&pppplStack_c0);
  *(uint *)(param_1 + 200) = uStack_3d0;
  FUN_10ac7cf9c(param_1 + 0xd0,auStack_3c8);
  FUN_10a1f7334(auStack_3c8);
  func_0x000107c2b07c(&pppppppuStack_2e0,&UNK_10f69e87d);
  lVar24 = param_1 + 0xd0;
  func_0x00010ac7cf00(lVar24,pppppppuStack_2c8);
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  if (lVar24 != 0) {
    for (plVar48 = *(long **)(lVar24 + 0x40); plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar15 = plVar48 + 2;
        if (*(char *)((long)plVar48 + 0x27) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        func_0x00010ae06f08(0,1,&UNK_10f69e591,&UNK_10f69e710,0x234,&UNK_10f69e895,in_x6,in_x7,
                            plVar15);
      }
    }
  }
  func_0x000107c2b07c(&pppppppuStack_2e0,&UNK_10f69e87d);
  lVar24 = param_1 + 0xd0;
  func_0x00010ac7cf00(lVar24,pppppppuStack_2c8);
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  if (lVar24 != 0) {
    for (plVar48 = *(long **)(lVar24 + 0x40); plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar15 = plVar48 + 2;
        if (*(char *)((long)plVar48 + 0x27) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        func_0x00010ae06f08(0,1,&UNK_10f69e591,&UNK_10f69e710,0x23b,&UNK_10f69e895,in_x6,in_x7,
                            plVar15);
      }
    }
  }
  uVar50 = *(undefined8 *)(lVar14 + 0x218);
  FUN_10a08d2e0(&pppppppuStack_2e0,plVar1);
  if (lStack_390 < 0) {
    func_0x000107c3192c(&uStack_450,uStack_3a0,uStack_398);
  }
  else {
    uStack_448 = uStack_398;
    uStack_450 = uStack_3a0;
    lStack_440 = lStack_390;
  }
  if (lStack_378 < 0) {
    func_0x000107c3192c(&uStack_438,uStack_388,uStack_380);
  }
  else {
    uStack_430 = uStack_380;
    uStack_438 = uStack_388;
    lStack_428 = lStack_378;
  }
  uStack_418 = *(undefined4 *)(param_1 + 200);
  uStack_420 = uStack_370;
  FUN_10a274fd4(auStack_410,param_1 + 0xd0);
  uStack_3e8 = 0;
  plStack_3e0 = (long *)0x0;
  FUN_10a241b68(uVar50,&pppppppuStack_2e0,&uStack_450);
  plVar48 = plStack_3e0;
  if (plStack_3e0 != (long *)0x0) {
    plVar1 = plStack_3e0 + 1;
    do {
      lVar14 = *plVar1;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar14 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_3e0 + 0x10))(plStack_3e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar48);
    }
  }
  FUN_10a1f7334(auStack_410);
  if (lStack_428 < 0) {
    __ZdlPv(uStack_438);
  }
  if (lStack_440 < 0) {
    __ZdlPv(uStack_450);
  }
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  FUN_10a1e67f8(param_1,param_2);
LAB_10ac5db30:
  if (lStack_378 < 0) {
    __ZdlPv(uStack_388);
  }
  if (lStack_390 < 0) {
    __ZdlPv(uStack_3a0);
  }
  return;
}



/* Entry: 10ac5df10; end: 10ac5eda7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5e684) */
/* WARNING: Removing unreachable block (ram,0x00010ac5e66c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac5e93c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5e94c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5e9e0) */
/* WARNING: Removing unreachable block (ram,0x00010ac5eb50) */
/* WARNING: Removing unreachable block (ram,0x00010ac5e95c) */

undefined8 FUN_10ac5df10(long *param_1,long *param_2)

{
  undefined *puVar1;
  long ****pppplVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  long ***ppplVar9;
  undefined8 **ppuVar10;
  byte bVar11;
  code *pcVar12;
  long *plVar13;
  long *****ppppplVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 *****pppppuVar20;
  char **ppcVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  bool bVar29;
  long lVar30;
  undefined8 ****ppppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined8 ****ppppuStack_188;
  long ***ppplStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ****ppppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  long ****pppplStack_130;
  long ***ppplStack_128;
  undefined8 uStack_120;
  undefined8 **ppuStack_118;
  char *pcStack_110;
  long *plStack_108;
  bool *pbStack_100;
  char cStack_f2;
  bool bStack_f1;
  undefined8 ****ppppuStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d4 [4];
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  byte bStack_a0;
  undefined1 auStack_9b [3];
  undefined8 ****appppuStack_98 [2];
  undefined1 auStack_88 [5];
  undefined1 auStack_83 [3];
  long ****apppplStack_80 [2];
  undefined8 uStack_70;
  
  (**(code **)(*param_1 + 0x68))();
  plVar24 = param_1 + 9;
  cVar7 = *(char *)((long)param_1 + 0x5f);
  if ((long)cVar7 < 0) {
    if (param_1[10] == 4) {
      plVar25 = (long *)*plVar24;
      goto LAB_10ac5df78;
    }
LAB_10ac5df8c:
    pppplVar2 = (long ****)param_2[1];
    plVar25 = (long *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      pppplVar2 = (long ****)(ulong)*(byte *)((long)param_2 + 0x17);
      plVar25 = param_2;
    }
    plVar5 = (long *)param_1[9];
    lVar30 = param_1[10];
    plVar13 = plVar25;
    FUN_10a186dec(plVar25,pppplVar2,&UNK_10f646d24,4);
    if ((int)plVar13 != 0) {
      if (-1 < cVar7) {
        plVar5 = plVar24;
        lVar30 = (long)cVar7;
      }
      lVar28 = (long)pppplVar2 - 4;
      FUN_10a00280c(&pppplStack_d0,lVar30 + lVar28,0);
      _memcpy(&pppplStack_d0,plVar25,lVar28);
      _memcpy((long)&pppplStack_d0 + lVar28,plVar5,lVar30);
LAB_10ac5e078:
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2[1] = (long)ppplStack_c8;
      *param_2 = (long)pppplStack_d0;
      param_2[2] = (long)uStack_c0;
      goto LAB_10ac5e098;
    }
    if (pppplVar2 < (long ****)0x7ffffffffffffff8) {
      if (pppplVar2 < (long ****)0x17) {
        uStack_c0 = (long ****)CONCAT17((char)pppplVar2,(undefined7)uStack_c0);
        ppppplVar14 = &pppplStack_d0;
        if (pppplVar2 != (long ****)0x0) goto LAB_10ac5e064;
      }
      else {
        ppppplVar23 = (long *****)0x19;
        if (((ulong)pppplVar2 | 7) != 0x17) {
          ppppplVar23 = (long *****)(((ulong)pppplVar2 | 7) + 1);
        }
        ppppplVar14 = ppppplVar23;
        __Znwm();
        uStack_c0 = (long ****)((ulong)ppppplVar23 | 0x8000000000000000);
        pppplStack_d0 = (long ****)ppppplVar14;
        ppplStack_c8 = (long ***)pppplVar2;
LAB_10ac5e064:
        _memmove(ppppplVar14,plVar25,pppplVar2);
      }
      *(undefined1 *)((long)ppppplVar14 + (long)pppplVar2) = 0;
      goto LAB_10ac5e078;
    }
    func_0x000109ffde50();
LAB_10ac5ec34:
    func_0x000109ffde50();
    goto LAB_10ac5ec38;
  }
  plVar25 = plVar24;
  if (cVar7 != '\x04') goto LAB_10ac5df8c;
LAB_10ac5df78:
  if (*(int *)plVar25 != 0x6c736c67) goto LAB_10ac5df8c;
LAB_10ac5e098:
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppuStack_f0,*param_2,param_2[1]);
  }
  else {
    uStack_e8 = param_2[1];
    ppppuStack_f0 = (undefined8 ****)*param_2;
    uStack_e0 = param_2[2];
  }
  cVar7 = *(char *)((long)param_1 + 0x5f);
  if (cVar7 < '\0') {
    lVar30 = param_1[10];
    if (lVar30 == 5) {
      plVar25 = (long *)*plVar24;
      goto LAB_10ac5e0f0;
    }
    bStack_f1 = false;
LAB_10ac5e130:
    if (lVar30 == 3) {
      plVar24 = (long *)*plVar24;
      goto LAB_10ac5e13c;
    }
LAB_10ac5e15c:
    cStack_f2 = false;
  }
  else {
    plVar25 = plVar24;
    if (cVar7 == '\x05') {
LAB_10ac5e0f0:
      bStack_f1 = (int)*plVar25 == 0x6174656d && *(char *)((long)plVar25 + 4) == 'l';
      if (cVar7 < '\0') {
        lVar30 = param_1[10];
        goto LAB_10ac5e130;
      }
    }
    else {
      bStack_f1 = false;
    }
    if (cVar7 != '\x03') goto LAB_10ac5e15c;
LAB_10ac5e13c:
    cStack_f2 = (short)*plVar24 == 0x7073 && *(char *)((long)plVar24 + 2) == 'v';
  }
  pcStack_110 = &cStack_f2;
  pbStack_100 = &bStack_f1;
  plStack_108 = param_2;
  if ((int)param_2[6] != 1) {
    uVar3 = uStack_e8;
    pppppuVar18 = (undefined8 *****)ppppuStack_f0;
    if (-1 < (long)uStack_e0) {
      uVar3 = uStack_e0 >> 0x38;
      pppppuVar18 = &ppppuStack_f0;
    }
    FUN_10ad03cf0(&pppplStack_130,pppppuVar18,uVar3);
    puVar26 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    if (puVar26 != puVar6) {
      do {
        ppplVar9 = ppplStack_128;
        pppplVar2 = pppplStack_130;
        if ((long ****)0x7ffffffffffffff7 < ppplStack_128) {
          func_0x000109ffde50();
          goto LAB_10ac5ec38;
        }
        if (ppplStack_128 < (long ****)0x17) {
          uStack_178 = CONCAT17((char)ppplStack_128,(undefined7)uStack_178);
          pppppuVar17 = &ppppuStack_188;
          if ((long ****)ppplStack_128 != (long ****)0x0) goto LAB_10ac5e34c;
        }
        else {
          pppppuVar18 = (undefined8 *****)0x19;
          if (((ulong)ppplStack_128 | 7) != 0x17) {
            pppppuVar18 = (undefined8 *****)(((ulong)ppplStack_128 | 7) + 1);
          }
          pppppuVar17 = pppppuVar18;
          __Znwm();
          uStack_178 = (ulong)pppppuVar18 | 0x8000000000000000;
          ppplStack_180 = ppplVar9;
          ppppuStack_188 = pppppuVar17;
LAB_10ac5e34c:
          _memmove(pppppuVar17,pppplVar2,ppplVar9);
        }
        *(undefined1 *)((long)pppppuVar17 + (long)ppplVar9) = 0;
        uVar3 = puVar26[1];
        puVar8 = (undefined8 *)*puVar26;
        if (-1 < (char)*(byte *)((long)puVar26 + 0x17)) {
          uVar3 = (ulong)*(byte *)((long)puVar26 + 0x17);
          puVar8 = puVar26;
        }
        pppppuVar18 = &ppppuStack_188;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppuVar18,puVar8,uVar3);
        pppuStack_168 = pppppuVar18[1];
        pppuStack_170 = *pppppuVar18;
        pppuStack_160 = pppppuVar18[2];
        pppppuVar18[1] = (undefined8 ****)0x0;
        pppppuVar18[2] = (undefined8 ****)0x0;
        *pppppuVar18 = (undefined8 ****)0x0;
        ppuVar10 = ppuStack_118;
        uVar3 = uStack_120;
        if ((undefined8 ***)0x7ffffffffffffff7 < ppuStack_118) {
          func_0x000109ffde50();
          goto LAB_10ac5ec38;
        }
        if (ppuStack_118 < (undefined8 ***)0x17) {
          uStack_190 = CONCAT17((char)ppuStack_118,(undefined7)uStack_190);
          pppppuVar17 = &ppppuStack_1a0;
          if ((undefined8 ***)ppuStack_118 != (undefined8 ***)0x0) goto LAB_10ac5e3e8;
        }
        else {
          pppppuVar18 = (undefined8 *****)0x19;
          if (((ulong)ppuStack_118 | 7) != 0x17) {
            pppppuVar18 = (undefined8 *****)(((ulong)ppuStack_118 | 7) + 1);
          }
          pppppuVar17 = pppppuVar18;
          __Znwm();
          uStack_190 = (ulong)pppppuVar18 | 0x8000000000000000;
          ppuStack_198 = ppuVar10;
          ppppuStack_1a0 = pppppuVar17;
LAB_10ac5e3e8:
          _memmove(pppppuVar17,uVar3,ppuVar10);
        }
        *(undefined1 *)((long)pppppuVar17 + (long)ppuVar10) = 0;
        pppuVar4 = (undefined8 ***)ppuStack_198;
        pppppuVar18 = (undefined8 *****)ppppuStack_1a0;
        if (-1 < (long)uStack_190) {
          pppuVar4 = (undefined8 ***)(uStack_190 >> 0x38);
          pppppuVar18 = &ppppuStack_1a0;
        }
        ppppuVar19 = &pppuStack_170;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar19,pppppuVar18,pppuVar4);
        ppuStack_148 = ppppuVar19[1];
        ppppuStack_150 = (undefined8 ****)*ppppuVar19;
        ppuStack_140 = ppppuVar19[2];
        ppppuVar19[1] = (undefined8 ***)0x0;
        ppppuVar19[2] = (undefined8 ***)0x0;
        *ppppuVar19 = (undefined8 ***)0x0;
        if (cStack_f2 == '\x01') {
          pppuVar4 = (undefined8 ***)ppuStack_148;
          pppppuVar18 = (undefined8 *****)ppppuStack_150;
          if (-1 < (long)ppuStack_140) {
            pppuVar4 = (undefined8 ***)((ulong)ppuStack_140 >> 0x38);
            pppppuVar18 = &ppppuStack_150;
          }
          pppppuVar17 = pppppuVar18;
          FUN_10a186dec(pppppuVar18,pppuVar4,&DAT_10f5b012e,3);
          if ((int)pppppuVar17 == 0) {
            if (pppuVar4 < (undefined8 ***)0x7ffffffffffffff8) {
              if (pppuVar4 < (undefined8 ***)0x17) {
                uStack_70 = CONCAT17((char)pppuVar4,(undefined7)uStack_70);
                ppppplVar14 = apppplStack_80;
                if (pppuVar4 != (undefined8 ***)0x0) goto LAB_10ac5e510;
              }
              else {
                ppppplVar23 = (long *****)0x19;
                if (((ulong)pppuVar4 | 7) != 0x17) {
                  ppppplVar23 = (long *****)(((ulong)pppuVar4 | 7) + 1);
                }
                ppppplVar14 = ppppplVar23;
                __Znwm();
                uStack_70 = (ulong)ppppplVar23 | 0x8000000000000000;
                apppplStack_80[0] = (long ****)ppppplVar14;
                apppplStack_80[1] = (long ****)pppuVar4;
LAB_10ac5e510:
                _memmove(ppppplVar14,pppppuVar18,pppuVar4);
              }
              *(undefined1 *)((long)ppppplVar14 + (long)pppuVar4) = 0;
              goto LAB_10ac5e524;
            }
LAB_10ac5ec0c:
            func_0x000109ffde50();
            goto LAB_10ac5ec38;
          }
          FUN_10a00280c(apppplStack_80,(long)pppuVar4 + 5,0);
          _memcpy(apppplStack_80,pppppuVar18,(long)pppuVar4 - 3U);
          *(undefined8 *)((long)apppplStack_80 + ((long)pppuVar4 - 3U)) = 0x7670732e74726576;
LAB_10ac5e524:
          pppuVar4 = (undefined8 ***)ppuStack_148;
          pppppuVar18 = (undefined8 *****)ppppuStack_150;
          if (-1 < (long)ppuStack_140) {
            pppuVar4 = (undefined8 ***)((ulong)ppuStack_140 >> 0x38);
            pppppuVar18 = &ppppuStack_150;
          }
          pppppuVar17 = pppppuVar18;
          FUN_10a186dec(pppppuVar18,pppuVar4,&DAT_10f5b012e,3);
          if ((int)pppppuVar17 == 0) {
            if ((undefined8 ***)0x7ffffffffffffff7 < pppuVar4) {
              func_0x000109ffde50();
              goto LAB_10ac5ec38;
            }
            if (pppuVar4 < (undefined8 ***)0x17) {
              _auStack_88 = CONCAT17((char)pppuVar4,_auStack_88);
              pppppuVar20 = appppuStack_98;
              if (pppuVar4 != (undefined8 ***)0x0) goto LAB_10ac5e5f0;
            }
            else {
              pppppuVar17 = (undefined8 *****)0x19;
              if (((ulong)pppuVar4 | 7) != 0x17) {
                pppppuVar17 = (undefined8 *****)(((ulong)pppuVar4 | 7) + 1);
              }
              pppppuVar20 = pppppuVar17;
              __Znwm();
              _auStack_88 = (ulong)pppppuVar17 | 0x8000000000000000;
              appppuStack_98[0] = pppppuVar20;
              appppuStack_98[1] = (undefined8 ****)pppuVar4;
LAB_10ac5e5f0:
              _memmove(pppppuVar20,pppppuVar18,pppuVar4);
            }
            *(undefined1 *)((long)pppppuVar20 + (long)pppuVar4) = 0;
          }
          else {
            FUN_10a00280c(appppuStack_98,(long)pppuVar4 + 5,0);
            _memcpy(appppuStack_98,pppppuVar18,(long)pppuVar4 - 3U);
            *(undefined8 *)((long)appppuStack_98 + ((long)pppuVar4 - 3U)) = 0x7670732e67617266;
          }
          FUN_10ac78974(&pppplStack_d0,param_2,apppplStack_80);
          bVar11 = bStack_a0;
          if (bStack_a0 == 1) {
            FUN_10a0f1ea0(&pppplStack_d0);
          }
          FUN_10ac78974(&pppplStack_d0,param_2,appppuStack_98);
          if (((bStack_a0 & 1) == 0) || (FUN_10a0f1ea0(&pppplStack_d0), bVar11 == 0)) {
            bVar29 = true;
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_2,&ppppuStack_150);
            bVar29 = false;
          }
          if (bVar29) goto LAB_10ac5e690;
LAB_10ac5e7f0:
          bVar29 = true;
        }
        else {
LAB_10ac5e690:
          if (bStack_f1 == true) {
            pppuVar4 = (undefined8 ***)ppuStack_148;
            pppppuVar18 = (undefined8 *****)ppppuStack_150;
            if (-1 < (long)ppuStack_140) {
              pppuVar4 = (undefined8 ***)((ulong)ppuStack_140 >> 0x38);
              pppppuVar18 = &ppppuStack_150;
            }
            pppppuVar17 = pppppuVar18;
            FUN_10a186dec(pppppuVar18,pppuVar4,&DAT_10f2c5356,5);
            if ((int)pppppuVar17 == 0) {
              if ((undefined8 ***)0x7ffffffffffffff7 < pppuVar4) goto LAB_10ac5ec0c;
              if (pppuVar4 < (undefined8 ***)0x17) {
                uStack_70 = CONCAT17((char)pppuVar4,(undefined7)uStack_70);
                ppppplVar14 = apppplStack_80;
                if (pppuVar4 != (undefined8 ***)0x0) goto LAB_10ac5e768;
              }
              else {
                ppppplVar23 = (long *****)0x19;
                if (((ulong)pppuVar4 | 7) != 0x17) {
                  ppppplVar23 = (long *****)(((ulong)pppuVar4 | 7) + 1);
                }
                ppppplVar14 = ppppplVar23;
                __Znwm();
                uStack_70 = (ulong)ppppplVar23 | 0x8000000000000000;
                apppplStack_80[0] = (long ****)ppppplVar14;
                apppplStack_80[1] = (long ****)pppuVar4;
LAB_10ac5e768:
                _memmove(ppppplVar14,pppppuVar18,pppuVar4);
              }
              *(undefined1 *)((long)ppppplVar14 + (long)pppuVar4) = 0;
            }
            else {
              FUN_10a00280c(apppplStack_80,(long)pppuVar4 + 3,0);
              _memcpy(apppplStack_80,pppppuVar18,(long)pppuVar4 - 5U);
              *(undefined8 *)((long)apppplStack_80 + ((long)pppuVar4 - 5U)) = 0x62696c6c6174656d;
            }
            FUN_10ac78974(&pppplStack_d0,param_2,apppplStack_80);
            bVar11 = bStack_a0;
            if ((bStack_a0 & 1) != 0) {
              FUN_10a0f1ea0(&pppplStack_d0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (param_2,apppplStack_80);
            }
            if ((bVar11 & 1) != 0) goto LAB_10ac5e7f0;
          }
          FUN_10ac78974(&pppplStack_d0,param_2,&ppppuStack_150);
          if ((bStack_a0 & 1) != 0) {
            FUN_10a0f1ea0(&pppplStack_d0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_2,&ppppuStack_150);
            goto LAB_10ac5e7f0;
          }
          bVar29 = false;
        }
        if ((long)ppuStack_140 < 0) {
          __ZdlPv(ppppuStack_150);
        }
        if ((long)uStack_190 < 0) {
          __ZdlPv(ppppuStack_1a0);
        }
        if ((long)pppuStack_160 < 0) {
          __ZdlPv(pppuStack_170);
        }
        if ((long)uStack_178 < 0) {
          __ZdlPv(ppppuStack_188);
        }
        if (bVar29) goto LAB_10ac5ebb8;
        puVar26 = puVar26 + 3;
      } while (puVar26 != puVar6);
    }
    plVar24 = param_1 + 3;
    func_0x000107c2aca8(plVar24,&ppppuStack_f0);
    if (param_1 + 4 != plVar24) {
      lVar30 = *param_1;
      lVar28 = param_1[1];
      if (lVar30 != lVar28) {
        do {
          FUN_10a0b4df8(apppplStack_80,plVar24 + 7,lVar30);
          ppuVar10 = ppuStack_118;
          uVar3 = uStack_120;
          if ((undefined8 ***)0x7ffffffffffffff7 < ppuStack_118) {
            func_0x000109ffde50();
            goto LAB_10ac5ec38;
          }
          if (ppuStack_118 < (undefined8 ***)0x17) {
            _auStack_88 = CONCAT17((char)ppuStack_118,_auStack_88);
            pppppuVar17 = appppuStack_98;
            if ((undefined8 ***)ppuStack_118 != (undefined8 ***)0x0) goto LAB_10ac5e8d8;
          }
          else {
            pppppuVar18 = (undefined8 *****)0x19;
            if (((ulong)ppuStack_118 | 7) != 0x17) {
              pppppuVar18 = (undefined8 *****)(((ulong)ppuStack_118 | 7) + 1);
            }
            pppppuVar17 = pppppuVar18;
            __Znwm();
            _auStack_88 = (ulong)pppppuVar18 | 0x8000000000000000;
            appppuStack_98[1] = (undefined8 ****)ppuVar10;
            appppuStack_98[0] = pppppuVar17;
LAB_10ac5e8d8:
            _memmove(pppppuVar17,uVar3,ppuVar10);
          }
          *(undefined1 *)((long)pppppuVar17 + (long)ppuVar10) = 0;
          ppppuVar19 = appppuStack_98[1];
          pppppuVar18 = (undefined8 *****)appppuStack_98[0];
          if (-1 < (long)_auStack_88) {
            ppppuVar19 = (undefined8 ****)(_auStack_88 >> 0x38);
            pppppuVar18 = appppuStack_98;
          }
          ppppplVar23 = apppplStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppplVar23,pppppuVar18,ppppuVar19);
          ppplStack_c8 = (long ***)ppppplVar23[1];
          pppplStack_d0 = *ppppplVar23;
          uStack_c0 = ppppplVar23[2];
          ppppplVar23[1] = (long ****)0x0;
          ppppplVar23[2] = (long ****)0x0;
          *ppppplVar23 = (long ****)0x0;
          ppcVar21 = &pcStack_110;
          FUN_10ac783a0(ppcVar21,&pppplStack_d0);
          if ((int)ppcVar21 != 0) {
            *(undefined4 *)(param_2 + 6) = 1;
            func_0x00010ad03330();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_2 + 3,ppcVar21);
            goto LAB_10ac5ebb8;
          }
          lVar30 = lVar30 + 0x18;
        } while (lVar30 != lVar28);
      }
    }
    uVar27 = 0;
    goto LAB_10ac5ebbc;
  }
  ppuVar15 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  pppplStack_d0 = (long ****)&UNK_10f63b699;
  ppplStack_c8 = (long ***)0x28;
  if (*ppuVar15 == (undefined *)0x0) {
    FUN_10a0edfc4(&pppplStack_d0);
    goto LAB_10ac5ec38;
  }
  ppppplVar23 = (long *****)(*ppuVar15 + 0x10);
  if ((*ppppplVar23 != (long ****)0x0) &&
     (apppplStack_80[0] = (long ****)ppppplVar23, lRam00000001137ec750 != -1)) {
    pppplStack_d0 = (long ****)apppplStack_80;
    pppplStack_130 = (long ****)&pppplStack_d0;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec750,&pppplStack_130,FUN_10ac7880c);
  }
  puVar16 = &UNK_10f69f6a3;
  if (iRam00000001137ec73c != 2) {
    puVar16 = (undefined *)0x0;
  }
  puVar1 = &UNK_10f69f697;
  if (iRam00000001137ec73c != 1) {
    puVar1 = puVar16;
  }
  if (puVar1 != (undefined *)0x0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pppplStack_d0,&UNK_10f696c3e,&ppppuStack_f0);
    pppplVar2 = (long ****)ppplStack_c8;
    ppppplVar23 = (long *****)pppplStack_d0;
    if (-1 < (long)uStack_c0) {
      pppplVar2 = (long ****)((ulong)uStack_c0 >> 0x38);
      ppppplVar23 = &pppplStack_d0;
    }
    puVar16 = puVar1;
    _strlen(puVar1);
    ppppplVar14 = ppppplVar23;
    FUN_10a186dec(ppppplVar23,pppplVar2,&UNK_10f63f033,5);
    if ((int)ppppplVar14 == 0) {
      if ((long ****)0x7ffffffffffffff7 < pppplVar2) goto LAB_10ac5ec34;
      if (pppplVar2 < (long ****)0x17) {
        uStack_120 = CONCAT17((char)pppplVar2,(undefined7)uStack_120);
        ppppplVar22 = &pppplStack_130;
        if (pppplVar2 != (long ****)0x0) goto LAB_10ac5e9c4;
      }
      else {
        ppppplVar14 = (long *****)0x19;
        if (((ulong)pppplVar2 | 7) != 0x17) {
          ppppplVar14 = (long *****)(((ulong)pppplVar2 | 7) + 1);
        }
        ppppplVar22 = ppppplVar14;
        __Znwm();
        uStack_120 = (ulong)ppppplVar14 | 0x8000000000000000;
        pppplStack_130 = (long ****)ppppplVar22;
        ppplStack_128 = (long ***)pppplVar2;
LAB_10ac5e9c4:
        _memmove(ppppplVar22,ppppplVar23,pppplVar2);
      }
      *(undefined1 *)((long)ppppplVar22 + (long)pppplVar2) = 0;
    }
    else {
      lVar30 = (long)pppplVar2 - 5;
      FUN_10a00280c(&pppplStack_130,puVar16 + lVar30,0);
      ppppplVar14 = (long *****)pppplStack_130;
      if (-1 < (long)uStack_120) {
        ppppplVar14 = &pppplStack_130;
      }
      _memcpy(ppppplVar14,ppppplVar23,lVar30);
      _memcpy((long)ppppplVar14 + lVar30,puVar1,puVar16);
    }
    FUN_10a0f1b8c(&pppplStack_d0,&pppplStack_130,1);
    if (bStack_a0 == 1) {
      FUN_10a0f1ea0(&pppplStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_2,&pppplStack_130);
      if ((long)uStack_120 < 0) {
        __ZdlPv(pppplStack_130);
      }
LAB_10ac5ebb8:
      uVar27 = 1;
LAB_10ac5ebbc:
      if ((long)uStack_e0 < 0) {
        __ZdlPv(ppppuStack_f0);
      }
      return uVar27;
    }
    if ((long)uStack_120 < 0) {
      __ZdlPv(pppplStack_130);
    }
  }
  puVar26 = (undefined8 *)param_1[6];
  puVar6 = (undefined8 *)param_1[7];
  if (puVar26 != puVar6) {
    do {
      pppplStack_d0 = (long ****)&UNK_10f63b699;
      ppplStack_c8 = (long ***)0x28;
      if (*ppuVar15 == (undefined *)0x0) {
        FUN_10a0edfc4(&pppplStack_d0);
        goto LAB_10ac5ec38;
      }
      ppppplVar23 = (long *****)(*ppuVar15 + 0x10);
      if ((*ppppplVar23 != (long ****)0x0) &&
         (apppplStack_80[0] = (long ****)ppppplVar23, lRam00000001137ec758 != -1)) {
        pppplStack_130 = (long ****)&pppplStack_d0;
        pppplStack_d0 = (long ****)apppplStack_80;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec758,&pppplStack_130,FUN_10ac788c0);
      }
      if (((((bRam00000001137ec738 & 1) != 0) || (-1 < *(char *)((long)puVar26 + 0x17))) ||
          (puVar26[1] != 0x1c)) ||
         (plVar24 = (long *)*puVar26,
         ((*plVar24 != 0x6972616e6563732f || plVar24[1] != 0x6c69626f6d2f6d75) ||
         plVar24[2] != 0x73656c736c672f65) || (int)plVar24[3] != 0x2f303033)) {
        FUN_10a0b4df8(&pppplStack_d0,puVar26,&ppppuStack_f0);
        ppcVar21 = &pcStack_110;
        FUN_10ac783a0(ppcVar21,&pppplStack_d0);
        if (((ulong)ppcVar21 & 1) != 0) goto LAB_10ac5ebb8;
      }
      puVar26 = puVar26 + 3;
    } while (puVar26 != puVar6);
  }
  FUN_10a0ee900(&pppplStack_d0,&UNK_10f69f6b2,0x1c);
  FUN_10a0029c0(&pppplStack_d0);
LAB_10ac5ec38:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10ac5ec3c);
  (*pcVar12)();
}



/* Entry: 10ac5eda8; end: 10ac5edaf;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5d89c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5d8ac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac5eda8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *****ppppplVar5;
  long *plVar6;
  long *******ppppppplVar7;
  byte bVar8;
  char cVar9;
  long *****ppppplVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  long lVar18;
  char **ppcVar19;
  long ****pppplVar20;
  ulong *****pppppuVar21;
  undefined8 in_x6;
  undefined8 in_x7;
  char cVar22;
  uint uVar23;
  long lVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  ulong *******pppppppuVar27;
  long ******pppppplVar28;
  long *******ppppppplVar29;
  long ****pppplVar30;
  long *****ppppplVar31;
  long lVar32;
  char *pcVar33;
  ulong *******pppppppuVar34;
  long ******pppppplVar35;
  long lVar36;
  char *pcVar37;
  char *pcVar38;
  long *******ppppppplVar39;
  char *pcVar40;
  short *psVar41;
  byte *pbVar42;
  long ******pppppplVar43;
  ulong ******ppppppuVar44;
  ulong uVar45;
  char **ppcVar46;
  long *****ppppplVar47;
  long *plVar48;
  char **ppcVar49;
  undefined8 uVar50;
  ulong uVar51;
  ulong *******pppppppuVar52;
  long *******ppppppplVar53;
  uint uVar54;
  long *******ppppppplVar55;
  ulong uVar56;
  char **ppcVar57;
  long *****ppppplVar58;
  ulong uVar59;
  ulong uVar60;
  long *******ppppppplVar61;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined4 uStack_420;
  undefined4 uStack_418;
  undefined1 auStack_410 [40];
  undefined8 uStack_3e8;
  long *plStack_3e0;
  uint uStack_3d0;
  undefined1 auStack_3c8 [40];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined4 uStack_370;
  long *******ppppppplStack_360;
  long *****ppppplStack_358;
  long *****ppppplStack_350;
  long *******ppppppplStack_348;
  long ***appplStack_340 [3];
  long ***appplStack_328 [3];
  long ***appplStack_310 [3];
  long ***appplStack_2f8 [3];
  ulong *******pppppppuStack_2e0;
  long ******pppppplStack_2d8;
  long ******pppppplStack_2d0;
  ulong *******pppppppuStack_2c8;
  short *psStack_2c0;
  short *psStack_2b8;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [56];
  byte bStack_268;
  long *******ppppppplStack_140;
  long *****ppppplStack_138;
  undefined8 uStack_130;
  ulong *******pppppppuStack_128;
  long ******pppppplStack_120;
  undefined8 uStack_118;
  long ****pppplStack_110;
  long *****ppppplStack_108;
  char *pcStack_100;
  char **ppcStack_f8;
  undefined8 *******pppppppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long ****pppplStack_c0;
  ulong *******pppppppuStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  float fStack_a0;
  long lStack_90;
  long *plStack_88;
  long *****ppppplStack_80;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  
  plVar48 = (long *)(param_1 + 0xa8);
  if (*plVar48 != 0) {
    return;
  }
  if ((((int)param_2 != 2) && (*(long *)(param_1 + 0x80) != 0)) &&
     (*(int *)(*(long *)(*(long *)(param_1 + 0x80) + 0xa20) + 0x18) < 0x5c)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0xe8);
  if (*(char *)(param_1 + 0xff) < '\0') {
    func_0x000107c3192c(&uStack_3a0,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0))
    ;
  }
  else {
    uStack_398 = *(undefined8 *)(param_1 + 0xf0);
    uStack_3a0 = *plVar1;
    lStack_390 = *(long *)(param_1 + 0xf8);
  }
  if (*(char *)(param_1 + 0x117) < '\0') {
    func_0x000107c3192c(&uStack_388,*(undefined8 *)(param_1 + 0x100),
                        *(undefined8 *)(param_1 + 0x108));
  }
  else {
    uStack_380 = *(undefined8 *)(param_1 + 0x108);
    uStack_388 = *(undefined8 *)(param_1 + 0x100);
    lStack_378 = *(long *)(param_1 + 0x110);
  }
  uStack_370 = *(undefined4 *)(param_1 + 0x118);
  lVar14 = *(long *)(param_1 + 0x80);
  FUN_10a2421c8();
  uVar50 = *(undefined8 *)(lVar14 + 0x218);
  FUN_10a08d2e0(&ppppppplStack_360,plVar1);
  FUN_10a241a50(&pppppppuStack_2e0,uVar50,&ppppppplStack_360);
  if ((long)ppppplStack_350 < 0) {
    __ZdlPv(ppppppplStack_360);
  }
  if (bStack_268 == 1) {
    FUN_10a240380(&ppppppplStack_360,uVar50,&pppppppuStack_2e0);
    FUN_10a2741f8(plVar48,&ppppppplStack_360);
    ppppplVar31 = ppppplStack_358;
    if (ppppplStack_358 != (long *****)0x0) {
      ppppplVar58 = ppppplStack_358 + 1;
      do {
        pppplVar30 = *ppppplVar58;
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppplVar58,0x10);
        if (bVar12) {
          *ppppplVar58 = (long ****)((long)pppplVar30 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppplVar30 == (long ****)0x0) {
        (*(code *)(*ppppplStack_358)[2])(ppppplStack_358);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar31);
      }
    }
    if ((bStack_268 & 1) == 0) goto LAB_10ac5dcb8;
    *(undefined4 *)(param_1 + 0xb8) = uStack_2a8;
    FUN_10ac7cf9c(param_1 + 0xc0,auStack_2a0);
    FUN_10a1e67f8(param_1 + -0x10,param_2);
    FUN_10ac78344(&pppppppuStack_2e0);
    goto LAB_10ac5db30;
  }
  pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
  FUN_10ac78344();
  FUN_10a08fd8c();
  plVar15 = *(long **)(lVar14 + 0x228);
  if (((ulong)pppppppuVar27 & 0xa0) == 0) {
    FUN_10ac5df10(plVar15,&uStack_3a0);
  }
  else {
    (**(code **)(*plVar15 + 0x68))();
    pppppppuVar16 = (ulong *******)(plVar15 + 9);
    uVar3 = plVar15[10];
    pppppppuVar27 = (ulong *******)*pppppppuVar16;
    if (-1 < (char)*(byte *)((long)plVar15 + 0x5f)) {
      uVar3 = (ulong)*(byte *)((long)plVar15 + 0x5f);
      pppppppuVar27 = pppppppuVar16;
    }
    if (((uVar3 == 3) &&
        (*(short *)pppppppuVar27 == 0x7073 && *(char *)((long)pppppppuVar27 + 2) == 'v')) &&
       (FUN_10a08fd8c(), ((uint)pppppppuVar16 >> 8 & 1) != 0)) {
      if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
        plVar15 = plVar1;
        if (*(char *)(param_1 + 0xff) < '\0') {
          plVar15 = (long *)*plVar1;
        }
        pppppppuVar16 = (ulong *******)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x1e1,&UNK_10f69e760,in_x6,in_x7,
                            plVar15);
      }
LAB_10ac5c784:
      cVar9 = *(char *)((long)pppppppuVar27 + 2);
      bVar12 = *(short *)pppppppuVar27 == 0x7073;
      cVar22 = 'v';
LAB_10ac5c798:
      if (bVar12 && cVar9 == cVar22) {
        FUN_10a3ca004();
        ppppppuVar44 = pppppppuVar16[0xb];
        if (ppppppuVar44 == (ulong ******)0x0) {
          FUN_10a3ca05c(pppppppuVar16,4);
          ppppppuVar44 = pppppppuVar16[0xb];
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_3a0,plVar1)
        ;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_388,param_1 + 0x100);
        uStack_370 = *(undefined4 *)(param_1 + 0x118);
        pppppuVar21 = ppppppuVar44[0x45];
        FUN_10ac5df10(pppppuVar21,&uStack_3a0);
        if (((ulong)pppppuVar21 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_3a0,plVar1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_388,param_1 + 0x100);
          uStack_370 = *(undefined4 *)(param_1 + 0x118);
          FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
          iVar13 = (int)&pppppppuStack_2e0;
          FUN_10ad01a04();
          if ((long)pppppplStack_2d0 < 0) {
            __ZdlPv(pppppppuStack_2e0);
          }
          if (iVar13 == 0) {
            if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
              FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
              pppppppuVar27 = pppppppuStack_2e0;
              if (-1 < (long)pppppplStack_2d0) {
                pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
              }
              func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x218,&UNK_10f69e81c,in_x6,in_x7
                                  ,pppppppuVar27);
              goto LAB_10ac5dc68;
            }
          }
          else if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
            FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
            pppppppuVar27 = pppppppuStack_2e0;
            if (-1 < (long)pppppplStack_2d0) {
              pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
            }
            func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x215,&UNK_10f69e7e0,in_x6,in_x7,
                                pppppppuVar27);
LAB_10ac5dc68:
            if ((long)pppppplStack_2d0 < 0) {
              __ZdlPv(pppppppuStack_2e0);
            }
          }
        }
        else if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
          FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
          pppppppuVar27 = pppppppuStack_2e0;
          if (-1 < (long)pppppplStack_2d0) {
            pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
          }
          func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x21b,&UNK_10f69e84d,in_x6,in_x7,
                              pppppppuVar27);
          goto LAB_10ac5dc68;
        }
      }
    }
    else {
      pppppppuVar16 = *(ulong ********)(lVar14 + 0x228);
      FUN_10ac5df10(pppppppuVar16,&uStack_3a0);
      if (((ulong)pppppppuVar16 & 1) == 0) {
        if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
          FUN_10a08d2e0(&pppppppuStack_2e0,&uStack_3a0);
          pppppppuVar52 = pppppppuStack_2e0;
          if (-1 < (long)pppppplStack_2d0) {
            pppppppuVar52 = (ulong *******)&pppppppuStack_2e0;
          }
          pppppppuVar16 = (ulong *******)0x1;
          func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e710,0x1e3,&UNK_10f69e7b6,in_x6,in_x7,
                              pppppppuVar52);
          if ((long)pppppplStack_2d0 < 0) {
            pppppppuVar16 = pppppppuStack_2e0;
            __ZdlPv();
          }
        }
        if (uVar3 == 5) {
          cVar9 = *(char *)((long)pppppppuVar27 + 4);
          bVar12 = *(int *)pppppppuVar27 == 0x6174656d;
          cVar22 = 'l';
          goto LAB_10ac5c798;
        }
        if (uVar3 == 3) goto LAB_10ac5c784;
      }
    }
  }
  FUN_10a240380(&pppppppuStack_2e0,*(undefined8 *)(lVar14 + 0x218),&uStack_3a0);
  FUN_10a2741f8(plVar48,&pppppppuStack_2e0);
  pppppplVar43 = pppppplStack_2d8;
  if (pppppplStack_2d8 != (long ******)0x0) {
    pppppplVar28 = pppppplStack_2d8 + 1;
    do {
      ppppplVar31 = *pppppplVar28;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *pppppplVar28 = (long *****)((long)ppppplVar31 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (ppppplVar31 == (long *****)0x0) {
      (*(code *)(*pppppplStack_2d8)[2])(pppppplStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar43);
    }
  }
  lVar24 = *plVar48;
  plStack_88 = *(long **)(lVar24 + 0x60);
  lStack_90 = *(long *)(lVar24 + 0x58);
  if (-1 < (char)*(byte *)(lVar24 + 0x6f)) {
    plStack_88 = (long *)(ulong)*(byte *)(lVar24 + 0x6f);
    lStack_90 = lVar24 + 0x58;
  }
  pppppppuStack_b8 = (ulong *******)0x0;
  pppplStack_c0 = (long ****)0x0;
  lStack_a8 = 0;
  ppppppplStack_b0 = (long *******)0x0;
  fStack_a0 = 1.0;
  func_0x000107c2b054(&pppppppuStack_d8,&UNK_10f648437);
  func_0x000107c2b054(&pppppppuStack_f0,&UNK_10f648454);
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppppppuStack_d8 = &pppppppuStack_d8;
  }
  plVar48 = &lStack_90;
  FUN_10a0ee2b4(plVar48,pppppppuStack_d8,uStack_d0,0);
  lVar24 = lStack_90;
  if (plVar48 == (long *)0xffffffffffffffff) goto LAB_10ac5d3a8;
  if (plStack_88 < plVar48 || (long)plStack_88 - (long)plVar48 == 0) {
LAB_10ac5d374:
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e5ce,0xff,&UNK_10f69e647);
    }
  }
  else {
    lVar17 = lStack_90 + (long)plVar48;
    _memchr(lVar17,10,(long)plStack_88 - (long)plVar48);
    if ((lVar17 == 0) ||
       (plVar48 = (long *)(lVar17 - lVar24), plVar48 == (long *)0xffffffffffffffff))
    goto LAB_10ac5d374;
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
      pppppppuStack_f0 = &pppppppuStack_f0;
    }
    lVar24 = (long)plVar48 + 1;
    plVar15 = &lStack_90;
    FUN_10a0ee2b4(plVar15,pppppppuStack_f0,uStack_e8,lVar24);
    lVar17 = lStack_90;
    if (plVar15 == (long *)0xffffffffffffffff) {
      if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e5ce,0x103,&UNK_10f69e68d);
      }
    }
    else {
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88;
        if (plVar15 < plStack_88) {
          plVar6 = (long *)((long)plVar15 + 1);
        }
        lVar36 = -(long)plVar6;
        pcVar40 = (char *)((long)plVar6 + lStack_90);
        do {
          pcVar40 = pcVar40 + -1;
          if (lVar36 == 0) goto LAB_10ac5d7dc;
          lVar36 = lVar36 + 1;
        } while (*pcVar40 != '\n');
        if ((lVar36 != 1) && (plVar48 <= (long *)-lVar36)) {
          if (-(long)plVar48 != lVar36) {
            if (plStack_88 <= plVar48) {
              FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10ac5dcb8:
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10ac5dcbc);
              (*pcVar11)();
            }
            uVar3 = (long)plStack_88 - lVar24;
            if (~(ulong)plVar48 - lVar36 <= (ulong)((long)plStack_88 - lVar24)) {
              uVar3 = ~(ulong)plVar48 - lVar36;
            }
            if (uVar3 != 0) {
              lVar24 = lStack_90 + lVar24;
              uVar45 = 0;
              do {
                uVar51 = uVar3 - uVar45;
                lVar36 = lVar24 + uVar45;
                lVar18 = lVar36;
                _memchr(lVar36,10,uVar51);
                lVar32 = lVar18 - lVar24;
                uVar59 = uVar51;
                if (lVar32 - uVar45 <= uVar51) {
                  uVar59 = lVar32 - uVar45;
                }
                uVar4 = uVar3;
                if (lVar32 != -1 && lVar18 != 0) {
                  uVar4 = lVar32 + 1;
                  uVar51 = uVar59;
                }
                uVar59 = 0;
                uVar60 = uVar59;
                if (uVar51 != 0) {
                  do {
                    bVar8 = *(byte *)(lVar36 + uVar59);
                    if ((long)(char)bVar8 < 0) {
                      uVar23 = (uint)bVar8;
                      ___maskrune(bVar8,0x4000);
                    }
                    else {
                      uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                        (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                    }
                    uVar60 = uVar59;
                  } while ((uVar23 != 0) && (uVar59 = uVar59 + 1, uVar60 = uVar51, uVar51 != uVar59)
                          );
                }
                ppcVar49 = (char **)(uVar51 - uVar60);
                pbVar42 = (byte *)((long)plVar48 + uVar51 + uVar45 + lVar17);
                ppcVar57 = ppcVar49;
                uVar59 = uVar51;
                do {
                  ppcVar19 = ppcVar57;
                  if (uVar59 <= uVar60) break;
                  uVar59 = uVar59 - 1;
                  if (uVar51 <= uVar59) goto LAB_10ac5dcb8;
                  bVar8 = *pbVar42;
                  if ((long)(char)bVar8 < 0) {
                    uVar23 = (uint)bVar8;
                    ___maskrune(bVar8,0x4000);
                  }
                  else {
                    uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                      (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                  }
                  pbVar42 = pbVar42 + -1;
                  ppcVar57 = (char **)((long)ppcVar19 + -1);
                } while (uVar23 != 0);
                pcVar40 = (char *)(lVar36 + uVar60);
                ppcStack_f8 = ppcVar49;
                if (ppcVar19 <= ppcVar49) {
                  ppcStack_f8 = ppcVar19;
                }
                pcStack_100 = pcVar40;
                if (ppcStack_f8 != (char **)0x0) {
                  ppcVar57 = ppcStack_f8;
                  if ((char **)0x1 < ppcStack_f8) {
                    ppcVar57 = (char **)0x2;
                  }
                  pcVar2 = pcVar40 + (long)ppcVar57;
                  pcVar37 = pcVar40;
                  pcVar38 = pcVar2;
                  do {
                    while (pcVar33 = pcVar38, pcVar38 = pcVar37, pcVar37 = pcVar38 + 1,
                          *pcVar38 == '/') {
                      if (pcVar37 == pcVar2) goto LAB_10ac5cad4;
                      if (*pcVar37 != '/') {
                        pcVar38 = pcVar33;
                      }
                    }
                    pcVar38 = pcVar33;
                  } while (pcVar37 != pcVar2);
LAB_10ac5cad4:
                  if ((pcVar33 != pcVar2) && (pcVar33 == pcVar40)) {
                    if (ppcStack_f8 == (char **)0x1) {
                      FUN_109ffdddc(&UNK_10f2fca6e);
                      goto LAB_10ac5dcb8;
                    }
                    uVar59 = (long)ppcStack_f8 - 2;
                    if (uVar59 == 0) {
                      uVar51 = 0;
                    }
                    else {
                      uVar56 = 0;
                      ppcVar57 = ppcVar19;
                      if (ppcVar49 <= ppcVar19) {
                        ppcVar57 = ppcVar49;
                      }
                      do {
                        bVar8 = pcVar40[uVar56 + 2];
                        if ((long)(char)bVar8 < 0) {
                          uVar23 = (uint)bVar8;
                          ___maskrune(bVar8,0x4000);
                        }
                        else {
                          uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                            (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                        }
                        uVar51 = uVar56;
                      } while ((uVar23 != 0) &&
                              (uVar56 = uVar56 + 1, uVar51 = uVar59, (long)ppcVar57 - 2U != uVar56))
                      ;
                    }
                    if (ppcVar49 <= ppcVar19) {
                      ppcVar19 = ppcVar49;
                    }
                    pbVar42 = (byte *)((long)plVar48 + uVar45 + uVar60 + lVar17 + (long)ppcVar19);
                    uVar45 = (long)ppcVar19 - 3;
                    ppcVar57 = (char **)((long)ppcVar19 + (-2 - uVar51));
                    do {
                      ppcVar49 = ppcVar57;
                      if (uVar45 + 1 <= uVar51) break;
                      if (uVar59 <= uVar45) goto LAB_10ac5dcb8;
                      bVar8 = *pbVar42;
                      if ((long)(char)bVar8 < 0) {
                        uVar23 = (uint)bVar8;
                        ___maskrune(bVar8,0x4000);
                      }
                      else {
                        uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                          (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                      }
                      pbVar42 = pbVar42 + -1;
                      uVar45 = uVar45 - 1;
                      ppcVar57 = (char **)((long)ppcVar49 + -1);
                    } while (uVar23 != 0);
                    pcStack_100 = pcVar40 + uVar51 + 2;
                    ppcStack_f8 = (char **)(uVar59 - uVar51);
                    if (ppcVar49 <= (char **)(uVar59 - uVar51)) {
                      ppcStack_f8 = ppcVar49;
                    }
                    if (ppcStack_f8 == (char **)0x0) goto LAB_10ac5d360;
                  }
                  ppcVar57 = ppcStack_f8;
                  pcVar40 = pcStack_100;
                  pppplStack_110 = (long ****)0x0;
                  ppppplStack_108 = (long *****)0x0;
                  ppcVar19 = &pcStack_100;
                  FUN_10a3515d4(ppcVar19,&DAT_10f6025a4,0);
                  ppcVar49 = ppcStack_f8;
                  pcVar2 = pcStack_100;
                  if (ppcVar19 != (char **)0xffffffffffffffff) {
                    lVar36 = (long)ppcStack_f8 - (long)ppcVar19;
                    ppcVar57 = ppcStack_f8;
                    if (ppcStack_f8 >= ppcVar19) {
                      ppcVar57 = ppcVar19;
                    }
                    if (ppcStack_f8 < ppcVar19 || lVar36 == 0) {
                      FUN_109ffdddc(&UNK_10f2fca6e);
                      goto LAB_10ac5dcb8;
                    }
                    lVar18 = (long)ppcVar19 + 1;
                    uVar45 = 0;
                    uVar59 = (long)ppcStack_f8 - lVar18;
                    uVar51 = uVar45;
                    if (uVar59 != 0) {
                      do {
                        bVar8 = pcVar2[uVar45 + lVar18];
                        if ((long)(char)bVar8 < 0) {
                          uVar23 = (uint)bVar8;
                          ___maskrune(bVar8,0x4000);
                        }
                        else {
                          uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                            (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                        }
                        uVar51 = uVar45;
                      } while ((uVar23 != 0) &&
                              (uVar45 = uVar45 + 1, uVar51 = uVar59, uVar59 != uVar45));
                    }
                    lVar32 = (long)ppcVar49 + -1;
                    uVar45 = lVar36 - 2;
                    ppppplVar31 = (long *****)((lVar32 - (long)ppcVar19) - uVar51);
                    do {
                      ppppplVar58 = ppppplVar31;
                      if (uVar45 + 1 <= uVar51) break;
                      if (uVar59 <= uVar45) goto LAB_10ac5dcb8;
                      bVar8 = pcVar2[lVar32];
                      if ((long)(char)bVar8 < 0) {
                        uVar23 = (uint)bVar8;
                        ___maskrune(bVar8,0x4000);
                      }
                      else {
                        uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                          (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                      }
                      lVar32 = lVar32 + -1;
                      uVar45 = uVar45 - 1;
                      ppppplVar31 = (long *****)((long)ppppplVar58 + -1);
                    } while (uVar23 != 0);
                    ppppplStack_108 = (long *****)(uVar59 - uVar51);
                    if (ppppplVar58 <= (long *****)(uVar59 - uVar51)) {
                      ppppplStack_108 = ppppplVar58;
                    }
                    pppplStack_110 = (long ****)(pcVar2 + uVar51 + lVar18);
                    pcVar40 = pcVar2;
                  }
                  ppcVar49 = (char **)0x0;
                  ppcVar19 = ppcVar49;
                  if (ppcVar57 != (char **)0x0) {
                    do {
                      bVar8 = pcVar40[(long)ppcVar49];
                      if ((long)(char)bVar8 < 0) {
                        uVar23 = (uint)bVar8;
                        ___maskrune(bVar8,0x4000);
                      }
                      else {
                        uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                          (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                      }
                      ppcVar19 = ppcVar49;
                    } while ((uVar23 != 0) &&
                            (ppcVar49 = (char **)((long)ppcVar49 + 1), ppcVar19 = ppcVar57,
                            ppcVar57 != ppcVar49));
                  }
                  pppppplVar43 = (long ******)((long)ppcVar57 - (long)ppcVar19);
                  pppppplVar28 = pppppplVar43;
                  ppcVar49 = ppcVar57;
                  do {
                    pppppplVar35 = pppppplVar28;
                    ppcVar46 = (char **)((long)ppcVar49 - 1);
                    if (ppcVar49 <= ppcVar19) break;
                    if (ppcVar57 <= ppcVar46) goto LAB_10ac5dcb8;
                    bVar8 = pcVar40[(long)ppcVar46];
                    if ((long)(char)bVar8 < 0) {
                      uVar23 = (uint)bVar8;
                      ___maskrune(bVar8,0x4000);
                    }
                    else {
                      uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                        (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                    }
                    pppppplVar28 = (long ******)((long)pppppplVar35 + -1);
                    ppcVar49 = ppcVar46;
                  } while (uVar23 != 0);
                  if (pppppplVar35 <= pppppplVar43) {
                    pppppplVar43 = pppppplVar35;
                  }
                  if (pppppplVar43 != (long ******)0x0) {
                    if (ppppplStack_108 != (long *****)0x0) {
                      ppppplVar31 = &pppplStack_110;
                      FUN_10a166af4(ppppplVar31,"//",0);
                      pppplVar30 = pppplStack_110;
                      if (ppppplVar31 != (long *****)0xffffffffffffffff) {
                        ppppplVar58 = (long *****)0x0;
                        ppppplVar5 = ppppplStack_108;
                        if (ppppplVar31 <= ppppplStack_108) {
                          ppppplVar5 = ppppplVar31;
                        }
                        ppppplVar31 = ppppplVar58;
                        if (ppppplVar5 != (long *****)0x0) {
                          do {
                            bVar8 = *(byte *)((long)pppplVar30 + (long)ppppplVar58);
                            if ((long)(char)bVar8 < 0) {
                              uVar23 = (uint)bVar8;
                              ___maskrune(bVar8,0x4000);
                            }
                            else {
                              uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                                (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                            }
                            ppppplVar31 = ppppplVar58;
                          } while ((uVar23 != 0) &&
                                  (ppppplVar58 = (long *****)((long)ppppplVar58 + 1),
                                  ppppplVar31 = ppppplVar5, ppppplVar5 != ppppplVar58));
                        }
                        ppppplVar25 = (long *****)((long)ppppplVar5 - (long)ppppplVar31);
                        ppppplVar10 = ppppplVar25;
                        ppppplVar58 = ppppplVar5;
                        do {
                          ppppplVar26 = ppppplVar10;
                          ppppplVar47 = (long *****)((long)ppppplVar58 - 1);
                          if (ppppplVar58 <= ppppplVar31) break;
                          if (ppppplVar5 <= ppppplVar47) goto LAB_10ac5dcb8;
                          bVar8 = *(byte *)((long)pppplVar30 + (long)ppppplVar47);
                          if ((long)(char)bVar8 < 0) {
                            uVar23 = (uint)bVar8;
                            ___maskrune(bVar8,0x4000);
                          }
                          else {
                            uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                              (long)(char)bVar8 * 4 + 0x3c) & 0x4000;
                          }
                          ppppplVar10 = (long *****)((long)ppppplVar26 + -1);
                          ppppplVar58 = ppppplVar47;
                        } while (uVar23 != 0);
                        pppplStack_110 = (long ****)((long)pppplVar30 + (long)ppppplVar31);
                        ppppplStack_108 = ppppplVar25;
                        if (ppppplVar26 <= ppppplVar25) {
                          ppppplStack_108 = ppppplVar26;
                        }
                      }
                    }
                    if ((long ******)0x7ffffffffffffff7 < pppppplVar43) {
                      func_0x000109ffde50();
                      goto LAB_10ac5dcb8;
                    }
                    if (pppppplVar43 < (long ******)0x17) {
                      uStack_118 = (long ******)CONCAT17((char)pppppplVar43,(undefined7)uStack_118);
                      pppppppuVar16 = (ulong *******)&pppppppuStack_128;
                    }
                    else {
                      pppppppuVar27 = (ulong *******)0x19;
                      if (((ulong)pppppplVar43 | 7) != 0x17) {
                        pppppppuVar27 = (ulong *******)(((ulong)pppppplVar43 | 7) + 1);
                      }
                      pppppppuVar16 = pppppppuVar27;
                      __Znwm();
                      uStack_118 = (long ******)((ulong)pppppppuVar27 | 0x8000000000000000);
                      pppppppuStack_128 = pppppppuVar16;
                      pppppplStack_120 = pppppplVar43;
                    }
                    _memmove(pppppppuVar16,pcVar40 + (long)ppcVar19,pppppplVar43);
                    pppppplStack_2d0 = uStack_118;
                    *(undefined1 *)((long)pppppppuVar16 + (long)pppppplVar43) = 0;
                    pppppplStack_2d8 = pppppplStack_120;
                    pppppppuStack_2e0 = pppppppuStack_128;
                    pppppplStack_120 = (long ******)0x0;
                    pppppppuStack_128 = (ulong *******)0x0;
                    uStack_118 = (long ******)0x0;
                    pppppppuStack_2c8 = (ulong *******)0x0;
                    func_0x000107c2b080(&pppppppuStack_2e0);
                    pppppppuVar52 = pppppppuStack_b8;
                    pppppppuVar27 = pppppppuStack_2c8;
                    if (pppppppuStack_b8 != (ulong *******)0x0) {
                      uVar45 = (long)pppppppuStack_b8 - 1;
                      if (((ulong)pppppppuStack_b8 & uVar45) == 0) {
                        pppppppuVar16 = (ulong *******)(uVar45 & (ulong)pppppppuStack_2c8);
                      }
                      else {
                        pppppppuVar16 = pppppppuStack_2c8;
                        if (pppppppuStack_b8 <= pppppppuStack_2c8) {
                          uVar59 = 0;
                          if (pppppppuStack_b8 != (ulong *******)0x0) {
                            uVar59 = (ulong)pppppppuStack_2c8 / (ulong)pppppppuStack_b8;
                          }
                          pppppppuVar16 =
                               (ulong *******)
                               ((long)pppppppuStack_2c8 - uVar59 * (long)pppppppuStack_b8);
                        }
                      }
                      if (pppplStack_c0[(long)pppppppuVar16] != (long ***)0x0) {
                        for (ppppppplVar55 = (long *******)*pppplStack_c0[(long)pppppppuVar16];
                            ppppppplVar55 != (long *******)0x0;
                            ppppppplVar55 = (long *******)*ppppppplVar55) {
                          pppppppuVar34 = (ulong *******)ppppppplVar55[1];
                          if (pppppppuVar34 == pppppppuStack_2c8) {
                            if ((ulong *******)ppppppplVar55[5] == pppppppuStack_2c8)
                            goto LAB_10ac5d0e8;
                          }
                          else {
                            if (((ulong)pppppppuStack_b8 & uVar45) == 0) {
                              pppppppuVar34 = (ulong *******)((ulong)pppppppuVar34 & uVar45);
                            }
                            else if (pppppppuStack_b8 <= pppppppuVar34) {
                              uVar59 = 0;
                              if (pppppppuStack_b8 != (ulong *******)0x0) {
                                uVar59 = (ulong)pppppppuVar34 / (ulong)pppppppuStack_b8;
                              }
                              pppppppuVar34 =
                                   (ulong *******)
                                   ((long)pppppppuVar34 - uVar59 * (long)pppppppuStack_b8);
                            }
                            if (pppppppuVar34 != pppppppuVar16) break;
                          }
                        }
                      }
                    }
                    ppppppplVar55 = (long *******)0x58;
                    __Znwm();
                    pppppplVar43 = pppppplStack_2d0;
                    ppppplStack_358 = &pppplStack_c0;
                    ppppplStack_350 = (long *****)0x1;
                    *ppppppplVar55 = (long ******)0x0;
                    ppppppplVar55[1] = (long ******)pppppppuVar27;
                    ppppppplVar55[3] = pppppplStack_2d8;
                    ppppppplVar55[2] = (long ******)pppppppuStack_2e0;
                    pppppppuStack_2e0 = (ulong *******)0x0;
                    pppppplStack_2d8 = (long ******)0x0;
                    pppppplStack_2d0 = (long ******)0x0;
                    ppppppplVar55[4] = pppppplVar43;
                    ppppppplVar55[5] = (long ******)pppppppuVar27;
                    ppppppplVar55[7] = (long ******)0x0;
                    ppppppplVar55[6] = (long ******)0x0;
                    ppppppplVar55[9] = (long ******)0x0;
                    ppppppplVar55[8] = (long ******)0x0;
                    *(undefined4 *)(ppppppplVar55 + 10) = 0x3f800000;
                    ppppppplStack_360 = ppppppplVar55;
                    if ((pppppppuVar52 == (ulong *******)0x0) ||
                       (fStack_a0 * (float)pppppppuVar52 < (float)(lStack_a8 + 1))) {
                      if (pppppppuVar52 < (ulong *******)0x3) {
                        uVar45 = 1;
                      }
                      else {
                        uVar45 = (ulong)(((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) != 0);
                      }
                      uVar45 = uVar45 | (long)pppppppuVar52 << 1;
                      uVar59 = (ulong)((float)(lStack_a8 + 1) / fStack_a0);
                      if (uVar45 <= uVar59) {
                        uVar45 = uVar59;
                      }
                      FUN_10a275048(&pppplStack_c0,uVar45);
                      pppppppuVar52 = pppppppuStack_b8;
                      if (((ulong)pppppppuStack_b8 & (long)pppppppuStack_b8 - 1U) == 0) {
                        pppppppuVar16 =
                             (ulong *******)((long)pppppppuStack_b8 - 1U & (ulong)pppppppuVar27);
                      }
                      else {
                        pppppppuVar16 = pppppppuVar27;
                        if (pppppppuStack_b8 <= pppppppuVar27) {
                          uVar45 = 0;
                          if (pppppppuStack_b8 != (ulong *******)0x0) {
                            uVar45 = (ulong)pppppppuVar27 / (ulong)pppppppuStack_b8;
                          }
                          pppppppuVar16 =
                               (ulong *******)
                               ((long)pppppppuVar27 - uVar45 * (long)pppppppuStack_b8);
                        }
                      }
                    }
                    pppplVar30 = (long ****)pppplStack_c0[(long)pppppppuVar16];
                    if (pppplVar30 == (long ****)0x0) {
                      *ppppppplVar55 = (long ******)ppppppplStack_b0;
                      pppplStack_c0[(long)pppppppuVar16] = (long ***)&ppppppplStack_b0;
                      ppppppplStack_b0 = ppppppplVar55;
                      if (*ppppppplVar55 != (long ******)0x0) {
                        pppppppuVar27 = (ulong *******)(*ppppppplVar55)[1];
                        if (((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) == 0) {
                          pppppppuVar27 =
                               (ulong *******)((ulong)pppppppuVar27 & (long)pppppppuVar52 - 1U);
                        }
                        else if (pppppppuVar52 <= pppppppuVar27) {
                          uVar45 = 0;
                          if (pppppppuVar52 != (ulong *******)0x0) {
                            uVar45 = (ulong)pppppppuVar27 / (ulong)pppppppuVar52;
                          }
                          pppppppuVar27 =
                               (ulong *******)((long)pppppppuVar27 - uVar45 * (long)pppppppuVar52);
                        }
                        pppplVar30 = pppplStack_c0 + (long)pppppppuVar27;
                        goto LAB_10ac5d0d8;
                      }
                    }
                    else {
                      *ppppppplVar55 = (long ******)*pppplVar30;
LAB_10ac5d0d8:
                      *pppplVar30 = (long ***)ppppppplVar55;
                    }
                    lStack_a8 = lStack_a8 + 1;
LAB_10ac5d0e8:
                    ppppplVar31 = ppppplStack_108;
                    pppplVar30 = pppplStack_110;
                    if ((long *****)0x7ffffffffffffff7 < ppppplStack_108) {
                      func_0x000109ffde50();
                      goto LAB_10ac5dcb8;
                    }
                    if (ppppplStack_108 < (long *****)0x17) {
                      uStack_130 = (long *****)
                                   CONCAT17((char)ppppplStack_108,(undefined7)uStack_130);
                      ppppppplVar61 = (long *******)&ppppppplStack_140;
                      if (ppppplStack_108 != (long *****)0x0) goto LAB_10ac5d144;
                    }
                    else {
                      ppppppplVar7 = (long *******)0x19;
                      if (((ulong)ppppplStack_108 | 7) != 0x17) {
                        ppppppplVar7 = (long *******)(((ulong)ppppplStack_108 | 7) + 1);
                      }
                      ppppppplVar61 = ppppppplVar7;
                      __Znwm();
                      uStack_130 = (long *****)((ulong)ppppppplVar7 | 0x8000000000000000);
                      ppppplStack_138 = ppppplVar31;
                      ppppppplStack_140 = ppppppplVar61;
LAB_10ac5d144:
                      _memmove(ppppppplVar61,pppplVar30,ppppplVar31);
                    }
                    *(undefined1 *)((long)ppppppplVar61 + (long)ppppplVar31) = 0;
                    ppppppplVar7 = ppppppplVar55 + 6;
                    ppppplStack_358 = ppppplStack_138;
                    ppppppplStack_360 = ppppppplStack_140;
                    ppppplStack_350 = uStack_130;
                    ppppppplStack_348 = (long *******)0x0;
                    func_0x000107c2b080(&ppppppplStack_360);
                    ppppppplVar29 = ppppppplStack_348;
                    ppppppplVar53 = (long *******)ppppppplVar55[7];
                    if (ppppppplVar53 != (long *******)0x0) {
                      uVar45 = (long)ppppppplVar53 - 1;
                      if (((ulong)ppppppplVar53 & uVar45) == 0) {
                        ppppppplVar61 = (long *******)(uVar45 & (ulong)ppppppplStack_348);
                      }
                      else {
                        ppppppplVar61 = ppppppplStack_348;
                        if (ppppppplVar53 <= ppppppplStack_348) {
                          uVar59 = 0;
                          if (ppppppplVar53 != (long *******)0x0) {
                            uVar59 = (ulong)ppppppplStack_348 / (ulong)ppppppplVar53;
                          }
                          ppppppplVar61 =
                               (long *******)
                               ((long)ppppppplStack_348 - uVar59 * (long)ppppppplVar53);
                        }
                      }
                      ppppplVar31 = (*ppppppplVar7)[(long)ppppppplVar61];
                      if (ppppplVar31 != (long *****)0x0) {
                        do {
                          while( true ) {
                            ppppplVar31 = (long *****)*ppppplVar31;
                            if (ppppplVar31 == (long *****)0x0) goto LAB_10ac5d200;
                            ppppppplVar39 = (long *******)ppppplVar31[1];
                            if (ppppppplVar39 != ppppppplStack_348) break;
                            if ((long *******)ppppplVar31[5] == ppppppplStack_348)
                            goto LAB_10ac5d330;
                          }
                          if (((ulong)ppppppplVar53 & uVar45) == 0) {
                            ppppppplVar39 = (long *******)((ulong)ppppppplVar39 & uVar45);
                          }
                          else if (ppppppplVar53 <= ppppppplVar39) {
                            uVar59 = 0;
                            if (ppppppplVar53 != (long *******)0x0) {
                              uVar59 = (ulong)ppppppplVar39 / (ulong)ppppppplVar53;
                            }
                            ppppppplVar39 =
                                 (long *******)((long)ppppppplVar39 - uVar59 * (long)ppppppplVar53);
                          }
                        } while (ppppppplVar39 == ppppppplVar61);
                      }
                    }
LAB_10ac5d200:
                    pppppplVar43 = (long ******)0x30;
                    __Znwm();
                    ppppplVar31 = ppppplStack_350;
                    uStack_70 = 1;
                    *pppppplVar43 = (long *****)0x0;
                    pppppplVar43[1] = (long *****)ppppppplVar29;
                    pppppplVar43[3] = ppppplStack_358;
                    pppppplVar43[2] = (long *****)ppppppplStack_360;
                    ppppppplStack_360 = (long *******)0x0;
                    ppppplStack_358 = (long *****)0x0;
                    ppppplStack_350 = (long *****)0x0;
                    pppppplVar43[4] = ppppplVar31;
                    pppppplVar43[5] = (long *****)ppppppplVar29;
                    ppppppplStack_78 = ppppppplVar7;
                    if ((ppppppplVar53 == (long *******)0x0) ||
                       (*(float *)(ppppppplVar55 + 10) * (float)ppppppplVar53 <
                        (float)((long)ppppppplVar55[9] + 1))) {
                      uVar45 = 1;
                      if ((long *******)0x2 < ppppppplVar53) {
                        uVar45 = (ulong)(((ulong)ppppppplVar53 & (long)ppppppplVar53 - 1U) != 0);
                      }
                      uVar45 = uVar45 | (long)ppppppplVar53 << 1;
                      uVar59 = (ulong)((float)((long)ppppppplVar55[9] + 1) /
                                      *(float *)(ppppppplVar55 + 10));
                      if (uVar45 <= uVar59) {
                        uVar45 = uVar59;
                      }
                      FUN_10a2755b8(ppppppplVar7,uVar45);
                      ppppppplVar53 = (long *******)ppppppplVar55[7];
                      if (((ulong)ppppppplVar53 & (long)ppppppplVar53 - 1U) == 0) {
                        ppppppplVar61 =
                             (long *******)((long)ppppppplVar53 - 1U & (ulong)ppppppplVar29);
                      }
                      else {
                        ppppppplVar61 = ppppppplVar29;
                        if (ppppppplVar53 <= ppppppplVar29) {
                          uVar45 = 0;
                          if (ppppppplVar53 != (long *******)0x0) {
                            uVar45 = (ulong)ppppppplVar29 / (ulong)ppppppplVar53;
                          }
                          ppppppplVar61 =
                               (long *******)((long)ppppppplVar29 - uVar45 * (long)ppppppplVar53);
                        }
                      }
                    }
                    pppppplVar35 = *ppppppplVar7;
                    pppppplVar28 = (long ******)pppppplVar35[(long)ppppppplVar61];
                    if (pppppplVar28 == (long ******)0x0) {
                      ppppppplVar29 = ppppppplVar55 + 8;
                      *pppppplVar43 = (long *****)*ppppppplVar29;
                      *ppppppplVar29 = pppppplVar43;
                      pppppplVar35[(long)ppppppplVar61] = (long *****)ppppppplVar29;
                      if (*pppppplVar43 != (long *****)0x0) {
                        ppppppplVar61 = (long *******)(*pppppplVar43)[1];
                        if (((ulong)ppppppplVar53 & (long)ppppppplVar53 - 1U) == 0) {
                          ppppppplVar61 =
                               (long *******)((ulong)ppppppplVar61 & (long)ppppppplVar53 - 1U);
                        }
                        else if (ppppppplVar53 <= ppppppplVar61) {
                          uVar45 = 0;
                          if (ppppppplVar53 != (long *******)0x0) {
                            uVar45 = (ulong)ppppppplVar61 / (ulong)ppppppplVar53;
                          }
                          ppppppplVar61 =
                               (long *******)((long)ppppppplVar61 - uVar45 * (long)ppppppplVar53);
                        }
                        pppppplVar28 = *ppppppplVar7 + (long)ppppppplVar61;
                        goto LAB_10ac5d320;
                      }
                    }
                    else {
                      *pppppplVar43 = *pppppplVar28;
LAB_10ac5d320:
                      *pppppplVar28 = (long *****)pppppplVar43;
                    }
                    ppppppplVar55[9] = (long ******)((long)ppppppplVar55[9] + 1);
LAB_10ac5d330:
                    if ((long)ppppplStack_350 < 0) {
                      __ZdlPv(ppppppplStack_360);
                    }
                    if ((long)pppppplStack_2d0 < 0) {
                      __ZdlPv(pppppppuStack_2e0);
                    }
                    if ((long)uStack_118 < 0) {
                      __ZdlPv(pppppppuStack_128);
                    }
                  }
                }
LAB_10ac5d360:
                uVar45 = uVar4;
              } while (uVar4 < uVar3);
            }
          }
          goto LAB_10ac5d3a8;
        }
      }
LAB_10ac5d7dc:
      if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e5ce,0x107,&UNK_10f69e6c3);
      }
    }
  }
LAB_10ac5d3a8:
  lVar24 = 0;
  do {
    plVar48 = &lStack_90;
    FUN_10a166af4(plVar48,*(undefined8 *)((long)&PTR_DAT_110c603e8 + lVar24),0);
    if (plVar48 != (long *)0xffffffffffffffff) {
      uVar23 = 1;
      goto LAB_10ac5d3e4;
    }
    lVar24 = lVar24 + 8;
  } while (lVar24 != 0x10);
  uVar23 = 0;
LAB_10ac5d3e4:
  lVar24 = 0;
  do {
    if (0xd7 < *(uint *)(&UNK_10e509740 + lVar24)) goto LAB_10ac5dcb8;
    func_0x000107c2b074(&pppppppuStack_2e0,
                        &PTR_DAT_110c50c00 + (ulong)*(uint *)(&UNK_10e509740 + lVar24) * 5);
    pppppppuVar27 = pppppppuStack_2e0;
    if (-1 < (long)pppppplStack_2d0) {
      pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
    }
    plVar48 = &lStack_90;
    FUN_10a166af4(plVar48,pppppppuVar27,0);
    if ((long)pppppplStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if (plVar48 != (long *)0xffffffffffffffff) {
      uVar23 = uVar23 | 2;
      break;
    }
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0x18);
  lVar24 = 0;
  do {
    func_0x000107c2b054(&pppppppuStack_2e0,*(undefined8 *)((long)&PTR_DAT_110c603f8 + lVar24));
    pppppplVar43 = pppppplStack_2d8;
    pppppppuVar27 = pppppppuStack_2e0;
    if (-1 < (long)pppppplStack_2d0) {
      pppppplVar43 = (long ******)((ulong)pppppplStack_2d0 >> 0x38);
      pppppppuVar27 = (ulong *******)&pppppppuStack_2e0;
    }
    plVar48 = &lStack_90;
    FUN_10a0ee2b4(plVar48,pppppppuVar27,pppppplVar43,0);
    if ((long)pppppplStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if (plVar48 == (long *)0xffffffffffffffff) goto LAB_10ac5d4d8;
    lVar24 = lVar24 + 8;
  } while (lVar24 != 0x20);
  uVar23 = uVar23 | 4;
LAB_10ac5d4d8:
  pppplVar30 = (long ****)&pppplStack_c0;
  FUN_10a1e6458(pppplVar30,lStack_90,plStack_88);
  uVar54 = uVar23 | 0x20;
  if ((int)pppplVar30 == 0) {
    uVar54 = uVar23;
  }
  func_0x000107c2b07c(&pppppppuStack_2e0,&UNK_10f69e6f6);
  pppplVar30 = (long ****)&pppplStack_c0;
  func_0x00010ac7cf00(pppplVar30,pppppppuStack_2c8);
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  if (pppplVar30 != (long ****)0x0) {
    func_0x000107c2b07c(&pppppppuStack_2e0,&DAT_10f68e7b6);
    pppplVar20 = pppplVar30 + 6;
    func_0x00010a203cf4(pppplVar20,&pppppppuStack_2e0);
    if ((long)pppppplStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if (pppplVar20 == (long ****)0x0) {
      func_0x000107c2b07c(&pppppppuStack_2e0,&DAT_10f69e70a);
      pppplVar20 = pppplVar30 + 6;
      func_0x00010a203cf4(pppplVar20,&pppppppuStack_2e0);
      if ((long)pppppplStack_2d0 < 0) {
        __ZdlPv(pppppppuStack_2e0);
      }
      if (pppplVar20 == (long ****)0x0) {
        func_0x000107c2b07c(&pppppppuStack_2e0,&DAT_10f42ad2b);
        pppplVar30 = pppplVar30 + 6;
        func_0x00010a203cf4(pppplVar30,&pppppppuStack_2e0);
        if ((long)pppppplStack_2d0 < 0) {
          __ZdlPv(pppppppuStack_2e0);
        }
        uVar23 = 0;
        if (pppplVar30 != (long ****)0x0) {
          uVar23 = 0x40;
        }
      }
      else {
        uVar23 = 0x80;
      }
    }
    else {
      uVar23 = 0xc0;
    }
    uVar54 = uVar23 | uVar54;
  }
  lVar24 = lStack_90;
  func_0x000109237818(lStack_90,plStack_88);
  if (199 < (uint)lVar24) {
    func_0x000109237af0(&pppppppuStack_2e0,lStack_90,plStack_88);
    pppppplVar43 = pppppplStack_2d0;
    if (pppppplStack_2d8 != pppppplStack_2d0) {
      pppppplVar28 = pppppplStack_2d8;
      do {
        func_0x000107c2ac14(&ppppppplStack_360,pppppplVar28);
        if ((ppppplStack_358 != ppppplStack_350) ||
           (pppplVar30 = appplStack_340, FUN_10a15c150(), (int)pppplVar30 != 0)) {
          uVar54 = uVar54 | 8;
          ppppplStack_80 = (long *****)appplStack_2f8;
          func_0x000107c2b0d8(&ppppplStack_80);
          ppppplStack_80 = (long *****)appplStack_310;
          func_0x000107c2b0d0(&ppppplStack_80);
          ppppplStack_80 = (long *****)appplStack_328;
          func_0x000107c2b0cc(&ppppplStack_80);
          ppppplStack_80 = (long *****)appplStack_340;
          func_0x000107c2b0c8(&ppppplStack_80);
          ppppplStack_80 = (long *****)&ppppplStack_358;
          func_0x000107c2b0c0(&ppppplStack_80);
          break;
        }
        ppppplStack_80 = (long *****)appplStack_2f8;
        func_0x000107c2b0d8(&ppppplStack_80);
        ppppplStack_80 = (long *****)appplStack_310;
        func_0x000107c2b0d0(&ppppplStack_80);
        ppppplStack_80 = (long *****)appplStack_328;
        func_0x000107c2b0cc(&ppppplStack_80);
        ppppplStack_80 = (long *****)appplStack_340;
        func_0x000107c2b0c8(&ppppplStack_80);
        ppppplStack_80 = (long *****)&ppppplStack_358;
        func_0x000107c2b0c0(&ppppplStack_80);
        pppppplVar28 = pppppplVar28 + 0x10;
      } while (pppppplVar28 != pppppplVar43);
    }
    if ((uVar54 >> 2 & 1) != 0) {
      for (; psStack_2c0 != psStack_2b8; psStack_2c0 = psStack_2c0 + 0x10) {
        if (*(char *)((long)psStack_2c0 + 0x17) < '\0') {
          if (*(long *)(psStack_2c0 + 4) == 2) {
            psVar41 = *(short **)psStack_2c0;
            goto LAB_10ac5d7c0;
          }
        }
        else {
          psVar41 = psStack_2c0;
          if (*(char *)((long)psStack_2c0 + 0x17) == '\x02') {
LAB_10ac5d7c0:
            if (*psVar41 == 0x7675) {
              if (*(uint *)(psStack_2c0 + 0xe) < 0x28 &&
                  (1L << ((ulong)*(uint *)(psStack_2c0 + 0xe) & 0x3f) & 0xff0038e38eU) != 0) {
                uVar54 = uVar54 | 0x10;
              }
              break;
            }
          }
        }
      }
    }
    func_0x00010923ff08(&pppppppuStack_2e0);
  }
  uStack_3d0 = uVar54;
  FUN_10a274fd4(auStack_3c8,&pppplStack_c0);
  FUN_10a1f7334(&pppplStack_c0);
  *(uint *)(param_1 + 0xb8) = uStack_3d0;
  FUN_10ac7cf9c(param_1 + 0xc0,auStack_3c8);
  FUN_10a1f7334(auStack_3c8);
  func_0x000107c2b07c(&pppppppuStack_2e0,&UNK_10f69e87d);
  lVar24 = param_1 + 0xc0;
  func_0x00010ac7cf00(lVar24,pppppppuStack_2c8);
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  if (lVar24 != 0) {
    for (plVar48 = *(long **)(lVar24 + 0x40); plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar15 = plVar48 + 2;
        if (*(char *)((long)plVar48 + 0x27) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        func_0x00010ae06f08(0,1,&UNK_10f69e591,&UNK_10f69e710,0x234,&UNK_10f69e895,in_x6,in_x7,
                            plVar15);
      }
    }
  }
  func_0x000107c2b07c(&pppppppuStack_2e0,&UNK_10f69e87d);
  lVar24 = param_1 + 0xc0;
  func_0x00010ac7cf00(lVar24,pppppppuStack_2c8);
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  if (lVar24 != 0) {
    for (plVar48 = *(long **)(lVar24 + 0x40); plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar15 = plVar48 + 2;
        if (*(char *)((long)plVar48 + 0x27) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        func_0x00010ae06f08(0,1,&UNK_10f69e591,&UNK_10f69e710,0x23b,&UNK_10f69e895,in_x6,in_x7,
                            plVar15);
      }
    }
  }
  uVar50 = *(undefined8 *)(lVar14 + 0x218);
  FUN_10a08d2e0(&pppppppuStack_2e0,plVar1);
  if (lStack_390 < 0) {
    func_0x000107c3192c(&uStack_450,uStack_3a0,uStack_398);
  }
  else {
    uStack_448 = uStack_398;
    uStack_450 = uStack_3a0;
    lStack_440 = lStack_390;
  }
  if (lStack_378 < 0) {
    func_0x000107c3192c(&uStack_438,uStack_388,uStack_380);
  }
  else {
    uStack_430 = uStack_380;
    uStack_438 = uStack_388;
    lStack_428 = lStack_378;
  }
  uStack_418 = *(undefined4 *)(param_1 + 0xb8);
  uStack_420 = uStack_370;
  FUN_10a274fd4(auStack_410,param_1 + 0xc0);
  uStack_3e8 = 0;
  plStack_3e0 = (long *)0x0;
  FUN_10a241b68(uVar50,&pppppppuStack_2e0,&uStack_450);
  plVar48 = plStack_3e0;
  if (plStack_3e0 != (long *)0x0) {
    plVar1 = plStack_3e0 + 1;
    do {
      lVar14 = *plVar1;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar14 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_3e0 + 0x10))(plStack_3e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar48);
    }
  }
  FUN_10a1f7334(auStack_410);
  if (lStack_428 < 0) {
    __ZdlPv(uStack_438);
  }
  if (lStack_440 < 0) {
    __ZdlPv(uStack_450);
  }
  if ((long)pppppplStack_2d0 < 0) {
    __ZdlPv(pppppppuStack_2e0);
  }
  FUN_10a1e67f8(param_1 + -0x10,param_2);
LAB_10ac5db30:
  if (lStack_378 < 0) {
    __ZdlPv(uStack_388);
  }
  if (lStack_390 < 0) {
    __ZdlPv(uStack_3a0);
  }
  return;
}



/* Entry: 10ac5edb0; end: 10ac5ee43;  */

void FUN_10ac5edb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_2 + 0x90);
  FUN_10a2421c8();
  uVar2 = *(undefined8 *)(lVar1 + 0x218);
  FUN_10a08d2e0(auStack_48,param_2 + 0xf8);
  FUN_10a1e69e4(param_2);
  FUN_10a241c2c(param_1,uVar2,auStack_48,param_2,param_3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ac5ee44; end: 10ac5f127;  */

void FUN_10ac5ee44(long *param_1,long *param_2)

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a0 [2];
  char cStack_89;
  long lStack_88;
  char cStack_71;
  long lStack_68;
  long lStack_60;
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  plVar5 = &lStack_c0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar3);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c5f9c0);
  if ((int)plVar3 == 0) {
    func_0x000107c2b054(&lStack_68,&UNK_10f69e32c);
    FUN_10a0fed30(aplStack_a0,param_2,&PTR_DAT_110c5f9e0,&lStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(lStack_68);
    }
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60418,0);
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x248))();
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_c0,*plVar4,plVar4[1]);
    }
    else {
      lStack_b8 = plVar4[1];
      lStack_c0 = *plVar4;
      lStack_b0 = plVar4[2];
      plVar5 = plVar4;
    }
    bVar1 = (int)plVar3 != 0;
    if (bVar1) {
      func_0x00010ad03330();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&lStack_c0,plVar5);
    }
    FUN_10a107e2c(&lStack_68,aplStack_a0,&lStack_c0,bVar1);
    FUN_10ac5c210(param_1,&lStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(lStack_68);
    }
    lStack_88 = lStack_c0;
    if (-1 < lStack_b0) goto LAB_10ac5eff8;
  }
  else {
    FUN_10a1e3e54(aplStack_a0);
    (**(code **)(*param_2 + 0x230))(&lStack_68,param_2,&PTR_DAT_110c5f9c0,aplStack_a0);
    FUN_10ac5c210(param_1,&lStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(lStack_68);
    }
    if (-1 < cStack_71) goto LAB_10ac5eff8;
  }
  __ZdlPv(lStack_88);
LAB_10ac5eff8:
  if (cStack_89 < '\0') {
    __ZdlPv(aplStack_a0[0]);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c60438);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x60))(&lStack_68,param_2,&PTR_DAT_110c60438);
    if (lStack_60 != lStack_68) {
      FUN_10a00946c(&UNK_10f69e8ca);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac5f090);
      (*pcVar2)();
    }
    aplStack_a0[0] = &lStack_68;
    FUN_10a0426d8(aplStack_a0);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



/* Entry: 10ac5f128; end: 10ac5f54f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5f46c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5f47c) */

void FUN_10ac5f128(long param_1,long *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 **ppuVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 ***pppuVar9;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pppuStack_70 = (undefined8 ***)&UNK_10f6631f8;
  uStack_68 = 0x1b;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&pppuStack_70);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_hash_110c66bb8,0);
  plVar6 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110ba55f8,&PTR_DAT_110bf30c8,0);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c5f9c0,param_1 + 0xf8);
    goto LAB_10ac5f484;
  }
  if (*(char *)(param_1 + 0x10f) < '\0') {
    func_0x000107c3192c(&pppuStack_70,*(undefined8 *)(param_1 + 0xf8),
                        *(undefined8 *)(param_1 + 0x100));
  }
  else {
    uStack_68 = *(ulong *)(param_1 + 0x100);
    pppuStack_70 = *(undefined8 ****)(param_1 + 0xf8);
    uStack_60 = *(ulong *)(param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x127) < '\0') {
    func_0x000107c3192c(&uStack_58,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118)
                       );
  }
  else {
    uStack_50 = *(undefined8 *)(param_1 + 0x118);
    uStack_58 = *(undefined8 *)(param_1 + 0x110);
    uStack_48 = *(undefined8 *)(param_1 + 0x120);
  }
  uStack_40 = *(undefined4 *)(param_1 + 0x128);
  lVar4 = *(long *)(param_1 + 0x90);
  FUN_10a2421c8();
  uVar5 = *(undefined8 *)(lVar4 + 0x228);
  FUN_10ac5df10(uVar5,&pppuStack_70);
  if ((int)uVar5 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      FUN_10a08d2e0(&pppuStack_b0,param_1 + 0xf8);
      ppppuVar7 = (undefined8 ****)pppuStack_b0;
      if (-1 < (long)uStack_a0) {
        ppppuVar7 = &pppuStack_b0;
      }
      func_0x00010ae06f08(1,2,&UNK_10f69e591,&UNK_10f69e8ee,0x27f,&UNK_10f69e95b,in_x6,in_x7,
                          ppppuVar7);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(pppuStack_b0);
      }
    }
  }
  else {
    uVar2 = uStack_68;
    ppppuVar7 = (undefined8 ****)pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar2 = uStack_60 >> 0x38;
      ppppuVar7 = &pppuStack_70;
    }
    FUN_10ad03cf0(&pppuStack_b0,ppppuVar7,uVar2);
    func_0x000107c2c4d8(&pppuStack_70,pppuStack_b0,uStack_a8);
    if (uStack_a8 != 0) {
      (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c60458,&pppuStack_70);
    }
  }
  plVar6 = *(long **)(lVar4 + 0x228);
  (**(code **)(*plVar6 + 0x68))();
  bVar3 = *(byte *)((long)plVar6 + 0x5f);
  uVar2 = plVar6[10];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 != 3) goto LAB_10ac5f484;
  ppppuVar7 = (undefined8 ****)(plVar6 + 9);
  ppppuVar1 = (undefined8 ****)*ppppuVar7;
  if (-1 < (char)bVar3) {
    ppppuVar1 = ppppuVar7;
  }
  if ((*(short *)ppppuVar1 != 0x7073 || *(char *)((long)ppppuVar1 + 2) != 'v') ||
     (FUN_10a08fd8c(), ((uint)ppppuVar7 >> 8 & 1) == 0)) goto LAB_10ac5f484;
  if (*(char *)(param_1 + 0x10f) < '\0') {
    ppppuVar7 = &pppuStack_b0;
    func_0x000107c3192c(ppppuVar7,*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100));
  }
  else {
    uStack_a8 = *(ulong *)(param_1 + 0x100);
    pppuStack_b0 = *(undefined8 ****)(param_1 + 0xf8);
    uStack_a0 = *(ulong *)(param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x127) < '\0') {
    ppppuVar7 = (undefined8 ****)&ppuStack_98;
    func_0x000107c3192c(ppppuVar7,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118))
    ;
  }
  else {
    uStack_90 = *(undefined8 *)(param_1 + 0x118);
    ppuStack_98 = *(undefined8 ***)(param_1 + 0x110);
    lStack_88 = *(long *)(param_1 + 0x120);
  }
  uStack_80 = *(undefined4 *)(param_1 + 0x128);
  FUN_10a3ca004();
  pppuVar9 = ppppuVar7[0xb];
  if (pppuVar9 == (undefined8 ***)0x0) {
    FUN_10a3ca05c(ppppuVar7,4);
    pppuVar9 = ppppuVar7[0xb];
    if (pppuVar9 != (undefined8 ***)0x0) goto LAB_10ac5f3e0;
  }
  else {
LAB_10ac5f3e0:
    ppuVar8 = pppuVar9[0x45];
    FUN_10ac5df10(ppuVar8,&pppuStack_b0);
    if ((int)ppuVar8 != 0) {
      uVar2 = uStack_a8;
      ppppuVar7 = (undefined8 ****)pppuStack_b0;
      if (-1 < (long)uStack_a0) {
        uVar2 = uStack_a0 >> 0x38;
        ppppuVar7 = &pppuStack_b0;
      }
      FUN_10ad03cf0(&uStack_d0,ppppuVar7,uVar2);
      func_0x000107c2c4d8(&pppuStack_b0,uStack_d0,lStack_c8);
      if (lStack_c8 != 0) {
        (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c60458,&pppuStack_b0);
      }
    }
  }
  if (lStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if ((long)uStack_a0 < 0) {
    __ZdlPv(pppuStack_b0);
  }
LAB_10ac5f484:
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c5f9e0,param_1 + 0xf8);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60418,*(int *)(param_1 + 0x128) == 1);
  return;
}



/* Entry: 10ac5f550; end: 10ac5f563;  */

undefined4 FUN_10ac5f550(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10ac5f564; end: 10ac5f5bf;  */

void FUN_10ac5f564(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ac5f5c0; end: 10ac5f653;  */

undefined1  [16] FUN_10ac5f5c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f69f71a;
  return auVar1;
}



/* Entry: 10ac5f654; end: 10ac5f6ab;  */

void FUN_10ac5f654(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f69e32c;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac5f6ac(param_1,&uStack_58);
  FUN_10ac7d170();
  return;
}



/* Entry: 10ac5f6ac; end: 10ac5f783;  */

/* WARNING: Removing unreachable block (ram,0x00010ac5f744) */

undefined1  [16] FUN_10ac5f6ac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69f71a,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac7d074(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac5f784; end: 10ac5f913;  */

undefined8 * FUN_10ac5f784(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x6c] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x6f) = 0x100;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c60728,param_2);
  FUN_10a1e394c(puVar1 + 0x51);
  *param_1 = &PTR_FUN_110c60490;
  param_1[2] = &PTR_FUN_110c605e0;
  param_1[5] = &PTR_DAT_110c60610;
  param_1[0x6c] = &PTR_DAT_110c606e8;
  param_1[0x15] = &PTR_DAT_110c60668;
  param_1[0x5b] = &PTR_DAT_110c60688;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x5c] = puVar1 + 3;
  param_1[0x5d] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x5c);
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = param_3;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  if ((param_2 != 0) && (lVar2 = param_1[0x5c], lVar2 != 0)) {
    FUN_10a5ae998(lVar2,&PTR_DAT_110bd31b0,param_2,param_1 + 0x5b);
  }
  return param_1;
}



/* Entry: 10ac5f914; end: 10ac5fa9b;  */

undefined8 * FUN_10ac5f914(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c60490;
  param_1[2] = &PTR_FUN_110c605e0;
  param_1[5] = &PTR_DAT_110c60610;
  param_1[0x6c] = &PTR_DAT_110c606e8;
  param_1[0x15] = &PTR_DAT_110c60668;
  param_1[0x5b] = &PTR_DAT_110c60688;
  if (param_1[0x60] != 0) {
    func_0x00010a254334();
    FUN_10a254398(param_1[0x60]);
  }
  if (param_1[100] != 0) {
    func_0x00010a254334();
    FUN_10a254398(param_1[100]);
  }
  if ((param_1[0x5c] != 0) && (param_1[0x12] != 0)) {
    FUN_10a5ae930();
  }
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    __ZdlPv(param_1[0x68]);
  }
  func_0x00010a0523dc(param_1 + 0x66);
  FUN_10a1cbb34(param_1 + 100);
  func_0x00010a0523dc(param_1 + 0x62);
  FUN_10a1cbb34(param_1 + 0x60);
  func_0x00010a004e5c(param_1 + 0x5c);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c63f28;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6c] = &PTR_DAT_110c64088;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c640d8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6c] = &PTR_DAT_110c641a8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5fa9c; end: 10ac5facf;  */

undefined8 * FUN_10ac5fa9c(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c60490;
  param_1[2] = &PTR_FUN_110c605e0;
  param_1[5] = &PTR_DAT_110c60610;
  param_1[0x6c] = &PTR_DAT_110c606e8;
  param_1[0x15] = &PTR_DAT_110c60668;
  param_1[0x5b] = &PTR_DAT_110c60688;
  if (param_1[0x60] != 0) {
    func_0x00010a254334();
    FUN_10a254398(param_1[0x60]);
  }
  if (param_1[100] != 0) {
    func_0x00010a254334();
    FUN_10a254398(param_1[100]);
  }
  if ((param_1[0x5c] != 0) && (param_1[0x12] != 0)) {
    FUN_10a5ae930();
  }
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    __ZdlPv(param_1[0x68]);
  }
  func_0x00010a0523dc(param_1 + 0x66);
  FUN_10a1cbb34(param_1 + 100);
  func_0x00010a0523dc(param_1 + 0x62);
  FUN_10a1cbb34(param_1 + 0x60);
  func_0x00010a004e5c(param_1 + 0x5c);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c63f28;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6c] = &PTR_DAT_110c64088;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c640d8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6c] = &PTR_DAT_110c641a8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac5fad0; end: 10ac5fb43;  */

void FUN_10ac5fad0(void)

{
  FUN_10ac5f914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac5fb44; end: 10ac5fb73;  */

void FUN_10ac5fb44(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac5f914((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac5fb74; end: 10ac5fd4b;  */

void FUN_10ac5fb74(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  uint uStack_50;
  
  puVar3 = (undefined8 *)0x398;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110c5f240;
  puVar1 = puVar3 + 3;
  FUN_10ac5f784(puVar1,param_2,param_4);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  FUN_10ac459f4(param_1,puVar3 + 0xb,puVar1);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*param_3,param_3[1]);
  }
  else {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    lStack_70 = param_3[2];
  }
  bVar2 = *(byte *)((long)param_3 + 0x2f);
  if ((char)bVar2 < '\0') {
    func_0x000107c3192c(&uStack_68,param_3[3],param_3[4]);
    bVar2 = *(byte *)((long)param_3 + 0x2f);
    uStack_50 = *(uint *)(param_3 + 6);
    if (-1 < (char)bVar2) goto LAB_10ac5fc54;
    uVar4 = uStack_50;
    if (param_3[4] != 0) goto LAB_10ac5fca8;
  }
  else {
    uStack_60 = param_3[4];
    uStack_68 = param_3[3];
    lStack_58 = param_3[5];
    uStack_50 = *(uint *)(param_3 + 6);
LAB_10ac5fc54:
    uVar4 = bVar2 | uStack_50;
  }
  if (uVar4 == 0) {
    lVar5 = *param_1;
    if (*(char *)(lVar5 + 0x8f) < '\0') {
      func_0x000107c3192c(&uStack_a0,*(undefined8 *)(lVar5 + 0x78),*(undefined8 *)(lVar5 + 0x80));
    }
    else {
      uStack_98 = *(undefined8 *)(lVar5 + 0x80);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x78);
      lStack_90 = *(long *)(lVar5 + 0x88);
    }
    if (lStack_58 < 0) {
      __ZdlPv(uStack_68);
    }
    uStack_60 = uStack_98;
    uStack_68 = uStack_a0;
    lStack_58 = lStack_90;
  }
LAB_10ac5fca8:
  FUN_10ac5fd4c(*param_1,&uStack_80);
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  return;
}



/* Entry: 10ac5fd4c; end: 10ac60023;  */

void FUN_10ac5fd4c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  int *piVar12;
  long *plVar13;
  uint *puVar14;
  undefined8 **ppuStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined1 uStack_41;
  
  plVar13 = (long *)(param_1 + 0x290);
  if ((int)param_2[6] == *(int *)(param_1 + 0x2c0)) {
    bVar9 = *(byte *)((long)param_2 + 0x17);
    uVar4 = param_2[1];
    if (-1 < (char)bVar9) {
      uVar4 = (ulong)bVar9;
    }
    bVar10 = *(byte *)(param_1 + 0x2a7);
    uVar5 = *(ulong *)(param_1 + 0x298);
    if (-1 < (char)bVar10) {
      uVar5 = (ulong)bVar10;
    }
    if (uVar4 == uVar5) {
      plVar11 = (long *)*param_2;
      if (-1 < (char)bVar9) {
        plVar11 = param_2;
      }
      plVar3 = (long *)*plVar13;
      if (-1 < (char)bVar10) {
        plVar3 = plVar13;
      }
      _memcmp(plVar11,plVar3);
      if ((int)plVar11 == 0) {
        bVar9 = *(byte *)((long)param_2 + 0x2f);
        uVar4 = param_2[4];
        if (-1 < (char)bVar9) {
          uVar4 = (ulong)bVar9;
        }
        bVar10 = *(byte *)(param_1 + 0x2bf);
        uVar5 = *(ulong *)(param_1 + 0x2b0);
        if (-1 < (char)bVar10) {
          uVar5 = (ulong)bVar10;
        }
        if (uVar4 == uVar5) {
          plVar11 = (long *)param_2[3];
          if (-1 < (char)bVar9) {
            plVar11 = param_2 + 3;
          }
          lVar6 = *(long *)(param_1 + 0x2a8);
          if (-1 < (char)bVar10) {
            lVar6 = param_1 + 0x2a8;
          }
          _memcmp(plVar11,lVar6);
          if ((int)plVar11 == 0) {
            return;
          }
        }
      }
    }
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  func_0x00010a1ec8c8(param_1);
  func_0x00010ac6047c(param_1 + 0x300);
  func_0x00010ac6047c(param_1 + 800);
  FUN_10a1e4260(param_1 + 0x288,param_2);
  if (*(char *)(param_1 + 0x357) < '\0') {
    **(undefined1 **)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x340) = 0;
    *(undefined1 *)(param_1 + 0x357) = 0;
  }
  if ((*(byte *)(param_1 + 0x2f8) >> 1 & 1) == 0) {
    piVar12 = (int *)0x1138350e8;
    FUN_10a1d5d54();
    if (uRam00000001138350e0 != 0 || *piVar12 != 0) {
      FUN_10a08d2e0(&ppuStack_60,plVar13);
      uVar4 = uStack_58;
      if (-1 < (char)bStack_49) {
        uVar4 = (ulong)bStack_49;
      }
      FUN_10a003c90(&ppuStack_78,uVar4 + 0xc,&uStack_41);
      pppuVar7 = (undefined8 ***)ppuStack_78;
      if (-1 < cStack_61) {
        pppuVar7 = &ppuStack_78;
      }
      if (uVar4 != 0) {
        pppuVar8 = (undefined8 ***)ppuStack_60;
        if (-1 < (char)bStack_49) {
          pppuVar8 = &ppuStack_60;
        }
        _memmove(pppuVar7,pppuVar8,uVar4);
      }
      plVar13 = (long *)(param_1 + 0x340);
      puVar1 = (undefined8 *)((long)pppuVar7 + uVar4);
      *puVar1 = 0x776569766572702e;
      *(undefined4 *)(puVar1 + 1) = 0x7276702e;
      *(undefined1 *)((long)puVar1 + 0xc) = 0;
      if (*(char *)(param_1 + 0x357) < '\0') {
        __ZdlPv(*plVar13);
      }
      *(undefined8 *)(param_1 + 0x348) = uStack_70;
      *plVar13 = (long)ppuStack_78;
      *(ulong *)(param_1 + 0x350) = CONCAT17(cStack_61,uStack_68);
      FUN_10ad01a04();
      if (((ulong)plVar13 & 1) == 0) {
        if (*(char *)(param_1 + 0x357) < '\0') {
          **(undefined1 **)(param_1 + 0x340) = 0;
          *(undefined8 *)(param_1 + 0x348) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x340) = 0;
          *(undefined1 *)(param_1 + 0x357) = 0;
        }
      }
      else {
        puVar14 = (uint *)0x1138350e8;
        FUN_10a1d5d54();
        uVar2 = *puVar14;
        if (uRam00000001138350e0 != 0) {
          uVar2 = uRam00000001138350e0;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          FUN_10ac604d8(param_1);
        }
      }
      if ((char)bStack_49 < '\0') {
        __ZdlPv(ppuStack_60);
      }
    }
  }
  if (*(char *)(param_1 + 0x357) < '\0') {
    if (*(long *)(param_1 + 0x348) != 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x357) != '\0') {
    return;
  }
  FUN_10ac607ec(param_1,0);
  return;
}



/* Entry: 10ac60024; end: 10ac60303;  */

void FUN_10ac60024(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 uStack_88;
  char cStack_71;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_s_hash_110c66bb8,0);
  *(long **)(param_1 + 0x2f0) = plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60750,1);
  if (((ulong)plVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 4;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60770,0);
  if ((int)plVar1 != 0) {
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 1;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c60790,0);
  if ((int)plVar1 != 0) {
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 2;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c5f9c0);
  if ((int)plVar1 == 0) {
    func_0x000107c2b054(auStack_68,&UNK_10f69e32c);
    FUN_10a0fed30(auStack_a0,param_2,&PTR_DAT_110c5f9e0,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    plVar1 = param_2;
    (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c607b0,0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    lStack_a8 = 0;
    if ((int)plVar1 == 0) {
      (**(code **)(*param_2 + 0x248))(param_2);
LAB_10ac6020c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_b8,param_2);
    }
    else if ((int)plVar1 == 1) {
      param_2 = plVar1;
      func_0x00010ad03330();
      goto LAB_10ac6020c;
    }
    FUN_10a107e2c(auStack_68,auStack_a0,&uStack_b8,plVar1);
    FUN_10ac5fd4c(param_1,auStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    uStack_88 = uStack_b8;
    if (-1 < lStack_a8) goto LAB_10ac60264;
  }
  else {
    FUN_10a1e3e54(auStack_a0);
    (**(code **)(*param_2 + 0x230))(auStack_68,param_2,&PTR_DAT_110c5f9c0,auStack_a0);
    FUN_10ac5fd4c(param_1,auStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    if (-1 < cStack_71) goto LAB_10ac60264;
  }
  __ZdlPv(uStack_88);
LAB_10ac60264:
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  return;
}



/* Entry: 10ac60304; end: 10ac604d7;  */

void FUN_10ac60304(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f69f71a;
  uStack_28 = 0x1c;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_hash_110c66bb8,*(undefined8 *)(param_1 + 0x2f0));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60750,(*(uint *)(param_1 + 0x2f8) & 4) == 0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60770,*(uint *)(param_1 + 0x2f8) & 1);
  if ((*(byte *)(param_1 + 0x2f8) >> 1 & 1) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c60790,1);
  }
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c5f9c0,param_1 + 0x290);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c5f9e0,param_1 + 0x290);
  (**(code **)(*param_2 + 0x1a0))(param_2,&PTR_DAT_110c607b0,*(int *)(param_1 + 0x2c0) == 1);
  return;
}



/* Entry: 10ac604d8; end: 10ac607eb;  */

void FUN_10ac604d8(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_200 [8];
  long *plStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  long lStack_1d0;
  char cStack_1c8;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 uStack_108;
  long lStack_100;
  char cStack_f8;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 800) == 0) {
    if (*(char *)(param_1 + 0x357) < '\0') {
      if (*(long *)(param_1 + 0x348) == 0) goto LAB_10ac605a8;
    }
    else if (*(char *)(param_1 + 0x357) == '\0') {
LAB_10ac605a8:
      bVar5 = false;
      goto LAB_10ac6077c;
    }
    lVar6 = *(long *)(param_1 + 0x90);
    FUN_10a2421c8();
    lVar11 = *(long *)(lVar6 + 0x1d0);
    puStack_120 = &UNK_10f646e68;
    uStack_118 = 0x20;
    if (lVar11 != 0) {
      plVar7 = *(long **)(lVar6 + 0x228);
      (**(code **)(*plVar7 + 0x68))();
      ppuVar8 = &PTR___tlv_bootstrap_11340df18;
      (*(code *)PTR___tlv_bootstrap_11340df18)();
      puVar3 = *ppuVar8;
      lVar9 = *(long *)(param_1 + 0x90);
      lVar10 = *(long *)(lVar9 + 0x100);
      if (*(char *)(lVar10 + 0x21f) < '\0') {
        func_0x000107c3192c(&puStack_120,*(undefined8 *)(lVar10 + 0x208),
                            *(undefined8 *)(lVar10 + 0x210));
      }
      else {
        uStack_118 = *(undefined8 *)(lVar10 + 0x210);
        puStack_120 = *(undefined **)(lVar10 + 0x208);
        lStack_110 = *(long *)(lVar10 + 0x218);
      }
      uStack_108 = 0;
      cStack_f8 = '\0';
      uStack_f0 = 0;
      uStack_ec = (undefined2)plVar7[0x12];
      if (lVar9 == 0 || ((ulong)puVar3 & 1) != 0) {
        ppuStack_170 = &PTR_PTR_1132fed50;
        ppuStack_e8 = &PTR_PTR_1132fed50;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x90);
        if ((*(byte *)(lVar9 + 0x1a8) & 1) == 0) goto LAB_10ac607bc;
        ppuStack_e8 = *(undefined ***)(lVar9 + 0x160);
        if ((*(byte *)(lVar9 + 0x1f8) & 1) == 0) goto LAB_10ac607bc;
        ppuStack_170 = *(undefined ***)(lVar9 + 0x1b0);
      }
      uStack_1e8 = uStack_118;
      puStack_1f0 = puStack_120;
      lStack_1e0 = lStack_110;
      puStack_120 = (undefined *)0x0;
      uStack_118 = 0;
      uStack_1d8 = 0;
      cStack_1c8 = '\0';
      uStack_1c0 = 0;
      puStack_1b0 = &UNK_1053a6a3c;
      lStack_110 = 0;
      puStack_e0 = &UNK_1053a6a3c;
      ppuStack_d8 = &PTR_DAT_110ae9180;
      puStack_98 = &UNK_1053a6a3c;
      ppuStack_1a8 = &PTR_DAT_110ae9180;
      puStack_168 = &UNK_1053a6a3c;
      ppuStack_160 = &PTR_DAT_110ae9180;
      ppuStack_90 = &PTR_DAT_110ae9180;
      uStack_1bc = uStack_ec;
      ppuStack_1b8 = ppuStack_e8;
      ppuStack_a0 = ppuStack_170;
      FUN_10a254654(auStack_200,lVar11,lVar6,0,param_1 + 0x340,&puStack_1f0);
      plVar7 = (long *)(param_1 + 800);
      FUN_10a2567e8(plVar7,auStack_200);
      if (plStack_1f8 != (long *)0x0) {
        plVar1 = plStack_1f8 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f8);
        }
      }
      func_0x0001092ba41c(&ppuStack_170);
      func_0x0001092ba41c(&ppuStack_1b8);
      if ((cStack_1c8 == '\x01') && (lStack_1d0 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_1e0 < 0) {
        __ZdlPv(puStack_1f0);
      }
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        FUN_10a1da3a4(param_1,*(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x34),
                      *(undefined4 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x44),
                      *(undefined4 *)(lVar6 + 0x48),0,*(undefined4 *)(lVar6 + 0x40));
      }
      func_0x0001092ba41c(&ppuStack_a0);
      func_0x0001092ba41c(&ppuStack_e8);
      if ((cStack_f8 == '\x01') && (lStack_100 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_110 < 0) {
        __ZdlPv(puStack_120);
      }
      bVar5 = *plVar7 != 0;
      goto LAB_10ac6077c;
    }
  }
  else {
    bVar5 = true;
LAB_10ac6077c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail(bVar5);
  }
  FUN_10a0edfc4(&puStack_120);
LAB_10ac607bc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac607c0);
  (*pcVar4)();
}



/* Entry: 10ac607ec; end: 10ac60d93;  */

void FUN_10ac607ec(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  long *plVar9;
  undefined **ppuVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  undefined ***pppuStack_2e8;
  undefined1 auStack_2d8 [36];
  undefined1 auStack_2b4 [36];
  uint auStack_290 [10];
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined *puStack_250;
  undefined8 uStack_248;
  long lStack_240;
  ulong uStack_238;
  long lStack_230;
  char cStack_228;
  uint uStack_220;
  undefined2 uStack_21c;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined **appuStack_208 [7];
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined **appuStack_1c0 [8];
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  char cStack_118;
  uint uStack_110;
  undefined2 uStack_10c;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **appuStack_f8 [7];
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x60] == 0) {
    lVar12 = (long)*(char *)((long)param_1 + 0x2a7);
    if (lVar12 < 0) {
      lVar12 = param_1[0x53];
    }
    if (lVar12 == 0) goto LAB_10ac60824;
    if (*(char *)((long)param_1 + 0x357) < '\0') {
      if (param_1[0x69] != 0) goto LAB_10ac6088c;
    }
    else if (*(char *)((long)param_1 + 0x357) != '\0') {
LAB_10ac6088c:
      puVar8 = (uint *)0x1138350e8;
      FUN_10a1d5d54();
      uVar3 = *puVar8;
      if (uRam00000001138350e0 != 0) {
        uVar3 = uRam00000001138350e0;
      }
      if ((uVar3 >> 5 & 1) != 0) goto LAB_10ac60824;
    }
    bVar11 = 0;
    if (param_1[0x12] != 0) {
      bVar11 = *(byte *)(param_1[0x12] + 0xe2a);
    }
    lVar12 = (long)*(char *)((long)param_1 + 0x357);
    if (lVar12 < 0) {
      lVar12 = param_1[0x69];
    }
    if (((lVar12 != 0 & bVar11) != 0) || (plVar1 = param_1 + 0x60, *plVar1 != 0))
    goto LAB_10ac60824;
    FUN_10a08d2e0(auStack_268,param_1 + 0x52);
    lVar12 = param_1[0x12];
    FUN_10a2421c8();
    lVar17 = *(long *)(lVar12 + 0x1d0);
    puStack_140 = &UNK_10f646e68;
    uStack_138 = 0x20;
    if (lVar17 != 0) {
      plVar9 = *(long **)(lVar12 + 0x228);
      (**(code **)(*plVar9 + 0x68))();
      uVar3 = *(uint *)(param_1 + 0x5f);
      ppuVar10 = &PTR___tlv_bootstrap_11340df18;
      (*(code *)PTR___tlv_bootstrap_11340df18)();
      bVar7 = true;
      if (((param_2 & 1) == 0) && (((ulong)*ppuVar10 & 1) == 0)) {
        bVar7 = param_1[0x12] == 0;
      }
      lVar13 = param_1[100];
      if ((uVar3 & 5) == 0) {
        lVar18 = param_1[0x5e];
      }
      else {
        lVar18 = 0;
      }
      if (param_1[0x12] == 0) {
        puStack_140 = (undefined *)0x0;
        uStack_138 = 0;
        lStack_130 = 0;
      }
      else {
        lVar14 = *(long *)(param_1[0x12] + 0x100);
        if (*(char *)(lVar14 + 0x21f) < '\0') {
          func_0x000107c3192c(&puStack_140,*(undefined8 *)(lVar14 + 0x208),
                              *(undefined8 *)(lVar14 + 0x210));
        }
        else {
          uStack_138 = *(undefined8 *)(lVar14 + 0x210);
          puStack_140 = *(undefined **)(lVar14 + 0x208);
          lStack_130 = *(long *)(lVar14 + 0x218);
        }
      }
      uStack_110 = uVar3 & 1;
      uStack_128 = param_1[0x4d];
      lStack_120 = param_1[0x4e];
      if (lStack_120 != 0) {
        plVar2 = (long *)(lStack_120 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      cStack_118 = '\x01';
      uStack_10c = (undefined2)plVar9[0x12];
      if (bVar7) {
        ppuStack_108 = &PTR_PTR_1132fed50;
        puStack_100 = &UNK_1053a6a3c;
        appuStack_f8[0] = &PTR_DAT_110ae9180;
        ppuStack_c0 = &PTR_PTR_1132fed50;
        puStack_b8 = &UNK_1053a6a3c;
        appuStack_b0[0] = &PTR_DAT_110ae9180;
      }
      else {
        lVar14 = param_1[0x12];
        if ((uVar3 & 0x10) == 0 && lVar13 == 0) {
          if ((*(byte *)(lVar14 + 0x1a8) & 1) == 0) goto LAB_10ac60d38;
          ppuStack_108 = *(undefined ***)(lVar14 + 0x160);
        }
        else {
          if ((*(byte *)(lVar14 + 0x158) & 1) == 0) goto LAB_10ac60d38;
          ppuStack_108 = *(undefined ***)(lVar14 + 0x110);
        }
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        puStack_180 = &UNK_1053a6a3c;
        ppuStack_178 = &PTR_DAT_110ae9180;
        puStack_100 = &UNK_1053a6a3c;
        appuStack_f8[0] = &PTR_DAT_110ae9180;
        if ((*(byte *)(lVar14 + 0x1f8) & 1) == 0) goto LAB_10ac60d38;
        ppuStack_c0 = *(undefined ***)(lVar14 + 0x1b0);
        puStack_b8 = &UNK_1053a6a3c;
        appuStack_b0[0] = &PTR_DAT_110ae9180;
        (*(code *)&DAT_1092ba40c)(&ppuStack_178);
      }
      pppuStack_2e8 = &ppuStack_c0;
      uStack_248 = uStack_138;
      puStack_250 = puStack_140;
      lStack_240 = lStack_130;
      puStack_140 = (undefined *)0x0;
      uStack_138 = 0;
      lStack_130 = 0;
      uStack_238 = uStack_238 & 0xffffffffffffff00;
      cStack_228 = '\0';
      if (cStack_118 == '\x01') {
        lStack_230 = lStack_120;
        uStack_238 = uStack_128;
        uStack_128 = 0;
        lStack_120 = 0;
        cStack_228 = cStack_118;
      }
      uStack_220 = uStack_110;
      uStack_21c = uStack_10c;
      ppuStack_218 = ppuStack_108;
      puStack_210 = puStack_100;
      appuStack_208[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_f8[0][2])(appuStack_208,appuStack_f8);
      puStack_100 = &UNK_1053a6a3c;
      (*(code *)*appuStack_f8[0])(appuStack_f8);
      appuStack_f8[0] = &PTR_DAT_110ae9180;
      ppuStack_1d0 = ppuStack_c0;
      puStack_1c8 = puStack_b8;
      appuStack_1c0[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_b0[0][2])(appuStack_1c0,appuStack_b0);
      puStack_b8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_b0[0])(appuStack_b0);
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      FUN_10a254654(auStack_290,lVar17,lVar12,lVar18,auStack_268,&puStack_250);
      FUN_10a2567e8(plVar1,auStack_290);
      plVar9 = (long *)CONCAT44(auStack_290[3],auStack_290[2]);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
        do {
          lVar12 = *plVar2;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x0001092ba41c(&ppuStack_1d0);
      func_0x0001092ba41c(&ppuStack_218);
      if ((cStack_228 == '\x01') && (lStack_230 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_240 < 0) {
        __ZdlPv(puStack_250);
      }
      lVar12 = *plVar1;
      if (lVar12 != 0) {
        if (((*(byte *)(param_1 + 0x5f) >> 3 & 1) == 0) && (*(int *)(lVar12 + 0x4c) != 8)) {
LAB_10ac60cac:
          puVar15 = (undefined4 *)(lVar12 + 0x30);
          puVar16 = (undefined4 *)(lVar12 + 0x34);
        }
        else {
          uVar3 = *(uint *)(lVar12 + 0x3c);
          auStack_290[3] = 0;
          auStack_290[4] = 0;
          auStack_290[1] = 0;
          auStack_290[2] = 0;
          auStack_290[7] = 0;
          auStack_290[5] = 0;
          auStack_290[6] = 0;
          auStack_290[8] = 1;
          auStack_290[9] = 0;
          auStack_290[0] = uVar3;
          FUN_10ac60d94(auStack_2b4,auStack_290);
          (**(code **)(*param_1 + 0x90))(auStack_2d8,param_1);
          (**(code **)(*param_1 + 0x98))(param_1,auStack_2b4);
          lVar12 = *plVar1;
          if ((uVar3 & 1) == 0) goto LAB_10ac60cac;
          puVar15 = (undefined4 *)(lVar12 + 0x34);
          puVar16 = (undefined4 *)(lVar12 + 0x30);
        }
        FUN_10a1da3a4(param_1,*puVar15,*puVar16,*(undefined4 *)(lVar12 + 0x38),
                      *(undefined4 *)(lVar12 + 0x44),*(undefined4 *)(lVar12 + 0x48),0,
                      *(undefined4 *)(lVar12 + 0x40));
      }
      func_0x0001092ba41c(pppuStack_2e8);
      func_0x0001092ba41c(&ppuStack_108);
      if ((cStack_118 == '\x01') && (lStack_120 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      if (cStack_251 < '\0') {
        __ZdlPv(auStack_268[0]);
      }
      goto LAB_10ac60824;
    }
  }
  else {
LAB_10ac60824:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&puStack_140);
LAB_10ac60d38:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac60d3c);
  (*pcVar6)();
}



/* Entry: 10ac60d94; end: 10ac60ea7;  */

void FUN_10ac60d94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  
  FUN_10a19e730(&uStack_60,param_2,0,1);
  *param_1 = uStack_60;
  *(undefined4 *)(param_1 + 1) = uStack_58;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_50;
  *(undefined4 *)(param_1 + 4) = uStack_38;
  param_1[3] = uStack_30;
  param_1[2] = uStack_4c;
  return;
}



/* Entry: 10ac60ea8; end: 10ac60eaf;  */

void FUN_10ac60ea8(long param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0x297) < '\0') {
    if (*(long *)(param_1 + 0x288) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x297) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x347) < '\0') {
    if (*(long *)(param_1 + 0x338) != 0) goto LAB_10ac60e3c;
  }
  else if (*(char *)(param_1 + 0x347) != '\0') {
LAB_10ac60e3c:
    puVar7 = (uint *)0x1138350e8;
    FUN_10a1d5d54();
    uVar2 = *puVar7;
    if (uRam00000001138350e0 != 0) {
      uVar2 = uRam00000001138350e0;
    }
    if ((uVar2 & 0x38) != 0) goto joined_r0x00010ac60e7c;
  }
  FUN_10ac607ec(param_1 + -0x10,0);
joined_r0x00010ac60e7c:
  if ((param_2 != 0) &&
     ((plVar8 = *(long **)(param_1 + 0x310), plVar8 != (long *)0x0 ||
      (plVar8 = *(long **)(param_1 + 0x2f0), plVar8 != (long *)0x0)))) {
    if (*plVar8 != 0) {
      plVar6 = plVar8;
      plStack_30 = plVar8;
      __ZSt19uncaught_exceptionsv();
      uStack_28 = SUB84(plVar6,0);
      FUN_109d1a244(plVar8);
      func_0x0001092af8bc(plVar8);
      lVar9 = *plVar8;
      if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a25449c);
        (*pcVar5)();
      }
      plVar12 = *(long **)(lVar9 + 0xa0);
      uVar11 = *(undefined8 *)(lVar9 + 0x98);
      *(undefined8 *)(lVar9 + 0x98) = 0;
      *(undefined8 *)(lVar9 + 0xa0) = 0;
      plVar6 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      uStack_40 = uVar11;
      plStack_38 = plVar12;
      FUN_10a00e5c4(plVar8 + 2,&uStack_40);
      plVar8 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar9 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x00010a258714(&plStack_30);
    }
    return;
  }
  return;
}



/* Entry: 10ac60eb0; end: 10ac61027;  */

long * FUN_10ac60eb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar7 = (long *)(param_1 + 0x310);
  if (*(long *)(param_1 + 0x310) == 0) {
    lVar6 = *(long *)(param_1 + 0x300);
    if ((lVar6 != 0) && (func_0x00010a2586a8(), (int)lVar6 == 2)) {
      lVar6 = *(long *)(param_1 + 0x300);
      FUN_10a254398(lVar6);
      plStack_38 = *(long **)(lVar6 + 0x18);
      uStack_40 = *(undefined8 *)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x18) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a00e5c4(plVar7,&uStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (*plVar7 != 0) {
        return plVar7;
      }
    }
    plVar7 = (long *)(param_1 + 0x330);
    if (((*(long *)(param_1 + 0x330) == 0) && (lVar6 = *(long *)(param_1 + 800), lVar6 != 0)) &&
       (func_0x00010a2586a8(), (int)lVar6 == 2)) {
      lVar6 = *(long *)(param_1 + 800);
      FUN_10a254398(lVar6);
      plStack_38 = *(long **)(lVar6 + 0x18);
      uStack_40 = *(undefined8 *)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x18) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a00e5c4(plVar7,&uStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x358);
    if (*(long *)(param_1 + 0x330) != 0) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x358) = iVar3;
  }
  return plVar7;
}



/* Entry: 10ac61028; end: 10ac6104b;  */

undefined1 FUN_10ac61028(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 800);
  if ((plVar2 == (long *)0x0) && (plVar2 = *(long **)(param_1 + 0x300), plVar2 == (long *)0x0)) {
    return 0;
  }
  if (plVar2[2] != 0) {
    return 2;
  }
  if (*plVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (((uint)*(undefined8 *)(*plVar2 + 0x10) >> 1 & 1) != 0) {
      FUN_10a254398(plVar2);
    }
    if (plVar2[2] == 0) {
      uVar1 = *plVar2 != 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 10ac6104c; end: 10ac610c7;  */

void FUN_10ac6104c(long param_1,undefined8 param_2)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  FUN_10a107e2c(auStack_58,param_2,*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x220,0);
  FUN_10ac5fd4c(param_1,auStack_58);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10ac610c8; end: 10ac610d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a1ecea8) */
/* WARNING: Removing unreachable block (ram,0x00010a1ece98) */
/* WARNING: Removing unreachable block (ram,0x00010a1ecf08) */

void FUN_10ac610c8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010989f98c(auStack_58,param_2 + 5);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_e8,uVar1 + 9,&ppuStack_100);
  pppuVar2 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar2 = appuStack_e8;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar2,auStack_58,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x3a68746469772020;
  *(undefined2 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0x20;
  (**(code **)(*param_2 + 0xb0))(param_2);
  __ZNSt3__19to_stringEj(&ppuStack_100);
  pppuVar2 = (undefined8 ***)ppuStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    pppuVar2 = &ppuStack_100;
  }
  pppuVar4 = appuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar2,uStack_f8);
  puStack_c8 = pppuVar4[1];
  puStack_d0 = *pppuVar4;
  puStack_c0 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&UNK_10f644f1b,10);
  uStack_a8 = ppuVar5[1];
  uStack_b0 = *ppuVar5;
  lStack_a0 = (long)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  (**(code **)(*param_2 + 0xb8))(param_2);
  __ZNSt3__19to_stringEj(&ppuStack_118);
  pppuVar2 = (undefined8 ***)ppuStack_118;
  if (-1 < (char)bStack_101) {
    uStack_110 = (ulong)bStack_101;
    pppuVar2 = &ppuStack_118;
  }
  puVar6 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppuVar2,uStack_110);
  uStack_88 = puVar6[1];
  uStack_90 = *puVar6;
  uStack_80 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f644f26,10);
  uStack_68 = puVar6[1];
  uStack_70 = *puVar6;
  uStack_60 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  (**(code **)(*param_2 + 0xa8))(param_2);
  __ZNSt3__19to_stringEf(&puStack_130);
  ppuVar3 = (undefined1 **)puStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    ppuVar3 = &puStack_130;
  }
  puVar6 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppuVar3,uStack_128);
  uVar7 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar7;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_119 < '\0') {
    __ZdlPv(puStack_130);
  }
  if ((char)bStack_101 < '\0') {
    __ZdlPv(ppuStack_118);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  return;
}



/* Entry: 10ac610d4; end: 10ac6128b;  */

void FUN_10ac610d4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x310) == 0) {
    lVar5 = *(long *)(param_2 + 0x300);
    if ((lVar5 != 0) && (func_0x00010a2586a8(), (int)lVar5 == 2)) {
      lVar5 = *(long *)(param_2 + 0x300);
      FUN_10a254398(lVar5);
      lStack_48 = *(long *)(lVar5 + 0x10);
      plVar2 = *(long **)(lVar5 + 0x18);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_40 = plVar2;
      lStack_38 = lStack_48;
      FUN_10abf8694(param_1,&lStack_38);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
  }
  else {
    lStack_48 = *(long *)(param_2 + 0x310);
    FUN_10abf8694(param_1,&lStack_48);
  }
  if (*(long *)(param_2 + 0x330) == 0) {
    lVar5 = *(long *)(param_2 + 800);
    if ((lVar5 != 0) && (func_0x00010a2586a8(), (int)lVar5 == 2)) {
      lVar5 = *(long *)(param_2 + 800);
      FUN_10a254398(lVar5);
      lStack_48 = *(long *)(lVar5 + 0x10);
      plVar2 = *(long **)(lVar5 + 0x18);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_40 = plVar2;
      lStack_38 = lStack_48;
      FUN_10abf8694(param_1,&lStack_38);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
  }
  else {
    lStack_48 = *(long *)(param_2 + 0x330);
    FUN_10abf8694(param_1,&lStack_48);
  }
  return;
}


