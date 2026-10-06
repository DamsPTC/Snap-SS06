/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2160b0; end: 10b216627;  */

undefined8 ** FUN_10b2160b0(undefined8 *param_1,int *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 in_ZR;
  int *piVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 *apuStack_240 [6];
  undefined1 auStack_210 [8];
  ulong uStack_208;
  byte bStack_1f9;
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  int iStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *apuStack_1a0 [3];
  undefined1 **ppuStack_188;
  undefined1 auStack_180 [24];
  uint uStack_168;
  byte bStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_128;
  undefined **appuStack_108 [3];
  undefined ***pppuStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  int iStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *apuStack_b0 [3];
  undefined1 **ppuStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  puVar9 = &uStack_280;
  func_0x00010b2173d8();
  uStack_68 = extraout_x8;
  if (puRam0000000113847068 != (undefined8 *)0x0) goto LAB_10b2164f4;
  piVar6 = param_2;
  func_0x000107c31450();
  func_0x000107c27c1c(&uStack_e8,1);
  puVar4 = puStack_d8;
  puStack_d8[2] = 0;
  *puStack_d8 = &PTR_DAT_1107ea880;
  puStack_d8[1] = 0;
  func_0x000107c278b8(&puStack_1e0,&UNK_10f73a6f1);
  ppuVar8 = &puStack_1e0;
  func_0x000107c31460(puVar4 + 3,ppuVar8,0x18,piVar6,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1e0);
  puStack_258 = puStack_d8;
  puStack_d8 = (undefined8 *)0x0;
  puStack_260 = puStack_258 + 3;
  func_0x000107c27c24(&uStack_e8);
  if (*param_2 == 1) {
    if ((char)param_2[0x12] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_210,param_2 + 0xc);
    }
    else {
      func_0x000107c278b8(auStack_210,"aws.api.snapchat.com");
    }
    if (-1 < (char)bStack_1f9) {
      uStack_208 = (ulong)bStack_1f9;
    }
    if (uStack_208 == 0) {
      func_0x000107c278b8(&uStack_e8,"aws.api.snapchat.com");
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_e8,auStack_210);
    }
    iStack_d0 = param_2[1];
    if ((char)param_2[2] == '\0') {
      iStack_d0 = 0x1bb;
    }
    unaff_x24 = &uStack_e8;
    func_0x000104bff97c(&uStack_c8,param_2 + 4,&UNK_10f73a6f0);
    puStack_248 = *(undefined1 **)(param_2 + 0x2a);
    puStack_250 = *(undefined1 **)(param_2 + 0x28);
    if (*(long *)(param_2 + 0x2a) != 0) {
      do {
        func_0x00010b2173f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c2791c(apuStack_240,param_2 + 0x1e);
    ppuStack_98 = (undefined1 **)0x0;
    ppuVar7 = (undefined1 **)0x40;
    __Znwm();
    *ppuVar7 = (undefined1 *)&PTR_SUB_110cc7e18;
    ppuVar7[2] = puStack_248;
    ppuVar7[1] = puStack_250;
    puStack_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    ppuVar8 = apuStack_240;
    func_0x000107c27bc0(ppuVar7 + 3);
    ppuStack_98 = ppuVar7;
    if ((*(char *)((long)param_2 + 0x51) == '\x01') && ((*(byte *)(param_2 + 0x14) & 1) != 0)) {
      if ((char)param_2[0x1c] == '\x01') {
        piVar6 = param_2 + 0x16;
        func_0x00010549026c();
        uVar11 = *(ulong *)(piVar6 + 2);
        if (-1 < (char)*(byte *)((long)piVar6 + 0x17)) {
          uVar11 = (ulong)*(byte *)((long)piVar6 + 0x17);
        }
        if (uVar11 != 0) {
          ppuVar8 = (undefined1 **)(param_2 + 0x16);
          func_0x00010549026c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_1f8);
          uStack_88 = uStack_1f0;
          puStack_90 = puStack_1f8;
          uStack_80 = uStack_1e8;
          uStack_1f0 = 0;
          uStack_1e8 = 0;
          puStack_1f8 = (undefined1 *)0x0;
          uStack_78 = 2;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1f8);
          goto LAB_10b216340;
        }
      }
      uStack_78 = 0;
    }
    else {
      uStack_78 = 1;
    }
LAB_10b216340:
    bStack_70 = *(byte *)((long)param_2 + 0xb1) & *(byte *)(param_2 + 0x2c);
    puStack_1e0._0_4_ = 0;
    uStack_1d0 = uStack_e0;
    uStack_1d8 = uStack_e8;
    puStack_1c8 = puStack_d8;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_d8 = (undefined8 *)0x0;
    iStack_1c0 = iStack_d0;
    uStack_1b0 = uStack_c0;
    uStack_1b8 = uStack_c8;
    uStack_1a8 = uStack_b8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    if (ppuStack_98 == (undefined1 **)0x0) {
      ppuStack_188 = (undefined1 **)0x0;
    }
    else if (ppuStack_98 == apuStack_b0) {
      ppuVar8 = apuStack_1a0;
      ppuStack_188 = ppuVar8;
      (**(code **)(*ppuStack_98 + 0x18))();
    }
    else {
      ppuStack_188 = ppuStack_98;
      ppuStack_98 = (undefined1 **)0x0;
    }
    auStack_180[0] = 0;
    uStack_168 = 0xffffffff;
    FUN_10b216aac(auStack_180);
    uVar5 = uStack_78;
    in_ZR = uStack_78 == 0xffffffff;
    if (!(bool)in_ZR) {
      ppuVar8 = &puStack_90;
      puStack_1f8 = auStack_180;
      (*(code *)(&PTR_DAT_110cc7ea0)[uStack_78])(&puStack_1f8);
      uStack_168 = uVar5;
    }
    bStack_160 = bStack_70;
    FUN_10b216b38(&uStack_e8);
    FUN_10b2168dc(&puStack_250);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
  }
  else {
    uVar11 = (ulong)(uint)param_2[1];
    puStack_1e0._0_4_ = 1;
    uStack_1d8 = (ulong)(*(byte *)(param_2 + 0x14) & 1) << 0x20;
    if (*(char *)((long)param_2 + 0x51) == '\0') {
      uStack_1d8 = 0;
    }
    in_ZR = (char)param_2[2] == '\0';
    if ((bool)in_ZR) {
      uVar11 = 0x2329;
    }
    uStack_1d8 = uStack_1d8 | uVar11;
  }
  puStack_158 = puStack_260;
  puStack_150 = puStack_258;
  if (puStack_258 == (undefined8 *)0x0) {
    func_0x00010b217408();
  }
  else {
    plVar1 = puStack_258 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010b217408();
    if (extraout_x9 != 0) {
      plVar1 = (long *)(extraout_x9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  ppuStack_128 = &PTR_FUN_110cc7f58;
  uStack_280 = 0;
  uStack_278 = 0;
  pppuStack_f0 = appuStack_108;
  appuStack_108[0] = &PTR_FUN_110cc7fe8;
  FUN_10b215f2c(&uStack_270);
  func_0x00010b216b70(&puStack_1e0);
  func_0x000107c27c20();
  func_0x00010b21748c();
  param_3 = (int)ppuVar8;
  puVar9[1] = lStack_268;
  *puVar9 = uStack_270;
  if (lStack_268 != 0) {
    do {
      func_0x00010b2173f8();
      param_3 = (int)ppuVar8;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010bcbee94();
  func_0x0001077f3bd4(&uStack_270);
  func_0x000107c27c20(&puStack_260);
LAB_10b2164f4:
  puVar9 = puRam0000000113847068;
  ppuVar10 = (undefined8 **)0x28;
  __Znwm();
  ppuVar10[1] = (undefined8 *)0x0;
  ppuVar10[2] = (undefined8 *)0x0;
  *ppuVar10 = &PTR_DAT_110cc8068;
  ppuVar10[3] = &PTR_FUN_110cc7da0;
  ppuVar10[4] = puVar9;
  *param_1 = ppuVar10 + 3;
  param_1[1] = ppuVar10;
  func_0x00010b21738c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_3 != 0) {
      func_0x000104bd46a0();
      FUN_10b2168dc(&puStack_250);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x24 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
      ppuVar10 = &puStack_260;
      func_0x000107c27c20();
    }
    func_0x00010b2173f0();
    *ppuVar10 = &PTR_FUN_110cc7da0;
    (**(code **)(*(long *)*ppuVar10[1] + 0x18))();
    return ppuVar10;
  }
  return ppuVar10;
}



/* Entry: 10b216628; end: 10b216667;  */

undefined8 * FUN_10b216628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7da0;
  (**(code **)(**(long **)param_1[1] + 0x18))();
  return param_1;
}



/* Entry: 10b216668; end: 10b21666b;  */

undefined8 * FUN_10b216668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7da0;
  (**(code **)(**(long **)param_1[1] + 0x18))();
  return param_1;
}



/* Entry: 10b21666c; end: 10b21667f;  */

void FUN_10b21666c(void)

{
  FUN_10b216628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b216680; end: 10b2166cb;  */

void FUN_10b216680(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,&UNK_10f73a6d2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  return;
}



/* Entry: 10b2166cc; end: 10b216857;  */

void FUN_10b2166cc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puVar4;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010b2173d8();
  puVar4 = *(undefined8 **)(param_1 + 8);
  uStack_98 = *param_2;
  lStack_90 = param_2[1];
  if (lStack_90 == 0) {
    lStack_78 = 0;
    lStack_a0 = 0;
    uStack_a8 = uStack_98;
  }
  else {
    plVar1 = (long *)(lStack_90 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_a0 = param_2[1];
    uStack_a8 = *param_2;
    lStack_78 = lStack_90;
  }
  pppuStack_70 = &ppuStack_88;
  ppuStack_88 = &PTR_FUN_110cc80b8;
  pppuStack_50 = &ppuStack_68;
  if (lStack_a0 != 0) {
    plVar1 = (long *)(lStack_a0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_68 = &PTR_FUN_110cc8138;
  if (lStack_a0 != 0) {
    plVar1 = (long *)(lStack_a0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppuStack_30 = &ppuStack_48;
  uStack_b8 = *param_2;
  lStack_b0 = param_2[1];
  if (lStack_b0 != 0) {
    plVar1 = (long *)(lStack_b0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_48 = &PTR_FUN_110cc81b8;
  if (lStack_b0 != 0) {
    plVar1 = (long *)(lStack_b0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_80 = uStack_98;
  uStack_60 = uStack_a8;
  lStack_58 = lStack_a0;
  uStack_40 = uStack_b8;
  lStack_38 = lStack_b0;
  uStack_28 = extraout_x8;
  (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&ppuStack_88);
  func_0x00010729f578(&ppuStack_88);
  func_0x0001062d9cb4(&uStack_b8);
  func_0x0001062d9cb4(&uStack_a8);
  func_0x0001062d9cb4(&uStack_98);
  func_0x00010b21738c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010729f578(&ppuStack_88);
    func_0x0001062d9cb4(&uStack_b8);
    func_0x0001062d9cb4(&uStack_a8);
    puVar4 = &uStack_98;
    func_0x0001062d9cb4();
    func_0x00010b2173f0();
                    /* WARNING: Could not recover jumptable at 0x00010b217488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)puVar4[1] + 0x18))();
    return;
  }
  return;
}



/* Entry: 10b216858; end: 10b216863;  */

void FUN_10b216858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b217488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 10b216864; end: 10b21688f;  */

void FUN_10b216864(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x00010b21688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x20))();
  return;
}



/* Entry: 10b216890; end: 10b21689b;  */

void FUN_10b216890(void)

{
  return;
}



/* Entry: 10b21689c; end: 10b2168db;  */

long FUN_10b21689c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c278b8();
  func_0x000107c278b8(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 10b2168dc; end: 10b21692f;  */

undefined8 FUN_10b2168dc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c278e0(param_1 + 0x10);
  func_0x0001062d9dac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b216930; end: 10b216943;  */

void FUN_10b216930(void)

{
  func_0x00010b216904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b216944; end: 10b216983;  */

undefined8 FUN_10b216944(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_10b216a48();
  return uVar1;
}



/* Entry: 10b216984; end: 10b2169a7;  */

undefined8 * FUN_10b216984(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110cc7e18;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b2173f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2791c(param_2 + 3,puVar1 + 2);
  return param_2;
}



/* Entry: 10b2169a8; end: 10b216a13;  */

void FUN_10b2169a8(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
  }
  else {
    (**(code **)(**(long **)(param_2 + 8) + 0x10))(param_1);
  }
  func_0x000107c27920(param_1,*(undefined8 *)(param_2 + 0x28),0);
  return;
}



/* Entry: 10b216a14; end: 10b216a3b;  */

void FUN_10b216a14(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc7e78);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b216a3c; end: 10b216a47;  */

undefined ** FUN_10b216a3c(void)

{
  return &PTR_DAT_110cc7e78;
}



/* Entry: 10b216a48; end: 10b216aab;  */

undefined8 * FUN_10b216a48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_110cc7e18;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b2173f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2791c(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 10b216aac; end: 10b216aff;  */

void FUN_10b216aac(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cc7e88)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10b216b00; end: 10b216b37;  */

void FUN_10b216b00(void)

{
  return;
}



/* Entry: 10b216b38; end: 10b216bd7;  */

void FUN_10b216b38(long param_1)

{
  FUN_10b216aac(param_1 + 0x58);
  func_0x0001073288c0(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b216bd8; end: 10b216c5f;  */

undefined1 * FUN_10b216bd8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010b2173d8();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_10b216c60(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110cc8238;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110d98e38;
  puStack_30[5] = 0;
  puStack_30[6] = 0;
  puStack_30[4] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010b216cec();
  func_0x00010b21738c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10b216c88();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b216c60; end: 10b216c87;  */

long FUN_10b216c60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b216c88();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b216c88; end: 10b216cb7;  */

void FUN_10b216c88(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc8238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b216cb8; end: 10b216cbb;  */

void FUN_10b216cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b216cbc; end: 10b216ccf;  */

void FUN_10b216cbc(void)

{
  func_0x00010b216cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b216cd0; end: 10b216d03;  */

void FUN_10b216cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b217454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b216d04; end: 10b216d23;  */

void FUN_10b216d04(undefined8 *param_1)

{
  func_0x00010b21748c();
  *param_1 = &PTR_DAT_110cc7ec8;
  return;
}



/* Entry: 10b216d24; end: 10b216d43;  */

void FUN_10b216d24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110cc7ec8;
  return;
}



/* Entry: 10b216d44; end: 10b216e03;  */

void FUN_10b216d44(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_31;
  
  lVar1 = *param_3;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_50,lVar1);
  lVar1 = lVar1 + 1;
  while (lVar1 = lVar1 + -1, lVar1 != 0) {
    func_0x000107c2b3b8(&bStack_31,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_50,(long)(char)(&UNK_10f73a6fb)[(uint)bStack_31 % 0x22]);
  }
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  return;
}



/* Entry: 10b216e04; end: 10b216e2b;  */

void FUN_10b216e04(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc7f38);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b216e2c; end: 10b216e37;  */

undefined ** FUN_10b216e2c(void)

{
  return &PTR_DAT_110cc7f38;
}



/* Entry: 10b216e38; end: 10b216e63;  */

undefined8 * FUN_10b216e38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7f58;
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 10b216e64; end: 10b216e77;  */

void FUN_10b216e64(void)

{
  FUN_10b216e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b216e78; end: 10b216eab;  */

void FUN_10b216e78(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b2173cc();
  func_0x00010b2173b8(&PTR_FUN_110cc7f58);
  if (extraout_x8 != 0) {
    do {
      func_0x00010b2173f8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b216eac; end: 10b216ef3;  */

void FUN_10b216eac(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110cc7f58;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b2173f8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b216ef4; end: 10b216f67;  */

void FUN_10b216ef4(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar1;
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  func_0x00010b2173d8();
  plVar1 = *(long **)(param_1 + 8);
  uStack_28 = extraout_x8;
  func_0x00010873a26c(auStack_88);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_88);
  func_0x00010b217434();
  func_0x00010b21738c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b217434();
  func_0x00010b2173f0();
  func_0x00010b217428();
  func_0x00010b2173e8();
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b216f68; end: 10b216f8f;  */

void FUN_10b216f68(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc7fc8);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b216f90; end: 10b216f9b;  */

undefined ** FUN_10b216f90(void)

{
  return &PTR_DAT_110cc7fc8;
}



/* Entry: 10b216f9c; end: 10b216fd7;  */

long FUN_10b216f9c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010b217474(uVar1);
  return param_1;
}



/* Entry: 10b216fd8; end: 10b216fdf;  */

void FUN_10b216fd8(void)

{
  return;
}



/* Entry: 10b216fe0; end: 10b216fff;  */

void FUN_10b216fe0(undefined8 *param_1)

{
  func_0x00010b21748c();
  *param_1 = &PTR_FUN_110cc7fe8;
  return;
}



/* Entry: 10b217000; end: 10b217023;  */

void FUN_10b217000(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110cc7fe8;
  return;
}



/* Entry: 10b217024; end: 10b21704b;  */

void FUN_10b217024(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc8048);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b21704c; end: 10b21705b;  */

undefined ** FUN_10b21704c(void)

{
  return &PTR_DAT_110cc8048;
}



/* Entry: 10b21705c; end: 10b21706f;  */

void FUN_10b21705c(void)

{
  func_0x00010b217078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b217070; end: 10b217087;  */

void FUN_10b217070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b217454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b217088; end: 10b2170af;  */

undefined8 FUN_10b217088(undefined8 param_1)

{
  func_0x00010b217444(&PTR_FUN_110cc80b8);
  return param_1;
}



/* Entry: 10b2170b0; end: 10b2170c3;  */

void FUN_10b2170b0(void)

{
  FUN_10b217088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2170c4; end: 10b2170f7;  */

void FUN_10b2170c4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b2173cc();
  func_0x00010b2173b8(&PTR_FUN_110cc80b8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010b2173f8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b2170f8; end: 10b217153;  */

void FUN_10b2170f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110cc80b8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b2173f8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b217154; end: 10b21717b;  */

void FUN_10b217154(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc8118);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b21717c; end: 10b217187;  */

undefined ** FUN_10b21717c(void)

{
  return &PTR_DAT_110cc8118;
}



/* Entry: 10b217188; end: 10b2171af;  */

undefined8 FUN_10b217188(undefined8 param_1)

{
  func_0x00010b217444(&PTR_FUN_110cc8138);
  return param_1;
}



/* Entry: 10b2171b0; end: 10b2171c3;  */

void FUN_10b2171b0(void)

{
  FUN_10b217188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2171c4; end: 10b2171f7;  */

void FUN_10b2171c4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b2173cc();
  func_0x00010b2173b8(&PTR_FUN_110cc8138);
  if (extraout_x8 != 0) {
    do {
      func_0x00010b2173f8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b2171f8; end: 10b21724b;  */

void FUN_10b2171f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110cc8138;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b2173f8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b21724c; end: 10b217273;  */

void FUN_10b21724c(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc8198);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b217274; end: 10b21727f;  */

undefined ** FUN_10b217274(void)

{
  return &PTR_DAT_110cc8198;
}



/* Entry: 10b217280; end: 10b2172a7;  */

undefined8 FUN_10b217280(undefined8 param_1)

{
  func_0x00010b217444(&PTR_FUN_110cc81b8);
  return param_1;
}



/* Entry: 10b2172a8; end: 10b2172bb;  */

void FUN_10b2172a8(void)

{
  FUN_10b217280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2172bc; end: 10b2172ef;  */

void FUN_10b2172bc(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b2173cc();
  func_0x00010b2173b8(&PTR_FUN_110cc81b8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010b2173f8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b2172f0; end: 10b21734b;  */

void FUN_10b2172f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110cc81b8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b2173f8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b21734c; end: 10b217373;  */

void FUN_10b21734c(undefined8 param_1)

{
  func_0x00010b217428();
  func_0x00010b2173e8(param_1,&PTR_DAT_110cc8218);
  func_0x00010b2173a0();
  return;
}



/* Entry: 10b217374; end: 10b217493;  */

undefined ** FUN_10b217374(void)

{
  return &PTR_DAT_110cc8218;
}



/* Entry: 10b217494; end: 10b217507;  */

undefined8 FUN_10b217494(void)

{
  int iVar1;
  
  if ((bRam00000001138396d8 & 1) == 0) {
    iVar1 = 0x138396d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10b217508(0x1138396d0);
      ___cxa_guard_release(0x1138396d8);
    }
  }
  return 0x1138396d0;
}



/* Entry: 10b217508; end: 10b21752f;  */

void FUN_10b217508(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  __Znwm();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b217530; end: 10b217533;  */

undefined8 * FUN_10b217530(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc8368;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 10b217534; end: 10b2175d7;  */

void FUN_10b217534(undefined8 *param_1)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x000107c35138();
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x000107c3516c();
  uStack_60 = 0;
  uStack_48 = 1;
  func_0x000107c35154();
  func_0x000107c2be90(auStack_68);
  func_0x000107c35164();
  func_0x000107c278b8(auStack_80);
  func_0x000107c35158(auStack_98);
  func_0x000107c35170();
  func_0x000107c35150(*(undefined8 *)(*(long *)*param_1 + 0x10),(long *)*param_1,auStack_68);
  func_0x000107c3514c();
  func_0x000107c3515c();
  func_0x000107c35174();
  return;
}



/* Entry: 10b2175d8; end: 10b2176df;  */

void FUN_10b2175d8(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long extraout_x8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c2beac();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107c3516c();
  uStack_78 = 0;
  uStack_60 = 3;
  func_0x000107c35160();
  func_0x000107c2be90(auStack_80,*(undefined4 *)(extraout_x8 + (long)param_2 * 4));
  func_0x000107c35164();
  func_0x000107c278b8(auStack_98);
  func_0x000107c2be9c(auStack_b0,param_3,param_4);
  func_0x00010b217b60();
  func_0x000107c278b8(auStack_58,
                      (&PTR_s_code_11336c560)[*(uint *)(&UNK_10e56a50c + (long)param_5 * 4) >> 0x10]
                     );
  func_0x00010b217b80();
  func_0x00010b217b40();
  func_0x000107c35178(*param_1);
  func_0x000107c35150();
  func_0x000107c35144();
  func_0x00010b217af8();
  func_0x00010b217b78();
  return;
}



/* Entry: 10b2176e0; end: 10b2177db;  */

void FUN_10b2176e0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  long extraout_x8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  func_0x000107c2beac();
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x000107c3516c();
  uStack_70 = 0;
  uStack_58 = 6;
  func_0x000107c35160();
  func_0x000107c2be90(auStack_78,*(undefined4 *)(extraout_x8 + (long)param_2 * 4));
  func_0x000107c35164();
  func_0x000107c278b8(auStack_90);
  func_0x000107c2be9c(auStack_a8,param_3,param_4);
  func_0x00010b217b48();
  func_0x000107c2bea0(auStack_78,*(undefined4 *)(&UNK_10e56a518 + (long)param_7 * 4));
  func_0x000107c35180();
  func_0x00010b217b2c();
  func_0x000107c35178(*param_1);
  func_0x000107c35150();
  func_0x000107c35144();
  func_0x00010b217af8();
  func_0x00010b217b70();
  func_0x00010b217b58();
  return;
}



/* Entry: 10b2177dc; end: 10b2178b7;  */

void FUN_10b2177dc(undefined8 *param_1,int param_2)

{
  long extraout_x8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  func_0x000107c2beac();
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x000107c3516c();
  uStack_70 = 0;
  uStack_58 = 5;
  func_0x000107c35160();
  func_0x000107c2be90(auStack_78,*(undefined4 *)(extraout_x8 + (long)param_2 * 4));
  func_0x000107c35164();
  func_0x000107c278b8(auStack_90);
  func_0x000107c3517c(auStack_a8);
  func_0x00010b217b48();
  func_0x000107c35180();
  func_0x00010b217b2c();
  func_0x000107c35178(*param_1);
  func_0x000107c35150();
  func_0x000107c35144();
  func_0x00010b217af8();
  func_0x00010b217b70();
  func_0x00010b217b58();
  return;
}



/* Entry: 10b2178b8; end: 10b217ab3;  */

void FUN_10b2178b8(undefined8 *param_1)

{
  int in_w4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c35138();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107c3516c();
  uStack_78 = 0;
  uStack_60 = 7;
  func_0x000107c35154();
  func_0x000107c2be90(auStack_80);
  func_0x000107c35164();
  func_0x000107c278b8(auStack_98);
  func_0x000107c35158(auStack_b0);
  func_0x00010b217b60();
  switch(in_w4) {
  case 0:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  default:
    if ((in_w4 == 100) || (in_w4 == 0x65)) break;
  case 1:
  }
  func_0x000107c278b8(auStack_58,PTR_s_code_11336c560);
  func_0x00010b217b80();
  func_0x00010b217b40();
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,auStack_80,1);
  func_0x000107c35144();
  func_0x00010b217af8();
  func_0x00010b217b78();
  return;
}



/* Entry: 10b217ab4; end: 10b217abb;  */

void FUN_10b217ab4(void)

{
  return;
}



/* Entry: 10b217abc; end: 10b217acf;  */

void FUN_10b217abc(void)

{
  func_0x000107c2bea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b217ad0; end: 10b217bcb;  */

undefined8 FUN_10b217ad0(void)

{
  return 0xffffffff;
}



/* Entry: 10b217bcc; end: 10b217ccf;  */

long * FUN_10b217bcc(long *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x10) == 0)) {
    plVar1 = (long *)0xffffff9a;
  }
  else {
    plVar1 = param_1;
    func_0x00010b21863c();
    if ((int)plVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
      func_0x00010b218698();
                    /* WARNING: Could not recover jumptable at 0x00010b218694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar1;
    }
    plVar1 = (long *)0xffffffff;
  }
  return plVar1;
}



/* Entry: 10b217cd0; end: 10b217d3f;  */

void FUN_10b217cd0(int param_1,undefined2 *param_2)

{
  undefined2 auStack_28 [4];
  
  *param_2 = 0;
  func_0x00010b217c24(param_1,auStack_28,2);
  if (param_1 == 0) {
    *param_2 = auStack_28[0];
  }
  return;
}



/* Entry: 10b217d40; end: 10b217d4f;  */

/* WARNING: Possible PIC construction at 0x00010b217cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b217cf4) */
/* WARNING: Removing unreachable block (ram,0x00010b217cf8) */
/* WARNING: Removing unreachable block (ram,0x00010b217d00) */
/* WARNING: Removing unreachable block (ram,0x00010b218674) */

void FUN_10b217d40(ulong param_1,long *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined2 *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 extraout_x8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined2 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  lVar9 = 8;
  while( true ) {
    lVar7 = lVar9;
    uVar4 = param_1;
    puVar6 = (undefined2 *)(puVar1 + -0x40);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined2 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    uVar10 = uVar4;
    plVar5 = param_2;
    func_0x00010b21864c();
    iVar3 = (int)uVar10;
    *(undefined8 *)(puVar1 + -0x38) = extraout_x8;
    *plVar5 = 0;
    FUN_10b217bcc();
    if (iVar3 == (int)lVar7) {
      lVar9 = *param_2;
      pbVar11 = puVar1 + -0x40;
      for (uVar10 = 0; bVar2 = lVar7 << 3 == uVar10, !bVar2; uVar10 = uVar10 + 8) {
        lVar9 = ((ulong)*pbVar11 << (uVar10 & 0x3f)) + lVar9;
        pbVar11 = pbVar11 + 1;
      }
      param_1 = 0;
      *param_2 = lVar9;
    }
    else {
      uVar10 = uVar4;
      FUN_10b21842c();
      bVar2 = (int)uVar10 == 0;
      uVar8 = 0xffffff9b;
      if (!bVar2) {
        uVar8 = 0xffffffff;
      }
      param_1 = (ulong)uVar8;
    }
    func_0x00010b218628(*(undefined8 *)(puVar1 + -0x38));
    if (bVar2) break;
    ___stack_chk_fail();
    *(long *)(puVar1 + -0x60) = lVar7;
    *(long **)(puVar1 + -0x58) = param_2;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x48) = FUN_10b217cd0;
    unaff_x29 = puVar1 + -0x50;
    *puVar6 = 0;
    param_2 = (long *)(puVar1 + -0x68);
    unaff_x30 = 0x10b217cf4;
    puVar1 = puVar1 + -0x70;
    lVar9 = 2;
    unaff_x19 = puVar6;
    unaff_x20 = lVar7;
    unaff_x21 = uVar4;
  }
  return;
}



/* Entry: 10b217d50; end: 10b217db3;  */

long * FUN_10b217d50(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_3 == 0) {
    plVar1 = (long *)0x0;
  }
  else if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x18) == 0)) {
    plVar1 = (long *)0xffffff9a;
  }
  else {
    plVar1 = param_1;
    func_0x00010b21863c();
    if ((int)plVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
      func_0x00010b218698();
                    /* WARNING: Could not recover jumptable at 0x00010b218694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar1;
    }
    plVar1 = (long *)0xffffffff;
  }
  return plVar1;
}



/* Entry: 10b217db4; end: 10b217dbf;  */

void FUN_10b217db4(ulong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  ulong extraout_x9;
  ulong uVar8;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)register0x00000008;
  uVar8 = 1;
  while( true ) {
    uVar6 = uVar8;
    iVar4 = (int)param_1;
    uVar5 = (ulong)param_2 & 0xffffffff;
    puVar2 = puVar1 + -0x30;
    param_2 = puVar1 + -0x30;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    uVar7 = uVar6;
    func_0x00010b21864c();
    *(undefined8 *)(puVar1 + -0x28) = extraout_x8;
    uVar7 = uVar7 & 0xffffffff;
    for (uVar8 = extraout_x9; uVar7 != uVar8; uVar8 = uVar8 + 1) {
      puVar1[uVar8 - 0x30] = (char)uVar5;
      uVar5 = uVar5 >> 8;
    }
    if (uVar5 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      }
    }
    FUN_10b217d50();
    bVar3 = iVar4 == (int)uVar6;
    param_1 = (ulong)-(uint)!bVar3;
    func_0x00010b218628(*(undefined8 *)(puVar1 + -0x28));
    if (bVar3) break;
    unaff_x30 = FUN_10b217e48;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x30;
    uVar8 = 2;
    unaff_x19 = uVar6;
  }
  return;
}



/* Entry: 10b217dc0; end: 10b217e47;  */

void FUN_10b217dc0(ulong param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong extraout_x9;
  ulong uVar7;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar5 = param_3;
    iVar3 = (int)param_1;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar6 = uVar5;
    func_0x00010b21864c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    uVar6 = uVar6 & 0xffffffff;
    for (uVar7 = extraout_x9; uVar6 != uVar7; uVar7 = uVar7 + 1) {
      *(char *)((long)register0x00000008 + (uVar7 - 0x30)) = (char)param_2;
      param_2 = param_2 >> 8;
    }
    if (param_2 != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar1 = 0xff;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_10b217d50();
    bVar2 = iVar3 == (int)uVar5;
    param_1 = (ulong)-(uint)!bVar2;
    func_0x00010b218628(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (bVar2) break;
    unaff_x30 = FUN_10b217e48;
    ___stack_chk_fail();
    param_2 = (ulong)puVar4 & 0xffffffff;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_3 = 2;
    unaff_x19 = uVar5;
  }
  return;
}



/* Entry: 10b217e48; end: 10b217e83;  */

void FUN_10b217e48(ulong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong extraout_x9;
  ulong uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    iVar3 = (int)param_1;
    uVar4 = (ulong)param_2 & 0xffffffff;
    uVar5 = 2;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
    param_2 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = 2;
    func_0x00010b21864c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    uVar5 = uVar5 & 0xffffffff;
    for (uVar6 = extraout_x9; uVar5 != uVar6; uVar6 = uVar6 + 1) {
      *(char *)((long)register0x00000008 + (uVar6 - 0x30)) = (char)uVar4;
      uVar4 = uVar4 >> 8;
    }
    if (uVar4 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = 0xff;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_10b217d50();
    bVar2 = iVar3 == 2;
    param_1 = (ulong)-(uint)!bVar2;
    func_0x00010b218628(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (bVar2) break;
    unaff_x30 = FUN_10b217e48;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  return;
}



/* Entry: 10b217e84; end: 10b217f6b;  */

long * FUN_10b217e84(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,ulong param_5
                    )

{
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_4058 [16384];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010b21864c();
  pcVar1 = FUN_10b217d50;
  if (param_2 != (code *)0x0) {
    pcVar1 = param_2;
  }
  uStack_58 = extraout_x8;
  pcVar2 = FUN_10b217bcc;
  if (param_4 != (code *)0x0) {
    pcVar2 = param_4;
  }
  do {
    uVar9 = (uint)param_5;
    bVar3 = uVar9 == 1;
    if ((int)uVar9 < 1) {
      plVar7 = (long *)0x0;
      goto LAB_10b217f3c;
    }
    uVar10 = uVar9;
    if (0x3fff < uVar9) {
      uVar10 = 0x4000;
    }
    uVar5 = param_3;
    (*pcVar2)(param_3,auStack_4058,uVar10);
    iVar4 = (int)uVar5;
    bVar3 = iVar4 == 1;
    if (iVar4 < 1) break;
    uVar6 = param_1;
    (*pcVar1)(param_1,auStack_4058,uVar5);
    param_5 = (ulong)(uVar9 - iVar4);
    bVar3 = false;
  } while ((int)uVar6 == iVar4);
  plVar7 = (long *)0xffffffff;
LAB_10b217f3c:
  func_0x00010b218628(uStack_58);
  if (bVar3) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (((plVar7 == (long *)0x0) || (*plVar7 == 0)) || (*(long *)(*plVar7 + 0x20) == 0)) {
    plVar7 = (long *)0xffffffffffffff9a;
  }
  else {
    plVar8 = plVar7;
    func_0x00010b217bac();
    if ((int)plVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b217fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x20))(plVar7);
      return plVar7;
    }
    plVar7 = (long *)0xffffffffffffffff;
  }
  return plVar7;
}



/* Entry: 10b217f6c; end: 10b217fcb;  */

long * FUN_10b217f6c(long *param_1)

{
  long *plVar1;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x20) == 0)) {
    plVar1 = (long *)0xffffffffffffff9a;
  }
  else {
    plVar1 = param_1;
    func_0x00010b217bac();
    if ((int)plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b217fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))(param_1);
      return param_1;
    }
    plVar1 = (long *)0xffffffffffffffff;
  }
  return plVar1;
}



/* Entry: 10b217fcc; end: 10b218033;  */

long * FUN_10b217fcc(long *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_w19;
  long unaff_x20;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x28) == 0)) {
    plVar1 = (long *)0xffffff9a;
  }
  else {
    plVar1 = param_1;
    func_0x00010b21863c();
    if ((int)plVar1 == 0) {
      if ((-1 < unaff_x20) || (unaff_w19 != 0)) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
        func_0x00010b218698();
                    /* WARNING: Could not recover jumptable at 0x00010b218694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return plVar1;
      }
      plVar1 = (long *)0xffffff8f;
    }
    else {
      plVar1 = (long *)0xffffffff;
    }
  }
  return plVar1;
}



/* Entry: 10b218034; end: 10b2183cf;  */

long * FUN_10b218034(long *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 extraout_x8;
  long lVar14;
  undefined8 extraout_x8_00;
  long *extraout_x9;
  long *unaff_x19;
  uint uVar15;
  ulong unaff_x20;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x22;
  long unaff_x23;
  uint uVar18;
  long *unaff_x24;
  long *unaff_x25;
  ulong uVar19;
  long *unaff_x26;
  long *unaff_x27;
  long lVar20;
  undefined8 unaff_x28;
  long lVar21;
  undefined1 auStack_910 [1024];
  undefined8 auStack_510 [2];
  undefined8 uStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  ulong uStack_4c0;
  long *plStack_4b8;
  undefined1 *puStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  uint uStack_494;
  long *plStack_490;
  long lStack_488;
  long *plStack_480;
  uint uStack_474;
  long alStack_470 [128];
  undefined8 uStack_70;
  
  func_0x00010b21864c();
  plVar7 = (long *)0xffffff9a;
  uVar11 = (uint)param_3;
  uVar3 = uVar11 == 0x3ff;
  lVar14 = param_2;
  uStack_70 = extraout_x8;
  if ((((uVar11 < 0x400) && (param_1 != (long *)0x0)) && (unaff_x23 = param_2, param_2 != 0)) &&
     (param_5 != (long *)0x0)) {
    *param_5 = -1;
    plVar8 = param_1;
    plVar9 = param_3;
    plVar12 = param_4;
    plStack_4a0 = param_5;
    FUN_10b217f6c();
    uStack_474 = 0;
    plVar7 = (long *)0x0;
    unaff_x28 = 0;
    lStack_488 = (long)plVar8 + -1;
    uVar16 = 0x400;
    unaff_x24 = (long *)((ulong)param_3 & 0xffffffff);
    unaff_x27 = param_3;
    uStack_494 = uVar11;
    plStack_490 = param_4;
    plStack_480 = param_1;
    while( true ) {
      param_4 = plVar12;
      param_3 = plVar9;
      uVar11 = uStack_474;
      param_1 = plStack_480;
      unaff_x22 = plStack_490;
      uVar3 = plVar7 == plStack_490;
      unaff_x19 = plVar7;
      unaff_x20 = uVar16;
      plVar8 = alStack_470;
      if ((long)plStack_490 <= (long)plVar7) break;
      unaff_x20 = (ulong)uStack_474;
      lVar14 = (long)plStack_490 - ((long)plVar7 + unaff_x20);
      uVar13 = (uint)lVar14;
      uVar15 = (uint)uVar16;
      uVar18 = uVar15;
      if ((int)uVar13 <= (int)uVar15) {
        uVar18 = uVar13;
      }
      if (0x3ff < lVar14) {
        uVar18 = uVar15;
      }
      unaff_x25 = (long *)(ulong)uVar18;
      lVar14 = (long)alStack_470 + unaff_x20;
      unaff_x26 = plStack_480;
      param_3 = unaff_x25;
      FUN_10b217bcc();
      iVar5 = (int)unaff_x26;
      uVar3 = iVar5 == 1;
      if (iVar5 < 1) break;
      uVar11 = iVar5 + uVar11;
      iVar2 = uVar11 - (int)unaff_x27;
      uVar3 = iVar2 == 0;
      plVar8 = unaff_x26;
      if ((int)uVar11 < (int)unaff_x27) break;
      unaff_x22 = (long *)(ulong)(iVar2 + 1);
      unaff_x20 = (ulong)uVar11 + 1;
      param_1 = (long *)(lStack_488 + (long)plVar7);
      unaff_x27 = alStack_470;
      while (unaff_x22 != (long *)0x0) {
        plVar9 = unaff_x27;
        param_3 = unaff_x24;
        _memcmp(unaff_x27,param_2);
        unaff_x19 = plStack_480;
        unaff_x20 = unaff_x20 - 1;
        param_1 = (long *)((long)param_1 + 1);
        unaff_x22 = (long *)((long)unaff_x22 + -1);
        unaff_x27 = (long *)((long)unaff_x27 + 1);
        if ((int)plVar9 == 0) {
          plVar7 = plStack_480;
          FUN_10b217f6c();
          lVar14 = (long)plVar7 - unaff_x20;
          plVar7 = unaff_x19;
          func_0x00010b2186d0();
          if ((int)plVar7 != 0) goto LAB_10b2181b8;
          *plStack_4a0 = (long)param_1;
          goto LAB_10b2181c8;
        }
      }
      bVar4 = (int)unaff_x28 == 0;
      unaff_x27 = (long *)(ulong)uStack_494;
      if (bVar4) {
        uStack_474 = uStack_494;
      }
      uVar11 = 0;
      if (bVar4) {
        uVar11 = uStack_494;
      }
      uVar16 = (ulong)(uVar18 - uVar11);
      lVar14 = (long)alStack_470 + (long)(int)(iVar5 - uVar11);
      plVar12 = (long *)0x400;
      plVar9 = unaff_x24;
      ___memmove_chk(alStack_470);
      plVar7 = (long *)((long)plVar7 + (long)(int)(iVar5 - uVar11));
      unaff_x28 = 1;
    }
LAB_10b2181b8:
    plVar7 = (long *)0xffffff95;
    unaff_x26 = plVar8;
  }
LAB_10b2181c8:
  func_0x00010b218628(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uStack_4a8 = 0x10b2181e4;
    uStack_500 = unaff_x28;
    plStack_4f8 = unaff_x27;
    plStack_4f0 = unaff_x26;
    plStack_4e8 = unaff_x25;
    plStack_4e0 = unaff_x24;
    lStack_4d8 = unaff_x23;
    plStack_4d0 = unaff_x22;
    plStack_4c8 = param_1;
    uStack_4c0 = unaff_x20;
    plStack_4b8 = unaff_x19;
    puStack_4b0 = &stack0xfffffffffffffff0;
    func_0x00010b21864c();
    plVar7 = (long *)0xffffff9a;
    uVar11 = (uint)param_3;
    uVar3 = uVar11 == 0x3ff;
    auStack_510[0] = extraout_x8_00;
    if (((uVar11 < 0x400) && (extraout_x9 != (long *)0x0)) &&
       ((lVar14 != 0 && (param_5 != (long *)0x0)))) {
      *param_5 = -1;
      plVar8 = extraout_x9;
      FUN_10b217f6c();
      uVar18 = 0;
      lVar20 = 0;
      bVar4 = false;
      uVar16 = (ulong)param_3 & 0xffffffff;
      lVar1 = (long)auStack_510 - ((ulong)param_3 & 0xffffffff);
      iVar5 = 0x400;
      while( true ) {
        lVar21 = (long)param_4 - lVar20;
        uVar3 = lVar21 == 0;
        if ((bool)uVar3 || (long)param_4 < lVar20) break;
        iVar2 = iVar5;
        if ((int)lVar21 <= iVar5) {
          iVar2 = (int)lVar21;
        }
        uVar3 = lVar21 == 0x400;
        if (0x3ff < lVar21) {
          iVar2 = iVar5;
        }
        plVar7 = extraout_x9;
        func_0x00010b2186d0(extraout_x9,(long)plVar8 - (lVar20 + iVar2));
        if ((int)plVar7 != 0) break;
        plVar7 = extraout_x9;
        FUN_10b217bcc(extraout_x9,auStack_910,iVar2);
        iVar6 = (int)plVar7;
        uVar3 = iVar6 == 1;
        if (iVar6 < 1) break;
        uVar13 = iVar6 + uVar18;
        uVar17 = (ulong)uVar13;
        uVar3 = uVar13 == uVar11;
        if ((int)uVar13 < (int)uVar11) break;
        uVar19 = uVar16;
        lVar21 = lVar1;
        if ((int)uVar13 < 0x400) {
          _memmove((long)auStack_510 - uVar17,auStack_910,(ulong)plVar7 & 0xffffffff);
        }
        for (; uVar3 = uVar19 == uVar17, uVar19 <= uVar17; uVar19 = uVar19 + 1) {
          lVar10 = lVar21;
          _memcmp(lVar21,lVar14,uVar16);
          if ((int)lVar10 == 0) {
            plVar9 = extraout_x9;
            FUN_10b217f6c(extraout_x9);
            plVar7 = extraout_x9;
            func_0x00010b2186d0(extraout_x9,(long)plVar9 + (uVar18 - uVar19));
            if ((int)plVar7 != 0) goto LAB_10b21838c;
            *param_5 = (long)plVar8 + (((ulong)uVar18 - lVar20) - uVar19);
            goto LAB_10b2183b4;
          }
          lVar21 = lVar21 + -1;
        }
        uVar13 = 0;
        if (!bVar4) {
          uVar13 = uVar11;
        }
        uVar3 = 1;
        if (iVar6 - uVar13 == 0) break;
        iVar5 = iVar2 - uVar13;
        if (!bVar4) {
          uVar18 = uVar11;
        }
        _memmove(auStack_910 + iVar5,auStack_910,uVar16);
        lVar20 = lVar20 + (int)(iVar6 - uVar13);
        bVar4 = true;
      }
LAB_10b21838c:
      plVar7 = (long *)0xffffff95;
    }
LAB_10b2183b4:
    func_0x00010b218628(auStack_510[0]);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      if (((plVar7 == (long *)0x0) || (*plVar7 == 0)) || (*(long *)(*plVar7 + 0x30) == 0)) {
        plVar7 = (long *)0xffffff9a;
      }
      else {
        plVar8 = plVar7;
        func_0x00010b217bac();
        if ((int)plVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b218428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x30))(plVar7);
          return plVar7;
        }
        plVar7 = (long *)0xffffffff;
      }
      return plVar7;
    }
  }
  return plVar7;
}



/* Entry: 10b2183d0; end: 10b21842b;  */

long * FUN_10b2183d0(long *param_1)

{
  long *plVar1;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x30) == 0)) {
    plVar1 = (long *)0xffffff9a;
  }
  else {
    plVar1 = param_1;
    func_0x00010b217bac();
    if ((int)plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b218428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x30))(param_1);
      return param_1;
    }
    plVar1 = (long *)0xffffffff;
  }
  return plVar1;
}



/* Entry: 10b21842c; end: 10b21847f;  */

long * FUN_10b21842c(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b218440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return (long *)0xffffff9a;
}



/* Entry: 10b218480; end: 10b2184c3;  */

void FUN_10b218480(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 != (long *)0x0) {
    if ((((long *)*param_1 != (long *)0x0) && (lVar1 = *(long *)*param_1, lVar1 != 0)) &&
       (pcVar2 = *(code **)(lVar1 + 0x48), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10b2184c4; end: 10b2184cf;  */

undefined8 FUN_10b2184c4(void)

{
  return 0;
}



/* Entry: 10b2184d0; end: 10b218547;  */

void FUN_10b2184d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_3;
  if (0 < *(long *)(param_1 + 0x20)) {
    lVar2 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x10);
    if ((int)param_3 <= lVar2) {
      lVar2 = (long)(int)param_3;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10b217bcc(uVar1,param_2,lVar2);
  if (0 < (int)uVar1) {
    func_0x00010b2186a8();
  }
  return;
}



/* Entry: 10b218548; end: 10b2185bb;  */

long * FUN_10b218548(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if (((plVar2 == (long *)0x0) || (*plVar2 == 0)) || (*(long *)(*plVar2 + 0x20) == 0)) {
    plVar2 = (long *)0xffffffffffffff9a;
  }
  else {
    plVar1 = plVar2;
    func_0x00010b217bac();
    if ((int)plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b217fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2);
      return plVar2;
    }
    plVar2 = (long *)0xffffffffffffffff;
  }
  return plVar2;
}



/* Entry: 10b2185bc; end: 10b218627;  */

void FUN_10b2185bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_11336c6e0;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 10b218628; end: 10b2186ff;  */

void FUN_10b218628(void)

{
  return;
}



/* Entry: 10b218700; end: 10b218763;  */

undefined8 FUN_10b218700(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = (ulong)param_2;
  _malloc();
  if (uVar1 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      _memcpy(uVar1,lVar3,(long)*(int *)(param_1 + 0x20));
      _free(lVar3);
    }
    uVar2 = 0;
    *(ulong *)(param_1 + 0x18) = uVar1;
    *(uint *)(param_1 + 0x20) = param_2;
  }
  return uVar2;
}



/* Entry: 10b218764; end: 10b218777;  */

undefined4 FUN_10b218764(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffff91;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b218778; end: 10b2187f3;  */

int FUN_10b218778(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x20) - iVar1;
  if (iVar2 <= param_3) {
    param_3 = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x24) - iVar1;
  if (param_3 + iVar1 <= *(int *)(param_1 + 0x24)) {
    iVar2 = param_3;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    _memcpy(param_2,*(long *)(param_1 + 0x18) + (long)iVar1,iVar2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar2;
  }
  return iVar2;
}



/* Entry: 10b2187f4; end: 10b218897;  */

ulong FUN_10b2187f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar2 = (int)param_3;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x28);
    uVar1 = *(int *)(param_1 + 0x20) - iVar3;
    uVar4 = param_3;
    if (((int)uVar1 < iVar2) && (uVar4 = (ulong)uVar1, (*(byte *)(param_1 + 0x10) >> 3 & 1) != 0)) {
      if (iVar2 <= *(int *)(param_1 + 0x2c)) {
        iVar2 = *(int *)(param_1 + 0x2c);
      }
      uVar4 = param_1;
      FUN_10b218700(param_1,iVar2 + *(int *)(param_1 + 0x20));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar3 = *(int *)(param_1 + 0x28);
      uVar4 = param_3;
    }
    _memcpy(*(long *)(param_1 + 0x18) + (long)iVar3,param_2,(long)(int)uVar4);
    iVar2 = *(int *)(param_1 + 0x28) + (int)uVar4;
    *(int *)(param_1 + 0x28) = iVar2;
    if (*(int *)(param_1 + 0x24) < iVar2) {
      *(int *)(param_1 + 0x24) = iVar2;
    }
  }
  return uVar4;
}



/* Entry: 10b218898; end: 10b21889f;  */

long FUN_10b218898(long param_1)

{
  return (long)*(int *)(param_1 + 0x28);
}


