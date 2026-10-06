/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2969b4; end: 10a296ad3;  */

void FUN_10a2969b4(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f64697a);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a296ad4; end: 10a296ae3;  */

undefined1  [16] FUN_10a296ad4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x5a;
  auVar1._0_8_ = &UNK_10e4a7889;
  return auVar1;
}



/* Entry: 10a296ae4; end: 10a296af3;  */

long * FUN_10a296ae4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a296b2c();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a296af4; end: 10a296b2b;  */

long * FUN_10a296af4(long *param_1)

{
  long lVar1;
  
  FUN_10a296b2c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a296b2c; end: 10a296bff;  */

void FUN_10a296b2c(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a296b94);
  (*pcVar1)();
}



/* Entry: 10a296c00; end: 10a296c0f;  */

void FUN_10a296c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7be0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a296c10; end: 10a296c2f;  */

void FUN_10a296c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7be0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a296c30; end: 10a296c4f;  */

void FUN_10a296c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a296c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a296c50; end: 10a296c6f;  */

void FUN_10a296c50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7c30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a296c70; end: 10a296c8f;  */

void FUN_10a296c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a296c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a296c90; end: 10a296caf;  */

void FUN_10a296c90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7c80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a296cb0; end: 10a296ccf;  */

void FUN_10a296cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a296cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a296cd0; end: 10a296cef;  */

void FUN_10a296cd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7cd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a296cf0; end: 10a296d0f;  */

void FUN_10a296cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a296cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a296d10; end: 10a296d2f;  */

void FUN_10a296d10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7d20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a296d30; end: 10a296d3f;  */

void FUN_10a296d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a296d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a296d40; end: 10a296f0f;  */

void FUN_10a296d40(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    plVar4 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a296f10; end: 10a296f67;  */

void FUN_10a296f10(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    if ((char)param_1[2] == '\x01') {
      plVar1 = *(long **)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a296f68; end: 10a297067;  */

undefined8 * FUN_10a296f68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7e00;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb7e50;
  FUN_10a2973e4(param_1 + 0xb);
  FUN_10a297440(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a297068; end: 10a29728f;  */

/* WARNING: Removing unreachable block (ram,0x00010a29720c) */

void FUN_10a297068(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if ((int)plVar1 != 0) {
      (**(code **)(*param_1 + 0x30))(auStack_48,param_1);
      lVar2 = param_1[8];
      lStack_50 = param_1[10];
      lVar4 = param_1[9];
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[8] = 0;
      lStack_60 = lVar2;
      lStack_58 = lVar4;
      for (; lVar2 != lVar4; lVar2 = lVar2 + 0x40) {
        FUN_10a2974b8(lVar2,auStack_48);
      }
      puVar3 = (undefined8 *)param_1[0xb];
      lStack_68 = param_1[0xd];
      puVar5 = (undefined8 *)param_1[0xc];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      puStack_78 = puVar3;
      puStack_70 = puVar5;
      for (; puVar3 != puVar5; puVar3 = puVar3 + 2) {
        FUN_10a1bcbe0(*puVar3,auStack_48);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (**(code **)(*param_1 + 0x38))(auStack_90,param_1,auStack_48);
        lVar2 = param_1[1];
        lStack_98 = param_1[3];
        lVar4 = param_1[2];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        lStack_a8 = lVar2;
        lStack_a0 = lVar4;
        for (; lVar2 != lVar4; lVar2 = lVar2 + 0x40) {
          FUN_10a2974b8(lVar2,auStack_90);
        }
        puVar3 = (undefined8 *)param_1[4];
        lStack_b0 = param_1[6];
        puVar5 = (undefined8 *)param_1[5];
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[4] = 0;
        puStack_c0 = puVar3;
        puStack_b8 = puVar5;
        for (; puVar3 != puVar5; puVar3 = puVar3 + 2) {
          FUN_10a1bcbe0(*puVar3,auStack_90);
        }
        FUN_10a2973e4(&puStack_c0);
        FUN_10a297440(&lStack_a8);
        if (cStack_79 < '\0') {
          __ZdlPv(auStack_90[0]);
        }
      }
      FUN_10a2973e4(&puStack_78);
      FUN_10a297440(&lStack_60);
    }
  }
  return;
}



/* Entry: 10a297290; end: 10a2972db;  */

bool FUN_10a297290(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a2972dc; end: 10a2973b3;  */

bool FUN_10a2972dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar2 == (long *)0x0) {
    lVar6 = *(long *)(lVar6 + 0x50);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(lVar6 + 0x50);
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
  return lVar6 != 0;
}



/* Entry: 10a2973b4; end: 10a2973e3;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a2973b4(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lVar2 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar2;
    param_1[2] = param_3[2];
    return;
  }
  lVar2 = *param_3;
  uVar1 = param_3[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a2973e4; end: 10a29743f;  */

void FUN_10a2973e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a1c9d6c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a297440; end: 10a2974b7;  */

void FUN_10a297440(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a2974b8; end: 10a297543;  */

void FUN_10a2974b8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
  }
  (*pcVar1)(&uStack_40,param_1);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a297544; end: 10a29759b;  */

long FUN_10a297544(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
  return param_1;
}



/* Entry: 10a29759c; end: 10a29769b;  */

undefined8 * FUN_10a29759c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7e00;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb7e50;
  FUN_10a2973e4(param_1 + 0xb);
  FUN_10a297440(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29769c; end: 10a297773;  */

bool FUN_10a29769c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar2 == (long *)0x0) {
    lVar6 = *(long *)(lVar6 + 0x50);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(lVar6 + 0x50);
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
  return lVar6 != 0;
}



/* Entry: 10a297774; end: 10a29779f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a297774(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lVar2 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar2;
    param_1[2] = param_3[2];
    return;
  }
  lVar2 = *param_3;
  uVar1 = param_3[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a2977a0; end: 10a29789f;  */

undefined8 * FUN_10a2977a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7ff0;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a2978a0; end: 10a297c13;  */

code ***** FUN_10a2978a0(code *****param_1,long *****param_2)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *****pppppcVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  code ****ppppcVar8;
  long *****ppppplVar9;
  code ****ppppcVar10;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  code ****ppppcStack_f0;
  code ****ppppcStack_e8;
  long ***ppplStack_e0;
  long ****pppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ****pppplStack_c0;
  code ***pppcStack_b8;
  undefined **ppuStack_b0;
  code ***pppcStack_a8;
  code ***pppcStack_a0;
  long ****pppplStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcVar5 = param_1;
  (*(code *)(*param_1)[3])();
  if ((int)pppppcVar5 != 0) {
    (*(code *)(*param_1)[4])(param_1);
    pppppcVar5 = param_1;
    (*(code *)(*param_1)[5])();
    if ((int)pppppcVar5 != 0) {
      pppppcVar5 = param_1;
      (*(code *)(*param_1)[6])();
      ppppplVar7 = (long *****)param_1[8];
      ppplStack_e0 = (long ***)param_1[10];
      ppppplVar9 = (long *****)param_1[9];
      param_1[9] = (code ****)0x0;
      param_1[10] = (code ****)0x0;
      param_1[8] = (code ****)0x0;
      ppppcStack_f0 = (code ****)ppppplVar7;
      ppppcStack_e8 = (code ****)ppppplVar9;
      pppplStack_d8 = (long ****)pppppcVar5;
      for (; ppppplVar7 != ppppplVar9; ppppplVar7 = ppppplVar7 + 8) {
        param_2 = ppppplVar7;
        (*(code *)*ppppplVar7)(pppplStack_d8);
      }
      ppppcVar8 = param_1[0xb];
      ppplStack_f8 = (long ***)param_1[0xd];
      ppppcVar10 = param_1[0xc];
      param_1[0xc] = (code ****)0x0;
      param_1[0xd] = (code ****)0x0;
      param_1[0xb] = (code ****)0x0;
      ppplStack_108 = (long ***)ppppcVar8;
      ppplStack_100 = (long ***)ppppcVar10;
      for (; ppppcVar8 != ppppcVar10; ppppcVar8 = ppppcVar8 + 2) {
        ppppplVar7 = (long *****)*ppppcVar8;
        if (ppppplVar7 == (long *****)0x0 || *(char *)(ppppplVar7 + 8) != '\x02') {
          ppppplVar6 = param_2;
          if (ppppplVar7 != (long *****)0x0 && *(char *)(ppppplVar7 + 8) == '\x01') {
            (*(code *)*ppppplVar7)(pppplStack_d8);
            ppppplVar6 = ppppplVar7;
          }
        }
        else {
          ppppplVar9 = ppppplVar7;
          FUN_10a688b40();
          if (ppppplVar9 == (long *****)0x0) {
            ppppplVar6 = (long *****)0x0;
            if (param_2 != (long *****)0x0) {
              pppcStack_a0 = (code ***)ppppplVar7[1];
              pppcStack_a8 = (code ***)*ppppplVar7;
              if (ppppplVar7[1] != (long ****)0x0) {
                pppplVar1 = ppppplVar7[1] + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
                  if (bVar3) {
                    *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              pppplStack_c0 = pppplStack_d8;
              pppcStack_b8 = (code ***)FUN_10a297f3c;
              ppuStack_b0 = &PTR_DAT_110bb8080;
              ppplStack_d0 = (long ***)0x0;
              ppplStack_c8 = (long ***)0x0;
              pppplStack_98 = pppplStack_d8;
              ppppplVar6 = (long *****)&pppcStack_b8;
              FUN_10a4634ec(param_2);
              (*(code *)*ppuStack_b0)(&ppuStack_b0);
            }
          }
          else {
            *ppppplVar9 = (long ****)
                          CONCAT44((int)((ulong)*ppppplVar9 >> 0x20) + 1,(int)*ppppplVar9 + 1);
            ppppplVar6 = &pppplStack_d8;
            FUN_10a297dac(*ppppplVar7);
            iVar4 = *(int *)((long)ppppplVar9 + 4) + -1;
            *(int *)((long)ppppplVar9 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)ppppplVar9 = 0;
            }
          }
        }
        param_2 = ppppplVar6;
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (*(code *)(*param_1)[7])(&pppcStack_b8,param_1,&pppplStack_d8);
        ppppcVar8 = param_1[1];
        pppplStack_c0 = (long ****)param_1[3];
        ppppcVar10 = param_1[2];
        param_1[2] = (code ****)0x0;
        param_1[3] = (code ****)0x0;
        param_1[1] = (code ****)0x0;
        ppplStack_d0 = (long ***)ppppcVar8;
        ppplStack_c8 = (long ***)ppppcVar10;
        for (; ppppcVar8 != ppppcVar10; ppppcVar8 = ppppcVar8 + 8) {
          FUN_10a2974b8(ppppcVar8,&pppcStack_b8);
        }
        ppppcVar8 = param_1[4];
        ppplStack_110 = (long ***)param_1[6];
        ppppcVar10 = param_1[5];
        param_1[5] = (code ****)0x0;
        param_1[6] = (code ****)0x0;
        param_1[4] = (code ****)0x0;
        ppplStack_120 = (long ***)ppppcVar8;
        ppplStack_118 = (long ***)ppppcVar10;
        for (; ppppcVar8 != ppppcVar10; ppppcVar8 = ppppcVar8 + 2) {
          FUN_10a1bcbe0(*ppppcVar8,&pppcStack_b8);
        }
        FUN_10a2973e4(&ppplStack_120);
        FUN_10a297440(&ppplStack_d0);
        if ((long)pppcStack_a8 < 0) {
          __ZdlPv(pppcStack_b8);
        }
      }
      FUN_10a297c80(&ppplStack_108);
      pppppcVar5 = &ppppcStack_f0;
      FUN_10a297d34();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppcVar5;
  }
  ___stack_chk_fail();
  FUN_10a297c80(&ppplStack_108);
  FUN_10a297d34(&ppppcStack_f0);
  __Unwind_Resume();
  if (((pppppcVar5[1] == pppppcVar5[2]) && (pppppcVar5[4] == pppppcVar5[5])) &&
     (pppppcVar5[8] == pppppcVar5[9])) {
    return (code *****)(ulong)(pppppcVar5[0xb] != pppppcVar5[0xc]);
  }
  return (code *****)0x1;
}



/* Entry: 10a297c14; end: 10a297c7f;  */

bool FUN_10a297c14(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a297c80; end: 10a297d33;  */

void FUN_10a297c80(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a297cdc();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a297d34; end: 10a297dab;  */

void FUN_10a297d34(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a297dac; end: 10a297f3b;  */

void FUN_10a297dac(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a074bf0(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a297f3c; end: 10a297f77;  */

void FUN_10a297f3c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a074bf0(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a297f78; end: 10a298037;  */

long * FUN_10a297f78(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    param_2 = plStack_40;
    (**(code **)(*plStack_40 + 0x20))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_2 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_2;
  }
  plVar4 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  plVar6 = (long *)plVar4[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10a298038; end: 10a29808f;  */

long FUN_10a298038(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
  return param_1;
}



/* Entry: 10a298090; end: 10a29818f;  */

undefined8 * FUN_10a298090(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7e00;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb7e50;
  FUN_10a2973e4(param_1 + 0xb);
  FUN_10a297440(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a298190; end: 10a298267;  */

bool FUN_10a298190(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar2 == (long *)0x0) {
    lVar6 = *(long *)(lVar6 + 0x50);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(lVar6 + 0x50);
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
  return lVar6 != 0;
}



/* Entry: 10a298268; end: 10a298293;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a298268(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lVar2 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar2;
    param_1[2] = param_3[2];
    return;
  }
  lVar2 = *param_3;
  uVar1 = param_3[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a298294; end: 10a298393;  */

undefined8 * FUN_10a298294(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb7e00;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb7e50;
  FUN_10a2973e4(param_1 + 0xb);
  FUN_10a297440(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a298394; end: 10a2983d7;  */

bool FUN_10a298394(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  FUN_10a53e714(lVar2,&UNK_10f6601aa,0xb);
  uVar1 = *(ulong *)(lVar2 + 8);
  if (-1 < (char)*(byte *)(lVar2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(lVar2 + 0x17);
  }
  return uVar1 != 0;
}



/* Entry: 10a2983d8; end: 10a298437;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a2983d8(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0x70) + 0x18);
  FUN_10a53e714(plVar2,&UNK_10f6601aa,0xb);
  if (-1 < *(char *)((long)plVar2 + 0x17)) {
    lVar4 = plVar2[1];
    lVar3 = *plVar2;
    param_1[2] = plVar2[2];
    param_1[1] = lVar4;
    *param_1 = lVar3;
    return;
  }
  lVar3 = *plVar2;
  uVar1 = plVar2[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar3 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar3 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar3);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar1 + 1);
  return;
}



/* Entry: 10a298438; end: 10a298463;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a298438(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lVar2 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar2;
    param_1[2] = param_3[2];
    return;
  }
  lVar2 = *param_3;
  uVar1 = param_3[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a298464; end: 10a298563;  */

undefined8 * FUN_10a298464(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8240;
  func_0x00010a2966b0(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8290;
  FUN_10a29897c(param_1 + 0xb);
  FUN_10a298a30(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a298564; end: 10a2988d7;  */

undefined8 ** FUN_10a298564(code *param_1,undefined8 **param_2,code **param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  code **ppcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  (*(code *)(*param_2)[3])();
  if ((int)ppuVar4 != 0) {
    (*(code *)(*param_2)[4])(param_2);
    ppuVar4 = param_2;
    (*(code *)(*param_2)[5])();
    if ((int)ppuVar4 != 0) {
      (*(code *)(*param_2)[6])(param_2);
      puVar7 = param_2[8];
      puStack_e0 = param_2[10];
      puVar9 = param_2[9];
      param_2[9] = (undefined8 *)0x0;
      param_2[10] = (undefined8 *)0x0;
      param_2[8] = (undefined8 *)0x0;
      puStack_f0 = puVar7;
      puStack_e8 = puVar9;
      pcStack_d8 = param_1;
      for (; puVar7 != puVar9; puVar7 = puVar7 + 8) {
        (*(code *)*puVar7)(param_1,puVar7);
      }
      puVar7 = param_2[0xb];
      puStack_f8 = param_2[0xd];
      puVar9 = param_2[0xc];
      param_2[0xc] = (undefined8 *)0x0;
      param_2[0xd] = (undefined8 *)0x0;
      param_2[0xb] = (undefined8 *)0x0;
      puStack_108 = puVar7;
      puStack_100 = puVar9;
      for (; puVar7 != puVar9; puVar7 = puVar7 + 2) {
        plVar8 = (long *)*puVar7;
        if (plVar8 == (long *)0x0 || (char)plVar8[8] != '\x02') {
          ppcVar6 = param_3;
          if (plVar8 != (long *)0x0 && (char)plVar8[8] == '\x01') {
            (*(code *)*plVar8)(param_1,plVar8);
            ppcVar6 = param_3;
          }
        }
        else {
          plVar5 = plVar8;
          FUN_10a688b40();
          if (plVar5 == (long *)0x0) {
            ppcVar6 = (code **)0x0;
            if (param_3 != (code **)0x0) {
              lStack_a0 = plVar8[1];
              lStack_a8 = *plVar8;
              if (plVar8[1] != 0) {
                plVar8 = (long *)(plVar8[1] + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar2) {
                    *plVar8 = *plVar8 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              pcStack_b8 = FUN_10a298c38;
              ppuStack_b0 = &PTR_DAT_110bb82d0;
              puStack_d0 = (undefined8 *)0x0;
              puStack_c8 = (undefined8 *)0x0;
              ppcVar6 = &pcStack_b8;
              pcStack_c0 = param_1;
              pcStack_98 = param_1;
              FUN_10a4634ec(param_3);
              (*(code *)*ppuStack_b0)(&ppuStack_b0);
            }
          }
          else {
            *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
            ppcVar6 = &pcStack_d8;
            FUN_10a298aa8(*plVar8);
            iVar3 = *(int *)((long)plVar5 + 4) + -1;
            *(int *)((long)plVar5 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)plVar5 = 0;
            }
          }
        }
        param_3 = ppcVar6;
      }
      if ((param_2[1] != param_2[2]) || (param_2[4] != param_2[5])) {
        (*(code *)(*param_2)[7])(&pcStack_b8,param_2,&pcStack_d8);
        puVar7 = param_2[1];
        pcStack_c0 = (code *)param_2[3];
        puVar9 = param_2[2];
        param_2[2] = (undefined8 *)0x0;
        param_2[3] = (undefined8 *)0x0;
        param_2[1] = (undefined8 *)0x0;
        puStack_d0 = puVar7;
        puStack_c8 = puVar9;
        for (; puVar7 != puVar9; puVar7 = puVar7 + 8) {
          FUN_10a2974b8(puVar7,&pcStack_b8);
        }
        puVar7 = param_2[4];
        puStack_110 = param_2[6];
        puVar9 = param_2[5];
        param_2[5] = (undefined8 *)0x0;
        param_2[6] = (undefined8 *)0x0;
        param_2[4] = (undefined8 *)0x0;
        puStack_120 = puVar7;
        puStack_118 = puVar9;
        for (; puVar7 != puVar9; puVar7 = puVar7 + 2) {
          FUN_10a1bcbe0(*puVar7,&pcStack_b8);
        }
        FUN_10a2973e4(&puStack_120);
        FUN_10a297440(&puStack_d0);
        if (lStack_a8 < 0) {
          __ZdlPv(pcStack_b8);
        }
      }
      FUN_10a29897c(&puStack_108);
      ppuVar4 = &puStack_f0;
      FUN_10a298a30();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  FUN_10a29897c(&puStack_108);
  FUN_10a298a30(&puStack_f0);
  __Unwind_Resume();
  if (((ppuVar4[1] == ppuVar4[2]) && (ppuVar4[4] == ppuVar4[5])) && (ppuVar4[8] == ppuVar4[9])) {
    return (undefined8 **)(ulong)(ppuVar4[0xb] != ppuVar4[0xc]);
  }
  return (undefined8 **)0x1;
}



/* Entry: 10a2988d8; end: 10a29897b;  */

bool FUN_10a2988d8(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29897c; end: 10a298a2f;  */

void FUN_10a29897c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a2989d8();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a298a30; end: 10a298aa7;  */

void FUN_10a298a30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a298aa8; end: 10a298c37;  */

void FUN_10a298aa8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  puStack_68 = (undefined8 *)*param_2;
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a298c38; end: 10a298c73;  */

void FUN_10a298c38(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  puStack_68 = *(undefined8 **)(param_1 + 0x20);
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a298c74; end: 10a298d73;  */

undefined8 * FUN_10a298c74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8388;
  func_0x00010a296708(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8290;
  FUN_10a29897c(param_1 + 0xb);
  FUN_10a298a30(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a298d74; end: 10a298dd3;  */

void FUN_10a298d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a298d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x30))();
  return;
}



/* Entry: 10a298dd4; end: 10a298ed3;  */

undefined8 * FUN_10a298dd4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8388;
  func_0x00010a296708(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8290;
  FUN_10a29897c(param_1 + 0xb);
  FUN_10a298a30(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a298ed4; end: 10a298f23;  */

undefined1 FUN_10a298ed4(long param_1)

{
  return *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x70) + 0x18) + 0x18) + 0xc0);
}



/* Entry: 10a298f24; end: 10a299023;  */

undefined8 * FUN_10a298f24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb84f8;
  func_0x00010a296708(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8548;
  FUN_10a299418(param_1 + 0xb);
  FUN_10a2994cc(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a299024; end: 10a299397;  */

code *** FUN_10a299024(code ***param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code ***pppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcStack_120;
  code **ppcStack_118;
  code **ppcStack_110;
  code **ppcStack_108;
  code **ppcStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  code **ppcStack_e8;
  code **ppcStack_e0;
  undefined1 auStack_d4 [4];
  code **ppcStack_d0;
  code **ppcStack_c8;
  code **ppcStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined4 uStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppcVar6 = param_1;
  (*(*param_1)[3])();
  if ((int)pppcVar6 != 0) {
    (*(*param_1)[4])(param_1);
    pppcVar6 = param_1;
    (*(*param_1)[5])();
    if ((int)pppcVar6 != 0) {
      pppcVar6 = param_1;
      (*(*param_1)[6])();
      uVar5 = SUB84(pppcVar6,0);
      ppcVar9 = param_1[8];
      ppcStack_e0 = param_1[10];
      ppcVar11 = param_1[9];
      param_1[9] = (code **)0x0;
      param_1[10] = (code **)0x0;
      param_1[8] = (code **)0x0;
      ppcStack_f0 = ppcVar9;
      ppcStack_e8 = ppcVar11;
      auStack_d4 = (undefined1  [4])uVar5;
      for (; ppcVar9 != ppcVar11; ppcVar9 = ppcVar9 + 8) {
        param_2 = ppcVar9;
        (**ppcVar9)(pppcVar6);
      }
      ppcVar9 = param_1[0xb];
      ppcStack_f8 = param_1[0xd];
      ppcVar11 = param_1[0xc];
      param_1[0xc] = (code **)0x0;
      param_1[0xd] = (code **)0x0;
      param_1[0xb] = (code **)0x0;
      ppcStack_108 = ppcVar9;
      ppcStack_100 = ppcVar11;
      for (; ppcVar9 != ppcVar11; ppcVar9 = ppcVar9 + 2) {
        ppcVar10 = (code **)*ppcVar9;
        if (ppcVar10 == (code **)0x0 || *(char *)(ppcVar10 + 8) != '\x02') {
          ppcVar8 = param_2;
          if (ppcVar10 != (code **)0x0 && *(char *)(ppcVar10 + 8) == '\x01') {
            (**ppcVar10)(pppcVar6);
            ppcVar8 = ppcVar10;
          }
        }
        else {
          ppcVar7 = ppcVar10;
          FUN_10a688b40();
          if (ppcVar7 == (code **)0x0) {
            ppcVar8 = (code **)0x0;
            if (param_2 != (code **)0x0) {
              pcStack_a0 = ppcVar10[1];
              pcStack_a8 = *ppcVar10;
              if (ppcVar10[1] != (code *)0x0) {
                pcVar1 = ppcVar10[1] + 8;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar3) {
                    *(long *)pcVar1 = *(long *)pcVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppcStack_c0 = (code **)CONCAT44(ppcStack_c0._4_4_,uVar5);
              pcStack_b8 = FUN_10a2996d8;
              ppuStack_b0 = &PTR_DAT_110bb8588;
              ppcStack_d0 = (code **)0x0;
              ppcStack_c8 = (code **)0x0;
              ppcVar8 = &pcStack_b8;
              uStack_98 = uVar5;
              FUN_10a4634ec(param_2);
              (*(code *)*ppuStack_b0)(&ppuStack_b0);
            }
          }
          else {
            *ppcVar7 = (code *)CONCAT44((int)((ulong)*ppcVar7 >> 0x20) + 1,(int)*ppcVar7 + 1);
            ppcVar8 = (code **)auStack_d4;
            FUN_10a299544(*ppcVar10);
            iVar4 = *(int *)((long)ppcVar7 + 4) + -1;
            *(int *)((long)ppcVar7 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)ppcVar7 = 0;
            }
          }
        }
        param_2 = ppcVar8;
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (*(*param_1)[7])(&pcStack_b8,param_1,auStack_d4);
        ppcVar9 = param_1[1];
        ppcStack_c0 = param_1[3];
        ppcVar11 = param_1[2];
        param_1[2] = (code **)0x0;
        param_1[3] = (code **)0x0;
        param_1[1] = (code **)0x0;
        ppcStack_d0 = ppcVar9;
        ppcStack_c8 = ppcVar11;
        for (; ppcVar9 != ppcVar11; ppcVar9 = ppcVar9 + 8) {
          FUN_10a2974b8(ppcVar9,&pcStack_b8);
        }
        ppcVar9 = param_1[4];
        ppcStack_110 = param_1[6];
        ppcVar11 = param_1[5];
        param_1[5] = (code **)0x0;
        param_1[6] = (code **)0x0;
        param_1[4] = (code **)0x0;
        ppcStack_120 = ppcVar9;
        ppcStack_118 = ppcVar11;
        for (; ppcVar9 != ppcVar11; ppcVar9 = ppcVar9 + 2) {
          FUN_10a1bcbe0(*ppcVar9,&pcStack_b8);
        }
        FUN_10a2973e4(&ppcStack_120);
        FUN_10a297440(&ppcStack_d0);
        if ((long)pcStack_a8 < 0) {
          __ZdlPv(pcStack_b8);
        }
      }
      FUN_10a299418(&ppcStack_108);
      pppcVar6 = &ppcStack_f0;
      FUN_10a2994cc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppcVar6;
  }
  ___stack_chk_fail();
  FUN_10a299418(&ppcStack_108);
  FUN_10a2994cc(&ppcStack_f0);
  __Unwind_Resume();
  if (((pppcVar6[1] == pppcVar6[2]) && (pppcVar6[4] == pppcVar6[5])) && (pppcVar6[8] == pppcVar6[9])
     ) {
    return (code ***)(ulong)(pppcVar6[0xb] != pppcVar6[0xc]);
  }
  return (code ***)0x1;
}



/* Entry: 10a299398; end: 10a299417;  */

bool FUN_10a299398(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a299418; end: 10a2994cb;  */

void FUN_10a299418(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a299474();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a2994cc; end: 10a299543;  */

void FUN_10a2994cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a299544; end: 10a2996d7;  */

void FUN_10a299544(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*param_2;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a2996d8; end: 10a299713;  */

void FUN_10a2996d8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*(int *)(param_1 + 0x20);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a299714; end: 10a299813;  */

undefined8 * FUN_10a299714(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8640;
  func_0x00010a296708(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb7e50;
  FUN_10a2973e4(param_1 + 0xb);
  FUN_10a297440(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a299814; end: 10a299873;  */

void FUN_10a299814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a299820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x30))();
  return;
}



/* Entry: 10a299874; end: 10a299973;  */

undefined8 * FUN_10a299874(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8738;
  func_0x00010a296760(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a299974; end: 10a29999f;  */

void FUN_10a299974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a299980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x30))();
  return;
}



/* Entry: 10a2999a0; end: 10a299a5f;  */

long * FUN_10a2999a0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    param_2 = plStack_40;
    (**(code **)(*plStack_40 + 0x28))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_2 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_2;
  }
  plVar3 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  *plVar3 = (long)&PTR_DAT_110bb8738;
  func_0x00010a296760(plVar3 + 0xe);
  *plVar3 = (long)&PTR_DAT_110bb8040;
  FUN_10a297c80(plVar3 + 0xb);
  FUN_10a297d34(plVar3 + 8);
  *plVar3 = (long)&PTR_DAT_110bb7ea0;
  FUN_10a2973e4(plVar3 + 4);
  FUN_10a297440(plVar3 + 1);
  return plVar3;
}



/* Entry: 10a299a60; end: 10a299b5f;  */

undefined8 * FUN_10a299a60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8738;
  func_0x00010a296760(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a299b60; end: 10a299b6b;  */

long * FUN_10a299b60(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(*(long *)(param_2 + 0x38) + 0x900);
  FUN_10a597188(&plStack_40,plVar4);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    plVar4 = plStack_40;
    (**(code **)(*plStack_40 + 0x18))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      plVar4 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  *plVar4 = (long)&PTR_DAT_110bb8738;
  func_0x00010a296760(plVar4 + 0xe);
  *plVar4 = (long)&PTR_DAT_110bb8040;
  FUN_10a297c80(plVar4 + 0xb);
  FUN_10a297d34(plVar4 + 8);
  *plVar4 = (long)&PTR_DAT_110bb7ea0;
  FUN_10a2973e4(plVar4 + 4);
  FUN_10a297440(plVar4 + 1);
  return plVar4;
}



/* Entry: 10a299b6c; end: 10a299c2b;  */

long * FUN_10a299b6c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    param_2 = plStack_40;
    (**(code **)(*plStack_40 + 0x18))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_2 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_2;
  }
  plVar3 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  *plVar3 = (long)&PTR_DAT_110bb8738;
  func_0x00010a296760(plVar3 + 0xe);
  *plVar3 = (long)&PTR_DAT_110bb8040;
  FUN_10a297c80(plVar3 + 0xb);
  FUN_10a297d34(plVar3 + 8);
  *plVar3 = (long)&PTR_DAT_110bb7ea0;
  FUN_10a2973e4(plVar3 + 4);
  FUN_10a297440(plVar3 + 1);
  return plVar3;
}



/* Entry: 10a299c2c; end: 10a299d2b;  */

undefined8 * FUN_10a299c2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8738;
  func_0x00010a296760(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a299d2c; end: 10a299d37;  */

long * FUN_10a299d2c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(*(long *)(param_2 + 0x38) + 0x900);
  FUN_10a597188(&plStack_40,plVar4);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    plVar4 = plStack_40;
    (**(code **)(*plStack_40 + 0x20))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      plVar4 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  plVar6 = (long *)plVar4[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10a299d38; end: 10a299e37;  */

undefined8 * FUN_10a299d38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8738;
  func_0x00010a296760(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a299e38; end: 10a299e43;  */

long * FUN_10a299e38(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(*(long *)(param_2 + 0x38) + 0x900);
  FUN_10a597188(&plStack_40,plVar4);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    plVar4 = plStack_40;
    (**(code **)(*plStack_40 + 0x30))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      plVar4 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  *plVar4 = (long)&PTR_DAT_110bb8738;
  func_0x00010a296760(plVar4 + 0xe);
  *plVar4 = (long)&PTR_DAT_110bb8040;
  FUN_10a297c80(plVar4 + 0xb);
  FUN_10a297d34(plVar4 + 8);
  *plVar4 = (long)&PTR_DAT_110bb7ea0;
  FUN_10a2973e4(plVar4 + 4);
  FUN_10a297440(plVar4 + 1);
  return plVar4;
}



/* Entry: 10a299e44; end: 10a299f03;  */

long * FUN_10a299e44(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(auStack_48,*param_3);
    param_2 = plStack_40;
    (**(code **)(*plStack_40 + 0x30))(param_1,plStack_40,auStack_48);
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_2 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_2;
  }
  plVar3 = (long *)&UNK_10f64969e;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume();
  *plVar3 = (long)&PTR_DAT_110bb8738;
  func_0x00010a296760(plVar3 + 0xe);
  *plVar3 = (long)&PTR_DAT_110bb8040;
  FUN_10a297c80(plVar3 + 0xb);
  FUN_10a297d34(plVar3 + 8);
  *plVar3 = (long)&PTR_DAT_110bb7ea0;
  FUN_10a2973e4(plVar3 + 4);
  FUN_10a297440(plVar3 + 1);
  return plVar3;
}



/* Entry: 10a299f04; end: 10a29a003;  */

undefined8 * FUN_10a299f04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8738;
  func_0x00010a296760(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29a004; end: 10a29a00f;  */

long * FUN_10a29a004(undefined8 param_1,ulong param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_208;
  long *plStack_200;
  undefined *puStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = *(long **)(*(long *)(param_3 + 0x38) + 0x900);
  plVar7 = param_4;
  FUN_10a597188(&plStack_40,plVar3);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    plVar3 = plStack_40;
    (**(code **)(*plStack_40 + 0x38))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      plVar3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return plVar3;
  }
  plVar3 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar3);
  pcStack_58 = FUN_10a5975f8;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar7);
    plVar6 = &lStack_98;
    plVar3 = plStack_90;
    (**(code **)(*plStack_90 + 0x40))(extraout_x8,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar3 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar3;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_a8 = FUN_10a5976b8;
  plVar3 = plVar6;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    plVar7 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x48))(extraout_x8_00,plStack_e0);
    plVar3 = plVar6;
  }
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar7 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar7);
  pcStack_e8 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_f0 = &ppuStack_b0;
  FUN_10a597188(&plStack_120);
  if (plStack_120 != (long *)0x0) {
    plVar7 = plStack_120;
    (**(code **)(*plStack_120 + 0x50))(extraout_x8_01,plStack_120);
    uVar10 = param_2;
  }
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      plVar7 = plStack_118;
    }
  }
  if (plStack_120 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_120);
  __Unwind_Resume(plVar7);
  pcStack_128 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_130 = &pppuStack_f0;
  FUN_10a597188(&plStack_160);
  if (plStack_160 != (long *)0x0) {
    plVar7 = plStack_160;
    (**(code **)(*plStack_160 + 0x58))(extraout_x8_02,plStack_160);
    uVar9 = uVar10;
  }
  if (plStack_158 != (long *)0x0) {
    plVar6 = plStack_158 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
      plVar7 = plStack_158;
    }
  }
  if (plStack_160 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_160);
  __Unwind_Resume(plVar7);
  pcStack_168 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_170 = &pppuStack_130;
  FUN_10a597188(&plStack_1a0);
  if (plStack_1a0 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_1a0;
    (**(code **)(*plStack_1a0 + 0x58))(extraout_x8_03,uVar10,plStack_1a0);
  }
  if (plStack_198 != (long *)0x0) {
    plVar6 = plStack_198 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
      plVar7 = plStack_198;
    }
  }
  if (plStack_1a0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1a0);
  __Unwind_Resume(plVar7);
  pcStack_1a8 = FUN_10a597998;
  pppuStack_1b0 = &pppuStack_170;
  FUN_10a597188(&plStack_1e0);
  if (plStack_1e0 != (long *)0x0) {
    plVar7 = plStack_1e0;
    (**(code **)(*plStack_1e0 + 0x60))(extraout_x8_04,uVar10,plStack_1e0);
  }
  if (plStack_1d8 != (long *)0x0) {
    plVar6 = plStack_1d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      plVar7 = plStack_1d8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
    }
  }
  if (plStack_1e0 != (long *)0x0) {
    return plVar7;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1e0);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_200 = plStack_1d8;
  pcStack_1e8 = FUN_10a597a4c;
  plVar7 = (long *)*plVar3;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_1f8 = puVar4;
    pppuStack_1f0 = &pppuStack_1b0;
    func_0x00010988cc0c(&lStack_208);
    lVar8 = SUB168(SEXT816(lStack_208) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar3 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a29a010; end: 10a29a10f;  */

undefined8 * FUN_10a29a010(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8738;
  func_0x00010a296760(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8040;
  FUN_10a297c80(param_1 + 0xb);
  FUN_10a297d34(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29a110; end: 10a29a11b;  */

long * FUN_10a29a110(undefined8 param_1,ulong param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_1b8;
  long *plStack_1b0;
  undefined *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = *(long **)(*(long *)(param_3 + 0x38) + 0x900);
  plVar7 = param_4;
  FUN_10a597188(&plStack_40,plVar3);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    plVar3 = plStack_40;
    (**(code **)(*plStack_40 + 0x40))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      plVar3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return plVar3;
  }
  plVar3 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar3);
  pcStack_58 = FUN_10a5976b8;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    plVar3 = plStack_90;
    (**(code **)(*plStack_90 + 0x48))(extraout_x8,plStack_90);
    plVar6 = plVar7;
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar3 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar3;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_98 = FUN_10a59776c;
  uVar10 = param_2;
  ppuStack_a0 = &puStack_60;
  FUN_10a597188(&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    plVar7 = plStack_d0;
    (**(code **)(*plStack_d0 + 0x50))(extraout_x8_00,plStack_d0);
    uVar10 = param_2;
  }
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      plVar7 = plStack_c8;
    }
  }
  if (plStack_d0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_d0);
  __Unwind_Resume(plVar7);
  pcStack_d8 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_e0 = &ppuStack_a0;
  FUN_10a597188(&plStack_110);
  if (plStack_110 != (long *)0x0) {
    plVar7 = plStack_110;
    (**(code **)(*plStack_110 + 0x58))(extraout_x8_01,plStack_110);
    uVar9 = uVar10;
  }
  if (plStack_108 != (long *)0x0) {
    plVar3 = plStack_108 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      plVar7 = plStack_108;
    }
  }
  if (plStack_110 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_110);
  __Unwind_Resume(plVar7);
  pcStack_118 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_120 = &pppuStack_e0;
  FUN_10a597188(&plStack_150);
  if (plStack_150 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_150;
    (**(code **)(*plStack_150 + 0x58))(extraout_x8_02,uVar10,plStack_150);
  }
  if (plStack_148 != (long *)0x0) {
    plVar3 = plStack_148 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
      plVar7 = plStack_148;
    }
  }
  if (plStack_150 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_150);
  __Unwind_Resume(plVar7);
  pcStack_158 = FUN_10a597998;
  pppuStack_160 = &pppuStack_120;
  FUN_10a597188(&plStack_190);
  if (plStack_190 != (long *)0x0) {
    plVar7 = plStack_190;
    (**(code **)(*plStack_190 + 0x60))(extraout_x8_03,uVar10,plStack_190);
  }
  if (plStack_188 != (long *)0x0) {
    plVar3 = plStack_188 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      plVar7 = plStack_188;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  if (plStack_190 != (long *)0x0) {
    return plVar7;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_190);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_1b0 = plStack_188;
  pcStack_198 = FUN_10a597a4c;
  plVar7 = (long *)*plVar6;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_1a8 = puVar4;
    pppuStack_1a0 = &pppuStack_160;
    func_0x00010988cc0c(&lStack_1b8);
    lVar8 = SUB168(SEXT816(lStack_1b8) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar6 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a29a11c; end: 10a29a21b;  */

undefined8 * FUN_10a29a11c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8a60;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8ab0;
  FUN_10a29a810(param_1 + 0xb);
  FUN_10a29a8c4(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29a21c; end: 10a29a6fb;  */

/* WARNING: Type propagation algorithm not settling */

code **** FUN_10a29a21c(code ****param_1,code ****param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  code ****ppppcVar5;
  code ****ppppcVar6;
  code ***pppcVar7;
  code ***pppcVar8;
  code ****ppppcVar9;
  code ***pppcVar10;
  code ****ppppcStack_150;
  code ****ppppcStack_148;
  code ***pppcStack_140;
  code ***pppcStack_138;
  code ***pppcStack_130;
  code ***pppcStack_128;
  code ****ppppcStack_120;
  code ****ppppcStack_118;
  code ***pppcStack_110;
  code ***pppcStack_108;
  long lStack_100;
  code ****ppppcStack_f0;
  code ****ppppcStack_e8;
  code ***pppcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code ****ppppcStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar6 = param_1;
  (*(code *)(*param_1)[3])();
  if ((int)ppppcVar6 != 0) {
    (*(code *)(*param_1)[4])(param_1);
    ppppcVar6 = param_1;
    (*(code *)(*param_1)[5])();
    if ((int)ppppcVar6 != 0) {
      (*(code *)(*param_1)[6])(&pppcStack_108,param_1);
      ppppcVar6 = (code ****)param_1[8];
      pppcStack_110 = param_1[10];
      ppppcVar9 = (code ****)param_1[9];
      param_1[9] = (code ***)0x0;
      param_1[10] = (code ***)0x0;
      param_1[8] = (code ***)0x0;
      ppppcStack_120 = ppppcVar6;
      ppppcStack_118 = ppppcVar9;
      if (ppppcVar6 != ppppcVar9) {
        do {
          pppcVar8 = *ppppcVar6;
          ppppcStack_c0 = (code ****)0x0;
          ppuStack_b8 = (undefined **)0x0;
          puStack_b0 = (undefined8 *)0x0;
          FUN_10a26a074(&ppppcStack_c0,pppcStack_108,lStack_100,
                        lStack_100 - (long)pppcStack_108 >> 4);
          param_2 = ppppcVar6;
          (*(code *)pppcVar8)(&ppppcStack_c0);
          ppppcStack_f0 = (code ****)&ppppcStack_c0;
          FUN_10a26a1e8(&ppppcStack_f0);
          ppppcVar6 = ppppcVar6 + 8;
        } while (ppppcVar6 != ppppcVar9);
      }
      pppcVar8 = param_1[0xb];
      pppcStack_128 = param_1[0xd];
      pppcVar10 = param_1[0xc];
      param_1[0xc] = (code ***)0x0;
      param_1[0xd] = (code ***)0x0;
      param_1[0xb] = (code ***)0x0;
      pppcStack_138 = pppcVar8;
      pppcStack_130 = pppcVar10;
      if (pppcVar8 != pppcVar10) {
        do {
          ppppcVar6 = (code ****)*pppcVar8;
          if (ppppcVar6 == (code ****)0x0 || *(char *)(ppppcVar6 + 8) != '\x02') {
            ppppcVar5 = param_2;
            if (ppppcVar6 != (code ****)0x0 && *(char *)(ppppcVar6 + 8) == '\x01') {
              pppcVar7 = *ppppcVar6;
              ppppcStack_c0 = (code ****)0x0;
              ppuStack_b8 = (undefined **)0x0;
              puStack_b0 = (undefined8 *)0x0;
              FUN_10a26a074(&ppppcStack_c0,pppcStack_108,lStack_100,
                            lStack_100 - (long)pppcStack_108 >> 4);
              (*(code *)pppcVar7)(&ppppcStack_c0);
              ppppcStack_f0 = (code ****)&ppppcStack_c0;
              FUN_10a26a1e8(&ppppcStack_f0);
              ppppcVar5 = ppppcVar6;
            }
          }
          else {
            ppppcVar9 = ppppcVar6;
            FUN_10a688b40();
            if (ppppcVar9 == (code ****)0x0) {
              ppppcVar5 = param_2;
              if (param_2 != (code ****)0x0) {
                ppppcStack_e8 = (code ****)ppppcVar6[1];
                ppppcStack_f0 = (code ****)*ppppcVar6;
                if (ppppcVar6[1] != (code ***)0x0) {
                  pppcVar7 = ppppcVar6[1] + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppcVar7,0x10);
                    if (bVar2) {
                      *pppcVar7 = (code **)((long)*pppcVar7 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppcStack_e0 = (code ***)0x0;
                uStack_d8 = 0;
                uStack_d0 = 0;
                FUN_10a26a074(&pppcStack_e0,pppcStack_108,lStack_100,
                              lStack_100 - (long)pppcStack_108 >> 4);
                ppppcStack_c0 = (code ****)FUN_10a29ab18;
                ppuStack_b8 = &PTR_FUN_110bb8af0;
                puVar4 = (undefined8 *)0x28;
                __Znwm();
                puVar4[1] = ppppcStack_e8;
                *puVar4 = ppppcStack_f0;
                ppppcStack_f0 = (code ****)0x0;
                ppppcStack_e8 = (code ****)0x0;
                puVar4[3] = 0;
                puVar4[4] = 0;
                puVar4[2] = 0;
                FUN_10a26a074();
                ppppcVar5 = (code ****)&ppppcStack_c0;
                puStack_b0 = puVar4;
                FUN_10a4634ec(param_2);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                ppppcStack_150 = &pppcStack_e0;
                FUN_10a26a1e8(&ppppcStack_150);
                ppppcVar6 = ppppcStack_e8;
                if (ppppcStack_e8 != (code ****)0x0) {
                  ppppcVar9 = ppppcStack_e8 + 1;
                  do {
                    pppcVar7 = *ppppcVar9;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppcVar9,0x10);
                    if (bVar2) {
                      *ppppcVar9 = (code ***)((long)pppcVar7 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (pppcVar7 == (code ***)0x0) {
                    (*(code *)(*ppppcStack_e8)[2])(ppppcStack_e8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar6);
                  }
                }
              }
            }
            else {
              *ppppcVar9 = (code ***)
                           CONCAT44((int)((ulong)*ppppcVar9 >> 0x20) + 1,(int)*ppppcVar9 + 1);
              ppppcVar5 = &pppcStack_108;
              FUN_10a29a93c(*ppppcVar6);
              iVar3 = *(int *)((long)ppppcVar9 + 4) + -1;
              *(int *)((long)ppppcVar9 + 4) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)ppppcVar9 = 0;
              }
            }
          }
          pppcVar8 = pppcVar8 + 2;
          param_2 = ppppcVar5;
        } while (pppcVar8 != pppcVar10);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (*(code *)(*param_1)[7])(&ppppcStack_c0,param_1,&pppcStack_108);
        ppppcVar6 = (code ****)param_1[1];
        pppcStack_e0 = param_1[3];
        ppppcVar9 = (code ****)param_1[2];
        param_1[2] = (code ***)0x0;
        param_1[3] = (code ***)0x0;
        param_1[1] = (code ***)0x0;
        ppppcStack_f0 = ppppcVar6;
        ppppcStack_e8 = ppppcVar9;
        for (; ppppcVar6 != ppppcVar9; ppppcVar6 = ppppcVar6 + 8) {
          FUN_10a2974b8(ppppcVar6,&ppppcStack_c0);
        }
        ppppcVar6 = (code ****)param_1[4];
        pppcStack_140 = param_1[6];
        ppppcVar9 = (code ****)param_1[5];
        param_1[5] = (code ***)0x0;
        param_1[6] = (code ***)0x0;
        param_1[4] = (code ***)0x0;
        ppppcStack_150 = ppppcVar6;
        ppppcStack_148 = ppppcVar9;
        for (; ppppcVar6 != ppppcVar9; ppppcVar6 = ppppcVar6 + 2) {
          FUN_10a1bcbe0(*ppppcVar6,&ppppcStack_c0);
        }
        FUN_10a2973e4(&ppppcStack_150);
        FUN_10a297440(&ppppcStack_f0);
        if ((long)puStack_b0 < 0) {
          __ZdlPv(ppppcStack_c0);
        }
      }
      FUN_10a29a810(&pppcStack_138);
      FUN_10a29a8c4(&ppppcStack_120);
      ppppcStack_c0 = &pppcStack_108;
      ppppcVar6 = (code ****)&ppppcStack_c0;
      FUN_10a26a1e8();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppcVar6;
  }
  ___stack_chk_fail();
  FUN_10a29a810(&pppcStack_138);
  FUN_10a29a8c4(&ppppcStack_120);
  ppppcStack_f0 = &pppcStack_108;
  FUN_10a26a1e8(&ppppcStack_f0);
  __Unwind_Resume();
  if (((ppppcVar6[1] == ppppcVar6[2]) && (ppppcVar6[4] == ppppcVar6[5])) &&
     (ppppcVar6[8] == ppppcVar6[9])) {
    return (code ****)(ulong)(ppppcVar6[0xb] != ppppcVar6[0xc]);
  }
  return (code ****)0x1;
}



/* Entry: 10a29a6fc; end: 10a29a737;  */

bool FUN_10a29a6fc(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29a738; end: 10a29a777;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c80) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */

void FUN_10a29a738(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,1);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 1;
      }
      else {
        unaff_x22 = 1;
        if (uVar20 < 2) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 1 / uVar1;
          }
          unaff_x22 = (ulong)(1 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 1) break;
            if (*(char *)(plVar16 + 2) == '\x01') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 1;
    *(undefined1 *)(plVar16 + 2) = 1;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 1;
      }
      else if (uVar20 < 2) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 1 / uVar20;
        }
        unaff_x22 = 1 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 1;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 1;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c94cb,0x24,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29a778; end: 10a29a7af;  */

bool FUN_10a29a778(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 1;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29a7b0; end: 10a29a7ef;  */

void FUN_10a29a7b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar4 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar4,1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)plVar4[1];
  lVar5 = (long)puVar1 - (long)puVar7 >> 4;
  if (lVar5 != 0) {
    FUN_10a26a110(param_1,lVar5);
    puVar6 = (undefined8 *)param_1[1];
    for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      lVar5 = puVar7[1];
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a29a7f0; end: 10a29a80f;  */

void FUN_10a29a7f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29a810; end: 10a29a8c3;  */

void FUN_10a29a810(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a29a86c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29a8c4; end: 10a29a93b;  */

void FUN_10a29a8c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a29a93c; end: 10a29aadb;  */

void FUN_10a29a93c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a278250(aiStack_70,plVar1,*param_2,param_2[1] - *param_2 >> 4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29aadc; end: 10a29ab17;  */

void FUN_10a29aadc(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x10;
  FUN_10a26a1e8(&lStack_28);
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a29ab18; end: 10a29ab23;  */

void FUN_10a29ab18(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar3 = (long *)*puVar1;
  FUN_10a278250(aiStack_70,plVar3,puVar2[2],(long)(puVar2[3] - puVar2[2]) >> 4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar3;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29ab24; end: 10a29ab67;  */

void FUN_10a29ab24(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 0x10;
    FUN_10a26a1e8(&lStack_28);
    func_0x00010a004dac(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a29ab68; end: 10a29ab7f;  */

void FUN_10a29ab68(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a29ab80; end: 10a29ac7f;  */

undefined8 * FUN_10a29ab80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8a60;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8ab0;
  FUN_10a29a810(param_1 + 0xb);
  FUN_10a29a8c4(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29ac80; end: 10a29acbf;  */

/* WARNING: Removing unreachable block (ram,0x00010a536ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */

void FUN_10a29ac80(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,2);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 2;
      }
      else {
        unaff_x22 = 2;
        if (uVar20 < 3) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 2 / uVar1;
          }
          unaff_x22 = (ulong)(2 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 2) break;
            if (*(char *)(plVar16 + 2) == '\x02') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 2;
    *(undefined1 *)(plVar16 + 2) = 2;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 2;
      }
      else if (uVar20 < 3) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 2 / uVar20;
        }
        unaff_x22 = 2 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 2;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 2;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c94f0,0x25,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29acc0; end: 10a29acf7;  */

bool FUN_10a29acc0(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 2;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29acf8; end: 10a29ad37;  */

void FUN_10a29acf8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar4 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar4,2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)plVar4[1];
  lVar5 = (long)puVar1 - (long)puVar7 >> 4;
  if (lVar5 != 0) {
    FUN_10a26a110(param_1,lVar5);
    puVar6 = (undefined8 *)param_1[1];
    for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      lVar5 = puVar7[1];
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a29ad38; end: 10a29ad43;  */

void FUN_10a29ad38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


