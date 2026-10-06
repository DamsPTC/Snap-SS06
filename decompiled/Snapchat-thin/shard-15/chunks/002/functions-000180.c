/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9a1aac; end: 10b9a1acf;  */

void FUN_10b9a1aac(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b9a1ad0(&uStack_11,param_1);
  return;
}



/* Entry: 10b9a1ad0; end: 10b9a1b4f;  */

void FUN_10b9a1ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x00010b9a1eb8();
  uStack_28 = extraout_x8;
  FUN_10b9a1b6c(auStack_40,1);
  FUN_10b9a1bc4(lStack_30,param_3);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_10b9a1b50(param_1,lVar6 + 0x18);
  FUN_10b9a1d18();
  func_0x00010b9a1e14(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b9a1e40();
  FUN_10b9a1d18();
  func_0x00010b9a1e0c();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b9a1b50;
    lStack_58 = extraout_x8_00[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_60);
    func_0x000107c278ec(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b9a1b50; end: 10b9a1b6b;  */

void FUN_10b9a1b50(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b9a1b6c; end: 10b9a1b93;  */

long FUN_10b9a1b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b9a1b94();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b9a1b94; end: 10b9a1bc3;  */

undefined8 * FUN_10b9a1b94(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    puVar1 = (undefined8 *)(param_2 * 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e888;
  FUN_10b9a1c30(param_1 + 3);
  return param_1;
}



/* Entry: 10b9a1bc4; end: 10b9a1c07;  */

undefined8 * FUN_10b9a1bc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e888;
  FUN_10b9a1c30(param_1 + 3);
  return param_1;
}



/* Entry: 10b9a1c08; end: 10b9a1c0b;  */

void FUN_10b9a1c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9a1c0c; end: 10b9a1c1f;  */

void FUN_10b9a1c0c(void)

{
  FUN_10b9a1c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a1c20; end: 10b9a1c2f;  */

void FUN_10b9a1c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9a1c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9a1c30; end: 10b9a1c9b;  */

undefined8 FUN_10b9a1c30(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_2;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b9ac3c8(param_1,&lStack_28);
  func_0x000104bd4e40(&lStack_28);
  return param_1;
}



/* Entry: 10b9a1c9c; end: 10b9a1cab;  */

void FUN_10b9a1c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9a1cac; end: 10b9a1d17;  */

void FUN_10b9a1cac(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b9a1d18; end: 10b9a1d27;  */

void FUN_10b9a1d18(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9a1d28; end: 10b9a1d4f;  */

undefined8 * FUN_10b9a1d28(undefined8 *param_1)

{
  FUN_10b9a1d50(*param_1);
  return param_1;
}



/* Entry: 10b9a1d50; end: 10b9a1d5b;  */

void FUN_10b9a1d50(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b9a1d5c; end: 10b9a1dcb;  */

void FUN_10b9a1d5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d7ef00,0);
  }
  func_0x00010b9a1d9c();
  *param_1 = lVar1;
  return;
}



/* Entry: 10b9a1dcc; end: 10b9a1f07;  */

void FUN_10b9a1dcc(void)

{
  return;
}



/* Entry: 10b9a1f08; end: 10b9a1f27;  */

void FUN_10b9a1f08(void)

{
  func_0x00010b9a20fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 10b9a1f28; end: 10b9a1f3f;  */

void FUN_10b9a1f28(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b9a1f40; end: 10b9a2007;  */

void FUN_10b9a1f40(void)

{
  func_0x00010b9a20fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)();
  return;
}



/* Entry: 10b9a2008; end: 10b9a205b;  */

undefined8 FUN_10b9a2008(undefined8 param_1)

{
  func_0x00010b9a20b4();
  func_0x000104c38e48();
  func_0x00010b9a20e4();
  func_0x00010b9a209c();
  func_0x00010b9a20f4();
  func_0x00010b9a20ac();
  return param_1;
}



/* Entry: 10b9a205c; end: 10b9a2083;  */

undefined8 FUN_10b9a205c(undefined8 param_1)

{
  FUN_10b9a2084(param_1,0);
  return param_1;
}



/* Entry: 10b9a2084; end: 10b9a2107;  */

void FUN_10b9a2084(long *param_1,long param_2)

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



/* Entry: 10b9a2108; end: 10b9a2137;  */

undefined8 * FUN_10b9a2108(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b9a2138();
  return param_1;
}



/* Entry: 10b9a2138; end: 10b9a220f;  */

long * FUN_10b9a2138(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  lVar4 = param_2[1];
  bVar1 = false;
  for (lVar5 = 0; lVar4 != lVar5; lVar5 = lVar5 + 1) {
    bVar2 = *(char *)(*param_2 + lVar5) == '/';
    if (bVar2) {
      if (bVar1) {
        func_0x00010b9a2910(lVar5 - lVar3);
      }
      else if (*param_1 == param_1[1]) {
        FUN_10b9a2378(param_1,&UNK_10f7d0c7f);
      }
    }
    else if (!bVar1) {
      lVar3 = lVar5;
    }
    bVar1 = !bVar2;
  }
  if (bVar1) {
    func_0x00010b9a2910(lVar4 - lVar3);
  }
  return param_1;
}



/* Entry: 10b9a2210; end: 10b9a2273;  */

undefined8 * FUN_10b9a2210(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_30;
  ulong uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puStack_30 = &UNK_10f7d0ef0;
    uStack_28 = 0;
  }
  else {
    puStack_30 = (undefined *)(lVar1 + 0x18);
    uStack_28 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  FUN_10b9a2138(param_1,&puStack_30);
  return param_1;
}



/* Entry: 10b9a2274; end: 10b9a229b;  */

bool FUN_10b9a2274(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if (*param_1 != param_1[1]) {
    puVar3 = &UNK_10f7d0c7f;
    func_0x000100152bac();
    func_0x000107c613d0();
    puVar1 = *(undefined **)(unaff_x20 + 8);
    if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
      puVar1 = (undefined *)(ulong)*(byte *)(unaff_x20 + 0x17);
    }
    if (puVar3 == puVar1) {
      func_0x000107c60bf4();
      bVar2 = (int)unaff_x20 == 0;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
  return false;
}



/* Entry: 10b9a229c; end: 10b9a2377;  */

long * FUN_10b9a229c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  do {
    while( true ) {
      if (plVar2 == (long *)param_1[1]) {
        return param_1;
      }
      plVar1 = plVar2;
      func_0x000107c27cf4(plVar2,&UNK_10f7d0c81);
      if ((int)plVar1 == 0) break;
LAB_10b9a22f4:
      plVar1 = param_1;
      func_0x00010b227c64(param_1,plVar2);
      plVar2 = plVar1;
    }
    plVar1 = plVar2;
    func_0x000107c27cf4(plVar2,&UNK_10f7d0c83);
    if (((int)plVar1 != 0) && (plVar2 != (long *)*param_1)) {
      plVar3 = plVar2 + -3;
      plVar1 = plVar3;
      func_0x000107c27cf4(plVar3,&UNK_10f7d0c83);
      if ((int)plVar1 == 0) {
        plVar1 = plVar3;
        func_0x000107c27cf4(plVar3,&UNK_10f7d0c7f);
        if ((int)plVar1 == 0) {
          plVar2 = param_1;
          func_0x00010b227c64(param_1,plVar3);
        }
        goto LAB_10b9a22f4;
      }
    }
    plVar2 = plVar2 + 3;
  } while( true );
}



/* Entry: 10b9a2378; end: 10b9a2407;  */

long FUN_10b9a2378(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b9a2824();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10b9a2858();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10b9a2408; end: 10b9a2433;  */

void FUN_10b9a2408(void)

{
  func_0x00010b9a2934();
  func_0x00010b9a23b4();
  return;
}



/* Entry: 10b9a2434; end: 10b9a245f;  */

void FUN_10b9a2434(void)

{
  func_0x00010b9a2934();
  FUN_10b9a2138();
  return;
}



/* Entry: 10b9a2460; end: 10b9a24fb;  */

void FUN_10b9a2460(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    if ((uVar4 & 1) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x2f);
    }
    func_0x000107c27fc4(param_1,lVar3);
    if ((uVar4 & 1) == 0) {
      lVar2 = lVar3;
      func_0x000107c27cf4(lVar3,&UNK_10f7d0c7f);
      uVar4 = (uint)lVar2 ^ 1;
    }
    else {
      uVar4 = 1;
    }
  }
  return;
}



/* Entry: 10b9a24fc; end: 10b9a2557;  */

void FUN_10b9a24fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = param_2;
  func_0x000107c31084();
  FUN_10b9a2460(auStack_48,param_2);
  func_0x000107c31080(param_1,uVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10b9a2558; end: 10b9a25a7;  */

void FUN_10b9a2558(undefined8 *param_1,long *param_2)

{
  if (*param_2 != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(param_1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10b9a25a8; end: 10b9a25d7;  */

long * FUN_10b9a25a8(long *param_1)

{
  if (*param_1 != param_1[1]) {
    func_0x000107c30408(param_1);
  }
  return param_1;
}



/* Entry: 10b9a25d8; end: 10b9a25f3;  */

long * FUN_10b9a25d8(long *param_1,undefined8 param_2)

{
  func_0x000107c2795c(param_1,param_2);
  if (*param_1 != param_1[1]) {
    func_0x000107c30408(param_1);
  }
  return param_1;
}



/* Entry: 10b9a25f4; end: 10b9a26df;  */

long * FUN_10b9a25f4(long *param_1)

{
  if (*param_1 != param_1[1]) {
    func_0x00010b227c64(param_1);
  }
  return param_1;
}



/* Entry: 10b9a26e0; end: 10b9a2733;  */

long * FUN_10b9a26e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*param_1 != param_1[1]) {
    lVar1 = param_1[1] + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(lVar1,0x2e);
    func_0x0001073727b8(lVar1,param_2);
  }
  return param_1;
}



/* Entry: 10b9a2734; end: 10b9a27c3;  */

bool FUN_10b9a2734(long *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((ulong)(param_1[1] - *param_1) < (ulong)(param_2[1] - *param_2)) {
    bVar1 = false;
  }
  else {
    lVar4 = (param_2[1] - *param_2) / 0x18 + 1;
    lVar3 = 0;
    do {
      lVar4 = lVar4 + -1;
      bVar1 = lVar4 == 0;
      if (lVar4 == 0) {
        return true;
      }
      uVar2 = *param_1 + lVar3;
      func_0x000107c278d0(uVar2,*param_2 + lVar3);
      lVar3 = lVar3 + 0x18;
    } while ((uVar2 & 1) != 0);
  }
  return bVar1;
}



/* Entry: 10b9a27c4; end: 10b9a27db;  */

uint FUN_10b9a27c4(uint param_1)

{
  func_0x00010b4b770c();
  return param_1 ^ 1;
}



/* Entry: 10b9a27dc; end: 10b9a2823;  */

undefined8 FUN_10b9a27dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10b9a2460(auStack_38,param_2);
  func_0x000107c28084(param_1,auStack_38);
  func_0x00010b9a2950();
  return param_1;
}



/* Entry: 10b9a2824; end: 10b9a2857;  */

void FUN_10b9a2824(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c278b8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10b9a2858; end: 10b9a2903;  */

long FUN_10b9a2858(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000107c2794c(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x000107c27948(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  func_0x000107c278b8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x18;
  func_0x000107c31934(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000107c31938(auStack_58);
  return lVar2;
}



/* Entry: 10b9a2904; end: 10b9a2967;  */

void FUN_10b9a2904(void)

{
  func_0x00010007e5dc(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10b9a2968; end: 10b9a29d7;  */

long FUN_10b9a2968(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b91f358(param_1,*(long *)(param_2 + 8),
                *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10) * 0x10,0);
  *(undefined8 *)(lVar1 + 0x38) = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    func_0x000107c31068();
  }
  return param_1;
}



/* Entry: 10b9a29d8; end: 10b9a2b0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b9a29d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *extraout_x8;
  long lVar6;
  undefined8 uVar7;
  long alStack_90 [2];
  undefined8 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long alStack_60 [4];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  plVar3 = alStack_60;
  plVar4 = alStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(param_1 + 0x18) + 8) == '\x01') {
    func_0x00010b920638(alStack_60,param_3);
    param_2 = (undefined8 *)*param_2;
    if (alStack_60[0] == 0) {
      func_0x00010b8a1764(auStack_40,param_3);
      FUN_10b9a4940(param_2,auStack_40);
      func_0x000104bda914(auStack_40);
    }
    else {
      FUN_10b9a4708(param_2,alStack_60);
    }
    func_0x0001052b2c28();
    plVar3 = plVar4;
  }
  else {
    uVar7 = *param_2;
    FUN_10b9a0084(alStack_60);
    alStack_60[1] = 2;
    alStack_60[2] = alStack_60[0];
    alStack_60[0] = 0;
    FUN_10b9a4940(uVar7,alStack_60 + 1);
    func_0x000104bda914(alStack_60 + 1);
    func_0x000104bda93c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bda914(auStack_40);
  func_0x0001052b2c28(alStack_60);
  puVar5 = (undefined1 *)plVar3;
  __Unwind_Resume();
  pcStack_68 = FUN_10b9a2b0c;
  lVar6 = *(long *)(puVar5 + 0x18);
  if (lVar6 == 0) {
    puStack_80 = param_2;
    puStack_78 = (undefined1 *)plVar3;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x000104bf7de4(alStack_90,puVar5 + 8);
    lVar6 = alStack_90[0];
    alStack_90[0] = 0;
    alStack_90[1] = 0;
    *extraout_x8 = lVar6;
    func_0x000104bf7e20(alStack_90);
  }
  else {
    if (*(long *)(lVar6 + 0x10) != 0) {
      plVar3 = (long *)(*(long *)(lVar6 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *extraout_x8 = lVar6;
  }
  return;
}



/* Entry: 10b9a2b0c; end: 10b9a2bcb;  */

void FUN_10b9a2b0c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long alStack_30 [2];
  
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == 0) {
    func_0x000104bf7de4(alStack_30,param_2 + 8);
    lVar4 = alStack_30[0];
    alStack_30[0] = 0;
    alStack_30[1] = 0;
    *param_1 = lVar4;
    func_0x000104bf7e20(alStack_30);
  }
  else {
    if (*(long *)(lVar4 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar4;
  }
  return;
}



/* Entry: 10b9a2bcc; end: 10b9a2bcf;  */

undefined8 * FUN_10b9a2bcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e8f0;
  FUN_10b9a2ee4(param_1[2],param_1[3]);
  if (param_1[4] != 0) {
    if (param_1 + 5 != (undefined8 *)param_1[2]) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10b9a2bd0; end: 10b9a2be3;  */

void FUN_10b9a2bd0(void)

{
  func_0x00010b9a2b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a2be4; end: 10b9a2c1b;  */

void FUN_10b9a2be4(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long alStack_30 [2];
  
  plVar3 = *(long **)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18) << 5;
  while( true ) {
    if (lVar4 == 0) {
      *param_1 = 0;
      return;
    }
    if (*plVar3 == param_3) break;
    plVar3 = plVar3 + 4;
    lVar4 = lVar4 + -0x20;
  }
  lVar4 = plVar3[3];
  if (lVar4 == 0) {
    func_0x000104bf7de4(alStack_30,plVar3 + 1);
    lVar4 = alStack_30[0];
    alStack_30[0] = 0;
    alStack_30[1] = 0;
    *param_1 = lVar4;
    func_0x000104bf7e20(alStack_30);
  }
  else {
    if (*(long *)(lVar4 + 0x10) != 0) {
      plVar3 = (long *)(*(long *)(lVar4 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = lVar4;
  }
  return;
}



/* Entry: 10b9a2c1c; end: 10b9a2c83;  */

void FUN_10b9a2c1c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_40 [16];
  
  FUN_10b9a2c84();
  FUN_10b9a2d04(auStack_40,param_3);
  func_0x000104bf82fc(param_1 + 8,auStack_40);
  func_0x000104bdc2a0(auStack_40);
  if (param_4 == 0) {
    func_0x00010b9a2d60(param_1 + 0x18,0);
  }
  else {
    FUN_10b9a2d0c(param_1 + 0x18,param_3);
  }
  return;
}



/* Entry: 10b9a2c84; end: 10b9a2d03;  */

long * FUN_10b9a2c84(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_28;
  
  plVar2 = (long *)(param_1 + 0x10);
  plVar1 = (long *)*plVar2;
  lVar3 = *(long *)(param_1 + 0x18) << 5;
  while( true ) {
    if (lVar3 == 0) {
      FUN_10b9a2d9c();
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
      plStack_28 = param_2;
      func_0x000107c27d74(plVar2,&plStack_28);
      func_0x000107c27900(&plStack_28);
      return plVar2;
    }
    if ((long *)*plVar1 == param_2) break;
    plVar1 = plVar1 + 4;
    lVar3 = lVar3 + -0x20;
  }
  return plVar1;
}



/* Entry: 10b9a2d04; end: 10b9a2d0b;  */

void FUN_10b9a2d04(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000104bf8274(&uStack_30,*param_2);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10 != 0);
  }
  func_0x000104bf7e20(&uStack_30);
  return;
}



/* Entry: 10b9a2d0c; end: 10b9a2d9b;  */

long * FUN_10b9a2d0c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar5 = *param_2;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
    func_0x000104be7e7c(lVar4);
  }
  return param_1;
}



/* Entry: 10b9a2d9c; end: 10b9a2df7;  */

undefined8 * FUN_10b9a2d9c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_18;
  
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x20);
  if (param_1[1] == param_1[2]) {
    FUN_10b9a2f74(&puStack_18,param_1,puVar1,1,0);
  }
  else {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    param_1[1] = param_1[1] + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 10b9a2df8; end: 10b9a2e87;  */

void FUN_10b9a2df8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 1;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 0x10);
  for (lVar2 = *(long *)(param_2 + 0x18) << 5; lVar2 != 0; lVar2 = lVar2 + -0x20) {
    FUN_10b9a2b0c(&lStack_38,lVar1);
    if (lStack_38 != 0) {
      FUN_10b9a2e88(param_1,&lStack_38);
    }
    func_0x000104be7e54(&lStack_38);
    lVar1 = lVar1 + 0x20;
  }
  return;
}



/* Entry: 10b9a2e88; end: 10b9a2ee3;  */

undefined8 * FUN_10b9a2e88(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_18;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + lVar2 * 8);
  if (lVar2 == param_1[2]) {
    FUN_10b9a30c0(&puStack_18,param_1,puVar1,1);
  }
  else {
    *puVar1 = *param_2;
    *param_2 = 0;
    param_1[1] = lVar2 + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 10b9a2ee4; end: 10b9a2f73;  */

void FUN_10b9a2ee4(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x00010b9a2f14(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



/* Entry: 10b9a2f74; end: 10b9a3083;  */

long * FUN_10b9a2f74(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 in_CY;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x9;
  ulong uVar6;
  ulong extraout_x10;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar7;
  
  func_0x00010b9a328c(param_2[1]);
  if ((bool)in_CY) {
    func_0x00010b9a3278();
    if (extraout_x10 == 0) {
      uVar6 = (ulong)(extraout_x9 << 3) / 5;
    }
    else {
      uVar6 = extraout_x9 << 3;
      if (4 < extraout_x10) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x3fffffffffffffe < uVar6) {
      uVar6 = 0x3ffffffffffffff;
    }
    uVar1 = extraout_x8;
    if (extraout_x8 <= uVar6) {
      uVar1 = uVar6;
    }
    if (extraout_x8 >> 0x3a == 0) {
      lVar7 = *unaff_x20;
      lVar3 = uVar1 << 5;
      __Znwm();
      puVar2 = (undefined8 *)*unaff_x20;
      puVar4 = puVar2;
      FUN_10b9a3084();
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      plVar5 = unaff_x22;
      FUN_10b9a3084();
      if (puVar2 != (undefined8 *)0x0) {
        FUN_10b9a2ee4(puVar2,unaff_x20[1]);
        plVar5 = (long *)*unaff_x20;
        if (unaff_x20 + 3 != plVar5) {
          __ZdlPv();
        }
      }
      *unaff_x20 = lVar3;
      unaff_x20[1] = unaff_x20[1] + unaff_x21;
      unaff_x20[2] = uVar1;
      *param_1 = (long)unaff_x22 + (lVar3 - lVar7);
      return plVar5;
    }
  }
  func_0x00010b9a326c();
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    lVar3 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = lVar3;
    lVar3 = param_2[3];
    param_4[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_4[3] = lVar3;
    param_2[3] = 0;
    param_4 = param_4 + 4;
  }
  return param_4;
}



/* Entry: 10b9a3084; end: 10b9a30bf;  */

undefined8 * FUN_10b9a3084(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_3[3] = uVar1;
    param_1[3] = 0;
    param_3 = param_3 + 4;
  }
  return param_3;
}



/* Entry: 10b9a30c0; end: 10b9a321b;  */

long * FUN_10b9a30c0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 in_CY;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong extraout_x8;
  undefined8 *puVar6;
  long extraout_x9;
  ulong uVar7;
  undefined8 *puVar8;
  ulong extraout_x10;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar10;
  long lStack_68;
  
  func_0x00010b9a328c(param_2[1]);
  if ((bool)in_CY) {
    func_0x00010b9a3278();
    if (extraout_x10 == 0) {
      uVar7 = (ulong)(extraout_x9 << 3) / 5;
    }
    else {
      uVar7 = extraout_x9 << 3;
      if (4 < extraout_x10) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    if (0xffffffffffffffe < uVar7) {
      uVar7 = 0xfffffffffffffff;
    }
    uVar1 = extraout_x8;
    if (extraout_x8 <= uVar7) {
      uVar1 = uVar7;
    }
    if (extraout_x8 >> 0x3c == 0) {
      lVar10 = *unaff_x20;
      puVar3 = (undefined8 *)(uVar1 << 3);
      __Znwm();
      lVar5 = unaff_x20[1];
      puVar2 = (undefined8 *)*unaff_x20;
      puVar6 = puVar3;
      for (puVar8 = puVar2; puVar8 != unaff_x22; puVar8 = puVar8 + 1) {
        *puVar6 = *puVar8;
        *puVar8 = 0;
        puVar6 = puVar6 + 1;
      }
      *puVar6 = *param_5;
      *param_5 = 0;
      lVar9 = unaff_x21 << 3;
      for (puVar8 = unaff_x22; puVar8 != puVar2 + lVar5; puVar8 = puVar8 + 1) {
        *(undefined8 *)((long)puVar6 + lVar9) = *puVar8;
        *puVar8 = 0;
        lVar9 = lVar9 + 8;
      }
      lStack_68 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        func_0x00010b907e30();
        FUN_10b907e90();
        lVar5 = unaff_x20[1];
      }
      *unaff_x20 = (long)puVar3;
      unaff_x20[1] = lVar5 + unaff_x21;
      unaff_x20[2] = uVar1;
      plVar4 = &lStack_68;
      FUN_10b9a321c(plVar4);
      *param_1 = (long)unaff_x22 + (*unaff_x20 - lVar10);
      return plVar4;
    }
  }
  func_0x00010b9a326c();
  FUN_10b9a321c(&lStack_68);
  __Unwind_Resume();
  if ((*param_2 != 0) && (param_2[1] + 0x18 != *param_2)) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10b9a321c; end: 10b9a3253;  */

long * FUN_10b9a321c(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b9a3254; end: 10b9a329f;  */

void FUN_10b9a3254(void)

{
  return;
}



/* Entry: 10b9a32a0; end: 10b9a332b;  */

void FUN_10b9a32a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  FUN_10b9a332c(&lStack_30,param_2);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_28 = lStack_30;
  (**(code **)(*param_1 + 0x30))(param_1,&lStack_28);
  func_0x00010b8e09d8(&lStack_28);
  FUN_10b9a3544(&lStack_30);
  return;
}



/* Entry: 10b9a332c; end: 10b9a337b;  */

void FUN_10b9a332c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  func_0x00010b9a33dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b9a337c; end: 10b9a345b;  */

undefined8 FUN_10b9a337c(void)

{
  int iVar1;
  
  if ((bRam00000001137fd3d8 & 1) == 0) {
    iVar1 = 0x137fd3d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd3d0,&UNK_10f634758);
      ___cxa_guard_release(0x1137fd3d8);
    }
  }
  return 0x1137fd3d0;
}



/* Entry: 10b9a345c; end: 10b9a34c3;  */

undefined8 * FUN_10b9a345c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  long *plVar6;
  code *pcVar7;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)(param_1 + 0x10);
  pcVar7 = (code *)*plVar6;
  func_0x00010b8a1764(auStack_40);
  (*pcVar7)();
  func_0x00010b9a35bc();
  func_0x00010b9a35cc(uStack_28);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    puVar4 = puVar3;
    func_0x00010b9a35bc();
    func_0x00010b9a35c4();
    puVar5 = &uStack_80;
    pcStack_48 = FUN_10b9a34c4;
    pcStack_60 = pcVar7;
    puStack_58 = puVar3;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010b9a35cc(puVar4);
    pcVar7 = *(code **)(extraout_x8_00 + 0x10);
    lStack_78 = *plVar6;
    uStack_80 = 2;
    if (lStack_78 != 0) {
      plVar6 = (long *)(lStack_78 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_68 = extraout_x9_00;
    (*pcVar7)(&uStack_80,(undefined8 *)(extraout_x8_00 + 0x10));
    func_0x00010b9a35bc();
    func_0x00010b9a35cc(uStack_68);
    puVar3 = puVar5;
    if (extraout_x9_01 != extraout_x8_01) {
      ___stack_chk_fail();
      func_0x00010b9a35bc();
      func_0x00010b9a35c4();
      func_0x00010b9a356c(*puVar5);
      return puVar5;
    }
  }
  return puVar3;
}



/* Entry: 10b9a34c4; end: 10b9a3543;  */

undefined8 * FUN_10b9a34c4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  code *pcVar5;
  long extraout_x9_00;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  func_0x00010b9a35cc(param_1);
  pcVar5 = *(code **)(extraout_x8 + 0x10);
  lStack_38 = *param_2;
  uStack_40 = 2;
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = extraout_x9;
  (*pcVar5)(&uStack_40,(undefined8 *)(extraout_x8 + 0x10));
  func_0x00010b9a35bc();
  func_0x00010b9a35cc(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a35bc();
  func_0x00010b9a35c4();
  func_0x00010b9a356c(*puVar4);
  return puVar4;
}



/* Entry: 10b9a3544; end: 10b9a356b;  */

undefined8 * FUN_10b9a3544(undefined8 *param_1)

{
  FUN_10b9a356c(*param_1);
  return param_1;
}



/* Entry: 10b9a356c; end: 10b9a360b;  */

void FUN_10b9a356c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a3590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9a360c; end: 10b9a3677;  */

void FUN_10b9a360c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [256];
  
  func_0x0001054901a8(auStack_138);
  FUN_10b9a3678(param_2,auStack_138);
  func_0x000105491b64(param_1,auStack_130);
  func_0x000105490284(auStack_138);
  return;
}



/* Entry: 10b9a3678; end: 10b9a385f;  */

/* WARNING: Possible PIC construction at 0x00010b9a3810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9a372c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9a37f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9a3784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9a37b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9a3710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9a3788) */
/* WARNING: Removing unreachable block (ram,0x00010b9a3814) */
/* WARNING: Removing unreachable block (ram,0x00010b9a3714) */
/* WARNING: Removing unreachable block (ram,0x00010b9a3808) */

undefined1 * FUN_10b9a3678(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined *unaff_x22;
  long lVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  bool bVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char acStack_b0 [80];
  
  puVar3 = &stack0xffffffffffffffa0;
  puVar11 = &stack0xfffffffffffffff0;
  puVar4 = param_1;
  puVar10 = param_2;
  FUN_10b9a3a28();
  if (param_1 == puVar10) {
    puVar3 = (undefined1 *)register0x00000008;
    puVar6 = &UNK_10f7d0c97;
    param_1 = unaff_x20;
    puVar11 = unaff_x29;
code_r0x00010549023c:
    *(undefined1 **)(puVar3 + -0x20) = param_1;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(undefined8 *)(puVar3 + -8) = unaff_x30;
    func_0x00010016ed84(param_2,puVar6);
    _strlen(puVar6);
    *(undefined **)(puVar3 + -0x40) = unaff_x24;
    *(undefined **)(puVar3 + -0x38) = unaff_x23;
    *(undefined **)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    func_0x000107c60cd0(puVar3 + -0x50,param_1);
    if (puVar3[-0x50] == '\x01') {
      func_0x0001003abf2c();
      puVar11 = param_1 + extraout_x8;
      lVar8 = *(long *)(puVar11 + 0x28);
      uVar1 = *(uint *)(puVar11 + 8);
      puVar10 = puVar11;
      func_0x0001003abf9c(puVar11);
      puVar4 = unaff_x19 + (long)puVar6;
      if ((uVar1 & 0xb0) != 0x20) {
        puVar4 = unaff_x19;
      }
      func_0x0001003abfdc(lVar8,unaff_x19,puVar4,unaff_x19 + (long)puVar6,puVar11,puVar10);
      if (lVar8 == 0) {
        func_0x0001003abf2c();
        func_0x000100456940(param_1 + extraout_x8_00,5);
      }
    }
    func_0x000107c60cd4(puVar3 + -0x50);
    return param_1;
  }
  bVar2 = false;
  bVar9 = false;
  unaff_x22 = &UNK_10f7d0cf7;
  unaff_x24 = &UNK_10f7d0cf3;
  puVar7 = &UNK_10f7d0cf5;
  unaff_x23 = &UNK_10f7d0cf5;
  unaff_x21 = puVar10;
LAB_10b9a36dc:
  if (unaff_x21 == param_1) {
    return puVar4;
  }
  puVar10 = unaff_x21 + -2;
  unaff_x19 = param_2;
  switch(*puVar10) {
  case 0:
    puVar6 = &UNK_10f7d0c97;
    unaff_x30 = 0x10b9a3714;
    goto code_r0x00010549023c;
  case 1:
    if (bVar9) {
      puVar6 = &UNK_10f7d0ca1;
      unaff_x30 = 0x10b9a37b4;
      puVar3 = &stack0xffffffffffffffa0;
      goto code_r0x00010549023c;
    }
    if (((byte)unaff_x21[-1] >> 6 & 1) != 0) {
      puVar5 = param_1;
      func_0x00010b9a35f0(param_1,puVar10);
      puVar4 = param_2;
      func_0x000107c31070(param_2,puVar5);
      bVar9 = true;
      goto LAB_10b9a37fc;
    }
    if ((char)unaff_x21[-1] < '\0') {
      puVar7 = &UNK_10f7d0ca3;
    }
    else {
      puVar7 = &UNK_10f7d0cb6;
    }
    break;
  case 2:
    if (bVar2) {
      func_0x00010b9a3de0();
    }
    puVar7 = &UNK_10f7d0cce;
    break;
  case 3:
    if (bVar2) {
      func_0x00010b9a3de0();
    }
    puVar6 = &UNK_10f7d0cdd;
    unaff_x30 = 0x10b9a3788;
    puVar3 = &stack0xffffffffffffffa0;
    goto code_r0x00010549023c;
  case 4:
    if (!bVar2) {
      unaff_x30 = 0x10b9a3730;
      puVar3 = &stack0xffffffffffffffa0;
      puVar6 = &UNK_10f7d0ceb;
      unaff_x22 = &UNK_10f7d0cf7;
      unaff_x23 = puVar7;
      unaff_x24 = &UNK_10f7d0cf3;
      goto code_r0x00010549023c;
    }
    func_0x00010549023c(param_2,&UNK_10f7d0cf3);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(param_2,unaff_x21[-1] & 0x3f);
    break;
  default:
    goto LAB_10b9a37fc;
  }
  unaff_x30 = 0x10b9a37f8;
  puVar3 = &stack0xffffffffffffffa0;
  puVar6 = puVar7;
  goto code_r0x00010549023c;
LAB_10b9a37fc:
  bVar2 = true;
  unaff_x21 = puVar10;
  goto LAB_10b9a36dc;
}



/* Entry: 10b9a3860; end: 10b9a3a27;  */

void FUN_10b9a3860(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  FUN_10b9a3a28();
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  do {
    if (param_3 == param_2) {
      func_0x00010b9a3e00();
      if (extraout_x8_00 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (&uStack_78,&UNK_10f7d0c86);
      }
      func_0x000107c31084();
      func_0x000107c31080(param_1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
      return;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar2 = param_3 + -2;
    puVar1 = &UNK_10f7d0c8d;
    switch(*puVar2) {
    case 0:
      puVar1 = &UNK_10f7d0c86;
      break;
    case 1:
      puVar1 = &UNK_10f7d0c86;
      if (((byte)param_3[-1] >> 6 & 1) != 0) {
        func_0x00010b9a35f0(param_2,puVar2);
        FUN_10b9a5e5c(auStack_a8);
        goto code_r0x00010b9a395c;
      }
      break;
    case 2:
      break;
    case 3:
      uStack_60 = (ulong)((byte)param_3[-1] & 0x3f);
      uStack_58 = 0;
      func_0x000107c2793c(&UNK_10f7d0c91);
      func_0x00010b9a3df0();
      goto code_r0x00010b9a395c;
    case 4:
      uStack_60 = (ulong)((byte)param_3[-1] & 0x3f);
      uStack_58 = 0;
      func_0x000107c2793c(&UNK_10f315a70);
      func_0x00010b9a3df0();
code_r0x00010b9a395c:
      func_0x000107c27b9c(&uStack_90,auStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    default:
      goto LAB_10b9a3970;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_90,puVar1);
LAB_10b9a3970:
    func_0x00010b9a3e00();
    if (extraout_x8 == 0) {
      func_0x000107c27b9c(&uStack_78,&uStack_90);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(&uStack_78,1,0x2e);
      func_0x000107c27fc4(&uStack_78,&uStack_90);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    param_3 = puVar2;
  } while( true );
}



/* Entry: 10b9a3a28; end: 10b9a3a3f;  */

void FUN_10b9a3a28(void)

{
  FUN_10b9a3a40();
  return;
}



/* Entry: 10b9a3a40; end: 10b9a3a63;  */

void FUN_10b9a3a40(long param_1)

{
  char *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0xfffffffffffffffb;
  lVar4 = param_1 + 8;
  do {
    bVar2 = 0xfffffffffffffffe < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar2) {
      return;
    }
    pcVar1 = (char *)(lVar4 + -2);
    lVar4 = lVar4 + -2;
  } while (*pcVar1 == '\0');
  return;
}



/* Entry: 10b9a3a64; end: 10b9a3c5f;  */

undefined1 *
FUN_10b9a3a64(undefined8 *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,ulong param_5
             ,long *param_6,ulong param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined2 auStack_78 [4];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_70 = 0;
  lStack_80 = 0;
  puVar7 = (undefined2 *)0x1;
  do {
    if (param_2 == (long *)0x0) break;
    puVar7 = (undefined2 *)0x1;
    puVar8 = puVar7;
    switch(*(undefined1 *)(param_2 + 2)) {
    case 0:
      plVar15 = (long *)param_2[1];
      if (plVar15 != (long *)0x0) {
        bVar11 = *(byte *)(param_2 + 5);
        plVar4 = plVar15;
        FUN_10b9a3a40();
        uVar18 = 1;
        plVar17 = plVar15;
        do {
          if (plVar17 == plVar4) break;
          bVar12 = *(byte *)((long)plVar17 + 1);
          lVar14 = *plVar17;
          param_6 = plVar15;
          func_0x00010b9a35f0(plVar15,plVar17);
          uVar18 = uVar18 & bVar11;
          if ((char)bVar12 < '\0') {
            uVar18 = 1;
          }
          param_7 = (ulong)uVar18;
          puVar7 = auStack_78;
          param_3 = auStack_90;
          param_5 = (ulong)bVar12 & 0x3f;
          FUN_10b9a3c60(puVar7,param_3,(char)lVar14);
          uVar18 = 0;
          plVar17 = (long *)((long)plVar17 + 2);
        } while (((ulong)puVar7 & 1) != 0);
        puVar7 = (undefined2 *)0x1;
      }
      goto LAB_10b9a3b7c;
    case 1:
    case 2:
      break;
    case 3:
      puVar8 = (undefined2 *)0x2;
      break;
    case 4:
      puVar8 = (undefined2 *)0x3;
      break;
    case 5:
      puVar8 = (undefined2 *)0x4;
      break;
    default:
      goto LAB_10b9a3b7c;
    }
    param_6 = (long *)param_2[3];
    param_5 = param_2[4];
    param_7 = (ulong)*(byte *)(param_2 + 5);
    puVar7 = auStack_78;
    param_3 = auStack_90;
    FUN_10b9a3c60(puVar7,param_3,puVar8);
LAB_10b9a3b7c:
    param_2 = (long *)*param_2;
  } while (((ulong)puVar7 & 1) != 0);
  lVar14 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar16 = lStack_80 * 8;
  while( true ) {
    iVar9 = (int)param_7;
    uVar6 = SUB81(puVar7,0);
    bVar11 = (byte)param_5;
    if (lVar16 - lVar14 == 0) break;
    param_3 = auStack_90 + lVar14;
    func_0x000107c31060((long)&uStack_b0 + lVar14);
    lVar14 = lVar14 + 8;
  }
  lVar16 = lStack_70 * 2;
  for (lVar14 = 0; lVar16 - lVar14 != 0; lVar14 = lVar14 + 2) {
    *(undefined2 *)(auStack_90 + lVar14 + -8) = *(undefined2 *)((long)auStack_78 + lVar14);
  }
  *param_1 = uStack_98;
  param_1[2] = uStack_a8;
  param_1[1] = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_10b9a3d64(&uStack_b0);
  puVar5 = auStack_90;
  FUN_10b9a3da4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = auStack_90;
  FUN_10b9a3da4();
  func_0x00010b9a3e18();
  uVar10 = *(ulong *)(puVar5 + 8);
  if (uVar10 < 4) {
    puVar7 = (undefined2 *)(puVar5 + uVar10 * 2);
    *puVar7 = 0;
    *(long *)(puVar5 + 8) = *(long *)(puVar5 + 8) + 1;
    if (((param_6 == (long *)0x0) || (*param_6 == 0)) || (*(int *)(*param_6 + 0xc) == 0)) {
      bVar11 = *(byte *)((long)puVar7 + 1) & 0xc0 | bVar11 & 0x3f;
    }
    else {
      bVar11 = *(byte *)((long)puVar7 + 1);
      if (*(ulong *)(param_3 + 0x10) < 2) {
        *(byte *)((long)puVar7 + 1) = bVar11 | 0x40;
        *(byte *)((long)puVar7 + 1) = bVar11 & 0xc0 | 0x40 | param_3[0x10] & 0x3f;
        lVar14 = *(long *)(param_3 + 0x10);
        if (lVar14 == 2) {
          FUN_10b9a3d98();
          FUN_10b9a3678(param_3,puVar5);
          return puVar5;
        }
        lVar13 = *param_6;
        lVar16 = lVar14;
        if (lVar13 != 0) {
          piVar1 = (int *)(lVar13 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar16 = *(long *)(param_3 + 0x10);
        }
        *(long *)(param_3 + lVar14 * 8) = lVar13;
        *(long *)(param_3 + 0x10) = lVar16 + 1;
        bVar11 = *(byte *)((long)puVar7 + 1);
      }
    }
    *(undefined1 *)puVar7 = uVar6;
    bVar12 = 0x80;
    if (iVar9 == 0) {
      bVar12 = 0;
    }
    *(byte *)((long)puVar7 + 1) = bVar12 | bVar11 & 0x7f;
  }
  return (undefined1 *)(ulong)(uVar10 < 4);
}



/* Entry: 10b9a3c60; end: 10b9a3d37;  */

ulong FUN_10b9a3c60(ulong param_1,long param_2,undefined1 param_3,byte param_4,long *param_5,
                   int param_6)

{
  int *piVar1;
  undefined2 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 < 4) {
    puVar2 = (undefined2 *)(param_1 + uVar5 * 2);
    *puVar2 = 0;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    if (((param_5 == (long *)0x0) || (*param_5 == 0)) || (*(int *)(*param_5 + 0xc) == 0)) {
      bVar6 = *(byte *)((long)puVar2 + 1) & 0xc0 | param_4 & 0x3f;
    }
    else {
      bVar6 = *(byte *)((long)puVar2 + 1);
      if (*(ulong *)(param_2 + 0x10) < 2) {
        *(byte *)((long)puVar2 + 1) = bVar6 | 0x40;
        *(byte *)((long)puVar2 + 1) = bVar6 & 0xc0 | 0x40 | *(byte *)(param_2 + 0x10) & 0x3f;
        lVar7 = *(long *)(param_2 + 0x10);
        if (lVar7 == 2) {
          FUN_10b9a3d98();
          FUN_10b9a3678(param_2,param_1);
          return param_1;
        }
        lVar9 = *param_5;
        lVar10 = lVar7;
        if (lVar9 != 0) {
          piVar1 = (int *)(lVar9 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = *(long *)(param_2 + 0x10);
        }
        *(long *)(param_2 + lVar7 * 8) = lVar9;
        *(long *)(param_2 + 0x10) = lVar10 + 1;
        bVar6 = *(byte *)((long)puVar2 + 1);
      }
    }
    *(undefined1 *)puVar2 = param_3;
    bVar8 = 0x80;
    if (param_6 == 0) {
      bVar8 = 0;
    }
    *(byte *)((long)puVar2 + 1) = bVar8 | bVar6 & 0x7f;
  }
  return (ulong)(uVar5 < 4);
}



/* Entry: 10b9a3d38; end: 10b9a3d63;  */

undefined8 FUN_10b9a3d38(undefined8 param_1,undefined8 param_2)

{
  FUN_10b9a3678(param_2,param_1);
  return param_1;
}



/* Entry: 10b9a3d64; end: 10b9a3d97;  */

long FUN_10b9a3d64(long param_1)

{
  long lVar1;
  
  lVar1 = 8;
  do {
    func_0x000107c278f4(param_1 + lVar1);
    lVar1 = lVar1 + -8;
  } while (lVar1 != -8);
  return param_1;
}



/* Entry: 10b9a3d98; end: 10b9a3da3;  */

long FUN_10b9a3d98(long param_1)

{
  long lVar1;
  
  func_0x00010772e264();
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != 0; lVar1 = lVar1 + -1) {
    func_0x000107c278f4();
  }
  return param_1;
}



/* Entry: 10b9a3da4; end: 10b9a3dd7;  */

long FUN_10b9a3da4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x000107c278f4(lVar1);
    lVar1 = lVar1 + 8;
  }
  return param_1;
}



/* Entry: 10b9a3dd8; end: 10b9a3e1f;  */

void FUN_10b9a3dd8(void)

{
  return;
}



/* Entry: 10b9a3e20; end: 10b9a3e57;  */

void FUN_10b9a3e20(long param_1)

{
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined8 *)(param_1 + 0xa8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}



/* Entry: 10b9a3e58; end: 10b9a3e8f;  */

void FUN_10b9a3e58(long param_1)

{
  FUN_10b9a42c4(param_1 + 0x108);
  func_0x00010731e26c(param_1 + 0xe8);
  __ZNSt3__15mutexD1Ev(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b9a3e90; end: 10b9a3ed7;  */

void FUN_10b9a3e90(long param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_2 + 0x120) == '\x01') {
    func_0x00010b9a463c(param_1,param_2,param_2 + 0xa8);
    func_0x00010b9a4618();
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  }
  else {
    func_0x00010b9a45a0(param_1,param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 0x20) = param_2;
  }
  return;
}



/* Entry: 10b9a3ed8; end: 10b9a3f4f;  */

void FUN_10b9a3ed8(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2 >> 0x20;
  uStack_40 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108)) / 0x18;
  if (uStack_40 <= param_2 >> 0x20) {
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x000107c2793c(&UNK_10f7d0cfa);
    func_0x000107c3173c(auStack_58);
    FUN_10b9a4030(auStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b9a3f48);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10b9a3f50; end: 10b9a3f6f;  */

void FUN_10b9a3f50(void)

{
  func_0x00010b9a4624();
  func_0x00010b9a45d4();
  return;
}



/* Entry: 10b9a3f70; end: 10b9a400f;  */

void FUN_10b9a3f70(ulong param_1,uint *param_2)

{
  code *pcVar1;
  undefined1 auStack_98 [24];
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_70 = param_1 >> 0x20;
  lStack_40 = *(long *)(param_2 + 2);
  uStack_60 = (ulong)*param_2;
  uStack_50 = (ulong)param_2[1];
  if ((lStack_40 != 0 && param_2[1] == (uint)(param_1 >> 0x20)) && *param_2 == (uint)param_1) {
    return;
  }
  puStack_30 = &DAT_10f432d4e;
  if (*(undefined **)(param_2 + 4) != (undefined *)0x0) {
    puStack_30 = *(undefined **)(param_2 + 4);
  }
  uStack_80 = param_1 & 0xffffffff;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x000107c2793c(&UNK_10f7d0d3e);
  func_0x000107c3173c(auStack_98);
  FUN_10b9a4030(auStack_98);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b9a4008);
  (*pcVar1)();
}



/* Entry: 10b9a4010; end: 10b9a402f;  */

void FUN_10b9a4010(void)

{
  func_0x00010b9a4624();
  func_0x00010b9a45d4();
  return;
}



/* Entry: 10b9a4030; end: 10b9a4097;  */

void FUN_10b9a4030(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  FUN_10bd3f434(appuStack_38,puVar2,uVar1,&UNK_10f7d0d90);
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  FUN_10bd3f4e0(appuStack_38[0],&UNK_10f7d0d96,0x2f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b9a4090);
  (*pcVar3)();
}



/* Entry: 10b9a4098; end: 10b9a40c3;  */

void FUN_10b9a4098(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b9a4580(param_1,param_3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



/* Entry: 10b9a40c4; end: 10b9a40fb;  */

void FUN_10b9a40c4(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b9a463c();
  func_0x00010b9a4618();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  return;
}



/* Entry: 10b9a40fc; end: 10b9a4147;  */

void FUN_10b9a40fc(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010b9a460c();
  if (*(char *)(unaff_x19 + 1) == '\x01') {
    func_0x000107c60d58(*unaff_x19);
  }
  return;
}



/* Entry: 10b9a4148; end: 10b9a417f;  */

void FUN_10b9a4148(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b9a463c();
  func_0x00010b9a4618();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  return;
}



/* Entry: 10b9a4180; end: 10b9a419f;  */

void FUN_10b9a4180(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010b9a460c();
  if (*(char *)(unaff_x19 + 1) == '\x01') {
    __ZNSt3__119__shared_mutex_base6unlockEv(*unaff_x19);
  }
  return;
}



/* Entry: 10b9a41a0; end: 10b9a421f;  */

void FUN_10b9a41a0(ulong *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_2 + 0x20) + 0xe8;
  FUN_10b9a5798();
  lVar2 = *(long *)(param_2 + 0x20);
  if (uVar3 >> 0x20 < (ulong)((*(long *)(lVar2 + 0x110) - *(long *)(lVar2 + 0x108)) / 0x18)) {
    puVar1 = (ulong *)(*(long *)(lVar2 + 0x108) + (uVar3 >> 0x20) * 0x18);
  }
  else {
    puVar1 = (ulong *)(lVar2 + 0x108);
    FUN_10b9a4220();
  }
  *puVar1 = uVar3;
  puVar1[1] = 1;
  puVar1[2] = param_3;
  param_1[2] = param_3;
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  return;
}



/* Entry: 10b9a4220; end: 10b9a4263;  */

undefined8 * FUN_10b9a4220(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar1 + 3;
    puVar1[2] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_10b9a44e4();
  }
  param_1[1] = puVar2;
  return puVar2 + -3;
}



/* Entry: 10b9a4264; end: 10b9a42c3;  */

bool FUN_10b9a4264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  FUN_10b9a3f50();
  lVar1 = puVar2[1] + -1;
  puVar2[1] = lVar1;
  if (lVar1 == 0) {
    *puVar2 = 0;
    puVar2[2] = 0;
    FUN_10b9a57c8(*(long *)(param_1 + 0x20) + 0xe8,param_2);
  }
  return lVar1 != 0;
}



/* Entry: 10b9a42c4; end: 10b9a42f7;  */

undefined8 FUN_10b9a42c4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b9a42f8(&uStack_28);
  return param_1;
}



/* Entry: 10b9a42f8; end: 10b9a430f;  */

void FUN_10b9a42f8(undefined8 *param_1)

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


